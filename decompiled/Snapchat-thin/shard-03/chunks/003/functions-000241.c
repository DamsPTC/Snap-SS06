/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10279eb84; end: 10279eb97;  */

bool FUN_10279eb84(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10279eb98; end: 10279ec43;  */

void FUN_10279eb98(void)

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



/* Entry: 10279ec44; end: 10279ec53;  */

void FUN_10279ec44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10279ec54; end: 10279ed2f;  */

void FUN_10279ec54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000100083b20(&uStack_58);
  uVar1 = 0xd000000000000036;
  func_0x000107c5fadc(0xd000000000000036,0x800000010f0bbcd0);
  uVar2 = uStack_58;
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 10279ed30; end: 10279ed4f;  */

void FUN_10279ed30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279ed50,0,0);
  return;
}



/* Entry: 10279ed50; end: 10279edd7;  */

void FUN_10279ed50(undefined8 param_1,long param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x10);
  FUN_1027a0324();
  *(long *)(unaff_x22 + 0x38) = param_2;
  *(long *)(unaff_x22 + 0x40) = param_4;
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10279edd8;
  lVar1 = *(long *)(unaff_x22 + 0x30);
  lVar5 = *(long *)(unaff_x22 + 0x18);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  plVar4[9] = *(long *)(unaff_x22 + 0x28);
  plVar4[10] = lVar1;
  plVar4[7] = lVar5;
  plVar4[8] = lVar2;
  plVar4[5] = param_2;
  plVar4[6] = param_4;
  *(undefined1 *)(plVar4 + 0xf) = param_3;
  plVar4[4] = lVar3;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xb] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279eed8,0,0);
  return;
}



/* Entry: 10279edd8; end: 10279ee63;  */

void FUN_10279edd8(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  uVar4 = *(undefined8 *)(lVar2 + 0x38);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010279ee60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 10279ee64; end: 10279eed7;  */

void FUN_10279ee64(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined1 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279eed8,0,0);
  return;
}



/* Entry: 10279eed8; end: 10279f073;  */

void FUN_10279eed8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x22;
  long *plVar17;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar9 = *(undefined1 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  lVar11 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar5,1,1,lVar11);
  puVar12 = &UNK_11054a930;
  func_0x000107c613fc(&UNK_11054a930,0x50,7);
  *(undefined **)(unaff_x22 + 0x60) = puVar12;
  *(undefined8 *)(puVar12 + 0x10) = uVar1;
  *(undefined8 *)(puVar12 + 0x18) = uVar4;
  *(undefined8 *)(puVar12 + 0x20) = uVar8;
  puVar12[0x28] = uVar9;
  *(undefined8 *)(puVar12 + 0x30) = uVar3;
  *(undefined8 *)(puVar12 + 0x38) = uVar7;
  *(undefined8 *)(puVar12 + 0x40) = uVar2;
  *(undefined8 *)(puVar12 + 0x48) = uVar6;
  plVar17 = (long *)0xe0;
  func_0x000107c61438(uVar3,2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar6);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar17;
  lVar11 = 0x112ebe7b8;
  func_0x0001000285a8(0x112ebe7b8,&UNK_10dada4a0);
  lVar13 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar14 = 0x112ebe7c0;
  FUN_1027a0c28(0x112ebe7c0,0x112ebe7b8,&UNK_10dada4a0);
  *plVar17 = unaff_x22;
  plVar17[1] = (long)FUN_10279f074;
  puVar10 = PTR___ss5ErrorWS_11034ee10;
  lVar15 = *(long *)(unaff_x22 + 0x58);
  plVar17[0x16] = unaff_x22 + 0x10;
  plVar17[0x17] = unaff_x22 + 0x18;
  plVar17[0x14] = lVar14;
  plVar17[0x15] = (long)puVar10;
  plVar17[0x12] = (long)&UNK_1106a6678;
  plVar17[0x13] = lVar13;
  plVar17[0x10] = (long)puVar12;
  plVar17[0x11] = lVar11;
  plVar17[0xe] = lVar15;
  plVar17[0xf] = (long)&UNK_10dada498;
  lVar11 = *(long *)(lVar13 + -8);
  plVar17[0x18] = lVar11;
  uVar16 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar17[0x19] = uVar16;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
  return;
}



/* Entry: 10279f074; end: 10279f0f7;  */

