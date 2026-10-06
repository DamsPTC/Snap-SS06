/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102fbd904; end: 102fbd92b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fbd904(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x20) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x20) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102fbd92c; end: 102fbd9f3;  */

undefined8 * FUN_102fbd92c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  uVar2 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 102fbd9f4; end: 102fbda47;  */

undefined8 * FUN_102fbd9f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[3];
  uVar1 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 102fbda48; end: 102fbdafb;  */

int FUN_102fbda48(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102fbdafc; end: 102fbdbfb;  */

void FUN_102fbdafc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2e888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db72ec4;
  func_0x000107c61520(&DAT_10db72ec4,&UNK_1105f73e0);
  puRam0000000112f2e888 = puVar1;
  return;
}



/* Entry: 102fbdbfc; end: 102fbdc73;  */

undefined8 FUN_102fbdbfc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102fbdc74; end: 102fbdcdf;  */

void FUN_102fbdc74(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102fbdce0; end: 102fbdd4f;  */

undefined8 FUN_102fbdce0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x0001000c6518(param_2,*(undefined8 *)(param_2 + 0x18));
  func_0x000102fc08dc(param_1,lVar1,param_3);
  func_0x0001000834e4(param_2);
  return param_1;
}



/* Entry: 102fbdd50; end: 102fbe1e3;  */

/* WARNING: Possible PIC construction at 0x000102fbdd98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fbddb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fbde94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fbdea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fbdeac) */
/* WARNING: Removing unreachable block (ram,0x000102fbde98) */
/* WARNING: Removing unreachable block (ram,0x000102fbddb8) */
/* WARNING: Removing unreachable block (ram,0x000102fbdef0) */
/* WARNING: Removing unreachable block (ram,0x000102fbddd4) */
/* WARNING: Removing unreachable block (ram,0x000102fbdf40) */
/* WARNING: Removing unreachable block (ram,0x000102fbdf48) */
/* WARNING: Removing unreachable block (ram,0x000102fbddf0) */
/* WARNING: Removing unreachable block (ram,0x000102fbddf8) */
/* WARNING: Removing unreachable block (ram,0x000102fbde04) */
/* WARNING: Removing unreachable block (ram,0x000102fbde14) */
/* WARNING: Removing unreachable block (ram,0x000102fbdf14) */
/* WARNING: Removing unreachable block (ram,0x000102fbdf1c) */
/* WARNING: Removing unreachable block (ram,0x000102fbdf24) */
/* WARNING: Removing unreachable block (ram,0x000102fbdf28) */
/* WARNING: Removing unreachable block (ram,0x000102fbdea0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x000102fbde28) */
/* WARNING: Removing unreachable block (ram,0x000102fbdd9c) */
/* WARNING: Removing unreachable block (ram,0x000102fbded4) */
/* WARNING: Removing unreachable block (ram,0x000102fbdda0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_102fbdd50(undefined8 param_1)

{
  func_0x000107c40414();
  func_0x000107c61180();
  func_0x000107c4b828();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fbe1e4; end: 102fbe1fb;  */

void FUN_102fbe1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fbe1fc,0,0);
  return;
}



/* Entry: 102fbe1fc; end: 102fbe2fb;  */

void FUN_102fbe1fc(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x22;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x20);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  if (uVar2 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0x20)) {
      uVar6 = *(ulong *)(unaff_x22 + 0x20);
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar8 = 0;
    lVar5 = *(long *)(unaff_x22 + 0x20);
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102fbe2b8);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(lVar5 + 0x20 + uVar8 * 8);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar8;
        func_0x000101a91cb4(uVar8,*(undefined8 *)(unaff_x22 + 0x20));
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102fbe2b4);
        (*pcVar3)();
      }
      func_0x000107c41f54(uVar7);
      func_0x000107c61170(uVar4);
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar6);
  }
  func_0x000107c615e8(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000102fbe2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fbe2fc; end: 102fbe377;  */

void FUN_102fbe2fc(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(long *)(unaff_x22 + 0x50) = param_3;
  *(long *)(unaff_x22 + 0x58) = param_4;
  *(long *)(unaff_x22 + 0x48) = param_2;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102fbe378;
  plVar1[5] = param_5;
  plVar1[6] = param_2;
  plVar1[3] = param_3;
  plVar1[4] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fbe5a8,0,0);
  return;
}



/* Entry: 102fbe378; end: 102fbe3c7;  */

void FUN_102fbe378(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fbe3c8,0,0);
  return;
}



/* Entry: 102fbe3c8; end: 102fbe58b;  */

