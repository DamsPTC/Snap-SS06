/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033312d8; end: 1033312fb;  */

undefined8 FUN_1033312d8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1033312fc; end: 103331333;  */

void FUN_1033312fc(undefined8 param_1)

{
  if (lRam0000000112f5a718 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e75b4ec);
  return;
}



/* Entry: 103331334; end: 1033313df;  */

void FUN_103331334(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_90 = &UNK_10dbb2928;
  puStack_88 = &UNK_10dbb2940;
  puStack_78 = PTR___sBoWV_11034d678 + 0x40;
  puStack_80 = &UNK_10dbb2940;
  puStack_70 = &UNK_10dbb2940;
  puStack_68 = &UNK_10dbb2940;
  puStack_60 = &UNK_10dbb2940;
  puStack_58 = &UNK_10dbb2940;
  puStack_50 = &UNK_10dbb2940;
  puStack_48 = &UNK_10dbb2958;
  puStack_40 = &UNK_10dbb2940;
  puStack_38 = &UNK_10dbb2940;
  puStack_30 = &UNK_10dbb2940;
  lVar1 = 0x13f;
  FUN_103331784();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61524(param_1,0x100,0xe,&puStack_90,param_1 + 0xd8);
  }
  return;
}



/* Entry: 1033313e0; end: 1033313e7;  */

void FUN_1033313e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint3 uVar4;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  cVar3 = *(char *)((long)param_1 + 0x13);
  if (cVar3 == '\x01') {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 3;
    func_0x000100087f6c(&uStack_70);
  }
  else {
    uVar4 = *(uint3 *)(param_1 + 2);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uStack_60 = (ulong)(uVar4 & 0x1010101);
    uStack_58 = 0;
    uStack_50 = 3;
    uStack_70 = uVar1;
    uStack_68 = uVar2;
    func_0x000107c61174(uVar1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c61434(uVar2);
    func_0x000100087f6c(&uStack_70);
    FUN_1033313e8(uVar1,uVar2,(uint)uVar4,cVar3);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 1033313e8; end: 10333141b;  */

void FUN_1033313e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10333141c; end: 10333142b;  */

void FUN_10333141c(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 != '\x01') {
    uVar2 = *param_1;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 2;
    uStack_58 = uVar2;
    func_0x000107c61174(uVar2);
    func_0x000100087f6c(&uStack_58);
    func_0x000101c17ab4(uVar2,cVar1);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 10333142c; end: 103331783;  */

void FUN_10333142c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_68 = param_1;
  func_0x000107c5ebbc();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar2 = 0x112d4b5b0;
  puStack_70 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0;
  func_0x000107c5ec24();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar13 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar13 - extraout_x8_02;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_103331784();
  func_0x000100029394(unaff_x20 + *(int *)(lVar2 + 0x14),lVar14);
  lVar2 = lVar14;
  (**(code **)(lVar11 + 0x30))(lVar14,1,lVar4);
  if ((int)lVar2 == 1) {
    uVar8 = 0x112d36580;
    puVar7 = &UNK_10d9016d0;
    lVar15 = lVar14;
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar12,lVar14,lVar4);
    func_0x000107c5ebe4(lVar15,lVar12,0);
    lVar2 = lVar15;
    (**(code **)(lVar10 + 0x30))(lVar15,1,lVar3);
    if ((int)lVar2 != 1) {
      (**(code **)(lVar10 + 0x20))(lVar13,lVar15,lVar3);
      puVar5 = (undefined *)0x6e65706f;
      func_0x000107c5ebf0(0x6e65706f,0xe400000000000000);
      func_0x000107c5ebc4();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar5;
      }
      func_0x000107c5ebb0(puStack_70,0x6449736e656c,0xe600000000000000,uStack_88,uStack_80);
      puVar5 = puVar7;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001012d3170(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001012d3170(puVar7,uVar1 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
      (**(code **)(lVar9 + 0x20))
                (puVar7 + *(long *)(lVar9 + 0x48) * uVar1 +
                          ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)),puStack_70,
                 lStack_78);
      func_0x000107c61434(puVar7);
      func_0x000107c5ebc8();
      func_0x000107c5ebe8(uStack_68);
      (**(code **)(lVar10 + 8))(lVar13,lVar3);
      (**(code **)(lVar11 + 8))(lVar12,lVar4);
      func_0x000107c6142c(puVar7);
      return;
    }
    (**(code **)(lVar11 + 8))(lVar12,lVar4);
    uVar8 = 0x112d4b5b0;
    puVar7 = &UNK_10d912140;
  }
  func_0x000103332a70(lVar15,uVar8,puVar7);
  (**(code **)(lVar11 + 0x38))(uStack_68,1,1,lVar4);
  return;
}



/* Entry: 103331784; end: 1033317bb;  */

void FUN_103331784(undefined8 param_1)

{
  if (lRam0000000112f5a8e8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e75b568);
  return;
}



/* Entry: 1033317bc; end: 1033317bf;  */

undefined8 FUN_1033317bc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar13 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d36580;
  lStack_78 = lVar13;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  uVar8 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = uVar8 - extraout_x12;
  lVar10 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  lVar13 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar5 = uVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar5 - extraout_x12_00;
  lVar13 = (long)*(int *)(lVar13 + 0x30);
  lStack_70 = param_1;
  func_0x000100029394(param_1,lVar11);
  lStack_68 = param_2;
  func_0x000100029394(param_2,lVar11 + lVar13);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar4 = lVar11;
  (*pcVar7)(lVar11,1,lVar3);
  if ((int)lVar4 == 1) {
    lVar13 = lVar11 + lVar13;
    (*pcVar7)(lVar13,1,lVar3);
    if ((int)lVar13 != 1) goto LAB_1033321a0;
    uStack_80 = uVar8;
    func_0x000103332a70(lVar11,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000100029394(lVar11,uVar12);
    lVar4 = lVar11 + lVar13;
    (*pcVar7)(lVar4,1,lVar3);
    lVar2 = lStack_78;
    if ((int)lVar4 == 1) {
      (**(code **)(lVar6 + 8))(uVar12,lVar3);
      goto LAB_1033321a0;
    }
    lVar4 = lStack_78;
    uStack_80 = uVar8;
    (**(code **)(lVar6 + 0x20))(lStack_78,lVar11 + lVar13,lVar3);
    func_0x000101553b98();
    uVar8 = uVar12;
    func_0x000107c5fab8(uVar12,lVar2,lVar3,lVar4);
    pcVar9 = *(code **)(lVar6 + 8);
    (*pcVar9)(lVar2,lVar3);
    (*pcVar9)(uVar12,lVar3);
    func_0x000103332a70(lVar11,0x112d36580,&UNK_10d9016d0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  lVar13 = 0;
  FUN_103331784();
  iVar1 = *(int *)(lVar13 + 0x14);
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x000100029394(lStack_70 + iVar1,lVar5);
  func_0x000100029394(lStack_68 + iVar1,lVar5 + lVar10);
  lVar13 = lVar5;
  (*pcVar7)(lVar5,1,lVar3);
  uVar8 = uStack_80;
  lVar11 = lVar5;
  if ((int)lVar13 == 1) {
    lVar10 = lVar5 + lVar10;
    (*pcVar7)(lVar10,1,lVar3);
    if ((int)lVar10 == 1) {
      func_0x000103332a70(lVar5,0x112d36580,&UNK_10d9016d0);
      return 1;
    }
  }
  else {
    func_0x000100029394(lVar5,uStack_80);
    lVar13 = lVar5 + lVar10;
    (*pcVar7)(lVar13,1,lVar3);
    lVar4 = lStack_78;
    if ((int)lVar13 != 1) {
      lVar13 = lStack_78;
      (**(code **)(lVar6 + 0x20))(lStack_78,lVar5 + lVar10,lVar3);
      func_0x000101553b98();
      uVar12 = uVar8;
      func_0x000107c5fab8(uVar8,lVar4,lVar3,lVar13);
      pcVar7 = *(code **)(lVar6 + 8);
      (*pcVar7)(lVar4,lVar3);
      (*pcVar7)(uVar8,lVar3);
      func_0x000103332a70(lVar5,0x112d36580,&UNK_10d9016d0);
      if ((uVar12 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    (**(code **)(lVar6 + 8))(uVar8,lVar3);
  }
LAB_1033321a0:
  func_0x000103332a70(lVar11,0x112d7e680,&UNK_10d95e350);
  return 0;
}



/* Entry: 1033317c0; end: 1033318c7;  */

undefined * FUN_1033317c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033318c8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f59e68;
    func_0x0001000285a8(0x112f59e68,&UNK_10dbb3230);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11063f070);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1033318c8; end: 1033319ef;  */

ulong FUN_1033318c8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033319f0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x0001033462a0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033319ec);
      (*pcVar1)();
    }
    FUN_103331c3c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1033319f0; end: 103331b13;  */

undefined * FUN_1033319f0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103331b14);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f5a920;
    func_0x0001000285a8(0x112f5a920,&UNK_10dbb29d0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x68) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1106401a8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x68 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x68);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103331b14; end: 103331c3b;  */

