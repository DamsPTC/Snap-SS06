/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019e4a50; end: 1019e4af7;  */

int FUN_1019e4a50(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1019e4af8; end: 1019e4b77;  */

void FUN_1019e4af8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de7ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9b29a4;
  func_0x000107c61520(&DAT_10d9b29a4,&UNK_110429098);
  puRam0000000112de7ff8 = puVar1;
  return;
}



/* Entry: 1019e4b78; end: 1019e4b7f;  */

undefined8 * FUN_1019e4b78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 1019e4b80; end: 1019e4c93;  */

void FUN_1019e4b80(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1019e4c94; end: 1019e4caf;  */

void FUN_1019e4c94(void)

{
  FUN_1019e5fd4(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1019e4cb0; end: 1019e4ce7;  */

void FUN_1019e4cb0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1019e4ce8; end: 1019e4d0b;  */

void FUN_1019e4ce8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1019e4d0c; end: 1019e4dab;  */

void FUN_1019e4d0c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019e4dac; end: 1019e4e6f;  */

void FUN_1019e4dac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_40 = FUN_1019e4c94;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1019e4cb0;
  puStack_48 = &UNK_1104291e8;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc(puVar1,param_3,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = PTR_PTR_1126a8410;
  func_0x000107c610f8();
  func_0x000107c461d0();
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1019e4e70; end: 1019e4e77;  */

void FUN_1019e4e70(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1019e4e78; end: 1019e4f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e4e78(void)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c614f0();
  uVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000100087bd4(&uStack_40,FUN_1019e5a08,auStack_60,uVar1);
  func_0x0001019e5c0c(uStack_40,uStack_38);
  func_0x000107c6142c(uStack_38);
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019e4f18; end: 1019e4fbf; -[_TtC21SCLensRemoteMediaImpl26LensRemoteMediaCoordinator dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e4f18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_50 = param_1;
  func_0x000107c61174();
  uVar2 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000100087bd4(&uStack_40,0x1019e6110,auStack_60,uVar2);
  func_0x0001019e5c0c(uStack_40,uStack_38);
  func_0x000107c6142c(uStack_38);
  uStack_78 = param_1;
  uStack_70 = uVar1;
  func_0x000107c61154(&uStack_78,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019e4fc0; end: 1019e501f; -[_TtC21SCLensRemoteMediaImpl26LensRemoteMediaCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019e4ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019e4ff4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e4fc0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112de80d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112de80d8 + 8))
  ;
  return;
}



/* Entry: 1019e5020; end: 1019e5167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e5020(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + -extraout_x8;
  puVar1 = (undefined8 *)(param_2 + _DAT_1134812e8);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)(param_2 + _DAT_112de80d8);
  uVar7 = puVar2[1];
  *puVar2 = param_3;
  puVar2[1] = param_4;
  func_0x000107c61434(uVar4);
  func_0x000107c6142c(uVar7);
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar5 + -8);
  (**(code **)(lVar8 + 0x10))(puVar6,param_5,lVar5);
  (**(code **)(lVar8 + 0x38))(puVar6,0,1,lVar5);
  lVar5 = _DAT_1134812e0;
  func_0x000107c61428(param_2 + _DAT_1134812e0,auStack_78,0x21,0);
  func_0x000107c61434(param_4);
  func_0x0001014522e4(puVar6,param_2 + lVar5);
  func_0x000107c614a8(auStack_78);
  uVar7 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar7);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}



/* Entry: 1019e5168; end: 1019e53af; -[_TtC21SCLensRemoteMediaImpl26LensRemoteMediaCoordinator registerRemoteMediaURL:forEffectId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e5168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_3);
  func_0x000107c5faec();
  uStack_80 = param_1;
  uStack_78 = param_4;
  uStack_70 = param_2;
  puStack_68 = puVar3;
  func_0x000107c61174(param_1);
  uVar2 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000100087bd4(&uStack_60,FUN_1019e60c0,auStack_90,uVar2);
  func_0x0001019e5c0c(uStack_60,uStack_58);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uStack_58);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 1019e53b0; end: 1019e54ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e53b0(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = _DAT_1134812e0;
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + _DAT_1134812e0,auStack_78,0,0);
  lVar3 = param_1 + lVar6;
  (**(code **)(lVar8 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    lVar6 = param_1 + lVar6;
    puVar4 = puVar7;
    (**(code **)(lVar8 + 0x10))(puVar7,lVar6,lVar2);
    func_0x000107c5ed70();
    (**(code **)(lVar8 + 8))(puVar7,lVar2);
    if (puVar4 == param_2 && lVar6 == param_3) {
      func_0x000107c6142c(lVar6);
    }
    else {
      func_0x000107c605b8(puVar4,lVar6,param_2,param_3,0);
      func_0x000107c6142c(lVar6);
      if (((ulong)puVar4 & 1) == 0) {
        return;
      }
    }
    puVar1 = (undefined8 *)(param_1 + _DAT_1134812e8);
    uVar5 = puVar1[1];
    *puVar1 = param_4;
    puVar1[1] = param_5;
    func_0x000107c6142c(uVar5);
    func_0x000107c61434(param_5);
  }
  return;
}



/* Entry: 1019e5500; end: 1019e561f; -[_TtC21SCLensRemoteMediaImpl26LensRemoteMediaCoordinator recordLocalFilePath:forRemoteURLString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e5500(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  char cStack_51;
  
  func_0x000107c5faec();
  lVar1 = param_2;
  func_0x000107c5faec();
  uStack_90 = param_1;
  uStack_88 = param_4;
  lStack_80 = lVar1;
  func_0x000107c61174();
  func_0x000100087bd4(&cStack_51,0x1019e60e8,auStack_a0,PTR___sSbN_11034dd40);
  if ((cStack_51 == '\x01') && (lVar2 = param_2, FUN_1019e5d98(), lVar2 != 0)) {
    uStack_90 = param_1;
    uStack_88 = param_4;
    lStack_80 = lVar1;
    uStack_78 = param_3;
    lStack_70 = lVar2;
    func_0x000100087bd4(0x1019e6124,auStack_a0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar1);
    lVar1 = lVar2;
  }
  else {
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c6142c(lVar1);
  return;
}



/* Entry: 1019e5620; end: 1019e57cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e5620(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  ulong uVar6;
  code *pcVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (ulong *)(param_2 + _DAT_112de80d8);
  uVar5 = puVar1[1];
  if ((uVar5 != 0) &&
     ((uVar2 = *puVar1, uVar2 == param_3 && uVar5 == param_4 ||
      (func_0x000107c605b8(uVar2,uVar5,param_3,param_4,0), (uVar2 & 1) != 0)))) {
    uVar5 = ((ulong *)(param_2 + _DAT_1134812e8))[1];
    if (uVar5 != 0) {
      uVar6 = *(ulong *)(param_2 + _DAT_1134812e8);
      uVar2 = uVar6 & 0xffffffffffff;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar2 = uVar5 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        func_0x000107c61434(uVar5);
        func_0x000107c5ed80(param_1,uVar6,uVar5);
        func_0x000107c6142c(uVar5);
        uVar5 = puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        func_0x000107c6142c(uVar5);
        lVar3 = 0;
        func_0x000107c5ede0();
        pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
        (*pcVar7)(auStack_60 + -extraout_x8,1,1,lVar3);
        lVar4 = _DAT_1134812e0;
        func_0x000107c61428(param_2 + _DAT_1134812e0,auStack_58,0x21,0);
        func_0x0001014522e4(auStack_60 + -extraout_x8,param_2 + lVar4);
        func_0x000107c614a8(auStack_58);
        (*pcVar7)(param_1,0,1,lVar3);
        return;
      }
    }
  }
  lVar4 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001019e57cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,1,1,lVar4);
  return;
}



/* Entry: 1019e57d0; end: 1019e58f3; -[_TtC21SCLensRemoteMediaImpl26LensRemoteMediaCoordinator localFileURLForEffectId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e57d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  
  lVar1 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  func_0x000107c5faec();
  uStack_60 = param_1;
  uStack_58 = param_3;
  puStack_50 = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100087bd4(puVar5,0x1019e60d4,auStack_70,lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(puVar4);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1019e58f4; end: 1019e5a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e58f4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(param_2 + _DAT_1134812e8);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)(param_2 + _DAT_112de80d8);
  uVar6 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c61434(uVar4);
  func_0x000107c6142c(uVar6);
  lVar5 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(auStack_70 + -extraout_x8,1,1,lVar5);
  lVar5 = _DAT_1134812e0;
  func_0x000107c61428(param_2 + _DAT_1134812e0,auStack_68,0x21,0);
  func_0x0001014522e4(auStack_70 + -extraout_x8,param_2 + lVar5);
  func_0x000107c614a8(auStack_68);
  uVar6 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar6);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}



/* Entry: 1019e5a08; end: 1019e5a2f;  */

void FUN_1019e5a08(void)

{
  long unaff_x20;
  
  FUN_1019e58f4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019e5a30; end: 1019e5b4f; -[_TtC21SCLensRemoteMediaImpl26LensRemoteMediaCoordinator reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e5a30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000100087bd4(&uStack_40,0x1019e60fc,auStack_60,uVar1);
  func_0x0001019e5c0c(uStack_40,uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 1019e5b50; end: 1019e5d3f; -[_TtC21SCLensRemoteMediaImpl26LensRemoteMediaCoordinator init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e5b50(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112de80d0;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar2) = uVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112de80d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_1134812e0;
  lVar5 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + lVar2,1,1,lVar5);
  puVar1 = (undefined8 *)(param_1 + _DAT_1134812e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019e5d40; end: 1019e5d6b;  */

void FUN_1019e5d40(void)

{
  long unaff_x20;
  
  FUN_1019e5020(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1019e5d6c; end: 1019e5d97;  */

void FUN_1019e5d6c(void)

{
  long unaff_x20;
  
  func_0x0001019e5280(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1019e5d98; end: 1019e5f8b;  */

undefined1  [16] FUN_1019e5d98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c415e0();
  func_0x000107c61180();
  if (lRam0000000113481300 != -1) {
    func_0x000107c61568(0x113481300,0x1019e5abc);
  }
  uVar8 = uRam0000000113481310;
  uVar7 = uRam0000000113481308;
  uVar9 = uRam0000000113481308;
  func_0x000107c5fadc(uRam0000000113481308,uRam0000000113481310);
  puVar3 = puVar2;
  func_0x000107c4ff4c();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  uVar9 = 0;
  if ((int)puVar3 == 0) {
    uVar4 = uVar9;
    func_0x000107c61174(0);
    func_0x000107c5ed30(0);
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
    func_0x000107c614ac(uVar9);
  }
  else {
    func_0x000107c61174(0);
  }
  func_0x000107c415e0();
  func_0x000107c61180();
  func_0x000107c5fadc(param_1,param_2);
  uVar9 = uVar7;
  uVar4 = uVar8;
  func_0x000107c5fadc(uVar7,uVar8);
  puVar2 = puVar1;
  func_0x000107c4b66c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar9);
  uVar9 = 0;
  func_0x000107c61174(0);
  if ((int)puVar2 == 0) {
    uVar5 = uVar9;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar9);
    func_0x000107c61654();
    func_0x000107c614ac(uVar5);
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar5 = uVar8;
    func_0x000107c61434(uVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    auVar10._8_8_ = uVar8;
    auVar10._0_8_ = uVar7;
    return auVar10;
  }
  func_0x000107c60e78();
  FUN_1019e6090();
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = uVar5;
  return auVar11;
}



/* Entry: 1019e5f8c; end: 1019e5f9f;  */

void FUN_1019e5f8c(void)

{
  FUN_1019e6090();
  return;
}



/* Entry: 1019e5fa0; end: 1019e5fcb;  */

void FUN_1019e5fa0(void)

{
  long unaff_x20;
  
  FUN_1019e5620(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1019e5fcc; end: 1019e5fd3;  */

void FUN_1019e5fcc(void)

{
  if (lRam00000001134812f0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e665780);
  return;
}



/* Entry: 1019e5fd4; end: 1019e600b;  */

void FUN_1019e5fd4(undefined8 param_1)

{
  if (lRam00000001134812f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e665780);
  return;
}



/* Entry: 1019e600c; end: 1019e608f;  */

void FUN_1019e600c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = PTR___sBoWV_11034d678 + 0x40;
  puStack_38 = &UNK_10d9b2bc0;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d9b2bc0;
    func_0x000107c61630(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 1019e6090; end: 1019e60bf;  */

void FUN_1019e6090(void)

{
  long unaff_x20;
  
  FUN_1019e53b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1019e60c0; end: 1019e6157;  */

void FUN_1019e60c0(void)

{
  FUN_1019e5d40();
  return;
}



/* Entry: 1019e6158; end: 1019e6167;  */

void FUN_1019e6158(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019e6168; end: 1019e61b3;  */

void FUN_1019e6168(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010046fe70();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar1 = 0;
  func_0x0001001ddfac(0);
  func_0x000107c610f8();
  func_0x00010046ff50(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1019e61b4; end: 1019e61c3; -[_TtC31WebLensesActiveLensServicesImpl32WebLensesActiveLensPublisherImpl activeLensObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e61b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de81c0));
  return;
}



/* Entry: 1019e61c4; end: 1019e61d3; -[_TtC31WebLensesActiveLensServicesImpl32WebLensesActiveLensPublisherImpl publishActiveLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e61c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112de81c0),PTR_s_next__112614028);
  return;
}



/* Entry: 1019e61d4; end: 1019e61e3; -[_TtC31WebLensesActiveLensServicesImpl32WebLensesActiveLensPublisherImpl publishApplyEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e61d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112de81c8),PTR_s_next__112614028);
  return;
}



/* Entry: 1019e61e4; end: 1019e6217;  */

void FUN_1019e61e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019e6218; end: 1019e624f; -[_TtC31WebLensesActiveLensServicesImpl32WebLensesActiveLensPublisherImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019e6234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019e6238) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e6218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de81c0));
  return;
}



/* Entry: 1019e6250; end: 1019e62ef;  */

bool FUN_1019e6250(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar3 = param_1;
  func_0x0001000f66f0();
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(param_4 + 0x10) + 1;
    puVar4 = (undefined8 *)(param_4 + 0x28);
    do {
      lVar5 = lVar5 + -1;
      bVar2 = lVar5 != 0;
      if (lVar5 == 0) {
        return false;
      }
      uVar3 = puVar4[-1];
      uVar1 = *puVar4;
      func_0x000107c61434(uVar1);
      func_0x000107c5fbb4(uVar3,uVar1,param_1,param_2);
      func_0x000107c6142c(uVar1);
      puVar4 = puVar4 + 2;
    } while ((uVar3 & 1) == 0);
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



/* Entry: 1019e62f0; end: 1019e634b;  */

/* WARNING: Possible PIC construction at 0x0001019e6304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019e6308) */

void FUN_1019e62f0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1019e634c; end: 1019e63a7;  */

undefined8 * FUN_1019e634c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1019e63a8; end: 1019e63e3;  */

undefined8 * FUN_1019e63a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1019e63e4; end: 1019e647f;  */

int FUN_1019e63e4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1019e6480; end: 1019e6533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e6480(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112de81f8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112de8200);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112de8208;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112de8210) = param_1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019e6534; end: 1019e6567; -[SCDeviceDependentAssetResolverModeConfigReader mode] */

undefined8 FUN_1019e6534(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1019e6568();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1019e6568; end: 1019e65fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1019e6568(void)

{
  undefined8 uVar1;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100087bd4(&lStack_b0,FUN_1019e688c,&lStack_70,&UNK_110429600);
  uStack_68 = uStack_a8;
  lStack_70 = lStack_b0;
  FUN_1019e68a4(&lStack_70);
  uVar1 = 0;
  if ((char)uStack_68 == '\x01') {
    uVar1 = *(undefined8 *)(&UNK_10d9b2d00 + lStack_70 * 8);
  }
  return uVar1;
}



/* Entry: 1019e65fc; end: 1019e66d7; -[SCDeviceDependentAssetResolverModeConfigReader allowlist] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e65fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  uStack_80 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(auStack_70,0x1019e739c,auStack_90,&UNK_110429600);
  func_0x000107c61434(uStack_60);
  FUN_1019e68a4(auStack_70);
  uVar1 = uStack_60;
  func_0x00010102c3b8(uStack_60);
  func_0x000107c6142c(uStack_60);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSSet_1126ae870);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar1);
  func_0x000107c45788(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1019e66d8; end: 1019e6797; -[SCDeviceDependentAssetResolverModeConfigReader isAllowlisted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1019e66d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c5faec(param_3);
  uStack_60 = param_1;
  func_0x000107c61174(param_1);
  func_0x000100087bd4(&uStack_50,0x1019e7388,auStack_70,&UNK_110429478);
  FUN_1019e6250(param_3,param_2,uStack_50,uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uStack_48);
  func_0x000107c6142c(uStack_50);
  return (uint)param_3 & 1;
}



/* Entry: 1019e6798; end: 1019e681b; -[SCDeviceDependentAssetResolverModeConfigReader inMemoryCacheResultsForMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1019e6798(undefined8 param_1)

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(&uStack_b0,FUN_1019e7374,&uStack_70,&UNK_110429600);
  func_0x000107c61170(param_1);
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  uStack_58 = uStack_98;
  uStack_60 = uStack_a0;
  uStack_48 = uStack_88;
  uStack_50 = uStack_90;
  uStack_38 = uStack_78;
  uStack_40 = uStack_80;
  FUN_1019e68a4(&uStack_70);
  return uStack_50;
}



/* Entry: 1019e681c; end: 1019e688b;  */

void FUN_1019e681c(undefined8 *param_1)

{
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1019e68d8(&uStack_c0);
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_38 = uStack_88;
  uStack_40 = uStack_90;
  func_0x000107c6142c(uStack_78);
  func_0x000107c6142c(uStack_80);
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  return;
}



/* Entry: 1019e688c; end: 1019e68a3;  */

void FUN_1019e688c(void)

{
  long unaff_x20;
  
  FUN_1019e681c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019e68a4; end: 1019e68d7;  */

undefined8 FUN_1019e68a4(undefined8 param_1)

{
  (*(code *)(undefined *)0x1019e809c)();
  return param_1;
}



/* Entry: 1019e68d8; end: 1019e6e1b;  */

/* WARNING: Removing unreachable block (ram,0x0001019e6c58) */
/* WARNING: Removing unreachable block (ram,0x0001019e6afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e68d8(long *param_1)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *extraout_x8;
  long unaff_x20;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_2b0 [16];
  undefined8 uStack_2a0;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long *plStack_258;
  long lStack_250;
  long lStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  long lStack_228;
  uint uStack_21c;
  long lStack_218;
  long *plStack_210;
  undefined1 auStack_200 [64];
  long lStack_1c0;
  byte bStack_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  undefined1 uStack_1b5;
  undefined1 uStack_1b4;
  undefined1 uStack_1b3;
  undefined2 uStack_1b2;
  long lStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)(unaff_x20 + _DAT_112de81f8);
  lStack_b8 = plVar9[1];
  lStack_218 = *plVar9;
  lStack_a8 = plVar9[3];
  lVar8 = plVar9[2];
  lVar12 = plVar9[5];
  lVar15 = plVar9[4];
  lVar14 = plVar9[7];
  lVar16 = plVar9[6];
  plStack_210 = param_1;
  lStack_c0 = lStack_218;
  lStack_b0 = lVar8;
  lStack_a0 = lVar15;
  lStack_98 = lVar12;
  lStack_90 = lVar16;
  lStack_88 = lVar14;
  if (lVar8 != 0) {
    lVar10 = *(long *)(unaff_x20 + _DAT_112de8200);
    if (lVar10 != 0) {
      uStack_21c = (uint)(byte)lStack_b8;
      uVar13 = (undefined4)lStack_a8;
      uVar11 = ((long *)(unaff_x20 + _DAT_112de8200))[1];
      func_0x0001019e72f8(&lStack_c0,&lStack_100);
      func_0x0001019e7348(lVar10,uVar11);
      goto LAB_1019e6d6c;
    }
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112de8210);
  uVar11 = 0x800000010efc8150;
  uVar6 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  lStack_228 = lVar8;
  if (lVar8 == 0) {
LAB_1019e6c90:
    func_0x0001019e7538(&lStack_100);
    bVar3 = (byte)uStack_f8;
    uVar13 = (undefined4)uStack_e8;
  }
  else {
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar8 == 0) goto LAB_1019e6c90;
    lVar15 = lVar8;
    func_0x000107c5ee30();
    func_0x000107c61170();
    uVar4 = (uint)(uVar11 >> 0x20);
    uVar7 = uVar4 >> 0x1e;
    lVar12 = lVar15 >> 0x20;
    if (uVar4 >> 0x1e < 2) {
      if (uVar7 == 0) {
        if ((uVar11 & 0xff000000000000) != 0) {
          lStack_160 = 0;
          lStack_178 = 0;
          lStack_180 = 0;
          lStack_168 = 0;
          lStack_170 = 0;
          func_0x0001019e7538(&lStack_140);
          uStack_f8 = uStack_138;
          lStack_100 = lStack_140;
          uStack_e8 = uStack_128;
          lStack_f0 = lStack_130;
          lStack_d8 = lStack_118;
          lStack_e0 = lStack_120;
          lStack_c8 = lStack_108;
          lStack_d0 = lStack_110;
          bStack_1b8 = (byte)uVar11;
          uStack_1b7 = (undefined1)(uVar11 >> 8);
          uStack_1b6 = (undefined1)(uVar11 >> 0x10);
          uStack_1b5 = (undefined1)(uVar11 >> 0x18);
          uStack_1b4 = (undefined1)(uVar11 >> 0x20);
          uStack_1b3 = (undefined1)(uVar11 >> 0x28);
          lStack_1c0 = lVar15;
          FUN_1019e7278();
          func_0x00010006ae80(&lStack_1c0,(long)&lStack_1c0 + (uVar11 >> 0x30 & 0xff),&lStack_180,0,
                              100,0,&UNK_110429600,lVar8);
          func_0x00010006c090(lVar15,uVar11);
          goto LAB_1019e6dd8;
        }
      }
      else if ((int)lVar15 != lVar12) goto LAB_1019e6b2c;
LAB_1019e6ba0:
      func_0x00010006c090(lVar15);
      goto LAB_1019e6c90;
    }
    if ((uVar7 != 2) || (*(long *)(lVar15 + 0x10) == *(long *)(lVar15 + 0x18))) goto LAB_1019e6ba0;
LAB_1019e6b2c:
    lStack_160 = 0;
    lStack_178 = 0;
    lStack_180 = 0;
    lStack_168 = 0;
    lStack_170 = 0;
    func_0x0001019e7538(&lStack_140);
    uStack_f8 = uStack_138;
    lStack_100 = lStack_140;
    uStack_e8 = uStack_128;
    lStack_f0 = lStack_130;
    lStack_d8 = lStack_118;
    lStack_e0 = lStack_120;
    lStack_c8 = lStack_108;
    lStack_d0 = lStack_110;
    if (uVar11 >> 0x3e == 2) {
      lVar10 = *(long *)(lVar15 + 0x10);
      lVar2 = *(long *)(lVar15 + 0x18);
      func_0x000107c5ec30();
      lVar12 = lVar8;
      lVar14 = lVar8;
      if (lVar8 != 0) {
        func_0x000107c5ec3c();
        if (SBORROW8(lVar10,lVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1019e6e14);
          (*pcVar5)();
        }
        lVar14 = (lVar10 - lVar12) + lVar8;
      }
      lVar16 = lVar2 - lVar10;
      if (SBORROW8(lVar2,lVar10)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1019e6b90);
        (*pcVar5)();
      }
LAB_1019e6be8:
      func_0x000107c5ec38();
      lVar8 = lVar12;
      if (lVar14 == 0) goto LAB_1019e6c1c;
      if (lVar16 <= lVar12) {
        lVar12 = lVar16;
      }
      lVar12 = lVar12 + lVar14;
    }
    else {
      lVar14 = (long)(int)lVar15;
      lVar16 = lVar12 - lVar14;
      if (lVar12 < lVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1019e6e10);
        (*pcVar5)();
      }
      func_0x000107c5ec30();
      if (lVar8 != 0) {
        lVar12 = lVar8;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar14,lVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1019e6e18);
          (*pcVar5)();
        }
        lVar14 = (lVar14 - lVar12) + lVar8;
        goto LAB_1019e6be8;
      }
      func_0x000107c5ec38();
      lVar14 = 0;
LAB_1019e6c1c:
      lVar12 = 0;
    }
    FUN_1019e7278();
    func_0x00010006ae80(lVar14,lVar12,&lStack_180,0,100,0,&UNK_110429600,lVar8);
    func_0x00010006c090(lVar15,uVar11);
LAB_1019e6dd8:
    uVar11 = 0x112d49548;
    func_0x0001019e72b8(&lStack_180,0x112d49548,&UNK_10d90fde0);
    bVar3 = (byte)uStack_f8;
    uVar13 = (undefined4)uStack_e8;
  }
  lVar14 = lStack_c8;
  lVar16 = lStack_d0;
  lVar12 = lStack_d8;
  lVar15 = lStack_e0;
  lVar8 = lStack_f0;
  lVar2 = lStack_100;
  lVar10 = lStack_f0;
  func_0x000107c61434();
  lStack_218 = lVar2;
  lStack_1c0 = lVar2;
  uStack_21c = (uint)bVar3;
  lStack_1b0 = lVar8;
  lStack_1a0 = lVar15;
  lStack_198 = lVar12;
  lStack_190 = lVar16;
  lStack_188 = lVar14;
  bStack_1b8 = bVar3;
  uStack_1a8 = uVar13;
  FUN_1019e70a8();
  func_0x000107c61170(lStack_228);
  func_0x000107c6142c(lVar8);
  lStack_178 = plVar9[1];
  lStack_180 = *plVar9;
  lStack_168 = plVar9[3];
  lStack_170 = plVar9[2];
  lStack_158 = plVar9[5];
  lStack_160 = plVar9[4];
  lStack_148 = plVar9[7];
  lStack_150 = plVar9[6];
  plVar9[1] = CONCAT26(uStack_1b2,
                       CONCAT15(uStack_1b3,
                                CONCAT14(uStack_1b4,
                                         CONCAT13(uStack_1b5,
                                                  CONCAT12(uStack_1b6,
                                                           CONCAT11(uStack_1b7,bStack_1b8))))));
  *plVar9 = lStack_1c0;
  plVar9[3] = CONCAT44(uStack_1a4,uStack_1a8);
  plVar9[2] = lStack_1b0;
  plVar9[5] = lStack_198;
  plVar9[4] = lStack_1a0;
  plVar9[7] = lStack_188;
  plVar9[6] = lStack_190;
  FUN_1019e723c(&lStack_1c0,auStack_200);
  func_0x0001019e72b8(&lStack_180,0x112de8240,&UNK_10d9b2cf0);
  plVar1 = (long *)(unaff_x20 + _DAT_112de8200);
  unaff_x20 = *plVar1;
  plVar9 = (long *)plVar1[1];
  *plVar1 = lVar10;
  plVar1[1] = uVar11;
  func_0x000107c61434(lVar10);
  func_0x000107c61434(uVar11);
  func_0x0001019e6fa0(unaff_x20,plVar9);
LAB_1019e6d6c:
  *plStack_210 = lStack_218;
  *(char *)(plStack_210 + 1) = (char)uStack_21c;
  plStack_210[2] = lVar8;
  *(undefined4 *)(plStack_210 + 3) = uVar13;
  plStack_210[4] = lVar15;
  plStack_210[5] = lVar12;
  plStack_210[6] = lVar16;
  plStack_210[7] = lVar14;
  plStack_210[8] = lVar10;
  plStack_210[9] = uVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  pcStack_238 = FUN_1019e6e1c;
  lStack_260 = lVar10;
  plStack_258 = plVar9;
  lStack_250 = unaff_x20;
  lStack_248 = lVar12;
  puStack_240 = &stack0xfffffffffffffff0;
  FUN_1019e68d8(auStack_2b0);
  func_0x000107c6142c(uStack_2a0);
  func_0x00010006c090(uStack_280,uStack_278);
  extraout_x8[1] = uStack_268;
  *extraout_x8 = uStack_270;
  return;
}



/* Entry: 1019e6e1c; end: 1019e6e83;  */

void FUN_1019e6e1c(undefined8 *param_1)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1019e68d8(auStack_80);
  func_0x000107c6142c(uStack_70);
  func_0x00010006c090(uStack_50,uStack_48);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  return;
}



/* Entry: 1019e6e84; end: 1019e6e9b;  */

void FUN_1019e6e84(void)

{
  long unaff_x20;
  
  FUN_1019e6e1c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019e6e9c; end: 1019e6efb; -[SCDeviceDependentAssetResolverModeConfigReader init] */

void FUN_1019e6e9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDeviceDependentAssetConfigReader.DeviceDependentAssetResolverModeConfigReader"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019e6ec8);
  (*pcVar1)();
}



/* Entry: 1019e6efc; end: 1019e6fcb; -[SCDeviceDependentAssetResolverModeConfigReader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e6efc(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112de8210));
  puVar1 = (undefined8 *)(param_1 + _DAT_112de81f8);
  func_0x0001019e6f68(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7])
  ;
  func_0x0001019e6fa0(*(undefined8 *)(param_1 + _DAT_112de8200),
                      ((undefined8 *)(param_1 + _DAT_112de8200))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112de8208));
  return;
}



/* Entry: 1019e6fcc; end: 1019e6feb;  */

void FUN_1019e6fcc(void)

{
  func_0x000107c61168(&PTR_PTR_1127f0548);
  return;
}



/* Entry: 1019e6fec; end: 1019e70a7;  */

void FUN_1019e6fec(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1019e70a4);
    (*pcVar2)();
  }
  uVar3 = param_2;
  func_0x000107c5fb5c(param_2,param_3);
  if (!SBORROW8(uVar3,param_1)) {
    uVar5 = uVar3 - param_1 & ((long)(uVar3 - param_1) >> 0x3f ^ 0xffffffffffffffffU);
    uVar3 = param_2;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar3 = param_3 >> 0x38 & 0xf;
    }
    uVar6 = (uint)(param_2 >> 0x3b) & 1;
    if ((param_3 & 0x1000000000000000) == 0) {
      uVar6 = 1;
    }
    uVar1 = 7;
    if (uVar6 == 0) {
      uVar1 = 0xb;
    }
    uVar4 = 0xf;
    func_0x000107c5fb68(0xf,uVar5,uVar1 | uVar3 << 0x10,param_2,param_3);
    uVar1 = uVar3 << 0x10 | 0xb;
    if (uVar6 != 0) {
      uVar1 = uVar3 << 0x10 | 7;
    }
    if (((uint)uVar5 & 0xff) == 1) {
      uVar4 = uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSSySsSnySS5IndexVGcig_11034db08)(0xf,uVar4,param_2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019e70a8);
  (*pcVar2)();
}



/* Entry: 1019e70a8; end: 1019e723b;  */

undefined1  [16] FUN_1019e70a8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_68 [8];
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar10 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar2 = puVar11[-1];
      uVar1 = *puVar11;
      func_0x000107c61434(uVar1);
      uVar3 = 0;
      uVar9 = uVar1;
      func_0x000107c5fbb8(0x2a,0xe100000000000000,uVar2,uVar1);
      if ((uVar3 & 1) == 0) {
        func_0x000100403b00(auStack_68,uVar2,uVar1);
        uVar2 = uStack_60;
LAB_1019e7104:
        func_0x000107c6142c(uVar2);
      }
      else {
        uVar4 = 1;
        uVar8 = uVar1;
        FUN_1019e6fec(1,uVar2,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c5fb2c(uVar4,uVar2,uVar8,uVar9);
        func_0x000107c6142c(uVar9);
        uVar3 = uVar4 & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar3 = uVar2 >> 0x38 & 0xf;
        }
        if (uVar3 == 0) goto LAB_1019e7104;
        puVar5 = puVar7;
        func_0x000107c61558();
        puVar6 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          func_0x0001000d182c(puVar7,uVar3 + 1,1,puVar6);
        }
        *(ulong *)(puVar7 + 0x10) = uVar3 + 1;
        *(ulong *)(puVar7 + uVar3 * 0x10 + 0x20) = uVar4;
        *(ulong *)(puVar7 + uVar3 * 0x10 + 0x28) = uVar2;
      }
      puVar11 = puVar11 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  auVar12._8_8_ = puVar7;
  auVar12._0_8_ = puStack_58;
  return auVar12;
}



/* Entry: 1019e723c; end: 1019e7277;  */

undefined8 FUN_1019e723c(undefined8 param_1,undefined8 param_2)

{
  FUN_1019e80c4(param_2,param_1);
  return param_2;
}



/* Entry: 1019e7278; end: 1019e72b7;  */

void FUN_1019e7278(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de8248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9b2e38;
  func_0x000107c61520(&DAT_10d9b2e38,&UNK_110429600);
  puRam0000000112de8248 = puVar1;
  return;
}



/* Entry: 1019e72b8; end: 1019e7373;  */

undefined8 FUN_1019e72b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1019e7374; end: 1019e73af;  */

void FUN_1019e7374(void)

{
  FUN_1019e688c();
  return;
}



/* Entry: 1019e73b0; end: 1019e73bf;  */

void FUN_1019e73b0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 1019e73c0; end: 1019e73ef;  */

void FUN_1019e73c0(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1019e7c68();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1019e73f0; end: 1019e73f7;  */

undefined8 FUN_1019e73f0(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1019e73f8; end: 1019e746b;  */

void FUN_1019e73f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112de82d8;
  func_0x0001000285a8(0x112de82d8,&UNK_10d9b2d30);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1019e746c; end: 1019e7477;  */

void FUN_1019e746c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1019e7478; end: 1019e7523;  */

void FUN_1019e7478(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019e7524; end: 1019e7563;  */

bool FUN_1019e7524(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1019e7564; end: 1019e75ab;  */

void FUN_1019e7564(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9b3030,0x6a,2);
  uRam00000001138039c8 = uStack_38;
  uRam00000001138039c0 = uStack_40;
  uRam00000001138039d8 = uStack_28;
  uRam00000001138039d0 = uStack_30;
  uRam00000001138039e8 = uStack_18;
  uRam00000001138039e0 = uStack_20;
  return;
}



/* Entry: 1019e75ac; end: 1019e76c3;  */

/* WARNING: Removing unreachable block (ram,0x0001019e76c0) */

void FUN_1019e75ac(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_1019e7c74();
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_1019e7614;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x48);
          lVar1 = unaff_x20 + 0x18;
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x60);
          lVar1 = unaff_x20 + 0x20;
        }
        else {
          if (lVar1 != 5) goto LAB_1019e7624;
          pcVar3 = *(code **)(param_3 + 0x60);
          lVar1 = unaff_x20 + 0x28;
        }
LAB_1019e7614:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_1019e7624:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1019e76c4; end: 1019e77e3;  */

void FUN_1019e76c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    FUN_1019e7c74();
    (*pcVar2)(&lStack_50,1,&UNK_1104296a8,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((((*(long *)(unaff_x20[2] + 0x10) == 0) ||
        ((**(code **)(param_3 + 0x100))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)) &&
       (((int)unaff_x20[3] == 0 ||
        ((**(code **)(param_3 + 0x18))((int)unaff_x20[3],3,param_2,param_3), unaff_x21 == 0)))) &&
      ((unaff_x20[4] == 0 ||
       ((**(code **)(param_3 + 0x20))(unaff_x20[4],4,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[5] == 0 ||
      ((**(code **)(param_3 + 0x20))(unaff_x20[5],5,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  }
  return;
}



/* Entry: 1019e77e4; end: 1019e7833;  */

void FUN_1019e77e4(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xc000000000000000;
  return;
}



/* Entry: 1019e7834; end: 1019e7863;  */

undefined1  [16] FUN_1019e7834(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 1019e7864; end: 1019e7897;  */

void FUN_1019e7864(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 1019e7898; end: 1019e78ab;  */

undefined1  [16] FUN_1019e7898(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x1019e78a8;
  return auVar1;
}



/* Entry: 1019e78ac; end: 1019e78d3;  */

void FUN_1019e78ac(void)

{
  FUN_1019e75ac();
  return;
}



/* Entry: 1019e78d4; end: 1019e78d7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1019e78d4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1019e78d8; end: 1019e790f;  */

uint FUN_1019e78d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_1019e8358();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1019e7910; end: 1019e7957;  */

uint FUN_1019e7910(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_1019e7cb4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1019e7958; end: 1019e79f7;  */

/* WARNING: Possible PIC construction at 0x0001019e79a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019e79b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019e79a8) */
/* WARNING: Removing unreachable block (ram,0x0001019e79b8) */

void FUN_1019e7958(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112de82e0 != -1) {
    func_0x000107c61568(0x112de82e0,FUN_1019e7564);
  }
  uVar5 = uRam00000001138039e8;
  uVar4 = uRam00000001138039e0;
  uVar3 = uRam00000001138039d8;
  uVar2 = uRam00000001138039d0;
  uVar1 = uRam00000001138039c8;
  *param_1 = uRam00000001138039c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1019e79f8; end: 1019e7a33;  */

void FUN_1019e79f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112de8338;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112de8338,&UNK_10d9b2f98);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1019e7a34; end: 1019e7b37;  */

void FUN_1019e7a34(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019e7b38; end: 1019e7bc7;  */

uint FUN_1019e7b38(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_1019e7cb4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1019e7bc8; end: 1019e7c67;  */

/* WARNING: Possible PIC construction at 0x0001019e7c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019e7c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019e7c18) */
/* WARNING: Removing unreachable block (ram,0x0001019e7c28) */

void FUN_1019e7bc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112de82f8 != -1) {
    func_0x000107c61568(0x112de82f8,0x1019e7b80);
  }
  uVar5 = uRam0000000113803a18;
  uVar4 = uRam0000000113803a10;
  uVar3 = uRam0000000113803a08;
  uVar2 = uRam0000000113803a00;
  uVar1 = uRam00000001138039f8;
  *param_1 = uRam00000001138039f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1019e7c68; end: 1019e7c73;  */

void FUN_1019e7c68(void)

{
  return;
}



/* Entry: 1019e7c74; end: 1019e7cb3;  */

void FUN_1019e7c74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de82e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9b2d38;
  func_0x000107c61520(&DAT_10d9b2d38,&UNK_1104296a8);
  puRam0000000112de82e8 = puVar1;
  return;
}



/* Entry: 1019e7cb4; end: 1019e7e17;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019e7dcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001019e7dd0) */
/* WARNING: Removing unreachable block (ram,0x0001019e7dd4) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1019e7cb4(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  undefined8 *puVar28;
  byte *unaff_x23;
  undefined8 *puVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 < 3) {
      if (lVar22 == 0) {
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar22 == 1) {
        if (lVar19 != 1) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 3) {
      if (lVar19 != 3) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 4) {
      if (lVar19 != 4) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 5) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  lVar22 = param_1[2];
  lVar23 = param_2[2];
  lVar19 = *(long *)(lVar22 + 0x10);
  if (lVar19 == *(long *)(lVar23 + 0x10)) {
    if (lVar19 != 0 && lVar22 != lVar23) {
      puVar28 = (undefined8 *)(lVar23 + 0x28);
      puVar29 = (undefined8 *)(lVar22 + 0x28);
      do {
        pbVar12 = (byte *)puVar29[-1];
        pbVar14 = (byte *)*puVar29;
        pbVar15 = (byte *)puVar28[-1];
        pbVar17 = (byte *)*puVar28;
        if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
        goto code_r0x000107c605b8;
        puVar28 = puVar28 + 2;
        puVar29 = puVar29 + 2;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    if ((((int)param_1[3] == (int)param_2[3]) && (param_1[4] == param_2[4])) &&
       (param_1[5] == param_2[5])) {
      pbVar10 = (byte *)param_1[6];
      pbVar27 = (byte *)param_1[7];
      lVar19 = param_2[6];
      uVar16 = param_2[7];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar27 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar24 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar21 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
             ((uVar16 >> 0x3e < 3 || ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar24 == 0) {
            uVar25 = uVar16 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar19 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar24 == 2) {
            uVar25 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
            if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar27;
                puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar27;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar22 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar22;
              if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar27;
              if (pbVar10 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar16;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar26 = *(byte **)(pbVar9 + 0x18);
        bVar30 = pbVar9[0x28];
        pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar30 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar19 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar19,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar27;
            if ((pbVar10 == pbVar15) && (pbVar27 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar19 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar26 != (byte *)0x0) {
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar19);
                func_0x000107c61174();
                pbVar12 = pbVar26;
                func_0x000107c60118();
                func_0x000107c61170(pbVar26);
                func_0x000107c61170(lVar19);
                pbVar26 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar19 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar22 = *(long *)(pbVar9 + 0x20);
        if (bVar30 < 5) {
          if (bVar30 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar27, pbVar14 = pbVar26, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar27 == *(byte **)(pbVar13 + 0x10) && pbVar26 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar19 = *(long *)(pbVar13 + 0x20);
          if (pbVar27 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar27;
            if ((pbVar10 != pbVar15) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
              )(pbVar12,pbVar14,pbVar15,pbVar17,0);
              return pbVar12;
            }
          }
          if (lVar22 != 0) {
            if (lVar19 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar26 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar26,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar26 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar30 != 5) {
          if ((((pbVar26 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar22 == 0) && pbVar27 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar19 = *(long *)(pbVar13 + 0x18);
            bVar30 = pbVar13[8] | (byte)lVar19;
            bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar38 = pbVar13[0x10] | (byte)lVar22;
            bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar46[1] = bVar31;
            auVar46[0] = bVar30;
            auVar46[2] = bVar32;
            auVar46[3] = bVar33;
            auVar46[4] = bVar34;
            auVar46[5] = bVar35;
            auVar46[6] = bVar36;
            auVar46[7] = bVar37;
            auVar46[8] = bVar38;
            auVar46[9] = bVar39;
            auVar46[10] = bVar40;
            auVar46[0xb] = bVar41;
            auVar46[0xc] = bVar42;
            auVar46[0xd] = bVar43;
            auVar46[0xe] = bVar44;
            auVar46[0xf] = bVar45;
            auVar3[1] = bVar31;
            auVar3[0] = bVar30;
            auVar3[2] = bVar32;
            auVar3[3] = bVar33;
            auVar3[4] = bVar34;
            auVar3[5] = bVar35;
            auVar3[6] = bVar36;
            auVar3[7] = bVar37;
            auVar3[8] = bVar38;
            auVar3[9] = bVar39;
            auVar3[10] = bVar40;
            auVar3[0xb] = bVar41;
            auVar3[0xc] = bVar42;
            auVar3[0xd] = bVar43;
            auVar3[0xe] = bVar44;
            auVar3[0xf] = bVar45;
            auVar46 = NEON_ext(auVar46,auVar3,8,1);
            if (CONCAT17(bVar37 | auVar46[7],
                         CONCAT16(bVar36 | auVar46[6],
                                  CONCAT15(bVar35 | auVar46[5],
                                           CONCAT14(bVar34 | auVar46[4],
                                                    CONCAT13(bVar33 | auVar46[3],
                                                             CONCAT12(bVar32 | auVar46[2],
                                                                      CONCAT11(bVar31 | auVar46[1],
                                                                               bVar30 | auVar46[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar26 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
              lVar22 == 0)) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 2) {
              return (byte *)0x0;
            }
          }
          lVar22 = *(long *)(pbVar13 + 0x20);
          lVar19 = *(long *)(pbVar13 + 0x18);
          bVar30 = pbVar13[8] | (byte)lVar19;
          bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
          bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
          bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
          bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
          bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
          bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
          bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
          bVar38 = pbVar13[0x10] | (byte)lVar22;
          bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
          bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
          bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
          bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
          bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
          bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
          bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
          auVar1[1] = bVar31;
          auVar1[0] = bVar30;
          auVar1[2] = bVar32;
          auVar1[3] = bVar33;
          auVar1[4] = bVar34;
          auVar1[5] = bVar35;
          auVar1[6] = bVar36;
          auVar1[7] = bVar37;
          auVar1[8] = bVar38;
          auVar1[9] = bVar39;
          auVar1[10] = bVar40;
          auVar1[0xb] = bVar41;
          auVar1[0xc] = bVar42;
          auVar1[0xd] = bVar43;
          auVar1[0xe] = bVar44;
          auVar1[0xf] = bVar45;
          auVar2[1] = bVar31;
          auVar2[0] = bVar30;
          auVar2[2] = bVar32;
          auVar2[3] = bVar33;
          auVar2[4] = bVar34;
          auVar2[5] = bVar35;
          auVar2[6] = bVar36;
          auVar2[7] = bVar37;
          auVar2[8] = bVar38;
          auVar2[9] = bVar39;
          auVar2[10] = bVar40;
          auVar2[0xb] = bVar41;
          auVar2[0xc] = bVar42;
          auVar2[0xd] = bVar43;
          auVar2[0xe] = bVar44;
          auVar2[0xf] = bVar45;
          auVar46 = NEON_ext(auVar1,auVar2,8,1);
          lVar19 = CONCAT17(bVar37 | auVar46[7],
                            CONCAT16(bVar36 | auVar46[6],
                                     CONCAT15(bVar35 | auVar46[5],
                                              CONCAT14(bVar34 | auVar46[4],
                                                       CONCAT13(bVar33 | auVar46[3],
                                                                CONCAT12(bVar32 | auVar46[2],
                                                                         CONCAT11(bVar31 | auVar46[1
                                                  ],bVar30 | auVar46[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar19 = *(long *)(pbVar13 + 8);
        uVar16 = *(ulong *)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar22,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 1019e7e18; end: 1019e7e57;  */

void FUN_1019e7e18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de82f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b2ea8;
  func_0x000107c61520(&UNK_10d9b2ea8,&UNK_110429600);
  puRam0000000112de82f0 = puVar1;
  return;
}



/* Entry: 1019e7e58; end: 1019e7e6b;  */

void FUN_1019e7e58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1019e7e6c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1019e7eac)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1019e7e6c; end: 1019e7eeb;  */

void FUN_1019e7e6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de8300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b2dd0;
  func_0x000107c61520(&UNK_10d9b2dd0,&UNK_1104296a8);
  puRam0000000112de8300 = puVar1;
  return;
}



/* Entry: 1019e7eec; end: 1019e7eef;  */

void FUN_1019e7eec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112de8310 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112de8318;
  func_0x00010002969c(0x112de8318,&UNK_10d9b2d58);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112de8310 = puVar2;
  return;
}



/* Entry: 1019e7ef0; end: 1019e7f3f;  */

void FUN_1019e7ef0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112de8310 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112de8318;
  func_0x00010002969c(0x112de8318,&UNK_10d9b2d58);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112de8310 = puVar2;
  return;
}



/* Entry: 1019e7f40; end: 1019e7f43;  */

void FUN_1019e7f40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de8320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b2e10;
  func_0x000107c61520(&UNK_10d9b2e10,&UNK_1104296a8);
  puRam0000000112de8320 = puVar1;
  return;
}



/* Entry: 1019e7f44; end: 1019e7f83;  */

void FUN_1019e7f44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de8320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b2e10;
  func_0x000107c61520(&UNK_10d9b2e10,&UNK_1104296a8);
  puRam0000000112de8320 = puVar1;
  return;
}



/* Entry: 1019e7f84; end: 1019e7fa7;  */

void FUN_1019e7f84(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1019e7fa8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}


