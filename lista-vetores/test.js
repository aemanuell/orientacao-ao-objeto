const main = (params) => {
    const fat = [1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880];
    let res = 500000;

    for (let j = 0; j < fat.length; j++) {
        res = res - fat[j];
    }

    console.log(res);
}

main();