void FUN_102fbe3c8(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  uVar11 = *(ulong *)(unaff_x22 + 0x88);
  if (uVar11 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar2 = uVar11;
    }
    func_0x000107c60480();
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  if ((long)uVar2 < 1) {
    func_0x000107c6142c(uVar13);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x0001000d224c(unaff_x22 + 0x40);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar3 = 0;
    func_0x00010401523c(0);
    func_0x000107c5fc48(uVar4,uVar3);
    uVar5 = 0;
    func_0x00010401525c(0);
    uVar3 = uVar13;
    func_0x000107c5fc48(uVar13,uVar5);
    FUN_102fbebb4(uVar6,uVar8,uVar1,uVar7);
    uVar7 = 0;
    func_0x000104015468(0);
    uVar8 = uVar6;
    func_0x000107c5fc48(uVar6,uVar7);
    func_0x000107c6142c(uVar6);
    puVar9 = &UNK_1105f7618;
    func_0x000107c613fc(&UNK_1105f7618,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar13;
    *(code **)(unaff_x22 + 0x30) = FUN_102fc0af4;
    *(undefined **)(unaff_x22 + 0x38) = puVar9;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f3aa0;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_1105f7630;
    lVar10 = unaff_x22 + 0x10;
    func_0x000107c60bc4(lVar10);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c4ebc4(uVar12);
    func_0x000107c60bd0(lVar10);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x000102fbe574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fbe58c; end: 102fbe5a7;  */

void FUN_102fbe58c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fbe5a8,0,0);
  return;
}



/* Entry: 102fbe5a8; end: 102fbea9f;  */

void FUN_102fbe5a8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x22;
  undefined *puVar19;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x18);
  func_0x000107c3ff08();
  func_0x000107c61180();
  uVar5 = 0;
  FUN_102fc10b8(0,0x112f2e9a8,&PTR_PTR_1126da910);
  uVar15 = uVar4;
  func_0x000107c5fc54(uVar4,uVar5);
  func_0x000107c61170(uVar4);
  if (uVar15 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar15 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar15) {
      uVar4 = uVar15;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar15);
  if (0 < (long)uVar4) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar13 = *(long *)(unaff_x22 + 0x30);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar2 = *(undefined8 *)(lVar13 + 0x30);
    lVar18 = *(long *)(lVar13 + 0x38);
    func_0x0001000a8868(lVar13 + 0x18,uVar2);
    (**(code **)(lVar18 + 8))(uVar17,uVar5,uVar2,lVar18);
  }
  puVar6 = *(undefined **)(unaff_x22 + 0x18);
  func_0x000107c3ff0c();
  func_0x000107c61180();
  puVar7 = (undefined *)0x0;
  FUN_102fc10b8(0,0x112e4b1e0,&PTR_PTR_1126da918);
  puVar8 = puVar6;
  func_0x000107c5fc54(puVar6,puVar7);
  func_0x000107c61170(puVar6);
  puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar19 = *(undefined **)(puVar6 + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar19 = puVar6;
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar19 = puVar8;
    }
    func_0x000107c60480();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
  if (puVar19 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar8 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar6 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102fbe8b4);
            (*pcVar3)();
          }
          puVar9 = *(undefined **)(puVar8 + (long)puVar11 * 8 + 0x20);
          func_0x000107c61174();
          puVar14 = puVar7;
        }
        else {
          puVar9 = puVar11;
          puVar14 = puVar8;
          FUN_102fc0404(puVar11,puVar8,&PTR_PTR_1126da918,0x112e4b1e0);
        }
        puVar1 = puVar11 + 1;
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102fbe8b0);
          (*pcVar3)();
        }
        puVar7 = puVar9;
        func_0x000107c5c3d8();
        func_0x000107c61180();
        if (puVar7 != (undefined *)0x0) break;
        func_0x000107c61170(puVar9);
        puVar7 = puVar14;
        puVar11 = puVar11 + 1;
        if (puVar1 == puVar19) goto LAB_102fbe8e8;
      }
      puVar11 = puVar7;
      func_0x000107c51fd8();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      puVar10 = puVar11;
      func_0x000107c5faec();
      func_0x000107c61170(puVar11);
      func_0x00010401525c();
      puVar7 = puVar9;
      func_0x000107c5bfec(puVar9);
      func_0x000107c61180();
      puVar11 = puVar7;
      func_0x000107c5c080();
      func_0x000107c61170(puVar7);
      puVar7 = puVar14;
      func_0x000104012720(puVar10,puVar14,puVar11);
      func_0x000107c61170(puVar9);
      func_0x000107c6142c(puVar14);
      puVar11 = puVar12;
      func_0x000107c61550();
      if ((((int)puVar11 == 0) || ((long)puVar12 < 0)) ||
         (puVar11 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar12 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar12) {
            puVar7 = puVar12;
          }
          func_0x000107c60480();
        }
        puVar7 = puVar7 + 1;
        puVar11 = (undefined *)0x0;
        FUN_102fbfa7c(0,puVar7,1,puVar12,FUN_102fbfbb4,FUN_102fbfccc);
      }
      uVar4 = (ulong)puVar11 & 0xffffffffffffff8;
      uVar15 = *(ulong *)(uVar4 + 0x10);
      puVar9 = (undefined *)(uVar15 + 1);
      puVar12 = puVar11;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar15) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
        puVar7 = puVar9;
        FUN_102fbfa7c(puVar12,puVar9,1,puVar11,FUN_102fbfbb4,FUN_102fbfccc);
        uVar4 = (ulong)puVar12 & 0xffffffffffffff8;
      }
      *(undefined **)(uVar4 + 0x10) = puVar9;
      *(undefined **)(uVar4 + uVar15 * 8 + 0x20) = puVar10;
      puVar11 = puVar1;
    } while (puVar1 != puVar19);
  }
LAB_102fbe8e8:
  uVar4 = *(ulong *)(unaff_x22 + 0x18);
  func_0x000107c6142c(puVar8);
  func_0x000107c3ff04();
  func_0x000107c61180();
  uVar5 = 0;
  FUN_102fc10b8(0,0x112e4b1d0,&PTR_PTR_1126da900);
  uVar15 = uVar4;
  func_0x000107c5fc54(uVar4,uVar5);
  func_0x000107c61170(uVar4);
  if (uVar15 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar15 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar15) {
      uVar4 = uVar15;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar15);
  if (0 < (long)uVar4) {
    uVar4 = *(ulong *)(unaff_x22 + 0x18);
    *(undefined **)(unaff_x22 + 0x10) = puVar12;
    func_0x000107c3ff04();
    func_0x000107c61180();
    uVar15 = uVar4;
    func_0x000107c5fc54();
    *(ulong *)(unaff_x22 + 0x38) = uVar15;
    func_0x000107c61170(uVar4);
    if (uVar15 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
      *(ulong *)(unaff_x22 + 0x40) = uVar4;
    }
    else {
      uVar4 = uVar15 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar15) {
        uVar4 = uVar15;
      }
      func_0x000107c60480();
      *(ulong *)(unaff_x22 + 0x40) = uVar4;
    }
    if (uVar4 != 0) {
      if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102fbeaa0);
        (*pcVar3)();
      }
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      uVar15 = *(ulong *)(unaff_x22 + 0x38);
      if ((uVar15 & 0xc000000000000001) == 0) {
        lVar13 = *(long *)(uVar15 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar13 = 0;
        FUN_102fc0404(0,uVar15,&PTR_PTR_1126da900,0x112e4b1d0);
      }
      *(long *)(unaff_x22 + 0x50) = lVar13;
      plVar16 = (long *)0x90;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x58) = plVar16;
      *plVar16 = unaff_x22;
      plVar16[1] = (long)FUN_102fbeaa0;
      lVar18 = *(long *)(unaff_x22 + 0x30);
      plVar16[0xf] = unaff_x22 + 0x10;
      plVar16[0x10] = lVar18;
      plVar16[0xe] = lVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102fbf2b0,0,0);
      return;
    }
    func_0x000107c6142c(uVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x000102fbea98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar12);
  return;
}



/* Entry: 102fbeaa0; end: 102fbeae7;  */

void FUN_102fbeaa0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fbeae8,0,0);
  return;
}



/* Entry: 102fbeae8; end: 102fbebb3;  */

void FUN_102fbeae8(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x48);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
  if (lVar1 + 1 == lVar4) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000102fbeb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x10));
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0x48) + 1;
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(ulong *)(unaff_x22 + 0x38);
  if ((uVar2 & 0xc000000000000001) == 0) {
    lVar1 = *(long *)(uVar2 + lVar1 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    FUN_102fc0404(lVar1,uVar2,&PTR_PTR_1126da900,0x112e4b1d0);
  }
  *(long *)(unaff_x22 + 0x50) = lVar1;
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102fbeaa0;
  lVar4 = *(long *)(unaff_x22 + 0x30);
  plVar3[0xf] = unaff_x22 + 0x10;
  plVar3[0x10] = lVar4;
  plVar3[0xe] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fbf2b0,0,0);
  return;
}