void FUN_10279f074(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x68));
  func_0x000107c61574(uVar2);
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar3 + 0x70) = param_1;
    func_0x0001000abe54(*(undefined8 *)(lVar3 + 0x58));
    func_0x000107c6142c(uVar2);
    pcVar1 = FUN_10279f0f8;
  }
  else {
    pcVar1 = FUN_10279f144;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279f0f8; end: 10279f143;  */

void FUN_10279f0f8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010279f140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
             *(undefined1 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 10279f144; end: 10279f197;  */

void FUN_10279f144(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x0001000abe54(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010279f194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10279f198; end: 10279f203;  */

void FUN_10279f198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279f204,0,0);
  return;
}



/* Entry: 10279f204; end: 10279f49f;  */

void FUN_10279f204(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 in_x3;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long unaff_x22;
  ulong uVar20;
  long *plVar21;
  undefined8 uVar22;
  
  uVar18 = *(ulong *)(unaff_x22 + 0x20);
  if (uVar18 >> 0x3e == 0) {
    uVar20 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar20 = uVar18 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar18) {
      uVar20 = uVar18;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar20 != 0) {
    uVar12 = uVar20 & ((long)uVar20 >> 0x3f ^ 0xffffffffffffffffU);
    ppuVar14 = (undefined **)0x0;
    func_0x00010279ff28(0);
    if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10279f4a0);
      (*pcVar5)();
    }
    uVar19 = 0;
    lVar17 = *(long *)(unaff_x22 + 0x20);
    do {
      if ((uVar18 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(lVar17 + 0x20 + uVar19 * 8);
        func_0x000107c61174();
        uVar13 = uVar12;
        ppuVar15 = ppuVar14;
        uVar16 = in_x3;
      }
      else {
        uVar13 = *(ulong *)(unaff_x22 + 0x20);
        ppuVar15 = &PTR_PTR_1126aae40;
        uVar16 = 0x112ebb490;
        uVar6 = uVar19;
        func_0x0001027a0168();
      }
      uVar7 = uVar6;
      FUN_1027a0324();
      uVar12 = uVar13;
      ppuVar14 = ppuVar15;
      in_x3 = uVar16;
      func_0x000107c61170(uVar6);
      uVar6 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar6) {
        ppuVar14 = (undefined **)0x1;
        uVar12 = uVar6 + 1;
        func_0x00010279ff28(1 < *(ulong *)(puVar8 + 0x18));
      }
      uVar19 = uVar19 + 1;
      *(ulong *)(puVar8 + 0x10) = uVar6 + 1;
      *(ulong *)(puVar8 + uVar6 * 0x20 + 0x20) = uVar7;
      *(ulong *)(puVar8 + uVar6 * 0x20 + 0x28) = uVar13;
      puVar8[uVar6 * 0x20 + 0x30] = (char)ppuVar15;
      *(undefined8 *)(puVar8 + uVar6 * 0x20 + 0x38) = uVar16;
    } while (uVar20 != uVar19);
  }
  *(undefined **)(unaff_x22 + 0x50) = puVar8;
  uVar16 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = puVar8;
  lVar17 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar17 + -8) + 0x38))(uVar2,1,1,lVar17);
  puVar8 = &UNK_11054a850;
  func_0x000107c613fc(&UNK_11054a850,0x30,7);
  *(undefined **)(unaff_x22 + 0x58) = puVar8;
  *(undefined8 *)(puVar8 + 0x10) = uVar16;
  *(undefined8 *)(puVar8 + 0x18) = uVar22;
  *(undefined8 *)(puVar8 + 0x20) = uVar1;
  *(undefined8 *)(puVar8 + 0x28) = uVar3;
  plVar21 = (long *)0xe0;
  func_0x000107c6157c(uVar16);
  func_0x000107c61434(uVar22);
  func_0x000107c61434(uVar3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar21;
  lVar17 = 0x112ebe6f0;
  func_0x0001000285a8(0x112ebe6f0,&UNK_10dada3a8);
  lVar9 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar10 = 0x112ebe6f8;
  FUN_1027a0c28(0x112ebe6f8,0x112ebe6f0,&UNK_10dada3a8);
  *plVar21 = unaff_x22;
  plVar21[1] = (long)FUN_10279f4a0;
  puVar4 = PTR___ss5ErrorWS_11034ee10;
  lVar11 = *(long *)(unaff_x22 + 0x48);
  plVar21[0x16] = unaff_x22 + 0x10;
  plVar21[0x17] = unaff_x22 + 0x18;
  plVar21[0x14] = lVar10;
  plVar21[0x15] = (long)puVar4;
  plVar21[0x12] = (long)&UNK_1106a65f8;
  plVar21[0x13] = lVar9;
  plVar21[0x10] = (long)puVar8;
  plVar21[0x11] = lVar17;
  plVar21[0xe] = lVar11;
  plVar21[0xf] = (long)&UNK_10dada3a0;
  lVar17 = *(long *)(lVar9 + -8);
  plVar21[0x18] = lVar17;
  uVar18 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar21[0x19] = uVar18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
  return;
}



/* Entry: 10279f4a0; end: 10279f547;  */

