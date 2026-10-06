/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007b5964; end: 1007b59d7; -[SCLensMediaDownloaderServices initWithMediaDownloaderFactory:] */

undefined1 * FUN_1007b5964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700b00;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007b59d8; end: 1007b5a0b;  */

void FUN_1007b59d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b5a0c; end: 1007b5a27; -[SCLensMediaDownloaderServices mediaDownloaderFactory] */

undefined8 FUN_1007b5a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007b5a28; end: 1007b5aaf;  */

void FUN_1007b5a28(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1000285a8(param_2,param_3);
  func_0x000107c610f8();
  uVar1 = uStack_38;
  FUN_10017da58(uStack_38,param_2);
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1007b5ab0; end: 1007b5abf;  */

void FUN_1007b5ab0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1007b5ac0; end: 1007b5b13;  */

void FUN_1007b5ac0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b5b14; end: 1007b5b1f;  */

/* WARNING: Possible PIC construction at 0x0001007b5ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007b5bac) */

void FUN_1007b5b14(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(auStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001005b7248();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  func_0x0001007b7d14(0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uStack_50);
  return;
}



/* Entry: 1007b5b20; end: 1007b5bf3;  */

/* WARNING: Possible PIC construction at 0x0001007b5ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007b5bac) */

void FUN_1007b5b20(long param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  FUN_100083b20(auStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001005b7248();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = uStack_50;
  *(undefined8 *)(param_1 + 0x20) = uStack_58;
  func_0x0001007b7d14(0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uStack_50);
  return;
}



/* Entry: 1007b5bf4; end: 1007b5bfb;  */

void FUN_1007b5bf4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x90);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b5bfc; end: 1007b5c4f;  */

void FUN_1007b5bfc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x90);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b5c50; end: 1007b60eb;  */

void FUN_1007b5c50(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  func_0x0001005b70e4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174();
  uVar15 = uStack_d8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar16 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar16;
  FUN_1007b6618();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = uVar17;
  FUN_1007b6638(uVar17,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,
                uVar15,puVar2,puVar16);
  *(undefined8 *)(param_2 + 0x10) = uVar18;
  func_0x000107c6157c();
  FUN_1007b6828();
  func_0x000107c61574(uVar18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b60e8);
    (*pcVar1)();
  }
  *(undefined **)(param_2 + 0x90) = puVar2;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar16 != (undefined *)0x0) {
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    *(undefined **)(param_2 + 0x98) = puVar16;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b60ec);
  (*pcVar1)();
}



/* Entry: 1007b60ec; end: 1007b6127;  */

void FUN_1007b60ec(void)

{
  long unaff_x20;
  
  FUN_1007b5c50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1007b6128; end: 1007b612f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b6128(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6e50;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6e50);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007b61d4;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007b61d4:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6e50;
    FUN_1000285a8(0x112ed6e50,&UNK_10db01538);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad160;
      func_0x000107c610f8();
      func_0x000107c47458();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000040,0x800000010f142770);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b6294);
  (*pcVar1)();
}



/* Entry: 1007b6130; end: 1007b6293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b6130(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6e50;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6e50);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007b61d4;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007b61d4:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6e50;
    FUN_1000285a8(0x112ed6e50,&UNK_10db01538);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad160;
      func_0x000107c610f8();
      func_0x000107c47458();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000040,0x800000010f142770);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b6294);
  (*pcVar1)();
}



/* Entry: 1007b6294; end: 1007b6307; -[SCMainCameraScopedLensesOnCameraServices initWithLensesOnCameraServices:] */

undefined1 * FUN_1007b6294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112703d98;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007b6308; end: 1007b630f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b6308(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6d48;
    uVar5 = 0;
    FUN_1000285a8(0x112ed6d48);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007b63b4;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007b63b4:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6d48;
    FUN_1000285a8(0x112ed6d48,&UNK_10db01430);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6d08(0);
      func_0x000107c610f8();
      FUN_1007b64d4(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000043,0x800000010f142460);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b6478);
  (*pcVar1)();
}



/* Entry: 1007b6310; end: 1007b6477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b6310(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6d48;
    uVar5 = 0;
    FUN_1000285a8(0x112ed6d48);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007b63b4;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007b63b4:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6d48;
    FUN_1000285a8(0x112ed6d48,&UNK_10db01430);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6d08(0);
      func_0x000107c610f8();
      FUN_1007b64d4(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000043,0x800000010f142460);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b6478);
  (*pcVar1)();
}



/* Entry: 1007b6478; end: 1007b647f;  */