/* Entry: 102fbebb4; end: 102fbf203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102fbebb4(undefined *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *apuStack_90 [3];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c40414();
  func_0x000107c61180();
  puVar14 = param_1;
  func_0x000107c4fe40();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar14 != (undefined *)0x0) {
    uVar3 = 0;
    FUN_102fc10b8(0,0x112f2e980,&PTR_PTR_1126ba690);
    puVar7 = puVar14;
    func_0x000107c5fc54(puVar14,uVar3);
    func_0x000107c61170(puVar14);
  }
  apuStack_90[0] = puVar11;
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar14 = puVar7;
    }
    func_0x000107c60480();
  }
  puVar13 = puVar11;
  if (puVar14 != (undefined *)0x0) {
    uVar16 = 0;
    do {
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102fbed50);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(puVar7 + uVar16 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar16;
        FUN_102fc0404(uVar16,puVar7,&PTR_PTR_1126ba690,0x112f2e980);
      }
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102fbed38);
        (*pcVar2)();
      }
      puVar18 = (undefined *)(uVar16 + 1);
      func_0x000107c61174();
      uVar5 = uVar4;
      func_0x000107c4ca0c();
      func_0x000107c61180();
      uVar3 = 0;
      FUN_102fc10b8(0,0x112ddb928,&PTR_PTR_1126ba688);
      uVar6 = uVar5;
      func_0x000107c5fc54(uVar5,uVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      FUN_102fbffb4(uVar6);
      uVar16 = uVar16 + 1;
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar13 = apuStack_90[0];
    } while (puVar18 != puVar14);
  }
  func_0x000107c6142c(puVar7);
  if ((ulong)puVar13 >> 0x3e == 0) {
    puVar14 = *(undefined **)((undefined *)((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
    if (((ulong)puVar13 & 0x8000000000000000) != 0) {
      puVar14 = puVar13;
    }
    func_0x000107c60480();
  }
  if ((long)puVar14 < 1) {
    func_0x000107c6142c(puVar13);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar15 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,uVar3);
    (**(code **)(lVar15 + 0x10))(param_3,param_4,uVar3,lVar15);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar14 = puVar11;
    if (*(undefined **)(param_2 + _DAT_113046d60) != (undefined *)0x0) {
      puVar14 = *(undefined **)(param_2 + _DAT_113046d60);
    }
    apuStack_90[0] = puVar11;
    func_0x000107c61434();
    func_0x000107c61434(puVar13);
    func_0x000102fc00bc(0,0,0);
    puVar11 = apuStack_90[0];
    if ((ulong)puVar13 >> 0x3e == 0) {
      puVar7 = *(undefined **)((undefined *)((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar7 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
      if (((ulong)puVar13 & 0x8000000000000000) != 0) {
        puVar7 = puVar13;
      }
      func_0x000107c60480();
    }
    if (puVar7 != (undefined *)0x0) {
      puVar9 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
      puVar18 = puVar9;
      if ((undefined *)0x7fffffffffffffff < puVar14) {
        puVar18 = puVar14;
      }
      lVar15 = 4;
      do {
        uVar16 = lVar15 - 4;
        if (((ulong)puVar13 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102fbf15c);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(puVar13 + lVar15 * 8);
          func_0x000107c61174(uVar4);
        }
        else {
          uVar4 = uVar16;
          FUN_102fc0404(uVar16,puVar13,&PTR_PTR_1126ba688,0x112ddb928);
        }
        puVar17 = (undefined *)(lVar15 + -3);
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102fbf158);
          (*pcVar2)();
        }
        if ((ulong)puVar14 >> 0x3e == 0) {
          if ((long)uVar16 < *(long *)(puVar9 + 0x10)) goto LAB_102fbee70;
LAB_102fbef08:
          func_0x000107c61170(uVar4);
          uVar3 = 0;
          uVar10 = 0;
          uVar19 = 0xc000000000000000;
          uVar12 = 0xc000000000000000;
        }
        else {
          puVar8 = puVar18;
          func_0x000107c60480();
          if ((long)puVar8 <= (long)uVar16) goto LAB_102fbef08;
LAB_102fbee70:
          if (((ulong)puVar14 & 0xc000000000000001) == 0) {
            if (*(ulong *)(puVar9 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102fbf168);
              (*pcVar2)();
            }
            puVar1 = (undefined8 *)(*(long *)(puVar14 + lVar15 * 8) + _DAT_113046d48);
            uVar3 = *puVar1;
            uVar19 = puVar1[1];
            puVar1 = (undefined8 *)(*(long *)(puVar14 + lVar15 * 8) + _DAT_113046d50);
            uVar10 = *puVar1;
            uVar12 = puVar1[1];
            func_0x00010006c00c(uVar3,uVar19);
            func_0x00010006c00c(uVar10,uVar12);
            func_0x000107c61170(uVar4);
          }
          else {
            uVar5 = uVar16;
            FUN_102fc05c0(uVar16,puVar14);
            uVar3 = *(undefined8 *)(uVar5 + _DAT_113046d48);
            uVar19 = ((undefined8 *)(uVar5 + _DAT_113046d48))[1];
            func_0x00010006c00c(uVar3,uVar19);
            func_0x000107c615e8(uVar5);
            FUN_102fc05c0(uVar16,puVar14);
            uVar10 = *(undefined8 *)(uVar16 + _DAT_113046d50);
            uVar12 = ((undefined8 *)(uVar16 + _DAT_113046d50))[1];
            func_0x00010006c00c(uVar10,uVar12);
            func_0x000107c61170(uVar4);
            func_0x000107c615e8(uVar16);
          }
        }
        uVar16 = *(ulong *)(puVar11 + 0x10);
        apuStack_90[0] = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar16) {
          func_0x000102fc00bc(1 < *(ulong *)(puVar11 + 0x18),uVar16 + 1,1);
        }
        *(ulong *)(apuStack_90[0] + 0x10) = uVar16 + 1;
        *(undefined8 *)(apuStack_90[0] + uVar16 * 0x20 + 0x20) = uVar3;
        *(undefined8 *)(apuStack_90[0] + uVar16 * 0x20 + 0x28) = uVar19;
        *(undefined8 *)(apuStack_90[0] + uVar16 * 0x20 + 0x30) = uVar10;
        *(undefined8 *)(apuStack_90[0] + uVar16 * 0x20 + 0x38) = uVar12;
        lVar15 = lVar15 + 1;
        puVar11 = apuStack_90[0];
      } while (puVar17 != puVar7);
    }
    func_0x000107c6142c(puVar13);
    func_0x000107c6142c(puVar14);
    puVar14 = puVar13;
    uStack_78 = param_3;
    uStack_70 = param_4;
    FUN_102fc0b20(puVar13,puVar11,0x102fc0b14,apuStack_90);
    func_0x000107c61574(puVar11);
    func_0x000107c6142c(puVar13);
    puVar7 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
    if ((ulong)puVar14 >> 0x3e == 0) {
      puVar13 = *(undefined **)(puVar7 + 0x10);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar13 = puVar7;
      if ((undefined *)0x7fffffffffffffff < puVar14) {
        puVar13 = puVar14;
      }
      func_0x000107c60480();
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
    if (puVar13 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar14 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar7 + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102fbf164);
              (*pcVar2)();
            }
            puVar9 = *(undefined **)(puVar14 + (long)puVar18 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar9 = puVar18;
            func_0x000101a91e58(puVar18,puVar14);
          }
          if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102fbf160);
            (*pcVar2)();
          }
          puVar17 = puVar18 + 1;
          if (*(int *)(puVar9 + _DAT_113046d40) == 0) break;
          puVar18 = puVar11;
          func_0x000107c61558();
          apuStack_90[0] = puVar11;
          if (((ulong)puVar18 & 1) == 0) {
            func_0x000102fc00a0(0,*(long *)(puVar11 + 0x10) + 1,1);
          }
          uVar16 = *(ulong *)(apuStack_90[0] + 0x10);
          if (*(ulong *)(apuStack_90[0] + 0x18) >> 1 <= uVar16) {
            func_0x000102fc00a0(1 < *(ulong *)(apuStack_90[0] + 0x18),uVar16 + 1,1);
          }
          *(ulong *)(apuStack_90[0] + 0x10) = uVar16 + 1;
          *(undefined **)(apuStack_90[0] + uVar16 * 8 + 0x20) = puVar9;
          puVar11 = apuStack_90[0];
          puVar18 = puVar17;
          if (puVar17 == puVar13) goto LAB_102fbf1d8;
        }
        func_0x000107c61170();
        puVar18 = puVar18 + 1;
      } while (puVar17 != puVar13);
    }
LAB_102fbf1d8:
    func_0x000107c6142c(puVar14);
  }
  return puVar11;
}



/* Entry: 102fbf204; end: 102fbf237;  */

