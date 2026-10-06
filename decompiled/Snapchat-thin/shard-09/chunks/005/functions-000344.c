/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e50404; end: 106e5040b; -[SCNCslResultDoc docValues] */

undefined8 FUN_106e50404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e5040c; end: 106e50427; -[SCNCslResultDoc .cxx_destruct] */

void FUN_106e5040c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106e50428; end: 106e504cb; -[SCNCslSearchError initWithMessage:] */

undefined1 * FUN_106e50428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f73f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e504cc; end: 106e504d3; -[SCNCslSearchError message] */

undefined8 FUN_106e504cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e504d4; end: 106e504df; -[SCNCslSearchError .cxx_destruct] */

void FUN_106e504d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e504e0; end: 106e505f3; -[SCNCslSearchIndexOptions initWithUseCase:id:trieOptions:stickerOptions:] */

undefined1 *
FUN_106e504e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f7400;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e505f4; end: 106e505fb; -[SCNCslSearchIndexOptions useCase] */

undefined8 FUN_106e505f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e505fc; end: 106e50603; -[SCNCslSearchIndexOptions id] */

undefined8 FUN_106e505fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e50604; end: 106e5060b; -[SCNCslSearchIndexOptions trieOptions] */

undefined8 FUN_106e50604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e5060c; end: 106e50613; -[SCNCslSearchIndexOptions stickerOptions] */

undefined8 FUN_106e5060c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e50614; end: 106e5064f; -[SCNCslSearchIndexOptions .cxx_destruct] */

void FUN_106e50614(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e50650; end: 106e506f3; -[SCNCslSearchQuery initWithFieldQueries:] */

undefined1 * FUN_106e50650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7408;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e506f4; end: 106e506fb; -[SCNCslSearchQuery fieldQueries] */

undefined8 FUN_106e506f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e506fc; end: 106e50707; -[SCNCslSearchQuery .cxx_destruct] */

void FUN_106e506fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e50708; end: 106e507ab; -[SCNCslSearchResult initWithDocs:] */

undefined1 * FUN_106e50708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7410;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e507ac; end: 106e507b3; -[SCNCslSearchResult docs] */

undefined8 FUN_106e507ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e507b4; end: 106e507bf; -[SCNCslSearchResult .cxx_destruct] */

void FUN_106e507b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e507c0; end: 106e5086b; -[SCNCslStickerOptions initWithSource:dataType:] */

undefined1 *
FUN_106e507c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7418;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e5086c; end: 106e50873; -[SCNCslStickerOptions source] */

undefined8 FUN_106e5086c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e50874; end: 106e5087b; -[SCNCslStickerOptions dataType] */

undefined8 FUN_106e50874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e5087c; end: 106e50887; -[SCNCslStickerOptions .cxx_destruct] */

void FUN_106e5087c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e50888; end: 106e5092b; -[SCNCslTagQuery initWithTags:] */

undefined1 * FUN_106e50888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7420;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e5092c; end: 106e50933; -[SCNCslTagQuery tags] */

undefined8 FUN_106e5092c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e50934; end: 106e5093f; -[SCNCslTagQuery .cxx_destruct] */

void FUN_106e50934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e50940; end: 106e509af; -[SCNCslTrieOptions initWithExactMatchScore:partialMatchScore:matchValidMinimumScore:maxNumWordsForQuery:maxTagResults:] */

void FUN_106e50940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f7428;
  uStack_50 = param_4;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined4 *)((long)puVar1 + 8) = param_6;
    *(undefined4 *)((long)puVar1 + 0xc) = param_7;
  }
  return;
}



/* Entry: 106e509b0; end: 106e509b7; -[SCNCslTrieOptions exactMatchScore] */

undefined8 FUN_106e509b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e509b8; end: 106e509bf; -[SCNCslTrieOptions partialMatchScore] */

undefined8 FUN_106e509b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e509c0; end: 106e509c7; -[SCNCslTrieOptions matchValidMinimumScore] */

undefined8 FUN_106e509c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e509c8; end: 106e509cf; -[SCNCslTrieOptions maxNumWordsForQuery] */

undefined4 FUN_106e509c8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106e509d0; end: 106e509d7; -[SCNCslTrieOptions maxTagResults] */

undefined4 FUN_106e509d0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106e509d8; end: 106e50a03;  */

long FUN_106e509d8(long param_1)

{
  func_0x000106e4e9c4(param_1 + 0x80);
  func_0x000106e4ed24(param_1 + 0x10);
  return param_1;
}



/* Entry: 106e50a04; end: 106e50b13;  */

void FUN_106e50a04(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_106e50b14();
  if (param_2 == 0) {
    FUN_106e54750(auStack_50);
    func_0x000100450bb4(&uStack_30,auStack_50);
    func_0x000100450be4(auStack_50);
  }
  else {
    FUN_106e547f8();
    FUN_106e50b28(&uStack_40,auStack_50);
    func_0x000106e50c54(auStack_50);
  }
  if ((bRam000000011381e970 & 1) == 0) {
    iVar3 = 0x1381e970;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_106e50b4c(0x11381e960,&uStack_30,&uStack_40);
      ___cxa_guard_release(0x11381e970);
    }
  }
  lVar2 = lRam000000011381e968;
  uVar1 = uRam000000011381e960;
  param_1[1] = lRam000000011381e968;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x000106e51640();
    } while (extraout_w10 != 0);
  }
  func_0x000106e50c54(&uStack_40);
  func_0x000100450be4(&uStack_30);
  return;
}



/* Entry: 106e50b14; end: 106e50b27;  */

void FUN_106e50b14(void)

{
  undefined1 uStack_11;
  
  uStack_11 = 0;
  func_0x00010011befc(0x38,1,&UNK_10f3dbe09,0x1e,&uStack_11,0);
  return;
}



/* Entry: 106e50b28; end: 106e50b4b;  */

void FUN_106e50b28(void)

{
  func_0x000100450b94();
  func_0x000106e50c54();
  return;
}



/* Entry: 106e50b4c; end: 106e50b73;  */