void FUN_10279f4a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x60));
  if (unaff_x20 != 0) {
    func_0x000107c61574(*(undefined8 *)(lVar4 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10279f548,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  uVar2 = *(undefined8 *)(lVar4 + 0x58);
  uVar5 = *(undefined8 *)(lVar4 + 0x48);
  func_0x0001000abe54(uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010279f544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1);
  return;
}



/* Entry: 10279f548; end: 10279f58f;  */

void FUN_10279f548(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x0001000abe54(uVar1);
  func_0x000107c6142c(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010279f58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10279f590; end: 10279f62b;  */

void FUN_10279f590(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x22;
  long lVar6;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_7;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  lVar6 = param_2[3];
  plVar5 = (long *)0x80;
  lVar2 = param_2[2];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10279f62c;
  plVar5[9] = param_6;
  plVar5[10] = param_3;
  plVar5[7] = param_4;
  plVar5[8] = param_5;
  plVar5[5] = lVar1;
  plVar5[6] = lVar6;
  *(char *)(plVar5 + 0xf) = (char)lVar2;
  plVar5[4] = lVar3;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xb] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279eed8,0,0);
  return;
}



/* Entry: 10279f62c; end: 10279f6b3;  */

void FUN_10279f62c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x48) = param_3;
    *(undefined8 *)(lVar2 + 0x30) = param_4;
    *(undefined8 *)(lVar2 + 0x38) = param_2;
    *(undefined8 *)(lVar2 + 0x40) = param_1;
    pcVar1 = FUN_10279f6b4;
  }
  else {
    pcVar1 = (code *)0x10279f6dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279f6b4; end: 10279f707;  */

void FUN_10279f6b4(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar4[1] = uVar1;
  *(undefined1 *)(puVar4 + 2) = uVar2;
  puVar4[3] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010279f6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10279f708; end: 10279f757;  */

void FUN_10279f708(code *param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010279f754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10279f758; end: 10279f77b;  */

void FUN_10279f758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279f77c,0,0);
  return;
}



/* Entry: 10279f77c; end: 10279f803;  */

void FUN_10279f77c(undefined8 param_1,long param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x10);
  FUN_1027a0324();
  *(long *)(unaff_x22 + 0x38) = param_2;
  *(long *)(unaff_x22 + 0x40) = param_4;
  plVar6 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1027a10dc;
  lVar1 = *(long *)(unaff_x22 + 0x30);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  plVar6[9] = *(long *)(unaff_x22 + 0x28);
  plVar6[10] = lVar1;
  plVar6[7] = lVar3;
  plVar6[8] = lVar2;
  plVar6[5] = param_2;
  plVar6[6] = param_4;
  *(undefined1 *)(plVar6 + 0xf) = param_3;
  plVar6[4] = lVar5;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xb] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279eed8,0,0);
  return;
}



/* Entry: 10279f804; end: 10279f87b;  */

void FUN_10279f804(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10279f87c;
  plVar2[7] = param_4;
  plVar2[8] = lVar3;
  plVar2[5] = param_2;
  plVar2[6] = param_3;
  plVar2[4] = param_1;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[9] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279f204,0,0);
  return;
}



/* Entry: 10279f87c; end: 10279f8c3;  */

void FUN_10279f87c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010279f8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10279f8c4; end: 10279f93b;  */

void FUN_10279f8c4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_10;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_9;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  uVar1 = *param_2;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_11;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar1;
  uVar3 = param_2[1];
  uVar2 = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x100) = param_2[2];
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x108) = param_2[3];
  uVar3 = param_2[4];
  *(undefined8 *)(unaff_x22 + 0x118) = param_2[5];
  *(undefined8 *)(unaff_x22 + 0x110) = uVar3;
  func_0x00010006c00c(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279f93c,0,0);
  return;
}



/* Entry: 10279f93c; end: 10279fa3f;  */

/* WARNING: Removing unreachable block (ram,0x00010279f988) */

void FUN_10279f93c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar4 = PTR_PTR_1126b25c0;
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x0001010282b0(uVar5,uVar2,puVar4);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar5;
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000100083b20(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  func_0x0001000a8868(unaff_x22 + 0x80,uVar2);
  piVar7 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10279fa40;
                    /* WARNING: Could not recover jumptable at 0x00010279fa3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(uVar5,uVar2,lVar3);
  return;
}



/* Entry: 10279fa40; end: 10279fa9f;  */

void FUN_10279fa40(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x130) = param_1;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10279faa0;
  }
  else {
    pcVar1 = FUN_10279fec4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279faa0; end: 10279fd67;  */

void FUN_10279faa0(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 *puVar12;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x0001000834e4(unaff_x22 + 0x80);
  func_0x000107c5b198();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x140) = uVar9;
  func_0x000100083b20(unaff_x22 + 0xa8);
  puVar10 = *(undefined1 **)(unaff_x22 + 0xa8);
  puVar2 = puVar10;
  func_0x000107c5b1b4();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  puVar10 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x148) = puVar10;
  func_0x000107c61170();
  if (puVar10 != (undefined1 *)0x0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar11 = *(undefined8 *)(unaff_x22 + 200);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x150;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10279fd68;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    puVar4 = PTR_PTR_1126b25b8;
    func_0x000107c610f8(PTR_PTR_1126b25b8);
    func_0x000107c5fadc(uVar5,uVar11);
    func_0x000107c46814(puVar4);
    func_0x000107c61170(uVar5);
    puVar6 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    func_0x000107c5fc48(uVar7,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c5fadc(uVar9,uVar1);
    puVar8 = &UNK_11054a958;
    func_0x000107c613fc(&UNK_11054a958,0x18,7);
    puVar12 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar12 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar8 + 0x10) = lVar3;
    *(code **)(unaff_x22 + 0x70) = FUN_1027a0cac;
    *(undefined **)(unaff_x22 + 0x78) = puVar8;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1013838b0;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11054a970;
    func_0x000107c60bc4();
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c42290(puVar10);
    func_0x000107c61180();
    func_0x000107c60bd0(puVar12);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_1027a0c6c();
  puVar8 = &UNK_11054aa18;
  func_0x000107c613f8(&UNK_11054aa18,puVar2,0,0);
  *puVar2 = 0;
  func_0x000107c61654();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(uVar11);
  **(undefined8 **)(unaff_x22 + 0xe8) = puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010279fd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10279fd68; end: 10279fda7;  */

void FUN_10279fd68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279fda8,0,0);
  return;
}



