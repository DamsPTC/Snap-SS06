/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b53c78; end: 101b540b3;  */

void FUN_101b53c78(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long alStack_f0 [2];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_88 [40];
  
  uVar13 = *unaff_x20;
  lVar1 = 0x112e04188;
  func_0x0001000285a8(0x112e04188,&UNK_10d9d7d28);
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&uStack_e0 - extraout_x8;
  lVar2 = 0x112e04190;
  func_0x0001000285a8(0x112e04190,&UNK_10d9d7d30);
  lVar10 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar17 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar11 - extraout_x12;
  lVar3 = 0x112e04198;
  func_0x0001000285a8(0x112e04198,&UNK_10d9d7d38);
  func_0x000101b5a908();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 7;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  func_0x0001000285a8(0x112e041a0,&UNK_10d9d7d40);
  uVar4 = unaff_x20[2];
  func_0x0001000b637c(uVar4);
  puVar5 = &UNK_11044aed0;
  func_0x000107c613fc(&UNK_11044aed0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar13;
  pcVar6 = FUN_101b55110;
  func_0x0001000d5158(FUN_101b55110,puVar5,&UNK_11044b058);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar5);
  *(code **)(lVar3 + 0x20) = pcVar6;
  func_0x0001000285a8(0x112e041a8,&UNK_10d9d7d48);
  uVar4 = unaff_x20[3];
  func_0x0001000b637c(uVar4);
  puVar5 = &UNK_11044aef8;
  func_0x000107c613fc(&UNK_11044aef8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar13;
  pcVar6 = FUN_101b55150;
  func_0x0001000d5158(FUN_101b55150,puVar5,&UNK_11044b058);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar5);
  *(code **)(lVar3 + 0x28) = pcVar6;
  func_0x0001000285a8(0x112e041b0,&UNK_10d9d7d50);
  uVar7 = unaff_x20[4];
  func_0x0001000b637c(uVar7);
  puVar5 = &UNK_11044af20;
  func_0x000107c613fc(&UNK_11044af20,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar13;
  uVar4 = 0x101b55158;
  func_0x0001000d5158(0x101b55158,puVar5,&UNK_11044b058);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar5);
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  lVar8 = lVar3;
  func_0x0001000c19f0(lVar3);
  func_0x000107c61574(lVar3);
  (**(code **)(lVar9 + 0x68))
            (lVar17,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar1);
  func_0x0001000d52ec(lVar16,lVar17);
  func_0x000107c61574(lVar8);
  (**(code **)(lVar9 + 8))(lVar17,lVar1);
  uVar13 = unaff_x20[5];
  uVar4 = unaff_x20[0xe];
  uVar20 = unaff_x20[0xe];
  uVar19 = unaff_x20[0xd];
  uVar7 = unaff_x20[0xc];
  uStack_d8 = unaff_x20[0xc];
  uStack_e0 = unaff_x20[0xb];
  (**(code **)(lVar10 + 0x10))(lVar11,lVar16,lVar2);
  FUN_101b55160(unaff_x20 + 6,auStack_88);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar14 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  uVar18 = lVar15 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_11044af48;
  func_0x000107c613fc(&UNK_11044af48,uVar18 + 0x50,uVar12 | 7);
  (**(code **)(lVar10 + 0x20))(puVar5 + uVar14,lVar11,lVar2);
  *(undefined8 *)(puVar5 + uVar18) = uVar13;
  *(undefined8 *)((long)(puVar5 + uVar18 + 8) + 8) = uStack_d8;
  *(undefined8 *)(puVar5 + uVar18 + 8) = uStack_e0;
  *(undefined8 *)((long)(puVar5 + uVar18 + 0x18) + 8) = uVar20;
  *(undefined8 *)(puVar5 + uVar18 + 0x18) = uVar19;
  FUN_101b551a4(auStack_88,puVar5 + uVar18 + 0x28);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar4);
  *(undefined **)(lVar16 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar4 = 6;
  func_0x000100859150(6,0,0x58,4,0,0,&UNK_10d9d7d60,puVar5);
  func_0x000107c61574(puVar5);
  (**(code **)(lVar10 + 8))(lVar16,lVar2);
  uVar7 = unaff_x20[0xf];
  unaff_x20[0xf] = uVar4;
  func_0x000107c61574(uVar7);
  return;
}



/* Entry: 101b540b4; end: 101b541df;  */

void FUN_101b540b4(undefined8 *param_1)

{
  undefined1 auStack_90 [16];
  undefined8 *puStack_80;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0xff;
  puStack_80 = &uStack_50;
  puStack_60 = puStack_80;
  func_0x00010484fff0(FUN_101b54f78,0,FUN_101b55388,auStack_70,0x101b55390,auStack_90,FUN_101b55108,
                      0,0x101b5510c,0);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[4] = uStack_30;
  *(undefined1 *)(param_1 + 5) = uStack_28;
  return;
}



/* Entry: 101b541e0; end: 101b54257;  */

void FUN_101b541e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_8;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  lVar2 = 0x112e041b8;
  func_0x0001000285a8(0x112e041b8,&UNK_10d9d7d68);
  *(long *)(unaff_x22 + 0xe8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b54258,0,0);
  return;
}



/* Entry: 101b54258; end: 101b542eb;  */

void FUN_101b54258(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar1 = *(long *)(unaff_x22 + 0xb8);
  func_0x0001000285a8(0x112e04190,&UNK_10d9d7d30);
  func_0x000107c5fd34(uVar3);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined1 *)(unaff_x22 + 0x71) = 0;
  *(undefined8 *)(unaff_x22 + 0x108) = 0;
  *(undefined8 *)(unaff_x22 + 0x110) = 0;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar3;
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101b542ec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0xe8));
  return;
}



/* Entry: 101b542ec; end: 101b54333;  */

void FUN_101b542ec(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b54334,0,0);
  return;
}



/* Entry: 101b54334; end: 101b545c7;  */

void FUN_101b54334(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  double dVar15;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar2;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x130) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar3;
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar14;
  cVar5 = *(char *)(unaff_x22 + 0x70);
  if (cVar5 == -1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
    (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))(uVar9,*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x000107c615c0(uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0x110);
    func_0x000107c5fd64();
    *(long *)(unaff_x22 + 0x148) = lVar13;
    if (lVar13 == 0) {
      if (cVar5 == '\0') {
        lVar13 = *(long *)(unaff_x22 + 0x100);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar13 != 0) {
          puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
          func_0x000107c453e4();
          uVar9 = 0xd000000000000036;
          func_0x000107c5fadc(0xd000000000000036,0x800000010efff960);
          func_0x000107c56bcc(lVar13);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(lVar13);
        }
        piVar12 = *(int **)(unaff_x22 + 0xd0);
        (**(code **)(unaff_x22 + 0xc0))();
        *(double *)(unaff_x22 + 0x160) = param_1;
        plVar10 = (long *)(ulong)(uint)piVar12[1];
        UNRECOVERED_JUMPTABLE = (code *)((long)*piVar12 + (long)piVar12);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x168) = plVar10;
        pcVar7 = FUN_101b546dc;
      }
      else if (cVar5 == '\x01') {
        bVar6 = *(byte *)(unaff_x22 + 0x71);
        pcVar7 = *(code **)(unaff_x22 + 0xc0);
        func_0x000101b55320(uVar9,uVar2,uVar1,uVar3,uVar14,1);
        (*pcVar7)();
        if ((bVar6 & 1) == 0) {
          lVar13 = 0;
        }
        else {
          dVar15 = (param_1 - *(double *)(unaff_x22 + 0x108)) * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101b545c0);
            (*pcVar7)();
          }
          if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101b545c4);
            (*pcVar7)();
          }
          if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101b545c8);
            (*pcVar7)();
          }
          lVar13 = (long)dVar15;
        }
        *(long *)(unaff_x22 + 0x178) = lVar13;
        piVar12 = *(int **)(unaff_x22 + 0xd0);
        plVar10 = (long *)(ulong)(uint)piVar12[1];
        UNRECOVERED_JUMPTABLE = (code *)((long)*piVar12 + (long)piVar12);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x180) = plVar10;
        pcVar7 = FUN_101b54b24;
      }
      else {
        piVar12 = *(int **)(unaff_x22 + 0xd0);
        plVar10 = (long *)(ulong)(uint)piVar12[1];
        UNRECOVERED_JUMPTABLE = (code *)((long)*piVar12 + (long)piVar12);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x150) = plVar10;
        pcVar7 = FUN_101b545c8;
      }
      *plVar10 = unaff_x22;
      plVar10[1] = (long)pcVar7;
    }
    else {
      lVar13 = *(long *)(unaff_x22 + 0xf0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
      FUN_101b552e4(uVar9,uVar2,uVar1,uVar3,uVar14,cVar5);
      (**(code **)(lVar13 + 8))(uVar4,uVar11);
      func_0x000107c615c0(uVar4);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101b545b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101b545c8; end: 101b54617;  */

void FUN_101b545c8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x158) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b54618,0,0);
  return;
}



/* Entry: 101b54618; end: 101b546db;  */

void FUN_101b54618(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x0001000a8868(*(long *)(unaff_x22 + 0xe0),
                      *(undefined8 *)(*(long *)(unaff_x22 + 0xe0) + 0x18));
  *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar1;
  FUN_101b52f8c(uVar4,uVar6,uVar1);
  func_0x000101b52c18((undefined8 *)(unaff_x22 + 0x78));
  FUN_101b552e4(uVar5,uVar2,uVar4,uVar1,uVar3,2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101b546d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b546dc; end: 101b5472b;  */

void FUN_101b546dc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x170) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x168));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b5472c,0,0);
  return;
}



