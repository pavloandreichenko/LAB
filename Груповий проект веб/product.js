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

var url = new URL(window.location.href);
var id = url.searchParams.get('id');
var storage = JSON.parse(localStorage.getItem('books'));

function sell() {

    for(var i = 0; i < storage.receipts.length; i++) {
        if (storage.receipts[i].bookCode == id) {
            if (storage.receipts[i].amount > 0) {
                storage.receipts[i].amount--;
                storage.books[i].soldAmount++;
                localStorage.setItem("books", JSON.stringify(storage));
                $('.booksAmount').text(parseInt($('.booksAmount').text()) - 1);
                $('.soldBooksAmount').text(parseInt($('.soldBooksAmount').text()) + 1);
            } else {
                alert("All books are already sold.");
            }
            break;
        }
    }
}

function update(e) {
    storage = JSON.parse(e.newValue);
    clear();
    show();
}

function show(id) {

    for(var i = 0; i < storage.books.length; i++) {
        if (storage.books[i].bookCode == id) {
            $(".books").append(`
                <tr>
                    <td>`+ storage.books[i].title +`</td>
                    <td>`+ getGenre(storage.books[i].genreCode) +`</td>
                    <td>`+ getAuthor(storage.books[i].authorCode) +`</td>
                    <td>`+ getReceiptInfo(storage.books[i].bookCode).date +`</td>
                    <td>`+ storage.books[i].price +`</td>
                    <td class="soldBooksAmount">`+ storage.books[i].soldAmount +`</td>
                    <td class="booksAmount">`+ storage.receipts[i].amount +`</td>
                    <td><button class="btn btn-primary" onclick="sell()">Sell</button></td>
                </tr>
            `)
            break;
        }
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
    for(var i = 0; i < storage.genres.length; i++) {
        if (storage.genres[i].genreCode == id) {
            return storage.genres[i].title;
        }
    }
    return "—"
}

function getAuthor(id) {
    for(var i = 0; i < storage.authors.length; i++) {
        if (storage.authors[i].authorCode == id) {
            return storage.authors[i].name;
        }
    }
    return "—"
}

function getReceiptInfo(id) {
    for(var i = 0; i < storage.receipts.length; i++) {
        if (storage.receipts[i].bookCode == id) {
            return storage.receipts[i];
        }
    }
    return "—"
}

show(id);