void FUN_102fbf204(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fbf238; end: 102fbf23b; -[_TtC14TinselListener14TinselListener didCreateConversation:] */

void FUN_102fbf238(void)

{
  return;
}



/* Entry: 102fbf23c; end: 102fbf23f; -[_TtC14TinselListener14TinselListener didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:] */

void FUN_102fbf23c(void)

{
  return;
}



/* Entry: 102fbf240; end: 102fbf243; -[_TtC14TinselListener14TinselListener didRemoveConversation:] */

void FUN_102fbf240(void)

{
  return;
}



/* Entry: 102fbf244; end: 102fbf247; -[_TtC14TinselListener14TinselListener didSendStart:] */

void FUN_102fbf244(void)

{
  return;
}



/* Entry: 102fbf248; end: 102fbf28b; -[_TtC14TinselListener14TinselListener didSendComplete:] */

void FUN_102fbf248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_102fbdd50(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102fbf28c; end: 102fbf28f; -[_TtC14TinselListener14TinselListener didConfirmConversationServerCreation:] */

void FUN_102fbf28c(void)

{
  return;
}



/* Entry: 102fbf290; end: 102fbf2af; -[_TtC14TinselListener14TinselListener didConversationReset:messages:] */

void FUN_102fbf290(void)

{
  return;
}



/* Entry: 102fbf2b0; end: 102fbf30b;  */

void FUN_102fbf2b0(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102fbf30c;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_102fbf760();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102fbf30c; end: 102fbf34b;  */

void FUN_102fbf30c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fbf34c,0,0);
  return;
}



/* Entry: 102fbf34c; end: 102fbf75f;  */

void FUN_102fbf34c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  byte **ppbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong *puVar13;
  long unaff_x22;
  long lVar14;
  byte *pbStack_48;
  ulong uStack_40;
  
  lVar10 = *(long *)(unaff_x22 + 0x58);
  uVar9 = *(ulong *)(unaff_x22 + 0x68);
  if (lVar10 != 0) {
    lVar14 = *(long *)(unaff_x22 + 0x50);
    pbVar12 = *(byte **)(unaff_x22 + 0x60);
    uVar2 = 0;
    FUN_102fc10b8(0,0x112d4e810,&PTR_PTR_1126b0cd8);
    func_0x000103c1912c(lVar14,lVar10,uVar2);
    if (lVar14 != 0) {
      if (uVar9 == 0) {
        func_0x000107c61170();
        goto LAB_102fbf6bc;
      }
      uVar5 = (ulong)pbVar12 & 0xffffffffffff;
      uVar6 = uVar9 >> 0x38 & 0xf;
      uVar3 = uVar5;
      if ((uVar9 & 0x2000000000000000) != 0) {
        uVar3 = uVar6;
      }
      if (uVar3 != 0) {
        if ((uVar9 >> 0x3c & 1) == 0) {
          if ((uVar9 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar12 >> 0x3c & 1) == 0) {
              uVar5 = uVar9;
              func_0x000107c60358();
            }
            else {
              pbVar12 = (byte *)((uVar9 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar12 == 0x2b) {
              if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102fbf75c);
                (*pcVar1)();
              }
              lVar10 = uVar5 - 1;
              if (lVar10 == 0) goto LAB_102fbf608;
              pbVar11 = (byte *)0x0;
              do {
                pbVar12 = pbVar12 + 1;
                if (((9 < *pbVar12 - 0x30) ||
                    (lVar8 = (long)pbVar11 * 10,
                    SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*pbVar12 - 0x30), pbVar11 = (byte *)(lVar8 + uVar3),
                   SCARRY8(lVar8,uVar3))) goto LAB_102fbf608;
                uVar4 = 0;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
            else if (*pbVar12 == 0x2d) {
              if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102fbf754);
                (*pcVar1)();
              }
              lVar10 = uVar5 - 1;
              if (lVar10 == 0) {
LAB_102fbf608:
                pbVar11 = (byte *)0x0;
                uVar4 = 1;
              }
              else {
                pbVar11 = (byte *)0x0;
                do {
                  pbVar12 = pbVar12 + 1;
                  if (((9 < *pbVar12 - 0x30) ||
                      (lVar8 = (long)pbVar11 * 10,
                      SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
                     (uVar3 = (ulong)(byte)(*pbVar12 - 0x30), pbVar11 = (byte *)(lVar8 - uVar3),
                     SBORROW8(lVar8,uVar3))) goto LAB_102fbf608;
                  uVar4 = 0;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
            }
            else {
              if (uVar5 == 0) goto LAB_102fbf608;
              pbVar11 = (byte *)0x0;
              if (pbVar12 == (byte *)0x0) {
                uVar4 = 0;
              }
              else {
                do {
                  if (((9 < *pbVar12 - 0x30) ||
                      (lVar10 = (long)pbVar11 * 10,
                      SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                     (uVar3 = (ulong)(byte)(*pbVar12 - 0x30), pbVar11 = (byte *)(lVar10 + uVar3),
                     SCARRY8(lVar10,uVar3))) goto LAB_102fbf608;
                  uVar4 = 0;
                  uVar5 = uVar5 - 1;
                  pbVar12 = pbVar12 + 1;
                } while (uVar5 != 0);
              }
            }
          }
          else {
            pbStack_48 = pbVar12;
            uStack_40 = uVar9 & 0xffffffffffffff;
            uVar4 = (uint)pbVar12 & 0xff;
            if (uVar4 == 0x2b) {
              if (uVar6 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102fbf760);
                (*pcVar1)();
              }
              lVar10 = uVar6 - 1;
              if (lVar10 == 0) goto LAB_102fbf608;
              pbVar11 = (byte *)0x0;
              pbVar12 = (byte *)((ulong)&pbStack_48 | 1);
              do {
                if (((9 < *pbVar12 - 0x30) ||
                    (lVar8 = (long)pbVar11 * 10,
                    SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*pbVar12 - 0x30), pbVar11 = (byte *)(lVar8 + uVar3),
                   SCARRY8(lVar8,uVar3))) goto LAB_102fbf608;
                uVar4 = 0;
                lVar10 = lVar10 + -1;
                pbVar12 = pbVar12 + 1;
              } while (lVar10 != 0);
            }
            else if (uVar4 == 0x2d) {
              if (uVar6 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102fbf758);
                (*pcVar1)();
              }
              lVar10 = uVar6 - 1;
              if (lVar10 == 0) goto LAB_102fbf608;
              pbVar11 = (byte *)0x0;
              pbVar12 = (byte *)((ulong)&pbStack_48 | 1);
              do {
                if (((9 < *pbVar12 - 0x30) ||
                    (lVar8 = (long)pbVar11 * 10,
                    SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*pbVar12 - 0x30), pbVar11 = (byte *)(lVar8 - uVar3),
                   SBORROW8(lVar8,uVar3))) goto LAB_102fbf608;
                uVar4 = 0;
                lVar10 = lVar10 + -1;
                pbVar12 = pbVar12 + 1;
              } while (lVar10 != 0);
            }
            else {
              if (uVar6 == 0) goto LAB_102fbf608;
              pbVar11 = (byte *)0x0;
              ppbVar7 = &pbStack_48;
              do {
                if (((9 < *(byte *)ppbVar7 - 0x30) ||
                    (lVar10 = (long)pbVar11 * 10,
                    SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*(byte *)ppbVar7 - 0x30),
                   pbVar11 = (byte *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3))) goto LAB_102fbf608;
                uVar4 = 0;
                uVar6 = uVar6 - 1;
                ppbVar7 = (byte **)((long)ppbVar7 + 1);
              } while (uVar6 != 0);
            }
          }
        }
        else {
          uVar3 = uVar9;
          func_0x000100fb6b80(pbVar12,uVar9,10);
          uVar4 = (uint)uVar3;
          pbVar11 = pbVar12;
        }
        func_0x000107c6142c(uVar9);
        if ((uVar4 & 0xff) == 1) {
          func_0x000107c61170(lVar14);
        }
        else {
          puVar13 = *(ulong **)(unaff_x22 + 0x78);
          uVar2 = 0;
          func_0x00010401525c(0);
          lVar10 = lVar14;
          func_0x000104012794(lVar14,pbVar11,uVar2);
          func_0x000107c61180();
          FUN_102fbf9fc();
          uVar6 = *puVar13;
          uVar5 = uVar6 & 0xffffffffffffff8;
          uVar9 = *(ulong *)(uVar5 + 0x10);
          uVar3 = uVar6;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar9) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_102fbfa7c(uVar3,uVar9 + 1,1,uVar6,FUN_102fbfbb4,FUN_102fbfccc);
            uVar5 = uVar3 & 0xffffffffffffff8;
          }
          puVar13 = *(ulong **)(unaff_x22 + 0x78);
          *(ulong *)(uVar5 + 0x10) = uVar9 + 1;
          *(long *)(uVar5 + uVar9 * 8 + 0x20) = lVar10;
          func_0x000107c61170(lVar14);
          func_0x000107c61170(lVar10);
          *puVar13 = uVar3;
        }
        goto LAB_102fbf6bc;
      }
      func_0x000107c61170();
    }
  }
  func_0x000107c6142c(uVar9);
LAB_102fbf6bc:
                    /* WARNING: Could not recover jumptable at 0x000102fbf6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fbf760; end: 102fbf88f;  */

void FUN_102fbf760(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  puVar1 = param_3;
  func_0x000107c4cdc4();
  puVar2 = PTR___ss5Int64VN_11034ee50;
  puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  puStack_70 = puVar1;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar3);
  func_0x000107c40674(param_3);
  func_0x000107c61180();
  puVar3 = param_3;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar1 = &UNK_1105f7668;
  func_0x000107c613fc(&UNK_1105f7668,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  pcStack_50 = FUN_102fc10f8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1011bb4a8;
  puStack_58 = &UNK_1105f7680;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c432a8(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 102fbf890; end: 102fbf8d3;  */

void FUN_102fbf890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(long *)(param_5 + 0x40) + 0x28);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_5);
  return;
}



/* Entry: 102fbf8d4; end: 102fbf9fb;  */

void FUN_102fbf8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1;
  uVar4 = param_2;
  uVar5 = param_3;
  func_0x000107c4ca5c();
  FUN_102fc0f58();
  uVar3 = *(undefined8 *)(param_6 + 0x30);
  lVar1 = *(long *)(param_6 + 0x38);
  func_0x0001000a8868(param_6 + 0x18,uVar3);
  (**(code **)(lVar1 + 0x18))(param_7,param_8,uVar4,uVar5,uVar3,lVar1);
  func_0x000107c6142c(uVar5);
  func_0x000107c40488(param_1);
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c5ee30();
  func_0x000107c61170(param_1);
  func_0x000104015468(0);
  func_0x000107c610f8();
  func_0x00010006c00c(param_2,param_3);
  func_0x00010006c00c(param_4,param_5);
  func_0x0001040129a0(uVar3,param_8,param_2,param_3,param_4,param_5,uVar2);
  return;
}