void FUN_1007b6478(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b6480; end: 1007b64d3;  */

void FUN_1007b6480(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b64d4; end: 1007b64df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b64d4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fa41e8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007b64e0; end: 1007b6533;  */

void FUN_1007b64e0(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007b6534; end: 1007b655f;  */

void FUN_1007b6534(undefined8 *param_1,undefined8 param_2)

{
  FUN_1005b5f84();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 1007b6560; end: 1007b6617; -[_TtC16ARBarIntegration24ARBarPluginScopeServices init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b6560(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f9fae8;
  FUN_1000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  uVar3 = 1;
  FUN_10008747c();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lVar1 = _DAT_112f9faf0;
  FUN_1000285a8(0x112f9f198,&UNK_10dc14d10);
  func_0x000107c613fc();
  uVar3 = 1;
  FUN_10008747c();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007b6618; end: 1007b6637;  */

void FUN_1007b6618(void)

{
  func_0x000107c61168(&PTR_PTR_112fa02b0);
  return;
}



/* Entry: 1007b6638; end: 1007b681f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b6638(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  undefined8 uVar1;
  
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + _DAT_113034fe0);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  uVar1 = *(undefined8 *)(param_3 + _DAT_113038630);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  uVar1 = param_10;
  func_0x000107c4b5c4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x60) = *(undefined8 *)(param_11 + _DAT_112fa41e8);
  func_0x000107c61174();
  uVar1 = param_12;
  func_0x000107c4ae78();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_12);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_15;
  *(undefined8 *)(unaff_x20 + 0x80) = param_16;
  *(undefined8 *)(unaff_x20 + 0x88) = param_14;
  return;
}



/* Entry: 1007b6820; end: 1007b6827; -[SCMainCameraScopedLensesOnCameraServices lensesOnCameraServices] */

undefined8 FUN_1007b6820(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007b6828; end: 1007b6d9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b6828(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long unaff_x20;
  undefined8 uVar21;
  long lVar22;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  FUN_1000285a8(0x112d5a5f8,&UNK_10d921380);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_1000bda74();
  func_0x000107c61170(uVar1);
  lVar22 = *(long *)(unaff_x20 + 0x88);
  uVar21 = *(undefined8 *)(lVar22 + _DAT_112f9faf0);
  FUN_1000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar21);
  uVar3 = 1;
  FUN_10008747c();
  uVar1 = 0x112fa0248;
  FUN_1000285a8(0x112fa0248,&UNK_10dc151e0);
  func_0x000107c613fc();
  FUN_1000c2754();
  puVar4 = &UNK_11069ad58;
  func_0x000107c613fc(&UNK_11069ad58,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uVar8 = 0x112d53a70;
  FUN_1000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  puVar5 = &UNK_1038237e0;
  FUN_1000bdd8c(&UNK_1038237e0,puVar4,uVar8);
  puVar4 = &UNK_11069ad80;
  func_0x000107c613fc(&UNK_11069ad80,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar21;
  *(undefined **)(puVar4 + 0x18) = puVar5;
  FUN_1000285a8(0x112fa0250,&UNK_10dc151f0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(puVar5);
  puVar6 = &UNK_103823850;
  FUN_1000bdd8c(&UNK_103823850,puVar4);
  puVar7 = puVar6;
  FUN_1007b6e5c();
  uVar8 = 0x112f9fad8;
  FUN_1000285a8(0x112f9fad8,&UNK_10dc15650);
  puVar4 = &UNK_103827568;
  FUN_1000d5158(&UNK_103827568,0,uVar8);
  uVar8 = 0;
  FUN_1007b706c(0);
  puVar9 = &UNK_10382777c;
  FUN_10068b194(&UNK_10382777c,0,uVar8);
  func_0x000107c61574(puVar4);
  uStack_90 = 0;
  puVar10 = &uStack_90;
  FUN_1006c71a4();
  func_0x000107c61574(puVar9);
  puVar11 = puVar6;
  FUN_1007b70c4(puVar6,puVar7,puVar10);
  uVar12 = uVar3;
  FUN_1007b7448(uVar3,puVar7,puVar11);
  FUN_1000285a8(0x112fa0258,&UNK_10dc15200);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar11);
  puVar4 = &UNK_10382404c;
  FUN_1000bdd8c(&UNK_10382404c,puVar11);
  uVar8 = 0x112fa0260;
  FUN_1000285a8(0x112fa0260,&UNK_10dc15208);
  puVar9 = &UNK_1038238dc;
  FUN_1000cb480(&UNK_1038238dc,0,uVar8);
  puVar13 = &UNK_11069ada8;
  func_0x000107c613fc(&UNK_11069ada8,0x40,7);
  *(long *)(puVar13 + 0x10) = lVar22;
  *(undefined **)(puVar13 + 0x18) = puVar6;
  *(undefined **)(puVar13 + 0x20) = puVar9;
  *(undefined8 *)(puVar13 + 0x28) = uVar3;
  *(undefined8 *)(puVar13 + 0x30) = uVar1;
  *(undefined8 *)(puVar13 + 0x38) = uVar2;
  FUN_1000285a8(0x112f421e0,&UNK_10db8f110);
  func_0x000107c613fc();
  func_0x000107c61174(lVar22);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  puVar9 = &UNK_103824054;
  FUN_1000bdd8c(&UNK_103824054,puVar13);
  FUN_1007b76bc();
  uVar8 = 0;
  FUN_1002ed07c(0);
  puVar13 = &UNK_103823a9c;
  FUN_1000bfde0(&UNK_103823a9c,0,uVar8);
  puVar14 = puVar13;
  FUN_1004575f0();
  func_0x000107c61574(puVar13);
  FUN_1004575f0();
  puVar15 = puVar13;
  FUN_1003a5b88();
  puVar16 = puVar15;
  FUN_1003a5b88();
  puVar17 = PTR_PTR_1126ad778;
  func_0x000107c610f8();
  func_0x000107c45778();
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar16);
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x78));
  uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130354a0);
  func_0x000107c61174();
  uVar8 = 0x112fa0268;
  FUN_1000285a8(0x112fa0268,&UNK_10dc159f0);
  puVar13 = &UNK_103823940;
  FUN_1000cb480(&UNK_103823940,0,uVar8);
  lVar19 = 0;
  func_0x0001005b7104();
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  lVar22 = lVar19;
  func_0x000107c610f8();
  *(undefined8 *)(lVar22 + _DAT_112f9f6d8) = uVar18;
  *(undefined **)(lVar22 + _DAT_112f9f6e0) = puVar13;
  FUN_1007b7bf0(&uStack_90,lVar22 + _DAT_112f9f6e8);
  plVar20 = &lStack_a0;
  lStack_a0 = lVar22;
  lStack_98 = lVar19;
  func_0x000107c61154(plVar20,PTR_s_init_1125d9248);
  func_0x0001007b7c40(&uStack_90);
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar9);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(plVar20);
  return;
}



/* Entry: 1007b6da0; end: 1007b6e5b;  */

void FUN_1007b6da0(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b6e5c; end: 1007b701b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b6e5c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  lVar7 = *(long *)(unaff_x20 + 0x48);
  lVar1 = *(long *)(lVar7 + _DAT_113081210);
  func_0x000107c3f238();
  func_0x000107c61180();
  lVar6 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar6 != 0) {
    func_0x000107c5ae94(lVar6);
    func_0x000107c615e8(lVar6);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar2 = &UNK_11069ae88;
  func_0x000107c613fc(&UNK_11069ae88,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  FUN_1000285a8(0x112fa03b8,&UNK_10dc152f8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar8);
  puVar3 = &UNK_103824150;
  FUN_1000bdd8c(&UNK_103824150,puVar2);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar2 = &UNK_11069aeb0;
  func_0x000107c613fc(&UNK_11069aeb0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  FUN_1000285a8(0x112fa03c0,&UNK_10dc15300);
  func_0x000107c613fc();
  func_0x000107c61174(uVar8);
  puVar4 = &UNK_103824158;
  FUN_1000bdd8c(&UNK_103824158,puVar2);
  puVar2 = &UNK_11069aed8;
  func_0x000107c613fc(&UNK_11069aed8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar7;
  FUN_1000285a8(0x112ef0700,&UNK_10db20570);
  func_0x000107c613fc();
  func_0x000107c61174(lVar7);
  puVar5 = &UNK_103824160;
  FUN_1000bdd8c(&UNK_103824160,puVar2);
  lVar6 = 0;
  FUN_1007b704c();
  func_0x000107c613fc();
  *(undefined **)(lVar6 + 0x10) = puVar3;
  *(undefined **)(lVar6 + 0x18) = puVar4;
  *(undefined **)(lVar6 + 0x20) = puVar5;
  return;
}



/* Entry: 1007b701c; end: 1007b703f;  */

void FUN_1007b701c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b7040; end: 1007b7047;  */

void FUN_1007b7040(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b7048; end: 1007b704b; -[SCCameraSwitcherConfigurationImpl showLensARBarOverSwitcher] */

void FUN_1007b7048(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 1007b704c; end: 1007b706b;  */

void FUN_1007b704c(void)

{
  func_0x000107c61168(&PTR_PTR_112f9fd60);
  return;
}



/* Entry: 1007b706c; end: 1007b707f;  */

void FUN_1007b706c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11069a1e0;
  if (lRam0000000112f9f1c0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f9f1c0 = param_1;
  }
  return;
}



/* Entry: 1007b7080; end: 1007b70c3;  */

void FUN_1007b7080(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1007b70c4; end: 1007b720f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b70c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x48) + _DAT_113081210);
  uVar6 = param_2;
  uVar8 = param_3;
  func_0x000107c3f238();
  bVar7 = (byte)uVar8;
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  uVar2 = (undefined4)lVar3;
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = lVar4;
    func_0x000107c5ae94();
    uVar1 = (undefined1)lVar3;
    func_0x000107c615e8();
    uVar2 = (undefined4)lVar4;
  }
  FUN_1007b724c();
  puVar5 = &UNK_11069ae38;
  func_0x000107c613fc(&UNK_11069ae38,0x50,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  puVar5[0x18] = (byte)uVar2 & 1;
  puVar5[0x19] = (byte)((uint)uVar2 >> 8) & 1;
  puVar5[0x1a] = (byte)((uint)uVar2 >> 0x10) & 1;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  puVar5[0x28] = bVar7 & 1;
  *(undefined8 *)(puVar5 + 0x30) = param_4;
  *(undefined8 *)(puVar5 + 0x38) = param_2;
  puVar5[0x40] = uVar1;
  *(undefined8 *)(puVar5 + 0x48) = param_3;
  FUN_1000285a8(0x112fa03b0,&UNK_10dc152f0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000bdd8c(&UNK_1038240cc,puVar5);
  return;
}



/* Entry: 1007b7210; end: 1007b724b;  */

void FUN_1007b7210(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b724c; end: 1007b73e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1007b724c(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *unaff_x20;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar9 = *unaff_x20;
  lVar2 = *(long *)(unaff_x20[9] + _DAT_113081210);
  func_0x000107c3f238();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  uVar1 = (uint)lVar2;
  if (lVar3 == 0) {
    func_0x00010389ff0c();
    uVar7 = uVar1 >> 8 & 1;
    uVar5 = uVar1 & 0x10000;
    uVar1 = uVar1 & 1;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20[7] + _DAT_1130813f0);
    func_0x000107c6157c(uVar8);
    FUN_1000d224c(auStack_68);
    func_0x000107c61574(uVar8);
    func_0x0001007b73f4(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 0x120))(uStack_50,lStack_48);
    func_0x0001000834e4(auStack_68);
    uVar8 = *(undefined8 *)(unaff_x20[8] + _DAT_113036498);
    puVar4 = &UNK_11069ae60;
    func_0x000107c613fc(&UNK_11069ae60,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar9;
    func_0x000107c6157c(uVar8);
    FUN_1000cb480(&UNK_103824114,puVar4,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar8);
    func_0x000107c61574(puVar4);
    lVar2 = lVar3;
    func_0x000107c5ae94();
    uVar7 = (uint)lVar2;
    func_0x000107c615e8(lVar3);
    uVar5 = 0;
    uVar1 = 1;
  }
  uVar6 = 0x100;
  if (uVar7 == 0) {
    uVar6 = 0;
  }
  return uVar6 | uVar1 | uVar5;
}



/* Entry: 1007b73e4; end: 1007b7417;  */

void FUN_1007b73e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b7418; end: 1007b7447;  */

void FUN_1007b7418(void)

{
  FUN_100029b9c(2,0x10,0,0);
  return;
}



/* Entry: 1007b7448; end: 1007b7643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1007b7448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  func_0x000107c4c15c(uVar2);
  func_0x000107c61180();
  lVar4 = _DAT_1130766b8;
  lVar8 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar8 + _DAT_1130766b8,auStack_78,0,0);
  uVar3 = lVar8 + lVar4;
  func_0x000107c61618();
  if (uVar3 != 0) {
    uVar9 = uVar3;
    func_0x000107c61150();
    if ((uVar9 & 1) != 0) {
      uVar9 = uVar3;
      func_0x000107c437a8();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      goto LAB_1007b7500;
    }
    func_0x000107c61170(uVar3);
  }
  uVar9 = 0;
LAB_1007b7500:
  lVar8 = *(long *)(*(long *)(unaff_x20 + 0x48) + _DAT_113081210);
  func_0x000107c3f238();
  func_0x000107c61180();
  lVar4 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    lVar8 = lVar4;
    func_0x000107c5ae94();
    uVar1 = (undefined1)lVar8;
    func_0x000107c615e8(lVar4);
  }
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_1130813f0);
  puVar5 = &UNK_11069ade8;
  func_0x000107c613fc(&UNK_11069ade8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,uVar2);
  puVar6 = &UNK_11069ae10;
  func_0x000107c613fc(&UNK_11069ae10,0x48,7);
  puVar6[0x10] = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  *(undefined8 *)(puVar6 + 0x28) = param_3;
  *(undefined8 *)(puVar6 + 0x30) = param_1;
  *(undefined8 *)(puVar6 + 0x38) = param_2;
  *(ulong *)(puVar6 + 0x40) = uVar9;
  FUN_1000285a8(0x112fa03a0,&UNK_10dc152e0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  puVar5 = &UNK_1038240b0;
  FUN_1000bdd8c(&UNK_1038240b0,puVar6);
  func_0x000107c61170(uVar2);
  return puVar5;
}



/* Entry: 1007b7644; end: 1007b76b3;  */

void FUN_1007b7644(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b76b4; end: 1007b76bb; -[SCMainCameraPresentationServices mainCameraScreenUIContainers] */

undefined8 FUN_1007b76b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007b76bc; end: 1007b77bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b76bc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x60) + _DAT_112fa42a8);
  func_0x000107c6157c(uVar3);
  FUN_1000d224c(auStack_68);
  func_0x000107c61574(uVar3);
  func_0x0001007b73f4(auStack_68,uStack_50);
  uVar3 = uStack_50;
  (**(code **)(lStack_48 + 8))(uStack_50,lStack_48);
  lVar1 = 0;
  FUN_1007b7870();
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  func_0x000107c6157c(param_1);
  func_0x0001000834e4(auStack_68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
  *(long *)(unaff_x20 + 0x90) = lVar1;
  func_0x000107c6157c(lVar1);
  func_0x000107c61574(uVar3);
  FUN_1007b7890();
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 1007b77bc; end: 1007b7827;  */

void FUN_1007b77bc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  FUN_10062bfa8();
  func_0x000107c613fc();
  uVar2 = 0x112de1320;
  FUN_1000285a8(0x112de1320,&UNK_10d9a8f20);
  func_0x000107c613fc();
  FUN_1000c2754();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007b7828; end: 1007b7863;  */

void FUN_1007b7828(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_10062bfa8();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110659ca0;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 1007b7864; end: 1007b786f;  */

void FUN_1007b7864(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 1007b7870; end: 1007b788f;  */

void FUN_1007b7870(void)

{
  func_0x000107c61168(&PTR_PTR_112fa3338);
  return;
}



/* Entry: 1007b7890; end: 1007b796b;  */

/* WARNING: Possible PIC construction at 0x0001007b78d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007b7920: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007b78d4) */
/* WARNING: Removing unreachable block (ram,0x0001007b7924) */

void FUN_1007b7890(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1007b796c; end: 1007b798f;  */

void FUN_1007b796c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b7990; end: 1007b79fb;  */

void FUN_1007b7990(void)

{
  long unaff_x20;
  
  FUN_100087bd4(0x1007b7ae0);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1007b79fc; end: 1007b7ac7;  */

void FUN_1007b79fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x18,auStack_68,1,0);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 != 0) {
    func_0x000107c61434(lVar4);
    plVar6 = (long *)(lVar4 + 0x28);
    do {
      lVar1 = plVar6[-1];
      lVar2 = *plVar6;
      lVar3 = lVar1;
      func_0x000107c614f0(lVar1);
      pcVar7 = *(code **)(lVar2 + 8);
      func_0x000107c615f0(lVar1);
      (*pcVar7)(lVar3,lVar2);
      func_0x000107c615e8(lVar1);
      plVar6 = plVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    func_0x000107c6142c(lVar4);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(undefined **)(param_1 + 0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 1007b7ac8; end: 1007b7af3;  */

void FUN_1007b7ac8(void)

{
  FUN_1007b79fc();
  return;
}



/* Entry: 1007b7af4; end: 1007b7bef; -[SCARBarServices initWithArBarVisibilityObservable:arBarEventsObservable:arBar:arBarOverlayPresenter:] */

undefined1 *
FUN_1007b7af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112701c48;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007b7bf0; end: 1007b7c87;  */

undefined8 FUN_1007b7bf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f9f2c0;
  FUN_1000285a8(0x112f9f2c0,&UNK_10dc14850);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1007b7c88; end: 1007b7d33;  */

void FUN_1007b7c88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b7d34; end: 1007b8003;  */

void FUN_1007b7d34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  puVar6 = &UNK_11069abc8;
  puVar1 = puVar6;
  func_0x000107c613fc(&UNK_11069abc8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  uVar2 = 0x112d382e8;
  FUN_1000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar3 = FUN_1007d25b0;
  FUN_1000bdd8c(FUN_1007d25b0,puVar1);
  puVar1 = &UNK_11069abf0;
  func_0x000107c613fc(&UNK_11069abf0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uVar4 = 0x112f0fc20;
  FUN_1000285a8(0x112f0fc20,&UNK_10dc15150);
  func_0x000107c613fc();
  puVar5 = &UNK_103821f98;
  FUN_1000bdd8c(&UNK_103821f98,puVar1,uVar4);
  FUN_1000285a8(0x112d53860,&UNK_10d92b600);
  func_0x000107c3e0c0(param_1);
  func_0x000107c61180();
  uVar4 = param_1;
  func_0x0001000b637c();
  func_0x000107c61170(param_1);
  puVar1 = &UNK_103821e70;
  FUN_1000bfde0(&UNK_103821e70,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar4);
  func_0x000107c613fc(&UNK_11069abc8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,param_2);
  func_0x000107c61170(param_2);
  func_0x000107c613fc(uVar2,0x18,7);
  puVar7 = &UNK_103821fa0;
  FUN_1000bdd8c(&UNK_103821fa0,puVar6,uVar2);
  puVar6 = &UNK_11069ac18;
  func_0x000107c613fc(&UNK_11069ac18,0x30,7);
  *(code **)(puVar6 + 0x10) = pcVar3;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(undefined **)(puVar6 + 0x20) = puVar1;
  *(undefined **)(puVar6 + 0x28) = puVar7;
  FUN_1000285a8(0x112fa0188,&UNK_10dc15160);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar7);
  uVar2 = 0x1007d240c;
  FUN_1000bdd8c(0x1007d240c,puVar6);
  uVar4 = 0x112fa0190;
  FUN_1000285a8(0x112fa0190,&UNK_10dc156d0);
  uVar8 = 0x1007d2760;
  FUN_1000cb480(0x1007d2760,0,uVar4);
  uVar4 = uVar8;
  FUN_1003a5b88();
  func_0x000107c61574(uVar8);
  puVar6 = PTR_PTR_1126ad770;
  func_0x000107c610f8();
  func_0x000107c45768();
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return;
}



/* Entry: 1007b8004; end: 1007b805b;  */

undefined8 FUN_1007b8004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1007b7d34(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1007b805c; end: 1007b8063; -[SCARBarServices arBarVisibilityObservable] */

undefined8 FUN_1007b805c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1007b8064; end: 1007b80d7; -[SCARBarAdapterServices initWithArBarAdapter:] */

undefined1 * FUN_1007b8064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8568;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007b80d8; end: 1007b80db;  */

void FUN_1007b80d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b80dc; end: 1007b810f;  */

void FUN_1007b80dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b8110; end: 1007b8117; -[SCARBarServices arBar] */

undefined8 FUN_1007b8110(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007b8118; end: 1007b8133; -[SCCameraConfigurationImpl miniCarouselConfig] */

undefined8 FUN_1007b8118(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1007b8134; end: 1007b813b; -[SCLensesOnCameraServices lensesCameraCapturerStateUpdatesProvider] */

undefined8 FUN_1007b8134(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007b813c; end: 1007b898f; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow initWithPrivateFeatureContainer:cameraUIScope:mainCameraScope:cameraUIServices:swipeViewParentDelegate:applicationLifecycleEvents:userSession:navigationServices:lensFavoritesServices:lensFavoritesNotificationService:lensContentServices:lensFavoritesLoggingServices:lensPickerServices:networkImageServices:footerItem:currentPageTracker:grapheneRegistry:lensExplorerBadgeServices:lensPerformerServices:lensLoggerServices:featureSettingsService:lensUserProviderServices:lensExplorerConfigurableNavigatonServices:lensExplorerNavigatonServices:lensExplorerDataServices:lensUnlockServices:locationProvider:userNetworkServices:lensMediaDownloaderFactory:userStorageServices:lensExplorerStudySettingsServices:lensCarouselStudySettingsServices:lensCarouselConfigProvider:cameraHardwareResource:lensPreferences:deeplinkSendToScopeExposer:offPlatformLinkGenerationService:userInfoServices:arBarAdapterServices:arBar:miniCarouselConfig:cameraCircumstanceEngineServices:circumstanceEngine:lensCarouselManager:lazyLensCarouselManager:lensCollectionTabBarObserver:batchCaptureConfig:plusSubscribeScopeExposer:lensInfoButtonVisibility:lensesCameraCapturerStateUpdatesProvider:cameraModeActivationServices:] */

undefined8 *
FUN_1007b813c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_43);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_47);
  func_0x000107c61174(param_48);
  func_0x000107c61174(param_49);
  func_0x000107c61174(param_50);
  func_0x000107c61174(param_51);
  func_0x000107c61174(param_52);
  func_0x000107c61174(param_53);
  puStack_70 = PTR_PTR_1126f0298;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 1,param_4);
    func_0x000107c611a0(puVar1 + 0x21,param_5);
    func_0x000107c611a0(puVar1 + 0x22,param_7);
    func_0x000107c611a0(puVar1 + 3,param_8);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 5,param_9);
    func_0x000107c611a0(puVar1 + 6,param_3);
    func_0x000107c611a0(puVar1 + 7,param_11);
    func_0x000107c611a0(puVar1 + 8,param_12);
    func_0x000107c611a0(puVar1 + 9,param_13);
    func_0x000107c611a0(puVar1 + 10,param_14);
    func_0x000107c611a0(puVar1 + 0xb,param_15);
    func_0x000107c611a0(puVar1 + 0xc,param_16);
    func_0x000107c611a0(puVar1 + 0xd,param_17);
    func_0x000107c611a0(puVar1 + 0xe,param_19);
    func_0x000107c611a0(puVar1 + 0xf,param_20);
    func_0x000107c611a0(puVar1 + 0x10,param_21);
    func_0x000107c611a0(puVar1 + 0x14,param_22);
    func_0x000107c611a0(puVar1 + 0x15,param_23);
    func_0x000107c611a0(puVar1 + 0x16,param_24);
    func_0x000107c611a0(puVar1 + 0x11,param_25);
    func_0x000107c611a0(puVar1 + 0x12,param_26);
    func_0x000107c611a0(puVar1 + 0x13,param_27);
    func_0x000107c611a0(puVar1 + 0x17,param_28);
    func_0x000107c611a0(puVar1 + 0x18,param_29);
    func_0x000107c611a0(puVar1 + 2,param_6);
    func_0x000107c611a0(puVar1 + 0x19,param_30);
    func_0x000107c611a0(puVar1 + 0x1a,param_31);
    func_0x000107c611a0(puVar1 + 0x1b,param_32);
    func_0x000107c611a0(puVar1 + 0x1c,param_33);
    func_0x000107c611a0(puVar1 + 0x1d,param_34);
    func_0x000107c611a0(puVar1 + 0x1e,param_35);
    func_0x000107c61174(param_36);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_36;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x1f,param_37);
    func_0x000107c611a0(puVar1 + 0x23,param_38);
    func_0x000107c61174(param_39);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_39;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x24,param_40);
    func_0x000107c611a0(puVar1 + 0x25,param_41);
    func_0x000107c611a0(puVar1 + 0x27,param_43);
    func_0x000107c611a0(puVar1 + 0x28,param_44);
    func_0x000107c61174(param_45);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_45;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_18);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x2a,param_46);
    func_0x000107c611a0(puVar1 + 0x2b,param_47);
    func_0x000107c61174(param_48);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_48;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_49);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_49;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x30,param_50);
    func_0x000107c611a0(puVar1 + 0x26,param_42);
    func_0x000107c61174(param_51);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_51;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_52);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_52;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x33,param_53);
    func_0x000107c61170(param_18);
  }
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007b8990; end: 1007b8b23;  */

void FUN_1007b8990(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b8b24; end: 1007b9163;  */

void FUN_1007b8b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112eef830,&UNK_10db202b0);
  puVar1 = &UNK_11059d118;
  func_0x000107c613fc(&UNK_11059d118,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_11;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_9;
  *(undefined8 *)(puVar1 + 0x48) = param_10;
  *(undefined8 *)(puVar1 + 0x50) = param_13;
  *(undefined8 *)(puVar1 + 0x58) = param_4;
  *(undefined8 *)(puVar1 + 0x60) = param_15;
  *(undefined8 *)(puVar1 + 0x68) = param_16;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_2;
  *(undefined8 *)(puVar1 + 0x80) = param_3;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_12;
  func_0x000107c6157c();
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_12);
  FUN_1000823a8(0x1007b8cb4,puVar1);
  return;
}



