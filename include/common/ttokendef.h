/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _TD_COMMON_TOKEN_H_
#define _TD_COMMON_TOKEN_H_

#define TK_OR                   1
#define TK_AND                  2
#define TK_UNION                3
#define TK_ALL                  4
#define TK_MINUS                5
#define TK_EXCEPT               6
#define TK_INTERSECT            7
#define TK_NK_BITAND            8
#define TK_NK_BITOR             9
#define TK_NK_LSHIFT            10
#define TK_NK_RSHIFT            11
#define TK_NK_PLUS              12
#define TK_NK_MINUS             13
#define TK_NK_STAR              14
#define TK_NK_SLASH             15
#define TK_NK_REM               16
#define TK_NK_CONCAT            17
#define TK_CREATE               18
#define TK_ACCOUNT              19
#define TK_NK_ID                20
#define TK_PASS                 21
#define TK_NK_STRING            22
#define TK_ALTER                23
#define TK_PPS                  24
#define TK_TSERIES              25
#define TK_STORAGE              26
#define TK_STREAMS              27
#define TK_QTIME                28
#define TK_DBS                  29
#define TK_USERS                30
#define TK_CONNS                31
#define TK_STATE                32
#define TK_USER                 33
#define TK_ENABLE               34
#define TK_NK_INTEGER           35
#define TK_SYSINFO              36
#define TK_DROP                 37
#define TK_GRANT                38
#define TK_ON                   39
#define TK_TO                   40
#define TK_REVOKE               41
#define TK_FROM                 42
#define TK_SUBSCRIBE            43
#define TK_NK_COMMA             44
#define TK_READ                 45
#define TK_WRITE                46
#define TK_NK_DOT               47
#define TK_WITH                 48
#define TK_DNODE                49
#define TK_PORT                 50
#define TK_DNODES               51
#define TK_NK_IPTOKEN           52
#define TK_FORCE                53
#define TK_LOCAL                54
#define TK_QNODE                55
#define TK_BNODE                56
#define TK_SNODE                57
#define TK_MNODE                58
#define TK_DATABASE             59
#define TK_USE                  60
#define TK_FLUSH                61
#define TK_TRIM                 62
#define TK_COMPACT              63
#define TK_IF                   64
#define TK_NOT                  65
#define TK_EXISTS               66
#define TK_BUFFER               67
#define TK_CACHEMODEL           68
#define TK_CACHESIZE            69
#define TK_COMP                 70
#define TK_DURATION             71
#define TK_NK_VARIABLE          72
#define TK_MAXROWS              73
#define TK_MINROWS              74
#define TK_KEEP                 75
#define TK_PAGES                76
#define TK_PAGESIZE             77
#define TK_TSDB_PAGESIZE        78
#define TK_PRECISION            79
#define TK_REPLICA              80
#define TK_VGROUPS              81
#define TK_SINGLE_STABLE        82
#define TK_RETENTIONS           83
#define TK_SCHEMALESS           84
#define TK_WAL_LEVEL            85
#define TK_WAL_FSYNC_PERIOD     86
#define TK_WAL_RETENTION_PERIOD 87
#define TK_WAL_RETENTION_SIZE   88
#define TK_WAL_ROLL_PERIOD      89
#define TK_WAL_SEGMENT_SIZE     90
#define TK_STT_TRIGGER          91
#define TK_TABLE_PREFIX         92
#define TK_TABLE_SUFFIX         93
#define TK_NK_COLON             94
#define TK_MAX_SPEED            95
#define TK_START                96
#define TK_TIMESTAMP            97
#define TK_END                  98
#define TK_TABLE                99
#define TK_NK_LP                100
#define TK_NK_RP                101
#define TK_STABLE               102
#define TK_ADD                  103
#define TK_COLUMN               104
#define TK_MODIFY               105
#define TK_RENAME               106
#define TK_TAG                  107
#define TK_SET                  108
#define TK_NK_EQ                109
#define TK_USING                110
#define TK_TAGS                 111
#define TK_BOOL                 112
#define TK_TINYINT              113
#define TK_SMALLINT             114
#define TK_INT                  115
#define TK_INTEGER              116
#define TK_BIGINT               117
#define TK_FLOAT                118
#define TK_DOUBLE               119
#define TK_BINARY               120
#define TK_NCHAR                121
#define TK_UNSIGNED             122
#define TK_JSON                 123
#define TK_VARCHAR              124
#define TK_MEDIUMBLOB           125
#define TK_BLOB                 126
#define TK_VARBINARY            127
#define TK_DECIMAL              128
#define TK_COMMENT              129
#define TK_MAX_DELAY            130
#define TK_WATERMARK            131
#define TK_ROLLUP               132
#define TK_TTL                  133
#define TK_SMA                  134
#define TK_DELETE_MARK          135
#define TK_FIRST                136
#define TK_LAST                 137
#define TK_SHOW                 138
#define TK_PRIVILEGES           139
#define TK_DATABASES            140
#define TK_TABLES               141
#define TK_STABLES              142
#define TK_MNODES               143
#define TK_QNODES               144
#define TK_FUNCTIONS            145
#define TK_INDEXES              146
#define TK_ACCOUNTS             147
#define TK_APPS                 148
#define TK_CONNECTIONS          149
#define TK_LICENCES             150
#define TK_GRANTS               151
#define TK_QUERIES              152
#define TK_SCORES               153
#define TK_TOPICS               154
#define TK_VARIABLES            155
#define TK_CLUSTER              156
#define TK_BNODES               157
#define TK_SNODES               158
#define TK_TRANSACTIONS         159
#define TK_DISTRIBUTED          160
#define TK_CONSUMERS            161
#define TK_SUBSCRIPTIONS        162
#define TK_VNODES               163
#define TK_ALIVE                164
#define TK_LIKE                 165
#define TK_TBNAME               166
#define TK_QTAGS                167
#define TK_AS                   168
#define TK_INDEX                169
#define TK_FUNCTION             170
#define TK_INTERVAL             171
#define TK_COUNT                172
#define TK_LAST_ROW             173
#define TK_TOPIC                174
#define TK_META                 175
#define TK_CONSUMER             176
#define TK_GROUP                177
#define TK_DESC                 178
#define TK_DESCRIBE             179
#define TK_RESET                180
#define TK_QUERY                181
#define TK_CACHE                182
#define TK_EXPLAIN              183
#define TK_ANALYZE              184
#define TK_VERBOSE              185
#define TK_NK_BOOL              186
#define TK_RATIO                187
#define TK_NK_FLOAT             188
#define TK_OUTPUTTYPE           189
#define TK_AGGREGATE            190
#define TK_BUFSIZE              191
#define TK_STREAM               192
#define TK_INTO                 193
#define TK_TRIGGER              194
#define TK_AT_ONCE              195
#define TK_WINDOW_CLOSE         196
#define TK_IGNORE               197
#define TK_EXPIRED              198
#define TK_FILL_HISTORY         199
#define TK_UPDATE               200
#define TK_SUBTABLE             201
#define TK_KILL                 202
#define TK_CONNECTION           203
#define TK_TRANSACTION          204
#define TK_BALANCE              205
#define TK_VGROUP               206
#define TK_MERGE                207
#define TK_REDISTRIBUTE         208
#define TK_SPLIT                209
#define TK_DELETE               210
#define TK_INSERT               211
#define TK_NULL                 212
#define TK_NK_QUESTION          213
#define TK_NK_ARROW             214
#define TK_ROWTS                215
#define TK_QSTART               216
#define TK_QEND                 217
#define TK_QDURATION            218
#define TK_WSTART               219
#define TK_WEND                 220
#define TK_WDURATION            221
#define TK_IROWTS               222
#define TK_ISFILLED             223
#define TK_CAST                 224
#define TK_NOW                  225
#define TK_TODAY                226
#define TK_TIMEZONE             227
#define TK_CLIENT_VERSION       228
#define TK_SERVER_VERSION       229
#define TK_SERVER_STATUS        230
#define TK_CURRENT_USER         231
#define TK_CASE                 232
#define TK_WHEN                 233
#define TK_THEN                 234
#define TK_ELSE                 235
#define TK_BETWEEN              236
#define TK_IS                   237
#define TK_NK_LT                238
#define TK_NK_GT                239
#define TK_NK_LE                240
#define TK_NK_GE                241
#define TK_NK_NE                242
#define TK_MATCH                243
#define TK_NMATCH               244
#define TK_CONTAINS             245
#define TK_IN                   246
#define TK_JOIN                 247
#define TK_INNER                248
#define TK_SELECT               249
#define TK_DISTINCT             250
#define TK_WHERE                251
#define TK_PARTITION            252
#define TK_BY                   253
#define TK_SESSION              254
#define TK_STATE_WINDOW         255
#define TK_EVENT_WINDOW         256
#define TK_SLIDING              257
#define TK_FILL                 258
#define TK_VALUE                259
#define TK_VALUE_F              260
#define TK_NONE                 261
#define TK_PREV                 262
#define TK_NULL_F               263
#define TK_LINEAR               264
#define TK_NEXT                 265
#define TK_HAVING               266
#define TK_RANGE                267
#define TK_EVERY                268
#define TK_ORDER                269
#define TK_SLIMIT               270
#define TK_SOFFSET              271
#define TK_LIMIT                272
#define TK_OFFSET               273
#define TK_ASC                  274
#define TK_NULLS                275
#define TK_ABORT                276
#define TK_AFTER                277
#define TK_ATTACH               278
#define TK_BEFORE               279
#define TK_BEGIN                280
#define TK_BITAND               281
#define TK_BITNOT               282
#define TK_BITOR                283
#define TK_BLOCKS               284
#define TK_CHANGE               285
#define TK_COMMA                286
#define TK_CONCAT               287
#define TK_CONFLICT             288
#define TK_COPY                 289
#define TK_DEFERRED             290
#define TK_DELIMITERS           291
#define TK_DETACH               292
#define TK_DIVIDE               293
#define TK_DOT                  294
#define TK_EACH                 295
#define TK_FAIL                 296
#define TK_FILE                 297
#define TK_FOR                  298
#define TK_GLOB                 299
#define TK_ID                   300
#define TK_IMMEDIATE            301
#define TK_IMPORT               302
#define TK_INITIALLY            303
#define TK_INSTEAD              304
#define TK_ISNULL               305
#define TK_KEY                  306
#define TK_MODULES              307
#define TK_NK_BITNOT            308
#define TK_NK_SEMI              309
#define TK_NOTNULL              310
#define TK_OF                   311
#define TK_PLUS                 312
#define TK_PRIVILEGE            313
#define TK_RAISE                314
#define TK_REPLACE              315
#define TK_RESTRICT             316
#define TK_ROW                  317
#define TK_SEMI                 318
#define TK_STAR                 319
#define TK_STATEMENT            320
#define TK_STRICT               321
#define TK_STRING               322
#define TK_TIMES                323
#define TK_VALUES               324
#define TK_VARIABLE             325
#define TK_VIEW                 326
#define TK_WAL                  327

#define TK_NK_SPACE   600
#define TK_NK_COMMENT 601
#define TK_NK_ILLEGAL 602
#define TK_NK_HEX     603  // hex number  0x123
#define TK_NK_OCT     604  // oct number
#define TK_NK_BIN     605  // bin format data 0b111

#define TK_NK_NIL 65535

#endif /*_TD_COMMON_TOKEN_H_*/
