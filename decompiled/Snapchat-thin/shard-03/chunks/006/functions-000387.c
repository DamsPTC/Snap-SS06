/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a2f018; end: 102a2f037;  */

void FUN_102a2f018(void)

{
  func_0x000107c61168(&PTR_PTR_112881048);
  return;
}



/* Entry: 102a2f038; end: 102a2f07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2f038(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  if (param_1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c3d14c();
      func_0x000107c61180();
      func_0x000107c615e8(param_1);
      func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      if (lVar3 != 0) {
        puVar4 = &UNK_110587d68;
        func_0x000107c613fc(&UNK_110587d68,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,lVar3);
        uStack_78 = 0x102a2f05c;
        puStack_98 = puVar1;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100b610dc;
        puStack_80 = &UNK_110587da8;
        ppuVar5 = &puStack_98;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puVar4);
        lVar6 = lVar2;
        func_0x000107c5c320(lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c3e924(lVar6);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar6);
      }
      func_0x000107c61428(unaff_x20 + 0x10,auStack_b0,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar6 = *(long *)(lVar3 + _DAT_112ee25f8);
        if (lVar6 == 0) {
          func_0x000107c61170();
        }
        else {
          func_0x000107c61174(lVar6);
          func_0x000107c61170(lVar3);
          uStack_78 = 0x102a2f064;
          puStack_98 = puVar1;
          uStack_90 = 0x42000000;
          puStack_88 = (undefined *)0x102a2a198;
          puStack_80 = &UNK_110587dd0;
          ppuVar5 = &puStack_98;
          func_0x000107c60bc4(ppuVar5);
          func_0x000107c6157c();
          func_0x000107c61574(unaff_x20);
          func_0x000107c5dc64(lVar6);
          func_0x000107c61170(lVar2);
          func_0x000107c60bd0(ppuVar5);
          lVar2 = lVar6;
        }
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102a2f07c; end: 102a2f373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a2f07c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0x18,0);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + _DAT_1130385c0);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x000107c4aeb4(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61604(unaff_x20 + 0x18,uVar1);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return unaff_x20;
}



/* Entry: 102a2f374; end: 102a2f37f;  */

void FUN_102a2f374(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar2;
    func_0x000107c403c8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c3fa04(uVar3);
  func_0x000107c61180();
  lVar2 = 0;
  FUN_102a2f018();
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  FUN_102a2e68c(lVar4,uVar1,uVar3);
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110587d48;
  *param_1 = lVar4;
  return;
}



/* Entry: 102a2f380; end: 102a2f3a3;  */

/* WARNING: Possible PIC construction at 0x000102a2f38c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a2f390) */