/* Entry: 10279fda8; end: 10279fec3;  */

void FUN_10279fda8(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
  if (*(char *)(unaff_x22 + 0x150) == '\x01') {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
    puVar10 = *(undefined8 **)(unaff_x22 + 0xb0);
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar5);
    *puVar10 = uVar8;
    puVar10[1] = uVar9;
    puVar10[2] = uVar1;
    puVar10[3] = uVar3;
    puVar10[4] = uVar7;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar7);
  }
  else {
    FUN_1027a0c6c();
    puVar4 = &UNK_11054aa18;
    func_0x000107c613f8(&UNK_11054aa18,param_1,0,0);
    *param_1 = 1;
    func_0x000107c61654();
    func_0x000107c615e8(uVar6);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x140));
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(uVar7);
    **(undefined8 **)(unaff_x22 + 0xe8) = puVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010279fec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10279fec4; end: 10279ff43;  */

void FUN_10279fec4(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x0001000834e4(unaff_x22 + 0x80);
  **(undefined8 **)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x138);
                    /* WARNING: Could not recover jumptable at 0x00010279ff08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10279ff44; end: 1027a0323;  */

undefined * FUN_10279ff44(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a0060);
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
    puVar3 = (undefined *)0x112ebe7c8;
    func_0x0001000285a8(0x112ebe7c8,&UNK_10dada4a8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11054aa90);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1027a0324; end: 1027a089f;  */

