// project: https://github.com/bravikov/bit.h
//  author: Dmitry Bravikov (bravikov@gmail.com)

#ifndef BIT_H
#define BIT_H

#define b0000_0000 0
#define b0000_0001 1
#define b0000_0010 2
#define b0000_0011 3
#define b0000_0100 4
#define b0000_0101 5
#define b0000_0110 6
#define b0000_0111 7
#define b0000_1000 8
#define b0000_1001 9
#define b0000_1010 10
#define b0000_1011 11
#define b0000_1100 12
#define b0000_1101 13
#define b0000_1110 14
#define b0000_1111 15
#define b0001_0000 16
#define b0001_0001 17
#define b0001_0010 18
#define b0001_0011 19
#define b0001_0100 20
#define b0001_0101 21
#define b0001_0110 22
#define b0001_0111 23
#define b0001_1000 24
#define b0001_1001 25
#define b0001_1010 26
#define b0001_1011 27
#define b0001_1100 28
#define b0001_1101 29
#define b0001_1110 30
#define b0001_1111 31
#define b0010_0000 32
#define b0010_0001 33
#define b0010_0010 34
#define b0010_0011 35
#define b0010_0100 36
#define b0010_0101 37
#define b0010_0110 38
#define b0010_0111 39
#define b0010_1000 40
#define b0010_1001 41
#define b0010_1010 42
#define b0010_1011 43
#define b0010_1100 44
#define b0010_1101 45
#define b0010_1110 46
#define b0010_1111 47
#define b0011_0000 48
#define b0011_0001 49
#define b0011_0010 50
#define b0011_0011 51
#define b0011_0100 52
#define b0011_0101 53
#define b0011_0110 54
#define b0011_0111 55
#define b0011_1000 56
#define b0011_1001 57
#define b0011_1010 58
#define b0011_1011 59
#define b0011_1100 60
#define b0011_1101 61
#define b0011_1110 62
#define b0011_1111 63
#define b0100_0000 64
#define b0100_0001 65
#define b0100_0010 66
#define b0100_0011 67
#define b0100_0100 68
#define b0100_0101 69
#define b0100_0110 70
#define b0100_0111 71
#define b0100_1000 72
#define b0100_1001 73
#define b0100_1010 74
#define b0100_1011 75
#define b0100_1100 76
#define b0100_1101 77
#define b0100_1110 78
#define b0100_1111 79
#define b0101_0000 80
#define b0101_0001 81
#define b0101_0010 82
#define b0101_0011 83
#define b0101_0100 84
#define b0101_0101 85
#define b0101_0110 86
#define b0101_0111 87
#define b0101_1000 88
#define b0101_1001 89
#define b0101_1010 90
#define b0101_1011 91
#define b0101_1100 92
#define b0101_1101 93
#define b0101_1110 94
#define b0101_1111 95
#define b0110_0000 96
#define b0110_0001 97
#define b0110_0010 98
#define b0110_0011 99
#define b0110_0100 100
#define b0110_0101 101
#define b0110_0110 102
#define b0110_0111 103
#define b0110_1000 104
#define b0110_1001 105
#define b0110_1010 106
#define b0110_1011 107
#define b0110_1100 108
#define b0110_1101 109
#define b0110_1110 110
#define b0110_1111 111
#define b0111_0000 112
#define b0111_0001 113
#define b0111_0010 114
#define b0111_0011 115
#define b0111_0100 116
#define b0111_0101 117
#define b0111_0110 118
#define b0111_0111 119
#define b0111_1000 120
#define b0111_1001 121
#define b0111_1010 122
#define b0111_1011 123
#define b0111_1100 124
#define b0111_1101 125
#define b0111_1110 126
#define b0111_1111 127
#define b1000_0000 128
#define b1000_0001 129
#define b1000_0010 130
#define b1000_0011 131
#define b1000_0100 132
#define b1000_0101 133
#define b1000_0110 134
#define b1000_0111 135
#define b1000_1000 136
#define b1000_1001 137
#define b1000_1010 138
#define b1000_1011 139
#define b1000_1100 140
#define b1000_1101 141
#define b1000_1110 142
#define b1000_1111 143
#define b1001_0000 144
#define b1001_0001 145
#define b1001_0010 146
#define b1001_0011 147
#define b1001_0100 148
#define b1001_0101 149
#define b1001_0110 150
#define b1001_0111 151
#define b1001_1000 152
#define b1001_1001 153
#define b1001_1010 154
#define b1001_1011 155
#define b1001_1100 156
#define b1001_1101 157
#define b1001_1110 158
#define b1001_1111 159
#define b1010_0000 160
#define b1010_0001 161
#define b1010_0010 162
#define b1010_0011 163
#define b1010_0100 164
#define b1010_0101 165
#define b1010_0110 166
#define b1010_0111 167
#define b1010_1000 168
#define b1010_1001 169
#define b1010_1010 170
#define b1010_1011 171
#define b1010_1100 172
#define b1010_1101 173
#define b1010_1110 174
#define b1010_1111 175
#define b1011_0000 176
#define b1011_0001 177
#define b1011_0010 178
#define b1011_0011 179
#define b1011_0100 180
#define b1011_0101 181
#define b1011_0110 182
#define b1011_0111 183
#define b1011_1000 184
#define b1011_1001 185
#define b1011_1010 186
#define b1011_1011 187
#define b1011_1100 188
#define b1011_1101 189
#define b1011_1110 190
#define b1011_1111 191
#define b1100_0000 192
#define b1100_0001 193
#define b1100_0010 194
#define b1100_0011 195
#define b1100_0100 196
#define b1100_0101 197
#define b1100_0110 198
#define b1100_0111 199
#define b1100_1000 200
#define b1100_1001 201
#define b1100_1010 202
#define b1100_1011 203
#define b1100_1100 204
#define b1100_1101 205
#define b1100_1110 206
#define b1100_1111 207
#define b1101_0000 208
#define b1101_0001 209
#define b1101_0010 210
#define b1101_0011 211
#define b1101_0100 212
#define b1101_0101 213
#define b1101_0110 214
#define b1101_0111 215
#define b1101_1000 216
#define b1101_1001 217
#define b1101_1010 218
#define b1101_1011 219
#define b1101_1100 220
#define b1101_1101 221
#define b1101_1110 222
#define b1101_1111 223
#define b1110_0000 224
#define b1110_0001 225
#define b1110_0010 226
#define b1110_0011 227
#define b1110_0100 228
#define b1110_0101 229
#define b1110_0110 230
#define b1110_0111 231
#define b1110_1000 232
#define b1110_1001 233
#define b1110_1010 234
#define b1110_1011 235
#define b1110_1100 236
#define b1110_1101 237
#define b1110_1110 238
#define b1110_1111 239
#define b1111_0000 240
#define b1111_0001 241
#define b1111_0010 242
#define b1111_0011 243
#define b1111_0100 244
#define b1111_0101 245
#define b1111_0110 246
#define b1111_0111 247
#define b1111_1000 248
#define b1111_1001 249
#define b1111_1010 250
#define b1111_1011 251
#define b1111_1100 252
#define b1111_1101 253
#define b1111_1110 254
#define b1111_1111 255