/* Entry: 102fbf9fc; end: 102fbfa7b;  */

void FUN_102fbf9fc(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_102fbfa7c(0,uVar1 + 1,1,uVar3,FUN_102fbfbb4,FUN_102fbfccc);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 102fbfa7c; end: 102fbfbb3;  */

ulong FUN_102fbfa7c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102fbfbb4);
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
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102fbfbb0);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102fbfbb4; end: 102fbfccb;  */

undefined * FUN_102fbfbb4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = &SUB_10401525c;
    FUN_102fbfedc(&SUB_10401525c,0x112f2e9b0,&UNK_10db73318);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102fbfccc; end: 102fbfedb;  */

long FUN_102fbfccc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102fbfdc0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102fbfdc4);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x00010401525c(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x00010401525c(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102fbfdbc);
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



/* Entry: 102fbfedc; end: 102fbff47;  */

void FUN_102fbfedc(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102fbff48; end: 102fbffb3;  */

void FUN_102fbff48(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_102fc10b8(0,0x112ddb928,&PTR_PTR_1126ba688);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f2e9a0;
  plVar5 = (long *)&UNK_10db73308;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102fbffb4; end: 102fc009f;  */

void FUN_102fbffb4(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x000102fc0344(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_102fc075c(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc009c);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc00a0);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc0098);
  (*pcVar1)();
}



/* Entry: 102fc00a0; end: 102fc00d7;  */

void FUN_102fc00a0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102fc00d8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102fc00d8; end: 102fc0403;  */

undefined * FUN_102fc00d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102fc0214);
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
    puVar3 = &SUB_104015468;
    FUN_102fbfedc(&SUB_104015468,0x112f2e988,&UNK_10db732f0);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000104015468(0);
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



/* Entry: 102fc0404; end: 102fc05bf;  */

ulong FUN_102fc0404(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102fc04e8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102fc04ec);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102fc10b8(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102fc05c0);
  (*pcVar2)();
}



