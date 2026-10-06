/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f0a5c0; end: 100f0a5d3;  */

void FUN_100f0a5c0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x48) = 0;
    func_0x000107c615e8(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    func_0x000107c61574(lVar1);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 100f0a5d4; end: 100f0a5fb;  */

void FUN_100f0a5d4(void)

{
  FUN_100f08b48();
  return;
}



/* Entry: 100f0a5fc; end: 100f0a603;  */

void FUN_100f0a5fc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x60) = 0;
    func_0x000107c615e8(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    func_0x000107c61574(lVar1);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 100f0a604; end: 100f0a637;  */

void FUN_100f0a604(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f0a638; end: 100f0a643;  */

void FUN_100f0a638(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = auStack_58;
  func_0x000107c61428(lVar1 + 0x10,puVar4,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x78) != 0) {
      func_0x000107c3fedc();
    }
    func_0x000107c50374();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x68) = uVar2;
    *(undefined1 **)(lVar1 + 0x70) = puVar4;
    func_0x000107c6142c(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x78) = uVar5;
    func_0x000107c615e8(uVar3);
    func_0x000107c615f0(uVar5);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100f0a644; end: 100f0a6c3;  */

void FUN_100f0a644(void)

{
  func_0x000100f094d8();
  return;
}



/* Entry: 100f0a6c4; end: 100f0a6db;  */

void FUN_100f0a6c4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x78) = 0;
    func_0x000107c615e8(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x68) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    func_0x000107c61574(lVar1);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 100f0a6dc; end: 100f0a747;  */

void FUN_100f0a6dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9115e4;
  func_0x000107c61520(&UNK_10d9115e4,&UNK_110367cc0);
  puRam0000000112d4b080 = puVar1;
  return;
}



/* Entry: 100f0a748; end: 100f0a74f;  */

/* WARNING: Removing unreachable block (ram,0x000100f09aac) */

void FUN_100f0a748(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar8 = auStack_78;
  func_0x000107c61428(lVar1 + 0x10,puVar8,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar11 = *(long *)(lVar1 + 0x40);
    if ((lVar11 == 0) || (lVar10 = *(long *)(lVar1 + 0x48), lVar10 == 0)) {
      func_0x000107c61574();
    }
    else {
      uVar12 = *(undefined8 *)(lVar1 + 0x38);
      func_0x000107c5faec();
      func_0x000107c5eb54();
      func_0x000107c613fc();
      func_0x000107c61434(lVar11);
      lVar3 = lVar10;
      func_0x000107c615f0(lVar10);
      func_0x000107c5eb50();
      lVar4 = lVar3;
      uStack_88 = uVar2;
      puStack_80 = puVar8;
      FUN_100f0a750();
      puVar9 = &UNK_110367c40;
      puVar5 = &uStack_88;
      func_0x000107c5eb4c(puVar5,&UNK_110367c40,lVar4);
      func_0x000107c6142c(puVar8);
      func_0x000107c61574(lVar3);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      FUN_100de78a0(puVar5,puVar9);
      func_0x000107c5fadc(uVar12,lVar11);
      func_0x000107c6142c(lVar11);
      puVar7 = puVar6;
      func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c6142c(puVar6);
      if ((ulong)puVar9 >> 0x3c < 0xf) {
        puVar13 = puVar5;
        func_0x000107c5ee20(puVar5,puVar9);
        func_0x0001000b44c0(puVar5,puVar9);
      }
      else {
        puVar13 = (undefined8 *)0x0;
      }
      puVar6 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      func_0x000107c48368();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar13);
      func_0x000107c4d664(lVar10);
      func_0x000107c61170(puVar6);
      func_0x0001000b44c0(puVar5,puVar9);
      func_0x000107c61574(lVar1);
      func_0x000107c615e8(lVar10);
    }
  }
  return;
}



/* Entry: 100f0a750; end: 100f0a78f;  */

void FUN_100f0a750(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9115bc;
  func_0x000107c61520(&UNK_10d9115bc,&UNK_110367c40);
  puRam0000000112d4b088 = puVar1;
  return;
}



/* Entry: 100f0a790; end: 100f0a797;  */

void FUN_100f0a790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100f0a798; end: 100f0a807;  */