/* Entry: 101b5472c; end: 101b54b23;  */

void FUN_101b5472c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 uVar15;
  long lVar16;
  
  lVar12 = *(long *)(unaff_x22 + 0x170);
  plVar4 = *(long **)(unaff_x22 + 0xe0);
  func_0x0001000a8868(plVar4,plVar4[3]);
  lVar16 = *plVar4;
  uVar11 = *(undefined8 *)(lVar16 + 0x18);
  if (lVar12 < 0x67) {
    if (lVar12 < 0x2a) {
      if (lVar12 == 0x12) {
        uVar13 = 0xeb00000000707574;
        uVar5 = 0x726174735f707061;
        goto LAB_101b548a0;
      }
      if (lVar12 == 0x1f) {
        uVar13 = 0xe600000000000000;
        uVar5 = 0x6172656d6163;
        goto LAB_101b548a0;
      }
      if (lVar12 == 0x27) goto LAB_101b547e0;
    }
    else {
      if (lVar12 - 0x2aU < 2) {
LAB_101b547e0:
        uVar5 = 0x6e6967617373656d;
        uVar13 = 0xe900000000000067;
        goto LAB_101b548a0;
      }
      if (lVar12 == 0x4c) {
LAB_101b54824:
        uVar13 = 0xe800000000000000;
        uVar5 = 0x7265766f63736964;
        goto LAB_101b548a0;
      }
    }
  }
  else if (lVar12 < 0x96) {
    if (lVar12 == 0x67) {
      uVar13 = 0xec00000064656566;
      uVar5 = 0x5f73646e65697266;
      goto LAB_101b548a0;
    }
    if (lVar12 == 0x93) {
      uVar13 = 0xe300000000000000;
      uVar5 = 0x70616d;
      goto LAB_101b548a0;
    }
  }
  else {
    if (lVar12 == 0x96) goto LAB_101b547e0;
    if (lVar12 == 0xb0) goto LAB_101b54824;
    if (lVar12 == 0x13c) {
      uVar13 = 0xe900000000000074;
      uVar5 = 0x6867696c746f7073;
      goto LAB_101b548a0;
    }
  }
  uVar13 = 0xe500000000000000;
  uVar5 = 0x726568746f;
LAB_101b548a0:
  lVar12 = *(long *)(unaff_x22 + 0x130);
  func_0x000107c5fadc(uVar5,uVar13);
  func_0x000107c6142c(uVar13);
  bVar3 = *(char *)(lVar16 + 0x58) != '\x01';
  uVar13 = 0x5f656d6f636c6577;
  if (bVar3) {
    uVar13 = 0x647261646e617473;
  }
  uVar10 = 0xec0000006b636162;
  if (bVar3) {
    uVar10 = 0xe800000000000000;
  }
  uVar15 = 0x6e776f6e6b6e75;
  if (lVar12 == 2) {
    uVar15 = 0x656c7069746c756d;
  }
  uVar1 = 0xe700000000000000;
  if (lVar12 == 2) {
    uVar1 = 0xe800000000000000;
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = 0x656c676e6973;
  if (lVar12 != 3) {
    uVar2 = uVar15;
  }
  uVar15 = 0xe600000000000000;
  if (lVar12 != 3) {
    uVar15 = uVar1;
  }
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fb78(uVar2,uVar15);
  func_0x000107c6142c(uVar15);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c5fadc(uVar13,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x00010571c978(uVar11,uVar5,uVar13,1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  puVar6 = PTR_PTR_1126a8af0;
  func_0x000107c610f8(PTR_PTR_1126a8af0);
  func_0x000107c453e4();
  func_0x000107c59770();
  func_0x000107c5fadc(uVar7,uVar9);
  func_0x000107c56b00(puVar6);
  func_0x000107c61170(uVar7);
  func_0x0001000e48c0(uVar14);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000107c53c88(puVar6);
  func_0x000107c61170(uVar14);
  lVar12 = *(long *)(lVar16 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x120);
  if (lVar12 == 0) {
    FUN_101b552e4(uVar15,uVar13,uVar10,uVar11,uVar5,0);
  }
  else {
    puVar8 = puVar6;
    func_0x000107c61174(puVar6);
    func_0x000107c4bfb0(lVar12);
    FUN_101b552e4(uVar15,uVar13,uVar10,uVar11,uVar5,0);
    func_0x000107c61170(puVar8);
    func_0x000107c615e8(lVar12);
  }
  func_0x000107c61170(puVar6);
  *(undefined1 *)(unaff_x22 + 0x71) = 1;
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x148);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101b542ec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar4,unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0xe8));
  return;
}



/* Entry: 101b54b24; end: 101b54b73;  */

void FUN_101b54b24(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x188) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x180));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b54b74,0,0);
  return;
}



/* Entry: 101b54b74; end: 101b54ccf;  */

void FUN_101b54b74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x0001000a8868(*(long *)(unaff_x22 + 0xe0),
                      *(undefined8 *)(*(long *)(unaff_x22 + 0xe0) + 0x18));
  puVar7 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar7 = uVar6;
  *(char *)(unaff_x22 + 0x18) = (char)uVar2;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
  FUN_101b526b4(puVar7);
  FUN_101b52ae8(puVar7);
  FUN_101b552e4(uVar6,uVar2,uVar4,uVar1,uVar3,1);
  FUN_101b552e4(uVar6,uVar2,uVar4,uVar1,uVar3,1);
  if (((uint)uVar2 & 0xff) == 1) {
    *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x148);
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x118) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101b542ec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar5,unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0xe8));
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101b54ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b54cd0; end: 101b54ea3;  */

long FUN_101b54cd0(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = param_1;
  func_0x000107c4f6dc();
  if ((lVar5 != 0xf0) && (lVar5 = param_1, func_0x000107c4f6dc(), lVar5 != 0xf1)) {
    return lVar5;
  }
  lVar5 = param_1;
  func_0x000107c4d7e4();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b54d8c);
    (*pcVar4)();
  }
  lVar6 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(lVar5);
  func_0x000107c5c74c();
  lVar5 = *param_4;
  lVar7 = param_4[1];
  lVar1 = param_4[2];
  lVar2 = param_4[3];
  lVar8 = param_4[4];
  *param_4 = lVar6;
  param_4[1] = param_2;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[2] = param_1;
  cVar3 = (char)param_4[5];
  *(undefined1 *)(param_4 + 5) = 0;
  if (cVar3 == -1) {
    return lVar5;
  }
  if (((cVar3 != '\0') && (cVar3 != '\x02')) && (lVar7 = lVar2, cVar3 != '\x01')) {
    return lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar7,lVar7,lVar1,lVar2,lVar8);
  return lVar7;
}



/* Entry: 101b54ea4; end: 101b54f77;  */

long FUN_101b54ea4(long param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = param_1;
  lVar8 = param_2;
  func_0x000107c4f6dc();
  if ((lVar5 != 0xf0) && (lVar5 = param_1, func_0x000107c4f6dc(), lVar5 != 0xf1)) {
    return lVar5;
  }
  lVar5 = param_1;
  func_0x000107c4d7e4();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b54f78);
    (*pcVar4)();
  }
  lVar6 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(lVar5);
  func_0x000107c5c74c();
  lVar5 = *param_3;
  lVar7 = param_3[1];
  lVar1 = param_3[2];
  lVar2 = param_3[3];
  lVar9 = param_3[4];
  *param_3 = param_2;
  param_3[1] = param_4;
  param_3[2] = lVar6;
  param_3[3] = lVar8;
  param_3[4] = param_1;
  cVar3 = (char)param_3[5];
  *(undefined1 *)(param_3 + 5) = 1;
  if (cVar3 == -1) {
    return lVar5;
  }
  if (((cVar3 != '\0') && (cVar3 != '\x02')) && (lVar7 = lVar2, cVar3 != '\x01')) {
    return lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar7,lVar7,lVar1,lVar2,lVar9);
  return lVar7;
}



/* Entry: 101b54f78; end: 101b54f7b;  */

void FUN_101b54f78(void)

{
  return;
}



/* Entry: 101b54f7c; end: 101b55107;  */

long FUN_101b54f7c(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = param_1;
  func_0x000107c4f6dc();
  if ((lVar5 != 0xf0) && (lVar5 = param_1, func_0x000107c4f6dc(), lVar5 != 0xf1)) {
    return lVar5;
  }
  lVar5 = param_1;
  func_0x000107c4d7e4();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b55040);
    (*pcVar4)();
  }
  lVar6 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(lVar5);
  func_0x000107c5c74c();
  lVar5 = *param_4;
  lVar7 = param_4[1];
  lVar1 = param_4[2];
  lVar2 = param_4[3];
  lVar8 = param_4[4];
  *param_4 = lVar6;
  param_4[1] = param_2;
  param_4[2] = param_1;
  param_4[3] = param_3;
  param_4[4] = 0;
  cVar3 = (char)param_4[5];
  *(undefined1 *)(param_4 + 5) = 2;
  if (cVar3 == -1) {
    return lVar5;
  }
  if (((cVar3 != '\0') && (cVar3 != '\x02')) && (lVar7 = lVar2, cVar3 != '\x01')) {
    return lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar7,lVar7,lVar1,lVar2,lVar8);
  return lVar7;
}



/* Entry: 101b55108; end: 101b5510f;  */

void FUN_101b55108(void)

{
  return;
}



/* Entry: 101b55110; end: 101b5514f;  */

void FUN_101b55110(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_101b55398(&uStack_50,*param_2);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = CONCAT71(uStack_37,uStack_38);
  param_1[2] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,uStack_37);
  return;
}



