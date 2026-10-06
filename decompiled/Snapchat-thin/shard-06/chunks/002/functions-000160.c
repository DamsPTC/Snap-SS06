/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045eb7d4; end: 1045eb853;  */

uint FUN_1045eb7d4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_b8 = (undefined1)param_1[0xd];
  uStack_af = *(undefined8 *)((long)param_1 + 0x71);
  uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_40 = param_2[0xc];
  uStack_2f = *(undefined8 *)((long)param_2 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
  uStack_38 = (undefined1)param_2[0xd];
  uStack_37 = (undefined7)((ulong)param_2[0xd] >> 8);
  FUN_1045eb264(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1045eb854; end: 1045eb87b;  */

undefined * FUN_1045eb854(void)

{
  return &UNK_11078b268;
}



/* Entry: 1045eb87c; end: 1045eb93b;  */

void FUN_1045eb87c(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1de20,0x30,&uStack_48,&lStack_40);
  puRam0000000113814518 = puStack_38;
  lRam0000000113814510 = lStack_40;
  puRam0000000113814528 = puStack_28;
  puRam0000000113814520 = puStack_30;
  puRam0000000113814538 = puStack_18;
  puRam0000000113814530 = puStack_20;
  return;
}



/* Entry: 1045eb93c; end: 1045eb9db;  */

void FUN_1045eb93c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088010 != -1) {
    _swift_once(0x113088010,FUN_1045eb87c);
  }
  uVar5 = uRam0000000113814538;
  uVar4 = uRam0000000113814530;
  uVar3 = uRam0000000113814528;
  uVar2 = uRam0000000113814520;
  uVar1 = uRam0000000113814518;
  *param_1 = uRam0000000113814510;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045eb9dc; end: 1045ebb33;  */

/* WARNING: Removing unreachable block (ram,0x0001045ebae0) */
/* WARNING: Removing unreachable block (ram,0x0001045ebb28) */

void FUN_1045eb9dc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 999) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x0001045f9190();
LAB_1045ebb14:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 0x22) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1045fa968();
          goto LAB_1045ebb14;
        }
        if (lVar1 == 0x21) {
          (**(code **)(param_3 + 0x140))(unaff_x20 + 0x40,param_2,param_3);
        }
        else if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_1045f9fbc();
          (**(code **)(param_3 + 0x1d0))
                    (unaff_x20 + 0x18,&UNK_11078df28,lVar2,lVar1,param_2,param_3);
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1045ebb34; end: 1045ebc2b;  */

void FUN_1045ebb34(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if (*(byte *)(unaff_x20 + 8) != 2) {
    (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 8) & 1,0x21,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    plVar1 = unaff_x20;
    FUN_1045ebc2c();
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0001045f9190();
      (*pcVar3)(lVar2,999,&UNK_11078e0d8,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1045ebc2c; end: 1045ebcaf;  */

void FUN_1045ebc2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x30);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1045fa968();
    (*pcVar1)(&uStack_60,0x22,&UNK_11078e1f8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045ebcb0; end: 1045ebcb3;  */

uint FUN_1045ebcb0(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar6 = param_1[5];
  uVar4 = param_1[4];
  uVar10 = param_1[7];
  uVar8 = param_1[6];
  uVar7 = param_2[5];
  uVar5 = param_2[4];
  uVar11 = param_2[7];
  lVar9 = param_2[6];
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  lStack_90 = lVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar8 == 0) {
    if (lVar9 != 0) goto LAB_1045f75b4;
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar4,uVar6,0,uVar10);
LAB_1045f7694:
    bVar1 = *(byte *)(param_2 + 8);
    if ((byte)param_1[8] == 2) {
      if (bVar1 != 2) goto LAB_1045f7614;
    }
    else {
      uVar2 = 0;
      if ((bVar1 == 2) || ((((byte)param_1[8] ^ bVar1) & 1) != 0)) goto LAB_1045f7618;
    }
    uVar4 = *param_1;
    func_0x0001045bbb80(uVar4,*param_2);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1[1];
      func_0x000100e25fcc(uVar4,param_1[2],param_2[1],param_2[2]);
      if ((uVar4 & 1) != 0) {
        uVar4 = param_1[3];
        FUN_104558fb4(uVar4,param_2[3]);
        uVar2 = (uint)uVar4;
        goto LAB_1045f7618;
      }
    }
  }
  else if (lVar9 == 0) {
LAB_1045f75b4:
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar4,uVar6,uVar8,uVar10);
    func_0x00010458a4f4(uVar5,uVar7,lVar9,uVar11);
  }
  else {
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    uVar3 = uVar4;
    FUN_1045f8100(uVar4,uVar6,uVar8,uVar10,uVar5,uVar7,lVar9,uVar11);
    func_0x00010458a4f4(uVar5,uVar7,lVar9,uVar11);
    func_0x00010458a4f4(uVar4,uVar6,uVar8,uVar10);
    if ((uVar3 & 1) != 0) goto LAB_1045f7694;
  }
LAB_1045f7614:
  uVar2 = 0;
LAB_1045f7618:
  return uVar2 & 1;
}



/* Entry: 1045ebcb4; end: 1045ebcef;  */

void FUN_1045ebcb4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1045bf768(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045ebcf0; end: 1045ebd43;  */

void FUN_1045ebcf0(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 2;
  return;
}



/* Entry: 1045ebd44; end: 1045ebde3;  */

uint FUN_1045ebd44(void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar1 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar7 = unaff_x20[7];
  FUN_104559288();
  if ((uVar4 & 1) == 0) {
LAB_1045ebdcc:
    uVar3 = 0;
  }
  else {
    if (uVar2 != 0) {
      func_0x00010006c00c(uVar1,uVar5);
      uVar4 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar1,uVar5,uVar2,uVar7);
      if ((uVar4 & 1) == 0) goto LAB_1045ebdcc;
    }
    func_0x0001045be170(uVar6);
    uVar5 = uVar6;
    FUN_10456cde8();
    _swift_bridgeObjectRelease(uVar6);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 1045ebde4; end: 1045ebe13;  */

undefined1  [16] FUN_1045ebde4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045ebe14; end: 1045ebe47;  */

void FUN_1045ebe14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045ebe48; end: 1045ebe5b;  */

undefined1  [16] FUN_1045ebe48(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045ebe58;
  return auVar1;
}



/* Entry: 1045ebe5c; end: 1045ebe6f;  */

void FUN_1045ebe5c(void)

{
  FUN_1045eb9dc();
  return;
}



/* Entry: 1045ebe70; end: 1045ebeaf;  */

void FUN_1045ebe70(void)

{
  FUN_1045ebb34();
  return;
}



/* Entry: 1045ebeb0; end: 1045ebf4f;  */

void FUN_1045ebeb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088010 != -1) {
    _swift_once(0x113088010,FUN_1045eb87c);
  }
  uVar5 = uRam0000000113814538;
  uVar4 = uRam0000000113814530;
  uVar3 = uRam0000000113814528;
  uVar2 = uRam0000000113814520;
  uVar1 = uRam0000000113814518;
  *param_1 = uRam0000000113814510;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ebf50; end: 1045ebf8b;  */

void FUN_1045ebf50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089340;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089340,&UNK_10dd1d850);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045ebf8c; end: 1045ec077;  */