#define b0000_0000_1 0
#define b0000_0001_1 256
#define b0000_0010_1 512
#define b0000_0011_1 768
#define b0000_0100_1 1024
#define b0000_0101_1 1280
#define b0000_0110_1 1536
#define b0000_0111_1 1792
#define b0000_1000_1 2048
#define b0000_1001_1 2304
#define b0000_1010_1 2560
#define b0000_1011_1 2816
#define b0000_1100_1 3072
#define b0000_1101_1 3328
#define b0000_1110_1 3584
#define b0000_1111_1 3840
#define b0001_0000_1 4096
#define b0001_0001_1 4352
#define b0001_0010_1 4608
#define b0001_0011_1 4864
#define b0001_0100_1 5120
#define b0001_0101_1 5376
#define b0001_0110_1 5632
#define b0001_0111_1 5888
#define b0001_1000_1 6144
#define b0001_1001_1 6400
#define b0001_1010_1 6656
#define b0001_1011_1 6912
#define b0001_1100_1 7168
#define b0001_1101_1 7424
#define b0001_1110_1 7680
#define b0001_1111_1 7936
#define b0010_0000_1 8192
#define b0010_0001_1 8448
#define b0010_0010_1 8704
#define b0010_0011_1 8960
#define b0010_0100_1 9216
#define b0010_0101_1 9472
#define b0010_0110_1 9728
#define b0010_0111_1 9984
#define b0010_1000_1 10240
#define b0010_1001_1 10496
#define b0010_1010_1 10752
#define b0010_1011_1 11008
#define b0010_1100_1 11264
#define b0010_1101_1 11520
#define b0010_1110_1 11776
#define b0010_1111_1 12032
#define b0011_0000_1 12288
#define b0011_0001_1 12544
#define b0011_0010_1 12800
#define b0011_0011_1 13056
#define b0011_0100_1 13312
#define b0011_0101_1 13568
#define b0011_0110_1 13824
#define b0011_0111_1 14080
#define b0011_1000_1 14336
#define b0011_1001_1 14592
#define b0011_1010_1 14848
#define b0011_1011_1 15104
#define b0011_1100_1 15360
#define b0011_1101_1 15616
#define b0011_1110_1 15872
#define b0011_1111_1 16128
#define b0100_0000_1 16384
#define b0100_0001_1 16640
#define b0100_0010_1 16896
#define b0100_0011_1 17152
#define b0100_0100_1 17408
#define b0100_0101_1 17664
#define b0100_0110_1 17920
#define b0100_0111_1 18176
#define b0100_1000_1 18432
#define b0100_1001_1 18688
#define b0100_1010_1 18944
#define b0100_1011_1 19200
#define b0100_1100_1 19456
#define b0100_1101_1 19712
#define b0100_1110_1 19968
#define b0100_1111_1 20224
#define b0101_0000_1 20480
#define b0101_0001_1 20736
#define b0101_0010_1 20992
#define b0101_0011_1 21248
#define b0101_0100_1 21504
#define b0101_0101_1 21760
#define b0101_0110_1 22016
#define b0101_0111_1 22272
#define b0101_1000_1 22528
#define b0101_1001_1 22784
#define b0101_1010_1 23040
#define b0101_1011_1 23296
#define b0101_1100_1 23552
#define b0101_1101_1 23808
#define b0101_1110_1 24064
#define b0101_1111_1 24320
#define b0110_0000_1 24576
#define b0110_0001_1 24832
#define b0110_0010_1 25088
#define b0110_0011_1 25344
#define b0110_0100_1 25600
#define b0110_0101_1 25856
#define b0110_0110_1 26112
#define b0110_0111_1 26368
#define b0110_1000_1 26624
#define b0110_1001_1 26880
#define b0110_1010_1 27136
#define b0110_1011_1 27392
#define b0110_1100_1 27648
#define b0110_1101_1 27904
#define b0110_1110_1 28160
#define b0110_1111_1 28416
#define b0111_0000_1 28672
#define b0111_0001_1 28928
#define b0111_0010_1 29184
#define b0111_0011_1 29440
#define b0111_0100_1 29696
#define b0111_0101_1 29952
#define b0111_0110_1 30208
#define b0111_0111_1 30464
#define b0111_1000_1 30720
#define b0111_1001_1 30976
#define b0111_1010_1 31232
#define b0111_1011_1 31488
#define b0111_1100_1 31744
#define b0111_1101_1 32000
#define b0111_1110_1 32256
#define b0111_1111_1 32512
#define b1000_0000_1 32768
#define b1000_0001_1 33024
#define b1000_0010_1 33280
#define b1000_0011_1 33536
#define b1000_0100_1 33792
#define b1000_0101_1 34048
#define b1000_0110_1 34304
#define b1000_0111_1 34560
#define b1000_1000_1 34816
#define b1000_1001_1 35072
#define b1000_1010_1 35328
#define b1000_1011_1 35584
#define b1000_1100_1 35840
#define b1000_1101_1 36096
#define b1000_1110_1 36352
#define b1000_1111_1 36608
#define b1001_0000_1 36864
#define b1001_0001_1 37120
#define b1001_0010_1 37376
#define b1001_0011_1 37632
#define b1001_0100_1 37888
#define b1001_0101_1 38144
#define b1001_0110_1 38400
#define b1001_0111_1 38656
#define b1001_1000_1 38912
#define b1001_1001_1 39168
#define b1001_1010_1 39424
#define b1001_1011_1 39680
#define b1001_1100_1 39936
#define b1001_1101_1 40192
#define b1001_1110_1 40448
#define b1001_1111_1 40704
#define b1010_0000_1 40960
#define b1010_0001_1 41216
#define b1010_0010_1 41472
#define b1010_0011_1 41728
#define b1010_0100_1 41984
#define b1010_0101_1 42240
#define b1010_0110_1 42496
#define b1010_0111_1 42752
#define b1010_1000_1 43008
#define b1010_1001_1 43264
#define b1010_1010_1 43520
#define b1010_1011_1 43776
#define b1010_1100_1 44032
#define b1010_1101_1 44288
#define b1010_1110_1 44544
#define b1010_1111_1 44800
#define b1011_0000_1 45056
#define b1011_0001_1 45312
#define b1011_0010_1 45568
#define b1011_0011_1 45824
#define b1011_0100_1 46080
#define b1011_0101_1 46336
#define b1011_0110_1 46592
#define b1011_0111_1 46848
#define b1011_1000_1 47104
#define b1011_1001_1 47360
#define b1011_1010_1 47616
#define b1011_1011_1 47872
#define b1011_1100_1 48128
#define b1011_1101_1 48384
#define b1011_1110_1 48640
#define b1011_1111_1 48896
#define b1100_0000_1 49152
#define b1100_0001_1 49408
#define b1100_0010_1 49664
#define b1100_0011_1 49920
#define b1100_0100_1 50176
#define b1100_0101_1 50432
#define b1100_0110_1 50688
#define b1100_0111_1 50944
#define b1100_1000_1 51200
#define b1100_1001_1 51456
#define b1100_1010_1 51712
#define b1100_1011_1 51968
#define b1100_1100_1 52224
#define b1100_1101_1 52480
#define b1100_1110_1 52736
#define b1100_1111_1 52992
#define b1101_0000_1 53248
#define b1101_0001_1 53504
#define b1101_0010_1 53760
#define b1101_0011_1 54016
#define b1101_0100_1 54272
#define b1101_0101_1 54528
#define b1101_0110_1 54784
#define b1101_0111_1 55040
#define b1101_1000_1 55296
#define b1101_1001_1 55552
#define b1101_1010_1 55808
#define b1101_1011_1 56064
#define b1101_1100_1 56320
#define b1101_1101_1 56576
#define b1101_1110_1 56832
#define b1101_1111_1 57088
#define b1110_0000_1 57344
#define b1110_0001_1 57600
#define b1110_0010_1 57856
#define b1110_0011_1 58112
#define b1110_0100_1 58368
#define b1110_0101_1 58624
#define b1110_0110_1 58880
#define b1110_0111_1 59136
#define b1110_1000_1 59392
#define b1110_1001_1 59648
#define b1110_1010_1 59904
#define b1110_1011_1 60160
#define b1110_1100_1 60416
#define b1110_1101_1 60672
#define b1110_1110_1 60928
#define b1110_1111_1 61184
#define b1111_0000_1 61440
#define b1111_0001_1 61696
#define b1111_0010_1 61952
#define b1111_0011_1 62208
#define b1111_0100_1 62464
#define b1111_0101_1 62720
#define b1111_0110_1 62976
#define b1111_0111_1 63232
#define b1111_1000_1 63488
#define b1111_1001_1 63744
#define b1111_1010_1 64000
#define b1111_1011_1 64256
#define b1111_1100_1 64512
#define b1111_1101_1 64768
#define b1111_1110_1 65024
#define b1111_1111_1 65280