/* Entry: 101b55150; end: 101b5515f;  */

void FUN_101b55150(undefined8 *param_1)

{
  undefined1 auStack_90 [16];
  undefined8 *puStack_80;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0xff;
  puStack_80 = &uStack_50;
  puStack_60 = puStack_80;
  func_0x00010484fff0(FUN_101b54f78,0,FUN_101b55388,auStack_70,0x101b55390,auStack_90,FUN_101b55108,
                      0,0x101b5510c,0);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[4] = uStack_30;
  *(undefined1 *)(param_1 + 5) = uStack_28;
  return;
}



/* Entry: 101b55160; end: 101b551a3;  */

long FUN_101b55160(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101b551a4; end: 101b551bb;  */

undefined8 * FUN_101b551a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101b551bc; end: 101b552a7;  */

void FUN_101b551bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  ulong uVar8;
  
  lVar5 = 0x112e04190;
  func_0x0001000285a8(0x112e04190,&UNK_10d9d7d30);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar8 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  lVar7 = *(long *)(unaff_x20 + uVar6);
  plVar4 = (long *)(unaff_x20 + uVar6 + 8);
  lVar5 = *plVar4;
  lVar2 = plVar4[1];
  plVar4 = (long *)(unaff_x20 + uVar6 + 0x18);
  lVar1 = *plVar4;
  lVar3 = plVar4[1];
  plVar4 = (long *)0x190;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101b552a8;
  plVar4[0x1b] = lVar3;
  plVar4[0x1c] = unaff_x20 + uVar6 + 0x28;
  plVar4[0x19] = lVar2;
  plVar4[0x1a] = lVar1;
  plVar4[0x17] = lVar7;
  plVar4[0x18] = lVar5;
  plVar4[0x16] = unaff_x20 + uVar8;
  lVar5 = 0x112e041b8;
  func_0x0001000285a8(0x112e041b8,&UNK_10d9d7d68);
  plVar4[0x1d] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x1e] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1f] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b54258,0,0);
  return;
}



/* Entry: 101b552a8; end: 101b552e3;  */

void FUN_101b552a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b552e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b552e4; end: 101b5534f;  */

void FUN_101b552e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  if (param_6 == -1) {
    return;
  }
  if (((param_6 != '\0') && (param_6 != '\x02')) && (param_2 = param_4, param_6 != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101b55350; end: 101b55387;  */

void FUN_101b55350(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101b54ea4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),0);
  return;
}



/* Entry: 101b55388; end: 101b55397;  */

long FUN_101b55388(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x20;
  
  plVar8 = *(long **)(unaff_x20 + 0x10);
  lVar5 = param_1;
  func_0x000107c4f6dc();
  if ((lVar5 != 0xf0) && (lVar5 = param_1, func_0x000107c4f6dc(), lVar5 != 0xf1)) {
    return lVar5;
  }
  lVar5 = param_1;
  func_0x000107c4d7e4();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b55040);
    (*pcVar4)();
  }
  lVar6 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(lVar5);
  func_0x000107c5c74c();
  lVar5 = *plVar8;
  lVar7 = plVar8[1];
  lVar1 = plVar8[2];
  lVar2 = plVar8[3];
  lVar9 = plVar8[4];
  *plVar8 = lVar6;
  plVar8[1] = param_2;
  plVar8[2] = param_1;
  plVar8[3] = param_3;
  plVar8[4] = 0;
  cVar3 = (char)plVar8[5];
  *(undefined1 *)(plVar8 + 5) = 2;
  if (cVar3 == -1) {
    return lVar5;
  }
  if (((cVar3 != '\0') && (cVar3 != '\x02')) && (lVar7 = lVar2, cVar3 != '\x01')) {
    return lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar7,lVar7,lVar1,lVar2,lVar9);
  return lVar7;
}



/* Entry: 101b55398; end: 101b554ef;  */

void FUN_101b55398(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0xff;
  puVar9 = &UNK_11044af70;
  func_0x000107c613fc(&UNK_11044af70,0x18,7);
  *(undefined8 **)(puVar9 + 0x10) = &uStack_70;
  puVar10 = &UNK_11044af98;
  func_0x000107c613fc(&UNK_11044af98,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_101b554f0;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_80 = FUN_101b554f8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x101b54d8c;
  puStack_88 = &UNK_11044afb0;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c4c5e4(param_2);
  func_0x000107c60bd0(ppuVar11);
  uVar7 = uStack_48;
  uVar6 = uStack_50;
  uVar5 = uStack_58;
  uVar4 = uStack_60;
  uVar3 = uStack_68;
  uVar2 = uStack_70;
  func_0x000107c61574(puVar9);
  puVar9 = puVar10;
  func_0x000107c61544(puVar10,"",0x98,0xa0,0x2b,1);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar9 & 1) == 0) {
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    param_1[4] = uVar6;
    *(undefined1 *)(param_1 + 5) = uVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x101b554f0);
  (*pcVar8)();
}



/* Entry: 101b554f0; end: 101b554f7;  */

long FUN_101b554f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x20;
  
  plVar8 = *(long **)(unaff_x20 + 0x10);
  lVar5 = param_1;
  func_0x000107c4f6dc();
  if ((lVar5 != 0xf0) && (lVar5 = param_1, func_0x000107c4f6dc(), lVar5 != 0xf1)) {
    return lVar5;
  }
  lVar5 = param_1;
  func_0x000107c4d7e4();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b54d8c);
    (*pcVar4)();
  }
  lVar6 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(lVar5);
  func_0x000107c5c74c();
  lVar5 = *plVar8;
  lVar7 = plVar8[1];
  lVar1 = plVar8[2];
  lVar2 = plVar8[3];
  lVar9 = plVar8[4];
  *plVar8 = lVar6;
  plVar8[1] = param_2;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[2] = param_1;
  cVar3 = (char)plVar8[5];
  *(undefined1 *)(plVar8 + 5) = 0;
  if (cVar3 == -1) {
    return lVar5;
  }
  if (((cVar3 != '\0') && (cVar3 != '\x02')) && (lVar7 = lVar2, cVar3 != '\x01')) {
    return lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar7,lVar7,lVar1,lVar2,lVar9);
  return lVar7;
}



/* Entry: 101b554f8; end: 101b55517;  */

void FUN_101b554f8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b55518; end: 101b55533;  */

void FUN_101b55518(long param_1,long param_2)

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



/* Entry: 101b55534; end: 101b5555f;  */

long FUN_101b55534(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101b55560; end: 101b55577;  */

undefined8 FUN_101b55560(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 5);
  uVar2 = param_1[1];
  if (((cVar1 != '\0') && (cVar1 != '\x02')) && (uVar2 = param_1[3], cVar1 != '\x01')) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2,uVar2,param_1[2],param_1[3],param_1[4]);
  return uVar2;
}



/* Entry: 101b55578; end: 101b55673;  */