undefined * FUN_1027a0324(undefined *param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  
  puVar3 = param_1;
  func_0x000107c4e090();
  func_0x000107c61180();
  puVar16 = puVar3;
  func_0x000107c44fcc();
  func_0x000107c61180();
  func_0x000107c615e8(puVar3);
  puVar3 = puVar16;
  func_0x000107c44fcc();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5faec();
  func_0x000107c61170(puVar3);
  puVar3 = puVar16;
  func_0x000107c41210();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1133ba608;
  func_0x000107c5faec();
  puVar18 = puVar3;
  lVar11 = param_2;
  func_0x000107c5faec();
  if (puVar5 == puVar18 && param_2 == lVar11) {
    func_0x000107c6142c(lVar11);
    func_0x000107c6142c(param_2);
  }
  else {
    lVar12 = param_2;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar11);
    func_0x000107c6142c(param_2);
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = PTR_PTR_1133ba610;
      func_0x000107c5faec();
      puVar18 = puVar3;
      lVar11 = lVar12;
      func_0x000107c5faec();
      if ((puVar5 == puVar18) && (lVar12 == lVar11)) {
        func_0x000107c6142c(lVar11);
        func_0x000107c6142c(lVar12);
      }
      else {
        lVar15 = lVar12;
        func_0x000107c605b8();
        func_0x000107c6142c(lVar11);
        func_0x000107c6142c(lVar12);
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = PTR_PTR_1133ba618;
          func_0x000107c5faec();
          puVar18 = puVar3;
          lVar11 = lVar15;
          func_0x000107c5faec();
          if ((puVar5 == puVar18) && (lVar15 == lVar11)) {
            func_0x000107c6142c(lVar11);
            func_0x000107c6142c(lVar15);
          }
          else {
            lVar12 = lVar15;
            func_0x000107c605b8();
            func_0x000107c6142c(lVar11);
            func_0x000107c6142c(lVar15);
            if (((ulong)puVar5 & 1) == 0) {
              puVar5 = PTR_PTR_1133ba620;
              func_0x000107c5faec();
              puVar18 = puVar3;
              lVar11 = lVar12;
              func_0x000107c5faec();
              if ((puVar5 == puVar18) && (lVar12 == lVar11)) {
                func_0x000107c6142c(lVar11);
                func_0x000107c6142c(lVar12);
              }
              else {
                lVar15 = lVar12;
                func_0x000107c605b8();
                func_0x000107c6142c(lVar11);
                func_0x000107c6142c(lVar12);
                if (((ulong)puVar5 & 1) == 0) {
                  puVar5 = PTR_PTR_1133ba628;
                  func_0x000107c5faec();
                  puVar18 = puVar3;
                  lVar11 = lVar15;
                  func_0x000107c5faec();
                  if ((puVar5 == puVar18) && (lVar15 == lVar11)) {
                    func_0x000107c6142c(lVar11);
                    func_0x000107c6142c(lVar15);
                  }
                  else {
                    func_0x000107c605b8(puVar5,lVar15,puVar18,lVar11,0);
                    func_0x000107c6142c(lVar11);
                    func_0x000107c6142c(lVar15);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x000107c615e8(puVar16);
  func_0x000107c61170(puVar3);
  func_0x000107c5b1f8();
  func_0x000107c61180();
  uVar6 = 0;
  FUN_1027a0ce0(0,0x112ebb2e0,&PTR_PTR_1126aae38);
  puVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar6);
  func_0x000107c61170(param_1);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar16 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar16 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar16 = puVar3;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (puVar16 == (undefined *)0x0) {
    func_0x000107c6142c(puVar3);
  }
  else {
    func_0x00010279ff0c(0,(ulong)puVar16 & ((long)puVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a08a0);
      (*pcVar2)();
    }
    puVar18 = (undefined *)0x0;
    do {
      puVar13 = puVar3;
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        puVar7 = *(undefined **)(puVar3 + (long)puVar18 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar7 = puVar18;
        func_0x0001027a0168(puVar18,puVar3,&PTR_PTR_1126aae38,0x112ebb2e0);
      }
      puVar8 = puVar7;
      func_0x000107c5b198();
      func_0x000107c61180();
      puVar9 = puVar8;
      func_0x000107c3eea8();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      puVar8 = puVar9;
      func_0x000107c5ee30();
      puVar14 = puVar13;
      func_0x000107c61170(puVar9);
      puVar9 = puVar7;
      func_0x000107c5c958();
      func_0x000107c61180();
      puVar10 = puVar9;
      func_0x000107c5faec();
      puVar17 = puVar14;
      func_0x000107c61170(puVar9);
      puVar9 = puVar7;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
        func_0x000107c61170(puVar7);
        puVar19 = (undefined *)0x0;
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar19 = puVar9;
        func_0x000107c5faec();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar7);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        func_0x00010279ff0c(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar18 = puVar18 + 1;
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar5 + uVar1 * 0x30 + 0x20) = puVar8;
      *(undefined **)(puVar5 + uVar1 * 0x30 + 0x28) = puVar13;
      *(undefined **)(puVar5 + uVar1 * 0x30 + 0x30) = puVar10;
      *(undefined **)(puVar5 + uVar1 * 0x30 + 0x38) = puVar14;
      *(undefined **)(puVar5 + uVar1 * 0x30 + 0x40) = puVar19;
      *(undefined **)(puVar5 + uVar1 * 0x30 + 0x48) = puVar17;
    } while (puVar16 != puVar18);
    func_0x000107c6142c(puVar3);
  }
  return puVar4;
}



/* Entry: 1027a08a0; end: 1027a092f;  */

void FUN_1027a08a0(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x20;
  long unaff_x22;
  long lVar11;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  plVar10 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x1027a10e4;
  plVar10[2] = param_1;
  plVar10[3] = param_3;
  lVar7 = *param_2;
  lVar3 = param_2[1];
  lVar11 = param_2[3];
  plVar9 = (long *)0x80;
  lVar6 = param_2[2];
  func_0x000107c615b8();
  plVar10[4] = (long)plVar9;
  *plVar9 = (long)plVar10;
  plVar9[1] = (long)FUN_10279f62c;
  plVar9[9] = lVar5;
  plVar9[10] = lVar1;
  plVar9[7] = lVar4;
  plVar9[8] = lVar2;
  plVar9[5] = lVar3;
  plVar9[6] = lVar11;
  *(char *)(plVar9 + 0xf) = (char)lVar6;
  plVar9[4] = lVar7;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xb] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279eed8,0,0);
  return;
}



/* Entry: 1027a0930; end: 1027a093f;  */

undefined1  [16] FUN_1027a0930(void)

{
  return ZEXT816(0x11054a890);
}



/* Entry: 1027a0940; end: 1027a095f;  */

void FUN_1027a0940(void)

{
  func_0x000107c61168(&PTR_PTR_112ebe740);
  return;
}



/* Entry: 1027a0960; end: 1027a09f7;  */

long FUN_1027a0960(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1027a09f8; end: 1027a0a63;  */

undefined8 * FUN_1027a09f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1027a0a64; end: 1027a0aaf;  */

undefined8 * FUN_1027a0a64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1027a0ab0; end: 1027a0b47;  */

int FUN_1027a0ab0(int *param_1,int param_2)

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



/* Entry: 1027a0b48; end: 1027a0beb;  */

void FUN_1027a0b48(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar5 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027a0bec;
  plVar3[0x1c] = lVar5;
  plVar3[0x1b] = lVar1;
  plVar3[0x19] = lVar6;
  plVar3[0x1a] = lVar4;
  plVar3[0x17] = lVar2;
  plVar3[0x18] = lVar7;
  plVar3[0x16] = param_1;
  lVar2 = *param_2;
  plVar3[0x1d] = param_3;
  plVar3[0x1e] = lVar2;
  lVar7 = param_2[1];
  lVar4 = param_2[1];
  plVar3[0x20] = param_2[2];
  plVar3[0x1f] = lVar7;
  plVar3[0x21] = param_2[3];
  lVar7 = param_2[4];
  plVar3[0x23] = param_2[5];
  plVar3[0x22] = lVar7;
  func_0x00010006c00c(lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279f93c,0,0);
  return;
}



/* Entry: 1027a0bec; end: 1027a0c27;  */

void FUN_1027a0bec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027a0c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027a0c28; end: 1027a0c6b;  */

void FUN_1027a0c28(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSTsMc_11034dd08;
    func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1027a0c6c; end: 1027a0cab;  */

void FUN_1027a0c6c(void)

{
  undefined *puVar1;
  
  if (puRam00000001134c87e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dada53c;
  func_0x000107c61520(&UNK_10dada53c,&UNK_11054aa18);
  puRam00000001134c87e0 = puVar1;
  return;
}



/* Entry: 1027a0cac; end: 1027a0cdf;  */

void FUN_1027a0cac(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined1 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1027a0ce0; end: 1027a0d1f;  */

void FUN_1027a0ce0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1027a0d20; end: 1027a0e83;  */

int FUN_1027a0d20(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1027a0d9c;
        goto LAB_1027a0d80;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1027a0d80:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1027a0d9c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1027a0e84; end: 1027a0eb7;  */

/* WARNING: Possible PIC construction at 0x0001027a0ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a0ea8) */

void FUN_1027a0e84(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[3]);
  return;
}



/* Entry: 1027a0eb8; end: 1027a0f9b;  */

undefined8 * FUN_1027a0eb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 1027a0f9c; end: 1027a0ff3;  */

undefined8 * FUN_1027a0f9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1027a0ff4; end: 1027a109b;  */

int FUN_1027a0ff4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1027a109c; end: 1027a10db;  */

void FUN_1027a109c(void)

{
  undefined *puVar1;
  
  if (puRam00000001134c87e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dada514;
  func_0x000107c61520(&UNK_10dada514,&UNK_11054aa18);
  puRam00000001134c87e8 = puVar1;
  return;
}



/* Entry: 1027a10dc; end: 1027a10fb;  */

void FUN_1027a10dc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  undefined8 uVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  uVar4 = *(undefined8 *)(lVar2 + 0x38);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010279ee60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 1027a10fc; end: 1027a11a7;  */

void FUN_1027a10fc(void)

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



/* Entry: 1027a11a8; end: 1027a11ab;  */

void FUN_1027a11a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe7d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dada580;
  func_0x000107c61520(&UNK_10dada580,&UNK_11054ac40);
  puRam0000000112ebe7d0 = puVar1;
  return;
}



/* Entry: 1027a11ac; end: 1027a11eb;  */

void FUN_1027a11ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe7d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dada580;
  func_0x000107c61520(&UNK_10dada580,&UNK_11054ac40);
  puRam0000000112ebe7d0 = puVar1;
  return;
}



/* Entry: 1027a11ec; end: 1027a1357;  */

int FUN_1027a11ec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1027a1268;
        goto LAB_1027a124c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1027a124c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1027a1268:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1027a1358; end: 1027a140b;  */

undefined1 * FUN_1027a1358(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1027a140c; end: 1027a14ab;  */

int FUN_1027a140c(int *param_1,int param_2)

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



/* Entry: 1027a14ac; end: 1027a1517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a14ac(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001003264a8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebe7e0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027a1518; end: 1027a151f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a1518(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001003264a8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebe7e0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1027a1520; end: 1027a156b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a1520(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebe7e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027a156c; end: 1027a15cb; -[_TtC36MemTwoCameraRollSnapDocProcessingAPI41MemTwoCameraRollSnapDocProcessingServices init] */

void FUN_1027a156c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoCameraRollSnapDocProcessingAPI.MemTwoCameraRollSnapDocProcessingServices"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a1598);
  (*pcVar1)();
}



/* Entry: 1027a15cc; end: 1027a15db;  */

undefined1  [16] FUN_1027a15cc(void)

{
  return ZEXT816(0x11054ad18);
}



/* Entry: 1027a15dc; end: 1027a15eb; -[_TtC36MemTwoCameraRollSnapDocProcessingAPI41MemTwoCameraRollSnapDocProcessingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a15dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebe7e0));
  return;
}



/* Entry: 1027a15ec; end: 1027a165b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027a15ec(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  FUN_1027a165c(param_1,unaff_x20 + _DAT_112ebe810);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 1027a165c; end: 1027a169f;  */

long FUN_1027a165c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1027a16a0; end: 1027a1827;  */

undefined * FUN_1027a16a0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  
  func_0x000107c4a77c();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4a77c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c6142c();
    func_0x0001027a1c7c();
    puVar4 = &UNK_11054aef8;
    func_0x000107c613f8(&UNK_11054aef8,param_2,0,0);
    *param_2 = 0;
    param_2[1] = 0;
    func_0x0001000285a8(0x112ebe818,&UNK_10dada750);
    puVar5 = puVar4;
    func_0x00010488904c(puVar4);
    puVar6 = puVar5;
    func_0x000103edf0bc();
    func_0x000107c61574(puVar5);
    func_0x000107c614ac(puVar4);
  }
  else {
    func_0x0001000285a8(0x112ebe818,&UNK_10dada750);
    puVar6 = &UNK_11054ae60;
    func_0x000107c613fc(&UNK_11054ae60,0x28,7);
    *(ulong *)(puVar6 + 0x10) = uVar2;
    *(undefined8 **)(puVar6 + 0x18) = param_2;
    *(undefined8 *)(puVar6 + 0x20) = unaff_x20;
    func_0x000107c61174();
    uVar3 = 0x40;
    func_0x000104887c7c(0x40,0,0x48,3,0xd000000000000028,0x800000010f0bbd60,&UNK_10dada760,puVar6);
    func_0x000107c61574(puVar6);
    func_0x000103edf0bc();
    func_0x000107c61574(uVar3);
  }
  return puVar6;
}



/* Entry: 1027a1828; end: 1027a1843;  */

void FUN_1027a1828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027a1844,0,0);
  return;
}



/* Entry: 1027a1844; end: 1027a19f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a1844(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar9;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x000107c61168();
  lVar5 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  func_0x000107c61434(uVar3);
  lVar6 = lVar5;
  func_0x000107c5fc48(lVar5,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar5);
  func_0x000107c42fcc();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  puVar7 = puVar4;
  func_0x000107c43638();
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0x58) = puVar7;
  func_0x000107c61170();
  if (puVar7 != (undefined8 *)0x0) {
    lVar5 = *(long *)(unaff_x22 + 0x50) + _DAT_112ebe810;
    uVar2 = *(undefined8 *)(lVar5 + 0x18);
    lVar6 = *(long *)(lVar5 + 0x20);
    func_0x0001000a8868(lVar5,uVar2);
    piVar9 = *(int **)(lVar6 + 0x10);
    iVar1 = *piVar9;
    plVar8 = (long *)(ulong)(uint)piVar9[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1027a19f4;
                    /* WARNING: Could not recover jumptable at 0x0001027a1990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar9))(plVar8,unaff_x22 + 0x10,puVar7,uVar2,lVar6);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x0001027a1c7c();
  func_0x000107c613f8(&UNK_11054aef8,puVar4,0,0);
  *puVar4 = uVar2;
  puVar4[1] = uVar3;
  func_0x000107c61654();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61434(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001027a19f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1027a19f4; end: 1027a1a4f;  */

void FUN_1027a19f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1027a1a50;
  }
  else {
    pcVar1 = FUN_1027a1ba0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1027a1a50; end: 1027a1b9f;  */

void FUN_1027a1a50(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,puVar1);
  (**(code **)(lVar4 + 8))(puVar1,lVar4);
  puVar2 = puVar1;
  func_0x000107c41214();
  func_0x000107c61180();
  func_0x000107c61170();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0001027a1c7c();
    func_0x000107c613f8(&UNK_11054aef8,puVar1,0,0);
    puVar1[1] = 1;
    *puVar1 = 0;
    func_0x000107c61654();
    func_0x000107c61170(uVar5);
    func_0x0001000834e4(unaff_x22 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar6 = *(undefined8 **)(unaff_x22 + 0x38);
    puVar1 = puVar2;
    func_0x000107c5ee30(puVar2);
    func_0x000107c61170(puVar2);
    puVar3 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    puVar2 = puVar1;
    func_0x000107c5ee20(puVar1,lVar4);
    func_0x000107c45ae0();
    func_0x000107c61170(puVar2);
    func_0x00010006c090(puVar1,lVar4);
    func_0x000107c61170(uVar5);
    *puVar6 = puVar3;
    func_0x0001000834e4(unaff_x22 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001027a1b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1027a1ba0; end: 1027a1bd3;  */

void FUN_1027a1ba0(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0001027a1bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027a1bd4; end: 1027a1c3f;  */

void FUN_1027a1bd4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027a1c40;
  plVar3[9] = lVar2;
  plVar3[10] = lVar4;
  plVar3[7] = param_1;
  plVar3[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027a1844,0,0);
  return;
}



/* Entry: 1027a1c40; end: 1027a1cbb;  */

void FUN_1027a1c40(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027a1c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027a1cbc; end: 1027a1d17; -[_TtC33MemTwoSnapDocEditorImplementation23MemTwoSnapDocEditorImpl createSnapDocWithMediaLibraryItemWithMediaLibraryItem:] */

void FUN_1027a1cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1027a16a0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027a1d18; end: 1027a1d77; -[_TtC33MemTwoSnapDocEditorImplementation23MemTwoSnapDocEditorImpl init] */

void FUN_1027a1d18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoSnapDocEditorImplementation.MemTwoSnapDocEditorImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a1d44);
  (*pcVar1)();
}



/* Entry: 1027a1d78; end: 1027a1d87; -[_TtC33MemTwoSnapDocEditorImplementation23MemTwoSnapDocEditorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a1d78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112ebe810))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebe810));
  return;
}



/* Entry: 1027a1d88; end: 1027a1da7;  */

void FUN_1027a1d88(void)

{
  func_0x000107c61168(&PTR_PTR_112860cc8);
  return;
}



/* Entry: 1027a1da8; end: 1027a1dbf;  */

void FUN_1027a1da8(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1027a1dc0; end: 1027a1f23;  */

undefined8 * FUN_1027a1dc0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 1027a1f24; end: 1027a2023;  */

int FUN_1027a1f24(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 1027a2024; end: 1027a210b;  */

undefined1  [16] FUN_1027a2024(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0xd00000000000001f;
  if (param_2 == 0) {
    uVar2 = 0x800000010f0bbe20;
    uVar1 = 0xd000000000000024;
  }
  else if (param_2 == 1) {
    uVar2 = 0x800000010f0bbdd0;
  }
  else {
    func_0x000107c602fc(0x3c);
    func_0x000107c5fb78(0xd00000000000002f,0x800000010f0bbdf0);
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c5fb78(0x7373696d20736920,0xeb00000000676e69);
    uVar1 = 0;
    uVar2 = 0xe000000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1027a210c; end: 1027a2157;  */

undefined1  [16] FUN_1027a210c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  
  uVar3 = *unaff_x20;
  lVar1 = unaff_x20[1];
  uVar2 = 0xd00000000000001f;
  if (lVar1 == 0) {
    uVar3 = 0x800000010f0bbe20;
    uVar2 = 0xd000000000000024;
  }
  else if (lVar1 == 1) {
    uVar3 = 0x800000010f0bbdd0;
  }
  else {
    func_0x000107c602fc(0x3c);
    func_0x000107c5fb78(0xd00000000000002f,0x800000010f0bbdf0);
    func_0x000107c5fb78(uVar3,lVar1);
    func_0x000107c5fb78(0x7373696d20736920,0xeb00000000676e69);
    uVar2 = 0;
    uVar3 = 0xe000000000000000;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1027a2158; end: 1027a21e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1027a2158(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_58;
  long lStack_50;
  undefined8 auStack_48 [5];
  
  func_0x000100083b20(auStack_48);
  func_0x00010391b8c8(auStack_48);
  func_0x000107c61170(auStack_48[0]);
  lVar1 = 0;
  FUN_1027a1d88();
  lVar2 = lVar1;
  func_0x000107c610f8();
  FUN_1027a165c(auStack_48,lVar2 + _DAT_112ebe810);
  plVar3 = &lStack_58;
  lStack_58 = lVar2;
  lStack_50 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_48);
  return plVar3;
}



/* Entry: 1027a21e4; end: 1027a2203;  */

undefined1  [16] FUN_1027a21e4(void)

{
  return ZEXT816(0x11054af80);
}



/* Entry: 1027a2204; end: 1027a226f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a2204(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010033df9c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebe860) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027a2270; end: 1027a2277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a2270(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010033df9c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebe860) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1027a2278; end: 1027a22eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a2278(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebe860) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027a22ec; end: 1027a234b; -[_TtC22MemTwoSnapDocEditorAPI27MemTwoSnapDocEditorServices init] */

void FUN_1027a22ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoSnapDocEditorAPI.MemTwoSnapDocEditorServices",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a2318);
  (*pcVar1)();
}



/* Entry: 1027a234c; end: 1027a235b;  */

undefined1  [16] FUN_1027a234c(void)

{
  return ZEXT816(0x11054b050);
}



/* Entry: 1027a235c; end: 1027a236b; -[_TtC22MemTwoSnapDocEditorAPI27MemTwoSnapDocEditorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a235c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebe860));
  return;
}



/* Entry: 1027a236c; end: 1027a2397;  */

long FUN_1027a236c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1027a2398; end: 1027a23b3;  */

void FUN_1027a2398(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\0') && (param_1 = param_2, param_3 != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRetain_11034f320)(param_1);
  return;
}



/* Entry: 1027a23b4; end: 1027a23df;  */

void FUN_1027a23b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  func_0x000107c61170(*param_1);
  puVar1 = param_1 + 1;
  if ((*(char *)(param_1 + 3) != '\0') && (puVar1 = param_1 + 2, *(char *)(param_1 + 3) != '\x01'))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*puVar1);
  return;
}



/* Entry: 1027a23e0; end: 1027a23fb;  */

void FUN_1027a23e0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\0') && (param_1 = param_2, param_3 != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
  return;
}



/* Entry: 1027a23fc; end: 1027a24bf;  */

undefined8 * FUN_1027a23fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar3 = param_2[2];
  uVar2 = *(undefined1 *)(param_2 + 3);
  func_0x000107c61174();
  FUN_1027a2398(uVar1,uVar3,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 3) = uVar2;
  return param_1;
}



/* Entry: 1027a24c0; end: 1027a250f;  */

undefined8 * FUN_1027a24c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar4);
  uVar2 = *(undefined1 *)(param_2 + 3);
  uVar4 = param_1[1];
  uVar1 = param_1[2];
  uVar5 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar5;
  uVar3 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar2;
  FUN_1027a23e0(uVar4,uVar1,uVar3);
  return param_1;
}



/* Entry: 1027a2510; end: 1027a25af;  */

int FUN_1027a2510(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1027a25b0; end: 1027a25ef;  */

void FUN_1027a25b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dada9f4;
  func_0x000107c61520(&UNK_10dada9f4,&UNK_11054b148);
  puRam0000000112ebe890 = puVar1;
  return;
}