undefined8 * FUN_100f0a798(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100f0a808; end: 100f0a89b;  */

int FUN_100f0a808(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f0a89c; end: 100f0a92b;  */

long FUN_100f0a89c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100f0a92c; end: 100f0a997;  */

undefined8 * FUN_100f0a92c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100f0a998; end: 100f0a9db;  */

undefined8 * FUN_100f0a998(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 100f0a9dc; end: 100f0aa73;  */

int FUN_100f0a9dc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f0aa74; end: 100f0aaf3;  */

void FUN_100f0aa74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9117fc;
  func_0x000107c61520(&UNK_10d9117fc,&UNK_110367de8);
  puRam0000000112d4b098 = puVar1;
  return;
}



/* Entry: 100f0aaf4; end: 100f0ad47;  */

uint FUN_100f0aaf4(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 100f0ad48; end: 100f0ad87;  */

void FUN_100f0ad48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9116cc;
  func_0x000107c61520(&UNK_10d9116cc,&UNK_110367de8);
  puRam0000000112d4b0c0 = puVar1;
  return;
}



/* Entry: 100f0ad88; end: 100f0ad8b;  */

void FUN_100f0ad88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911784;
  func_0x000107c61520(&UNK_10d911784,&UNK_110367d58);
  puRam0000000112d4b0c8 = puVar1;
  return;
}



/* Entry: 100f0ad8c; end: 100f0adcb;  */

void FUN_100f0ad8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911784;
  func_0x000107c61520(&UNK_10d911784,&UNK_110367d58);
  puRam0000000112d4b0c8 = puVar1;
  return;
}



/* Entry: 100f0adcc; end: 100f0adcf;  */

void FUN_100f0adcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91171c;
  func_0x000107c61520(&UNK_10d91171c,&UNK_110367d58);
  puRam0000000112d4b0d0 = puVar1;
  return;
}



/* Entry: 100f0add0; end: 100f0ae0f;  */

void FUN_100f0add0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91171c;
  func_0x000107c61520(&UNK_10d91171c,&UNK_110367d58);
  puRam0000000112d4b0d0 = puVar1;
  return;
}



/* Entry: 100f0ae10; end: 100f0ae13;  */

void FUN_100f0ae10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9116f4;
  func_0x000107c61520(&UNK_10d9116f4,&UNK_110367d58);
  puRam0000000112d4b0d8 = puVar1;
  return;
}



/* Entry: 100f0ae14; end: 100f0ae53;  */

void FUN_100f0ae14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9116f4;
  func_0x000107c61520(&UNK_10d9116f4,&UNK_110367d58);
  puRam0000000112d4b0d8 = puVar1;
  return;
}



/* Entry: 100f0ae54; end: 100f0ae57;  */

void FUN_100f0ae54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911664;
  func_0x000107c61520(&UNK_10d911664,&UNK_110367de8);
  puRam0000000112d4b0e0 = puVar1;
  return;
}



/* Entry: 100f0ae58; end: 100f0ae97;  */

void FUN_100f0ae58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911664;
  func_0x000107c61520(&UNK_10d911664,&UNK_110367de8);
  puRam0000000112d4b0e0 = puVar1;
  return;
}



/* Entry: 100f0ae98; end: 100f0ae9b;  */

void FUN_100f0ae98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91163c;
  func_0x000107c61520(&UNK_10d91163c,&UNK_110367de8);
  puRam0000000112d4b0e8 = puVar1;
  return;
}



/* Entry: 100f0ae9c; end: 100f0aedb;  */

void FUN_100f0ae9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91163c;
  func_0x000107c61520(&UNK_10d91163c,&UNK_110367de8);
  puRam0000000112d4b0e8 = puVar1;
  return;
}



/* Entry: 100f0aedc; end: 100f0af87;  */

void FUN_100f0aedc(long param_1,long param_2)

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



/* Entry: 100f0af88; end: 100f0b7ab;  */

/* WARNING: Removing unreachable block (ram,0x000100f0b024) */