void FUN_1045ebf8c(void)

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
  undefined1 uStack_30;
  
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  uStack_30 = *(undefined1 *)(unaff_x20 + 8);
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_b8,0);
  FUN_1045bf768(auStack_b8);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045ec078; end: 1045ec0cf;  */

uint FUN_1045ec078(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = *(undefined1 *)(param_1 + 8);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = *(undefined1 *)(param_2 + 8);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1045f74cc(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1045ec0d0; end: 1045ec0f7;  */

undefined * FUN_1045ec0d0(void)

{
  return &UNK_11078b278;
}



/* Entry: 1045ec0f8; end: 1045ec1b7;  */

void FUN_1045ec0f8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1ddd0,0x43,&uStack_48,&lStack_40);
  puRam0000000113814548 = puStack_38;
  lRam0000000113814540 = lStack_40;
  puRam0000000113814558 = puStack_28;
  puRam0000000113814550 = puStack_30;
  puRam0000000113814568 = puStack_18;
  puRam0000000113814560 = puStack_20;
  return;
}



/* Entry: 1045ec1b8; end: 1045ec257;  */

void FUN_1045ec1b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088018 != -1) {
    _swift_once(0x113088018,FUN_1045ec0f8);
  }
  uVar5 = uRam0000000113814568;
  uVar4 = uRam0000000113814560;
  uVar3 = uRam0000000113814558;
  uVar2 = uRam0000000113814550;
  uVar1 = uRam0000000113814548;
  *param_1 = uRam0000000113814540;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ec258; end: 1045ec3df;  */

/* WARNING: Removing unreachable block (ram,0x0001045ec3c0) */
/* WARNING: Removing unreachable block (ram,0x0001045ec3dc) */

void FUN_1045ec258(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 0x23) {
        if (lVar1 == 0x21) {
          (**(code **)(param_3 + 0x140))(unaff_x20 + 0x20,param_2,param_3);
        }
        else {
          if (lVar1 == 0x22) {
            pcVar4 = *(code **)(param_3 + 0x188);
            func_0x000104603ed4();
            goto LAB_1045ec2e0;
          }
LAB_1045ec374:
          if (lVar1 - 1000U < 0x1ffffc18) {
            lVar2 = lVar1;
            func_0x0001039f3828();
            (**(code **)(param_3 + 0x1d0))
                      (unaff_x20 + 0x18,&UNK_11078dfb8,lVar2,lVar1,param_2,param_3);
          }
        }
      }
      else {
        if (lVar1 == 0x23) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1045fa968();
        }
        else {
          if (lVar1 != 999) goto LAB_1045ec374;
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x0001045f9190();
        }
LAB_1045ec2e0:
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1045ec3e0; end: 1045ec58b;  */

void FUN_1045ec3e0(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  bVar2 = *(byte *)(unaff_x20 + 4);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x21);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  cVar3 = *(char *)((long)unaff_x20 + 0x21);
  if (cVar3 != '\x03') {
    __ss6HasherV8_combineyySuF(0x22);
    __ss6HasherV8_combineyySuF(cVar3);
  }
  lVar7 = unaff_x20[7];
  if (lVar7 != 0) {
    lVar6 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    lVar8 = unaff_x20[8];
    __ss6HasherV8_combineyySuF(0x23);
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_60 = param_1[8];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    func_0x00010006c00c(lVar6,lVar1);
    _swift_bridgeObjectRetain(lVar7);
    FUN_1045ee434(&uStack_a0,lVar6,lVar1,lVar7,lVar8);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    func_0x00010458a4f4(lVar6,lVar1,lVar7,lVar8);
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = uStack_60;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_10460e87c(*unaff_x20,999), unaff_x21 != 0)) {
    return;
  }
  FUN_1045ae514(param_1,1000,0x20000000,unaff_x20[3]);
  if (unaff_x21 != 0) {
    return;
  }
  lVar7 = unaff_x20[1];
  uVar4 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045ec580;
    }
    lVar6 = (long)(int)lVar7;
    lVar7 = lVar7 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(lVar7 + 0x10);
    lVar7 = *(long *)(lVar7 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_1045ec580:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045ec58c; end: 1045ec6cb;  */

void FUN_1045ec58c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  char cStack_41;
  
  uVar1 = param_1;
  if (*(byte *)(unaff_x20 + 4) != 2) {
    uVar1 = (ulong)(*(byte *)(unaff_x20 + 4) & 1);
    (**(code **)(param_3 + 0x68))(uVar1,0x21,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)((long)unaff_x20 + 0x21) != '\x03') {
      pcVar4 = *(code **)(param_3 + 0x80);
      cStack_41 = *(char *)((long)unaff_x20 + 0x21);
      func_0x000104603ed4();
      (*pcVar4)(&cStack_41,0x22,&UNK_11078e060,uVar1,param_2,param_3);
    }
    plVar2 = unaff_x20;
    FUN_1045ec6cc();
    lVar3 = *unaff_x20;
    if (*(long *)(lVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x0001045f9190();
      (*pcVar4)(lVar3,999,&UNK_11078e0d8,plVar2,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1045ec6cc; end: 1045ec757;  */

void FUN_1045ec6cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x38);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1045fa968();
    (*pcVar1)(&uStack_60,param_5,&UNK_11078e1f8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045ec758; end: 1045ec7bf;  */

uint FUN_1045ec758(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  bVar1 = *(byte *)(param_2 + 4);
  if ((byte)param_1[4] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if ((((byte)param_1[4] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0x21) == '\x03') {
    if (*(char *)((long)param_2 + 0x21) != '\x03') {
      return 0;
    }
  }
  else if (*(char *)((long)param_1 + 0x21) != *(char *)((long)param_2 + 0x21)) {
    return 0;
  }
  uVar6 = param_1[6];
  uVar4 = param_1[5];
  uVar10 = param_1[8];
  uVar8 = param_1[7];
  uVar7 = param_2[6];
  uVar5 = param_2[5];
  uVar11 = param_2[8];
  lVar9 = param_2[7];
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  lStack_90 = lVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar8 == 0) {
    if (lVar9 != 0) goto LAB_1045f7b3c;
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar4,uVar6,0,uVar10);
LAB_1045f7bf0:
    uVar4 = *param_1;
    func_0x0001045bbb80(uVar4,*param_2);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1[1];
      func_0x000100e25fcc(uVar4,param_1[2],param_2[1],param_2[2]);
      if ((uVar4 & 1) != 0) {
        uVar4 = param_1[3];
        FUN_104558fb4(uVar4,param_2[3]);
        uVar2 = (uint)uVar4;
        goto LAB_1045f7c3c;
      }
    }
  }
  else if (lVar9 == 0) {
LAB_1045f7b3c:
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar4,uVar6,uVar8,uVar10);
    func_0x00010458a4f4(uVar5,uVar7,lVar9,uVar11);
  }
  else {
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    uVar3 = uVar4;
    FUN_1045f8100(uVar4,uVar6,uVar8,uVar10,uVar5,uVar7,lVar9,uVar11);
    func_0x00010458a4f4(uVar5,uVar7,lVar9,uVar11);
    func_0x00010458a4f4(uVar4,uVar6,uVar8,uVar10);
    if ((uVar3 & 1) != 0) goto LAB_1045f7bf0;
  }
  uVar2 = 0;
LAB_1045f7c3c:
  return uVar2 & 1;
}



/* Entry: 1045ec7c0; end: 1045ec86b;  */

uint FUN_1045ec7c0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  uVar7 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar6 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar1 = unaff_x20[7];
  uVar3 = unaff_x20[8];
  FUN_104559288();
  if ((uVar5 & 1) == 0) {
LAB_1045ec850:
    uVar4 = 0;
  }
  else {
    if (uVar1 != 0) {
      func_0x00010006c00c(uVar6,uVar2);
      uVar5 = uVar1;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar6,uVar2,uVar1,uVar3);
      if ((uVar5 & 1) == 0) goto LAB_1045ec850;
    }
    func_0x0001045be170(uVar7);
    uVar6 = uVar7;
    (*param_3)();
    _swift_bridgeObjectRelease(uVar7);
    uVar4 = (uint)uVar6 & 1;
  }
  return uVar4;
}