void FUN_106e50b4c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_106e512a4(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 106e50b74; end: 106e50bc7;  */

void FUN_106e50b74(undefined4 *param_1,undefined4 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000106e5168c();
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  FUN_106e50bc8(unaff_x19 + 0x48,unaff_x20 + 0x48);
  return;
}



/* Entry: 106e50bc8; end: 106e50bff;  */

undefined1 * FUN_106e50bc8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_106e50c00();
  return param_1;
}



/* Entry: 106e50c00; end: 106e50c13;  */

void FUN_106e50c00(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_106e50c30();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 106e50c14; end: 106e50c2f;  */

void FUN_106e50c14(long param_1)

{
  FUN_106e50c30();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 106e50c30; end: 106e50c7b;  */

void FUN_106e50c30(long param_1,long param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 106e50c7c; end: 106e50d13;  */

undefined8 * FUN_106e50c7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  *param_1 = FUN_106e50d14;
  param_1[1] = &PTR_FUN_11097fe08;
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  *puVar1 = *param_2;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_2 + 1);
  FUN_106e50b74(puVar1 + 2,param_2 + 2);
  lVar2 = param_2[0x11];
  uVar3 = param_2[0x10];
  puVar1[0x11] = param_2[0x11];
  puVar1[0x10] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000106e51640();
    } while (extraout_w10 != 0);
  }
  param_1[2] = puVar1;
  return param_1;
}



/* Entry: 106e50d14; end: 106e51083;  */

void FUN_106e50d14(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_80 [24];
  char cStack_68;
  undefined1 uStack_51;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  plVar8 = *(long **)(param_1 + 0x10);
  lVar9 = *plVar8;
  puStack_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  func_0x0001005e774c(&puStack_b0,&UNK_10f3dbe28,0x18,0,0);
  func_0x00010006369c(lVar9 + 0x28,puStack_b0,(int)puStack_a8 - (int)puStack_b0);
  func_0x000100100fec(&puStack_b0);
  if (*(char *)((long)plVar8 + 9) == '\x01') {
    uStack_51 = (undefined1)plVar8[1];
  }
  else {
    puVar4 = &DAT_10f3dbac3;
    func_0x0001003ba264(&DAT_10f3dbac3,0x1e,0);
    uStack_51 = puVar4 == (undefined *)0x2;
  }
  puVar5 = (undefined8 *)0x140;
  __Znwm();
  plVar10 = puVar5 + 1;
  *plVar10 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_11097fdc8;
  puVar1 = puVar5 + 3;
  FUN_106e5170c(puVar1,plVar8 + 2,lVar9 + 0x28,&uStack_51);
  puVar5[3] = &PTR_FUN_110980028;
  puStack_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  puStack_50 = puVar1;
  puStack_48 = puVar5;
  FUN_106e51244(&puStack_b0);
  puVar6 = puVar1;
  FUN_106e51888(auStack_80);
  if (cStack_68 == '\x01') {
    FUN_106e5f904();
    func_0x000106e51698();
    func_0x000106e516e4(4);
    ppuVar7 = &puStack_b0;
    FUN_106e51084(ppuVar7);
    (**(code **)(*(long *)*puVar6 + 8))((long *)*puVar6,ppuVar7,1);
    func_0x000106e51674();
    plVar8 = (long *)plVar8[0x10];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_d0,auStack_80)
    ;
    puStack_a8 = puStack_c8;
    puStack_b0 = puStack_d0;
    uStack_a0 = uStack_c0;
    puStack_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    puStack_d0 = (undefined8 *)0x0;
    uStack_98 = 0;
    (**(code **)(*plVar8 + 0x10))(plVar8,&puStack_b0);
    func_0x000106e51660();
    func_0x000106e51684();
    func_0x000106e516b0();
  }
  else {
    func_0x000106e516b0();
    plVar8 = (long *)plVar8[0x10];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_98 = 1;
    puStack_b0 = puVar1;
    puStack_a8 = puVar5;
    (**(code **)(*plVar8 + 0x10))(plVar8,&puStack_b0);
    func_0x000106e51660();
  }
  FUN_106e51244(&puStack_50);
  return;
}



/* Entry: 106e51084; end: 106e510ef;  */

undefined8 FUN_106e51084(undefined8 param_1,ulong param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38,(&PTR_DAT_113187d90)[param_2 >> 0x10 & 0xffff]);
  FUN_106e51158(param_1,auStack_38,(&PTR_DAT_113187da0)[(uint)param_2 & 0xffff]);
  func_0x000106e5167c();
  return param_1;
}



/* Entry: 106e510f0; end: 106e510f7;  */

undefined8 * FUN_106e510f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097ff38;
  func_0x0001000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 106e510f8; end: 106e5110b;  */

void FUN_106e510f8(void)