ulong FUN_103331b14(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103331c3c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x0001033462ac(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103331c38);
      (*pcVar1)();
    }
    func_0x000103331d60(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103331c3c; end: 103331e83;  */

long FUN_103331c3c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103331d5c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103331d60);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f5a928;
        func_0x0001000285a8(0x112f5a928,&UNK_10dbb29e0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f5a928;
      func_0x0001000285a8(0x112f5a928,&UNK_10dbb29e0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103331d58);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103331e84; end: 10333223b;  */

undefined8 FUN_103331e84(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar13 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d36580;
  lStack_78 = lVar13;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  uVar8 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = uVar8 - extraout_x12;
  lVar10 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  lVar13 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar5 = uVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar5 - extraout_x12_00;
  lVar13 = (long)*(int *)(lVar13 + 0x30);
  lStack_70 = param_1;
  func_0x000100029394(param_1,lVar11);
  lStack_68 = param_2;
  func_0x000100029394(param_2,lVar11 + lVar13);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar4 = lVar11;
  (*pcVar7)(lVar11,1,lVar3);
  if ((int)lVar4 == 1) {
    lVar13 = lVar11 + lVar13;
    (*pcVar7)(lVar13,1,lVar3);
    if ((int)lVar13 != 1) goto LAB_1033321a0;
    uStack_80 = uVar8;
    func_0x000103332a70(lVar11,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000100029394(lVar11,uVar12);
    lVar4 = lVar11 + lVar13;
    (*pcVar7)(lVar4,1,lVar3);
    lVar2 = lStack_78;
    if ((int)lVar4 == 1) {
      (**(code **)(lVar6 + 8))(uVar12,lVar3);
      goto LAB_1033321a0;
    }
    lVar4 = lStack_78;
    uStack_80 = uVar8;
    (**(code **)(lVar6 + 0x20))(lStack_78,lVar11 + lVar13,lVar3);
    func_0x000101553b98();
    uVar8 = uVar12;
    func_0x000107c5fab8(uVar12,lVar2,lVar3,lVar4);
    pcVar9 = *(code **)(lVar6 + 8);
    (*pcVar9)(lVar2,lVar3);
    (*pcVar9)(uVar12,lVar3);
    func_0x000103332a70(lVar11,0x112d36580,&UNK_10d9016d0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  lVar13 = 0;
  FUN_103331784();
  iVar1 = *(int *)(lVar13 + 0x14);
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x000100029394(lStack_70 + iVar1,lVar5);
  func_0x000100029394(lStack_68 + iVar1,lVar5 + lVar10);
  lVar13 = lVar5;
  (*pcVar7)(lVar5,1,lVar3);
  uVar8 = uStack_80;
  lVar11 = lVar5;
  if ((int)lVar13 == 1) {
    lVar10 = lVar5 + lVar10;
    (*pcVar7)(lVar10,1,lVar3);
    if ((int)lVar10 == 1) {
      func_0x000103332a70(lVar5,0x112d36580,&UNK_10d9016d0);
      return 1;
    }
  }
  else {
    func_0x000100029394(lVar5,uStack_80);
    lVar13 = lVar5 + lVar10;
    (*pcVar7)(lVar13,1,lVar3);
    lVar4 = lStack_78;
    if ((int)lVar13 != 1) {
      lVar13 = lStack_78;
      (**(code **)(lVar6 + 0x20))(lStack_78,lVar5 + lVar10,lVar3);
      func_0x000101553b98();
      uVar12 = uVar8;
      func_0x000107c5fab8(uVar8,lVar4,lVar3,lVar13);
      pcVar7 = *(code **)(lVar6 + 8);
      (*pcVar7)(lVar4,lVar3);
      (*pcVar7)(uVar8,lVar3);
      func_0x000103332a70(lVar5,0x112d36580,&UNK_10d9016d0);
      if ((uVar12 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    (**(code **)(lVar6 + 8))(uVar8,lVar3);
  }
LAB_1033321a0:
  func_0x000103332a70(lVar11,0x112d7e680,&UNK_10d95e350);
  return 0;
}



/* Entry: 10333223c; end: 103332557;  */

long * FUN_10333223c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
    lVar7 = *(long *)(lVar2 + -8);
    pcVar8 = *(code **)(lVar7 + 0x30);
    plVar3 = param_2;
    (*pcVar8)(param_2,1,lVar2);
    if ((int)plVar3 == 0) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar2);
      (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar2);
    }
    else {
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    lVar6 = (long)*(int *)(param_3 + 0x14);
    lVar4 = (long)param_2 + lVar6;
    (*pcVar8)(lVar4,1,lVar2);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar2);
    }
    else {
      lVar2 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                          *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    }
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103332558; end: 10333270f;  */

long FUN_103332558(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = param_1;
  (*pcVar6)(param_1,1,lVar1);
  lVar3 = param_2;
  (*pcVar6)(param_2,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x18))(param_1,param_2,lVar1);
      goto LAB_103332628;
    }
    (**(code **)(lVar5 + 8))(param_1,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar1);
    goto LAB_103332628;
  }
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
LAB_103332628:
  lVar4 = (long)*(int *)(param_3 + 0x14);
  lVar2 = param_1 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x18))(param_1 + lVar4,param_2 + lVar4,lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))(param_1 + lVar4,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))(param_1 + lVar4,param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))(param_1 + lVar4,0,1,lVar1);
    return param_1;
  }
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4(param_1 + lVar4,param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 103332710; end: 103332837;  */

long FUN_103332710(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar2 = param_2;
  (*pcVar5)(param_2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  lVar3 = (long)*(int *)(param_3 + 0x14);
  lVar2 = param_2 + lVar3;
  (*pcVar5)(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))(param_1 + lVar3,param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1 + lVar3,param_2 + lVar3,
                        *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103332838; end: 1033329ef;  */

long FUN_103332838(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = param_1;
  (*pcVar6)(param_1,1,lVar1);
  lVar3 = param_2;
  (*pcVar6)(param_2,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x28))(param_1,param_2,lVar1);
      goto LAB_103332908;
    }
    (**(code **)(lVar5 + 8))(param_1,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar1);
    goto LAB_103332908;
  }
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
LAB_103332908:
  lVar4 = (long)*(int *)(param_3 + 0x14);
  lVar2 = param_1 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x28))(param_1 + lVar4,param_2 + lVar4,lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))(param_1 + lVar4,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1 + lVar4,param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))(param_1 + lVar4,0,1,lVar1);
    return param_1;
  }
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4(param_1 + lVar4,param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 1033329f0; end: 103332a07;  */

void FUN_1033329f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103332a08; end: 103332aaf;  */

void FUN_103332a08(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 103332ab0; end: 103332b4b;  */

long FUN_103332ab0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_103332bd4();
  lVar1 = *(long *)(unaff_x20 + *(int *)(lVar1 + 0x34));
  if (lVar1 != 0) {
    func_0x000107c4b260();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4b448();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x000107c5de98();
        func_0x000107c61170(lVar2);
        goto LAB_103332b20;
      }
    }
  }
  lVar1 = 0;
LAB_103332b20:
  lVar2 = 0;
  if (0xfffffffd < *(byte *)(unaff_x20 + 0x10) - 3 && 0 < lVar1) {
    lVar2 = lVar1;
  }
  return lVar2;
}



/* Entry: 103332b4c; end: 103332bcf;  */

void FUN_103332b4c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103332bd0; end: 103332bd3;  */

uint FUN_103332bd0(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar3 = 0;
  func_0x00010437500c();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112f59918;
  func_0x0001000285a8(0x112f59918,&UNK_10dbb28c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (long)puVar8 - extraout_x8_00;
  lVar7 = 0x112f5a6d8;
  func_0x0001000285a8(0x112f5a6d8,&UNK_10dbb2b60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = uVar10 - extraout_x8_01;
  func_0x0001033349f8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar4 = *param_1;
  func_0x000107c60118(uVar4,*param_2);
  if (((((uVar4 & 1) != 0) && (param_1[1] == param_2[1])) &&
      ((char)param_1[2] == *(char *)(param_2 + 2))) &&
     (*(char *)((long)param_1 + 0x11) == *(char *)((long)param_2 + 0x11))) {
    lVar5 = 0;
    FUN_103332bd4();
    iVar1 = *(int *)(lVar5 + 0x20);
    lVar7 = (long)*(int *)(lVar7 + 0x30);
    lStack_68 = lVar5;
    FUN_103332c0c((long)param_1 + (long)iVar1,lVar9);
    FUN_103332c0c((long)param_2 + (long)iVar1,lVar9 + lVar7);
    pcVar11 = *(code **)(lVar12 + 0x30);
    lVar12 = lVar9;
    (*pcVar11)(lVar9,1,lVar3);
    if ((int)lVar12 == 1) {
      lVar7 = lVar9 + lVar7;
      (*pcVar11)(lVar7,1,lVar3);
      if ((int)lVar7 == 1) {
        func_0x0001033349b8(lVar9,0x112f59918,&UNK_10dbb28c0);
LAB_103332ea0:
        lVar7 = lStack_68;
        if ((*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x24)) ==
             *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x24))) &&
           (*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x28)) ==
            *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x28)))) {
          uVar4 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_68 + 0x2c));
          lVar3 = *(long *)((long)param_2 + (long)*(int *)(lStack_68 + 0x2c));
          if (uVar4 == 0) {
            if (lVar3 == 0) {
LAB_103332f68:
              uVar4 = *(ulong *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
              lVar3 = *(long *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
              if (uVar4 == 0) {
                if (lVar3 == 0) {
LAB_103332fdc:
                  uVar4 = *(ulong *)((long)param_1 + (long)*(int *)(lVar7 + 0x34));
                  lVar3 = *(long *)((long)param_2 + (long)*(int *)(lVar7 + 0x34));
                  if (uVar4 == 0) {
                    if (lVar3 == 0) {
LAB_103333050:
                      if ((*(char *)((long)param_1 + (long)*(int *)(lVar7 + 0x38)) ==
                           *(char *)((long)param_2 + (long)*(int *)(lVar7 + 0x38))) &&
                         (*(char *)((long)param_1 + (long)*(int *)(lVar7 + 0x3c)) ==
                          *(char *)((long)param_2 + (long)*(int *)(lVar7 + 0x3c)))) {
                        uVar4 = *(ulong *)((long)param_1 + (long)*(int *)(lVar7 + 0x40));
                        func_0x00010333508c(uVar4,*(undefined8 *)
                                                   ((long)param_2 + (long)*(int *)(lVar7 + 0x40)));
                        if (((uVar4 & 1) != 0) &&
                           (((*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x44)) ==
                              *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x44)) &&
                             (*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x48)) ==
                              *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x48)))) &&
                            (*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x4c)) ==
                             *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x4c)))))) {
                          uVar6 = *(undefined8 *)((long)param_1 + (long)*(int *)(lStack_68 + 0x50));
                          func_0x000103335088(uVar6,*(undefined8 *)
                                                     ((long)param_2 +
                                                     (long)*(int *)(lStack_68 + 0x50)));
                          uVar2 = (uint)uVar6;
                          goto LAB_103332ed0;
                        }
                      }
                    }
                  }
                  else if (lVar3 != 0) {
                    func_0x0001033349f8(0,0x112dc0c68,&PTR_PTR_1126c8b58);
                    func_0x000107c61174(lVar3);
                    func_0x000107c61174();
                    uVar10 = uVar4;
                    func_0x000107c60118();
                    func_0x000107c61170(uVar4);
                    func_0x000107c61170(lVar3);
                    if ((uVar10 & 1) != 0) goto LAB_103333050;
                  }
                }
              }
              else if (lVar3 != 0) {
                func_0x0001033349f8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
                func_0x000107c61174(lVar3);
                func_0x000107c61174();
                uVar10 = uVar4;
                func_0x000107c60118();
                func_0x000107c61170(uVar4);
                func_0x000107c61170(lVar3);
                if ((uVar10 & 1) != 0) goto LAB_103332fdc;
              }
            }
          }
          else if (lVar3 != 0) {
            func_0x0001033349f8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
            func_0x000107c61174(lVar3);
            func_0x000107c61174();
            uVar10 = uVar4;
            func_0x000107c60118();
            func_0x000107c61170(uVar4);
            func_0x000107c61170(lVar3);
            if ((uVar10 & 1) != 0) goto LAB_103332f68;
          }
        }
      }
      else {
LAB_103332e3c:
        func_0x0001033349b8(lVar9,0x112f5a6d8,&UNK_10dbb2b60);
      }
    }
    else {
      FUN_103332c0c(lVar9,uVar10);
      lVar12 = lVar9 + lVar7;
      (*pcVar11)(lVar12,1,lVar3);
      if ((int)lVar12 == 1) {
        FUN_103333ff0(uVar10);
        goto LAB_103332e3c;
      }
      FUN_10331d77c(lVar9 + lVar7,puVar8);
      uVar4 = uVar10;
      func_0x000104373cb4(uVar10,puVar8);
      FUN_103333ff0(puVar8);
      FUN_103333ff0(uVar10);
      func_0x0001033349b8(lVar9,0x112f59918,&UNK_10dbb28c0);
      if ((uVar4 & 1) != 0) goto LAB_103332ea0;
    }
  }
  uVar2 = 0;