/* Entry: 1045ec86c; end: 1045ec87f;  */

undefined1  [16] FUN_1045ec86c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045ec87c;
  return auVar1;
}



/* Entry: 1045ec880; end: 1045ec893;  */

void FUN_1045ec880(void)

{
  FUN_1045ec258();
  return;
}



/* Entry: 1045ec894; end: 1045ec8d3;  */

void FUN_1045ec894(void)

{
  FUN_1045ec58c();
  return;
}



/* Entry: 1045ec8d4; end: 1045ec973;  */

void FUN_1045ec8d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088018 != -1) {
    _swift_once(0x113088018,FUN_1045ec0f8);
  }
  uVar5 = uRam0000000113814568;
  uVar4 = uRam0000000113814560;
  uVar3 = uRam0000000113814558;
  uVar2 = uRam0000000113814550;
  uVar1 = uRam0000000113814548;
  *param_1 = uRam0000000113814540;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ec974; end: 1045ec987;  */

void FUN_1045ec974(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089338;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089338,&UNK_10dd1d848);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045ec988; end: 1045ecb6b;  */

/* WARNING: Removing unreachable block (ram,0x0001045ec9f4) */

void FUN_1045ec988(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_d0,0);
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_e0 = uStack_90;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  FUN_1045ec3e0(&uStack_120);
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_90 = uStack_e0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045ecb6c; end: 1045ecc83;  */

uint FUN_1045ecb6c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x0001045f79f8(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1045ecc84; end: 1045ecdc3;  */

void FUN_1045ecc84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088020 != -1) {
    _swift_once(0x113088020,0x1045ecbc4);
  }
  uVar5 = uRam0000000113814598;
  uVar4 = uRam0000000113814590;
  uVar3 = uRam0000000113814588;
  uVar2 = uRam0000000113814580;
  uVar1 = uRam0000000113814578;
  *param_1 = uRam0000000113814570;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ecdc4; end: 1045ecdeb;  */

undefined * FUN_1045ecdc4(void)

{
  return &UNK_11078b288;
}



/* Entry: 1045ecdec; end: 1045eceab;  */

void FUN_1045ecdec(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1dd20,0x6f,&uStack_48,&lStack_40);
  puRam00000001138145a8 = puStack_38;
  lRam00000001138145a0 = lStack_40;
  puRam00000001138145b8 = puStack_28;
  puRam00000001138145b0 = puStack_30;
  puRam00000001138145c8 = puStack_18;
  puRam00000001138145c0 = puStack_20;
  return;
}



/* Entry: 1045eceac; end: 1045ecf4b;  */

void FUN_1045eceac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088028 != -1) {
    _swift_once(0x113088028,FUN_1045ecdec);
  }
  uVar5 = uRam00000001138145c8;
  uVar4 = uRam00000001138145c0;
  uVar3 = uRam00000001138145b8;
  uVar2 = uRam00000001138145b0;
  uVar1 = uRam00000001138145a8;
  *param_1 = uRam00000001138145a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ecf4c; end: 1045ecf83;  */

uint FUN_1045ecf4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x0001045be2d4(uVar1);
  uVar2 = uVar1;
  FUN_10456d190();
  _swift_bridgeObjectRelease(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 1045ecf84; end: 1045ed0cb;  */

/* WARNING: Removing unreachable block (ram,0x0001045ed0b0) */

void FUN_1045ecf84(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 5) {
        if (lVar1 != 2) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x158);
            lVar1 = unaff_x20 + 0x18;
          }
          else {
            if (lVar1 != 4) goto LAB_1045ecffc;
            pcVar3 = *(code **)(param_3 + 0x98);
            lVar1 = unaff_x20 + 0x28;
          }
          goto LAB_1045ecfec;
        }
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x0001045f9210();
        (*pcVar3)();
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x68);
            lVar1 = unaff_x20 + 0x38;
          }
          else {
            if (lVar1 != 6) goto LAB_1045ecffc;
            pcVar3 = *(code **)(param_3 + 0x38);
            lVar1 = unaff_x20 + 0x48;
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x170);
          lVar1 = unaff_x20 + 0x58;
        }
        else {
          if (lVar1 != 8) goto LAB_1045ecffc;
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x68;
        }
LAB_1045ecfec:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_1045ecffc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045ed0cc; end: 1045ed25b;  */

void FUN_1045ed0cc(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_10460ec98(*unaff_x20,2), unaff_x21 != 0)) {
    return;
  }
  lVar3 = unaff_x20[4];
  if (lVar3 != 0) {
    lVar6 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar3);
  }
  if ((char)unaff_x20[6] != '\x01') {
    lVar3 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyys6UInt64VF(lVar3);
  }
  if ((char)unaff_x20[8] != '\x01') {
    lVar3 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys6UInt64VF(lVar3);
  }
  if ((char)unaff_x20[10] != '\x01') {
    uVar4 = unaff_x20[9];
    __ss6HasherV8_combineyySuF(6);
    uVar5 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar5 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar5);
  }
  uVar5 = unaff_x20[0xc];
  if (uVar5 >> 0x3c < 0xf) {
    lVar3 = unaff_x20[0xb];
    __ss6HasherV8_combineyySuF(7);
    func_0x00010006c00c(lVar3,uVar5);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,lVar3,uVar5);
    func_0x0001000b44c0(lVar3,uVar5);
  }
  lVar3 = unaff_x20[0xe];
  if (lVar3 != 0) {
    lVar6 = unaff_x20[0xd];
    __ss6HasherV8_combineyySuF(8);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar3);
  }
  lVar3 = unaff_x20[1];
  uVar1 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045ed23c;
    }
    lVar6 = (long)(int)lVar3;
    lVar3 = lVar3 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar6 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar3 + 0x18);
  }
  if (lVar6 == lVar3) {
    return;
  }
LAB_1045ed23c:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045ed25c; end: 1045ed3cb;  */

void FUN_1045ed25c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *unaff_x20;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    uVar1 = param_1;
    func_0x0001045f9210();
    (*pcVar3)(lVar2,2,&UNK_11078e170,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[4] != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[3],unaff_x20[4],3,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[6] != '\x01') {
      (**(code **)(param_3 + 0x30))(unaff_x20[5],4,param_2,param_3);
    }
    if ((char)unaff_x20[8] != '\x01') {
      (**(code **)(param_3 + 0x20))(unaff_x20[7],5,param_2,param_3);
    }
    if ((char)unaff_x20[10] != '\x01') {
      (**(code **)(param_3 + 0x10))(unaff_x20[9],6,param_2,param_3);
    }
    FUN_1045ed3cc();
    if (unaff_x20[0xe] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0xd],unaff_x20[0xe],8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1045ed3cc; end: 1045ed45f;  */