{
  func_0x000106e51114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5110c; end: 106e51123;  */

void FUN_106e5110c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e516c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 106e51124; end: 106e51137;  */

void FUN_106e51124(void)

{
  func_0x000106e511f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e51138; end: 106e51157;  */

undefined4 FUN_106e51138(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 106e51158; end: 106e511bb;  */

undefined8 FUN_106e51158(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_3;
  _strlen(param_3);
  FUN_106e511bc(param_1,&uStack_40,param_3,uVar1);
  func_0x000106e516d8();
  return param_3;
}



/* Entry: 106e511bc; end: 106e51223;  */

long FUN_106e511bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x0001000fecf4(param_1 + 8);
  func_0x0001004c38a0(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 106e51224; end: 106e51243;  */

void FUN_106e51224(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 106e51244; end: 106e5126b;  */

long FUN_106e51244(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 106e5126c; end: 106e5128b;  */

void FUN_106e5126c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_106e509d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 106e5128c; end: 106e512a3;  */

void FUN_106e5128c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 106e512a4; end: 106e51343;  */

undefined1 * FUN_106e512a4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  puVar3 = auStack_50;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_106e51344(auStack_50,1);
  FUN_106e51398(lStack_40,param_3,param_4);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000106e51630();
  func_0x000106e516f8(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000106e51630();
  func_0x000106e51658();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_106e5136c();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 106e51344; end: 106e5136b;  */

long FUN_106e51344(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_106e5136c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 106e5136c; end: 106e51397;  */

undefined8 * FUN_106e5136c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    puVar1 = (undefined8 *)(param_2 * 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11097fe30;
  FUN_106e513f8(param_1 + 3);
  return param_1;
}



/* Entry: 106e51398; end: 106e513d7;  */

undefined8 * FUN_106e51398(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11097fe30;
  FUN_106e513f8(param_1 + 3);
  return param_1;
}



/* Entry: 106e513d8; end: 106e513db;  */

void FUN_106e513d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11097fe30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106e513dc; end: 106e513ef;  */

void FUN_106e513dc(void)

{
  FUN_106e51620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e513f0; end: 106e513f7;  */

void FUN_106e513f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e516c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 106e513f8; end: 106e5148b;  */

undefined8 * FUN_106e513f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000106e51640();
    } while (extraout_w10 != 0);
  }
  uVar4 = param_3[1];
  uVar3 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x000106e51640();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = &PTR_FUN_11097fe80;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[4] = uVar4;
  param_1[3] = uVar3;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = &PTR_DAT_110d13d88;
  func_0x000106e50c54(&uStack_40);
  func_0x000100450be4(&uStack_30);
  return param_1;
}



/* Entry: 106e5148c; end: 106e5148f;  */

undefined8 * FUN_106e5148c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11097fe80;
  func_0x00010b5a2440(param_1 + 5);
  func_0x000106e50c54(param_1 + 3);
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 106e51490; end: 106e514a3;  */

void FUN_106e51490(void)

{
  FUN_106e515dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e514a4; end: 106e515db;  */

long * FUN_106e514a4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  code *pcVar1;
  int extraout_w10;
  long *plVar2;
  long *plVar3;
  long lStack_128;
  undefined2 uStack_120;
  undefined1 auStack_118 [112];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *apuStack_90 [11];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = 0;
  lStack_128 = param_1;
  FUN_106e50b74(auStack_118);
  uStack_a0 = param_3[1];
  uStack_a8 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x000106e51640();
    } while (extraout_w10 != 0);
  }
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 == (long *)0x0) {
    plVar2 = *(long **)(param_1 + 8);
    func_0x000106e516c4();
    plVar3 = &lStack_98;
    (**(code **)(*plVar2 + 0x10))(plVar2,&lStack_98);
    pcVar1 = (code *)*apuStack_90[0];
  }
  else {
    func_0x000106e516c4();
    (**(code **)(*plVar3 + 0x10))(plVar3,&lStack_98);
    pcVar1 = (code *)*apuStack_90[0];
  }
  (*pcVar1)(apuStack_90);
  plVar2 = &lStack_128;
  FUN_106e509d8();
  func_0x000106e516f8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (*(code *)*apuStack_90[0])(plVar3 + 1);
    plVar3 = &lStack_128;
    FUN_106e509d8();
    func_0x000106e51658();
    *plVar3 = (long)&PTR_FUN_11097fe80;
    func_0x00010b5a2440(plVar3 + 5);
    func_0x000106e50c54(plVar3 + 3);
    func_0x000100450be4(plVar3 + 1);
    return plVar3;
  }
  return plVar2;
}



/* Entry: 106e515dc; end: 106e5161f;  */

undefined8 * FUN_106e515dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11097fe80;
  func_0x00010b5a2440(param_1 + 5);
  func_0x000106e50c54(param_1 + 3);
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 106e51620; end: 106e5170b;  */

void FUN_106e51620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11097fe30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106e5170c; end: 106e5183f;  */

undefined8 * FUN_106e5170c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  
  *param_1 = &PTR_DAT_11097ff70;
  FUN_106e50b74(param_1 + 1);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  param_1[0x1b] = 0x3ff0000000000000;
  param_1[0x1a] = 0x4024000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3200000008;
  param_1[0x1e] = 0;
  FUN_106e51840(param_1 + 0x1f,param_3);
  bVar1 = *param_4;
  *(byte *)(param_1 + 0x23) = bVar1;
  param_1[0x24] = 0;
  if ((bVar1 & 1) != 0) {
    FUN_106e5184c(&uStack_58);
    uVar2 = uStack_58;
    uStack_58 = 0;
    FUN_106e52bc0(param_1 + 0x24,uVar2);
    func_0x000106e52ba0(&uStack_58);
  }
  return param_1;
}



/* Entry: 106e51840; end: 106e5184b;  */

undefined8 * FUN_106e51840(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d13d88;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b5a23d8(param_1,param_2);
  return param_1;
}



/* Entry: 106e5184c; end: 106e51887;  */

void FUN_106e5184c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x270;
  __Znwm();
  func_0x000106e52e88();
  *param_1 = uVar1;
  return;
}



/* Entry: 106e51888; end: 106e51b17;  */