LAB_103332ed0:
  return uVar2 & 1;
}



/* Entry: 103332bd4; end: 103332c0b;  */

void FUN_103332bd4(undefined8 param_1)

{
  if (lRam0000000112f5a998 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e75b590);
  return;
}



/* Entry: 103332c0c; end: 103332c5b;  */

undefined8 FUN_103332c0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f59918;
  func_0x0001000285a8(0x112f59918,&UNK_10dbb28c0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103332c5c; end: 1033330eb;  */

uint FUN_103332c5c(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar3 = 0;
  func_0x00010437500c();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112f59918;
  func_0x0001000285a8(0x112f59918,&UNK_10dbb28c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (long)puVar8 - extraout_x8_00;
  lVar7 = 0x112f5a6d8;
  func_0x0001000285a8(0x112f5a6d8,&UNK_10dbb2b60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = uVar10 - extraout_x8_01;
  func_0x0001033349f8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar4 = *param_1;
  func_0x000107c60118(uVar4,*param_2);
  if (((((uVar4 & 1) != 0) && (param_1[1] == param_2[1])) &&
      ((char)param_1[2] == *(char *)(param_2 + 2))) &&
     (*(char *)((long)param_1 + 0x11) == *(char *)((long)param_2 + 0x11))) {
    lVar5 = 0;
    FUN_103332bd4();
    iVar1 = *(int *)(lVar5 + 0x20);
    lVar7 = (long)*(int *)(lVar7 + 0x30);
    lStack_68 = lVar5;
    FUN_103332c0c((long)param_1 + (long)iVar1,lVar9);
    FUN_103332c0c((long)param_2 + (long)iVar1,lVar9 + lVar7);
    pcVar11 = *(code **)(lVar12 + 0x30);
    lVar12 = lVar9;
    (*pcVar11)(lVar9,1,lVar3);
    if ((int)lVar12 == 1) {
      lVar7 = lVar9 + lVar7;
      (*pcVar11)(lVar7,1,lVar3);
      if ((int)lVar7 == 1) {
        func_0x0001033349b8(lVar9,0x112f59918,&UNK_10dbb28c0);
LAB_103332ea0:
        lVar7 = lStack_68;
        if ((*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x24)) ==
             *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x24))) &&
           (*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x28)) ==
            *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x28)))) {
          uVar4 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_68 + 0x2c));
          lVar3 = *(long *)((long)param_2 + (long)*(int *)(lStack_68 + 0x2c));
          if (uVar4 == 0) {
            if (lVar3 == 0) {
LAB_103332f68:
              uVar4 = *(ulong *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
              lVar3 = *(long *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
              if (uVar4 == 0) {
                if (lVar3 == 0) {
LAB_103332fdc:
                  uVar4 = *(ulong *)((long)param_1 + (long)*(int *)(lVar7 + 0x34));
                  lVar3 = *(long *)((long)param_2 + (long)*(int *)(lVar7 + 0x34));
                  if (uVar4 == 0) {
                    if (lVar3 == 0) {
LAB_103333050:
                      if ((*(char *)((long)param_1 + (long)*(int *)(lVar7 + 0x38)) ==
                           *(char *)((long)param_2 + (long)*(int *)(lVar7 + 0x38))) &&
                         (*(char *)((long)param_1 + (long)*(int *)(lVar7 + 0x3c)) ==
                          *(char *)((long)param_2 + (long)*(int *)(lVar7 + 0x3c)))) {
                        uVar4 = *(ulong *)((long)param_1 + (long)*(int *)(lVar7 + 0x40));
                        func_0x00010333508c(uVar4,*(undefined8 *)
                                                   ((long)param_2 + (long)*(int *)(lVar7 + 0x40)));
                        if (((uVar4 & 1) != 0) &&
                           (((*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x44)) ==
                              *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x44)) &&
                             (*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x48)) ==
                              *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x48)))) &&
                            (*(char *)((long)param_1 + (long)*(int *)(lStack_68 + 0x4c)) ==
                             *(char *)((long)param_2 + (long)*(int *)(lStack_68 + 0x4c)))))) {
                          uVar6 = *(undefined8 *)((long)param_1 + (long)*(int *)(lStack_68 + 0x50));
                          func_0x000103335088(uVar6,*(undefined8 *)
                                                     ((long)param_2 +
                                                     (long)*(int *)(lStack_68 + 0x50)));
                          uVar2 = (uint)uVar6;
                          goto LAB_103332ed0;
                        }
                      }
                    }
                  }
                  else if (lVar3 != 0) {
                    func_0x0001033349f8(0,0x112dc0c68,&PTR_PTR_1126c8b58);
                    func_0x000107c61174(lVar3);
                    func_0x000107c61174();
                    uVar10 = uVar4;
                    func_0x000107c60118();
                    func_0x000107c61170(uVar4);
                    func_0x000107c61170(lVar3);
                    if ((uVar10 & 1) != 0) goto LAB_103333050;
                  }
                }
              }
              else if (lVar3 != 0) {
                func_0x0001033349f8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
                func_0x000107c61174(lVar3);
                func_0x000107c61174();
                uVar10 = uVar4;
                func_0x000107c60118();
                func_0x000107c61170(uVar4);
                func_0x000107c61170(lVar3);
                if ((uVar10 & 1) != 0) goto LAB_103332fdc;
              }
            }
          }
          else if (lVar3 != 0) {
            func_0x0001033349f8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
            func_0x000107c61174(lVar3);
            func_0x000107c61174();
            uVar10 = uVar4;
            func_0x000107c60118();
            func_0x000107c61170(uVar4);
            func_0x000107c61170(lVar3);
            if ((uVar10 & 1) != 0) goto LAB_103332f68;
          }
        }
      }
      else {
LAB_103332e3c:
        func_0x0001033349b8(lVar9,0x112f5a6d8,&UNK_10dbb2b60);
      }
    }
    else {
      FUN_103332c0c(lVar9,uVar10);
      lVar12 = lVar9 + lVar7;
      (*pcVar11)(lVar12,1,lVar3);
      if ((int)lVar12 == 1) {
        FUN_103333ff0(uVar10);
        goto LAB_103332e3c;
      }
      FUN_10331d77c(lVar9 + lVar7,puVar8);
      uVar4 = uVar10;
      func_0x000104373cb4(uVar10,puVar8);
      FUN_103333ff0(puVar8);
      FUN_103333ff0(uVar10);
      func_0x0001033349b8(lVar9,0x112f59918,&UNK_10dbb28c0);
      if ((uVar4 & 1) != 0) goto LAB_103332ea0;
    }
  }
  uVar2 = 0;
LAB_103332ed0:
  return uVar2 & 1;
}



/* Entry: 1033330ec; end: 1033330ef;  */

void FUN_1033330ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5a930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb29e8;
  func_0x000107c61520(&UNK_10dbb29e8,&UNK_11063fc50);
  puRam0000000112f5a930 = puVar1;
  return;
}



/* Entry: 1033330f0; end: 10333312f;  */

void FUN_1033330f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5a930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb29e8;
  func_0x000107c61520(&UNK_10dbb29e8,&UNK_11063fc50);
  puRam0000000112f5a930 = puVar1;
  return;
}



/* Entry: 103333130; end: 103333133;  */

void FUN_103333130(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5a938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2a50;
  func_0x000107c61520(&UNK_10dbb2a50,&UNK_11063fce0);
  puRam0000000112f5a938 = puVar1;
  return;
}



/* Entry: 103333134; end: 103333173;  */