/* Entry: 102fc05c0; end: 102fc075b;  */

ulong FUN_102fc05c0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102fc0690);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102fc0694);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000104015488(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000104015488(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f117ac0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102fc075c);
  (*pcVar2)();
}



/* Entry: 102fc075c; end: 102fc099f;  */

ulong FUN_102fc075c(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc08dc);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc08d0);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_102fc10b8(0,0x112ddb928,&PTR_PTR_1126ba688);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc08d4);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc08d8);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_102fc0404(uVar7,param_3,&PTR_PTR_1126ba688,0x112ddb928);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102fc09a0; end: 102fc09bf;  */

void FUN_102fc09a0(void)

{
  func_0x000107c61168(&PTR_PTR_112f2e910);
  return;
}



/* Entry: 102fc09c0; end: 102fc0a23;  */

void FUN_102fc09c0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102fc1108;
  plVar3[3] = lVar1;
  plVar3[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fbe1fc,0,0);
  return;
}



/* Entry: 102fc0a24; end: 102fc0ab7;  */

void FUN_102fc0a24(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  plVar8 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102fc0ab8;
  plVar8[0xe] = lVar6;
  plVar8[0xf] = lVar9;
  plVar8[0xc] = lVar5;
  plVar8[0xd] = lVar3;
  plVar8[10] = lVar4;
  plVar8[0xb] = lVar2;
  plVar8[9] = lVar1;
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  plVar8[0x10] = (long)plVar7;
  *plVar7 = (long)plVar8;
  plVar7[1] = (long)FUN_102fbe378;
  plVar7[5] = lVar5;
  plVar7[6] = lVar1;
  plVar7[3] = lVar4;
  plVar7[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fbe5a8,0,0);
  return;
}



/* Entry: 102fc0ab8; end: 102fc0af3;  */

void FUN_102fc0ab8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102fc0af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102fc0af4; end: 102fc0b1f;  */

void FUN_102fc0af4(void)

{
  return;
}



/* Entry: 102fc0b20; end: 102fc0f57;  */

undefined * FUN_102fc0b20(ulong param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uStack_80;
  
  uVar9 = param_1 >> 0x3e;
  if (uVar9 == 0) {
    uVar12 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar12 = param_1;
    }
    func_0x000107c60480();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar10 = *(ulong *)(param_2 + 0x10);
  uVar15 = uVar10;
  if ((long)uVar12 <= (long)uVar10) {
    uVar15 = uVar12;
  }
  FUN_102fc00a0(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102fc0f4c);
    (*pcVar6)();
  }
  if (uVar15 == 0) {
    func_0x000107c61434(param_1);
    func_0x000107c61434(param_2);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    uVar12 = uVar11;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar12 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c61434(param_2);
    uVar13 = 0;
    puVar14 = (undefined8 *)(param_2 + 0x38);
    do {
      if (uVar9 == 0) {
        uVar7 = *(ulong *)(uVar11 + 0x10);
      }
      else {
        uVar7 = uVar12;
        func_0x000107c60480();
      }
      if (uVar13 == uVar7) {
LAB_102fc0f54:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102fc0f58);
        (*pcVar6)();
      }
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102fc0f24);
          (*pcVar6)();
        }
        uVar7 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar13;
        FUN_102fc0404(uVar13,param_1,&PTR_PTR_1126ba688,0x112ddb928);
      }
      if (uVar10 == uVar13) {
        func_0x000107c61170(uVar7);
        goto LAB_102fc0f54;
      }
      uVar1 = puVar14[-1];
      uVar3 = *puVar14;
      uVar2 = puVar14[-3];
      uVar4 = puVar14[-2];
      func_0x00010006c00c(uVar2,uVar4);
      func_0x00010006c00c(uVar1,uVar3);
      if (uVar7 == 0) goto LAB_102fc0f54;
      uVar8 = uVar7;
      (*param_3)(uVar7,uVar2,uVar4,uVar1,uVar3);
      func_0x000107c61170(uVar7);
      func_0x00010006c090(uVar2,uVar4);
      func_0x00010006c090(uVar1,uVar3);
      uVar7 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
        FUN_102fc00a0(1 < *(ulong *)(puVar5 + 0x18),uVar7 + 1,1);
      }
      uVar13 = uVar13 + 1;
      *(ulong *)(puVar5 + 0x10) = uVar7 + 1;
      *(ulong *)(puVar5 + uVar7 * 8 + 0x20) = uVar8;
      puVar14 = puVar14 + 4;
    } while (uVar15 != uVar13);
  }
  uStack_80 = param_1 & 0xc000000000000001;
  uVar11 = param_1 & 0xffffffffffffff8;
  uVar12 = uVar11;
  if ((param_1 & 0x8000000000000000) != 0) {
    uVar12 = param_1;
  }
  uVar13 = uVar15;
  if (uVar15 <= uVar10) {
    uVar13 = uVar10;
  }
  puVar14 = (undefined8 *)(param_2 + uVar15 * 0x20 + 0x38);
  if (uVar9 != 0) goto LAB_102fc0d94;
  while (uVar15 != *(ulong *)(uVar11 + 0x10)) {
    while( true ) {
      if (uStack_80 == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102fc0f2c);
          (*pcVar6)();
        }
        uVar7 = *(ulong *)(param_1 + 0x20 + uVar15 * 8);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar15;
        FUN_102fc0404(uVar15,param_1,&PTR_PTR_1126ba688,0x112ddb928);
      }
      if (uVar15 == 0x7fffffffffffffff) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102fc0f28);
        (*pcVar6)();
      }
      if (uVar10 == uVar15) {
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(param_1);
        func_0x000107c61170(uVar7);
        return puVar5;
      }
      if (uVar13 == uVar15) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102fc0f30);
        (*pcVar6)();
      }
      uVar1 = puVar14[-1];
      uVar3 = *puVar14;
      uVar2 = puVar14[-3];
      uVar4 = puVar14[-2];
      func_0x00010006c00c(uVar2,uVar4);
      func_0x00010006c00c(uVar1,uVar3);
      uVar8 = uVar7;
      (*param_3)(uVar7,uVar2,uVar4,uVar1,uVar3);
      func_0x000107c61170(uVar7);
      func_0x00010006c090(uVar2,uVar4);
      func_0x00010006c090(uVar1,uVar3);
      uVar7 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
        FUN_102fc00a0(1 < *(ulong *)(puVar5 + 0x18),uVar7 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar7 + 1;
      *(ulong *)(puVar5 + uVar7 * 8 + 0x20) = uVar8;
      puVar14 = puVar14 + 4;
      uVar15 = uVar15 + 1;
      if (uVar9 == 0) break;
LAB_102fc0d94:
      uVar7 = uVar12;
      func_0x000107c60480();
      if (uVar15 == uVar7) goto LAB_102fc0ecc;
    }
  }