void FUN_1045ed3cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x60);
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    pcVar3 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(uVar2,uVar1);
    (*pcVar3)(uVar2,uVar1,7,param_3,param_4);
    func_0x0001000b44c0(uVar2,uVar1);
  }
  return;
}



/* Entry: 1045ed460; end: 1045ed463;  */

uint FUN_1045ed460(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar2 = *param_1;
  func_0x0001045bad98(uVar2,*param_2);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_2[4];
    if (param_1[4] == 0) {
      if (uVar2 == 0) goto LAB_1045f4910;
    }
    else if ((uVar2 != 0) &&
            (((uVar3 = param_1[3], uVar3 == param_2[3] && (param_1[4] == uVar2)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar3 & 1) != 0)))) {
LAB_1045f4910:
      if ((char)param_1[6] == '\x01') {
        if (*(char *)(param_2 + 6) != '\x01') goto LAB_1045f4a88;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 6) == '\x01') || (param_1[5] != param_2[5])) goto LAB_1045f4a8c;
      }
      if ((char)param_1[8] == '\x01') {
        if (*(char *)(param_2 + 8) != '\x01') goto LAB_1045f4a88;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 8) == '\x01') || (param_1[7] != param_2[7])) goto LAB_1045f4a8c;
      }
      if ((char)param_1[10] == '\x01') {
        if (*(char *)(param_2 + 10) != '\x01') goto LAB_1045f4a88;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 10) == '\x01') || ((double)param_1[9] != (double)param_2[9]))
        goto LAB_1045f4a8c;
      }
      uVar6 = param_1[0xc];
      uVar3 = param_1[0xb];
      uVar2 = param_2[0xc];
      uVar5 = param_2[0xb];
      uStack_70 = uVar5;
      uStack_68 = uVar2;
      uStack_60 = uVar3;
      uStack_58 = uVar6;
      if (uVar6 >> 0x3c < 0xf) {
        if (0xe < uVar2 >> 0x3c) goto LAB_1045f4a38;
        func_0x0001045f8fa8(&uStack_60,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        func_0x0001045f8fa8(&uStack_70,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        uVar4 = uVar3;
        func_0x000100e25fcc(uVar3,uVar6,uVar5,uVar2);
        func_0x0001000b44c0(uVar5,uVar2);
        func_0x0001000b44c0(uVar3,uVar6);
        if ((uVar4 & 1) != 0) goto LAB_1045f4b18;
      }
      else if (uVar2 >> 0x3c < 0xf) {
LAB_1045f4a38:
        func_0x0001045f8fa8(&uStack_60,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        func_0x0001045f8fa8(&uStack_70,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        func_0x0001000b44c0(uVar3,uVar6);
        func_0x0001000b44c0(uVar5,uVar2);
      }
      else {
        func_0x0001045f8fa8(&uStack_60,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        func_0x0001045f8fa8(&uStack_70,auStack_80,0x112d56fe0,&UNK_10d91dda0);
        func_0x0001000b44c0(uVar3,uVar6);
LAB_1045f4b18:
        uVar2 = param_2[0xe];
        if (param_1[0xe] == 0) {
          if (uVar2 == 0) goto LAB_1045f4b54;
        }
        else if ((uVar2 != 0) &&
                (((uVar3 = param_1[0xd], uVar3 == param_2[0xd] && (param_1[0xe] == uVar2)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar3 & 1) != 0)))) {
LAB_1045f4b54:
          uVar2 = param_1[1];
          func_0x000100e25fcc(uVar2,param_1[2],param_2[1],param_2[2]);
          uVar1 = (uint)uVar2;
          goto LAB_1045f4a8c;
        }
      }
    }
  }
LAB_1045f4a88:
  uVar1 = 0;
LAB_1045f4a8c:
  return uVar1 & 1;
}



/* Entry: 1045ed464; end: 1045ed4f3;  */

/* WARNING: Removing unreachable block (ram,0x0001045ed4b4) */

void FUN_1045ed464(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_1045ed0cc(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045ed4f4; end: 1045ed55b;  */

void FUN_1045ed4f4(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xc] = 0xf000000000000000;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}



/* Entry: 1045ed55c; end: 1045ed5c3;  */

uint FUN_1045ed55c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x0001045be2d4(uVar1);
  uVar2 = uVar1;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 1045ed5c4; end: 1045ed5f7;  */

void FUN_1045ed5c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045ed5f8; end: 1045ed60b;  */

undefined1  [16] FUN_1045ed5f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045ed608;
  return auVar1;
}



/* Entry: 1045ed60c; end: 1045ed61f;  */

void FUN_1045ed60c(void)

{
  FUN_1045ecf84();
  return;
}



/* Entry: 1045ed620; end: 1045ed66f;  */

void FUN_1045ed620(void)

{
  FUN_1045ed25c();
  return;
}



/* Entry: 1045ed670; end: 1045ed70f;  */

void FUN_1045ed670(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088028 != -1) {
    _swift_once(0x113088028,FUN_1045ecdec);
  }
  uVar5 = uRam00000001138145c8;
  uVar4 = uRam00000001138145c0;
  uVar3 = uRam00000001138145b8;
  uVar2 = uRam00000001138145b0;
  uVar1 = uRam00000001138145a8;
  *param_1 = uRam00000001138145a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ed710; end: 1045ed74b;  */

void FUN_1045ed710(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089330;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089330,&UNK_10dd1d840);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045ed74c; end: 1045ed963;  */

/* WARNING: Removing unreachable block (ram,0x0001045ed7c8) */

void FUN_1045ed74c(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_100,0);
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_110 = uStack_c0;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  FUN_1045ed0cc(&uStack_150);
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_c0 = uStack_110;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045ed964; end: 1045ed9e3;  */

uint FUN_1045ed964(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  FUN_1045f48a0(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1045ed9e4; end: 1045eda4f;  */

void FUN_1045ed9e4(void)

{
  __sSS6appendyySSF(0x726150656d614e2e,0xe900000000000074);
  uRam00000001138145d0 = 0xd000000000000023;
  uRam00000001138145d8 = 0x800000010f208670;
  return;
}



/* Entry: 1045eda50; end: 1045eda8f;  */

undefined8 FUN_1045eda50(void)

{
  if (lRam0000000113088038 != -1) {
    _swift_once(0x113088038,FUN_1045ed9e4);
  }
  return 0x1138145d0;
}



/* Entry: 1045eda90; end: 1045edaaf;  */

undefined1  [16] FUN_1045eda90(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000113088038 != -1) {
    _swift_once(0x113088038,FUN_1045ed9e4);
  }
  auVar1._8_8_ = uRam00000001138145d8;
  auVar1._0_8_ = uRam00000001138145d0;
  _swift_bridgeObjectRetain(uRam00000001138145d8);
  return auVar1;
}



/* Entry: 1045edab0; end: 1045edb6f;  */

void FUN_1045edab0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1dd00,0x1a,&uStack_48,&lStack_40);
  puRam00000001138145e8 = puStack_38;
  lRam00000001138145e0 = lStack_40;
  puRam00000001138145f8 = puStack_28;
  puRam00000001138145f0 = puStack_30;
  puRam0000000113814608 = puStack_18;
  puRam0000000113814600 = puStack_20;
  return;
}



