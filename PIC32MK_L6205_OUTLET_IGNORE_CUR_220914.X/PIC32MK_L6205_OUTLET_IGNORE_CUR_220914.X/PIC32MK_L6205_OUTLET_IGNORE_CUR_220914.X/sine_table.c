#include "sine_table.h"



const int SIN_T1000[3600] = {
0,1,3,5,6,8,10,12,13,15,
17,19,20,22,24,26,27,29,31,33,
34,36,38,40,41,43,45,47,48,50,
52,54,55,57,59,61,62,64,66,68,
69,71,73,74,76,78,80,81,83,85,
87,88,90,92,94,95,97,99,101,102,
104,106,107,109,111,113,114,116,118,120,
121,123,125,127,128,130,132,133,135,137,
139,140,142,144,146,147,149,151,152,154,
156,158,159,161,163,165,166,168,170,171,
173,175,177,178,180,182,183,185,187,189,
190,192,194,195,197,199,201,202,204,206,
207,209,211,213,214,216,218,219,221,223,
224,226,228,230,231,233,235,236,238,240,
241,243,245,246,248,250,252,253,255,257,
258,260,262,263,265,267,268,270,272,273,
275,277,278,280,282,284,285,287,289,290,
292,294,295,297,299,300,302,304,305,307,
309,310,312,313,315,317,318,320,322,323,
325,327,328,330,332,333,335,337,338,340,
342,343,345,346,348,350,351,353,355,356,
358,359,361,363,364,366,368,369,371,372,
374,376,377,379,381,382,384,385,387,389,
390,392,393,395,397,398,400,401,403,405,
406,408,409,411,413,414,416,417,419,421,
422,424,425,427,428,430,432,433,435,436,
438,439,441,443,444,446,447,449,450,452,
453,455,457,458,460,461,463,464,466,467,
469,471,472,474,475,477,478,480,481,483,
484,486,487,489,490,492,493,495,496,498,
500,501,503,504,506,507,509,510,512,513,
515,516,518,519,521,522,523,525,526,528,
529,531,532,534,535,537,538,540,541,543,
544,546,547,549,550,551,553,554,556,557,
559,560,562,563,564,566,567,569,570,572,
573,575,576,577,579,580,582,583,584,586,
587,589,590,592,593,594,596,597,599,600,
601,603,604,605,607,608,610,611,612,614,
615,617,618,619,621,622,623,625,626,627,
629,630,632,633,634,636,637,638,640,641,
642,644,645,646,648,649,650,652,653,654,
656,657,658,660,661,662,663,665,666,667,
669,670,671,673,674,675,676,678,679,680,
681,683,684,685,687,688,689,690,692,693,
694,695,697,698,699,700,702,703,704,705,
707,708,709,710,712,713,714,715,716,718,
719,720,721,722,724,725,726,727,728,730,
731,732,733,734,736,737,738,739,740,741,
743,744,745,746,747,748,750,751,752,753,
754,755,756,758,759,760,761,762,763,764,
766,767,768,769,770,771,772,773,774,776,
777,778,779,780,781,782,783,784,785,786,
788,789,790,791,792,793,794,795,796,797,
798,799,800,801,802,803,804,805,806,807,
809,810,811,812,813,814,815,816,817,818,
819,820,821,822,823,824,825,826,827,828,
829,830,830,831,832,833,834,835,836,837,
838,839,840,841,842,843,844,845,846,847,
848,848,849,850,851,852,853,854,855,856,
857,858,858,859,860,861,862,863,864,865,
866,866,867,868,869,870,871,872,872,873,
874,875,876,877,877,878,879,880,881,882,
882,883,884,885,886,887,887,888,889,890,
891,891,892,893,894,894,895,896,897,898,
898,899,900,901,901,902,903,904,904,905,
906,907,907,908,909,909,910,911,912,912,
913,914,914,915,916,917,917,918,919,919,
920,921,921,922,923,923,924,925,925,926,
927,927,928,929,929,930,931,931,932,932,
933,934,934,935,936,936,937,937,938,939,
939,940,940,941,942,942,943,943,944,944,
945,946,946,947,947,948,948,949,949,950,
951,951,952,952,953,953,954,954,955,955,
956,956,957,957,958,958,959,959,960,960,
961,961,962,962,963,963,964,964,965,965,
965,966,966,967,967,968,968,969,969,969,
970,970,971,971,971,972,972,973,973,973,
974,974,975,975,975,976,976,977,977,977,
978,978,978,979,979,979,980,980,980,981,
981,981,982,982,982,983,983,983,984,984,
984,985,985,985,985,986,986,986,987,987,
987,987,988,988,988,989,989,989,989,990,
990,990,990,990,991,991,991,991,992,992,
992,992,992,993,993,993,993,993,994,994,
994,994,994,995,995,995,995,995,995,996,
996,996,996,996,996,996,997,997,997,997,
997,997,997,997,998,998,998,998,998,998,
998,998,998,998,998,999,999,999,999,999,
999,999,999,999,999,999,999,999,999,999,
999,999,999,999,999,999,999,999,999,999,
1000,999,999,999,999,999,999,999,999,999,
999,999,999,999,999,999,999,999,999,999,
999,999,999,999,999,999,998,998,998,998,
998,998,998,998,998,998,998,997,997,997,
997,997,997,997,997,996,996,996,996,996,
996,996,995,995,995,995,995,995,994,994,
994,994,994,993,993,993,993,993,992,992,
992,992,992,991,991,991,991,990,990,990,
990,990,989,989,989,989,988,988,988,987,
987,987,987,986,986,986,985,985,985,985,
984,984,984,983,983,983,982,982,982,981,
981,981,980,980,980,979,979,979,978,978,
978,977,977,977,976,976,975,975,975,974,
974,973,973,973,972,972,971,971,971,970,
970,969,969,969,968,968,967,967,966,966,
965,965,965,964,964,963,963,962,962,961,
961,960,960,959,959,958,958,957,957,956,
956,955,955,954,954,953,953,952,952,951,
951,950,949,949,948,948,947,947,946,946,
945,944,944,943,943,942,942,941,940,940,
939,939,938,937,937,936,936,935,934,934,
933,932,932,931,931,930,929,929,928,927,
927,926,925,925,924,923,923,922,921,921,
920,919,919,918,917,917,916,915,914,914,
913,912,912,911,910,909,909,908,907,907,
906,905,904,904,903,902,901,901,900,899,
898,898,897,896,895,894,894,893,892,891,
891,890,889,888,887,887,886,885,884,883,
882,882,881,880,879,878,877,877,876,875,
874,873,872,872,871,870,869,868,867,866,
866,865,864,863,862,861,860,859,858,858,
857,856,855,854,853,852,851,850,849,848,
848,847,846,845,844,843,842,841,840,839,
838,837,836,835,834,833,832,831,830,830,
829,828,827,826,825,824,823,822,821,820,
819,818,817,816,815,814,813,812,811,810,
809,807,806,805,804,803,802,801,800,799,
798,797,796,795,794,793,792,791,790,789,
788,786,785,784,783,782,781,780,779,778,
777,776,774,773,772,771,770,769,768,767,
766,764,763,762,761,760,759,758,756,755,
754,753,752,751,750,748,747,746,745,744,
743,741,740,739,738,737,736,734,733,732,
731,730,728,727,726,725,724,722,721,720,
719,718,716,715,714,713,712,710,709,708,
707,705,704,703,702,700,699,698,697,695,
694,693,692,690,689,688,687,685,684,683,
681,680,679,678,676,675,674,673,671,670,
669,667,666,665,663,662,661,660,658,657,
656,654,653,652,650,649,648,646,645,644,
642,641,640,638,637,636,634,633,632,630,
629,627,626,625,623,622,621,619,618,617,
615,614,612,611,610,608,607,605,604,603,
601,600,599,597,596,594,593,592,590,589,
587,586,584,583,582,580,579,577,576,575,
573,572,570,569,567,566,564,563,562,560,
559,557,556,554,553,551,550,549,547,546,
544,543,541,540,538,537,535,534,532,531,
529,528,526,525,523,522,521,519,518,516,
515,513,512,510,509,507,506,504,503,501,
499,498,496,495,493,492,490,489,487,486,
484,483,481,480,478,477,475,474,472,471,
469,467,466,464,463,461,460,458,457,455,
453,452,450,449,447,446,444,443,441,439,
438,436,435,433,432,430,428,427,425,424,
422,421,419,417,416,414,413,411,409,408,
406,405,403,401,400,398,397,395,393,392,
390,389,387,385,384,382,381,379,377,376,
374,372,371,369,368,366,364,363,361,359,
358,356,355,353,351,350,348,346,345,343,
342,340,338,337,335,333,332,330,328,327,
325,323,322,320,318,317,315,313,312,310,
309,307,305,304,302,300,299,297,295,294,
292,290,289,287,285,284,282,280,278,277,
275,273,272,270,268,267,265,263,262,260,
258,257,255,253,252,250,248,246,245,243,
241,240,238,236,235,233,231,230,228,226,
224,223,221,219,218,216,214,213,211,209,
207,206,204,202,201,199,197,195,194,192,
190,189,187,185,183,182,180,178,177,175,
173,171,170,168,166,165,163,161,159,158,
156,154,152,151,149,147,146,144,142,140,
139,137,135,133,132,130,128,127,125,123,
121,120,118,116,114,113,111,109,107,106,
104,102,101,99,97,95,94,92,90,88,
87,85,83,81,80,78,76,74,73,71,
69,68,66,64,62,61,59,57,55,54,
52,50,48,47,45,43,41,40,38,36,
34,33,31,29,27,26,24,22,20,19,
17,15,13,12,10,8,6,5,3,1,
0,-1,-3,-5,-6,-8,-10,-12,-13,-15,
-17,-19,-20,-22,-24,-26,-27,-29,-31,-33,
-34,-36,-38,-40,-41,-43,-45,-47,-48,-50,
-52,-54,-55,-57,-59,-61,-62,-64,-66,-68,
-69,-71,-73,-74,-76,-78,-80,-81,-83,-85,
-87,-88,-90,-92,-94,-95,-97,-99,-101,-102,
-104,-106,-107,-109,-111,-113,-114,-116,-118,-120,
-121,-123,-125,-127,-128,-130,-132,-133,-135,-137,
-139,-140,-142,-144,-146,-147,-149,-151,-152,-154,
-156,-158,-159,-161,-163,-165,-166,-168,-170,-171,
-173,-175,-177,-178,-180,-182,-183,-185,-187,-189,
-190,-192,-194,-195,-197,-199,-201,-202,-204,-206,
-207,-209,-211,-213,-214,-216,-218,-219,-221,-223,
-224,-226,-228,-230,-231,-233,-235,-236,-238,-240,
-241,-243,-245,-246,-248,-250,-252,-253,-255,-257,
-258,-260,-262,-263,-265,-267,-268,-270,-272,-273,
-275,-277,-278,-280,-282,-284,-285,-287,-289,-290,
-292,-294,-295,-297,-299,-300,-302,-304,-305,-307,
-309,-310,-312,-313,-315,-317,-318,-320,-322,-323,
-325,-327,-328,-330,-332,-333,-335,-337,-338,-340,
-342,-343,-345,-346,-348,-350,-351,-353,-355,-356,
-358,-359,-361,-363,-364,-366,-368,-369,-371,-372,
-374,-376,-377,-379,-381,-382,-384,-385,-387,-389,
-390,-392,-393,-395,-397,-398,-400,-401,-403,-405,
-406,-408,-409,-411,-413,-414,-416,-417,-419,-421,
-422,-424,-425,-427,-428,-430,-432,-433,-435,-436,
-438,-439,-441,-443,-444,-446,-447,-449,-450,-452,
-453,-455,-457,-458,-460,-461,-463,-464,-466,-467,
-469,-471,-472,-474,-475,-477,-478,-480,-481,-483,
-484,-486,-487,-489,-490,-492,-493,-495,-496,-498,
-500,-501,-503,-504,-506,-507,-509,-510,-512,-513,
-515,-516,-518,-519,-521,-522,-523,-525,-526,-528,
-529,-531,-532,-534,-535,-537,-538,-540,-541,-543,
-544,-546,-547,-549,-550,-551,-553,-554,-556,-557,
-559,-560,-562,-563,-564,-566,-567,-569,-570,-572,
-573,-575,-576,-577,-579,-580,-582,-583,-584,-586,
-587,-589,-590,-592,-593,-594,-596,-597,-599,-600,
-601,-603,-604,-605,-607,-608,-610,-611,-612,-614,
-615,-617,-618,-619,-621,-622,-623,-625,-626,-627,
-629,-630,-632,-633,-634,-636,-637,-638,-640,-641,
-642,-644,-645,-646,-648,-649,-650,-652,-653,-654,
-656,-657,-658,-660,-661,-662,-663,-665,-666,-667,
-669,-670,-671,-673,-674,-675,-676,-678,-679,-680,
-681,-683,-684,-685,-687,-688,-689,-690,-692,-693,
-694,-695,-697,-698,-699,-700,-702,-703,-704,-705,
-707,-708,-709,-710,-712,-713,-714,-715,-716,-718,
-719,-720,-721,-722,-724,-725,-726,-727,-728,-730,
-731,-732,-733,-734,-736,-737,-738,-739,-740,-741,
-743,-744,-745,-746,-747,-748,-750,-751,-752,-753,
-754,-755,-756,-758,-759,-760,-761,-762,-763,-764,
-766,-767,-768,-769,-770,-771,-772,-773,-774,-776,
-777,-778,-779,-780,-781,-782,-783,-784,-785,-786,
-788,-789,-790,-791,-792,-793,-794,-795,-796,-797,
-798,-799,-800,-801,-802,-803,-804,-805,-806,-807,
-809,-810,-811,-812,-813,-814,-815,-816,-817,-818,
-819,-820,-821,-822,-823,-824,-825,-826,-827,-828,
-829,-830,-830,-831,-832,-833,-834,-835,-836,-837,
-838,-839,-840,-841,-842,-843,-844,-845,-846,-847,
-848,-848,-849,-850,-851,-852,-853,-854,-855,-856,
-857,-858,-858,-859,-860,-861,-862,-863,-864,-865,
-866,-866,-867,-868,-869,-870,-871,-872,-872,-873,
-874,-875,-876,-877,-877,-878,-879,-880,-881,-882,
-882,-883,-884,-885,-886,-887,-887,-888,-889,-890,
-891,-891,-892,-893,-894,-894,-895,-896,-897,-898,
-898,-899,-900,-901,-901,-902,-903,-904,-904,-905,
-906,-907,-907,-908,-909,-909,-910,-911,-912,-912,
-913,-914,-914,-915,-916,-917,-917,-918,-919,-919,
-920,-921,-921,-922,-923,-923,-924,-925,-925,-926,
-927,-927,-928,-929,-929,-930,-931,-931,-932,-932,
-933,-934,-934,-935,-936,-936,-937,-937,-938,-939,
-939,-940,-940,-941,-942,-942,-943,-943,-944,-944,
-945,-946,-946,-947,-947,-948,-948,-949,-949,-950,
-951,-951,-952,-952,-953,-953,-954,-954,-955,-955,
-956,-956,-957,-957,-958,-958,-959,-959,-960,-960,
-961,-961,-962,-962,-963,-963,-964,-964,-965,-965,
-965,-966,-966,-967,-967,-968,-968,-969,-969,-969,
-970,-970,-971,-971,-971,-972,-972,-973,-973,-973,
-974,-974,-975,-975,-975,-976,-976,-977,-977,-977,
-978,-978,-978,-979,-979,-979,-980,-980,-980,-981,
-981,-981,-982,-982,-982,-983,-983,-983,-984,-984,
-984,-985,-985,-985,-985,-986,-986,-986,-987,-987,
-987,-987,-988,-988,-988,-989,-989,-989,-989,-990,
-990,-990,-990,-990,-991,-991,-991,-991,-992,-992,
-992,-992,-992,-993,-993,-993,-993,-993,-994,-994,
-994,-994,-994,-995,-995,-995,-995,-995,-995,-996,
-996,-996,-996,-996,-996,-996,-997,-997,-997,-997,
-997,-997,-997,-997,-998,-998,-998,-998,-998,-998,
-998,-998,-998,-998,-998,-999,-999,-999,-999,-999,
-999,-999,-999,-999,-999,-999,-999,-999,-999,-999,
-999,-999,-999,-999,-999,-999,-999,-999,-999,-999,
-1000,-999,-999,-999,-999,-999,-999,-999,-999,-999,
-999,-999,-999,-999,-999,-999,-999,-999,-999,-999,
-999,-999,-999,-999,-999,-999,-998,-998,-998,-998,
-998,-998,-998,-998,-998,-998,-998,-997,-997,-997,
-997,-997,-997,-997,-997,-996,-996,-996,-996,-996,
-996,-996,-995,-995,-995,-995,-995,-995,-994,-994,
-994,-994,-994,-993,-993,-993,-993,-993,-992,-992,
-992,-992,-992,-991,-991,-991,-991,-990,-990,-990,
-990,-990,-989,-989,-989,-989,-988,-988,-988,-987,
-987,-987,-987,-986,-986,-986,-985,-985,-985,-985,
-984,-984,-984,-983,-983,-983,-982,-982,-982,-981,
-981,-981,-980,-980,-980,-979,-979,-979,-978,-978,
-978,-977,-977,-977,-976,-976,-975,-975,-975,-974,
-974,-973,-973,-973,-972,-972,-971,-971,-971,-970,
-970,-969,-969,-969,-968,-968,-967,-967,-966,-966,
-965,-965,-965,-964,-964,-963,-963,-962,-962,-961,
-961,-960,-960,-959,-959,-958,-958,-957,-957,-956,
-956,-955,-955,-954,-954,-953,-953,-952,-952,-951,
-951,-950,-949,-949,-948,-948,-947,-947,-946,-946,
-945,-944,-944,-943,-943,-942,-942,-941,-940,-940,
-939,-939,-938,-937,-937,-936,-936,-935,-934,-934,
-933,-932,-932,-931,-931,-930,-929,-929,-928,-927,
-927,-926,-925,-925,-924,-923,-923,-922,-921,-921,
-920,-919,-919,-918,-917,-917,-916,-915,-914,-914,
-913,-912,-912,-911,-910,-909,-909,-908,-907,-907,
-906,-905,-904,-904,-903,-902,-901,-901,-900,-899,
-898,-898,-897,-896,-895,-894,-894,-893,-892,-891,
-891,-890,-889,-888,-887,-887,-886,-885,-884,-883,
-882,-882,-881,-880,-879,-878,-877,-877,-876,-875,
-874,-873,-872,-872,-871,-870,-869,-868,-867,-866,
-866,-865,-864,-863,-862,-861,-860,-859,-858,-858,
-857,-856,-855,-854,-853,-852,-851,-850,-849,-848,
-848,-847,-846,-845,-844,-843,-842,-841,-840,-839,
-838,-837,-836,-835,-834,-833,-832,-831,-830,-830,
-829,-828,-827,-826,-825,-824,-823,-822,-821,-820,
-819,-818,-817,-816,-815,-814,-813,-812,-811,-810,
-809,-807,-806,-805,-804,-803,-802,-801,-800,-799,
-798,-797,-796,-795,-794,-793,-792,-791,-790,-789,
-788,-786,-785,-784,-783,-782,-781,-780,-779,-778,
-777,-776,-774,-773,-772,-771,-770,-769,-768,-767,
-766,-764,-763,-762,-761,-760,-759,-758,-756,-755,
-754,-753,-752,-751,-750,-748,-747,-746,-745,-744,
-743,-741,-740,-739,-738,-737,-736,-734,-733,-732,
-731,-730,-728,-727,-726,-725,-724,-722,-721,-720,
-719,-718,-716,-715,-714,-713,-712,-710,-709,-708,
-707,-705,-704,-703,-702,-700,-699,-698,-697,-695,
-694,-693,-692,-690,-689,-688,-687,-685,-684,-683,
-681,-680,-679,-678,-676,-675,-674,-673,-671,-670,
-669,-667,-666,-665,-663,-662,-661,-660,-658,-657,
-656,-654,-653,-652,-650,-649,-648,-646,-645,-644,
-642,-641,-640,-638,-637,-636,-634,-633,-632,-630,
-629,-627,-626,-625,-623,-622,-621,-619,-618,-617,
-615,-614,-612,-611,-610,-608,-607,-605,-604,-603,
-601,-600,-599,-597,-596,-594,-593,-592,-590,-589,
-587,-586,-584,-583,-582,-580,-579,-577,-576,-575,
-573,-572,-570,-569,-567,-566,-564,-563,-562,-560,
-559,-557,-556,-554,-553,-551,-550,-549,-547,-546,
-544,-543,-541,-540,-538,-537,-535,-534,-532,-531,
-529,-528,-526,-525,-523,-522,-521,-519,-518,-516,
-515,-513,-512,-510,-509,-507,-506,-504,-503,-501,
-499,-498,-496,-495,-493,-492,-490,-489,-487,-486,
-484,-483,-481,-480,-478,-477,-475,-474,-472,-471,
-469,-467,-466,-464,-463,-461,-460,-458,-457,-455,
-453,-452,-450,-449,-447,-446,-444,-443,-441,-439,
-438,-436,-435,-433,-432,-430,-428,-427,-425,-424,
-422,-421,-419,-417,-416,-414,-413,-411,-409,-408,
-406,-405,-403,-401,-400,-398,-397,-395,-393,-392,
-390,-389,-387,-385,-384,-382,-381,-379,-377,-376,
-374,-372,-371,-369,-368,-366,-364,-363,-361,-359,
-358,-356,-355,-353,-351,-350,-348,-346,-345,-343,
-342,-340,-338,-337,-335,-333,-332,-330,-328,-327,
-325,-323,-322,-320,-318,-317,-315,-313,-312,-310,
-309,-307,-305,-304,-302,-300,-299,-297,-295,-294,
-292,-290,-289,-287,-285,-284,-282,-280,-278,-277,
-275,-273,-272,-270,-268,-267,-265,-263,-262,-260,
-258,-257,-255,-253,-252,-250,-248,-246,-245,-243,
-241,-240,-238,-236,-235,-233,-231,-230,-228,-226,
-224,-223,-221,-219,-218,-216,-214,-213,-211,-209,
-207,-206,-204,-202,-201,-199,-197,-195,-194,-192,
-190,-189,-187,-185,-183,-182,-180,-178,-177,-175,
-173,-171,-170,-168,-166,-165,-163,-161,-159,-158,
-156,-154,-152,-151,-149,-147,-146,-144,-142,-140,
-139,-137,-135,-133,-132,-130,-128,-127,-125,-123,
-121,-120,-118,-116,-114,-113,-111,-109,-107,-106,
-104,-102,-101,-99,-97,-95,-94,-92,-90,-88,
-87,-85,-83,-81,-80,-78,-76,-74,-73,-71,
-69,-68,-66,-64,-62,-61,-59,-57,-55,-54,
-52,-50,-48,-47,-45,-43,-41,-40,-38,-36,
-34,-33,-31,-29,-27,-26,-24,-22,-20,-19,
-17,-15,-13,-12,-10,-8,-6,-5,-3,-1
};
const int COS_T1000[3600] = {
1000,999,999,999,999,999,999,999,999,999,
999,999,999,999,999,999,999,999,999,999,
999,999,999,999,999,999,998,998,998,998,
998,998,998,998,998,998,998,997,997,997,
997,997,997,997,997,996,996,996,996,996,
996,996,995,995,995,995,995,995,994,994,
994,994,994,993,993,993,993,993,992,992,
992,992,992,991,991,991,991,990,990,990,
990,990,989,989,989,989,988,988,988,987,
987,987,987,986,986,986,985,985,985,985,
984,984,984,983,983,983,982,982,982,981,
981,981,980,980,980,979,979,979,978,978,
978,977,977,977,976,976,975,975,975,974,
974,973,973,973,972,972,971,971,971,970,
970,969,969,969,968,968,967,967,966,966,
965,965,965,964,964,963,963,962,962,961,
961,960,960,959,959,958,958,957,957,956,
956,955,955,954,954,953,953,952,952,951,
951,950,949,949,948,948,947,947,946,946,
945,944,944,943,943,942,942,941,940,940,
939,939,938,937,937,936,936,935,934,934,
933,932,932,931,931,930,929,929,928,927,
927,926,925,925,924,923,923,922,921,921,
920,919,919,918,917,917,916,915,914,914,
913,912,912,911,910,909,909,908,907,907,
906,905,904,904,903,902,901,901,900,899,
898,898,897,896,895,894,894,893,892,891,
891,890,889,888,887,887,886,885,884,883,
882,882,881,880,879,878,877,877,876,875,
874,873,872,872,871,870,869,868,867,866,
866,865,864,863,862,861,860,859,858,858,
857,856,855,854,853,852,851,850,849,848,
848,847,846,845,844,843,842,841,840,839,
838,837,836,835,834,833,832,831,830,830,
829,828,827,826,825,824,823,822,821,820,
819,818,817,816,815,814,813,812,811,810,
809,807,806,805,804,803,802,801,800,799,
798,797,796,795,794,793,792,791,790,789,
788,786,785,784,783,782,781,780,779,778,
777,776,774,773,772,771,770,769,768,767,
766,764,763,762,761,760,759,758,756,755,
754,753,752,751,750,748,747,746,745,744,
743,741,740,739,738,737,736,734,733,732,
731,730,728,727,726,725,724,722,721,720,
719,718,716,715,714,713,712,710,709,708,
707,705,704,703,702,700,699,698,697,695,
694,693,692,690,689,688,687,685,684,683,
681,680,679,678,676,675,674,673,671,670,
669,667,666,665,663,662,661,660,658,657,
656,654,653,652,650,649,648,646,645,644,
642,641,640,638,637,636,634,633,632,630,
629,627,626,625,623,622,621,619,618,617,
615,614,612,611,610,608,607,605,604,603,
601,600,599,597,596,594,593,592,590,589,
587,586,584,583,582,580,579,577,576,575,
573,572,570,569,567,566,564,563,562,560,
559,557,556,554,553,551,550,549,547,546,
544,543,541,540,538,537,535,534,532,531,
529,528,526,525,523,522,521,519,518,516,
515,513,512,510,509,507,506,504,503,501,
499,498,496,495,493,492,490,489,487,486,
484,483,481,480,478,477,475,474,472,471,
469,467,466,464,463,461,460,458,457,455,
453,452,450,449,447,446,444,443,441,439,
438,436,435,433,432,430,428,427,425,424,
422,421,419,417,416,414,413,411,409,408,
406,405,403,401,400,398,397,395,393,392,
390,389,387,385,384,382,381,379,377,376,
374,372,371,369,368,366,364,363,361,359,
358,356,355,353,351,350,348,346,345,343,
342,340,338,337,335,333,332,330,328,327,
325,323,322,320,318,317,315,313,312,310,
309,307,305,304,302,300,299,297,295,294,
292,290,289,287,285,284,282,280,278,277,
275,273,272,270,268,267,265,263,262,260,
258,257,255,253,252,250,248,246,245,243,
241,240,238,236,235,233,231,230,228,226,
224,223,221,219,218,216,214,213,211,209,
207,206,204,202,201,199,197,195,194,192,
190,189,187,185,183,182,180,178,177,175,
173,171,170,168,166,165,163,161,159,158,
156,154,152,151,149,147,146,144,142,140,
139,137,135,133,132,130,128,127,125,123,
121,120,118,116,114,113,111,109,107,106,
104,102,101,99,97,95,94,92,90,88,
87,85,83,81,80,78,76,74,73,71,
69,68,66,64,62,61,59,57,55,54,
52,50,48,47,45,43,41,40,38,36,
34,33,31,29,27,26,24,22,20,19,
17,15,13,12,10,8,6,5,3,1,
0,-1,-3,-5,-6,-8,-10,-12,-13,-15,
-17,-19,-20,-22,-24,-26,-27,-29,-31,-33,
-34,-36,-38,-40,-41,-43,-45,-47,-48,-50,
-52,-54,-55,-57,-59,-61,-62,-64,-66,-68,
-69,-71,-73,-74,-76,-78,-80,-81,-83,-85,
-87,-88,-90,-92,-94,-95,-97,-99,-101,-102,
-104,-106,-107,-109,-111,-113,-114,-116,-118,-120,
-121,-123,-125,-127,-128,-130,-132,-133,-135,-137,
-139,-140,-142,-144,-146,-147,-149,-151,-152,-154,
-156,-158,-159,-161,-163,-165,-166,-168,-170,-171,
-173,-175,-177,-178,-180,-182,-183,-185,-187,-189,
-190,-192,-194,-195,-197,-199,-201,-202,-204,-206,
-207,-209,-211,-213,-214,-216,-218,-219,-221,-223,
-224,-226,-228,-230,-231,-233,-235,-236,-238,-240,
-241,-243,-245,-246,-248,-250,-252,-253,-255,-257,
-258,-260,-262,-263,-265,-267,-268,-270,-272,-273,
-275,-277,-278,-280,-282,-284,-285,-287,-289,-290,
-292,-294,-295,-297,-299,-300,-302,-304,-305,-307,
-309,-310,-312,-313,-315,-317,-318,-320,-322,-323,
-325,-327,-328,-330,-332,-333,-335,-337,-338,-340,
-342,-343,-345,-346,-348,-350,-351,-353,-355,-356,
-358,-359,-361,-363,-364,-366,-368,-369,-371,-372,
-374,-376,-377,-379,-381,-382,-384,-385,-387,-389,
-390,-392,-393,-395,-397,-398,-400,-401,-403,-405,
-406,-408,-409,-411,-413,-414,-416,-417,-419,-421,
-422,-424,-425,-427,-428,-430,-432,-433,-435,-436,
-438,-439,-441,-443,-444,-446,-447,-449,-450,-452,
-453,-455,-457,-458,-460,-461,-463,-464,-466,-467,
-469,-471,-472,-474,-475,-477,-478,-480,-481,-483,
-484,-486,-487,-489,-490,-492,-493,-495,-496,-498,
-500,-501,-503,-504,-506,-507,-509,-510,-512,-513,
-515,-516,-518,-519,-521,-522,-523,-525,-526,-528,
-529,-531,-532,-534,-535,-537,-538,-540,-541,-543,
-544,-546,-547,-549,-550,-551,-553,-554,-556,-557,
-559,-560,-562,-563,-564,-566,-567,-569,-570,-572,
-573,-575,-576,-577,-579,-580,-582,-583,-584,-586,
-587,-589,-590,-592,-593,-594,-596,-597,-599,-600,
-601,-603,-604,-605,-607,-608,-610,-611,-612,-614,
-615,-617,-618,-619,-621,-622,-623,-625,-626,-627,
-629,-630,-632,-633,-634,-636,-637,-638,-640,-641,
-642,-644,-645,-646,-648,-649,-650,-652,-653,-654,
-656,-657,-658,-660,-661,-662,-663,-665,-666,-667,
-669,-670,-671,-673,-674,-675,-676,-678,-679,-680,
-681,-683,-684,-685,-687,-688,-689,-690,-692,-693,
-694,-695,-697,-698,-699,-700,-702,-703,-704,-705,
-707,-708,-709,-710,-712,-713,-714,-715,-716,-718,
-719,-720,-721,-722,-724,-725,-726,-727,-728,-730,
-731,-732,-733,-734,-736,-737,-738,-739,-740,-741,
-743,-744,-745,-746,-747,-748,-750,-751,-752,-753,
-754,-755,-756,-758,-759,-760,-761,-762,-763,-764,
-766,-767,-768,-769,-770,-771,-772,-773,-774,-776,
-777,-778,-779,-780,-781,-782,-783,-784,-785,-786,
-788,-789,-790,-791,-792,-793,-794,-795,-796,-797,
-798,-799,-800,-801,-802,-803,-804,-805,-806,-807,
-809,-810,-811,-812,-813,-814,-815,-816,-817,-818,
-819,-820,-821,-822,-823,-824,-825,-826,-827,-828,
-829,-830,-830,-831,-832,-833,-834,-835,-836,-837,
-838,-839,-840,-841,-842,-843,-844,-845,-846,-847,
-848,-848,-849,-850,-851,-852,-853,-854,-855,-856,
-857,-858,-858,-859,-860,-861,-862,-863,-864,-865,
-866,-866,-867,-868,-869,-870,-871,-872,-872,-873,
-874,-875,-876,-877,-877,-878,-879,-880,-881,-882,
-882,-883,-884,-885,-886,-887,-887,-888,-889,-890,
-891,-891,-892,-893,-894,-894,-895,-896,-897,-898,
-898,-899,-900,-901,-901,-902,-903,-904,-904,-905,
-906,-907,-907,-908,-909,-909,-910,-911,-912,-912,
-913,-914,-914,-915,-916,-917,-917,-918,-919,-919,
-920,-921,-921,-922,-923,-923,-924,-925,-925,-926,
-927,-927,-928,-929,-929,-930,-931,-931,-932,-932,
-933,-934,-934,-935,-936,-936,-937,-937,-938,-939,
-939,-940,-940,-941,-942,-942,-943,-943,-944,-944,
-945,-946,-946,-947,-947,-948,-948,-949,-949,-950,
-951,-951,-952,-952,-953,-953,-954,-954,-955,-955,
-956,-956,-957,-957,-958,-958,-959,-959,-960,-960,
-961,-961,-962,-962,-963,-963,-964,-964,-965,-965,
-965,-966,-966,-967,-967,-968,-968,-969,-969,-969,
-970,-970,-971,-971,-971,-972,-972,-973,-973,-973,
-974,-974,-975,-975,-975,-976,-976,-977,-977,-977,
-978,-978,-978,-979,-979,-979,-980,-980,-980,-981,
-981,-981,-982,-982,-982,-983,-983,-983,-984,-984,
-984,-985,-985,-985,-985,-986,-986,-986,-987,-987,
-987,-987,-988,-988,-988,-989,-989,-989,-989,-990,
-990,-990,-990,-990,-991,-991,-991,-991,-992,-992,
-992,-992,-992,-993,-993,-993,-993,-993,-994,-994,
-994,-994,-994,-995,-995,-995,-995,-995,-995,-996,
-996,-996,-996,-996,-996,-996,-997,-997,-997,-997,
-997,-997,-997,-997,-998,-998,-998,-998,-998,-998,
-998,-998,-998,-998,-998,-999,-999,-999,-999,-999,
-999,-999,-999,-999,-999,-999,-999,-999,-999,-999,
-999,-999,-999,-999,-999,-999,-999,-999,-999,-999,
-1000,-999,-999,-999,-999,-999,-999,-999,-999,-999,
-999,-999,-999,-999,-999,-999,-999,-999,-999,-999,
-999,-999,-999,-999,-999,-999,-998,-998,-998,-998,
-998,-998,-998,-998,-998,-998,-998,-997,-997,-997,
-997,-997,-997,-997,-997,-996,-996,-996,-996,-996,
-996,-996,-995,-995,-995,-995,-995,-995,-994,-994,
-994,-994,-994,-993,-993,-993,-993,-993,-992,-992,
-992,-992,-992,-991,-991,-991,-991,-990,-990,-990,
-990,-990,-989,-989,-989,-989,-988,-988,-988,-987,
-987,-987,-987,-986,-986,-986,-985,-985,-985,-985,
-984,-984,-984,-983,-983,-983,-982,-982,-982,-981,
-981,-981,-980,-980,-980,-979,-979,-979,-978,-978,
-978,-977,-977,-977,-976,-976,-975,-975,-975,-974,
-974,-973,-973,-973,-972,-972,-971,-971,-971,-970,
-970,-969,-969,-969,-968,-968,-967,-967,-966,-966,
-965,-965,-965,-964,-964,-963,-963,-962,-962,-961,
-961,-960,-960,-959,-959,-958,-958,-957,-957,-956,
-956,-955,-955,-954,-954,-953,-953,-952,-952,-951,
-951,-950,-949,-949,-948,-948,-947,-947,-946,-946,
-945,-944,-944,-943,-943,-942,-942,-941,-940,-940,
-939,-939,-938,-937,-937,-936,-936,-935,-934,-934,
-933,-932,-932,-931,-931,-930,-929,-929,-928,-927,
-927,-926,-925,-925,-924,-923,-923,-922,-921,-921,
-920,-919,-919,-918,-917,-917,-916,-915,-914,-914,
-913,-912,-912,-911,-910,-909,-909,-908,-907,-907,
-906,-905,-904,-904,-903,-902,-901,-901,-900,-899,
-898,-898,-897,-896,-895,-894,-894,-893,-892,-891,
-891,-890,-889,-888,-887,-887,-886,-885,-884,-883,
-882,-882,-881,-880,-879,-878,-877,-877,-876,-875,
-874,-873,-872,-872,-871,-870,-869,-868,-867,-866,
-866,-865,-864,-863,-862,-861,-860,-859,-858,-858,
-857,-856,-855,-854,-853,-852,-851,-850,-849,-848,
-848,-847,-846,-845,-844,-843,-842,-841,-840,-839,
-838,-837,-836,-835,-834,-833,-832,-831,-830,-830,
-829,-828,-827,-826,-825,-824,-823,-822,-821,-820,
-819,-818,-817,-816,-815,-814,-813,-812,-811,-810,
-809,-807,-806,-805,-804,-803,-802,-801,-800,-799,
-798,-797,-796,-795,-794,-793,-792,-791,-790,-789,
-788,-786,-785,-784,-783,-782,-781,-780,-779,-778,
-777,-776,-774,-773,-772,-771,-770,-769,-768,-767,
-766,-764,-763,-762,-761,-760,-759,-758,-756,-755,
-754,-753,-752,-751,-750,-748,-747,-746,-745,-744,
-743,-741,-740,-739,-738,-737,-736,-734,-733,-732,
-731,-730,-728,-727,-726,-725,-724,-722,-721,-720,
-719,-718,-716,-715,-714,-713,-712,-710,-709,-708,
-707,-705,-704,-703,-702,-700,-699,-698,-697,-695,
-694,-693,-692,-690,-689,-688,-687,-685,-684,-683,
-681,-680,-679,-678,-676,-675,-674,-673,-671,-670,
-669,-667,-666,-665,-663,-662,-661,-660,-658,-657,
-656,-654,-653,-652,-650,-649,-648,-646,-645,-644,
-642,-641,-640,-638,-637,-636,-634,-633,-632,-630,
-629,-627,-626,-625,-623,-622,-621,-619,-618,-617,
-615,-614,-612,-611,-610,-608,-607,-605,-604,-603,
-601,-600,-599,-597,-596,-594,-593,-592,-590,-589,
-587,-586,-584,-583,-582,-580,-579,-577,-576,-575,
-573,-572,-570,-569,-567,-566,-564,-563,-562,-560,
-559,-557,-556,-554,-553,-551,-550,-549,-547,-546,
-544,-543,-541,-540,-538,-537,-535,-534,-532,-531,
-529,-528,-526,-525,-523,-522,-521,-519,-518,-516,
-515,-513,-512,-510,-509,-507,-506,-504,-503,-501,
-499,-498,-496,-495,-493,-492,-490,-489,-487,-486,
-484,-483,-481,-480,-478,-477,-475,-474,-472,-471,
-469,-467,-466,-464,-463,-461,-460,-458,-457,-455,
-453,-452,-450,-449,-447,-446,-444,-443,-441,-439,
-438,-436,-435,-433,-432,-430,-428,-427,-425,-424,
-422,-421,-419,-417,-416,-414,-413,-411,-409,-408,
-406,-405,-403,-401,-400,-398,-397,-395,-393,-392,
-390,-389,-387,-385,-384,-382,-381,-379,-377,-376,
-374,-372,-371,-369,-368,-366,-364,-363,-361,-359,
-358,-356,-355,-353,-351,-350,-348,-346,-345,-343,
-342,-340,-338,-337,-335,-333,-332,-330,-328,-327,
-325,-323,-322,-320,-318,-317,-315,-313,-312,-310,
-309,-307,-305,-304,-302,-300,-299,-297,-295,-294,
-292,-290,-289,-287,-285,-284,-282,-280,-278,-277,
-275,-273,-272,-270,-268,-267,-265,-263,-262,-260,
-258,-257,-255,-253,-252,-250,-248,-246,-245,-243,
-241,-240,-238,-236,-235,-233,-231,-230,-228,-226,
-224,-223,-221,-219,-218,-216,-214,-213,-211,-209,
-207,-206,-204,-202,-201,-199,-197,-195,-194,-192,
-190,-189,-187,-185,-183,-182,-180,-178,-177,-175,
-173,-171,-170,-168,-166,-165,-163,-161,-159,-158,
-156,-154,-152,-151,-149,-147,-146,-144,-142,-140,
-139,-137,-135,-133,-132,-130,-128,-127,-125,-123,
-121,-120,-118,-116,-114,-113,-111,-109,-107,-106,
-104,-102,-101,-99,-97,-95,-94,-92,-90,-88,
-87,-85,-83,-81,-80,-78,-76,-74,-73,-71,
-69,-68,-66,-64,-62,-61,-59,-57,-55,-54,
-52,-50,-48,-47,-45,-43,-41,-40,-38,-36,
-34,-33,-31,-29,-27,-26,-24,-22,-20,-19,
-17,-15,-13,-12,-10,-8,-6,-5,-3,-1,
0,1,3,5,6,8,10,12,13,15,
17,19,20,22,24,26,27,29,31,33,
34,36,38,40,41,43,45,47,48,50,
52,54,55,57,59,61,62,64,66,68,
69,71,73,74,76,78,80,81,83,85,
87,88,90,92,94,95,97,99,101,102,
104,106,107,109,111,113,114,116,118,120,
121,123,125,127,128,130,132,133,135,137,
139,140,142,144,146,147,149,151,152,154,
156,158,159,161,163,165,166,168,170,171,
173,175,177,178,180,182,183,185,187,189,
190,192,194,195,197,199,201,202,204,206,
207,209,211,213,214,216,218,219,221,223,
224,226,228,230,231,233,235,236,238,240,
241,243,245,246,248,250,252,253,255,257,
258,260,262,263,265,267,268,270,272,273,
275,277,278,280,282,284,285,287,289,290,
292,294,295,297,299,300,302,304,305,307,
309,310,312,313,315,317,318,320,322,323,
325,327,328,330,332,333,335,337,338,340,
342,343,345,346,348,350,351,353,355,356,
358,359,361,363,364,366,368,369,371,372,
374,376,377,379,381,382,384,385,387,389,
390,392,393,395,397,398,400,401,403,405,
406,408,409,411,413,414,416,417,419,421,
422,424,425,427,428,430,432,433,435,436,
438,439,441,443,444,446,447,449,450,452,
453,455,457,458,460,461,463,464,466,467,
469,471,472,474,475,477,478,480,481,483,
484,486,487,489,490,492,493,495,496,498,
500,501,503,504,506,507,509,510,512,513,
515,516,518,519,521,522,523,525,526,528,
529,531,532,534,535,537,538,540,541,543,
544,546,547,549,550,551,553,554,556,557,
559,560,562,563,564,566,567,569,570,572,
573,575,576,577,579,580,582,583,584,586,
587,589,590,592,593,594,596,597,599,600,
601,603,604,605,607,608,610,611,612,614,
615,617,618,619,621,622,623,625,626,627,
629,630,632,633,634,636,637,638,640,641,
642,644,645,646,648,649,650,652,653,654,
656,657,658,660,661,662,663,665,666,667,
669,670,671,673,674,675,676,678,679,680,
681,683,684,685,687,688,689,690,692,693,
694,695,697,698,699,700,702,703,704,705,
707,708,709,710,712,713,714,715,716,718,
719,720,721,722,724,725,726,727,728,730,
731,732,733,734,736,737,738,739,740,741,
743,744,745,746,747,748,750,751,752,753,
754,755,756,758,759,760,761,762,763,764,
766,767,768,769,770,771,772,773,774,776,
777,778,779,780,781,782,783,784,785,786,
788,789,790,791,792,793,794,795,796,797,
798,799,800,801,802,803,804,805,806,807,
809,810,811,812,813,814,815,816,817,818,
819,820,821,822,823,824,825,826,827,828,
829,830,830,831,832,833,834,835,836,837,
838,839,840,841,842,843,844,845,846,847,
848,848,849,850,851,852,853,854,855,856,
857,858,858,859,860,861,862,863,864,865,
866,866,867,868,869,870,871,872,872,873,
874,875,876,877,877,878,879,880,881,882,
882,883,884,885,886,887,887,888,889,890,
891,891,892,893,894,894,895,896,897,898,
898,899,900,901,901,902,903,904,904,905,
906,907,907,908,909,909,910,911,912,912,
913,914,914,915,916,917,917,918,919,919,
920,921,921,922,923,923,924,925,925,926,
927,927,928,929,929,930,931,931,932,932,
933,934,934,935,936,936,937,937,938,939,
939,940,940,941,942,942,943,943,944,944,
945,946,946,947,947,948,948,949,949,950,
951,951,952,952,953,953,954,954,955,955,
956,956,957,957,958,958,959,959,960,960,
961,961,962,962,963,963,964,964,965,965,
965,966,966,967,967,968,968,969,969,969,
970,970,971,971,971,972,972,973,973,973,
974,974,975,975,975,976,976,977,977,977,
978,978,978,979,979,979,980,980,980,981,
981,981,982,982,982,983,983,983,984,984,
984,985,985,985,985,986,986,986,987,987,
987,987,988,988,988,989,989,989,989,990,
990,990,990,990,991,991,991,991,992,992,
992,992,992,993,993,993,993,993,994,994,
994,994,994,995,995,995,995,995,995,996,
996,996,996,996,996,996,997,997,997,997,
997,997,997,997,998,998,998,998,998,998,
998,998,998,998,998,999,999,999,999,999,
999,999,999,999,999,999,999,999,999,999,
999,999,999,999,999,999,999,999,999,999
};