undefined * FUN_100f0af88(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puStack_e8;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  if (0xe < param_2 >> 0x3c) {
    return (undefined *)0x0;
  }
  func_0x000107c5eb24(0,0,0);
  func_0x000107c613fc();
  uVar9 = param_1;
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c5eb20();
  uVar6 = uVar9;
  FUN_100f0c0dc();
  func_0x000107c5eb1c(&puStack_88,&UNK_110367f10,param_1,param_2,&UNK_110367f10,uVar6);
  func_0x000107c61574(uVar9);
  puVar12 = puStack_88;
  if ((lStack_78 == 0) || (*(long *)(lStack_78 + 0x10) == 0)) {
    if (lStack_70 == 0) {
      func_0x0001000b44c0(param_1,param_2);
      func_0x000107c6142c(lStack_80);
      lStack_80 = lStack_78;
    }
    else {
      if (*(long *)(lStack_70 + 0x10) != 0) {
        if (lStack_78 == 0) {
          puStack_e8 = (undefined *)0x0;
          if (lStack_80 != 0) {
            puStack_e8 = puStack_88;
          }
        }
        else {
          if (*(long *)(lStack_78 + 0x10) != 0) goto LAB_100f0b090;
          puStack_e8 = (undefined *)0x0;
          if (lStack_80 != 0) {
            puStack_e8 = puStack_88;
          }
        }
        goto LAB_100f0b0b4;
      }
      func_0x0001000b44c0(param_1,param_2);
      func_0x000107c6142c(lStack_70);
      func_0x000107c6142c(lStack_78);
    }
    func_0x000107c6142c(lStack_80);
    puStack_e8 = (undefined *)0x0;
  }
  else {
LAB_100f0b090:
    func_0x000100f0b424();
    puStack_e8 = (undefined *)0x0;
    if (lStack_80 != 0) {
      puStack_e8 = puVar12;
    }
    if (lStack_70 == 0) {
      func_0x000107c61434(lStack_80);
      func_0x0001000b44c0(param_1,param_2);
      func_0x000107c6142c(lStack_80);
      func_0x000107c6142c(lStack_78);
      return puStack_e8;
    }
LAB_100f0b0b4:
    uVar18 = *(ulong *)(lStack_70 + 0x10);
    func_0x000107c61434(lStack_80);
    if (uVar18 != 0) {
      uVar17 = 0;
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if (*(ulong *)(lStack_70 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100f0b424);
          (*pcVar5)();
        }
        puVar13 = (ulong *)(lStack_70 + 0x20 + uVar17 * 0x28);
        uVar1 = *puVar13;
        uVar4 = puVar13[1];
        uVar2 = puVar13[2];
        puVar10 = (undefined *)puVar13[3];
        uVar7 = puVar13[4];
        if ((char)uVar7 == '\x01') {
          uVar7 = uVar1;
          func_0x000107c61434();
          FUN_100f0c11c();
          FUN_100f0c454(uVar1,uVar4,uVar2,puVar10,1);
          puVar14 = (undefined *)(uVar7 | 0x8000000000000000);
        }
        else {
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c61434(puVar10);
          func_0x000107c61434(uVar2);
          func_0x000107c46ed0();
          puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar10 != (undefined *)0x0) {
            puVar11 = puVar10;
          }
          lVar15 = *(long *)(puVar11 + 0x10);
          if (lVar15 == 0) {
            func_0x000107c61434(uVar2);
            func_0x000107c61434(puVar10);
            func_0x000107c6142c(puVar11);
          }
          else {
            puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x000107c61434(uVar2);
            func_0x000107c61434(puVar10);
            func_0x0001002ecff4(0,lVar15,0);
            do {
              puVar16 = puStack_88;
              puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000107c610f8();
              func_0x000107c46ed0();
              uVar3 = *(ulong *)(puVar16 + 0x10);
              puStack_88 = puVar16;
              if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar3) {
                func_0x0001002ecff4(1 < *(ulong *)(puVar16 + 0x18),uVar3 + 1,1);
              }
              puVar16 = puStack_88;
              *(ulong *)(puStack_88 + 0x10) = uVar3 + 1;
              *(undefined **)(puStack_88 + uVar3 * 8 + 0x20) = puVar8;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            func_0x000107c6142c(puVar11);
          }
          uVar9 = 0;
          func_0x000103e22388(0);
          func_0x000107c610f8();
          func_0x000103e22054(puVar14,uVar4,uVar2,puVar16,uVar9);
          FUN_100f0c454(uVar1,uVar4,uVar2,puVar10,(char)uVar7);
        }
        puVar10 = puVar12;
        func_0x000107c61558();
        puVar11 = puVar12;
        if (((ulong)puVar10 & 1) == 0) {
          puVar11 = (undefined *)0x0;
          FUN_100f0c8b0(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
        }
        uVar1 = *(ulong *)(puVar11 + 0x10);
        puVar12 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          FUN_100f0c8b0(puVar12,uVar1 + 1,1,puVar11);
        }
        uVar17 = uVar17 + 1;
        *(ulong *)(puVar12 + 0x10) = uVar1 + 1;
        *(undefined **)(puVar12 + uVar1 * 8 + 0x20) = puVar14;
      } while (uVar17 != uVar18);
    }
    func_0x0001000b44c0(param_1,param_2);
    func_0x000107c6142c(lStack_80);
    func_0x000107c6142c(lStack_70);
    func_0x000107c6142c(lStack_78);
  }
  return puStack_e8;
}



/* Entry: 100f0b7ac; end: 100f0b80f;  */