undefined8 * FUN_101b55578(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  func_0x000101b55320(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Entry: 101b55674; end: 101b556c3;  */

undefined8 * FUN_101b55674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar5;
  func_0x000101b552f8(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 101b556c4; end: 101b5577f;  */

int FUN_101b556c4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 10) ^ 0xff;
  if (*(byte *)(param_1 + 10) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101b55780; end: 101b5598b;  */

long FUN_101b55780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x00010028941c();
  puVar1 = &UNK_11044b0a0;
  func_0x000107c613fc(&UNK_11044b0a0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,unaff_x20);
  puVar2 = &UNK_11044b0c8;
  func_0x000107c613fc(&UNK_11044b0c8,0x70,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  *(undefined8 *)(puVar2 + 0x40) = param_10;
  *(undefined8 *)(puVar2 + 0x48) = param_11;
  *(undefined8 *)(puVar2 + 0x50) = param_9;
  *(undefined8 *)(puVar2 + 0x58) = param_7;
  *(undefined8 *)(puVar2 + 0x60) = param_6;
  *(undefined8 *)(puVar2 + 0x68) = param_1;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  uVar3 = 6;
  func_0x000100859150(6,0,0x58,2,0,0,&UNK_10d9d7d90,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_7);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61574(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  func_0x000107c61574(uVar4);
  return unaff_x20;
}



/* Entry: 101b5598c; end: 101b559db;  */

void FUN_101b5598c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x368) = param_1;
  *(undefined8 *)(unaff_x22 + 0x360) = param_13;
  *(undefined8 *)(unaff_x22 + 0x358) = param_12;
  *(undefined8 *)(unaff_x22 + 0x350) = param_11;
  *(undefined8 *)(unaff_x22 + 0x348) = param_10;
  *(undefined8 *)(unaff_x22 + 0x340) = param_9;
  *(undefined8 *)(unaff_x22 + 0x338) = param_8;
  *(undefined8 *)(unaff_x22 + 0x330) = param_7;
  *(undefined8 *)(unaff_x22 + 0x328) = param_6;
  *(undefined8 *)(unaff_x22 + 800) = param_5;
  *(undefined8 *)(unaff_x22 + 0x318) = param_4;
  *(undefined8 *)(unaff_x22 + 0x310) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b559dc,0,0);
  return;
}



/* Entry: 101b559dc; end: 101b56083;  */

/* WARNING: Removing unreachable block (ram,0x000101b55a10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b559dc(ulong param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  func_0x000107c5fd64();
  func_0x000100288f58();
  if ((param_1 & 1) == 0) {
    func_0x000100083b20(unaff_x22 + 0x2f0);
    lVar11 = *(long *)(unaff_x22 + 0x2f0);
LAB_101b55a70:
    lVar8 = *(long *)(lVar11 + _DAT_113091b78);
    func_0x000107c615f0(lVar8);
    func_0x000107c61170(lVar11);
    lVar11 = lVar8;
    func_0x000107c3dfc0();
    func_0x000107c615e8(lVar8);
    if (lVar11 == 2) {
      func_0x000100083b20(unaff_x22 + 0x2e8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x2e8);
      *(undefined1 *)(unaff_x22 + 0x4b) = 1;
      func_0x000100b60084(unaff_x22 + 0x4b);
      goto LAB_101b56034;
    }
  }
  else {
    func_0x000100083b20(unaff_x22 + 0x300);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar9 = uVar10;
    func_0x000107c4f2bc();
    func_0x000107c615e8(uVar10);
    if ((int)uVar9 == 0) {
      func_0x000100083b20(unaff_x22 + 0x308);
      lVar11 = *(long *)(unaff_x22 + 0x308);
      goto LAB_101b55a70;
    }
  }
  lVar11 = *(long *)(unaff_x22 + 0x328);
  func_0x000107c61428(lVar11 + 0x10,unaff_x22 + 0x298,0,0);
  lVar11 = lVar11 + 0x10;
  func_0x000107c61648();
  if (lVar11 == 0) {
LAB_101b55ff8:
    *(undefined8 *)(unaff_x22 + 0x102) = 0;
    *(undefined8 *)(unaff_x22 + 0xfa) = 0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
  }
  else {
    func_0x000107c61574();
    func_0x000100083b20(unaff_x22 + 0x2d8);
    lVar8 = *(long *)(unaff_x22 + 0x2d8);
    lVar11 = lVar8;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar11 == 0) goto LAB_101b55ff8;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x310);
    func_0x000107c6157c(uVar9);
    func_0x000107c6157c(uVar10);
    FUN_101b5729c(unaff_x22 + 0x50,lVar11,uVar9,uVar10);
    *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x1c2) = *(undefined8 *)(unaff_x22 + 0x82);
    *(undefined8 *)(unaff_x22 + 0x1ba) = *(undefined8 *)(unaff_x22 + 0x7a);
    lVar11 = *(long *)(unaff_x22 + 0x50);
    if (lVar11 != 0) {
      bVar1 = *(byte *)(unaff_x22 + 0x89);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x358);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x350);
      lVar14 = *(long *)(unaff_x22 + 0x348);
      lVar8 = *(long *)(unaff_x22 + 0x328);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x318);
      *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x60);
      *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x58);
      *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x70);
      *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x68);
      *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x80);
      *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x78);
      *(undefined1 *)(unaff_x22 + 0x240) = *(undefined1 *)(unaff_x22 + 0x88);
      *(undefined8 *)(unaff_x22 + 0x202) = *(undefined8 *)(unaff_x22 + 0x82);
      *(undefined8 *)(unaff_x22 + 0x1fa) = *(undefined8 *)(unaff_x22 + 0x7a);
      *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x68);
      *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x60);
      *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x78);
      *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x70);
      *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x58);
      *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x50);
      func_0x000101b568b0((undefined8 *)(unaff_x22 + 0x1d0),unaff_x22 + 0x10);
      func_0x000100083b20(unaff_x22 + 0x2c8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x2c8);
      uVar9 = uVar12;
      func_0x000107c4ec80();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      lVar2 = 0;
      func_0x000101b52160();
      func_0x000107c613fc();
      *(long *)(unaff_x22 + 0x370) = lVar2;
      *(undefined8 *)(lVar2 + 0x10) = uVar9;
      puVar3 = PTR_PTR_1126a8af8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(unaff_x22 + 0x378) = puVar3;
      uVar9 = *(undefined8 *)(lVar14 + _DAT_113083868);
      lVar4 = 0;
      func_0x000101b52f6c();
      lVar14 = lVar4;
      func_0x000107c613fc();
      *(long *)(unaff_x22 + 0x380) = lVar14;
      *(undefined8 *)(lVar14 + 0x10) = uVar9;
      *(undefined **)(lVar14 + 0x18) = puVar3;
      *(long *)(lVar14 + 0x20) = lVar11;
      uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
      *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)(unaff_x22 + 0x60);
      *(undefined8 *)(lVar14 + 0x28) = uVar12;
      uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
      *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(unaff_x22 + 0x70);
      *(undefined8 *)(lVar14 + 0x38) = uVar12;
      uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
      *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)(unaff_x22 + 0x80);
      *(undefined8 *)(lVar14 + 0x48) = uVar12;
      *(undefined1 *)(lVar14 + 0x58) = *(undefined1 *)(unaff_x22 + 0x88);
      *(byte *)(lVar14 + 0x59) = bVar1;
      FUN_101b56b60(unaff_x22 + 0x50,unaff_x22 + 0x150);
      func_0x000107c61174(uVar9);
      func_0x000107c61174(puVar3);
      func_0x000107c6157c(lVar2);
      func_0x000107c6157c(lVar14);
      func_0x000107c6157c(uVar10);
      func_0x000107c6157c(uVar15);
      func_0x000107c6157c(uVar13);
      uVar9 = uVar10;
      FUN_101b568ec(uVar10,uVar15,uVar13,lVar2,lVar14);
      *(undefined8 *)(unaff_x22 + 0x388) = uVar9;
      func_0x000107c61574(uVar13);
      func_0x000107c61574(uVar15);
      func_0x000107c61574(uVar10);
      func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x2b0,0,0);
      lVar8 = lVar8 + 0x10;
      func_0x000107c61648();
      if (lVar8 != 0) {
        uVar10 = *(undefined8 *)(lVar8 + 0x18);
        *(undefined8 *)(lVar8 + 0x18) = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c61574(uVar10);
        func_0x000107c61574(lVar8);
      }
      uVar18 = *(undefined8 *)(unaff_x22 + 0x368);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x360);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x358);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x350);
      uVar12 = *(undefined8 *)(unaff_x22 + 800);
      FUN_101b53c78();
      *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x198);
      *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 400);
      *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x1a8);
      *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x1a0);
      *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x1b8);
      *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x1b0);
      *(undefined8 *)(unaff_x22 + 0x142) = *(undefined8 *)(unaff_x22 + 0x1c2);
      *(undefined8 *)(unaff_x22 + 0x13a) = *(undefined8 *)(unaff_x22 + 0x1ba);
      func_0x000101b568b0(unaff_x22 + 0x110,unaff_x22 + 0x90);
      func_0x000100083b20(unaff_x22 + 0x2e0);
      lVar8 = *(long *)(unaff_x22 + 0x2e0);
      uVar9 = *(undefined8 *)(lVar8 + _DAT_113091b70);
      func_0x000107c615f0();
      func_0x000107c61170(lVar8);
      *(long *)(unaff_x22 + 0x288) = lVar4;
      *(undefined ***)(unaff_x22 + 0x290) = &PTR_DAT_11044ab80;
      *(long *)(unaff_x22 + 0x270) = lVar14;
      lVar5 = 0;
      func_0x000101b5a890();
      func_0x000107c613fc();
      *(long *)(unaff_x22 + 0x390) = lVar5;
      func_0x0001000c6518(unaff_x22 + 0x270,lVar4);
      lVar8 = *(long *)(lVar4 + -8);
      puVar6 = (undefined8 *)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
      func_0x000107c615b8();
      (**(code **)(lVar8 + 0x10))();
      uVar13 = *puVar6;
      *(long *)(unaff_x22 + 0x260) = lVar4;
      *(undefined ***)(unaff_x22 + 0x268) = &PTR_DAT_11044ab80;
      *(undefined8 *)(unaff_x22 + 0x248) = uVar13;
      func_0x000107c6157c(lVar2);
      func_0x000107c6157c(lVar14);
      func_0x000107c61474(lVar5);
      *(undefined8 *)(lVar5 + 0x120) = 0;
      *(undefined2 *)(lVar5 + 0x128) = 0x101;
      *(undefined8 *)(lVar5 + 0x130) = 0;
      *(undefined4 *)(lVar5 + 0x138) = 0x200;
      *(undefined8 *)(lVar5 + 0x140) = 0;
      *(undefined1 *)(lVar5 + 0x148) = 1;
      *(undefined8 *)(lVar5 + 0x150) = 0;
      *(undefined1 *)(lVar5 + 0x158) = 1;
      *(undefined8 *)(lVar5 + 0x160) = 0;
      *(undefined1 *)(lVar5 + 0x168) = 1;
      puVar3 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar5 + 0x170) = puVar3;
      lVar14 = 0;
      func_0x000101b5a8e8();
      *(undefined8 *)(lVar5 + 0x178) = 0;
      *(undefined8 *)(lVar5 + 0x180) = 0;
      lVar8 = lVar14;
      func_0x000107c613fc();
      puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar8 + 0x10) = puVar3;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(lVar5 + 0x188) = lVar8;
      func_0x000107c613fc(lVar14,0x20,7);
      puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar13 = *(undefined8 *)(unaff_x22 + 0x210);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x220);
      *(undefined8 *)(lVar5 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x218);
      *(undefined8 *)(lVar5 + 0xe8) = uVar13;
      *(undefined **)(lVar14 + 0x10) = puVar3;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(lVar5 + 400) = lVar14;
      *(long *)(lVar5 + 0xe0) = lVar11;
      *(undefined8 *)(lVar5 + 0x100) = uVar17;
      *(undefined8 *)(lVar5 + 0xf8) = uVar16;
      uVar13 = *(undefined8 *)(unaff_x22 + 0x230);
      *(undefined8 *)(lVar5 + 0x110) = *(undefined8 *)(unaff_x22 + 0x238);
      *(undefined8 *)(lVar5 + 0x108) = uVar13;
      *(undefined1 *)(lVar5 + 0x118) = *(undefined1 *)(unaff_x22 + 0x240);
      *(byte *)(lVar5 + 0x119) = bVar1;
      *(undefined8 *)(lVar5 + 0x70) = uVar15;
      *(undefined8 *)(lVar5 + 0x78) = uVar10;
      *(undefined8 *)(lVar5 + 0x80) = uVar9;
      *(undefined **)(lVar5 + 0x88) = &UNK_10d9d7e88;
      *(undefined8 *)(lVar5 + 0x90) = 0;
      *(undefined8 *)(lVar5 + 0x98) = uVar12;
      *(undefined8 *)(lVar5 + 0xa0) = uVar7;
      *(long *)(lVar5 + 0xa8) = lVar2;
      FUN_101b551a4(unaff_x22 + 0x248,lVar5 + 0xb0);
      *(undefined8 *)(lVar5 + 0xd8) = uVar18;
      *(byte *)(lVar5 + 0x12a) = (bVar1 ^ 0xff) & 1;
      func_0x000107c6157c(uVar7);
      func_0x000107c6157c(uVar10);
      func_0x000107c6157c(uVar15);
      func_0x000107c6157c(uVar12);
      func_0x0001000834e4(unaff_x22 + 0x270);
      func_0x000107c615c0(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101b56084,lVar5,0);
      return;
    }
    *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x102) = *(undefined8 *)(unaff_x22 + 0x82);
    *(undefined8 *)(unaff_x22 + 0xfa) = *(undefined8 *)(unaff_x22 + 0x7a);
  }
  func_0x000100083b20(unaff_x22 + 0x2d0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2d0);
  *(undefined1 *)(unaff_x22 + 0x4a) = 1;
  func_0x000100b60084(unaff_x22 + 0x4a);
  func_0x000101b5687c(unaff_x22 + 0xd0);
LAB_101b56034:
  func_0x000107c61574(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101b56064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b56084; end: 101b560bf;  */

void FUN_101b56084(void)

{
  FUN_101b578b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b560c0,0,0);
  return;
}