#define b0000_0000_2 0
#define b0000_0001_2 65536
#define b0000_0010_2 131072
#define b0000_0011_2 196608
#define b0000_0100_2 262144
#define b0000_0101_2 327680
#define b0000_0110_2 393216
#define b0000_0111_2 458752
#define b0000_1000_2 524288
#define b0000_1001_2 589824
#define b0000_1010_2 655360
#define b0000_1011_2 720896
#define b0000_1100_2 786432
#define b0000_1101_2 851968
#define b0000_1110_2 917504
#define b0000_1111_2 983040
#define b0001_0000_2 1048576
#define b0001_0001_2 1114112
#define b0001_0010_2 1179648
#define b0001_0011_2 1245184
#define b0001_0100_2 1310720
#define b0001_0101_2 1376256
#define b0001_0110_2 1441792
#define b0001_0111_2 1507328
#define b0001_1000_2 1572864
#define b0001_1001_2 1638400
#define b0001_1010_2 1703936
#define b0001_1011_2 1769472
#define b0001_1100_2 1835008
#define b0001_1101_2 1900544
#define b0001_1110_2 1966080
#define b0001_1111_2 2031616
#define b0010_0000_2 2097152
#define b0010_0001_2 2162688
#define b0010_0010_2 2228224
#define b0010_0011_2 2293760
#define b0010_0100_2 2359296
#define b0010_0101_2 2424832
#define b0010_0110_2 2490368
#define b0010_0111_2 2555904
#define b0010_1000_2 2621440
#define b0010_1001_2 2686976
#define b0010_1010_2 2752512
#define b0010_1011_2 2818048
#define b0010_1100_2 2883584
#define b0010_1101_2 2949120
#define b0010_1110_2 3014656
#define b0010_1111_2 3080192
#define b0011_0000_2 3145728
#define b0011_0001_2 3211264
#define b0011_0010_2 3276800
#define b0011_0011_2 3342336
#define b0011_0100_2 3407872
#define b0011_0101_2 3473408
#define b0011_0110_2 3538944
#define b0011_0111_2 3604480
#define b0011_1000_2 3670016
#define b0011_1001_2 3735552
#define b0011_1010_2 3801088
#define b0011_1011_2 3866624
#define b0011_1100_2 3932160
#define b0011_1101_2 3997696
#define b0011_1110_2 4063232
#define b0011_1111_2 4128768
#define b0100_0000_2 4194304
#define b0100_0001_2 4259840
#define b0100_0010_2 4325376
#define b0100_0011_2 4390912
#define b0100_0100_2 4456448
#define b0100_0101_2 4521984
#define b0100_0110_2 4587520
#define b0100_0111_2 4653056
#define b0100_1000_2 4718592
#define b0100_1001_2 4784128
#define b0100_1010_2 4849664
#define b0100_1011_2 4915200
#define b0100_1100_2 4980736
#define b0100_1101_2 5046272
#define b0100_1110_2 5111808
#define b0100_1111_2 5177344
#define b0101_0000_2 5242880
#define b0101_0001_2 5308416
#define b0101_0010_2 5373952
#define b0101_0011_2 5439488
#define b0101_0100_2 5505024
#define b0101_0101_2 5570560
#define b0101_0110_2 5636096
#define b0101_0111_2 5701632
#define b0101_1000_2 5767168
#define b0101_1001_2 5832704
#define b0101_1010_2 5898240
#define b0101_1011_2 5963776
#define b0101_1100_2 6029312
#define b0101_1101_2 6094848
#define b0101_1110_2 6160384
#define b0101_1111_2 6225920
#define b0110_0000_2 6291456
#define b0110_0001_2 6356992
#define b0110_0010_2 6422528
#define b0110_0011_2 6488064
#define b0110_0100_2 6553600
#define b0110_0101_2 6619136
#define b0110_0110_2 6684672
#define b0110_0111_2 6750208
#define b0110_1000_2 6815744
#define b0110_1001_2 6881280
#define b0110_1010_2 6946816
#define b0110_1011_2 7012352
#define b0110_1100_2 7077888
#define b0110_1101_2 7143424
#define b0110_1110_2 7208960
#define b0110_1111_2 7274496
#define b0111_0000_2 7340032
#define b0111_0001_2 7405568
#define b0111_0010_2 7471104
#define b0111_0011_2 7536640
#define b0111_0100_2 7602176
#define b0111_0101_2 7667712
#define b0111_0110_2 7733248
#define b0111_0111_2 7798784
#define b0111_1000_2 7864320
#define b0111_1001_2 7929856
#define b0111_1010_2 7995392
#define b0111_1011_2 8060928
#define b0111_1100_2 8126464
#define b0111_1101_2 8192000
#define b0111_1110_2 8257536
#define b0111_1111_2 8323072
#define b1000_0000_2 8388608
#define b1000_0001_2 8454144
#define b1000_0010_2 8519680
#define b1000_0011_2 8585216
#define b1000_0100_2 8650752
#define b1000_0101_2 8716288
#define b1000_0110_2 8781824
#define b1000_0111_2 8847360
#define b1000_1000_2 8912896
#define b1000_1001_2 8978432
#define b1000_1010_2 9043968
#define b1000_1011_2 9109504
#define b1000_1100_2 9175040
#define b1000_1101_2 9240576
#define b1000_1110_2 9306112
#define b1000_1111_2 9371648
#define b1001_0000_2 9437184
#define b1001_0001_2 9502720
#define b1001_0010_2 9568256
#define b1001_0011_2 9633792
#define b1001_0100_2 9699328
#define b1001_0101_2 9764864
#define b1001_0110_2 9830400
#define b1001_0111_2 9895936
#define b1001_1000_2 9961472
#define b1001_1001_2 10027008
#define b1001_1010_2 10092544
#define b1001_1011_2 10158080
#define b1001_1100_2 10223616
#define b1001_1101_2 10289152
#define b1001_1110_2 10354688
#define b1001_1111_2 10420224
#define b1010_0000_2 10485760
#define b1010_0001_2 10551296
#define b1010_0010_2 10616832
#define b1010_0011_2 10682368
#define b1010_0100_2 10747904
#define b1010_0101_2 10813440
#define b1010_0110_2 10878976
#define b1010_0111_2 10944512
#define b1010_1000_2 11010048
#define b1010_1001_2 11075584
#define b1010_1010_2 11141120
#define b1010_1011_2 11206656
#define b1010_1100_2 11272192
#define b1010_1101_2 11337728
#define b1010_1110_2 11403264
#define b1010_1111_2 11468800
#define b1011_0000_2 11534336
#define b1011_0001_2 11599872
#define b1011_0010_2 11665408
#define b1011_0011_2 11730944
#define b1011_0100_2 11796480
#define b1011_0101_2 11862016
#define b1011_0110_2 11927552
#define b1011_0111_2 11993088
#define b1011_1000_2 12058624
#define b1011_1001_2 12124160
#define b1011_1010_2 12189696
#define b1011_1011_2 12255232
#define b1011_1100_2 12320768
#define b1011_1101_2 12386304
#define b1011_1110_2 12451840
#define b1011_1111_2 12517376
#define b1100_0000_2 12582912
#define b1100_0001_2 12648448
#define b1100_0010_2 12713984
#define b1100_0011_2 12779520
#define b1100_0100_2 12845056
#define b1100_0101_2 12910592
#define b1100_0110_2 12976128
#define b1100_0111_2 13041664
#define b1100_1000_2 13107200
#define b1100_1001_2 13172736
#define b1100_1010_2 13238272
#define b1100_1011_2 13303808
#define b1100_1100_2 13369344
#define b1100_1101_2 13434880
#define b1100_1110_2 13500416
#define b1100_1111_2 13565952
#define b1101_0000_2 13631488
#define b1101_0001_2 13697024
#define b1101_0010_2 13762560
#define b1101_0011_2 13828096
#define b1101_0100_2 13893632
#define b1101_0101_2 13959168
#define b1101_0110_2 14024704
#define b1101_0111_2 14090240
#define b1101_1000_2 14155776
#define b1101_1001_2 14221312
#define b1101_1010_2 14286848
#define b1101_1011_2 14352384
#define b1101_1100_2 14417920
#define b1101_1101_2 14483456
#define b1101_1110_2 14548992
#define b1101_1111_2 14614528
#define b1110_0000_2 14680064
#define b1110_0001_2 14745600
#define b1110_0010_2 14811136
#define b1110_0011_2 14876672
#define b1110_0100_2 14942208
#define b1110_0101_2 15007744
#define b1110_0110_2 15073280
#define b1110_0111_2 15138816
#define b1110_1000_2 15204352
#define b1110_1001_2 15269888
#define b1110_1010_2 15335424
#define b1110_1011_2 15400960
#define b1110_1100_2 15466496
#define b1110_1101_2 15532032
#define b1110_1110_2 15597568
#define b1110_1111_2 15663104
#define b1111_0000_2 15728640
#define b1111_0001_2 15794176
#define b1111_0010_2 15859712
#define b1111_0011_2 15925248
#define b1111_0100_2 15990784
#define b1111_0101_2 16056320
#define b1111_0110_2 16121856
#define b1111_0111_2 16187392
#define b1111_1000_2 16252928
#define b1111_1001_2 16318464
#define b1111_1010_2 16384000
#define b1111_1011_2 16449536
#define b1111_1100_2 16515072
#define b1111_1101_2 16580608
#define b1111_1110_2 16646144
#define b1111_1111_2 16711680