void FUN_103333134(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5a938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2a50;
  func_0x000107c61520(&UNK_10dbb2a50,&UNK_11063fce0);
  puRam0000000112f5a938 = puVar1;
  return;
}



/* Entry: 103333174; end: 1033334fb;  */

long * FUN_103333174(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar12 = *param_2;
  *param_1 = lVar12;
  if ((uVar3 >> 0x11 & 1) != 0) {
    uVar7 = (ulong)uVar3 & 0xff;
    func_0x000107c6157c(lVar12);
    return (long *)(lVar12 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  param_1[1] = param_2[1];
  *(short *)(param_1 + 2) = (short)param_2[2];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar5 = 0;
  func_0x00010437500c();
  lVar13 = *(long *)(lVar5 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  func_0x000107c61174(lVar12);
  puVar6 = puVar2;
  (*pcVar14)(puVar2,1,lVar5);
  if ((int)puVar6 != 0) {
    lVar12 = 0x112f59918;
    func_0x0001000285a8(0x112f59918,&UNK_10dbb28c0);
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    goto LAB_103333440;
  }
  puVar6 = puVar2;
  func_0x000107c614c4(puVar2,lVar5);
  iVar4 = (int)puVar6;
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      lVar12 = 0;
      func_0x000107c5ede0();
      lVar15 = *(long *)(lVar12 + -8);
      puVar6 = puVar2;
      (**(code **)(lVar15 + 0x30))(puVar2,1,lVar12);
      if ((int)puVar6 == 0) {
        (**(code **)(lVar15 + 0x10))(puVar1,puVar2,lVar12);
        (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar12);
      }
      else {
        lVar12 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      lVar12 = 0x112f5a6e0;
      func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
      uVar8 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x30));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x30)) = uVar8;
      uVar9 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x40));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x40)) = uVar9;
      func_0x000107c61174(uVar8);
      func_0x000107c61174(uVar9);
      uVar8 = 0;
      goto LAB_103333424;
    }
    if (iVar4 == 1) {
      uVar8 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar8;
      uVar8 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar8;
      func_0x000107c61434();
      func_0x000107c61434(uVar8);
      uVar8 = 1;
      goto LAB_103333424;
    }
    if (iVar4 == 2) {
      uVar8 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar8;
      func_0x000107c61434();
      uVar8 = 2;
      goto LAB_103333424;
    }
LAB_103333340:
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(lVar13 + 0x40));
  }
  else {
    if (iVar4 == 3) {
      *puVar1 = *puVar2;
      func_0x000107c61174();
      uVar8 = 3;
    }
    else if (iVar4 == 4) {
      lVar12 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar12 + -8) + 0x10))(puVar1,puVar2,lVar12);
      uVar8 = 4;
    }
    else {
      if (iVar4 != 5) goto LAB_103333340;
      lVar12 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar12 + -8) + 0x10))(puVar1,puVar2,lVar12);
      uVar8 = 5;
    }
LAB_103333424:
    func_0x000107c6159c(puVar1,lVar5,uVar8);
  }
  (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar5);
LAB_103333440:
  iVar4 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x30);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar9 = *(undefined8 *)((long)param_2 + (long)iVar4);
  *(undefined8 *)((long)param_1 + (long)iVar4) = uVar9;
  iVar4 = *(int *)(param_3 + 0x38);
  uVar10 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) = uVar10;
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x40);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar11 = *(undefined8 *)((long)param_2 + (long)iVar4);
  *(undefined8 *)((long)param_1 + (long)iVar4) = uVar11;
  iVar4 = *(int *)(param_3 + 0x48);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x50);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  uVar8 = *(undefined8 *)((long)param_2 + (long)iVar4);
  *(undefined8 *)((long)param_1 + (long)iVar4) = uVar8;
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar8);
  return param_1;
}



/* Entry: 1033334fc; end: 10333368f;  */

/* WARNING: Possible PIC construction at 0x00010333357c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033335c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103333688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033335cc) */
/* WARNING: Removing unreachable block (ram,0x000103333580) */
/* WARNING: Removing unreachable block (ram,0x00010333368c) */

void FUN_1033334fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x000107c61170(*param_1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x20));
  lVar3 = 0;
  func_0x00010437500c();
  puVar4 = puVar1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar1,1,lVar3);
  if ((int)puVar4 == 0) {
    puVar4 = puVar1;
    func_0x000107c614c4(puVar1,lVar3);
    iVar2 = (int)puVar4;
    if (iVar2 < 3) {
      if (iVar2 == 0) {
        lVar3 = 0;
        func_0x000107c5ede0();
        lVar6 = *(long *)(lVar3 + -8);
        puVar4 = puVar1;
        (**(code **)(lVar6 + 0x30))(puVar1,1,lVar3);
        if ((int)puVar4 == 0) {
          (**(code **)(lVar6 + 8))(puVar1,lVar3);
        }
        lVar3 = 0x112f5a6e0;
        func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
        func_0x000107c61170(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x30)));
        uVar5 = *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x40));
LAB_103333674:
        func_0x000107c61170(uVar5);
      }
      else {
        if (iVar2 == 1) {
          func_0x000107c6142c(puVar1[1]);
          uVar5 = puVar1[3];
          goto code_r0x000107c6142c;
        }
        if (iVar2 == 2) {
          uVar5 = puVar1[1];
          goto code_r0x000107c6142c;
        }
      }
    }
    else {
      if (iVar2 == 3) {
        uVar5 = *puVar1;
        goto LAB_103333674;
      }
      if ((iVar2 == 4) || (iVar2 == 5)) {
        lVar3 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar1,lVar3);
      }
    }
  }
  func_0x000107c61170(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x2c)));
  func_0x000107c61170(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x30)));
  func_0x000107c61170(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x34)));
  uVar5 = *(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x40));
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 103333690; end: 103333fef;  */

undefined8 * FUN_103333690(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  *param_1 = uVar7;
  param_1[1] = uVar8;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar4 = 0;
  func_0x00010437500c();
  lVar11 = *(long *)(lVar4 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  func_0x000107c61174(uVar7);
  puVar5 = puVar2;
  (*pcVar12)(puVar2,1,lVar4);
  if ((int)puVar5 != 0) {
    lVar4 = 0x112f59918;
    func_0x0001000285a8(0x112f59918,&UNK_10dbb28c0);
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    goto LAB_10333392c;
  }
  puVar5 = puVar2;
  func_0x000107c614c4(puVar2,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      lVar6 = 0;
      func_0x000107c5ede0();
      lVar13 = *(long *)(lVar6 + -8);
      puVar5 = puVar2;
      (**(code **)(lVar13 + 0x30))(puVar2,1,lVar6);
      if ((int)puVar5 == 0) {
        (**(code **)(lVar13 + 0x10))(puVar1,puVar2,lVar6);
        (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar6);
      }
      else {
        lVar6 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      }
      lVar6 = 0x112f5a6e0;
      func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
      uVar7 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30)) = uVar7;
      uVar8 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x40));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x40)) = uVar8;
      func_0x000107c61174(uVar7);
      func_0x000107c61174(uVar8);
      uVar7 = 0;
      goto LAB_103333910;
    }
    if (iVar3 == 1) {
      uVar7 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      uVar7 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar7;
      func_0x000107c61434();
      func_0x000107c61434(uVar7);
      uVar7 = 1;
      goto LAB_103333910;
    }
    if (iVar3 == 2) {
      uVar7 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      func_0x000107c61434();
      uVar7 = 2;
      goto LAB_103333910;
    }
LAB_10333382c:
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(lVar11 + 0x40));
  }
  else {
    if (iVar3 == 3) {
      *puVar1 = *puVar2;
      func_0x000107c61174();
      uVar7 = 3;
    }
    else if (iVar3 == 4) {
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(puVar1,puVar2,lVar6);
      uVar7 = 4;
    }
    else {
      if (iVar3 != 5) goto LAB_10333382c;
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(puVar1,puVar2,lVar6);
      uVar7 = 5;
    }
LAB_103333910:
    func_0x000107c6159c(puVar1,lVar4,uVar7);
  }
  (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar4);
LAB_10333392c:
  iVar3 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x30);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar8 = *(undefined8 *)((long)param_2 + (long)iVar3);
  *(undefined8 *)((long)param_1 + (long)iVar3) = uVar8;
  iVar3 = *(int *)(param_3 + 0x38);
  uVar9 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) = uVar9;
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x40);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar10 = *(undefined8 *)((long)param_2 + (long)iVar3);
  *(undefined8 *)((long)param_1 + (long)iVar3) = uVar10;
  iVar3 = *(int *)(param_3 + 0x48);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x50);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  uVar7 = *(undefined8 *)((long)param_2 + (long)iVar3);
  *(undefined8 *)((long)param_1 + (long)iVar3) = uVar7;
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar7);
  return param_1;
}



/* Entry: 103333ff0; end: 10333402b;  */

undefined8 FUN_103333ff0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010437500c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10333402c; end: 10333471f;  */

undefined8 * FUN_10333402c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  lVar1 = (long)param_1 + (long)*(int *)(param_3 + 0x20);
  lVar2 = (long)param_2 + (long)*(int *)(param_3 + 0x20);
  lVar4 = 0;
  func_0x00010437500c();
  lVar8 = *(long *)(lVar4 + -8);
  lVar6 = lVar2;
  (**(code **)(lVar8 + 0x30))(lVar2,1,lVar4);
  if ((int)lVar6 != 0) {
    lVar6 = 0x112f59918;
    func_0x0001000285a8(0x112f59918,&UNK_10dbb28c0);
    func_0x000107c610b4(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    goto LAB_10333422c;
  }
  lVar6 = lVar2;
  func_0x000107c614c4(lVar2,lVar4);
  iVar3 = (int)lVar6;
  if (iVar3 == 5) {
    lVar6 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar6 + -8) + 0x20))(lVar1,lVar2,lVar6);
    uVar7 = 5;