/* Entry: 101b560c0; end: 101b5614b;  */

void FUN_101b560c0(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x2f8);
  lVar3 = *(long *)(unaff_x22 + 0x2f8);
  uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x398) = uVar2;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(lVar3);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x3a0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b5614c;
                    /* WARNING: Could not recover jumptable at 0x000101b56148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101b5668c();
  return;
}



/* Entry: 101b5614c; end: 101b561ab;  */

void FUN_101b5614c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x398);
  *(undefined8 *)(lVar1 + 0x3a8) = param_1;
  *(undefined1 *)(lVar1 + 0x4c) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x3a0));
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b561ac,0,0);
  return;
}



/* Entry: 101b561ac; end: 101b5623f;  */

void FUN_101b561ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x390);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x380);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x370);
  FUN_101b56b9c(*(undefined8 *)(unaff_x22 + 0x3a8),*(undefined1 *)(unaff_x22 + 0x4c));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar5);
  FUN_101b5687c(unaff_x22 + 0x50);
  func_0x000107c61170(uVar4);
  FUN_101b5687c(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000101b5623c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b56240; end: 101b56303;  */

void FUN_101b56240(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  lVar12 = *(long *)(unaff_x20 + 0x50);
  lVar11 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar8 = *(long *)(unaff_x20 + 0x60);
  lVar13 = *(long *)(unaff_x20 + 0x68);
  plVar9 = (long *)0x3b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101b56e58;
  plVar9[0x6d] = lVar13;
  plVar9[0x6c] = lVar8;
  plVar9[0x6b] = lVar4;
  plVar9[0x6a] = lVar12;
  plVar9[0x69] = lVar11;
  plVar9[0x68] = lVar10;
  plVar9[0x67] = lVar7;
  plVar9[0x66] = lVar3;
  plVar9[0x65] = lVar6;
  plVar9[100] = lVar2;
  plVar9[99] = lVar5;
  plVar9[0x62] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b559dc,0,0);
  return;
}



/* Entry: 101b56304; end: 101b5633f;  */

void FUN_101b56304(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b5633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b56340; end: 101b56353;  */

void FUN_101b56340(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b56354,0,0);
  return;
}



/* Entry: 101b56354; end: 101b563df;  */

void FUN_101b56354(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101b56c54(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b563e0,uVar2,uVar3);
  return;
}



/* Entry: 101b563e0; end: 101b5668b;  */

void FUN_101b563e0(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x22;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar17 = puVar5;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar6 = 0;
  FUN_101b56c10();
  uVar7 = 0x112d36e48;
  FUN_101b56c54(0x112d36e48,FUN_101b56c10,PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
  puVar5 = puVar17;
  func_0x000107c5fe10(puVar17,uVar6,uVar7);
  func_0x000107c61170(puVar17);
  if (((ulong)puVar5 & 0xc000000000000001) == 0) {
    uVar15 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
    puVar11 = (ulong *)(puVar5 + 0x38);
    uVar10 = ~uVar15;
    uVar15 = -uVar15;
    uVar12 = 0xffffffffffffffff;
    if (uVar15 < 0x40) {
      uVar12 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar12 = uVar12 & *puVar11;
    puVar17 = puVar5;
    func_0x000107c61434();
    lVar13 = 0;
    puVar16 = puVar5;
  }
  else {
    puVar17 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar17 = puVar5;
    }
    func_0x000107c61434(puVar5);
    func_0x000107c60288();
    func_0x000107c5fe30(unaff_x22 + 0x10);
    puVar11 = *(ulong **)(unaff_x22 + 0x18);
    uVar10 = *(ulong *)(unaff_x22 + 0x20);
    lVar13 = *(long *)(unaff_x22 + 0x28);
    uVar12 = *(ulong *)(unaff_x22 + 0x30);
    puVar16 = *(undefined **)(unaff_x22 + 0x10);
  }
LAB_101b56538:
  do {
    lVar14 = lVar13;
    uVar15 = uVar12;
    uVar12 = uVar15;
    lVar13 = lVar14;
    if ((long)puVar16 < 0) {
      func_0x000107c602ac();
      if (puVar17 == (undefined *)0x0) {
LAB_101b56628:
        bVar4 = false;
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        goto LAB_101b56634;
      }
      *(undefined **)(unaff_x22 + 0x40) = puVar17;
      func_0x000107c6147c(unaff_x22 + 0x38,unaff_x22 + 0x40,PTR___syXlN_11034f1a0 + 8,uVar6,7);
      puVar17 = *(undefined **)(unaff_x22 + 0x38);
    }
    else {
      while (uVar12 == 0) {
        lVar1 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b5668c);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x40 >> 6) <= lVar1) {
          uVar15 = 0;
          goto LAB_101b56628;
        }
        lVar13 = lVar1;
        uVar12 = puVar11[lVar1];
      }
      uVar2 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar17 = *(undefined **)
                 (*(long *)(puVar16 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                 lVar13 * 0x200);
      *(undefined **)(unaff_x22 + 0x38) = puVar17;
      func_0x000107c61174(puVar17);
      uVar12 = uVar12 - 1 & uVar12;
    }
    bVar4 = puVar17 != (undefined *)0x0;
    if (puVar17 == (undefined *)0x0) goto LAB_101b56634;
    puVar8 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    func_0x000107c61168(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
    puVar9 = puVar17;
    func_0x000107c6148c(puVar17,puVar8);
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61170();
      goto LAB_101b56538;
    }
    func_0x000107c3d0e4();
    func_0x000107c61170();
    if (puVar9 == (undefined *)0x0) {
LAB_101b56634:
      func_0x000100deaf38(puVar16,puVar11,uVar10,lVar14,uVar15);
      func_0x000107c6142c(puVar5);
                    /* WARNING: Could not recover jumptable at 0x000101b5667c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(bVar4);
      return;
    }
  } while( true );
}



/* Entry: 101b5668c; end: 101b566a3;  */

void FUN_101b5668c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b566a4,0,0);
  return;
}



/* Entry: 101b566a4; end: 101b5676b;  */

void FUN_101b566a4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101b566ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101b5676c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11044b150;
  func_0x000107c613fc(&UNK_11044b150,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101b56bb0,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101b5676c; end: 101b567ab;  */

void FUN_101b5676c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b567ac,0,0);
  return;
}



/* Entry: 101b567ac; end: 101b567bb;  */