#define b0000_0000_3 0
#define b0000_0001_3 16777216
#define b0000_0010_3 33554432
#define b0000_0011_3 50331648
#define b0000_0100_3 67108864
#define b0000_0101_3 83886080
#define b0000_0110_3 100663296
#define b0000_0111_3 117440512
#define b0000_1000_3 134217728
#define b0000_1001_3 150994944
#define b0000_1010_3 167772160
#define b0000_1011_3 184549376
#define b0000_1100_3 201326592
#define b0000_1101_3 218103808
#define b0000_1110_3 234881024
#define b0000_1111_3 251658240
#define b0001_0000_3 268435456
#define b0001_0001_3 285212672
#define b0001_0010_3 301989888
#define b0001_0011_3 318767104
#define b0001_0100_3 335544320
#define b0001_0101_3 352321536
#define b0001_0110_3 369098752
#define b0001_0111_3 385875968
#define b0001_1000_3 402653184
#define b0001_1001_3 419430400
#define b0001_1010_3 436207616
#define b0001_1011_3 452984832
#define b0001_1100_3 469762048
#define b0001_1101_3 486539264
#define b0001_1110_3 503316480
#define b0001_1111_3 520093696
#define b0010_0000_3 536870912
#define b0010_0001_3 553648128
#define b0010_0010_3 570425344
#define b0010_0011_3 587202560
#define b0010_0100_3 603979776
#define b0010_0101_3 620756992
#define b0010_0110_3 637534208
#define b0010_0111_3 654311424
#define b0010_1000_3 671088640
#define b0010_1001_3 687865856
#define b0010_1010_3 704643072
#define b0010_1011_3 721420288
#define b0010_1100_3 738197504
#define b0010_1101_3 754974720
#define b0010_1110_3 771751936
#define b0010_1111_3 788529152
#define b0011_0000_3 805306368
#define b0011_0001_3 822083584
#define b0011_0010_3 838860800
#define b0011_0011_3 855638016
#define b0011_0100_3 872415232
#define b0011_0101_3 889192448
#define b0011_0110_3 905969664
#define b0011_0111_3 922746880
#define b0011_1000_3 939524096
#define b0011_1001_3 956301312
#define b0011_1010_3 973078528
#define b0011_1011_3 989855744
#define b0011_1100_3 1006632960
#define b0011_1101_3 1023410176
#define b0011_1110_3 1040187392
#define b0011_1111_3 1056964608
#define b0100_0000_3 1073741824
#define b0100_0001_3 1090519040
#define b0100_0010_3 1107296256
#define b0100_0011_3 1124073472
#define b0100_0100_3 1140850688
#define b0100_0101_3 1157627904
#define b0100_0110_3 1174405120
#define b0100_0111_3 1191182336
#define b0100_1000_3 1207959552
#define b0100_1001_3 1224736768
#define b0100_1010_3 1241513984
#define b0100_1011_3 1258291200
#define b0100_1100_3 1275068416
#define b0100_1101_3 1291845632
#define b0100_1110_3 1308622848
#define b0100_1111_3 1325400064
#define b0101_0000_3 1342177280
#define b0101_0001_3 1358954496
#define b0101_0010_3 1375731712
#define b0101_0011_3 1392508928
#define b0101_0100_3 1409286144
#define b0101_0101_3 1426063360
#define b0101_0110_3 1442840576
#define b0101_0111_3 1459617792
#define b0101_1000_3 1476395008
#define b0101_1001_3 1493172224
#define b0101_1010_3 1509949440
#define b0101_1011_3 1526726656
#define b0101_1100_3 1543503872
#define b0101_1101_3 1560281088
#define b0101_1110_3 1577058304
#define b0101_1111_3 1593835520
#define b0110_0000_3 1610612736
#define b0110_0001_3 1627389952
#define b0110_0010_3 1644167168
#define b0110_0011_3 1660944384
#define b0110_0100_3 1677721600
#define b0110_0101_3 1694498816
#define b0110_0110_3 1711276032
#define b0110_0111_3 1728053248
#define b0110_1000_3 1744830464
#define b0110_1001_3 1761607680
#define b0110_1010_3 1778384896
#define b0110_1011_3 1795162112
#define b0110_1100_3 1811939328
#define b0110_1101_3 1828716544
#define b0110_1110_3 1845493760
#define b0110_1111_3 1862270976
#define b0111_0000_3 1879048192
#define b0111_0001_3 1895825408
#define b0111_0010_3 1912602624
#define b0111_0011_3 1929379840
#define b0111_0100_3 1946157056
#define b0111_0101_3 1962934272
#define b0111_0110_3 1979711488
#define b0111_0111_3 1996488704
#define b0111_1000_3 2013265920
#define b0111_1001_3 2030043136
#define b0111_1010_3 2046820352
#define b0111_1011_3 2063597568
#define b0111_1100_3 2080374784
#define b0111_1101_3 2097152000
#define b0111_1110_3 2113929216
#define b0111_1111_3 2130706432
#define b1000_0000_3 2147483648
#define b1000_0001_3 2164260864
#define b1000_0010_3 2181038080
#define b1000_0011_3 2197815296
#define b1000_0100_3 2214592512
#define b1000_0101_3 2231369728
#define b1000_0110_3 2248146944
#define b1000_0111_3 2264924160
#define b1000_1000_3 2281701376
#define b1000_1001_3 2298478592
#define b1000_1010_3 2315255808
#define b1000_1011_3 2332033024
#define b1000_1100_3 2348810240
#define b1000_1101_3 2365587456
#define b1000_1110_3 2382364672
#define b1000_1111_3 2399141888
#define b1001_0000_3 2415919104
#define b1001_0001_3 2432696320
#define b1001_0010_3 2449473536
#define b1001_0011_3 2466250752
#define b1001_0100_3 2483027968
#define b1001_0101_3 2499805184
#define b1001_0110_3 2516582400
#define b1001_0111_3 2533359616
#define b1001_1000_3 2550136832
#define b1001_1001_3 2566914048
#define b1001_1010_3 2583691264
#define b1001_1011_3 2600468480
#define b1001_1100_3 2617245696
#define b1001_1101_3 2634022912
#define b1001_1110_3 2650800128
#define b1001_1111_3 2667577344
#define b1010_0000_3 2684354560
#define b1010_0001_3 2701131776
#define b1010_0010_3 2717908992
#define b1010_0011_3 2734686208
#define b1010_0100_3 2751463424
#define b1010_0101_3 2768240640
#define b1010_0110_3 2785017856
#define b1010_0111_3 2801795072
#define b1010_1000_3 2818572288
#define b1010_1001_3 2835349504
#define b1010_1010_3 2852126720
#define b1010_1011_3 2868903936
#define b1010_1100_3 2885681152
#define b1010_1101_3 2902458368
#define b1010_1110_3 2919235584
#define b1010_1111_3 2936012800
#define b1011_0000_3 2952790016
#define b1011_0001_3 2969567232
#define b1011_0010_3 2986344448
#define b1011_0011_3 3003121664
#define b1011_0100_3 3019898880
#define b1011_0101_3 3036676096
#define b1011_0110_3 3053453312
#define b1011_0111_3 3070230528
#define b1011_1000_3 3087007744
#define b1011_1001_3 3103784960
#define b1011_1010_3 3120562176
#define b1011_1011_3 3137339392
#define b1011_1100_3 3154116608
#define b1011_1101_3 3170893824
#define b1011_1110_3 3187671040
#define b1011_1111_3 3204448256
#define b1100_0000_3 3221225472
#define b1100_0001_3 3238002688
#define b1100_0010_3 3254779904
#define b1100_0011_3 3271557120
#define b1100_0100_3 3288334336
#define b1100_0101_3 3305111552
#define b1100_0110_3 3321888768
#define b1100_0111_3 3338665984
#define b1100_1000_3 3355443200
#define b1100_1001_3 3372220416
#define b1100_1010_3 3388997632
#define b1100_1011_3 3405774848
#define b1100_1100_3 3422552064
#define b1100_1101_3 3439329280
#define b1100_1110_3 3456106496
#define b1100_1111_3 3472883712
#define b1101_0000_3 3489660928
#define b1101_0001_3 3506438144
#define b1101_0010_3 3523215360
#define b1101_0011_3 3539992576
#define b1101_0100_3 3556769792
#define b1101_0101_3 3573547008
#define b1101_0110_3 3590324224
#define b1101_0111_3 3607101440
#define b1101_1000_3 3623878656
#define b1101_1001_3 3640655872
#define b1101_1010_3 3657433088
#define b1101_1011_3 3674210304
#define b1101_1100_3 3690987520
#define b1101_1101_3 3707764736
#define b1101_1110_3 3724541952
#define b1101_1111_3 3741319168
#define b1110_0000_3 3758096384
#define b1110_0001_3 3774873600
#define b1110_0010_3 3791650816
#define b1110_0011_3 3808428032
#define b1110_0100_3 3825205248
#define b1110_0101_3 3841982464
#define b1110_0110_3 3858759680
#define b1110_0111_3 3875536896
#define b1110_1000_3 3892314112
#define b1110_1001_3 3909091328
#define b1110_1010_3 3925868544
#define b1110_1011_3 3942645760
#define b1110_1100_3 3959422976
#define b1110_1101_3 3976200192
#define b1110_1110_3 3992977408
#define b1110_1111_3 4009754624
#define b1111_0000_3 4026531840
#define b1111_0001_3 4043309056
#define b1111_0010_3 4060086272
#define b1111_0011_3 4076863488
#define b1111_0100_3 4093640704
#define b1111_0101_3 4110417920
#define b1111_0110_3 4127195136
#define b1111_0111_3 4143972352
#define b1111_1000_3 4160749568
#define b1111_1001_3 4177526784
#define b1111_1010_3 4194304000
#define b1111_1011_3 4211081216
#define b1111_1100_3 4227858432
#define b1111_1101_3 4244635648
#define b1111_1110_3 4261412864
#define b1111_1111_3 4278190080

#endif

