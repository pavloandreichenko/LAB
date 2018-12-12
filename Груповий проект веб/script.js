addEventListener("storage", update, false);

var productsInfo = {
    "books": [
        {
            "bookCode": 1,
            "authorCode": 1,
            "genreCode": 1,
            "title": "The Hungry Games",
            "price": 100,
            "picture": "link1",
            "soldAmount": 0 
        },
        {
            "bookCode": 2,
            "authorCode": 2,
            "genreCode": 2,
            "title": "Diary of Bridget Jones",
            "price": 75,
            "picture": "link2",
            "soldAmount": 0 
        }
    ],
    "authors": [
    {
        "authorCode": 1,
        "name": "Susan Collins"
    },
    {
        "authorCode": 2,
        "name": "Helen Fielding"
    }
    ],
    "genres": [
    {
        "genreCode": 1,
        "title": "Adventure"
    },
    {
        "genreCode": 2,
        "title": "Detective"
    },
    {
        "genreCode": 1,
        "title": "Horror"
    }
    ],
    "receipts": [
    {
        "bookCode": 1,
        "amount": 11,
        "date": '01/01/2018'
    },
        {
            "bookCode": 2,
            "amount": 11,
            "date": '01/01/2018'
        }
    ] 
}

if (localStorage.getItem('books') === null) {
    localStorage.setItem('books', JSON.stringify(productsInfo));
}

var store = JSON.parse(localStorage.getItem('books'));

function update(e) {
    store = JSON.parse(e.newValue);
    clear();
    show();
}

function show() {

    for(var i = 0; i < store.books.length; i++) {
        $(".books").append(`
            <tr>
                <td>`+ store.books[i].title +`</td>
                <td>`+ getGenre(store.books[i].genreCode) +`</td>
                <td>`+ getAuthor(store.books[i].authorCode) +`</td>
                <td>`+ getReceiptInfo(store.books[i].bookCode).date +`</td>
                <td>`+ store.books[i].price +`</td>
                <td>`+ store.books[i].soldAmount +`</td>
                <td>`+ store.receipts[i].amount +`</td>
                <td><a href="product_page.html?id=`+ store.books[i].bookCode +`" target="blank"><button class="btn btn-primary">Sell</button></a></td>
            </tr>
        `)
    }
}

function clear() {
    $(".books").html(`
        <tr>
            <th>Title</th>
            <th>Genre</th>
            <th>Author</th>
            <th>Date</th>
            <th>Price</th>
            <th>Sold books amount</th>
            <th>Books amount</th>
        </tr>`);
}

function getGenre(id) {
    for(var i = 0; i < store.genres.length; i++) {
        if (store.genres[i].genreCode == id) {
            return store.genres[i].title;
        }
    }
    return "—"
}

function getAuthor(id) {
    for(var i = 0; i < store.authors.length; i++) {
        if (store.authors[i].authorCode == id) {
            return store.authors[i].name;
        }
    }
    return "—"
}

function getReceiptInfo(id) {
    for(var i = 0; i < store.receipts.length; i++) {
        if (store.receipts[i].bookCode == id) {
            return store.receipts[i];
        }
    }
    return "—"
}

show();