undefined1  [16] FUN_100f0b7ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar3 = *unaff_x20;
  uVar4 = 0xed00007469667475;
  uVar2 = 0x4f6c616974696e69;
  if (cVar3 != '\x01') {
    uVar4 = 0xe700000000000000;
    uVar2 = 0x736e6f6974706f;
  }
  uVar1 = 0x656c746974;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe500000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 100f0b810; end: 100f0b833;  */

void FUN_100f0b810(undefined1 *param_1,undefined1 param_2)

{
  FUN_100f0cbc4();
  *param_1 = param_2;
  return;
}



/* Entry: 100f0b834; end: 100f0b83f;  */

undefined1  [16] FUN_100f0b834(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100f0b840; end: 100f0b88f;  */

void FUN_100f0b840(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100f0cf24();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 100f0b890; end: 100f0b8bb;  */

void FUN_100f0b890(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_100f0ccdc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 100f0b8bc; end: 100f0b8f3;  */

undefined1  [16] FUN_100f0b8bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x73656e6f74;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x64496e6f6974706f;
  }
  uVar2 = 0xe500000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 100f0b8f4; end: 100f0b9c7;  */

void FUN_100f0b8f4(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x64496e6f6974706f;
  if ((param_2 == 0x64496e6f6974706f && param_3 == -0x1800000000000000) ||
     (func_0x000107c605b8(0x64496e6f6974706f,0xe800000000000000,param_2,param_3,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_2 == 0x73656e6f74) && (param_3 == -0x1b00000000000000)) {
      func_0x000107c6142c(0xe500000000000000);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x73656e6f74,0xe500000000000000,param_2,param_3,0);
      func_0x000107c6142c(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 100f0b9c8; end: 100f0b9df;  */

undefined1  [16] FUN_100f0b9c8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100f0b9e0; end: 100f0ba2f;  */

void FUN_100f0b9e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100f0d618();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 100f0ba30; end: 100f0ba57;  */

void FUN_100f0ba30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_100f0d498();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 100f0ba58; end: 100f0bc17;  */

void FUN_100f0ba58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x746e656d726167;
  if (cVar4 != '\x01') {
    uVar3 = 0x74696674756f;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x65707974;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe400000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f0bc18; end: 100f0bcbb;  */

void FUN_100f0bc18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x746e656d726167;
  if (cVar4 != '\x01') {
    uVar3 = 0x74696674756f;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x65707974;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe400000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 100f0bcbc; end: 100f0bcdf;  */

void FUN_100f0bcbc(undefined1 *param_1,undefined1 param_2)

{
  FUN_100f0d6c0();
  *param_1 = param_2;
  return;
}



/* Entry: 100f0bce0; end: 100f0bceb;  */

undefined1  [16] FUN_100f0bce0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100f0bcec; end: 100f0bd3b;  */

void FUN_100f0bcec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100f0da48();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 100f0bd3c; end: 100f0bd7f;  */

void FUN_100f0bd3c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_100f0d724(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    *(undefined1 *)(param_1 + 4) = uStack_28;
  }
  return;
}



/* Entry: 100f0bd80; end: 100f0be03;  */

void FUN_100f0bd80(void)

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



/* Entry: 100f0be04; end: 100f0be5b;  */

undefined1  [16] FUN_100f0be04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar4 = *unaff_x20;
  uVar3 = 0x79726f6765746163;
  if (cVar4 != '\x01') {
    uVar3 = 0x73656e6f74;
  }
  uVar1 = 0xe800000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe500000000000000;
  }
  uVar2 = 0x64496e6f6974706f;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 100f0be5c; end: 100f0be7f;  */

void FUN_100f0be5c(undefined1 *param_1,undefined1 param_2)

{
  FUN_100f0e014();
  *param_1 = param_2;
  return;
}



/* Entry: 100f0be80; end: 100f0be8b;  */

undefined1  [16] FUN_100f0be80(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100f0be8c; end: 100f0bedb;  */

void FUN_100f0be8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100f0e4f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 100f0bedc; end: 100f0bf07;  */

void FUN_100f0bedc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_100f0e124();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 100f0bf08; end: 100f0bf0f;  */

undefined8 FUN_100f0bf08(void)

{
  return 1;
}



/* Entry: 100f0bf10; end: 100f0bfaf;  */

void FUN_100f0bf10(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f0bfb0; end: 100f0bfc7;  */

undefined1  [16] FUN_100f0bfb0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe800000000000000;
  auVar1._0_8_ = 0x73746e656d726167;
  return auVar1;
}



/* Entry: 100f0bfc8; end: 100f0c04b;  */

void FUN_100f0bfc8(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x67;
  if (param_2 == 0x73746e656d726167 && param_3 == -0x1800000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x73746e656d726167,0xe800000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 100f0c04c; end: 100f0c063;  */

undefined1  [16] FUN_100f0c04c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100f0c064; end: 100f0c0b3;  */

void FUN_100f0c064(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100f0e448();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 100f0c0b4; end: 100f0c0db;  */

void FUN_100f0c0b4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100f0e2f0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100f0c0dc; end: 100f0c11b;  */

void FUN_100f0c0dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b0f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911884;
  func_0x000107c61520(&UNK_10d911884,&UNK_110367f10);
  puRam0000000112d4b0f0 = puVar1;
  return;
}



/* Entry: 100f0c11c; end: 100f0c453;  */

void FUN_100f0c11c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100f0a3b0();
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    lVar15 = 0;
    do {
      lVar17 = param_1 + 0x20 + lVar15 * 0x20;
      uVar2 = *(ulong *)(lVar17 + 0x10);
      puVar3 = *(undefined **)(lVar17 + 0x18);
      uVar4 = *(ulong *)(lVar17 + 8);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c61434(puVar3);
      func_0x000107c61434(uVar2);
      func_0x000107c46ed0();
      puVar16 = puVar10;
      if (puVar3 != (undefined *)0x0) {
        puVar16 = puVar3;
      }
      lVar17 = *(long *)(puVar16 + 0x10);
      if (lVar17 == 0) {
        func_0x000107c61434(uVar2);
        func_0x000107c61434(puVar3);
        func_0x000107c6142c(puVar16);
        puVar16 = puVar10;
      }
      else {
        func_0x000107c61434(uVar2);
        func_0x000107c61434(puVar3);
        func_0x0001002ecff4(0,lVar17,0);
        do {
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          uVar11 = *(ulong *)(puVar10 + 0x10);
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar11) {
            func_0x0001002ecff4(1 < *(ulong *)(puVar10 + 0x18),uVar11 + 1,1);
          }
          *(ulong *)(puVar10 + 0x10) = uVar11 + 1;
          *(undefined **)(puVar10 + uVar11 * 8 + 0x20) = puVar8;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        func_0x000107c6142c(puVar16);
        puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      uVar9 = 0;
      func_0x000103e22388(0);
      func_0x000107c610f8();
      func_0x000103e22054(puVar7,uVar4,uVar2,puVar10,uVar9);
      func_0x000107c61180();
      puVar10 = puVar6;
      func_0x000107c61558();
      uVar11 = uVar4;
      uVar12 = uVar2;
      func_0x000100029284();
      uVar14 = (ulong)~(uint)uVar12 & 1;
      lVar17 = *(long *)(puVar6 + 0x10) + uVar14;
      if (SCARRY8(*(long *)(puVar6 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100f0c440);
        (*pcVar5)();
      }
      if (*(long *)(puVar6 + 0x18) < lVar17) {
        FUN_100f0c614(lVar17,puVar10);
        uVar11 = uVar4;
        uVar14 = uVar2;
        func_0x000100029284();
        if (((uint)uVar12 & 1) != ((uint)uVar14 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100f0c454);
          (*pcVar5)();
        }
LAB_100f0c388:
        if ((uVar12 & 1) != 0) goto LAB_100f0c174;
LAB_100f0c390:
        *(ulong *)(puVar6 + (uVar11 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar6 + (uVar11 >> 6) * 8 + 0x40) | 1L << (uVar11 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar11 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar2;
        *(undefined **)(*(long *)(puVar6 + 0x38) + uVar11 * 8) = puVar7;
        func_0x000107c61170(puVar7);
        func_0x000107c6142c(puVar3);
        if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100f0c444);
          (*pcVar5)();
        }
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      }
      else {
        if (((ulong)puVar10 & 1) != 0) goto LAB_100f0c388;
        FUN_100f0c4a4();
        if ((uVar12 & 1) == 0) goto LAB_100f0c390;
LAB_100f0c174:
        uVar9 = *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar11 * 8);
        *(undefined **)(*(long *)(puVar6 + 0x38) + uVar11 * 8) = puVar7;
        func_0x000107c61170(puVar7);
        func_0x000107c6142c(puVar3);
        func_0x000107c6142c(uVar2);
        func_0x000107c61170(uVar9);
      }
      lVar15 = lVar15 + 1;
      puVar10 = puVar16;
    } while (lVar15 != lVar13);
  }
  func_0x000103e223a8(0);
  func_0x000107c610f8();
  func_0x000103e22250(puVar6);
  return;
}



/* Entry: 100f0c454; end: 100f0c487;  */

/* WARNING: Possible PIC construction at 0x000100f0c474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f0c478) */

void FUN_100f0c454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 != '\x01') {
    param_1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 100f0c488; end: 100f0c4a3;  */

void FUN_100f0c488(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d4b100;
  plVar5 = (long *)&UNK_10d911860;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)&SUB_1044e4d64)();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100f0c4a4; end: 100f0c613;  */

void FUN_100f0c4a4(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112d4afa0,&UNK_10d911520);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_100f0c580;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_100f0c580:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100f0c614);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_100f0c5ec;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_100f0c5ec:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 100f0c614; end: 100f0c8af;  */

void FUN_100f0c614(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112d4afa0;
  func_0x0001000285a8(0x112d4afa0,&UNK_10d911520);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_100f0c87c:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100f0c8ac);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_100f0c87c;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100f0c8b0);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 100f0c8b0; end: 100f0c9b7;  */

undefined * FUN_100f0c8b0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f0c9b8);
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
    puVar3 = (undefined *)0x112d4b0f8;
    func_0x0001000285a8(0x112d4b0f8,&UNK_10d911858);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_110715e20);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100f0c9b8; end: 100f0c9e7;  */

/* WARNING: Possible PIC construction at 0x000100f0c9cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f0c9d0) */

void FUN_100f0c9b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100f0c9e8; end: 100f0caaf;  */

undefined8 * FUN_100f0c9e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 100f0cab0; end: 100f0cb03;  */

undefined8 * FUN_100f0cab0(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100f0cb04; end: 100f0cbc3;  */

int FUN_100f0cb04(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100f0cbc4; end: 100f0ccdb;  */

undefined4 FUN_100f0cbc4(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_1 == 0x656c746974 && param_2 == -0x1b00000000000000) ||
     (func_0x000107c605b8(0x656c746974,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x4f6c616974696e69;
    if (((param_1 == 0x4f6c616974696e69) && (param_2 == -0x12ffff8b96998b8b)) ||
       (func_0x000107c605b8(0x4f6c616974696e69,0xed00007469667475,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0x736e6f6974706f;
      if ((param_1 == 0x736e6f6974706f) && (param_2 == -0x1900000000000000)) {
        func_0x000107c6142c(0xe700000000000000);
        uVar2 = 2;
      }
      else {
        func_0x000107c605b8(0x736e6f6974706f,0xe700000000000000,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        uVar2 = 2;
        if ((uVar1 & 1) == 0) {
          uVar2 = 3;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 100f0ccdc; end: 100f0cf23;  */

/* WARNING: Removing unreachable block (ram,0x000100f0ce4c) */
/* WARNING: Removing unreachable block (ram,0x000100f0cef0) */
/* WARNING: Removing unreachable block (ram,0x000100f0cef4) */
/* WARNING: Removing unreachable block (ram,0x000100f0cf08) */
/* WARNING: Removing unreachable block (ram,0x000100f0cda8) */

undefined1 * FUN_100f0ccdc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 uStack_61;
  undefined1 auStack_58 [8];
  
  lVar1 = 0x112d4b108;
  func_0x0001000285a8(0x112d4b108,&UNK_10d9118b0);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = *(undefined1 **)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x0001000a8868(param_1,uVar4);
  FUN_100f0cf24();
  func_0x000107c606e0(&stack0xffffffffffffff90 + -extraout_x8,&UNK_110367fb0,&UNK_110367fb0,lVar2,
                      uVar4,puVar3);
  if (unaff_x21 == 0) {
    auStack_58[0] = 0;
    puVar3 = auStack_58;
    func_0x000107c604d4(puVar3,lVar1);
    uVar4 = 0x112d4b118;
    func_0x0001000285a8(0x112d4b118,&UNK_10d9118b8);
    uStack_61 = 1;
    uVar5 = uVar4;
    FUN_100f0cf64();
    func_0x000107c604e8(auStack_58,uVar4,&uStack_61,lVar1,uVar4,uVar5);
    uVar4 = 0x112d4b130;
    func_0x0001000285a8(0x112d4b130,&UNK_10d9118c0);
    uStack_61 = 2;
    uVar5 = 0x112d4b138;
    FUN_100f0e488(0x112d4b138,0x112d4b130,&UNK_10d9118c0,0x100f0d01c);
    func_0x000107c604e8(auStack_58,uVar4,&uStack_61,lVar1,uVar4,uVar5);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffff90 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar3;
}



/* Entry: 100f0cf24; end: 100f0cf63;  */

void FUN_100f0cf24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911a24;
  func_0x000107c61520(&UNK_10d911a24,&UNK_110367fb0);
  puRam0000000112d4b110 = puVar1;
  return;
}



/* Entry: 100f0cf64; end: 100f0cfdb;  */

void FUN_100f0cf64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112d4b120 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4b118;
  func_0x00010002969c(0x112d4b118,&UNK_10d9118b8);
  uVar2 = uVar1;
  FUN_100f0cfdc();
  puStack_30 = PTR___sSSSesWP_11034daa8;
  puVar3 = PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0,uVar1,&puStack_30);
  puRam0000000112d4b120 = puVar3;
  return;
}



/* Entry: 100f0cfdc; end: 100f0d05b;  */

void FUN_100f0cfdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9119fc;
  func_0x000107c61520(&UNK_10d9119fc,&UNK_1103680b8);
  puRam0000000112d4b128 = puVar1;
  return;
}



/* Entry: 100f0d05c; end: 100f0d06f;  */

void FUN_100f0d05c(void)

{
  return;
}



/* Entry: 100f0d070; end: 100f0d0a3;  */

/* WARNING: Possible PIC construction at 0x000100f0d090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f0d094) */

void FUN_100f0d070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 != '\x01') {
    param_1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_1);
  return;
}



/* Entry: 100f0d0a4; end: 100f0d0b7;  */

/* WARNING: Possible PIC construction at 0x000100f0c474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f0c478) */

void FUN_100f0d0a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)(param_1 + 4) != '\x01') {
    uVar1 = param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1,param_1[1],param_1[2],param_1[3]);
  return;
}



/* Entry: 100f0d0b8; end: 100f0d187;  */

undefined8 * FUN_100f0d0b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_100f0d070(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 100f0d188; end: 100f0d19b;  */

void FUN_100f0d188(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 100f0d19c; end: 100f0d1e3;  */

undefined8 * FUN_100f0d19c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_100f0c454(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 100f0d1e4; end: 100f0d29f;  */

int FUN_100f0d1e4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100f0d2a0; end: 100f0d30f;  */

undefined8 * FUN_100f0d2a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100f0d310; end: 100f0d3cf;  */

int FUN_100f0d310(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100f0d3d0; end: 100f0d40f;  */

void FUN_100f0d3d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9119ac;
  func_0x000107c61520(&UNK_10d9119ac,&UNK_110367fb0);
  puRam0000000112d4b148 = puVar1;
  return;
}



/* Entry: 100f0d410; end: 100f0d413;  */

void FUN_100f0d410(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911944;
  func_0x000107c61520(&UNK_10d911944,&UNK_110367fb0);
  puRam0000000112d4b150 = puVar1;
  return;
}



/* Entry: 100f0d414; end: 100f0d453;  */

void FUN_100f0d414(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911944;
  func_0x000107c61520(&UNK_10d911944,&UNK_110367fb0);
  puRam0000000112d4b150 = puVar1;
  return;
}



/* Entry: 100f0d454; end: 100f0d457;  */

void FUN_100f0d454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91191c;
  func_0x000107c61520(&UNK_10d91191c,&UNK_110367fb0);
  puRam0000000112d4b158 = puVar1;
  return;
}



/* Entry: 100f0d458; end: 100f0d497;  */

void FUN_100f0d458(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91191c;
  func_0x000107c61520(&UNK_10d91191c,&UNK_110367fb0);
  puRam0000000112d4b158 = puVar1;
  return;
}



/* Entry: 100f0d498; end: 100f0d617;  */

/* WARNING: Removing unreachable block (ram,0x000100f0d560) */

undefined1  [16] FUN_100f0d498(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_70 [15];
  undefined1 uStack_61;
  long lStack_60;
  undefined1 uStack_51;
  
  lVar1 = 0x112d4b160;
  func_0x0001000285a8(0x112d4b160,&UNK_10d911a78);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = *(undefined1 **)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x0001000a8868(param_1,puVar4);
  lVar3 = lVar2;
  FUN_100f0d618();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1103681e0,&UNK_1103681e0,lVar3,puVar4,uVar5);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    func_0x000107c60500(puVar4,lVar1);
    uVar5 = 0x112d4b170;
    func_0x0001000285a8(0x112d4b170,&UNK_10d911a80);
    uStack_61 = 1;
    uVar6 = uVar5;
    func_0x000100f0d658();
    func_0x000107c604e8(&lStack_60,uVar5,&uStack_61,lVar1,uVar5,uVar6);
    (**(code **)(lVar7 + 8))(auStack_70 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_60 = lVar2;
  }
  auVar8._8_8_ = lStack_60;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 100f0d618; end: 100f0d6bf;  */

void FUN_100f0d618(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911d10;
  func_0x000107c61520(&UNK_10d911d10,&UNK_1103681e0);
  puRam0000000112d4b168 = puVar1;
  return;
}



/* Entry: 100f0d6c0; end: 100f0d723;  */

ulong FUN_100f0d6c0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 100f0d724; end: 100f0da47;  */

void FUN_100f0d724(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined1 uVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x112d4b180;
  func_0x0001000285a8(0x112d4b180,&UNK_10d911a88);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&uStack_80 - extraout_x8;
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar7);
  FUN_100f0da48();
  func_0x000107c606e0(lVar10,&UNK_110368150,&UNK_110368150,lVar4,uVar7,uVar1);
  if (unaff_x21 == 0) {
    uStack_80 = uStack_80 & 0xffffffffffffff00;
    puVar5 = &uStack_80;
    lVar4 = lVar3;
    func_0x000107c604f4();
    uVar6 = 0x746e656d726167;
    if ((puVar5 == (ulong *)0x746e656d726167 && lVar4 == -0x1900000000000000) ||
       (func_0x000107c605b8(0x746e656d726167,0xe700000000000000,puVar5,lVar4,0), (uVar6 & 1) != 0))
    {
      func_0x000107c6142c(lVar4);
      uStack_51 = 1;
      func_0x000100f0db18();
      func_0x000107c60508(&uStack_80,&UNK_110368280,&uStack_51,lVar3,&UNK_110368280,lVar4);
      (**(code **)(lVar11 + 8))(lVar10,lVar3);
      uVar9 = 0;
    }
    else {
      uVar6 = 0x74696674756f;
      if ((puVar5 != (ulong *)0x74696674756f || lVar4 != -0x1a00000000000000) &&
         (func_0x000107c605b8(0x74696674756f,0xe600000000000000,puVar5,lVar4,0), (uVar6 & 1) == 0))
      {
        uStack_51 = 0;
        uStack_80 = 0;
        uStack_78 = 0xe000000000000000;
        func_0x000107c602fc(0x2d);
        func_0x000107c6142c(uStack_78);
        uStack_80 = 0xd00000000000002a;
        uStack_78 = 0x800000010ef19890;
        func_0x000107c5fb78(puVar5,lVar4);
        func_0x000107c6142c(lVar4);
        func_0x000107c5fb78(0x22,0xe100000000000000);
        uVar2 = uStack_78;
        uVar6 = uStack_80;
        uVar7 = 0;
        func_0x000107c60344(0);
        puVar8 = PTR___ss13DecodingErrorOs0B0sWP_11034e5b0;
        func_0x000107c613f8();
        func_0x000100f0da88();
        func_0x000107c60338(puVar8,&uStack_51,lVar10,uVar6,uVar2,lVar3,uVar7);
        func_0x000107c6142c(uVar2);
        func_0x000107c61654();
        (**(code **)(lVar11 + 8))(lVar10,lVar3);
        goto LAB_100f0d89c;
      }
      func_0x000107c6142c(lVar4);
      uStack_51 = 2;
      func_0x000100f0dad8();
      func_0x000107c60508(&uStack_80,&UNK_110368200,&uStack_51,lVar3,&UNK_110368200,lVar4);
      (**(code **)(lVar11 + 8))(lVar10,lVar3);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uVar9 = 1;
    }
    uVar6 = uStack_80;
    func_0x0001000834e4(param_2);
    *param_1 = uVar6;
    param_1[1] = uStack_78;
    param_1[2] = uStack_70;
    param_1[3] = uStack_68;
    *(undefined1 *)(param_1 + 4) = uVar9;
  }
  else {
LAB_100f0d89c:
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 100f0da48; end: 100f0db57;  */

void FUN_100f0da48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911cc0;
  func_0x000107c61520(&UNK_10d911cc0,&UNK_110368150);
  puRam0000000112d4b188 = puVar1;
  return;
}



/* Entry: 100f0db58; end: 100f0dccf;  */

void FUN_100f0db58(void)

{
  return;
}



/* Entry: 100f0dcd0; end: 100f0dd33;  */

/* WARNING: Possible PIC construction at 0x000100f0dce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f0dce8) */

void FUN_100f0dcd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100f0dd34; end: 100f0dd9f;  */

undefined8 * FUN_100f0dd34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100f0dda0; end: 100f0dde3;  */

undefined8 * FUN_100f0dda0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}