LAB_102fc0ecc:
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_1);
  return puVar5;
}



/* Entry: 102fc0f58; end: 102fc10b7;  */

undefined8 FUN_102fc0f58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  switch(param_1) {
  case 0:
    return 0;
  case 1:
    return 0;
  case 2:
    break;
  case 3:
    return 2;
  case 4:
    return 0;
  case 5:
    return 0;
  case 6:
    return 1;
  case 7:
    return 0;
  case 8:
    return 0;
  case 9:
    return 2;
  default:
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 102fc10b8; end: 102fc10f7;  */

void FUN_102fc10b8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102fc10f8; end: 102fc110b;  */

void FUN_102fc10f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102fc110c; end: 102fc1263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102fc110c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f2e9b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f2e9c0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f2e9c8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f2e9d0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f2e9d8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 102fc1264; end: 102fc12bb; +[_TtC14TinselListener24TinselListenerEntryPoint attributedTask] */

void FUN_102fc1264(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x000100933ae0(0);
  func_0x00010093bcfc();
  uVar2 = uVar1;
  func_0x000100933b54();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102fc12bc; end: 102fc14c7;  */

/* WARNING: Possible PIC construction at 0x000102fc1404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fc1450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fc1464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fc1454) */
/* WARNING: Removing unreachable block (ram,0x000102fc1408) */
/* WARNING: Removing unreachable block (ram,0x000102fc14c4) */
/* WARNING: Removing unreachable block (ram,0x000102fc140c) */
/* WARNING: Removing unreachable block (ram,0x000102fc1468) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fc12bc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112f2e9c8) + _DAT_113046cb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112f2e9c0);
  func_0x000107c40668();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    puVar5 = &UNK_1105f76b8;
    func_0x000107c613fc(&UNK_1105f76b8,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar2;
    func_0x0001000285a8(0x112ee4190,&UNK_10db0f210);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar2);
    func_0x0001000bdd8c(FUN_102fc14c8,puVar5);
    lVar2 = 0;
    func_0x000102fc16c4();
    func_0x000107c613fc();
    puVar5 = PTR_PTR_1126a8778;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar2 + 0x10) = puVar5;
    lVar2 = *(long *)(unaff_x20 + _DAT_112f2e9d8);
    func_0x000107c406a0();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc14c4);
      (*pcVar1)();
    }
    func_0x000107c3cfbc();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102fc14c8; end: 102fc14d3;  */

void FUN_102fc14c8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 102fc14d4; end: 102fc1573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102fc14d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f2e9b8);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f2e9c0);
    func_0x000107c6157c(lVar2);
    func_0x000107c40668();
    func_0x000107c61180();
    lVar1 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 == 0) {
      func_0x000107c61574(lVar2);
    }
    else {
      func_0x000107c4ff64(lVar1,param_2,lVar2);
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar1);
    }
  }
  return 0;
}



/* Entry: 102fc1574; end: 102fc15d3; -[_TtC14TinselListener24TinselListenerEntryPoint init] */

void FUN_102fc1574(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TinselListener.TinselListenerEntryPoint",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc15a0);
  (*pcVar1)();
}



/* Entry: 102fc15d4; end: 102fc167f; -[_TtC14TinselListener24TinselListenerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fc15d4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2e9c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2e9c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2e9d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2e9d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f2e9b8));
  return;
}



/* Entry: 102fc1680; end: 102fc16e3;  */

void FUN_102fc1680(void)

{
  func_0x000107c61168(&PTR_PTR_1128add40);
  return;
}



/* Entry: 102fc16e4; end: 102fc16fb;  */

void FUN_102fc16e4(undefined8 param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (*(code *)&UNK_1067e70dc)(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fc16fc; end: 102fc17b3;  */

void FUN_102fc16fc(undefined8 param_1)

{
  code *in_x4;
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (*in_x4)(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fc17b4; end: 102fc19b3;  */

long FUN_102fc17b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  func_0x00010092a9f0();
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
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x00010092aa6c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17,
                      param_18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x00010092ade8();
  *(undefined8 *)(unaff_x20 + 0xa0) = param_1;
  return unaff_x20;
}



/* Entry: 102fc19b4; end: 102fc1a7f;  */

void FUN_102fc19b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 102fc1a80; end: 102fc1ac3;  */

undefined1  [16] FUN_102fc1a80(void)

{
  return ZEXT816(0x1105f7830);
}



/* Entry: 102fc1ac4; end: 102fc1b17;  */

void FUN_102fc1ac4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102fc1b18; end: 102fc1d37;  */

void FUN_102fc1b18(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x00010035d6dc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  func_0x0001000285a8(0x112e84da0,&UNK_10dabb480);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x18) = puVar6;
  FUN_102fdd6c4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar6);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar5;
  func_0x000102fdd2dc();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_102fdd32c();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_90);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 102fc1d38; end: 102fc1d47;  */

void FUN_102fc1d38(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x00010035d6dc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  *(undefined8 *)(lVar1 + 0x38) = uStack_88;
  func_0x0001000285a8(0x112e84da0,&UNK_10dabb480);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x18) = puVar7;
  FUN_102fdd6c4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar6;
  func_0x000102fdd2dc();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_102fdd32c();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uStack_90);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 102fc1d48; end: 102fc1eff;  */

long FUN_102fc1d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  func_0x0001000285a8(0x112e84da0,&UNK_10dabb480);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_6;
  func_0x000107c6157c(param_6);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_102fdd6c4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102fdd2dc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  FUN_102fdd32c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_6);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  return unaff_x20;
}