LAB_103334210:
    func_0x000107c6159c(lVar1,lVar4,uVar7);
  }
  else {
    if (iVar3 == 4) {
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x20))(lVar1,lVar2,lVar6);
      uVar7 = 4;
      goto LAB_103334210;
    }
    if (iVar3 == 0) {
      lVar5 = 0;
      func_0x000107c5ede0();
      lVar9 = *(long *)(lVar5 + -8);
      lVar6 = lVar2;
      (**(code **)(lVar9 + 0x30))(lVar2,1,lVar5);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar9 + 0x20))(lVar1,lVar2,lVar5);
        (**(code **)(lVar9 + 0x38))(lVar1,0,1,lVar5);
      }
      else {
        lVar6 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      }
      lVar6 = 0x112f5a6e0;
      func_0x0001000285a8(0x112f5a6e0,&UNK_10dbb28d0);
      *(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x30)) =
           *(undefined8 *)(lVar2 + *(int *)(lVar6 + 0x30));
      *(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x40)) =
           *(undefined8 *)(lVar2 + *(int *)(lVar6 + 0x40));
      uVar7 = 0;
      goto LAB_103334210;
    }
    func_0x000107c610b4(lVar1,lVar2,*(undefined8 *)(lVar8 + 0x40));
  }
  (**(code **)(lVar8 + 0x38))(lVar1,0,1,lVar4);
LAB_10333422c:
  iVar3 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x30);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x38);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x40);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x48);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x50);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  return param_1;
}



/* Entry: 103334720; end: 103334737;  */

void FUN_103334720(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103334738; end: 10333484f;  */

void FUN_103334738(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_a8 = PTR___sBOWV_11034d658 + 0x40;
  puStack_a0 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_98 = &UNK_10dbb2b00;
  puStack_90 = &UNK_10dbb2b00;
  lVar1 = 0x13f;
  func_0x0001033347fc();
  if (param_2 < 0x40) {
    lStack_88 = *(long *)(lVar1 + -8) + 0x40;
    puStack_80 = &UNK_10dbb2b18;
    puStack_78 = &UNK_10dbb2b18;
    puStack_70 = &UNK_10dbb2b30;
    puStack_68 = &UNK_10dbb2b30;
    puStack_60 = &UNK_10dbb2b30;
    puStack_58 = &UNK_10dbb2b00;
    puStack_50 = &UNK_10dbb2b00;
    puStack_48 = PTR___sBbWV_11034d660 + 0x40;
    puStack_40 = &UNK_10dbb2b18;
    puStack_38 = &UNK_10dbb2b18;
    puStack_30 = &UNK_10dbb2b18;
    puStack_28 = puStack_48;
    func_0x000107c6153c(param_1,0x100,0x11,&puStack_a8,param_1 + 0x10);
  }
  return;
}



/* Entry: 103334850; end: 1033349b7;  */

void FUN_103334850(void)

{
  return;
}



/* Entry: 1033349b8; end: 103334a37;  */

undefined8 FUN_1033349b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103334a38; end: 103334a77;  */

undefined1 FUN_103334a38(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103334a78; end: 103334bdf;  */

undefined8 FUN_103334a78(long param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_a8 [72];
  
  if (param_1 == param_2) {
LAB_103334bb8:
    uVar3 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar9 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar9 = ~(-1L << (uVar6 & 0x3f));
      }
      uVar9 = uVar9 & *(ulong *)(param_1 + 0x38);
      lVar5 = 0;
      while( true ) {
        if (uVar9 == 0) {
          do {
            lVar8 = lVar5 + 1;
            if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103334be0);
              (*pcVar2)();
            }
            if ((long)(uVar6 + 0x3f >> 6) <= lVar8) goto LAB_103334bb8;
            uVar9 = ((ulong *)(param_1 + 0x38))[lVar8];
            lVar5 = lVar5 + 1;
          } while (uVar9 == 0);
          uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
        }
        else {
          uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
          lVar8 = lVar5;
        }
        bVar1 = *(byte *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar4) | lVar8 << 6));
        uVar4 = (ulong)bVar1;
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar4 = uVar4 & (uVar7 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) == 0) break;
        while (lVar5 = lVar8, *(byte *)(*(long *)(param_2 + 0x30) + uVar4) != bVar1) {
          uVar4 = uVar4 + 1 & ~uVar7;
          if ((*(ulong *)(param_2 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) == 0)
          goto LAB_103334bb0;
        }
      }
    }
LAB_103334bb0:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 103334be0; end: 103334c53;  */

uint FUN_103334be0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  bVar2 = *(byte *)((long)param_1 + 9);
  bVar3 = *(byte *)((long)param_1 + 10);
  bVar4 = *(byte *)(param_2 + 1);
  bVar5 = *(byte *)((long)param_2 + 9);
  bVar6 = *(byte *)((long)param_2 + 10);
  FUN_103334a78(uVar7,*param_2);
  return (((uint)(bVar1 ^ bVar4) | (uint)uVar7 ^ 0xffffffff |
          (uint)(byte)(bVar2 ^ bVar5 | bVar3 ^ bVar6)) ^ 0xffffffff) & 1;
}



/* Entry: 103334c54; end: 103334d07;  */

uint FUN_103334c54(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  
  uVar10 = *param_1;
  uVar11 = param_1[1];
  uVar8 = param_1[2];
  bVar3 = *(byte *)((long)param_1 + 0x11);
  bVar4 = *(byte *)((long)param_1 + 0x12);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  bVar5 = *(byte *)(param_2 + 2);
  bVar6 = *(byte *)((long)param_2 + 0x11);
  bVar7 = *(byte *)((long)param_2 + 0x12);
  uVar9 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c60118(uVar10,uVar1,uVar9);
  if ((uVar10 & 1) == 0) {
    uVar12 = 0;
  }
  else {
    FUN_103334a78(uVar11,uVar2);
    uVar12 = (uint)uVar11 & ((byte)((byte)uVar8 ^ bVar5) ^ 1) &
             ((bVar3 ^ bVar6) ^ 1) & ((bVar4 ^ bVar7) ^ 1);
  }
  return uVar12 & 1;
}



/* Entry: 103334d08; end: 103334d0f;  */

void FUN_103334d08(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 103334d10; end: 103334d4b;  */

undefined8 * FUN_103334d10(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 9) = *(undefined2 *)((long)param_2 + 9);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103334d4c; end: 103334da7;  */

undefined8 * FUN_103334d4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_2 + 10);
  return param_1;
}



/* Entry: 103334da8; end: 103334dbb;  */

void FUN_103334da8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)((long)param_1 + 7) = *(undefined4 *)((long)param_2 + 7);
  *param_1 = uVar1;
  return;
}



/* Entry: 103334dbc; end: 103334e07;  */

undefined8 * FUN_103334dbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_2 + 10);
  return param_1;
}



/* Entry: 103334e08; end: 103334ea3;  */

int FUN_103334e08(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0xb) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103334ea4; end: 103334f0f;  */

void FUN_103334ea4(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 103334f10; end: 103334f83;  */

undefined8 * FUN_103334f10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  return param_1;
}



/* Entry: 103334f84; end: 103334f97;  */

void FUN_103334f84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)((long)param_1 + 0xf) = *(undefined4 *)((long)param_2 + 0xf);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 103334f98; end: 103334feb;  */

undefined8 * FUN_103334f98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  return param_1;
}



/* Entry: 103334fec; end: 1033350b3;  */

int FUN_103334fec(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x13) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033350b4; end: 10333515f;  */

void FUN_1033350b4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103335160; end: 103335163;  */

void FUN_103335160(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5aa18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2bf0;
  func_0x000107c61520(&UNK_10dbb2bf0,&UNK_11063fec0);
  puRam0000000112f5aa18 = puVar1;
  return;
}



/* Entry: 103335164; end: 1033351a3;  */

void FUN_103335164(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5aa18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2bf0;
  func_0x000107c61520(&UNK_10dbb2bf0,&UNK_11063fec0);
  puRam0000000112f5aa18 = puVar1;
  return;
}



/* Entry: 1033351a4; end: 10333531b;  */

int FUN_1033351a4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf1 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xe) {
      iVar2 = 4;
    }
    if (param_2 + 0xe >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103335220;
        goto LAB_103335204;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103335204:
      return ((uint)*param_1 | uVar1 << 8) - 0xe;
    }
  }
LAB_103335220:
  iVar2 = *param_1 - 0xf;
  if (*param_1 < 0xf) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10333531c; end: 1033353c7;  */

void FUN_10333531c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033353c8; end: 1033353cb;  */

void FUN_1033353c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5aa20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2c80;
  func_0x000107c61520(&UNK_10dbb2c80,&UNK_11063ff88);
  puRam0000000112f5aa20 = puVar1;
  return;
}



/* Entry: 1033353cc; end: 10333540b;  */

void FUN_1033353cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5aa20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2c80;
  func_0x000107c61520(&UNK_10dbb2c80,&UNK_11063ff88);
  puRam0000000112f5aa20 = puVar1;
  return;
}



/* Entry: 10333540c; end: 10333556f;  */

int FUN_10333540c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103335488;
        goto LAB_10333546c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10333546c:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_103335488:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103335570; end: 103335687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103335570(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = &DAT_112f5aa40;
  FUN_103335db8(&DAT_112f5aa40,0x103335e94);
  lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f5aa38))[1];
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f5aa38);
    func_0x000107c61434(lVar3);
    func_0x000107c5fadc(uVar2,lVar3);
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  puVar1 = &DAT_112f5aa48;
  FUN_103335db8(&DAT_112f5aa48,0x103335f4c);
  func_0x000107c550d8();
  func_0x000107c61170(puVar1);
  func_0x000103335e18();
  func_0x000107c54514();
  func_0x000107c61170(puVar1);
  func_0x000107c41e5c();
                    /* WARNING: Could not recover jumptable at 0x00010c18e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103335688; end: 1033357a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103335688(undefined1 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar2 = _DAT_112f5aa28;
  uVar3 = 0x112f59a00;
  func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5aa38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5aa40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5aa48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5aa50) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f5aa30) = param_1;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffb0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  puVar5 = puVar4;
  FUN_1033357a4();
  func_0x000103335e18();
  func_0x000107c3d6fc(puVar4);
  func_0x000107c61170(puVar5);
  FUN_103335570();
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 1033357a4; end: 103335d8f;  */

