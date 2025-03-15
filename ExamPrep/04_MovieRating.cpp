#include <iostream>
#include <iomanip>
#include <float.h>

using namespace std;

int main() {
    int moviesCount;
    cin >> moviesCount;
    cin.ignore();

    string maxRatedMovieName;
    string minRatedMovieName;

    double maxRatedMovieRating = DBL_MIN;
    double minRatedMovieRating = DBL_MAX;
    double ratingSum = 0;

    string movieName;
    double movieRating;

    for (int movie = 0; movie < moviesCount; movie++) {
        getline(cin, movieName);
        cin >> movieRating;
        cin.ignore();

        if (movieRating < minRatedMovieRating) {
            minRatedMovieName = movieName;
            minRatedMovieRating = movieRating;
        }

        if (movieRating > maxRatedMovieRating) {
            maxRatedMovieName = movieName;
            maxRatedMovieRating = movieRating;
        }

        ratingSum += movieRating;
    }

    cout.setf(ios::fixed);
    cout.precision(1);
    cout << maxRatedMovieName << " is with highest rating: " << maxRatedMovieRating << endl;
    cout << minRatedMovieName << " is with lowest rating: " << minRatedMovieRating << endl;
    cout << "Average rating: " << ratingSum / moviesCount << endl;

    return 0;
}