void FUN_101b567ac(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101b567b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101b567bc; end: 101b56843;  */

void FUN_101b567bc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar2,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b56844; end: 101b5687b;  */

undefined1  [16] FUN_101b56844(void)

{
  return ZEXT816(0);
}



/* Entry: 101b5687c; end: 101b568eb;  */

undefined8 FUN_101b5687c(undefined8 param_1)

{
  FUN_101b57414();
  return param_1;
}



/* Entry: 101b568ec; end: 101b56b5f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101b568ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  undefined8 *puVar8;
  undefined8 auStack_f0 [4];
  long lStack_d0;
  undefined **ppuStack_c8;
  undefined *apuStack_c0 [3];
  long lStack_a8;
  long lStack_98;
  long lStack_90;
  long *aplStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar7 = *param_5;
  ppuStack_68 = &PTR_DAT_11044ab80;
  auStack_f0[0] = param_4;
  aplStack_88[0] = param_5;
  lStack_70 = lVar7;
  func_0x000100083b20(apuStack_c0);
  puVar1 = apuStack_c0[0];
  func_0x000107c4d7dc();
  func_0x000107c61180();
  func_0x000107c61170(apuStack_c0[0]);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae568;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    puVar1 = puVar2;
    func_0x000107c4d7d4();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
  }
  func_0x000100083b20(&lStack_90);
  uVar3 = *(undefined8 *)(lStack_90 + _DAT_113091bd0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_90);
  func_0x000100083b20(&lStack_98);
  uVar4 = *(undefined8 *)(lStack_98 + _DAT_113091bb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_98);
  FUN_101b55160(aplStack_88,apuStack_c0);
  func_0x0001000c6518(apuStack_c0,lStack_a8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_a8 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)auStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  auStack_f0[1] = *puVar8;
  ppuStack_c8 = &PTR_DAT_11044ab80;
  lVar5 = 0;
  lStack_d0 = lVar7;
  func_0x000101b53c58();
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_f0 + 1,lVar7);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar8);
  uVar6 = *puVar8;
  *(long *)(lVar5 + 0x48) = lVar7;
  *(undefined ***)(lVar5 + 0x50) = &PTR_DAT_11044ab80;
  *(undefined8 *)(lVar5 + 0x30) = uVar6;
  func_0x000107c6157c(param_3);
  func_0x0001000834e4(aplStack_88);
  *(undefined8 *)(lVar5 + 0x70) = param_3;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined **)(lVar5 + 0x10) = puVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar4;
  *(undefined8 *)(lVar5 + 0x28) = auStack_f0[0];
  *(undefined8 *)(lVar5 + 0x58) = 0x101b53a98;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined **)(lVar5 + 0x68) = &UNK_10d9d7e98;
  func_0x0001000834e4(auStack_f0 + 1);
  func_0x0001000834e4(apuStack_c0);
  return lVar5;
}



/* Entry: 101b56b60; end: 101b56b9b;  */

undefined8 FUN_101b56b60(undefined8 param_1,undefined8 param_2)

{
  FUN_101b5741c(param_2,param_1);
  return param_2;
}



/* Entry: 101b56b9c; end: 101b56baf;  */

void FUN_101b56b9c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  return;
}



/* Entry: 101b56bb0; end: 101b56bfb;  */

void FUN_101b56bb0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101b56bfc(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101b56bfc; end: 101b56c0f;  */

void FUN_101b56bfc(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
  return;
}



/* Entry: 101b56c10; end: 101b56c53;  */

void FUN_101b56c10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d36e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIScene_1126a5d50;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d36e40 = puVar1;
  return;
}



/* Entry: 101b56c54; end: 101b56c93;  */

void FUN_101b56c54(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101b56c94; end: 101b56d93;  */

void FUN_101b56c94(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b56cdc;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b53ab4,0,0);
  return;
}



/* Entry: 101b56d94; end: 101b56e57;  */

void FUN_101b56d94(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  lVar12 = *(long *)(unaff_x20 + 0x50);
  lVar11 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar8 = *(long *)(unaff_x20 + 0x60);
  lVar13 = *(long *)(unaff_x20 + 0x68);
  plVar9 = (long *)0x3b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x101b56e5c;
  plVar9[0x6d] = lVar13;
  plVar9[0x6c] = lVar8;
  plVar9[0x6b] = lVar4;
  plVar9[0x6a] = lVar12;
  plVar9[0x69] = lVar11;
  plVar9[0x68] = lVar10;
  plVar9[0x67] = lVar7;
  plVar9[0x66] = lVar3;
  plVar9[0x65] = lVar6;
  plVar9[100] = lVar2;
  plVar9[99] = lVar5;
  plVar9[0x62] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b559dc,0,0);
  return;
}



/* Entry: 101b56e58; end: 101b56e5f;  */

void FUN_101b56e58(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b5633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b56e60; end: 101b56f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b56e60(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_38;
  
  puVar2 = PTR_PTR_1126ae958;
  func_0x000107c610f8(PTR_PTR_1126ae958);
  func_0x000107c453e4();
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  uVar3 = *(undefined8 *)(lStack_38 + _DAT_113083f80);
  func_0x000107c61174();
  func_0x000107c61170(lVar1);
  uVar4 = uVar3;
  func_0x000107c49e14();
  if (((int)uVar4 == 0) && (uVar4 = uVar3, func_0x000107c49e24(), (int)uVar4 == 0)) {
    func_0x000100083b20(&lStack_38);
    func_0x000107c5bcb8();
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c52790(puVar2);
  puVar5 = PTR_PTR_1126ae780;
  func_0x000107c610f8(PTR_PTR_1126ae780);
  func_0x000107c453e4();
  func_0x000107c52c5c();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  return puVar5;
}



/* Entry: 101b56f98; end: 101b57057;  */

/* WARNING: Removing unreachable block (ram,0x000101b571c4) */

long FUN_101b56f98(undefined8 param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar13;
  undefined1 auVar17 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined2 uStack_88;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar5 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  uVar6 = 0x800000010efffb10;
  lVar8 = -0x2fffffffffffffd9;
  func_0x000107c5fadc(0xd000000000000027);
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar5 != 0) {
    lVar8 = lVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x000107c3dd54();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5729c);
      (*pcVar4)();
    }
    lVar10 = lVar9;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar10 == 0) {
      func_0x000107c615e8(lVar5);
      lVar8 = lVar5;
    }
    else {
      lVar8 = lVar10;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar10);
      uVar1 = (uint)(uVar6 >> 0x20);
      uVar7 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar7 == 0) {
          if ((uVar6 & 0xff000000000000) == 0) goto LAB_101b571cc;
        }
        else {
          lVar9 = (long)(int)lVar8;
          lVar10 = lVar8 >> 0x20;
LAB_101b5717c:
          if (lVar9 == lVar10) goto LAB_101b571cc;
        }
        func_0x000107c610f8(PTR_PTR_1126bd730);
        func_0x00010006c00c(lVar8,uVar6);
        lVar9 = lVar8;
        FUN_101b56f98(lVar8,uVar6);
        func_0x00010006c090(lVar8,uVar6);
        if (lVar9 != 0) {
          FUN_101b4ed70(&uStack_c0,lVar9,lVar5);
          auVar3._8_8_ = uStack_a8;
          auVar3._0_8_ = uStack_b0;
          auVar16._8_8_ = uStack_a8;
          auVar16._0_8_ = uStack_b0;
          uVar11 = auStack_a0._0_8_;
          auVar2._8_8_ = uStack_b8;
          auVar2._0_8_ = uStack_c0;
          auVar17._8_8_ = uStack_b8;
          auVar17._0_8_ = uStack_c0;
          auVar15 = NEON_ext(auStack_a0,auStack_a0,8,1);
          uVar12 = auVar15._0_8_;
          auVar16 = NEON_ext(auVar16,auVar3,8,1);
          uVar13 = auVar16._0_8_;
          auVar17 = NEON_ext(auVar17,auVar2,8,1);
          uVar14 = auVar17._0_8_;
          func_0x000107c61170(lVar9);
          func_0x00010006c090(lVar8,uVar6);
          goto LAB_101b57200;
        }
      }
      else if (uVar7 == 2) {
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar10 = *(long *)(lVar8 + 0x18);
        goto LAB_101b5717c;
      }
LAB_101b571cc:
      func_0x000107c615e8(lVar5);
      func_0x00010006c090(lVar8,uVar6);
    }
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_b0 = 0;
  uVar11 = uStack_b0;
  uVar14 = uStack_b0;
  uVar13 = uStack_b0;
  uVar12 = uStack_b0;
  uStack_c0 = uStack_b0;
LAB_101b57200:
  extraout_x8[1] = uVar14;
  *extraout_x8 = uStack_c0;
  extraout_x8[3] = uVar13;
  extraout_x8[2] = uStack_b0;
  extraout_x8[5] = uVar12;
  extraout_x8[4] = uVar11;
  extraout_x8[6] = uStack_90;
  *(undefined2 *)(extraout_x8 + 7) = uStack_88;
  return lVar8;
}



/* Entry: 101b57058; end: 101b5729b;  */

/* WARNING: Removing unreachable block (ram,0x000101b571c4) */

void FUN_101b57058(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar12;
  undefined1 auVar16 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined2 uStack_48;
  
  uVar7 = 0x800000010efffb10;
  uVar5 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027);
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (param_2 != 0) {
    lVar9 = param_2;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar6 = lVar9;
    func_0x000107c3dd54();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5729c);
      (*pcVar4)();
    }
    lVar9 = lVar6;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar9 == 0) {
      func_0x000107c615e8(param_2);
    }
    else {
      lVar6 = lVar9;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar9);
      uVar1 = (uint)(uVar7 >> 0x20);
      uVar8 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar8 == 0) {
          if ((uVar7 & 0xff000000000000) == 0) goto LAB_101b571cc;
        }
        else {
          lVar9 = (long)(int)lVar6;
          lVar10 = lVar6 >> 0x20;
LAB_101b5717c:
          if (lVar9 == lVar10) goto LAB_101b571cc;
        }
        func_0x000107c610f8(PTR_PTR_1126bd730);
        func_0x00010006c00c(lVar6,uVar7);
        lVar9 = lVar6;
        FUN_101b56f98(lVar6,uVar7);
        func_0x00010006c090(lVar6,uVar7);
        if (lVar9 != 0) {
          FUN_101b4ed70(&uStack_80,lVar9,param_2);
          auVar3._8_8_ = uStack_68;
          auVar3._0_8_ = uStack_70;
          auVar15._8_8_ = uStack_68;
          auVar15._0_8_ = uStack_70;
          uVar5 = auStack_60._0_8_;
          auVar2._8_8_ = uStack_78;
          auVar2._0_8_ = uStack_80;
          auVar16._8_8_ = uStack_78;
          auVar16._0_8_ = uStack_80;
          auVar14 = NEON_ext(auStack_60,auStack_60,8,1);
          uVar11 = auVar14._0_8_;
          auVar15 = NEON_ext(auVar15,auVar3,8,1);
          uVar12 = auVar15._0_8_;
          auVar16 = NEON_ext(auVar16,auVar2,8,1);
          uVar13 = auVar16._0_8_;
          func_0x000107c61170(lVar9);
          func_0x00010006c090(lVar6,uVar7);
          goto LAB_101b57200;
        }
      }
      else if (uVar8 == 2) {
        lVar9 = *(long *)(lVar6 + 0x10);
        lVar10 = *(long *)(lVar6 + 0x18);
        goto LAB_101b5717c;
      }