void FUN_102a2f380(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102a2f3a4; end: 102a2f3f7;  */

void FUN_102a2f3a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61610(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a2f3f8; end: 102a2f47f;  */

void FUN_102a2f3f8(undefined8 param_1)

{
  if (lRam0000000112ee2690 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70cb18);
  return;
}



/* Entry: 102a2f480; end: 102a2f563;  */

void FUN_102a2f480(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c61618();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_110587e38;
  func_0x000107c613fc(&UNK_110587e38,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(long *)(puVar2 + 0x18) = lVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  func_0x0001000285a8(0x112ee2660,&UNK_10db0d330);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(lVar1);
  func_0x000107c61174(uVar4);
  pcVar3 = FUN_102a2f598;
  func_0x0001000bdd8c(FUN_102a2f598,puVar2);
  uVar4 = 0;
  func_0x0001005c6f40(0);
  func_0x000107c610f8();
  func_0x00010349cd54(pcVar3,uVar4);
  func_0x000107c61170(lVar1);
  *param_1 = pcVar3;
  return;
}



/* Entry: 102a2f564; end: 102a2f597;  */

void FUN_102a2f564(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a2f598; end: 102a2f59b;  */

void FUN_102a2f598(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar2;
    func_0x000107c403c8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c3fa04(uVar3);
  func_0x000107c61180();
  lVar2 = 0;
  FUN_102a2f018();
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  FUN_102a2e68c(lVar4,uVar1,uVar3);
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110587d48;
  *param_1 = lVar4;
  return;
}



/* Entry: 102a2f59c; end: 102a2f5c7;  */

void FUN_102a2f59c(undefined8 *param_1,undefined8 param_2)

{
  FUN_102a2f964();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 102a2f5c8; end: 102a2f657; -[_TtC31SCBitmojiLensContextServiceImpl27SCBitmojiLensAvatarProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2f5c8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_38 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112ee2750,&UNK_10db0d3a8);
  func_0x000107c613fc();
  puVar2 = &uStack_48;
  func_0x00010006c248();
  *(undefined8 **)(param_1 + _DAT_112ee2758) = puVar2;
  lStack_58 = param_1;
  lStack_50 = lVar1;
  func_0x000107c61154(&lStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a2f658; end: 102a2f6d7;  */

void FUN_102a2f658(undefined8 *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_2[1] != 0) &&
     ((uVar2 = *param_2, uVar2 == param_3 && param_2[1] == param_4 ||
      (func_0x000107c605b8(), puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8, (uVar2 & 1) != 0))))
  {
    puVar1 = (undefined *)param_2[2];
    func_0x000107c61434();
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 102a2f6d8; end: 102a2f6ef;  */

void FUN_102a2f6d8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102a2f658(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102a2f6f0; end: 102a2f7b7; -[_TtC31SCBitmojiLensContextServiceImpl27SCBitmojiLensAvatarProvider avatarIdsForLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2f6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x000107c5faec();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ee2758);
  uStack_50 = param_3;
  uStack_48 = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  func_0x000100075034(&uStack_38,FUN_102a2fb28,auStack_60,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_1);
  uVar1 = uStack_38;
  func_0x000107c5fc48(uStack_38,PTR___sSSN_11034da80);
  func_0x000107c6142c(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102a2f7b8; end: 102a2f81f;  */

void FUN_102a2f7b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c6142c(param_1[1]);
  func_0x000107c6142c(param_1[2]);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_4);
  return;
}



/* Entry: 102a2f820; end: 102a2f83b;  */

void FUN_102a2f820(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102a2f7b8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102a2f83c; end: 102a2f90f; -[_TtC31SCBitmojiLensContextServiceImpl27SCBitmojiLensAvatarProvider setAvatarIds:forLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2f83c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc54();
  if (param_4 == 0) {
    param_4 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ee2758);
  lStack_60 = param_4;
  puStack_58 = puVar1;
  uStack_50 = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_102a2fb44,auStack_70,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(puVar1);
  return;
}



/* Entry: 102a2f910; end: 102a2f943;  */

void FUN_102a2f910(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a2f944; end: 102a2f963; -[_TtC31SCBitmojiLensContextServiceImpl27SCBitmojiLensAvatarProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2f944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee2758));
  return;
}



/* Entry: 102a2f964; end: 102a2f983;  */

void FUN_102a2f964(void)

{
  func_0x000107c61168(&PTR_PTR_112881150);
  return;
}



/* Entry: 102a2f984; end: 102a2f9e7;  */

/* WARNING: Possible PIC construction at 0x000102a2f998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a2f99c) */

void FUN_102a2f984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102a2f9e8; end: 102a2fa4b;  */

undefined8 * FUN_102a2f9e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102a2fa4c; end: 102a2fa8f;  */

undefined8 * FUN_102a2fa4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102a2fa90; end: 102a2fb27;  */

int FUN_102a2fa90(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a2fb28; end: 102a2fb3b;  */

void FUN_102a2fb28(void)

{
  FUN_102a2f6d8();
  return;
}



/* Entry: 102a2fb3c; end: 102a2fb43;  */

undefined8 * FUN_102a2fb3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 102a2fb44; end: 102a2fb57;  */

void FUN_102a2fb44(void)

{
  FUN_102a2f820();
  return;
}



/* Entry: 102a2fb58; end: 102a2fbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2fb58(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102a300a4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ee2790) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102a2fbc4; end: 102a2fbcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2fbc4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102a300a4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ee2790) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102a2fbcc; end: 102a2fc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2fbcc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ee2790) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a2fc18; end: 102a2ff37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2fc18(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar3 = param_1;
  func_0x00010485773c();
  if (((uVar3 & 1) != 0) && (param_5 != 0)) {
    uVar3 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar3 = param_5 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      func_0x000100083b20(&puStack_90);
      puVar5 = puStack_90;
      func_0x000107c5fadc(param_4,param_5);
      puVar4 = puVar5;
      func_0x000107c3e54c();
      func_0x000107c61180();
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(param_4);
      puVar5 = puVar4;
      func_0x000107c5fc54(puVar4,PTR___sSSN_11034da80);
      func_0x000107c61170(puVar4);
      if (*(long *)(puVar5 + 0x10) == 0) {
        func_0x000107c6142c(puVar5);
      }
      else {
        puVar4 = PTR_PTR_1126c20c8;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c59558();
        lVar11 = *(long *)(puVar5 + 0x10);
        if (lVar11 == 0) {
          func_0x000107c6142c(puVar5);
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_102a30054(0,lVar11,0);
          puVar10 = (undefined8 *)(puVar5 + 0x28);
          do {
            puVar8 = puStack_90;
            uVar7 = puVar10[-1];
            uVar1 = *puVar10;
            puVar6 = PTR_PTR_1126c20d0;
            func_0x000107c610f8();
            func_0x000107c61434(uVar1);
            func_0x000107c453e4();
            func_0x000107c5fadc(uVar7,uVar1);
            func_0x000107c52ae0(puVar6);
            func_0x000107c6142c(uVar1);
            func_0x000107c61170(uVar7);
            uVar3 = *(ulong *)(puVar8 + 0x10);
            puStack_90 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
              FUN_102a30054(1 < *(ulong *)(puVar8 + 0x18),uVar3 + 1,1);
            }
            puVar8 = puStack_90;
            puVar10 = puVar10 + 2;
            *(ulong *)(puStack_90 + 0x10) = uVar3 + 1;
            *(undefined **)(puStack_90 + uVar3 * 8 + 0x20) = puVar6;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          func_0x000107c6142c(puVar5);
        }
        puVar5 = puVar4;
        func_0x000107c3e9ac();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a2ff38);
          (*pcVar2)();
        }
        puVar6 = puVar8;
        func_0x000101fb974c(puVar8);
        func_0x000107c6142c(puVar8);
        puVar8 = puVar6;
        func_0x000107c5fc48(puVar6,PTR___sypN_11034f1a8 + 8);
        func_0x000107c6142c(puVar6);
        func_0x000107c3d7a0(puVar5);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar8);
        if ((param_3 & 1) == 0) {
          func_0x000107c52ce4(param_1);
          func_0x000107c61170(puVar4);
        }
        else {
          puVar5 = &UNK_110587fc0;
          func_0x000107c613fc(&UNK_110587fc0,0x18,7);
          *(undefined **)(puVar5 + 0x10) = puVar4;
          pcStack_70 = FUN_102a30070;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_1010c376c;
          puStack_78 = &UNK_110587fd8;
          ppuVar9 = &puStack_90;
          puStack_68 = puVar5;
          func_0x000107c60bc4(ppuVar9);
          puVar5 = puStack_68;
          func_0x000107c61174(puVar4);
          func_0x000107c61574(puVar5);
          func_0x000107c5d440(param_2);
          func_0x000107c61170(puVar4);
          func_0x000107c60bd0(ppuVar9);
        }
      }
    }
  }
  return;
}



/* Entry: 102a2ff38; end: 102a2ffe3; -[_TtC31SCBitmojiLensContextServiceImpl30SCBitmojiLensContextConfigurer configureContext:snapDocEditor:snapEditorEnabled:lensId:] */

void FUN_102a2ff38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_102a2fc18(param_3,param_4,param_5,param_6,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102a2ffe4; end: 102a30043; -[_TtC31SCBitmojiLensContextServiceImpl30SCBitmojiLensContextConfigurer init] */

void FUN_102a2ffe4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiLensContextServiceImpl.SCBitmojiLensContextConfigurer",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a30010);
  (*pcVar1)();
}



/* Entry: 102a30044; end: 102a30053; -[_TtC31SCBitmojiLensContextServiceImpl30SCBitmojiLensContextConfigurer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a30044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee2790));
  return;
}



/* Entry: 102a30054; end: 102a3006f;  */

void FUN_102a30054(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102a300c4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102a30070; end: 102a300a3;  */

void FUN_102a30070(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c170d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setBitmojiFashionContext__112639d70,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102a300a4; end: 102a300c3;  */

void FUN_102a300a4(void)

{
  func_0x000107c61168(&PTR_PTR_112881208);
  return;
}



/* Entry: 102a300c4; end: 102a301e7;  */

undefined * FUN_102a300c4(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a301e8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000101fb9cbc();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_102a301e8(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102a301e8; end: 102a3022b;  */

void FUN_102a301e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7a518 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c20d0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d7a518 = puVar1;
  return;
}



/* Entry: 102a3022c; end: 102a3028b;  */

undefined1  [16] FUN_102a3022c(void)

{
  return ZEXT816(0x110588138);
}



/* Entry: 102a3028c; end: 102a30303; +[SCCameraMicrophoneModeExperiment isMicrophoneModeAlertEnabledWithCircumstanceEngine:] */

undefined8 FUN_102a3028c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f0e3b60);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  return uVar2;
}



/* Entry: 102a30304; end: 102a3030b; +[SCCameraMicrophoneModeExperiment isCoolDownPeriodDisabled] */

undefined8 FUN_102a30304(void)

{
  return 0;
}



/* Entry: 102a3030c; end: 102a30387; +[SCCameraMicrophoneModeExperiment coolDownPeriodWithCircumstanceEngine:] */

undefined8 FUN_102a3030c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f0e3b90);
  uVar2 = param_3;
  func_0x000107c4c0d0(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102a30388; end: 102a303ff; +[SCCameraMicrophoneModeExperiment resetsWhenChangedWithCircumstanceEngine:] */

undefined8 FUN_102a30388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0e3bd0);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102a30400; end: 102a3041f;  */

void FUN_102a30400(void)

{
  func_0x000107c61168(&PTR_PTR_1128812c8);
  return;
}



/* Entry: 102a30420; end: 102a3045b; -[SCCameraMicrophoneModeExperiment init] */

void FUN_102a30420(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_102a30400();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a3045c; end: 102a3048b;  */

void FUN_102a3045c(void)

{
  FUN_102a30400();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a3048c; end: 102a3048f; -[SCCameraMicrophoneModeExperiment .cxx_destruct] */

void FUN_102a3048c(void)

{
  return;
}



/* Entry: 102a30490; end: 102a30507; +[SCCameraPortraitEffectExperiment isAlertInfraEnabledWithAppStartExperimentReader:] */

undefined8 FUN_102a30490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0e3c00);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102a30508; end: 102a3057f; +[SCCameraPortraitEffectExperiment isToolbarEnabledWithCircumstanceEngine:] */

undefined8 FUN_102a30508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0e3c30);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102a30580; end: 102a305f7; +[SCCameraPortraitEffectExperiment alertStyleWithCircumstanceEngine:] */

undefined8 FUN_102a30580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0e3c60);
  uVar2 = param_3;
  func_0x000107c4980c(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102a305f8; end: 102a305ff; +[SCCameraPortraitEffectExperiment isCooldownDisabled] */

undefined8 FUN_102a305f8(void)

{
  return 0;
}



/* Entry: 102a30600; end: 102a30677; +[SCCameraPortraitEffectExperiment firstCooldownHoursWithCircumstanceEngine:] */

undefined8 FUN_102a30600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0e3c80);
  uVar2 = param_3;
  func_0x000107c4980c(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102a30678; end: 102a306ef; +[SCCameraPortraitEffectExperiment cooldownHoursWithCircumstanceEngine:] */

undefined8 FUN_102a30678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f0e3cb0);
  uVar2 = param_3;
  func_0x000107c4980c(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102a306f0; end: 102a30767; +[SCCameraPortraitEffectExperiment maxShownCountWithCircumstanceEngine:] */

undefined8 FUN_102a306f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0e3ce0);
  uVar2 = param_3;
  func_0x000107c4980c(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102a30768; end: 102a307a3; -[SCCameraPortraitEffectExperiment init] */

void FUN_102a30768(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001002875a0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a307a4; end: 102a307d3;  */

void FUN_102a307a4(void)

{
  func_0x0001002875a0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a307d4; end: 102a307d7; -[SCCameraPortraitEffectExperiment .cxx_destruct] */

void FUN_102a307d4(void)

{
  return;
}



/* Entry: 102a307d8; end: 102a30803; +[SCCameraLensSmudgeAlertExperiment isAlertEnabled] */

bool FUN_102a307d8(void)

{
  int iVar1;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  return iVar1 != 0;
}



/* Entry: 102a30804; end: 102a3080b; +[SCCameraLensSmudgeAlertExperiment isCooldownDisabled] */

undefined8 FUN_102a30804(void)

{
  return 0;
}



/* Entry: 102a3080c; end: 102a30813; +[SCCameraLensSmudgeAlertExperiment cooldownHours] */

undefined8 FUN_102a3080c(void)

{
  return 0x18;
}



/* Entry: 102a30814; end: 102a3081b; +[SCCameraLensSmudgeAlertExperiment escalatedCooldownHours] */

undefined8 FUN_102a30814(void)

{
  return 0xa8;
}



/* Entry: 102a3081c; end: 102a30823; +[SCCameraLensSmudgeAlertExperiment escalationThreshold] */

undefined8 FUN_102a3081c(void)

{
  return 3;
}



/* Entry: 102a30824; end: 102a3082b; +[SCCameraLensSmudgeAlertExperiment isMockStatusSourceEnabled] */

undefined8 FUN_102a30824(void)

{
  return 0;
}



/* Entry: 102a3082c; end: 102a3084b;  */

void FUN_102a3082c(void)

{
  func_0x000107c61168(&PTR_PTR_112881428);
  return;
}



/* Entry: 102a3084c; end: 102a30887; -[SCCameraLensSmudgeAlertExperiment init] */

void FUN_102a3084c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_102a3082c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a30888; end: 102a308b7;  */

void FUN_102a30888(void)

{
  FUN_102a3082c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a308b8; end: 102a308cf; -[SCCameraLensSmudgeAlertExperiment .cxx_destruct] */

void FUN_102a308b8(void)

{
  return;
}



/* Entry: 102a308d0; end: 102a30acb;  */

void FUN_102a308d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x64656c6261736944;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe800000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c62616e45;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a30acc; end: 102a30b97;  */

void FUN_102a30acc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x64656c6261736944;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe800000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c62616e45;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 102a30b98; end: 102a30bd7;  */

void FUN_102a30b98(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ee2840;
  func_0x0001000285a8(0x112ee2840,&UNK_10db0d700);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102a30bd8; end: 102a30c93; +[SCCameraFavoritedSoundsEducationExperiment enabledWithCircumstanceEngine:] */

undefined8 FUN_102a30bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112ee2848,auStack_48,0,0);
  if (cRam0000000112ee2848 == '\0') {
    uVar1 = 1;
  }
  else if (cRam0000000112ee2848 == '\x01') {
    uVar1 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010f0e3d10);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 102a30c94; end: 102a30d17; +[SCCameraFavoritedSoundsEducationExperiment tooltipDurationWithCircumstanceEngine:] */

double FUN_102a30c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000003e;
  func_0x000107c5fadc(0xd00000000000003e,0x800000010f0e3d40);
  fVar2 = 3.0;
  func_0x000107c436e4(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  dVar3 = (double)fVar2;
  if (fVar2 <= 0.0) {
    dVar3 = 3.0;
  }
  return dVar3;
}



/* Entry: 102a30d18; end: 102a30d8f; +[SCCameraFavoritedSoundsEducationExperiment albumArtEveryFavoriteEnabledWithCircumstanceEngine:] */

undefined8 FUN_102a30d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000046;
  func_0x000107c5fadc(0xd000000000000046,0x800000010f0e3d80);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102a30d90; end: 102a30dcb; -[SCCameraFavoritedSoundsEducationExperiment init] */

void FUN_102a30d90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_102a30e64();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a30dcc; end: 102a30dfb;  */

void FUN_102a30dcc(void)

{
  FUN_102a30e64();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a30dfc; end: 102a30dff; -[SCCameraFavoritedSoundsEducationExperiment .cxx_destruct] */

void FUN_102a30dfc(void)

{
  return;
}



/* Entry: 102a30e00; end: 102a30e63;  */

ulong FUN_102a30e00(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102a30e64; end: 102a30e83;  */

void FUN_102a30e64(void)

{
  func_0x000107c61168(&PTR_PTR_1128814d8);
  return;
}



/* Entry: 102a30e84; end: 102a30e87;  */

void FUN_102a30e84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee2888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0d710;
  func_0x000107c61520(&UNK_10db0d710,&UNK_1105885b0);
  puRam0000000112ee2888 = puVar1;
  return;
}



/* Entry: 102a30e88; end: 102a30ec7;  */

void FUN_102a30e88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee2888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0d710;
  func_0x000107c61520(&UNK_10db0d710,&UNK_1105885b0);
  puRam0000000112ee2888 = puVar1;
  return;
}



/* Entry: 102a30ec8; end: 102a30ef3;  */

void FUN_102a30ec8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102a30ef4();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000102a30f34();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102a30ef4; end: 102a30f73;  */

void FUN_102a30ef4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee2890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0d7d8;
  func_0x000107c61520(&UNK_10db0d7d8,&UNK_1105885b0);
  puRam0000000112ee2890 = puVar1;
  return;
}



/* Entry: 102a30f74; end: 102a30f77;  */

void FUN_102a30f74(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ee28a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ee28a8;
  func_0x00010002969c(0x112ee28a8,&UNK_10db0d7d0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ee28a0 = puVar2;
  return;
}



/* Entry: 102a30f78; end: 102a30fc7;  */

void FUN_102a30f78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ee28a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ee28a8;
  func_0x00010002969c(0x112ee28a8,&UNK_10db0d7d0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ee28a0 = puVar2;
  return;
}



/* Entry: 102a30fc8; end: 102a3113b;  */

undefined1  [16] FUN_102a30fc8(void)

{
  return ZEXT816(0x110588520);
}



/* Entry: 102a3113c; end: 102a3129b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102a3113c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  func_0x000107c614f0();
  func_0x000107c610f8();
  lVar2 = _DAT_112ee2978;
  func_0x000107c61614(unaff_x20 + _DAT_112ee2978,0);
  *(undefined1 *)(unaff_x20 + _DAT_112ee2980) = 2;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee2988);
  *puVar1 = FUN_102a3129c;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee2990);
  *puVar1 = FUN_102a31330;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee2998);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee29a0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee29a8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee29b0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c614f0();
  func_0x000107c61464();
  return puVar3;
}



/* Entry: 102a3129c; end: 102a3132f;  */

void FUN_102a3129c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105888f0;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x0001000d76cc("FeatureMusicPickerV2Handler.performOnMain",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102a31330; end: 102a31333;  */

void FUN_102a31330(void)

{
  return;
}



/* Entry: 102a31334; end: 102a3145b; -[SCFeatureMusicPickerV2Handler initWithDelegate:updateNominatedSelection:clearNominatedSelection:pausePlayback:handleDismissal:] */

void FUN_102a31334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_110588838;
  func_0x000107c613fc(&UNK_110588838,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar1 = &UNK_110588860;
  func_0x000107c613fc(&UNK_110588860,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar1 = &UNK_110588888;
  func_0x000107c613fc(&UNK_110588888,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  puVar1 = &UNK_1105888b0;
  func_0x000107c613fc(&UNK_1105888b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  func_0x000107c615f0(param_3);
  FUN_102a3113c();
  return;
}



/* Entry: 102a3145c; end: 102a314f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3145c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  undefined1 auStack_48 [24];
  undefined8 uVar5;
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ee2980;
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_112ee2980) == '\x02') {
      pcVar1 = *(code **)(param_1 + _DAT_112ee29a8);
      uVar2 = ((undefined8 *)(param_1 + _DAT_112ee29a8))[1];
      uVar5 = uVar2;
      func_0x000107c6157c();
      bVar4 = (byte)uVar5;
      (*pcVar1)();
      func_0x000107c61574(uVar2);
      *(byte *)(param_1 + lVar3) = bVar4 & 1;
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102a314f8; end: 102a314ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a314f8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  undefined8 uVar6;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ee2980;
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + _DAT_112ee2980) == '\x02') {
      pcVar1 = *(code **)(lVar5 + _DAT_112ee29a8);
      uVar2 = ((undefined8 *)(lVar5 + _DAT_112ee29a8))[1];
      uVar6 = uVar2;
      func_0x000107c6157c();
      bVar4 = (byte)uVar6;
      (*pcVar1)();
      func_0x000107c61574(uVar2);
      *(byte *)(lVar5 + lVar3) = bVar4 & 1;
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102a31500; end: 102a3162f; -[SCFeatureMusicPickerV2Handler musicPickerV2DidPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a31500(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ee2988);
  puVar2 = &UNK_1105886e0;
  func_0x000107c613fc(&UNK_1105886e0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  (*pcVar1)(0x102a31fa0,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61578(puVar2,2);
  return;
}



/* Entry: 102a31630; end: 102a31637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a31630(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + _DAT_112ee2980) == '\x03') {
      func_0x000107c61170();
    }
    else {
      pcVar1 = *(code **)(lVar4 + _DAT_112ee2998);
      uVar2 = ((undefined8 *)(lVar4 + _DAT_112ee2998))[1];
      func_0x000107c6157c(uVar2);
      (*pcVar1)(uVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c61574(uVar2);
    }
  }
  return;
}



/* Entry: 102a31638; end: 102a31707; -[SCFeatureMusicPickerV2Handler musicPickerV2DidNominateSelection:] */

/* WARNING: Possible PIC construction at 0x000102a316e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a316e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a31638(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ee2988);
  puVar2 = &UNK_1105886e0;
  func_0x000107c613fc(&UNK_1105886e0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_110588810;
  func_0x000107c613fc(&UNK_110588810,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  (*pcVar1)(0x102a31f9c,puVar3);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a31708; end: 102a31723; -[SCFeatureMusicPickerV2Handler musicPickerV2DidDismissWithNoSelection] */

/* WARNING: Possible PIC construction at 0x000102a319d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a319d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a31708(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_1105887e8;
  pcVar1 = *(code **)(param_1 + _DAT_112ee2988);
  puVar2 = &UNK_1105886e0;
  func_0x000107c613fc(&UNK_1105886e0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_1105887e8,0x21,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  puVar3[0x20] = 2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  (*pcVar1)(0x102a31fac,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102a31724; end: 102a318ab;  */

/* WARNING: Possible PIC construction at 0x000102a3188c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a31890) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a31724(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long unaff_x20;
  undefined1 uVar9;
  
  lVar4 = param_1;
  func_0x000107c51cc8();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c3e3b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar5;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar5);
  uVar3 = (uint)(param_2 >> 0x20);
  uVar8 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar8 == 0) {
      func_0x00010006c090(lVar4,param_2);
      if ((param_2 & 0xff000000000000) != 0) {
LAB_102a317ec:
        uVar9 = 0;
        goto LAB_102a31804;
      }
    }
    else {
      func_0x00010006c090(lVar4,param_2);
      if ((long)(int)lVar4 != lVar4 >> 0x20) goto LAB_102a317ec;
    }
  }
  else if (uVar8 == 2) {
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar2 = *(long *)(lVar4 + 0x18);
    func_0x00010006c090(lVar4,param_2);
    if (lVar5 != lVar2) goto LAB_102a317ec;
  }
  else {
    func_0x00010006c090(lVar4,param_2);
  }
  uVar9 = 1;
LAB_102a31804:
  pcVar1 = *(code **)(unaff_x20 + _DAT_112ee2988);
  puVar6 = &UNK_1105886e0;
  func_0x000107c613fc(&UNK_1105886e0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar7 = &UNK_1105888d8;
  func_0x000107c613fc(&UNK_1105888d8,0x21,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(long *)(puVar7 + 0x18) = param_1;
  puVar7[0x20] = uVar9;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c6157c(puVar6);
  (*pcVar1)(0x102a31fb0,puVar7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar6);
  return;
}



/* Entry: 102a318ac; end: 102a318fb; -[SCFeatureMusicPickerV2Handler musicPickerV2DidDismissWithSelection:] */

/* WARNING: Possible PIC construction at 0x000102a318e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a318e8) */

void FUN_102a318ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102a31724(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102a318fc; end: 102a31917; -[SCFeatureMusicPickerV2Handler musicPickerV2DidDismissClearingSelection] */

/* WARNING: Possible PIC construction at 0x000102a319d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a319d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a318fc(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_1105887c0;
  pcVar1 = *(code **)(param_1 + _DAT_112ee2988);
  puVar2 = &UNK_1105886e0;
  func_0x000107c613fc(&UNK_1105886e0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_1105887c0,0x21,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  puVar3[0x20] = 0;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  (*pcVar1)(0x102a31fa8,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}