void FUN_106e51888(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  code *extraout_x8;
  long lVar9;
  long lVar10;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pppuVar5 = &ppuStack_b0;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppuStack_b0,&UNK_10f3dbe6b,param_2 + 2);
  func_0x00010063438c(auStack_70,&ppuStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  lStack_88 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_78 = 1;
  puStack_80 = (undefined1 *)pppuVar5;
  FUN_106e5f904();
  uStack_a0 = 0;
  uStack_98 = 0;
  ppuStack_b0 = &PTR_FUN_11097fed0;
  uStack_a8 = 0;
  uStack_90 = 3;
  func_0x000106e54360();
  func_0x000106e544c8();
  func_0x000106e54588();
  func_0x000106e54688();
  func_0x000106e5445c();
  if ((int)param_2[1] == 0) {
    if ((char)param_2[0xe] == '\x01') {
      uVar1 = param_2[0xb];
      if (-1 < (char)*(byte *)((long)param_2 + 0x67)) {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x67);
      }
      if (uVar1 != 0) goto LAB_106e51928;
    }
    func_0x00010002b838(&uStack_58,&UNK_10f3dbe41);
    uVar4 = uStack_48;
    uVar3 = uStack_50;
    uVar2 = uStack_58;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[2] = uVar4;
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined **)0x0;
    *(undefined1 *)(param_1 + 3) = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  }
  else {
LAB_106e51928:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    puVar6 = param_1;
    FUN_106e51224();
    __ZNSt3__16chrono12system_clock3nowEv();
    param_2[0x1e] = (long)puVar6;
    (**(code **)(*param_2 + 0x20))(param_1,param_2);
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      FUN_106e51224(param_1);
      FUN_106e5f904();
      func_0x000106e54598();
      uStack_90 = 0;
      func_0x000106e54360();
      func_0x000106e544c8();
      func_0x0001002acb3c(&lStack_88);
      func_0x000106e54704();
      (*extraout_x8)();
      func_0x000106e5445c();
      (**(code **)(*param_2 + 0x18))();
      plVar8 = param_2;
      FUN_106e5f904();
      plVar7 = plVar8;
      func_0x000106e54598();
      uStack_90 = 8;
      func_0x000106e54360();
      func_0x000106e544c8();
      lVar10 = (long)(int)param_2;
      plVar8 = (long *)*plVar8;
      (**(code **)(*plVar8 + 0x10))(plVar8,plVar7,lVar10);
      func_0x000106e5445c();
      if ((int)param_2 == 0) {
        lVar9 = 0;
      }
      else {
        plVar8 = &lStack_88;
        func_0x0001002acb3c();
        lVar9 = 0;
        if (lVar10 != 0) {
          lVar9 = ((long)plVar8 * 1000) / lVar10;
        }
      }
      FUN_106e5f904();
      plVar7 = plVar8;
      func_0x000106e54598();
      uStack_90 = 2;
      func_0x000106e54360();
      func_0x000106e544c8();
      (*(code *)**(undefined8 **)*plVar8)((undefined8 *)*plVar8,plVar7,lVar9);
      func_0x000106e5445c();
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
    }
  }
  func_0x000100078bd8(auStack_70);
  return;
}



/* Entry: 106e51b18; end: 106e51b23;  */