/* WARNING: Possible PIC construction at 0x0001033357f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333585c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033358a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033359ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103335d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033358e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033358f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333592c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033358f8) */
/* WARNING: Removing unreachable block (ram,0x0001033358e4) */
/* WARNING: Removing unreachable block (ram,0x000103335d70) */
/* WARNING: Removing unreachable block (ram,0x000103335d24) */
/* WARNING: Removing unreachable block (ram,0x000103335cd8) */
/* WARNING: Removing unreachable block (ram,0x000103335c9c) */
/* WARNING: Removing unreachable block (ram,0x000103335c7c) */
/* WARNING: Removing unreachable block (ram,0x000103335c50) */
/* WARNING: Removing unreachable block (ram,0x000103335c28) */
/* WARNING: Removing unreachable block (ram,0x000103335c08) */
/* WARNING: Removing unreachable block (ram,0x000103335bbc) */
/* WARNING: Removing unreachable block (ram,0x000103335b9c) */
/* WARNING: Removing unreachable block (ram,0x000103335b50) */
/* WARNING: Removing unreachable block (ram,0x000103335b30) */
/* WARNING: Removing unreachable block (ram,0x000103335a68) */
/* WARNING: Removing unreachable block (ram,0x0001033359b0) */
/* WARNING: Removing unreachable block (ram,0x000103335974) */
/* WARNING: Removing unreachable block (ram,0x000103335948) */
/* WARNING: Removing unreachable block (ram,0x0001033358a8) */
/* WARNING: Removing unreachable block (ram,0x000103335860) */
/* WARNING: Removing unreachable block (ram,0x0001033358b4) */
/* WARNING: Removing unreachable block (ram,0x000103335880) */
/* WARNING: Removing unreachable block (ram,0x00010333583c) */
/* WARNING: Removing unreachable block (ram,0x0001033357f4) */
/* WARNING: Removing unreachable block (ram,0x000103335930) */
/* WARNING: Removing unreachable block (ram,0x000103335934) */

void FUN_1033357a4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f13f000);
  func_0x000107c520f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103335d90; end: 103335db7; -[_TtC26LensInfoCardImplementation14DisclaimerView initWithCoder:] */

void FUN_103335d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103336250();
  return;
}



/* Entry: 103335db8; end: 10333601f;  */