/* Entry: 1045edb70; end: 1045edc0f;  */

void FUN_1045edb70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088040 != -1) {
    _swift_once(0x113088040,FUN_1045edab0);
  }
  uVar5 = uRam0000000113814608;
  uVar4 = uRam0000000113814600;
  uVar3 = uRam00000001138145f8;
  uVar2 = uRam00000001138145f0;
  uVar1 = uRam00000001138145e8;
  *param_1 = uRam00000001138145e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045edc10; end: 1045edc2f;  */

bool FUN_1045edc10(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    return *(char *)(unaff_x20 + 0x20) != '\x02';
  }
  return false;
}



/* Entry: 1045edc30; end: 1045edcc7;  */

void FUN_1045edc30(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1045edc84:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001045edca0;
  pcVar3 = *(code **)(param_3 + 0x158);
  lVar1 = unaff_x20 + 0x10;
  goto LAB_1045edc6c;
code_r0x0001045edca0:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x140);
    lVar1 = unaff_x20 + 0x20;
LAB_1045edc6c:
    (*pcVar3)(lVar1,param_2,param_3);
  }
  goto LAB_1045edc84;
}



/* Entry: 1045edcc8; end: 1045edd57;  */

void FUN_1045edcc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (unaff_x20[3] != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[2],unaff_x20[3],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(byte *)(unaff_x20 + 4) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 4) & 1,2,param_2,param_3);
    }
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1045edd58; end: 1045edd5b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045edd58(undefined8 *param_1,long *param_2)

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
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
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
  undefined1 auVar43 [16];
  
  lVar19 = param_1[3];
  lVar16 = param_2[3];
  if (lVar19 == 0) {
    if (lVar16 != 0) {
      return (byte *)0x0;
    }
  }
  else {
    if (lVar16 == 0) {
      return (byte *)0x0;
    }
    uVar22 = param_1[2];
    if ((uVar22 != param_2[2] || lVar19 != lVar16) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar22,lVar19,param_2[2],lVar16,0), (uVar22 & 1) == 0)) {
      return (byte *)0x0;
    }
  }
  bVar27 = *(byte *)(param_2 + 4);
  if (*(byte *)(param_1 + 4) == 2) {
    if (bVar27 == 2) {
LAB_1045f51f8:
      pbVar10 = (byte *)*param_1;
      pbVar26 = (byte *)param_1[1];
      lVar16 = *param_2;
      uVar22 = param_2[1];
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
        uVar4 = (uint)((ulong)pbVar26 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar22 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
              (uVar22 >> 0x3e < 3)) || ((uVar21 = 0, lVar16 != 0 || (uVar22 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
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
          if (uVar23 == 0) {
            uVar24 = uVar22 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar16 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar16)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar16)) goto code_r0x000100e26094;
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
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
            if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
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
                puVar7[-0x68] = (char)pbVar26;
                puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
              unaff_x24 = pbVar26;
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
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar19;
              if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar26;
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
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar16,uVar22);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar22;
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
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar16 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar16,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar16 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar16,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar16 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar16 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar16);
              func_0x000107c61174();
              pbVar10 = pbVar25;
              func_0x000107c60118();
              func_0x000107c61170(pbVar25);
              func_0x000107c61170(lVar16);
              pbVar25 = pbVar10;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
          }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
        lVar19 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
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
          lVar16 = *(long *)(pbVar13 + 0x20);
          if (pbVar26 == (byte *)0x0) {
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
            pbVar14 = pbVar26;
            if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar16 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar19 == lVar16)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar13 + 0x18),lVar16,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar19 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar13 + 0x20);
            lVar16 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar16;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar19;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar19 == 0)) {
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
          lVar19 = *(long *)(pbVar13 + 0x20);
          lVar16 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar16;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar19;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar16 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar16 = *(long *)(pbVar13 + 8);
        uVar22 = *(ulong *)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
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
  else if ((bVar27 != 2) && (((*(byte *)(param_1 + 4) ^ bVar27) & 1) == 0)) goto LAB_1045f51f8;
  return (byte *)0x0;
}



/* Entry: 1045edd5c; end: 1045edd97;  */

void FUN_1045edd5c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1045bf568(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045edd98; end: 1045eddef;  */

void FUN_1045edd98(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 2;
  return;
}



/* Entry: 1045eddf0; end: 1045ede1f;  */

undefined1  [16] FUN_1045eddf0(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045ede20; end: 1045ede53;  */

void FUN_1045ede20(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045ede54; end: 1045ede67;  */

undefined8 FUN_1045ede54(void)

{
  return 0x1045ede64;
}



/* Entry: 1045ede68; end: 1045ede8f;  */

void FUN_1045ede68(void)

{
  FUN_1045edc30();
  return;
}



/* Entry: 1045ede90; end: 1045edf2f;  */

void FUN_1045ede90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088040 != -1) {
    _swift_once(0x113088040,FUN_1045edab0);
  }
  uVar5 = uRam0000000113814608;
  uVar4 = uRam0000000113814600;
  uVar3 = uRam00000001138145f8;
  uVar2 = uRam00000001138145f0;
  uVar1 = uRam00000001138145e8;
  *param_1 = uRam00000001138145e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045edf30; end: 1045edf6b;  */

void FUN_1045edf30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089328;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089328,&UNK_10dd1d838);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045edf6c; end: 1045ee03f;  */

void FUN_1045edf6c(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  uStack_30 = *(undefined1 *)(unaff_x20 + 4);
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  FUN_1045bf568(auStack_98);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045ee040; end: 1045ee087;  */

uint FUN_1045ee040(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_1045f5164(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1045ee088; end: 1045ee0af;  */

undefined * FUN_1045ee088(void)

{
  return &UNK_11078b298;
}



/* Entry: 1045ee0b0; end: 1045ee16f;  */

void FUN_1045ee0b0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1dc60,0x9a,&uStack_48,&lStack_40);
  puRam0000000113814618 = puStack_38;
  lRam0000000113814610 = lStack_40;
  puRam0000000113814628 = puStack_28;
  puRam0000000113814620 = puStack_30;
  puRam0000000113814638 = puStack_18;
  puRam0000000113814630 = puStack_20;
  return;
}



/* Entry: 1045ee170; end: 1045ee20f;  */

void FUN_1045ee170(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088048 != -1) {
    _swift_once(0x113088048,FUN_1045ee0b0);
  }
  uVar5 = uRam0000000113814638;
  uVar4 = uRam0000000113814630;
  uVar3 = uRam0000000113814628;
  uVar2 = uRam0000000113814620;
  uVar1 = uRam0000000113814618;
  *param_1 = uRam0000000113814610;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ee210; end: 1045ee433;  */

/* WARNING: Removing unreachable block (ram,0x0001045ee3e4) */
/* WARNING: Removing unreachable block (ram,0x0001045ee428) */

void FUN_1045ee210(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar5 = *(code **)(param_3 + 0x188);
            func_0x000104603e14();
            lVar2 = unaff_x20 + 0x1a;
            puVar3 = &UNK_11078e3d0;
          }
          else {
            if (lVar1 != 4) goto LAB_1045ee3e8;
            pcVar5 = *(code **)(param_3 + 0x188);
            func_0x000104603dd4();
            lVar2 = unaff_x20 + 0x1b;
            puVar3 = &UNK_11078e460;
          }
          goto LAB_1045ee3bc;
        }
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x188);
          func_0x000104603e94();
          lVar2 = unaff_x20 + 0x18;
          puVar3 = &UNK_11078e2b0;
          goto LAB_1045ee3bc;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x188);
          func_0x000104603e54();
          lVar2 = unaff_x20 + 0x19;
          puVar3 = &UNK_11078e340;
          goto LAB_1045ee3bc;
        }