long FUN_106e51b18(long *param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar5;
  long lVar6;
  long *plStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar4 = param_4 - (long)param_3 >> 3;
  if (0 < lVar4) {
    plVar3 = param_1 + 2;
    lVar5 = param_1[1];
    if (*plVar3 - lVar5 >> 3 < lVar4) {
      plVar2 = param_1;
      FUN_106e528f0(param_1,lVar4 + (lVar5 - *param_1 >> 3));
      lVar5 = *param_1;
      plStack_78 = (long *)0x0;
      plStack_58 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x00010048ac4c();
        plStack_78 = plVar3;
      }
      puStack_70 = (undefined8 *)((long)plStack_78 + (param_2 - lVar5));
      plStack_60 = plStack_78 + (long)plVar2;
      puStack_68 = puStack_70 + lVar4;
      puVar1 = puStack_70;
      for (lVar4 = lVar4 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      FUN_106e52930(param_1,&plStack_78,param_2);
      func_0x000106e5466c();
    }
    else {
      lVar6 = lVar5 - param_2;
      if (lVar6 >> 3 < lVar4) {
        param_4 = param_4 - ((long)param_3 + lVar6);
        if (param_4 != 0) {
          _memmove(lVar5,(long)param_3 + lVar6,param_4);
        }
        param_1[1] = lVar5 + param_4;
        if (0 < lVar6 >> 3) {
          FUN_106e5472c();
          puVar1 = extraout_x8;
          for (; lVar6 != 0; lVar6 = lVar6 + -8) {
            *puVar1 = *param_3;
            puVar1 = puVar1 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
      else {
        FUN_106e5472c();
        puVar1 = extraout_x8_00;
        for (lVar4 = lVar4 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
          *puVar1 = *param_3;
          puVar1 = puVar1 + 1;
          param_3 = param_3 + 1;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 106e51b24; end: 106e51d7f;  */

void FUN_106e51b24(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long ****pppplVar2;
  long *plVar3;
  long ***ppplVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  long *plVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [16];
  long lStack_78;
  
  func_0x0001003a9ccc();
  lStack_98 = 0;
  ppplStack_a0 = (long ***)0x0;
  plVar7 = (long *)(param_3 + 0x10);
  ppplStack_a8 = (long ***)&ppplStack_a0;
  lStack_90 = param_3;
LAB_106e51b64:
  do {
    do {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        FUN_106e4f8e0(param_1,lStack_98);
        while ((long ****)ppplStack_a8 != &ppplStack_a0) {
          puVar5 = unaff_x20;
          FUN_106e51d80();
          FUN_106e51f50(unaff_x21 + 0x78,ppplStack_a8 + 4);
          uVar1 = param_1[1];
          if (uVar1 < (ulong)param_1[2]) {
            func_0x000106e54654(*puVar5,uVar1);
            lVar6 = uVar1 + 0x30;
          }
          else {
            plVar7 = param_1;
            FUN_106e4fcb0(param_1,(long)(uVar1 - *param_1) / 0x30 + 1);
            FUN_106e4fa1c(auStack_88,plVar7,(param_1[1] - *param_1) / 0x30,param_1 + 2);
            func_0x000106e54654(*puVar5,lStack_78);
            lStack_78 = lStack_78 + 0x30;
            FUN_106e4f990(param_1,auStack_88);
            lVar6 = param_1[1];
            func_0x000106e4fc40(auStack_88);
          }
          param_1[1] = lVar6;
          func_0x00010002c7d4();
        }
        func_0x000106e53078(ppplStack_a0);
        return;
      }
      pppplVar9 = &ppplStack_a0;
      pppplVar8 = &ppplStack_a0;
      pppplVar2 = (long ****)ppplStack_a0;
    } while ((double)plVar7[3] < *(double *)(param_4 + 0x10));
    while (pppplVar2 != (long ****)0x0) {
      while( true ) {
        pppplVar8 = pppplVar2;
        plVar3 = &lStack_90;
        FUN_106e530a8(plVar3,plVar7 + 2,pppplVar8 + 4);
        if ((int)plVar3 == 0) break;
        pppplVar2 = (long ****)*pppplVar8;
        pppplVar9 = pppplVar8;
        if ((long ****)*pppplVar8 == (long ****)0x0) goto LAB_106e51be4;
      }
      plVar3 = &lStack_90;
      FUN_106e530a8(plVar3,pppplVar8 + 4,plVar7 + 2);
      if ((int)plVar3 == 0) {
        if (*pppplVar9 != (long ***)0x0) goto LAB_106e51b64;
        break;
      }
      pppplVar9 = pppplVar8 + 1;
      pppplVar2 = (long ****)pppplVar8[1];
    }
LAB_106e51be4:
    ppplVar4 = (long ***)0x28;
    __Znwm();
    ppplVar4[4] = (long **)plVar7[2];
    *ppplVar4 = (long **)0x0;
    ppplVar4[1] = (long **)0x0;
    ppplVar4[2] = (long **)pppplVar8;
    *pppplVar9 = ppplVar4;
    if ((long ****)*ppplStack_a8 != (long ****)0x0) {
      ppplStack_a8 = (long ***)*ppplStack_a8;
    }
    func_0x00010002c5b0(ppplStack_a0);
    lStack_98 = lStack_98 + 1;
  } while( true );
}



/* Entry: 106e51d80; end: 106e51f4f;  */

long * FUN_106e51d80(float param_1,float param_2,long *param_3,ulong *param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x23;
  
  uVar9 = *param_4;
  uVar8 = param_3[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar5 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_106e51e2c;
          uVar5 = plVar7[1];
          if (uVar5 != uVar9) break;
          if (plVar7[2] == uVar9) goto LAB_106e51f28;
        }
        if ((uVar8 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar8 <= uVar5) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar5 / uVar8;
          }
          uVar5 = uVar5 - uVar2 * uVar8;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_106e51e2c:
  plVar1 = param_3 + 2;
  plVar7 = (long *)0x20;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar9;
  plVar7[2] = uVar9;
  plVar7[3] = 0;
  func_0x000106e546a8();
  if ((uVar8 == 0) || (param_2 * (float)uVar8 < param_1)) {
    func_0x000106e545a8(uVar8 << 1);
    func_0x000106e52ee0(param_3);
    uVar8 = param_3[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar3 * uVar8;
      }
    }
  }
  lVar4 = *param_3;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar7 = *plVar1;
    *plVar1 = (long)plVar7;
    *(long **)(lVar4 + unaff_x23 * 8) = plVar1;
    if (*plVar7 != 0) {
      uVar9 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar3 * uVar8;
      }
      *(long **)(lVar4 + uVar9 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  func_0x000106e545c0();
  FUN_106e53050();
LAB_106e51f28:
  return plVar7 + 3;
}



/* Entry: 106e51f50; end: 106e51f83;  */

long FUN_106e51f50(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_106e53128(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x18;
}



/* Entry: 106e51f84; end: 106e5271f;  */

void FUN_106e51f84(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  ulong **ppuVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  long extraout_x8;
  ulong uVar16;
  ulong extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x10;
  long extraout_x10_00;
  undefined8 extraout_x10_01;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  ulong *puStack_160;
  ulong uStack_158;
  ulong auStack_150 [2];
  undefined8 uStack_140;
  undefined8 **ppuStack_138;
  undefined1 uStack_130;
  undefined1 auStack_128 [24];
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 auStack_f0 [3];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&puStack_b0,&UNK_10f3dbe7b,param_2 + 0x10);
  func_0x00010063438c(auStack_128,&puStack_b0);
  ppuVar9 = &puStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  uStack_140 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_130 = 1;
  ppuStack_138 = ppuVar9;
  FUN_106e5f904();
  func_0x000106e54504();
  uStack_90 = 6;
  func_0x000106e54360();
  func_0x000106e544e0();
  func_0x000106e54588();
  func_0x000106e54688();
  func_0x000106e54414();
  puStack_160 = (ulong *)0x0;
  uStack_158 = 0;
  auStack_150[0] = 0;
  puVar13 = (undefined8 *)(param_2 + 0xc0);
  puVar17 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  do {
    if (puVar17 == puVar3) {
      FUN_106e5f904();
      func_0x000106e54718();
      uStack_90 = 1;
      func_0x000106e54360();
      func_0x000106e544e0();
      puVar13 = &uStack_140;
      func_0x0001002acb3c(puVar13);
      func_0x000106e54704();
      (*extraout_x8_04)();
      func_0x000106e54414();
      FUN_106e5f904();
      func_0x000106e54718();
      uStack_90 = 9;
      func_0x000106e54360();
      func_0x000106e544e0();
      (**(code **)(*plRam0000000000000018 + 0x10))
                (plRam0000000000000018,puVar13,(long)(uStack_158 - (long)puStack_160) / 0x30);
      func_0x000106e54414();
      uVar20 = auStack_150[0];
      uVar21 = uStack_158;
      puVar10 = puStack_160;
      uStack_158 = 0;
      auStack_150[0] = 0;
      puStack_160 = (ulong *)0x0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1e0 = 0;
      param_1[1] = uVar21;
      *param_1 = puVar10;
      param_1[2] = uVar20;
      puStack_a8 = (ulong *)0x0;
      puStack_a0 = (ulong *)0x0;
      puStack_b0 = (ulong *)0x0;
      *(undefined1 *)(param_1 + 3) = 1;
      FUN_106e4e11c();
      FUN_106e4e11c(&uStack_1e0);
LAB_106e5261c:
      FUN_106e4e11c(&puStack_160);
      func_0x000100078bd8(auStack_128);
      return;
    }
    if (*(char *)(puVar17 + 6) != '\x01') {
      FUN_106e5f904();
      func_0x000106e54504();
      uStack_90 = 7;
      func_0x000106e54360();
      func_0x000106e544e0();
      func_0x000106e54588();
      func_0x000106e54688();
      func_0x000106e54414();
      func_0x00010002b838(&uStack_1c8,&UNK_10f3dbe8d);
      uVar5 = uStack_1b8;
      uVar4 = uStack_1c0;
      uVar2 = uStack_1c8;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1c8 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_110 = 0;
      param_1[2] = uVar5;
      param_1[1] = uVar4;
      *param_1 = uVar2;
      puStack_a8 = (ulong *)0x0;
      puStack_a0 = (ulong *)0x0;
      puStack_b0 = (ulong *)0x0;
      *(undefined1 *)(param_1 + 3) = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1c8);
      goto LAB_106e5261c;
    }
    if (*(long *)(param_2 + 0x120) == 0) {
      func_0x00010015bc98(&lStack_178,puVar17 + 3);
    }
    else {
      lVar14 = (long)*(char *)((long)puVar17 + 0x17);
      if (lVar14 < 0) {
        lVar14 = puVar17[1];
        if (lVar14 == 0) goto LAB_106e520a0;
        puVar11 = (undefined8 *)*puVar17;
      }
      else {
        puVar11 = puVar17;
        if (*(char *)((long)puVar17 + 0x17) == '\0') {
LAB_106e520a0:
          lStack_178 = 0;
          lStack_170 = 0;
          uStack_168 = 0;
          goto LAB_106e520a8;
        }
      }
      FUN_106e55a00(&lStack_178,*(long *)(param_2 + 0x120),puVar11,lVar14,0);
    }
LAB_106e520a8:
    lVar1 = lStack_170;
    lVar18 = lStack_178;
    lVar14 = 0x28;
    if (*(char *)(param_2 + 0x48) == '\0') {
      lVar14 = 0xd0;
    }
    puVar10 = (ulong *)(param_2 + lVar14);
    uStack_1a8 = puVar10[1];
    uStack_1b0 = *puVar10;
    uStack_1a0 = puVar10[2];
    uStack_198._4_4_ = (int)(puVar10[3] >> 0x20);
    lVar14 = (long)uStack_198._4_4_;
    puStack_a8 = (ulong *)0x0;
    puStack_b0 = (ulong *)0x0;
    uStack_98 = 0;
    puStack_a0 = (ulong *)0x0;
    uStack_90 = 0x3f800000;
    uStack_198 = puVar10[3];
    func_0x000106e52ee0(&puStack_b0,lVar14);
    uVar20 = (ulong)((int)((lVar1 - lVar18) / 0x18) + -1);
    for (uVar21 = uVar20; -1 < (long)uVar21; uVar21 = uVar21 - 1) {
      iVar15 = (int)uVar21;
      if (iVar15 < 4) {
        iVar15 = 3;
      }
      uVar22 = (ulong)(iVar15 - 3);
      while ((long)uVar22 <= (long)uVar21) {
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        cVar7 = SBORROW8(uVar22,uVar21);
        cVar8 = (long)(uVar22 - uVar21) < 0;
        if (uVar22 == uVar21) {
          puVar11 = &uStack_d8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (puVar11,lStack_178 + uVar21 * 0x18);
        }
        else {
          func_0x000106e543d0(uVar21 * 0x18 + 0x18 + lStack_178);
          func_0x000106e5469c();
          func_0x000106e54540();
          func_0x000106e54638();
          puVar11 = auStack_f0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        }
        func_0x000106e54448();
        lVar14 = extraout_x10;
        if (cVar8 == cVar7) {
          lVar14 = extraout_x8;
        }
        if ((lVar14 == 0) || (func_0x000106e54520(), puVar13 == puVar11)) {
LAB_106e521c8:
          uVar23 = 0;
          uStack_110 = 0;
          uStack_108 = 0;
          uStack_100 = 0;
          uVar19 = 0;
        }
        else {
          puVar12 = &uStack_d8;
          func_0x000100125af4(puVar12,puVar11 + 4);
          if (((uint)puVar12 >> 7 & 1) != 0) goto LAB_106e521c8;
          func_0x00010048af58(&uStack_110,puVar11 + 7);
          uVar19 = uStack_110;
          uVar23 = uStack_108;
        }
        do {
          uVar16 = uVar19;
          uVar6 = uVar23 <= uVar16;
          if (uVar16 == uVar23) goto LAB_106e521f4;
          func_0x000106e543ac();
          func_0x000106e543ac();
          func_0x000106e544e8();
          uVar19 = extraout_x8_00;
        } while (!(bool)uVar6);
        func_0x000106e5434c();
LAB_106e521f4:
        func_0x000106e54680();
        func_0x000106e54644();
        uVar22 = uVar22 + 1;
        if (uVar16 != uVar23) goto LAB_106e52224;
      }
    }
    if (uStack_98 == 0) {
      for (; -1 < (long)uVar20; uVar20 = uVar20 - 1) {
        iVar15 = (int)uVar20;
        if (iVar15 < 4) {
          iVar15 = 3;
        }
        uVar21 = (ulong)(iVar15 - 3);
        while ((long)uVar21 <= (long)uVar20) {
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          cVar7 = SBORROW8(uVar21,uVar20);
          cVar8 = (long)(uVar21 - uVar20) < 0;
          if (uVar21 == uVar20) {
            puVar11 = &uStack_d8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (puVar11,lStack_178 + uVar20 * 0x18);
          }
          else {
            func_0x000106e543d0(uVar20 * 0x18 + 0x18 + lStack_178);
            func_0x000106e5469c();
            func_0x000106e54540();
            func_0x000106e54638();
            puVar11 = auStack_f0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          }
          func_0x000106e54448();
          lVar14 = extraout_x10_00;
          if (cVar8 == cVar7) {
            lVar14 = extraout_x8_01;
          }
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_110 = 0;
          if (lVar14 == 0) {
            uVar22 = 0;
            uVar19 = 0;
          }
          else {
            func_0x000106e54520();
            while( true ) {
              cVar7 = SBORROW8((long)puVar11,(long)puVar13);
              cVar8 = (long)puVar11 - (long)puVar13 < 0;
              uVar22 = uStack_110;
              uVar19 = uStack_108;
              if (puVar11 == puVar13) break;
              func_0x000106e54448();
              uVar2 = extraout_x10_01;
              if (cVar8 == cVar7) {
                uVar2 = extraout_x8_02;
              }
              puVar12 = puVar11 + 4;
              func_0x00010564a620(puVar12,0,uVar2,&uStack_d8);
              uVar22 = uStack_110;
              uVar19 = uStack_108;
              if ((int)puVar12 != 0) break;
              FUN_106e51b18(&uStack_110,uStack_108,puVar11[7],puVar11[8]);
              func_0x00010002c7d4();
            }
          }
          do {
            uVar23 = uVar22;
            uVar6 = uVar19 <= uVar23;
            if (uVar23 == uVar19) goto LAB_106e524a8;
            func_0x000106e543ac();
            func_0x000106e543ac();
            func_0x000106e544e8();
            uVar22 = extraout_x8_03;
          } while (!(bool)uVar6);
          func_0x000106e5434c();
LAB_106e524a8:
          func_0x000106e54680();
          func_0x000106e54644();
          uVar21 = uVar21 + 1;
          if (uVar23 != uVar19) goto LAB_106e52224;
        }
      }
      func_0x000106e5434c();
    }
    else {
      func_0x000106e5434c();
    }
LAB_106e52224:
    func_0x000106e53578(&puStack_b0);
    uVar21 = uStack_158;
    lVar1 = lStack_188;
    lVar14 = lStack_190;
    lVar18 = lStack_188 - lStack_190;
    if (0 < lVar18) {
      if ((long)(auStack_150[0] - uStack_158) < lVar18) {
        ppuVar9 = &puStack_160;
        FUN_106e4fcb0(ppuVar9,(long)(uStack_158 - (long)puStack_160) / 0x30 + lVar18 / 0x30);
        FUN_106e4fa1c(&puStack_b0,ppuVar9,(long)(uVar21 - (long)puStack_160) / 0x30,auStack_150);
        lVar1 = (long)puStack_a0 + lVar18;
        puVar10 = puStack_a0;
        for (; lVar18 != 0; lVar18 = lVar18 + -0x30) {
          func_0x000106e4fb94(puVar10,lVar14);
          puVar10 = puVar10 + 6;
          lVar14 = lVar14 + 0x30;
        }
        puStack_a0 = (ulong *)lVar1;
        FUN_106e4fab8(auStack_150,uVar21,uStack_158,lVar1);
        puStack_a0 = (ulong *)((long)puStack_a0 + (uStack_158 - uVar21));
        puVar10 = puStack_a8 + ((long)(uVar21 - (long)puStack_160) / -0x30) * 6;
        uStack_158 = uVar21;
        FUN_106e4fab8(auStack_150,puStack_160,uVar21,puVar10);
        uVar21 = auStack_150[0];
        auStack_150[0] = uStack_98;
        uStack_158 = (ulong)puStack_a0;
        puStack_a0 = puStack_160;
        uStack_98 = uVar21;
        puStack_b0 = puStack_160;
        puStack_a8 = puStack_160;
        puStack_160 = puVar10;
        func_0x000106e4fc40(&puStack_b0);
      }
      else {
        uStack_1b0 = uStack_158;
        puStack_a8 = &uStack_1b0;
        puStack_a0 = &uStack_110;
        puStack_b0 = auStack_150;
        for (; uStack_110 = uVar21, lVar14 != lVar1; lVar14 = lVar14 + 0x30) {
          func_0x000106e4fb94(uVar21,lVar14);
          uVar21 = uStack_110 + 0x30;
        }
        uStack_98 = CONCAT71(uStack_98._1_7_,1);
        FUN_106e4fbbc(&puStack_b0);
        uStack_158 = uVar21;
      }
    }
    FUN_106e4e11c(&lStack_190);
    func_0x0001000e30f4();
    puVar17 = puVar17 + 7;
  } while( true );
}



/* Entry: 106e52720; end: 106e52737;  */

undefined4 FUN_106e52720(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}



/* Entry: 106e52738; end: 106e52753;  */

ulong FUN_106e52738(long *param_1,ulong param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar4;
  long lVar5;
  long *plStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (0 < param_5) {
      plVar3 = param_1 + 2;
      lVar4 = param_1[1];
      if (*plVar3 - lVar4 >> 3 < param_5) {
        plVar2 = param_1;
        FUN_106e528f0(param_1,param_5 + (lVar4 - *param_1 >> 3));
        lVar4 = *param_1;
        plStack_88 = (long *)0x0;
        plStack_68 = plVar3;
        if (plVar2 != (long *)0x0) {
          func_0x00010048ac4c();
          plStack_88 = plVar3;
        }
        puStack_80 = (undefined8 *)((long)plStack_88 + (param_2 - lVar4));
        plStack_70 = plStack_88 + (long)plVar2;
        puStack_78 = puStack_80 + param_5;
        puVar1 = puStack_80;
        for (param_5 = param_5 << 3; param_5 != 0; param_5 = param_5 + -8) {
          *puVar1 = *param_3;
          puVar1 = puVar1 + 1;
          param_3 = param_3 + 1;
        }
        FUN_106e52930(param_1,&plStack_88,param_2);
        func_0x000106e5466c();
      }
      else {
        lVar5 = lVar4 - param_2;
        if (lVar5 >> 3 < param_5) {
          param_4 = param_4 - ((long)param_3 + lVar5);
          if (param_4 != 0) {
            _memmove(lVar4,(long)param_3 + lVar5,param_4);
          }
          param_1[1] = lVar4 + param_4;
          if (0 < lVar5 >> 3) {
            FUN_106e5472c();
            puVar1 = extraout_x8;
            for (; lVar5 != 0; lVar5 = lVar5 + -8) {
              *puVar1 = *param_3;
              param_3 = param_3 + 1;
              puVar1 = puVar1 + 1;
            }
          }
        }
        else {
          FUN_106e5472c();
          puVar1 = extraout_x8_00;
          for (param_5 = param_5 << 3; param_5 != 0; param_5 = param_5 + -8) {
            *puVar1 = *param_3;
            param_3 = param_3 + 1;
            puVar1 = puVar1 + 1;
          }
        }
      }
    }
    return param_2;
  }
  param_2 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2);
  return param_2;
}



/* Entry: 106e52754; end: 106e528af;  */

long FUN_106e52754(long *param_1,long param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar4;
  long lVar5;
  long *plStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (0 < param_5) {
    plVar3 = param_1 + 2;
    lVar4 = param_1[1];
    if (*plVar3 - lVar4 >> 3 < param_5) {
      plVar2 = param_1;
      FUN_106e528f0(param_1,param_5 + (lVar4 - *param_1 >> 3));
      lVar4 = *param_1;
      plStack_78 = (long *)0x0;
      plStack_58 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x00010048ac4c();
        plStack_78 = plVar3;
      }
      puStack_70 = (undefined8 *)((long)plStack_78 + (param_2 - lVar4));
      plStack_60 = plStack_78 + (long)plVar2;
      puStack_68 = puStack_70 + param_5;
      puVar1 = puStack_70;
      for (param_5 = param_5 << 3; param_5 != 0; param_5 = param_5 + -8) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      FUN_106e52930(param_1,&plStack_78,param_2);
      func_0x000106e5466c();
    }
    else {
      lVar5 = lVar4 - param_2;
      if (lVar5 >> 3 < param_5) {
        param_4 = param_4 - ((long)param_3 + lVar5);
        if (param_4 != 0) {
          _memmove(lVar4,(long)param_3 + lVar5,param_4);
        }
        param_1[1] = lVar4 + param_4;
        if (0 < lVar5 >> 3) {
          FUN_106e5472c();
          puVar1 = extraout_x8;
          for (; lVar5 != 0; lVar5 = lVar5 + -8) {
            *puVar1 = *param_3;
            puVar1 = puVar1 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
      else {
        FUN_106e5472c();
        puVar1 = extraout_x8_00;
        for (param_5 = param_5 << 3; param_5 != 0; param_5 = param_5 + -8) {
          *puVar1 = *param_3;
          puVar1 = puVar1 + 1;
          param_3 = param_3 + 1;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 106e528b0; end: 106e528ef;  */

void FUN_106e528b0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined8 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 106e528f0; end: 106e5292f;  */

ulong FUN_106e528f0(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  if (param_2 >> 0x3d == 0) {
    uVar2 = param_1[2] - *param_1 >> 2;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0x1fffffffffffffff;
    }
    return uVar2;
  }
  func_0x000105078430();
  func_0x0001003ac254();
  uVar2 = *(ulong *)(param_2 + 8);
  _memcpy(*(undefined8 *)(param_2 + 0x10));
  lVar1 = *unaff_x21;
  lVar3 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - unaff_x19);
  unaff_x21[1] = unaff_x19;
  lVar3 = lVar3 - (unaff_x19 - lVar1);
  _memcpy(lVar3);
  unaff_x20[1] = lVar3;
  lVar1 = *unaff_x21;
  unaff_x21[1] = lVar1;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar1;
  lVar1 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar1;
  lVar1 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar1;
  *unaff_x20 = unaff_x20[1];
  return uVar2;
}



/* Entry: 106e52930; end: 106e529cb;  */

undefined8 FUN_106e52930(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x0001003ac254();
  uVar1 = *(undefined8 *)(param_2 + 8);
  _memcpy(*(undefined8 *)(param_2 + 0x10));
  lVar2 = *unaff_x21;
  lVar3 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - unaff_x19);
  unaff_x21[1] = unaff_x19;
  lVar3 = lVar3 - (unaff_x19 - lVar2);
  _memcpy(lVar3);
  unaff_x20[1] = lVar3;
  lVar2 = *unaff_x21;
  unaff_x21[1] = lVar2;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar2;
  lVar2 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar2;
  lVar2 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar2;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}



/* Entry: 106e529cc; end: 106e529f7;  */

long * FUN_106e529cc(long *param_1)

{
  FUN_106e529f8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 106e529f8; end: 106e52a1b;  */

void FUN_106e529f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 106e52a1c; end: 106e52a7b;  */

undefined8 *
FUN_106e52a1c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [32];
  
  func_0x000105c41160(auStack_50,param_4);
  *param_2 = param_3;
  param_2[1] = param_1;
  func_0x0001006b78fc(param_2 + 2,auStack_50);
  func_0x0001002a2294(auStack_50);
  return param_2;
}



/* Entry: 106e52a7c; end: 106e52afb;  */

undefined8 FUN_106e52a7c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000106e52aa4(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000106e5462c(param_1);
  FUN_106e52afc();
  return unaff_x19;
}



/* Entry: 106e52afc; end: 106e52b13;  */

void FUN_106e52afc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 106e52b14; end: 106e52bbf;  */

long FUN_106e52b14(long param_1)

{
  func_0x000106e52b38(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 106e52bc0; end: 106e52bd7;  */

void FUN_106e52bc0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_106e52bf4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 106e52bd8; end: 106e52bf3;  */

void FUN_106e52bd8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_106e52bf4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e52bf4; end: 106e52d67;  */

long FUN_106e52bf4(long param_1)

{
  func_0x000106e52c58(param_1 + 0x230);
  func_0x0001000e30f4(param_1 + 0x218);
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(param_1 + 0x1c8);
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(param_1 + 0x1b0);
  func_0x000106e52ca8(param_1 + 0xf0);
  func_0x000106e52cd8(param_1 + 0x30);
  __ZNSt3__16localeD1Ev(param_1 + 0x28);
  func_0x000106e52d08(param_1 + 0x10);
  func_0x000106e52da8(param_1 + 8);
  return param_1;
}



/* Entry: 106e52d68; end: 106e52d6f;  */

void FUN_106e52d68(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 106e52d70; end: 106e52dc7;  */

void FUN_106e52d70(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 106e52dc8; end: 106e52ddf;  */

void FUN_106e52dc8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_106e52dfc(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 106e52de0; end: 106e52dfb;  */

void FUN_106e52de0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_106e52dfc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e52dfc; end: 106e52e6f;  */

undefined8 FUN_106e52dfc(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000106e52e24(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000106e5462c(param_1);
  FUN_106e52e70();
  return unaff_x19;
}



/* Entry: 106e52e70; end: 106e52e93;  */

void FUN_106e52e70(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 106e52e94; end: 106e53037;  */

long FUN_106e52e94(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001003ac254();
  while (param_2 != 0) {
    cVar2 = (char)unaff_x20 + ' ';
    func_0x000100125af4();
    lVar1 = 8;
    if (-1 < cVar2) {
      lVar1 = 0;
      unaff_x19 = unaff_x20;
    }
    unaff_x20 = *(long *)(unaff_x20 + lVar1);
    param_2 = unaff_x20;
  }
  return unaff_x19;
}



/* Entry: 106e53038; end: 106e5304f;  */

void FUN_106e53038(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 106e53050; end: 106e530a7;  */

void FUN_106e53050(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001003ac440();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}