/* Entry: 1007b9164; end: 1007b916b;  */

void FUN_1007b9164(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b916c; end: 1007b91bf;  */

void FUN_1007b916c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b91c0; end: 1007b91c7;  */

void FUN_1007b91c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_100342c28();
  func_0x000107c613fc();
  FUN_1007b9244(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b91c8; end: 1007b923b;  */

void FUN_1007b91c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_100342c28();
  func_0x000107c613fc();
  FUN_1007b9244(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1007b923c; end: 1007b9243;  */

void FUN_1007b923c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1007b9244; end: 1007b93d7;  */

void FUN_1007b9244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  FUN_1000285a8(0x112f1b250,&UNK_10db53c18);
  func_0x000107c610f8();
  uVar2 = param_2;
  func_0x000107c6157c(param_2);
  FUN_10017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ac550;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f10e4d0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar4;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1007b93d8; end: 1007b94bb; -[SCScanServiceProvider provide] */

void FUN_1007b93d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126cd538;
  func_0x000107c610f4(PTR_PTR_1126cd538);
  func_0x000107c48490();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007b94bc; end: 1007b952f; -[SCScanServices initWithScanScopeLauncher:] */

undefined1 * FUN_1007b94bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126ff2e0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007b9530; end: 1007b955b;  */

void FUN_1007b9530(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b955c; end: 1007b9563; -[SCPerceptionConfigurationServices scanConfiguration] */

undefined8 FUN_1007b955c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1007b9564; end: 1007b956b; -[SCPerceptionConfigurationServices snapcodesConfiguration] */

undefined8 FUN_1007b9564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1007b956c; end: 1007b957b; -[SCPerceptionConfigurationServices realTimeScanConfiguration] */

undefined8 FUN_1007b956c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1007b957c; end: 1007b96df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b957c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6dc0;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6dc0);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007b9620;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007b9620:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6dc0;
    FUN_1000285a8(0x112ed6dc0,&UNK_10db014a8);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad140;
      func_0x000107c610f8();
      func_0x000107c48280();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000046,0x800000010f142540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b96e0);
  (*pcVar1)();
}



/* Entry: 1007b96e0; end: 1007b96e7;  */

void FUN_1007b96e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b96e8; end: 1007b973b;  */

void FUN_1007b96e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b973c; end: 1007b97af; -[SCMainCameraScopedRealTimeScanLoggingServices initWithRealTimeScanLoggingServices:] */

undefined1 * FUN_1007b973c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4f28;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007b97b0; end: 1007b97bf; -[SCMainCameraScopedRealTimeScanLoggingServices realTimeScanLoggingServices] */

undefined8 FUN_1007b97b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007b97c0; end: 1007b9813;  */

void FUN_1007b97c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b9814; end: 1007b981b;  */

void FUN_1007b9814(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_100203214();
  func_0x000107c613fc();
  FUN_1007b9890(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007b981c; end: 1007b988f;  */

void FUN_1007b981c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_100203214();
  func_0x000107c613fc();
  FUN_1007b9890(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1007b9890; end: 1007b99f3;  */

void FUN_1007b9890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8350;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1007b99f4; end: 1007b9ad7; -[SCPerceptionFeatureSettingsServiceProvider provide] */

void FUN_1007b99f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bc0d8;
  func_0x000107c610f4(PTR_PTR_1126bc0d8);
  func_0x000107c4848c();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007b9ad8; end: 1007b9b4b; -[SCPerceptionFeatureSettingsServices initWithScanFromLensFeatureSettings:] */

undefined1 * FUN_1007b9ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701ef0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007b9b4c; end: 1007b9b77;  */

void FUN_1007b9b4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007b9b78; end: 1007b9b7f; -[SCPerceptionFeatureSettingsServices scanFromLensFeatureSettings] */

undefined8 FUN_1007b9b78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007b9b80; end: 1007b9b87; -[SCPercMLModelServices modelProvider] */

undefined8 FUN_1007b9b80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007b9b88; end: 1007b9c0f;  */

void FUN_1007b9b88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112ef07f8;
  FUN_1000285a8(0x112ef07f8,&UNK_10db20728);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1007b9c10; end: 1007b9c17;  */

void FUN_1007b9c10(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1007b9c18; end: 1007b9c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b9c18(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1005b70c4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f1ea00) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1007b9c80; end: 1007b9c8f;  */

/* WARNING: Possible PIC construction at 0x0001007b9d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007b9d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007b9d40) */
/* WARNING: Removing unreachable block (ram,0x0001007b9d50) */

void FUN_1007b9c80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_1105a1b80;
  func_0x000107c613fc(&UNK_1105a1b80,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112ef6aa8;
  FUN_1000285a8(0x112ef6aa8,&UNK_10db25280);
  func_0x000107c613fc();
  puVar6 = &UNK_102b58b34;
  FUN_1000841f8(&UNK_102b58b34,puVar4,uVar5);
  FUN_100084214(&UNK_10db25250,0x2a,2);
  *param_1 = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1007b9c90; end: 1007b9d73;  */

/* WARNING: Possible PIC construction at 0x0001007b9d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007b9d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007b9d40) */
/* WARNING: Removing unreachable block (ram,0x0001007b9d50) */

void FUN_1007b9c90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1105a1b80;
  func_0x000107c613fc(&UNK_1105a1b80,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0x112ef6aa8;
  FUN_1000285a8(0x112ef6aa8,&UNK_10db25280);
  func_0x000107c613fc();
  puVar3 = &UNK_102b58b34;
  FUN_1000841f8(&UNK_102b58b34,puVar1,uVar2);
  FUN_100084214(&UNK_10db25250,0x2a,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1007b9d74; end: 1007b9d7b;  */

void FUN_1007b9d74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