LAB_1045ee3e8:
        if (lVar1 - 1000U < 0x2329) {
          lVar2 = lVar1;
          FUN_1045fa968();
          (**(code **)(param_3 + 0x1d0))
                    (unaff_x20 + 0x10,&UNK_11078e1f8,lVar2,lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar5 = *(code **)(param_3 + 0x188);
            func_0x000104603d94();
            lVar2 = unaff_x20 + 0x1c;
            puVar3 = &UNK_11078e4f0;
          }
          else {
            if (lVar1 != 6) goto LAB_1045ee3e8;
            pcVar5 = *(code **)(param_3 + 0x188);
            func_0x000104603d54();
            lVar2 = unaff_x20 + 0x1d;
            puVar3 = &UNK_11078e580;
          }
        }
        else if (lVar1 == 7) {
          pcVar5 = *(code **)(param_3 + 0x188);
          func_0x000104603d14();
          lVar2 = unaff_x20 + 0x1e;
          puVar3 = &UNK_11078e610;
        }
        else {
          if (lVar1 != 8) goto LAB_1045ee3e8;
          pcVar5 = *(code **)(param_3 + 0x188);
          func_0x000104603cd4();
          lVar2 = unaff_x20 + 0x1f;
          puVar3 = &UNK_11078e720;
        }
LAB_1045ee3bc:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045ee434; end: 1045ee5eb;  */

void FUN_1045ee434(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  if ((param_5 & 0xff) != 4) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(param_5 & 0xff);
  }
  if ((param_5 & 0xff00) != 0x300) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(param_5 >> 8 & 0xff);
  }
  if ((param_5 & 0xff0000) != 0x30000) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(param_5 >> 0x10 & 0xff);
  }
  if ((param_5 & 0xff000000) != 0x3000000) {
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd1eab0 + (param_5 >> 0x18 & 0xff) * 8));
  }
  if ((param_5 & 0xff00000000) != 0x300000000) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF(param_5 >> 0x20 & 0xff);
  }
  if ((param_5 & 0xff0000000000) != 0x30000000000) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyySuF(param_5 >> 0x28 & 0xff);
  }
  if ((param_5 & 0xff000000000000) != 0x3000000000000) {
    __ss6HasherV8_combineyySuF(7);
    __ss6HasherV8_combineyySuF(param_5 >> 0x30 & 0xff);
  }
  if (param_5 >> 0x38 != 5) {
    __ss6HasherV8_combineyySuF(8);
    __ss6HasherV8_combineyySuF(param_5 >> 0x38);
  }
  FUN_1045ae514(param_1,1000,0x2711,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_3 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1045ee5d0;
    }
    lVar3 = (long)(int)param_2;
    lVar4 = param_2 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_1045ee5d0:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_2,param_3);
  return;
}



/* Entry: 1045ee5ec; end: 1045ee8b3;  */

void FUN_1045ee5ec(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x21;
  uint uVar3;
  code *pcVar4;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  uVar3 = (uint)param_5;
  puVar2 = param_1;
  if ((uVar3 & 0xff) != 4) {
    uStack_58 = (undefined1)param_5;
    pcVar4 = *(code **)(param_7 + 0x80);
    puVar1 = param_1;
    func_0x000104603e94();
    puVar2 = &uStack_58;
    (*pcVar4)(puVar2,1,&UNK_11078e2b0,puVar1,param_6,param_7);
  }
  if (unaff_x21 == 0) {
    puVar1 = puVar2;
    if ((uVar3 >> 8 & 0xff) != 3) {
      uStack_57 = (undefined1)(param_5 >> 8);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x000104603e54();
      puVar1 = &uStack_57;
      (*pcVar4)(puVar1,2,&UNK_11078e340,puVar2,param_6,param_7);
    }
    puVar2 = puVar1;
    if ((uVar3 >> 0x10 & 0xff) != 3) {
      uStack_56 = (undefined1)(param_5 >> 0x10);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x000104603e14();
      puVar2 = &uStack_56;
      (*pcVar4)(puVar2,3,&UNK_11078e3d0,puVar1,param_6,param_7);
    }
    puVar1 = puVar2;
    if (uVar3 >> 0x18 != 3) {
      uStack_55 = (undefined1)(param_5 >> 0x18);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x000104603dd4();
      puVar1 = &uStack_55;
      (*pcVar4)(puVar1,4,&UNK_11078e460,puVar2,param_6,param_7);
    }
    uVar3 = (uint)(param_5 >> 0x20);
    puVar2 = puVar1;
    if ((uVar3 & 0xff) != 3) {
      uStack_54 = (undefined1)(param_5 >> 0x20);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x000104603d94();
      puVar2 = &uStack_54;
      (*pcVar4)(puVar2,5,&UNK_11078e4f0,puVar1,param_6,param_7);
    }
    puVar1 = puVar2;
    if ((uVar3 >> 8 & 0xff) != 3) {
      uStack_53 = (undefined1)(param_5 >> 0x28);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x000104603d54();
      puVar1 = &uStack_53;
      (*pcVar4)(puVar1,6,&UNK_11078e580,puVar2,param_6,param_7);
    }
    puVar2 = puVar1;
    if (((ushort)(param_5 >> 0x30) & 0xff) != 3) {
      uStack_52 = (undefined1)(param_5 >> 0x30);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x000104603d14();
      puVar2 = &uStack_52;
      (*pcVar4)(puVar2,7,&UNK_11078e610,puVar1,param_6,param_7);
    }
    if (param_5 >> 0x38 != 5) {
      uStack_51 = (undefined1)(param_5 >> 0x38);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x000104603cd4();
      (*pcVar4)(&uStack_51,8,&UNK_11078e720,puVar2,param_6,param_7);
    }
    (**(code **)(param_7 + 0x1b0))(param_4,1000,0x2711,param_6,param_7);
    func_0x000100076224(param_1,param_2,param_3,param_6,param_7);
  }
  return;
}



/* Entry: 1045ee8b4; end: 1045ee8b7;  */