/* Entry: 102fc1f00; end: 102fc1f6b;  */

void FUN_102fc1f00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102fc1f6c; end: 102fc1fbf;  */

void FUN_102fc1f6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102fc1fc0; end: 102fc200b;  */

void FUN_102fc1fc0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102fc200c; end: 102fc205f;  */

void FUN_102fc200c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102fc2060; end: 102fc2d6b;  */

void FUN_102fc2060(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100370350();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174(uStack_e0);
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174();
  uVar18 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c6157c(uStack_100);
  func_0x00010017da58();
  puVar19 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar21);
  *(undefined **)(param_2 + 0x18) = puVar19;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar21 = uStack_108;
  func_0x000107c6157c(uStack_108);
  func_0x00010017da58();
  puVar19 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar21);
  *(undefined **)(param_2 + 0x20) = puVar19;
  puVar19 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar19;
  puVar19 = PTR_PTR_1126ac908;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar19;
  func_0x000107c61174();
  uVar20 = auStack_70[0];
  func_0x000107c61174();
  uVar26 = 0xd000000000000013;
  uVar21 = uVar26;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar19);
  uVar21 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar19);
  uVar24 = 0xd000000000000010;
  uVar21 = uVar24;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000012;
  uVar21 = uVar22;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar19);
  uVar21 = 0x53676e6967676f6c;
  func_0x000107c5fadc(0x53676e6967676f6c,0xef73656369767265);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  uVar23 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09ddb0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar26);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f111dd0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar21 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar16);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2b9c0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar22);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  uVar21 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar18);
  func_0x000107c61174();
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar21);
  lVar25 = *(long *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f117b10);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(uVar21);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  uVar24 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar26);
  func_0x000107c61174(uVar24);
  uVar21 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar21);
  uVar24 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar26);
  func_0x000107c61174(uVar24);
  uVar21 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar21);
  func_0x000107c3e740(uVar26);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar25 != 0) {
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar2);
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
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61574(uStack_100);
    func_0x000107c61574(uStack_108);
    *(long *)(param_2 + 0xb8) = lVar25;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc2d6c);
  (*pcVar1)();
}



/* Entry: 102fc2d6c; end: 102fc2db7;  */

void FUN_102fc2d6c(void)

{
  long unaff_x20;
  
  FUN_102fc2060(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 102fc2db8; end: 102fc3913;  */

void FUN_102fc2db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_7;
  *(undefined8 *)(unaff_x20 + 0x60) = param_8;
  *(undefined8 *)(unaff_x20 + 0x68) = param_9;
  *(undefined8 *)(unaff_x20 + 0x70) = param_10;
  *(undefined8 *)(unaff_x20 + 0x78) = param_11;
  *(undefined8 *)(unaff_x20 + 0x80) = param_12;
  *(undefined8 *)(unaff_x20 + 0x88) = param_13;
  *(undefined8 *)(unaff_x20 + 0x90) = param_14;
  *(undefined8 *)(unaff_x20 + 0x98) = param_15;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_16;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_17;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_18;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
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
  func_0x000107c61174();
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  uVar6 = param_19;
  func_0x000107c6157c(param_19);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar6 = param_20;
  func_0x000107c6157c(param_20);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar4 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  puVar5 = PTR_PTR_1126ac908;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  uVar6 = uVar8;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  uVar6 = uVar9;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000012;
  uVar6 = uVar7;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0x53676e6967676f6c;
  func_0x000107c5fadc(0x53676e6967676f6c,0xef73656369767265);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09ddb0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f111dd0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(param_16);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2b9c0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(param_17);
  func_0x000107c61174();
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f117b10);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puVar3);
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(puVar5);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61574(param_19);
    func_0x000107c61574(param_20);
    *(undefined **)(unaff_x20 + 0xb8) = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc3914);
  (*pcVar1)();
}



/* Entry: 102fc3914; end: 102fc39f7;  */

void FUN_102fc3914(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 102fc39f8; end: 102fc3a4b;  */

void FUN_102fc39f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102fc3a4c; end: 102fc3a53;  */

void FUN_102fc3a4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102fc3a54; end: 102fc3aa3;  */

undefined8 FUN_102fc3a54(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102fc3aa4; end: 102fc3ae7;  */

undefined1  [16] FUN_102fc3aa4(void)

{
  return ZEXT816(0x1105f79c0);
}



/* Entry: 102fc3ae8; end: 102fc3b0f;  */

void FUN_102fc3ae8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102fc3b10; end: 102fc3b17;  */

undefined8 FUN_102fc3b10(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102fc3b18; end: 102fc3b8b;  */

void FUN_102fc3b18(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x000100331830();
  func_0x000107c613fc();
  FUN_102fc3be0(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 102fc3b8c; end: 102fc3b93;  */

void FUN_102fc3b8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  func_0x000100331830();
  func_0x000107c613fc();
  FUN_102fc3be0(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102fc3b94; end: 102fc3bdf;  */

undefined8 FUN_102fc3b94(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102fc3be0(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102fc3be0; end: 102fc3d43;  */

void FUN_102fc3be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126ac910;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
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



/* Entry: 102fc3d44; end: 102fc3d77;  */

void FUN_102fc3d44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fc3d78; end: 102fc3dcb;  */

void FUN_102fc3d78(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102fc3dcc; end: 102fc3dd3;  */

void FUN_102fc3dcc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102fc3dd4; end: 102fc3e23;  */

undefined8 FUN_102fc3dd4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102fc3e24; end: 102fc3e67;  */

undefined1  [16] FUN_102fc3e24(void)

{
  return ZEXT816(0x1105f7a88);
}



/* Entry: 102fc3e68; end: 102fc3e8f;  */

void FUN_102fc3e68(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102fc3e90; end: 102fc3e97;  */

undefined8 FUN_102fc3e90(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102fc3e98; end: 102fc43c3;  */

long FUN_102fc3e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  func_0x0001000285a8(0x112f208a0,&UNK_10db595c0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = param_8;
  func_0x000107c6157c(param_8);
  func_0x0001003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar4 = PTR_PTR_1126ac918;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3d20);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef35720);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f117b30);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar4);
  func_0x000107c61174();
  uVar5 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f05bfb0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar2);
  uVar5 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1117d0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(puVar4);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61574(param_8);
    *(undefined **)(unaff_x20 + 0x58) = puVar3;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fc43c4);
  (*pcVar1)();
}



/* Entry: 102fc43c4; end: 102fc4447;  */

void FUN_102fc43c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102fc4448; end: 102fc4497;  */

undefined8 FUN_102fc4448(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102fc4498; end: 102fc44e3;  */

undefined1  [16] FUN_102fc4498(void)

{
  return ZEXT816(0x1105f7b50);
}