long FUN_103335db8(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 103336020; end: 103336123; -[_TtC26LensInfoCardImplementation14DisclaimerView handleTap:] */

/* WARNING: Possible PIC construction at 0x000103336098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033360dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103336104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033360e0) */
/* WARNING: Removing unreachable block (ram,0x00010333609c) */
/* WARNING: Removing unreachable block (ram,0x0001033360a0) */
/* WARNING: Removing unreachable block (ram,0x000103336100) */
/* WARNING: Removing unreachable block (ram,0x0001033360b0) */
/* WARNING: Removing unreachable block (ram,0x000103336108) */

void FUN_103336020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103336210(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000103335e18();
  func_0x000107c60118(param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103336124; end: 103336183; -[_TtC26LensInfoCardImplementation14DisclaimerView initWithFrame:] */

void FUN_103336124(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.DisclaimerView",0x29,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103336150);
  (*pcVar1)();
}



/* Entry: 103336184; end: 1033361ef; -[_TtC26LensInfoCardImplementation14DisclaimerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033361c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033361c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103336184(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5aa28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5aa38 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5aa40));
  return;
}



/* Entry: 1033361f0; end: 10333620f;  */

void FUN_1033361f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128ce920);
  return;
}



/* Entry: 103336210; end: 10333624f;  */

void FUN_103336210(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103336250; end: 1033365d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103336250(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = _DAT_112f5aa28;
  uVar4 = 0x112f59a00;
  func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5aa38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5aa40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5aa48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5aa50) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensInfoCardImplementation/DisclaimerView.swift",0x2f,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103336320);
  (*pcVar3)();
}



/* Entry: 1033365d4; end: 1033367db;  */

/* WARNING: Possible PIC construction at 0x000103336624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103336660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103336700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333678c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333669c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033366b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033366e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033366b4) */
/* WARNING: Removing unreachable block (ram,0x0001033366a0) */
/* WARNING: Removing unreachable block (ram,0x000103336790) */
/* WARNING: Removing unreachable block (ram,0x000103336704) */
/* WARNING: Removing unreachable block (ram,0x00010333675c) */
/* WARNING: Removing unreachable block (ram,0x000103336760) */
/* WARNING: Removing unreachable block (ram,0x000103336664) */
/* WARNING: Removing unreachable block (ram,0x000103336628) */
/* WARNING: Removing unreachable block (ram,0x000103336670) */
/* WARNING: Removing unreachable block (ram,0x00010333663c) */
/* WARNING: Removing unreachable block (ram,0x0001033366ec) */
/* WARNING: Removing unreachable block (ram,0x0001033366f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033365d4(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  uVar2 = 0x4030000000000000;
  if (*(char *)(unaff_x20 + _DAT_112f5aa88) != '\0') {
    uVar2 = 0x4032000000000000;
  }
  func_0x000107c539d4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1033367dc; end: 103336833; -[_TtC26LensInfoCardImplementation23PrimaryActionBaseButton onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033367dc(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f5aa80 + 0x30);
  if (pcVar1 != (code *)0x0) {
    func_0x000107c61174();
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103336834; end: 10333688f; -[_TtC26LensInfoCardImplementation23PrimaryActionBaseButton initWithFrame:] */

void FUN_103336834(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.PrimaryActionBaseButton",0x32,"init(frame:)",0xc,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103336860);
  (*pcVar1)();
}



/* Entry: 103336890; end: 10333693f; -[_TtC26LensInfoCardImplementation23PrimaryActionBaseButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033368d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033368dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103336890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5aa80));
  return;
}



/* Entry: 103336940; end: 10333695f;  */

void FUN_103336940(void)

{
  func_0x000107c61168(&PTR_PTR_1128cea08);
  return;
}



/* Entry: 103336960; end: 1033369eb;  */

long FUN_103336960(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1033369ec; end: 103336aab;  */

undefined8 * FUN_1033369ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  lVar4 = param_2[6];
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  if (lVar4 == 0) {
    lVar4 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar4;
  }
  else {
    uVar3 = param_2[7];
    param_1[6] = lVar4;
    param_1[7] = uVar3;
    func_0x000107c6157c();
  }
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  uVar3 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 103336aac; end: 103336cdf;  */

undefined8 * FUN_103336aac(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  lVar1 = param_2[6];
  if (param_1[6] == 0) {
    if (lVar1 != 0) {
      uVar2 = param_2[7];
      param_1[6] = lVar1;
      param_1[7] = uVar2;
      func_0x000107c6157c();
      goto LAB_103336b8c;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = param_2[7];
      uVar3 = param_1[7];
      param_1[6] = lVar1;
      param_1[7] = uVar2;
      func_0x000107c6157c();
      func_0x000107c61574(uVar3);
      goto LAB_103336b8c;
    }
    func_0x000107c61574(param_1[7]);
  }
  lVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar1;
LAB_103336b8c:
  param_1[8] = param_2[8];
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[10] = param_2[10];
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[0xc] = param_2[0xc];
  uVar2 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103336ce0; end: 103336dbb;  */

int FUN_103336ce0(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103336dbc; end: 103336e1b;  */

undefined8 FUN_103336dbc(undefined8 param_1,undefined8 param_2)

{
  FUN_1033369ec(param_2,param_1,&UNK_110640038);
  return param_2;
}



/* Entry: 103336e1c; end: 103337133;  */

/* WARNING: Possible PIC construction at 0x000103336e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103336e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103336e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103336f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103336f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103336fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010333703c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103337098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033370e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333709c) */
/* WARNING: Removing unreachable block (ram,0x000103337040) */
/* WARNING: Removing unreachable block (ram,0x00010333707c) */
/* WARNING: Removing unreachable block (ram,0x000103337080) */
/* WARNING: Removing unreachable block (ram,0x000103336fe8) */
/* WARNING: Removing unreachable block (ram,0x000103336f90) */
/* WARNING: Removing unreachable block (ram,0x000103336f3c) */
/* WARNING: Removing unreachable block (ram,0x000103336e98) */
/* WARNING: Removing unreachable block (ram,0x000103336e80) */
/* WARNING: Removing unreachable block (ram,0x000103336e54) */
/* WARNING: Removing unreachable block (ram,0x0001033370e4) */

void FUN_103336e1c(undefined8 param_1)

{
  FUN_1033365d4();
  FUN_103337134();
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103337134; end: 103337243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103337134(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f5aac0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f5aac0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a378();
    func_0x000107c52b2c(puVar3,param_2,0);
    func_0x000107c52610(puVar3,param_2,3);
    func_0x000107c59594(0x4020000000000000,puVar3);
    func_0x000107c54280(puVar3,param_2,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 103337244; end: 103337317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103337244(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a378();
  uVar1 = 6;
  if (*(char *)(param_1 + _DAT_112f5aa88) != '\0') {
    uVar1 = 7;
  }
  func_0x000107c5a100(puVar2,param_2,uVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar2,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c59c74(puVar2,param_2,1);
  func_0x000107c56ba8(puVar2,param_2,1);
  func_0x000107c61170(puVar2);
  func_0x000107c550d8(puVar2,param_2,1);
  return puVar2;
}



/* Entry: 103337318; end: 10333741b;  */

/* WARNING: Possible PIC construction at 0x0001033373ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033373b0) */
/* WARNING: Removing unreachable block (ram,0x0001033373cc) */
/* WARNING: Removing unreachable block (ram,0x0001033373f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103337318(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  if (1 < *(byte *)(unaff_x20 + _DAT_112f5aa88) - 1) {
    return;
  }
  func_0x0001033371e0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112f5aa80 + 0x18);
  if (lVar1 != 0) {
    func_0x000107c5fadc(*(undefined8 *)(unaff_x20 + _DAT_112f5aa80 + 0x10),lVar1);
  }
  func_0x000107c59c6c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10333741c; end: 10333747b;  */

/* WARNING: Possible PIC construction at 0x000103337430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103337434) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333741c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112f5aac0));
  return;
}



/* Entry: 10333747c; end: 1033374b3; -[_TtC26LensInfoCardImplementation19PrimaryActionButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103337498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010333749c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10333747c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5aac0));
  return;
}



/* Entry: 1033374b4; end: 1033374d3;  */

void FUN_1033374b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128ceb18);
  return;
}



/* Entry: 1033374d4; end: 103337ba3;  */

/* WARNING: Possible PIC construction at 0x00010333779c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033379b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103337b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103337704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103337b6c) */
/* WARNING: Removing unreachable block (ram,0x0001033379b8) */
/* WARNING: Removing unreachable block (ram,0x000103337b48) */
/* WARNING: Removing unreachable block (ram,0x000103337b50) */
/* WARNING: Removing unreachable block (ram,0x000103337a1c) */
/* WARNING: Removing unreachable block (ram,0x000103337a2c) */
/* WARNING: Removing unreachable block (ram,0x000103337b90) */
/* WARNING: Removing unreachable block (ram,0x000103337b94) */
/* WARNING: Removing unreachable block (ram,0x000103337a38) */
/* WARNING: Removing unreachable block (ram,0x000103337a3c) */
/* WARNING: Removing unreachable block (ram,0x000103337a84) */
/* WARNING: Removing unreachable block (ram,0x000103337a9c) */
/* WARNING: Removing unreachable block (ram,0x000103337b44) */
/* WARNING: Removing unreachable block (ram,0x000103337aac) */
/* WARNING: Removing unreachable block (ram,0x000103337a8c) */
/* WARNING: Removing unreachable block (ram,0x000103337ab8) */
/* WARNING: Removing unreachable block (ram,0x000103337b40) */
/* WARNING: Removing unreachable block (ram,0x000103337ac4) */
/* WARNING: Removing unreachable block (ram,0x000103337ac8) */
/* WARNING: Removing unreachable block (ram,0x000103337ad4) */
/* WARNING: Removing unreachable block (ram,0x000103337b20) */
/* WARNING: Removing unreachable block (ram,0x000103337ad8) */
/* WARNING: Removing unreachable block (ram,0x000103337b38) */
/* WARNING: Removing unreachable block (ram,0x000103337ae4) */
/* WARNING: Removing unreachable block (ram,0x000103337b34) */
/* WARNING: Removing unreachable block (ram,0x000103337af8) */
/* WARNING: Removing unreachable block (ram,0x000103337b1c) */
/* WARNING: Removing unreachable block (ram,0x000103337a60) */
/* WARNING: Removing unreachable block (ram,0x000103337b64) */
/* WARNING: Removing unreachable block (ram,0x0001033377a0) */
/* WARNING: Removing unreachable block (ram,0x000103337708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033374d4(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  undefined *puVar15;
  long unaff_x20;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  
  lVar6 = _DAT_112f5ab20;
  lVar2 = _DAT_112f5ab10;
  puVar23 = *(undefined **)(unaff_x20 + _DAT_112f5ab08);
  lVar21 = *(long *)(puVar23 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar9 = puVar23;
  func_0x000107c61434();
  if (lVar21 == 0) {
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar23);
    return;
  }
  uVar17 = 0;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_103337560:
  lVar11 = 0;
  if (uVar17 <= *(ulong *)(puVar23 + 0x10)) {
    lVar11 = *(ulong *)(puVar23 + 0x10) - uVar17;
  }
  lVar16 = lVar21 - uVar17;
  plVar13 = (long *)(puVar23 + uVar17 * 0x10 + 0x28);
  do {
    uVar17 = uVar17 + 1;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x103337b40);
      (*pcVar7)();
    }
    lVar3 = plVar13[-1];
    lVar5 = *plVar13;
    uVar1 = (uint)((ulong)lVar3 >> 0x20);
    uVar14 = uVar1 >> 0x1d;
    puVar10 = puVar15;
    if (uVar14 == 4) {
      if (lVar5 == 3 && lVar3 == -0x8000000000000000) {
        func_0x000103337f58();
        goto LAB_1033378f0;
      }
      if (lVar5 == 3 && lVar3 == -0x7fffffffffffffff) {
        FUN_10333836c();
        goto LAB_1033378f0;
      }
    }
    else {
      uVar18 = (uint)lVar3;
      if (uVar14 == 0) {
        lVar24 = lVar5;
        func_0x000107c61174();
        lVar8 = lVar24;
        FUN_103337e78();
        lVar11 = _DAT_112f5ab60;
        lVar22 = *(long *)(lVar8 + _DAT_112f5ab60);
        *(long *)(lVar8 + _DAT_112f5ab60) = lVar5;
        func_0x000107c61174(lVar24);
        func_0x000107c61174();
        func_0x000107c61170(lVar22);
        FUN_103338860();
        lVar24 = *(long *)(lVar8 + lVar11);
        lVar11 = lVar24;
        if (lVar24 == 0) {
          lVar11 = lVar22;
          FUN_1033387dc();
        }
        func_0x000107c61174(lVar24);
        func_0x000107c55258(lVar22);
        func_0x000107c61170(lVar22);
        func_0x000107c61170(lVar11);
        FUN_103325284(lVar3,lVar5);
        func_0x000107c61170(lVar8);
        lVar22 = *(long *)(unaff_x20 + lVar2);
        lVar11 = lVar22 + _DAT_112f5aa80;
        lVar24 = *(long *)(lVar11 + 8);
        func_0x000107c61174();
        lVar8 = lVar22;
        func_0x000103336320();
        uVar18 = lVar24 != 0 & uVar18;
        lVar24 = 0x68;
        if (uVar18 == 0) {
          lVar24 = 0x58;
        }
        func_0x000107c55258();
        func_0x000107c61170(lVar8);
        puVar9 = *(undefined **)(lVar11 + lVar24);
        if (puVar9 == (undefined *)0x0) {
          func_0x000107c52104(lVar22);
          func_0x000107c61170(lVar22);
          func_0x000107c61170(0);
          puVar19 = *(undefined **)(unaff_x20 + lVar2);
          func_0x000107c61174();
          FUN_103325284(lVar3,lVar5);
          func_0x000107c61550();
          if (((ulong)puVar10 & 1) != 0) goto LAB_103337904;
          goto LAB_10333790c;
        }
        lVar2 = 0x60;
        if (uVar18 == 0) {
          lVar2 = 0x50;
        }
        uVar20 = *(undefined8 *)(lVar11 + lVar2);
        func_0x000107c61434(puVar9);
        func_0x000107c5fadc(uVar20,puVar9);
        puVar23 = puVar9;
        goto code_r0x000107c6142c;
      }
      if (uVar1 >> 0x1d == 1) break;
    }
    lVar11 = lVar11 + -1;
    plVar13 = plVar13 + 2;
    lVar16 = lVar16 + -1;
    if (lVar16 == 0) goto code_r0x000107c6142c;
  } while( true );
  FUN_1033380f8();
  lVar3 = _DAT_112f5aa80;
  lVar11 = *(long *)(puVar9 + _DAT_112f5aa80 + 8);
  puVar19 = puVar9;
  func_0x000103336320();
  uVar1 = lVar11 != 0 & uVar18;
  lVar11 = 0x68;
  if (uVar1 == 0) {
    lVar11 = 0x58;
  }
  func_0x000107c55258();
  func_0x000107c61170(puVar19);
  puVar19 = *(undefined **)(puVar9 + lVar11 + lVar3);
  if (puVar19 != (undefined *)0x0) {
    lVar2 = 0x60;
    if (uVar1 == 0) {
      lVar2 = 0x50;
    }
    uVar20 = *(undefined8 *)(puVar9 + lVar2 + lVar3);
    func_0x000107c61434(puVar19);
    func_0x000107c5fadc(uVar20,puVar19);
    puVar23 = puVar19;
    goto code_r0x000107c6142c;
  }
  func_0x000107c52104(puVar9);
  uVar20 = 0;
  func_0x000107c61170(0);
  if ((byte)puVar9[_DAT_112f5aa88] - 1 < 2) {
    lVar11 = *(long *)(puVar9 + lVar3 + 0x28);
    if (lVar11 == 0 || ((uVar18 ^ 0xffffffff) & 1) != 0) {
      func_0x0001033371e0();
      if (*(long *)(puVar9 + lVar3 + 0x18) == 0) {
        puVar19 = (undefined *)0x0;
      }
      else {
        puVar19 = *(undefined **)(puVar9 + lVar3 + 0x10);
        func_0x000107c5fadc(puVar19);
      }
      func_0x000107c59c6c(uVar20);
    }
    else {
      puVar19 = *(undefined **)(puVar9 + lVar3 + 0x20);
      func_0x0001033371e0();
      func_0x000107c5fadc(puVar19,lVar11);
      func_0x000107c59c6c(uVar20);
    }
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar20);
    puVar9 = puVar19;
  }
  func_0x000107c61170(puVar9);
  puVar9 = *(undefined **)(unaff_x20 + lVar6);
  func_0x000107c61174();
LAB_1033378f0:
  func_0x000107c61550();
  puVar19 = puVar9;
  if ((int)puVar10 != 0) {
LAB_103337904:
    if ((-1 < (long)puVar15) && (puVar9 = puVar10, ((ulong)puVar15 >> 0x3e & 1) == 0))
    goto LAB_103337934;
  }
LAB_10333790c:
  if ((ulong)puVar15 >> 0x3e == 0) {
    puVar10 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      puVar10 = puVar15;
    }
    func_0x000107c60480(puVar10);
  }
  puVar9 = (undefined *)0x0;
  func_0x0001023b5804(0,puVar10 + 1,1,puVar15);
  puVar15 = puVar9;
LAB_103337934:
  uVar12 = (ulong)puVar15 & 0xffffffffffffff8;
  uVar4 = *(ulong *)(uVar12 + 0x10);
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar4) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
    func_0x0001023b5804(puVar9,uVar4 + 1,1,puVar15);
    uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
    puVar15 = puVar9;
  }
  *(ulong *)(uVar12 + 0x10) = uVar4 + 1;
  *(undefined **)(uVar12 + uVar4 * 8 + 0x20) = puVar19;
  if (lVar16 == 1) goto code_r0x000107c6142c;
  goto LAB_103337560;
}



/* Entry: 103337ba4; end: 103337caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103337ba4(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar1 = _DAT_112f5aaf8;
  uVar2 = 0x112f59a00;
  func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined **)(unaff_x20 + _DAT_112f5ab08) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ab10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ab18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ab20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ab28) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f5ab00) = param_1;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffb0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_103337cb0();
  FUN_1033374d4();
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 103337cb0; end: 103337e4f;  */

/* WARNING: Possible PIC construction at 0x000103337d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103337d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103337d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103337d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103337df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103337d5c) */
/* WARNING: Removing unreachable block (ram,0x000103337dc0) */
/* WARNING: Removing unreachable block (ram,0x000103337dc4) */
/* WARNING: Removing unreachable block (ram,0x000103337d40) */
/* WARNING: Removing unreachable block (ram,0x000103337d24) */
/* WARNING: Removing unreachable block (ram,0x000103337d08) */
/* WARNING: Removing unreachable block (ram,0x000103337df8) */

void FUN_103337cb0(void)

{
  undefined8 unaff_x20;
  
  func_0x000107c59594(0x4020000000000000);
  func_0x000107c52610();
  func_0x000107c54280();
  FUN_103337e78();
  func_0x000107c3d5b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 103337e50; end: 103337e77; -[_TtC26LensInfoCardImplementation18PrimaryActionsView initWithCoder:] */

void FUN_103337e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1033386f4();
  return;
}



/* Entry: 103337e78; end: 1033380f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103337e78(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar1 = _DAT_112f5ab10;
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112f5ab10);
  uVar5 = uVar2;
  if (uVar2 == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5aaf8);
    uVar5 = (ulong)*(byte *)(unaff_x20 + _DAT_112f5ab00);
    puVar3 = &UNK_1106400e8;
    func_0x000107c613fc(&UNK_1106400e8,0x39,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar4;
    *(undefined8 *)(puVar3 + 0x18) = 7;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    puVar3[0x38] = 0xd;
    FUN_1033390cc(0);
    func_0x000107c610f8();
    func_0x000107c6157c(uVar4);
    FUN_1033388c4(uVar5,0x1033387d4,puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(ulong *)(unaff_x20 + lVar1) = uVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    uVar2 = 0;
  }
  func_0x000107c61174(uVar2);
  return uVar5;
}



/* Entry: 1033380f8; end: 10333836b;  */

/* WARNING: Removing unreachable block (ram,0x000103338368) */
/* WARNING: Removing unreachable block (ram,0x000103338364) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1033380f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d0 [112];
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  
  lVar2 = _DAT_112f5ab20;
  ppuVar3 = *(undefined ***)(unaff_x20 + _DAT_112f5ab20);
  ppuVar7 = ppuVar3;
  if (ppuVar3 == (undefined **)0x0) {
    cVar1 = *(char *)(unaff_x20 + _DAT_112f5ab00);
    uVar12 = 0x4038000000000000;
    if (cVar1 != '\0') {
      uVar12 = 0x4034000000000000;
    }
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    puVar5 = puVar4;
    func_0x000107c5afac(uVar12,uVar12);
    func_0x000107c61180();
    func_0x000107c5afb4(uVar12,uVar12);
    func_0x000107c61180();
    if ((byte)(cVar1 - 1U) < 2) {
      puStack_1e0 = puVar4;
      func_0x000103346888();
      uStack_1e8 = param_2;
    }
    else {
      uStack_1e8 = 0;
      puStack_1e0 = (undefined *)0x0;
    }
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f5aaf8);
    puVar6 = &UNK_110640110;
    uVar9 = 0x39;
    func_0x000107c613fc(&UNK_110640110,0x39,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar10;
    *(undefined8 *)(puVar6 + 0x18) = 9;
    *(undefined8 *)(puVar6 + 0x28) = 0;
    *(undefined8 *)(puVar6 + 0x30) = 0;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    puVar6[0x38] = 0xd;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e83058;
    ppuVar7 = ppuVar3;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110e83058);
    func_0x000107c5faec();
    uVar12 = uVar9;
    func_0x000107c6157c(uVar10);
    func_0x000107c61170(ppuVar7);
    ppuVar11 = &PTR____CFConstantStringClassReference_110e83038;
    ppuVar7 = ppuVar11;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110e83038);
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar7);
    puStack_150 = puStack_1e0;
    uStack_148 = uStack_1e8;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0x1033387d8;
    uStack_120 = 0xd000000000000013;
    uStack_118 = 0x800000010f13f100;
    uStack_d8 = uStack_1e8;
    puStack_e0 = puStack_1e0;
    uStack_c0 = 0x1033387d8;
    uStack_a8 = 0x800000010f13f100;
    uStack_b0 = 0xd000000000000013;
    uStack_c8 = 0;
    uStack_d0 = 0;
    lVar8 = 0;
    puStack_160 = puVar5;
    puStack_158 = puVar4;
    puStack_128 = puVar6;
    ppuStack_110 = ppuVar3;
    uStack_108 = uVar9;
    ppuStack_100 = ppuVar11;
    uStack_f8 = uVar12;
    puStack_f0 = puVar5;
    puStack_e8 = puVar4;
    puStack_b8 = puVar6;
    ppuStack_a0 = ppuVar3;
    uStack_98 = uVar9;
    ppuStack_90 = ppuVar11;
    uStack_88 = uVar12;
    FUN_1033374b4();
    func_0x000107c610f8();
    *(undefined8 *)(lVar8 + _DAT_112f5aac0) = 0;
    *(undefined8 *)(lVar8 + _DAT_112f5aac8) = 0;
    FUN_103336dbc(&puStack_160,auStack_1d0);
    ppuVar7 = &puStack_f0;
    func_0x000103336428(ppuVar7,cVar1);
    func_0x000107c61180();
    FUN_103336e1c();
    func_0x000103336df0(&puStack_160);
    uVar12 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined ***)(unaff_x20 + lVar2) = ppuVar7;
    func_0x000107c61170(uVar12);
    ppuVar3 = (undefined **)0x0;
  }
  func_0x000107c61174(ppuVar3);
  return ppuVar7;
}



/* Entry: 10333836c; end: 103338543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_10333836c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_1b0 [112];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = _DAT_112f5ab28;
  ppuVar3 = *(undefined ***)(unaff_x20 + _DAT_112f5ab28);
  ppuVar7 = ppuVar3;
  if (ppuVar3 == (undefined **)0x0) {
    cVar1 = *(char *)(unaff_x20 + _DAT_112f5ab00);
    uVar9 = 0x4038000000000000;
    if (cVar1 != '\0') {
      uVar9 = 0x4034000000000000;
    }
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c5afac(uVar9,uVar9);
    func_0x000107c61180();
    if ((byte)(cVar1 - 1U) < 2) {
      puVar8 = puVar4;
      func_0x000103346954();
    }
    else {
      puVar8 = (undefined *)0x0;
      param_2 = 0;
    }
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f5aaf8);
    puVar5 = &UNK_1106400c0;
    func_0x000107c613fc(&UNK_1106400c0,0x39,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar9;
    *(undefined8 *)(puVar5 + 0x18) = 10;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    puVar5[0x38] = 0xd;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    pcStack_110 = FUN_1033387d0;
    uStack_100 = 0xd000000000000010;
    uStack_f8 = 0x800000010f13f0e0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_88 = 0x800000010f13f0e0;
    uStack_90 = 0xd000000000000010;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_c8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = FUN_1033387d0;
    lVar6 = 0;
    puStack_140 = puVar4;
    puStack_130 = puVar8;
    uStack_128 = param_2;
    puStack_108 = puVar5;
    puStack_d0 = puVar4;
    puStack_c0 = puVar8;
    uStack_b8 = param_2;
    puStack_98 = puVar5;
    FUN_1033374b4();
    func_0x000107c610f8();
    *(undefined8 *)(lVar6 + _DAT_112f5aac0) = 0;
    *(undefined8 *)(lVar6 + _DAT_112f5aac8) = 0;
    func_0x000107c6157c(uVar9);
    FUN_103336dbc(&puStack_140,auStack_1b0);
    ppuVar7 = &puStack_d0;
    func_0x000103336428(ppuVar7,cVar1);
    func_0x000107c61180();
    FUN_103336e1c();
    func_0x000103336df0(&puStack_140);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined ***)(unaff_x20 + lVar2) = ppuVar7;
    func_0x000107c61170(uVar9);
    ppuVar3 = (undefined **)0x0;
  }
  func_0x000107c61174(ppuVar3);
  return ppuVar7;
}



/* Entry: 103338544; end: 1033385a3; -[_TtC26LensInfoCardImplementation18PrimaryActionsView initWithFrame:] */

void FUN_103338544(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.PrimaryActionsView",0x2d,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103338570);
  (*pcVar1)();
}



/* Entry: 1033385a4; end: 10333861b; -[_TtC26LensInfoCardImplementation18PrimaryActionsView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033385e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103338600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033385e4) */
/* WARNING: Removing unreachable block (ram,0x000103338604) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033385a4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5aaf8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5ab08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5ab10));
  return;
}