bool FUN_1045ee8b4(ulong param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,ulong param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar9 = (uint)(param_8 >> 0x20);
  uVar8 = (uint)param_8;
  uVar7 = (uint)param_4;
  if ((param_4 & 0xff) == 4) {
    if ((uVar8 & 0xff) != 4) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff) == 4) {
      return false;
    }
    if (((uVar8 ^ uVar7) & 0xff) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff00) == 0x300) {
    if ((uVar8 & 0xff00) != 0x300) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff00) == 0x300) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff00) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff0000) == 0x30000) {
    if ((uVar8 & 0xff0000) != 0x30000) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff0000) == 0x30000) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff0000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff000000) == 0x3000000) {
    if ((uVar8 & 0xff000000) != 0x3000000) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff000000) == 0x3000000) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff00000000) == 0x300000000) {
    if ((uVar9 & 0xff) != 3) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff) == 3) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff00000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff0000000000) == 0x30000000000) {
    if ((uVar9 & 0xff00) != 0x300) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff00) == 0x300) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff0000000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff000000000000) == 0x3000000000000) {
    if ((uVar9 & 0xff0000) != 0x30000) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff0000) == 0x30000) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff000000000000) != 0) {
      return false;
    }
  }
  if (param_4 >> 0x38 == 5) {
    if ((ulong)(uVar9 >> 0x18) != 5) {
      return false;
    }
  }
  else if (param_4 >> 0x38 != (ulong)(uVar9 >> 0x18)) {
    return false;
  }
  func_0x000100e25fcc(param_1,param_2,param_5,param_6);
  if ((param_1 & 1) == 0) {
    return false;
  }
  if (*(long *)(param_3 + 0x10) != *(long *)(param_7 + 0x10)) {
    return false;
  }
  uVar12 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_3 + 0x40);
  uVar12 = uVar12 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar10 = 0;
  lVar4 = lVar10;
  if (uVar13 == 0) goto LAB_104559bd0;
LAB_104559bfc:
  uVar11 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar13 = uVar13 - 1 & uVar13;
  uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar4 << 6;
  lStack_d0 = *(long *)(*(long *)(param_3 + 0x30) + uVar11 * 8);
  FUN_104558b10(*(long *)(param_3 + 0x38) + uVar11 * 0x28,&uStack_c8);
  lVar10 = lVar4;
  do {
    lVar4 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(param_3);
      return true;
    }
    uVar11 = 0;
    FUN_104558c58(&uStack_98);
    if ((*(long *)(param_7 + 0x10) == 0) || (func_0x00010035a314(lVar4), (uVar11 & 1) == 0)) {
LAB_104559d48:
      _swift_release(param_3);
LAB_104559d70:
      func_0x0001000834e4(&lStack_d0);
      return bVar3;
    }
    FUN_104558b10(*(long *)(param_7 + 0x38) + lVar4 * 0x28,auStack_120);
    FUN_104558c58(auStack_120,alStack_f8);
    plVar5 = &lStack_d0;
    func_0x0001000a8868(plVar5,uStack_b8);
    _swift_getDynamicType();
    plVar6 = alStack_f8;
    func_0x0001000a8868(plVar6,uStack_e0);
    _swift_getDynamicType();
    lVar4 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar5 != plVar6) {
      _swift_release(param_3);
      func_0x0001000834e4(alStack_f8);
      goto LAB_104559d70;
    }
    func_0x0001000a8868(&lStack_d0,uStack_b8);
    plVar5 = alStack_f8;
    (**(code **)(lVar4 + 0x20))(plVar5,uVar1,lVar4);
    func_0x0001000834e4(alStack_f8);
    if (((ulong)plVar5 & 1) == 0) goto LAB_104559d48;
    func_0x0001000834e4(&lStack_d0);
    lVar4 = lVar10;
    if (uVar13 != 0) goto LAB_104559bfc;
LAB_104559bd0:
    uVar11 = uVar12;
    if ((long)uVar12 <= lVar10 + 1) {
      uVar11 = lVar10 + 1;
    }
    while( true ) {
      lVar4 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104559da0);
        (*pcVar2)();
      }
      if ((long)uVar12 <= lVar4) break;
      uVar13 = ((ulong *)(param_3 + 0x40))[lVar4];
      lVar10 = lVar10 + 1;
      if (uVar13 != 0) goto LAB_104559bfc;
    }
    uVar13 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar10 = uVar11 - 1;
  } while( true );
}



/* Entry: 1045ee8b8; end: 1045ee96f;  */

/* WARNING: Removing unreachable block (ram,0x0001045ee92c) */

void FUN_1045ee8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_1045ee434(&uStack_e0,param_1,param_2,param_3,param_4);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045ee970; end: 1045ee9df;  */

void FUN_1045ee970(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined1 *)(param_1 + 3) = 4;
  *(undefined4 *)((long)param_1 + 0x19) = 0x3030303;
  *(undefined2 *)((long)param_1 + 0x1d) = 0x303;
  *(undefined1 *)((long)param_1 + 0x1f) = 5;
  return;
}



/* Entry: 1045ee9e0; end: 1045eea17;  */

void FUN_1045ee9e0(void)

{
  FUN_1045ee210();
  return;
}



/* Entry: 1045eea18; end: 1045eeab7;  */

void FUN_1045eea18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088048 != -1) {
    _swift_once(0x113088048,FUN_1045ee0b0);
  }
  uVar5 = uRam0000000113814638;
  uVar4 = uRam0000000113814630;
  uVar3 = uRam0000000113814628;
  uVar2 = uRam0000000113814620;
  uVar1 = uRam0000000113814618;
  *param_1 = uRam0000000113814610;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045eeab8; end: 1045eeacb;  */

void FUN_1045eeab8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089320;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089320,&UNK_10dd1d830);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045eeacc; end: 1045eeb7b;  */

/* WARNING: Removing unreachable block (ram,0x0001045eeb38) */

void FUN_1045eeacc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_1045ee434(&uStack_e0,uVar1,uVar3,uVar2,uVar4);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045eeb7c; end: 1045eebf7;  */

/* WARNING: Removing unreachable block (ram,0x0001045eebc4) */