LAB_101b571cc:
      func_0x000107c615e8(param_2);
      func_0x00010006c090(lVar6,uVar7);
    }
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_70 = 0;
  uVar5 = uStack_70;
  uVar13 = uStack_70;
  uVar12 = uStack_70;
  uVar11 = uStack_70;
  uStack_80 = uStack_70;
LAB_101b57200:
  param_1[1] = uVar13;
  *param_1 = uStack_80;
  param_1[3] = uVar12;
  param_1[2] = uStack_70;
  param_1[5] = uVar11;
  param_1[4] = uVar5;
  param_1[6] = uStack_50;
  *(undefined2 *)(param_1 + 7) = uStack_48;
  return;
}



/* Entry: 101b5729c; end: 101b573e7;  */

void FUN_101b5729c(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined2 uStack_58;
  
  uVar1 = param_3;
  FUN_101b56e60(param_3,param_4);
  uVar2 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010efffae0);
  uVar3 = param_2;
  func_0x000107c3ebd8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) {
LAB_101b57338:
    func_0x000107c61574(param_4);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(param_2);
    func_0x000107c61574(param_3);
    lStack_90 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar3);
    if ((uVar4 & 1) != 0) goto LAB_101b57338;
    FUN_101b57058(&lStack_90,param_2,uVar1);
    func_0x000107c615e8(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61170(uVar1);
    if (lStack_90 != 0) goto LAB_101b5736c;
  }
  uStack_58 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
LAB_101b5736c:
  *param_1 = lStack_90;
  param_1[2] = lStack_80;
  param_1[1] = lStack_88;
  param_1[4] = lStack_70;
  param_1[3] = lStack_78;
  param_1[6] = lStack_60;
  param_1[5] = lStack_68;
  *(undefined2 *)(param_1 + 7) = uStack_58;
  return;
}



/* Entry: 101b573e8; end: 101b57413;  */

long FUN_101b573e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101b57414; end: 101b5741b;  */

void FUN_101b57414(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
  return;
}



/* Entry: 101b5741c; end: 101b57467;  */

undefined8 * FUN_101b5741c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  func_0x000107c615f0();
  return param_1;
}



/* Entry: 101b57468; end: 101b574f3;  */

undefined8 * FUN_101b57468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  return param_1;
}



/* Entry: 101b574f4; end: 101b57557;  */

undefined8 * FUN_101b574f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615e8(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  return param_1;
}



/* Entry: 101b57558; end: 101b57663;  */

int FUN_101b57558(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x3a) != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 101b57664; end: 101b576cf;  */

void FUN_101b57664(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001002acda0();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112e03ef0,&UNK_10d9d7550);
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010095c380();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 101b576d0; end: 101b577e3;  */

long FUN_101b576d0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112e03ef0,&UNK_10d9d7550);
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010095c380();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101b577e4; end: 101b577f7;  */

void FUN_101b577e4(undefined8 param_1,char param_2)

{
  if (param_2 == -1) {
    return;
  }
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  return;
}



/* Entry: 101b577f8; end: 101b5781b;  */

void FUN_101b577f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b5781c; end: 101b5783b;  */

void FUN_101b5781c(void)

{
  func_0x000101b57730();
  return;
}



/* Entry: 101b5783c; end: 101b5786b;  */

void FUN_101b5783c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + 0x10));
  return;
}



/* Entry: 101b5786c; end: 101b5789f;  */

void FUN_101b5786c(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  uVar5 = 0;
  func_0x0001002acda0();
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11044b240;
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000100082288(0,lVar7);
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12;
  lStack_108 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar6 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  lVar13 = unaff_x20[3];
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar3 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar3 != 0) {
    lVar10 = *(long *)(*unaff_x20 + 0x68);
    func_0x000107c61428((long)unaff_x20 + lVar10,auStack_100,0,0);
    (**(code **)(lVar9 + 0x10))(lVar8,(long)unaff_x20 + lVar10,lVar4);
    lVar10 = lVar8;
    func_0x000107c614c4(lVar8,lVar4);
    if ((int)lVar10 == 1) {
      pcVar11 = *(code **)(lStack_108 + 0x20);
      (*pcVar11)(lVar6,lVar8,lVar7);
      (*pcVar11)(param_1,lVar6,lVar7);
      return;
    }
    (**(code **)(lVar9 + 8))(lVar8,lVar4);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  func_0x000107c61428(puVar1,auStack_80,0,0);
  if (*(char *)((long)puVar1 + 0x11) == '\x01') {
    func_0x000107c6157c(unaff_x20);
  }
  else {
    uStack_120 = *puVar1;
    uVar5 = puVar1[1];
    uVar2 = *(undefined1 *)(puVar1 + 2);
    lStack_118 = param_1;
    func_0x000107c61428(0x1138153c0,auStack_c0,0,0);
    func_0x00010008a8e8(0x1138153c0,auStack_e8);
    if (lStack_d0 != 0) {
      func_0x000104857124(auStack_e8,auStack_a8);
      lStack_128 = lVar9;
      func_0x0001000a8868(auStack_a8,uStack_90);
      pcStack_130 = *(code **)(lStack_88 + 8);
      func_0x000107c61580(unaff_x20,2);
      lVar9 = lStack_128;
      (*pcStack_130)(uStack_120,uVar5,uVar2,&UNK_104857794,unaff_x20,uStack_90,lStack_88);
      func_0x000107c61574(unaff_x20);
      func_0x0001000834e4(auStack_a8);
      param_1 = lStack_118;
      goto code_r0x000100083dec;
    }
    func_0x000107c6157c(unaff_x20);
    func_0x00010008a938(auStack_e8);
    param_1 = lStack_118;
  }
  func_0x000100083ec8(unaff_x20);
code_r0x000100083dec:
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar3 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100083eb4);
    (*pcVar11)();
  }
  lVar6 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar6,auStack_a8,0,0);
  (**(code **)(lVar9 + 0x10))(lVar12,(long)unaff_x20 + lVar6,lVar4);
  lVar8 = lVar12;
  func_0x000107c614c4(lVar12,lVar4);
  lVar6 = lStack_110;
  if ((int)lVar8 == 1) {
    pcVar11 = *(code **)(lStack_108 + 0x20);
    (*pcVar11)(lStack_110,lVar12,lVar7);
    (*pcVar11)(param_1,lVar6,lVar7);
    func_0x000107c61574(unaff_x20);
    return;
  }
  (**(code **)(lVar9 + 8))(lVar12,lVar4);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100083ec8);
  (*pcVar11)();
}



/* Entry: 101b578a0; end: 101b578af;  */

void FUN_101b578a0(void)

{
  return;
}



/* Entry: 101b578b0; end: 101b579e3;  */

void FUN_101b578b0(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  undefined1 uStack_39;
  long lStack_38;
  
  func_0x00010028941c();
  *(undefined8 *)(unaff_x20 + 0x140) = param_1;
  *(undefined1 *)(unaff_x20 + 0x148) = 0;
  dVar5 = *(double *)(unaff_x20 + 0xf8);
  if (dVar5 <= 0.0) {
LAB_101b578f0:
    uVar2 = 0;
  }
  else {
    dVar6 = *(double *)(unaff_x20 + 0xf0);
    bVar1 = false;
    if ((0.0 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
      bVar1 = dVar6 < dVar5;
    }
    if (!bVar1) goto LAB_101b578f0;
    FUN_101b51f20(*(undefined8 *)(unaff_x20 + 0x110));
    if ((param_2 & 1) == 0) {
      FUN_101b5a3f0(1);
      func_0x000100083b20(&lStack_38);
      lVar4 = lStack_38;
      goto LAB_101b57918;
    }
    func_0x000100083b20(&lStack_38);
    lVar4 = lStack_38;
    lVar3 = lStack_38;
    func_0x000107c43a80();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      FUN_101b579e4(lVar4);
      func_0x000107c615e8(lVar4);
      return;
    }
    uVar2 = 3;
  }
  FUN_101b5a3f0(uVar2);
  func_0x000100083b20(&lStack_38);
  lVar4 = lStack_38;
LAB_101b57918:
  uStack_39 = 1;
  func_0x000100b60084(&uStack_39);
  func_0x000107c61574(lVar4);
  return;
}