void FUN_1045eeb7c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
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
  FUN_1045ee434(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
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



/* Entry: 1045eebf8; end: 1045eeca3;  */

/* WARNING: Removing unreachable block (ram,0x0001045eec60) */

void FUN_1045eebf8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_1045ee434(&uStack_e0,uVar1,uVar3,uVar2,uVar4);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045eeca4; end: 1045eeccf;  */

bool FUN_1045eeca4(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar14 = *param_1;
  uVar1 = param_1[2];
  uVar13 = param_1[3];
  lVar2 = param_2[2];
  uVar12 = param_2[3];
  uVar9 = (uint)uVar13;
  uVar10 = (uint)uVar12;
  if ((uVar13 & 0xff) == 4) {
    if ((uVar12 & 0xff) != 4) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff) == 4) {
      return false;
    }
    if (((uVar10 ^ uVar9) & 0xff) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff00) == 0x300) {
    if ((uVar12 & 0xff00) != 0x300) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff00) == 0x300) {
      return false;
    }
    if (((uVar9 ^ uVar10) & 0xff00) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff0000) == 0x30000) {
    if ((uVar12 & 0xff0000) != 0x30000) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff0000) == 0x30000) {
      return false;
    }
    if (((uVar9 ^ uVar10) & 0xff0000) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff000000) == 0x3000000) {
    if ((uVar12 & 0xff000000) != 0x3000000) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff000000) == 0x3000000) {
      return false;
    }
    if (((uVar9 ^ uVar10) & 0xff000000) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff00000000) == 0x300000000) {
    if ((uVar12 & 0xff00000000) != 0x300000000) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff00000000) == 0x300000000) {
      return false;
    }
    if (((uVar12 ^ uVar13) & 0xff00000000) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff0000000000) == 0x30000000000) {
    if ((uVar12 & 0xff0000000000) != 0x30000000000) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff0000000000) == 0x30000000000) {
      return false;
    }
    if (((uVar12 ^ uVar13) & 0xff0000000000) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff000000000000) == 0x3000000000000) {
    if ((uVar12 & 0xff000000000000) != 0x3000000000000) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff000000000000) == 0x3000000000000) {
      return false;
    }
    if (((uVar12 ^ uVar13) & 0xff000000000000) != 0) {
      return false;
    }
  }
  if (uVar13 >> 0x38 == 5) {
    if (uVar12 >> 0x38 != 5) {
      return false;
    }
  }
  else if (uVar13 >> 0x38 != uVar12 >> 0x38) {
    return false;
  }
  func_0x000100e25fcc(uVar14,param_1[1],*param_2,param_2[1]);
  if ((uVar14 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar1 + 0x10) != *(long *)(lVar2 + 0x10)) {
    return false;
  }
  uVar13 = 1L << ((ulong)*(byte *)(uVar1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(uVar1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(uVar1 + 0x40);
  uVar13 = uVar13 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar11 = 0;
  lVar6 = lVar11;
  if (uVar14 == 0) goto LAB_104559bd0;
LAB_104559bfc:
  uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
  uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uVar14 = uVar14 - 1 & uVar14;
  uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar6 << 6;
  lStack_d0 = *(long *)(*(long *)(uVar1 + 0x30) + uVar12 * 8);
  FUN_104558b10(*(long *)(uVar1 + 0x38) + uVar12 * 0x28,&uStack_c8);
  lVar11 = lVar6;
  do {
    lVar6 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar5 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(uVar1);
      return true;
    }
    uVar12 = 0;
    FUN_104558c58(&uStack_98);
    if ((*(long *)(lVar2 + 0x10) == 0) || (func_0x00010035a314(lVar6), (uVar12 & 1) == 0)) {
LAB_104559d48:
      _swift_release(uVar1);
LAB_104559d70:
      func_0x0001000834e4(&lStack_d0);
      return bVar5;
    }
    FUN_104558b10(*(long *)(lVar2 + 0x38) + lVar6 * 0x28,auStack_120);
    FUN_104558c58(auStack_120,alStack_f8);
    plVar7 = &lStack_d0;
    func_0x0001000a8868(plVar7,uStack_b8);
    _swift_getDynamicType();
    plVar8 = alStack_f8;
    func_0x0001000a8868(plVar8,uStack_e0);
    _swift_getDynamicType();
    lVar6 = lStack_b0;
    uVar3 = uStack_b8;
    if (plVar7 != plVar8) {
      _swift_release(uVar1);
      func_0x0001000834e4(alStack_f8);
      goto LAB_104559d70;
    }
    func_0x0001000a8868(&lStack_d0,uStack_b8);
    plVar7 = alStack_f8;
    (**(code **)(lVar6 + 0x20))(plVar7,uVar3,lVar6);
    func_0x0001000834e4(alStack_f8);
    if (((ulong)plVar7 & 1) == 0) goto LAB_104559d48;
    func_0x0001000834e4(&lStack_d0);
    lVar6 = lVar11;
    if (uVar14 != 0) goto LAB_104559bfc;
LAB_104559bd0:
    uVar12 = uVar13;
    if ((long)uVar13 <= lVar11 + 1) {
      uVar12 = lVar11 + 1;
    }
    while( true ) {
      lVar6 = lVar11 + 1;
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104559da0);
        (*pcVar4)();
      }
      if ((long)uVar13 <= lVar6) break;
      uVar14 = ((ulong *)(uVar1 + 0x40))[lVar6];
      lVar11 = lVar11 + 1;
      if (uVar14 != 0) goto LAB_104559bfc;
    }
    uVar14 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar11 = uVar12 - 1;
  } while( true );
}



/* Entry: 1045eecd0; end: 1045eed8f;  */

void FUN_1045eecd0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1dc20,0x3f,&uStack_48,&lStack_40);
  puRam0000000113814648 = puStack_38;
  lRam0000000113814640 = lStack_40;
  puRam0000000113814658 = puStack_28;
  puRam0000000113814650 = puStack_30;
  puRam0000000113814668 = puStack_18;
  puRam0000000113814660 = puStack_20;
  return;
}



/* Entry: 1045eed90; end: 1045eeecf;  */

void FUN_1045eed90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088050 != -1) {
    _swift_once(0x113088050,FUN_1045eecd0);
  }
  uVar5 = uRam0000000113814668;
  uVar4 = uRam0000000113814660;
  uVar3 = uRam0000000113814658;
  uVar2 = uRam0000000113814650;
  uVar1 = uRam0000000113814648;
  *param_1 = uRam0000000113814640;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045eeed0; end: 1045eef8f;  */

void FUN_1045eeed0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1dbf0,0x23,&uStack_48,&lStack_40);
  puRam0000000113814678 = puStack_38;
  lRam0000000113814670 = lStack_40;
  puRam0000000113814688 = puStack_28;
  puRam0000000113814680 = puStack_30;
  puRam0000000113814698 = puStack_18;
  puRam0000000113814690 = puStack_20;
  return;
}



/* Entry: 1045eef90; end: 1045ef0cf;  */

void FUN_1045eef90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088058 != -1) {
    _swift_once(0x113088058,FUN_1045eeed0);
  }
  uVar5 = uRam0000000113814698;
  uVar4 = uRam0000000113814690;
  uVar3 = uRam0000000113814688;
  uVar2 = uRam0000000113814680;
  uVar1 = uRam0000000113814678;
  *param_1 = uRam0000000113814670;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ef0d0; end: 1045ef18f;  */

void FUN_1045ef0d0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1dbb0,0x35,&uStack_48,&lStack_40);
  puRam00000001138146a8 = puStack_38;
  lRam00000001138146a0 = lStack_40;
  puRam00000001138146b8 = puStack_28;
  puRam00000001138146b0 = puStack_30;
  puRam00000001138146c8 = puStack_18;
  puRam00000001138146c0 = puStack_20;
  return;
}



/* Entry: 1045ef190; end: 1045ef2cf;  */

void FUN_1045ef190(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088060 != -1) {
    _swift_once(0x113088060,FUN_1045ef0d0);
  }
  uVar5 = uRam00000001138146c8;
  uVar4 = uRam00000001138146c0;
  uVar3 = uRam00000001138146b8;
  uVar2 = uRam00000001138146b0;
  uVar1 = uRam00000001138146a8;
  *param_1 = uRam00000001138146a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ef2d0; end: 1045ef38f;  */

void FUN_1045ef2d0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1db80,0x2a,&uStack_48,&lStack_40);
  puRam00000001138146d8 = puStack_38;
  lRam00000001138146d0 = lStack_40;
  puRam00000001138146e8 = puStack_28;
  puRam00000001138146e0 = puStack_30;
  puRam00000001138146f8 = puStack_18;
  puRam00000001138146f0 = puStack_20;
  return;
}



/* Entry: 1045ef390; end: 1045ef4cf;  */

void FUN_1045ef390(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088068 != -1) {
    _swift_once(0x113088068,FUN_1045ef2d0);
  }
  uVar5 = uRam00000001138146f8;
  uVar4 = uRam00000001138146f0;
  uVar3 = uRam00000001138146e8;
  uVar2 = uRam00000001138146e0;
  uVar1 = uRam00000001138146d8;
  *param_1 = uRam00000001138146d0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}