/* Entry: 101b579e4; end: 101b58063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b579e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(char *)(unaff_x20 + 0x119) == '\x01') {
    uVar5 = param_1;
    func_0x000107c42f54();
    func_0x000107c61180();
    pcStack_80 = FUN_101b58064;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101b58078;
    puStack_88 = &UNK_11044b610;
    ppuVar3 = &puStack_a0;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_78);
    uVar7 = uVar5;
    func_0x000107c43494(uVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar5);
    pcStack_80 = FUN_101b580d0;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_100f17afc;
    puStack_88 = &UNK_11044b638;
    ppuVar3 = &puStack_a0;
    func_0x000107c60bc4(ppuVar3);
    uVar6 = uVar7;
    func_0x000107c4c280(uVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c402d0(param_1);
    func_0x000107c61180();
    pcStack_80 = (code *)0x101b58100;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10117fbb4;
    puStack_88 = &UNK_11044b660;
    ppuVar3 = &puStack_a0;
    func_0x000107c60bc4(ppuVar3);
    uVar7 = param_1;
    func_0x000107c5e628(param_1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    puVar2 = &UNK_11044b530;
    func_0x000107c613fc(&UNK_11044b530,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    pcStack_80 = FUN_101b5b58c;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1008561f0;
    puStack_88 = &UNK_11044b688;
    ppuVar3 = &puStack_a0;
    puStack_78 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_78);
    uVar5 = uVar7;
    func_0x000107c5c320(uVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c3e924(uVar5);
    func_0x000107c61170(uVar6);
  }
  else {
    func_0x000107c402d0();
    func_0x000107c61180();
    puVar2 = &UNK_11044b530;
    func_0x000107c613fc(&UNK_11044b530,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    pcStack_80 = FUN_101b5b440;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101218f4c;
    puStack_88 = &UNK_11044b570;
    ppuVar3 = &puStack_a0;
    puStack_78 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_78);
    uVar5 = param_1;
    func_0x000107c5c320(param_1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c3e924(uVar5);
  }
  func_0x000107c61170(uVar5);
  func_0x000100083b20(&lStack_a8);
  uVar7 = *(undefined8 *)(lStack_a8 + _DAT_113097748);
  func_0x000107c615f0(uVar7);
  func_0x000107c61170(lStack_a8);
  uVar5 = uVar7;
  func_0x000107c40fa4(uVar7);
  func_0x000107c61180();
  func_0x000107c615e8(uVar7);
  puVar2 = &UNK_11044b530;
  puVar4 = puVar2;
  func_0x000107c613fc(&UNK_11044b530,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_80 = (code *)0x101b5b448;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1013d3a70;
  puStack_88 = &UNK_11044b598;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  uVar7 = uVar5;
  func_0x000107c5c320(uVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c3e924(uVar7);
  func_0x000107c61170(uVar7);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar5 = uVar6;
  func_0x000107c41b80(uVar6);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c613fc(&UNK_11044b530,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_80 = FUN_101b5b450;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100c1de60;
  puStack_88 = &UNK_11044b5c0;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  uVar7 = uVar5;
  func_0x000107c5c320(uVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c3e924(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c419f0(uVar6);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c613fc(&UNK_11044b530,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_80 = (code *)0x101b5b470;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100c1de60;
  puStack_88 = &UNK_11044b5e8;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  uVar5 = uVar6;
  func_0x000107c5c320(uVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  puVar4 = puVar2;
  func_0x000107c613fc(&UNK_11044b530,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar1 = PTR___sytN_11034f1b0 + 8;
  uVar5 = 6;
  func_0x0001001ca524(6,0,0x58,2,0,0,&UNK_10d9d8150,puVar4,puVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  puVar4 = puVar2;
  func_0x000107c613fc(&UNK_11044b530,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uVar5 = 6;
  func_0x0001001ca524(6,0,0x58,2,0,0,&UNK_10d9d8160,puVar4,puVar1);
  func_0x000107c61574(puVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x178);
  *(undefined8 *)(unaff_x20 + 0x178) = uVar5;
  func_0x000107c61574(uVar7);
  func_0x000107c613fc(&UNK_11044b530,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uVar5 = 6;
  func_0x0001001ca524(6,0,0x58,2,0,0,&UNK_10d9d8170,puVar2,puVar1);
  func_0x000107c61574(puVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x180);
  *(undefined8 *)(unaff_x20 + 0x180) = uVar5;
  func_0x000107c61574(uVar7);
  return;
}



/* Entry: 101b58064; end: 101b58077;  */

void FUN_101b58064(void)

{
  func_0x000107c3ebcc();
  return;
}



/* Entry: 101b58078; end: 101b580cf;  */

uint FUN_101b58078(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  return (uint)uVar3 & 1;
}



/* Entry: 101b580d0; end: 101b5824b;  */

void FUN_101b580d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 101b5824c; end: 101b58413;  */

void FUN_101b5824c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_50;
  char cStack_48;
  
  uStack_50 = 0;
  cStack_48 = '\x01';
  puStack_60 = &uStack_50;
  func_0x0001000d1128(FUN_101b5b6a0,auStack_70,FUN_101b58414,0,0x101b58418,0,0x101b5841c,0);
  uVar4 = uStack_50;
  if (cStack_48 != '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    lVar7 = param_2 + 0x10;
    func_0x000107c61648();
    if (lVar7 != 0) {
      lVar6 = *(long *)(lVar7 + 0x188);
      func_0x000107c6157c(lVar6);
      func_0x000107c61574(lVar7);
      func_0x000107c4b940(*(undefined8 *)(lVar6 + 0x10));
      puVar1 = PTR___sytN_11034f1b0;
      lVar7 = *(long *)(lVar6 + 0x18);
      if (lVar7 != 0) {
        func_0x000107c6157c(lVar7);
        func_0x000107c5fd50();
        func_0x000107c61574(lVar7);
      }
      puVar2 = &UNK_11044b530;
      func_0x000107c613fc(&UNK_11044b530,0x18,7);
      func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61648(param_2);
      func_0x000107c61644(puVar2 + 0x10,param_2);
      func_0x000107c61574(param_2);
      puVar3 = &UNK_11044b6c0;
      func_0x000107c613fc(&UNK_11044b6c0,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined8 *)(puVar3 + 0x18) = uVar4;
      uVar4 = 6;
      func_0x0001001ca524(6,0,0x58,2,0,0,&UNK_10d9d81a8,puVar3,puVar1 + 8);
      func_0x000107c61574(puVar3);
      uVar5 = *(undefined8 *)(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x18) = uVar4;
      func_0x000107c61574(uVar5);
      func_0x000107c5d278(*(undefined8 *)(lVar6 + 0x10));
      func_0x000107c61574(lVar6);
    }
  }
  return;
}



/* Entry: 101b58414; end: 101b58437;  */

void FUN_101b58414(void)

{
  return;
}



/* Entry: 101b58438; end: 101b584df;  */

void FUN_101b58438(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x101b584a8,lVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101b584a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b584e0; end: 101b584f7;  */

void FUN_101b584e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b584f8,0,0);
  return;
}



/* Entry: 101b584f8; end: 101b58573;  */

void FUN_101b584f8(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b58574,lVar1,0);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x000101b58570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b58574; end: 101b58637;  */

void FUN_101b58574(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x38);
  *(undefined1 *)(lVar2 + 0x129) = 0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = uVar1;
  if (*(char *)(lVar2 + 0x138) == '\x01') {
LAB_101b58610:
    func_0x000107c61574(uVar3);
  }
  else {
    FUN_101b59718(uVar1);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    if ((param_3 & 0xff) == 0) {
      FUN_101b59c28();
      func_0x000107c61574(uVar3);
      uVar3 = 0;
    }
    else {
      if (((uint)param_3 & 0xff) != 1) goto LAB_101b58610;
      FUN_101b59fc4();
      func_0x000107c61574(uVar3);
      uVar3 = 1;
    }
    FUN_101b5b3ac(uVar1,param_2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b58638,0,0);
  return;
}



/* Entry: 101b58638; end: 101b58647;  */

void FUN_101b58638(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x000101b58644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b58648; end: 101b58713;  */

void FUN_101b58648(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_11044b530;
  func_0x000107c613fc(&UNK_11044b530,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648(param_2);
  func_0x000107c61644(puVar1 + 0x10,param_2);
  func_0x000107c61574(param_2);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar3 = 6;
  func_0x0001001ca524(6,0,0x58,2,0,0,param_3,puVar1,uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 101b58714; end: 101b5872b;  */

void FUN_101b58714(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b5872c,0,0);
  return;
}



/* Entry: 101b5872c; end: 101b587a7;  */

void FUN_101b5872c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b587a8,lVar1,0);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x000101b587a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b587a8; end: 101b5887b;  */

void FUN_101b587a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  lVar1 = *(long *)(unaff_x22 + 0x38);
  lVar3 = lVar1;
  if ((param_1 & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x139) = 1;
    lVar2 = *(long *)(unaff_x22 + 0x38);
    lVar3 = lVar2;
    if ((*(byte *)(lVar1 + 0x138) & 1) == 0) {
      FUN_101b59718(lVar2);
      lVar3 = *(long *)(unaff_x22 + 0x38);
      if ((param_3 & 0xff) == 0) {
        FUN_101b59c28();
        func_0x000107c61574(lVar3);
        FUN_101b5b3ac(lVar2,param_2,0);
        goto LAB_101b58858;
      }
      if (((uint)param_3 & 0xff) == 1) {
        FUN_101b59fc4();
        func_0x000107c61574(lVar3);
        FUN_101b5b3ac(lVar2,param_2,1);
        goto LAB_101b58858;
      }
    }
  }
  func_0x000107c61574(lVar3);
LAB_101b58858:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101b5b97c,0,0);
  return;
}



/* Entry: 101b5887c; end: 101b58893;  */

void FUN_101b5887c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b58894,0,0);
  return;
}



/* Entry: 101b58894; end: 101b58943;  */

void FUN_101b58894(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    piVar2 = *(int **)(lVar5 + 0x88);
    uVar3 = *(undefined8 *)(lVar5 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar5);
    iVar1 = *piVar2;
    plVar4 = (long *)(ulong)(uint)piVar2[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101b58944;
                    /* WARNING: Could not recover jumptable at 0x000101b58928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101b58940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


