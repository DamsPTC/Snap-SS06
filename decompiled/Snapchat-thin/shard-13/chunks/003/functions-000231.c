/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a4536b8; end: 10a453a1f;  */

/* WARNING: Possible PIC construction at 0x00010a0551f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a0551f4) */
/* WARNING: Removing unreachable block (ram,0x00010a055214) */
/* WARNING: Removing unreachable block (ram,0x00010a055224) */
/* WARNING: Removing unreachable block (ram,0x00010a05524c) */
/* WARNING: Removing unreachable block (ram,0x00010a055258) */
/* WARNING: Removing unreachable block (ram,0x00010a055274) */
/* WARNING: Removing unreachable block (ram,0x00010a055318) */
/* WARNING: Removing unreachable block (ram,0x00010a055324) */
/* WARNING: Removing unreachable block (ram,0x00010a05532c) */
/* WARNING: Removing unreachable block (ram,0x00010a055338) */
/* WARNING: Removing unreachable block (ram,0x00010a055344) */
/* WARNING: Removing unreachable block (ram,0x00010a05534c) */
/* WARNING: Removing unreachable block (ram,0x00010a055358) */
/* WARNING: Removing unreachable block (ram,0x00010a055270) */
/* WARNING: Removing unreachable block (ram,0x00010a055240) */

void FUN_10a4536b8(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long *plVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined ***pppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  long *extraout_x8;
  undefined *puVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined1 *unaff_x23;
  undefined *puVar24;
  int *unaff_x24;
  undefined *puVar25;
  int *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar26;
  long *plStack_150;
  ulong uStack_148;
  int iStack_140;
  undefined8 *puStack_138;
  char cStack_130;
  int aiStack_128 [2];
  undefined8 *puStack_120;
  ulong uStack_118;
  int iStack_110;
  undefined8 *puStack_108;
  char cStack_100;
  undefined1 auStack_f8 [24];
  byte bStack_e0;
  long lStack_d8;
  long *plStack_a0;
  undefined8 ***pppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  long lStack_38;
  
  puVar14 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a453a1c;
    FUN_10a054dac(param_1,&UNK_10f658d65,FUN_10a4768c8,0,param_1[3] + -8);
  }
  puVar14 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a453a1c;
    FUN_10a054dac(param_1,&DAT_10f6026e1,FUN_10a476964,1,param_1[3] + -8);
  }
  puVar14 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a453a1c;
    FUN_10a054dac(param_1,&UNK_10f658d74,FUN_10a476f4c,0,param_1[3] + -8);
  }
  puVar14 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a453a1c;
    FUN_10a054dac(param_1,&UNK_10f658d88,FUN_10a476fe4,0,param_1[3] + -8);
  }
  puVar14 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a453a1c;
    FUN_10a054dac(param_1,&DAT_10f658d97,FUN_10a47707c,1,param_1[3] + -8);
  }
  puVar14 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a453a1c;
    FUN_10a054dac(param_1,&UNK_10f658d9e,FUN_10a477174,0,param_1[3] + -8);
  }
  puVar14 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a453a1c;
    FUN_10a054dac(param_1,&UNK_10f658db4,FUN_10a477200,0,param_1[3] + -8);
  }
  puVar14 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a453a1c;
    FUN_10a054dac(param_1,&UNK_10f658dc8,FUN_10a47728c,1,param_1[3] + -8);
  }
  puVar14 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a453a1c;
    FUN_10a054dac(param_1,&UNK_10f658ddc,FUN_10a4773d8,1,param_1[3] + -8);
  }
  puVar14 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) == 0) {
    if (param_1[2] == param_1[3]) goto LAB_10a453a1c;
    FUN_10a054dac(param_1,&UNK_10f658dee,FUN_10a477498,1,param_1[3] + -8);
  }
  puVar14 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar14 & 1) != 0) {
    return;
  }
  lVar22 = param_1[3];
  if (param_1[2] == lVar22) {
LAB_10a453a1c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a453a20);
    (*pcVar6)();
  }
  piVar15 = (int *)&UNK_10f658dfb;
  pppuVar16 = &ppuStack_80;
  pppuVar7 = &ppuStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1[1] + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a054e90);
    (*pcVar6)();
  }
  plVar21 = (long *)*param_1;
  ppuVar23 = &puStack_78;
  puStack_78 = &UNK_10989e1b0;
  ppuStack_70 = &PTR_DAT_110b17718;
  pcStack_68 = FUN_10a477558;
  (**(code **)(*plVar21 + 0x2a0))(&ppuStack_80,plVar21,param_1[1] + 0x118,1,&puStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  plVar13 = plVar21;
  FUN_10a054628(lVar22 + -8);
  ppuVar9 = ppuStack_80;
  if (ppuStack_80 != (undefined **)0x0) {
    (**(code **)*ppuStack_80)();
    ppuVar9 = ppuStack_80;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar13 == 0) {
    __Unwind_Resume(ppuVar9);
  }
  (*(code *)*ppuStack_70)(&ppuStack_70);
  ppuVar10 = ppuVar9;
  func_0x000104bd46a0();
  plStack_a0 = (long *)&UNK_10f658dfb;
  pcStack_88 = FUN_10a054ebc;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = ppuVar10;
  pppuStack_90 = (undefined8 ***)&stack0xfffffffffffffff0;
  (**(code **)(*ppuVar10 + 0x58))();
  if (ppuVar11[0x59] < (undefined *)0x8) {
    ppuVar11[(long)(ppuVar11[0x59] + 0x4e)] = ppuVar11[0x5a];
    ppuVar11[0x59] = ppuVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(ppuVar11 + 0x4b);
  }
  ppuVar12 = ppuVar10;
  FUN_10a0551fc(ppuVar10,plVar13);
  FUN_10a055264(pppuVar16);
  aiStack_128[0] = 0;
  piVar3 = aiStack_128;
  if (pppuVar16 != (undefined ***)0x0) {
    piVar3 = piVar15;
  }
  func_0x00010a0580bc(auStack_f8,ppuVar10,piVar3);
  piVar3 = aiStack_128;
  if ((undefined1 *)0x1 < pppuVar16) {
    piVar3 = piVar15 + 4;
  }
  func_0x00010a058028(&uStack_148,ppuVar10,piVar3);
  uStack_118 = uStack_118 & 0xffffffffffffff00;
  cStack_100 = '\0';
  if (cStack_130 == '\x01') {
    uStack_118 = uStack_148;
    iStack_110 = iStack_140;
    if (iStack_140 == 3) {
      puStack_108 = puStack_138;
    }
    else if (iStack_140 == 2) {
      puStack_108 = (undefined8 *)CONCAT71(puStack_108._1_7_,puStack_138._0_1_);
    }
    else if (3 < iStack_140) {
      puStack_108 = puStack_138;
      puStack_138 = (undefined8 *)0x0;
    }
    iStack_140 = 0;
    cStack_100 = '\x01';
  }
  FUN_10a00bcd0(&plStack_150,ppuVar12,auStack_f8,&uStack_118);
  if (((cStack_100 == '\x01') && (3 < iStack_110)) && (puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
  }
  if (((cStack_130 == '\x01') && (3 < iStack_140)) && (puStack_138 != (undefined8 *)0x0)) {
    (**(code **)*puStack_138)();
  }
  if (2 < (ulong)bStack_e0) {
LAB_10a0551bc:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0551c0);
    (*pcVar6)();
  }
  (*(code *)(&PTR_FUN_110b9ebd0)[bStack_e0])(auStack_f8);
  if ((3 < aiStack_128[0]) && (puStack_120 != (undefined8 *)0x0)) {
    (**(code **)*puStack_120)();
  }
  FUN_10a05528c(extraout_x8,ppuVar10,&plStack_150);
  plVar13 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_150 + 1);
    do {
      uVar20 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar20 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar20 & 0x1fffffffc) == 4) {
      do {
        uVar20 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar20 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar20 - 1 == 0) {
        (**(code **)(*plStack_150 + 8))();
        plVar13 = plStack_150;
      }
    }
  }
  ppppuVar26 = (undefined8 ****)pppuStack_90;
  pcVar6 = pcStack_88;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    if (((cStack_100 == '\x01') && (3 < iStack_110)) && (puStack_108 != (undefined8 *)0x0)) {
      (**(code **)*puStack_108)();
    }
    if (((cStack_130 == '\x01') && (3 < iStack_140)) && (puStack_138 != (undefined8 *)0x0)) {
      (**(code **)*puStack_138)();
    }
    if (2 < (ulong)bStack_e0) goto LAB_10a0551bc;
    (*(code *)(&PTR_FUN_110b9ebd0)[bStack_e0])(auStack_f8);
    if ((3 < aiStack_128[0]) && (puStack_120 != (undefined8 *)0x0)) {
      (**(code **)*puStack_120)();
    }
    pppuVar7 = (undefined ***)&plStack_150;
    ppuVar9 = ppuVar11;
    plStack_a0 = plVar13;
    plVar21 = extraout_x8;
    ppuVar23 = ppuVar12;
    unaff_x23 = (undefined1 *)pppuVar16;
    unaff_x24 = piVar15;
    unaff_x25 = aiStack_128;
    ppppuVar26 = &pppuStack_90;
    pcVar6 = (code *)0x10a0551f4;
  }
  ppuVar10 = ppuVar11 + 0x4b;
  puVar17 = ppuVar11[0x59];
  puVar18 = puVar17 + -1;
  ppuVar11[0x59] = puVar18;
  if (puVar18 < (undefined *)0x8) {
    puVar17 = ppuVar10[(long)(puVar17 + 2)];
    if (ppuVar11[0x5a] == puVar17) {
      return;
    }
  }
  else {
    puVar17 = *(undefined **)(ppuVar11[0x57] + -8);
    ppuVar11[0x57] = ppuVar11[0x57] + -8;
    if (ppuVar11[0x5a] == puVar17) {
      return;
    }
  }
  *(undefined8 *)((long)pppuVar7 + -0x60) = unaff_x28;
  *(undefined8 *)((long)pppuVar7 + -0x58) = unaff_x27;
  *(undefined8 *)((long)pppuVar7 + -0x50) = unaff_x26;
  *(int **)((long)pppuVar7 + -0x48) = unaff_x25;
  *(int **)((long)pppuVar7 + -0x40) = unaff_x24;
  *(undefined1 **)((long)pppuVar7 + -0x38) = unaff_x23;
  *(undefined ***)((long)pppuVar7 + -0x30) = ppuVar23;
  *(long **)((long)pppuVar7 + -0x28) = plVar21;
  *(long **)((long)pppuVar7 + -0x20) = plStack_a0;
  *(undefined ***)((long)pppuVar7 + -0x18) = ppuVar9;
  *(undefined8 *****)((long)pppuVar7 + -0x10) = ppppuVar26;
  *(code **)((long)pppuVar7 + -8) = pcVar6;
  puVar18 = *ppuVar10;
  puVar19 = ppuVar11[0x4c];
  lVar22 = (long)puVar19 - (long)puVar18;
  puVar25 = (undefined *)(lVar22 >> 4);
  if (puVar25 < puVar17) {
    uVar20 = (long)puVar17 - (long)puVar25;
    puVar24 = ppuVar11[0x4d];
    if ((ulong)((long)puVar24 - (long)puVar19 >> 4) < uVar20) {
      if ((ulong)puVar17 >> 0x3c == 0) {
        puVar19 = (undefined *)((long)puVar24 - (long)puVar18 >> 3);
        if (puVar19 <= puVar17) {
          puVar19 = puVar17;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar24 - (long)puVar18)) {
          puVar19 = (undefined *)0xfffffffffffffff;
        }
        *(undefined ***)((long)pppuVar7 + -0x68) = ppuVar10;
        if ((ulong)puVar19 >> 0x3c == 0) {
          lVar8 = (long)puVar19 << 4;
          __Znwm();
          lVar2 = lVar8 + lVar22;
          _bzero(lVar2,uVar20 * 0x10);
          puVar25 = (undefined *)(lVar2 + (long)puVar25 * -0x10);
          _memcpy(puVar25,puVar18,lVar22);
          *ppuVar10 = puVar25;
          ppuVar11[0x4c] = (undefined *)(lVar2 + uVar20 * 0x10);
          ppuVar11[0x4d] = (undefined *)(lVar8 + (long)puVar19 * 0x10);
          *(undefined **)((long)pppuVar7 + -0x78) = puVar18;
          *(undefined **)((long)pppuVar7 + -0x70) = puVar24;
          *(undefined **)((long)pppuVar7 + -0x88) = puVar18;
          *(undefined **)((long)pppuVar7 + -0x80) = puVar18;
          func_0x00010988c1b8((undefined1 *)((long)pppuVar7 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(puVar19,uVar20 * 0x10);
    ppuVar11[0x4c] = puVar19 + uVar20 * 0x10;
  }
  else if (puVar17 < puVar25) {
    while (puVar19 != puVar18 + (long)puVar17 * 0x10) {
      puVar19 = puVar19 + -0x10;
      func_0x00010988c204(puVar19);
    }
    ppuVar11[0x4c] = puVar18 + (long)puVar17 * 0x10;
  }
code_r0x00010988c138:
  ppuVar11[0x5a] = puVar17;
  return;
}



/* Entry: 10a453a20; end: 10a453a27;  */

void FUN_10a453a20(void)

{
  return;
}



/* Entry: 10a453a28; end: 10a453ab7;  */

void FUN_10a453a28(undefined *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  undefined **extraout_x8_00;
  undefined1 *extraout_x9;
  code *extraout_x10;
  
  __ZNSt3__16chrono12steady_clock3nowEv();
  ppuVar1 = &PTR___tlv_bootstrap_11340df60;
  (*(code *)PTR___tlv_bootstrap_11340df60)();
  ppuVar2 = &PTR___tlv_bootstrap_11340d768;
  if (*(char *)ppuVar1 == '\0') {
    puVar3 = extraout_x9;
    (*extraout_x10)();
    *puVar3 = 1;
    puVar4 = extraout_x8;
    (*(code *)*extraout_x8)();
    puVar4[2] = 0;
    puVar4[1] = 0;
    *puVar4 = puVar4 + 1;
    ppuVar2 = extraout_x8_00;
  }
  (*(code *)*ppuVar2)();
  FUN_10a472774();
  ppuVar2[2] = param_1;
  return;
}



/* Entry: 10a453ab8; end: 10a453c37;  */

char ***** FUN_10a453ab8(undefined8 param_1,undefined8 param_2)

{
  char *****pppppcVar1;
  char *****pppppcVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  char ****ppppcStack_130;
  char ***pppcStack_128;
  char **ppcStack_120;
  undefined8 uStack_118;
  char ****ppppcStack_110;
  char **ppcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  byte bStack_a9;
  byte abStack_a8 [8];
  char ***pppcStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_40 = (long *)0x0;
  func_0x0001094749d8(abStack_a8,param_1,alStack_58,1,0);
  if (plStack_40 == alStack_58) {
    lVar6 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_10a453b24;
    lVar6 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar6))();
LAB_10a453b24:
  bStack_a9 = 0;
  pcStack_98 = FUN_10a477750;
  ppuStack_90 = &PTR_FUN_110bdd378;
  pbStack_80 = &bStack_a9;
  uStack_88 = param_2;
  FUN_10a453c38(abStack_a8,&pcStack_98);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  uVar7 = (uint)bStack_a9;
  puVar4 = (undefined8 *)(ulong)abStack_a8[0];
  pppppcVar1 = (char *****)&pppcStack_a0;
  func_0x000109380ffc();
  while( true ) {
    iVar3 = (int)puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return (char *****)(ulong)(uVar7 & 1);
    }
    ___stack_chk_fail();
    (*(code *)*ppuStack_90)(&ppuStack_90);
    puVar4 = (undefined8 *)(ulong)abStack_a8[0];
    func_0x000109380ffc(&pppcStack_a0);
    if (iVar3 != 1) break;
    ___cxa_begin_catch();
    ___cxa_end_catch();
    uVar7 = 0;
  }
  __Unwind_Resume();
  cVar5 = *(char *)pppppcVar1;
  if (cVar5 == '\x03') {
    func_0x00010937c804(&ppppcStack_110,pppppcVar1);
    pppppcVar2 = &ppppcStack_110;
    (*(code *)*puVar4)(pppppcVar2,puVar4);
    if (uStack_100._7_1_ < '\0') {
      __ZdlPv(ppppcStack_110);
      pppppcVar2 = (char *****)ppppcStack_110;
    }
  }
  else {
    ppppcStack_110 = (char ****)pppppcVar1;
    if (cVar5 == '\x02') {
      ppcStack_108 = (char **)0x0;
      uStack_f8 = 0x8000000000000000;
      uStack_100 = *pppppcVar1[1];
      pppcStack_128 = (char ***)0x0;
      uStack_118 = 0x8000000000000000;
      ppcStack_120 = (char **)pppppcVar1[1][1];
      ppppcStack_130 = (char ****)pppppcVar1;
      while( true ) {
        pppppcVar2 = &ppppcStack_110;
        func_0x00010937c708(pppppcVar2,&ppppcStack_130);
        if (((ulong)pppppcVar2 & 1) != 0) break;
        func_0x00010937c560(&ppppcStack_110);
        FUN_10a453c38();
        func_0x00010937c698(&ppppcStack_110);
      }
    }
    else {
      pppppcVar2 = pppppcVar1;
      if (cVar5 == '\x01') {
        uStack_f8 = 0x8000000000000000;
        uStack_100 = (char ***)0x0;
        ppcStack_108 = (char **)*pppppcVar1[1];
        cVar5 = '\x01';
        while( true ) {
          pppcStack_128 = (char ***)0x0;
          ppcStack_120 = (char **)0x0;
          uStack_118 = 0x8000000000000000;
          if (cVar5 == '\x02') {
            ppcStack_120 = (char **)pppppcVar1[1][1];
          }
          else if (cVar5 == '\x01') {
            pppcStack_128 = (char ***)(pppppcVar1[1] + 1);
          }
          else {
            uStack_118 = 1;
          }
          pppppcVar2 = &ppppcStack_110;
          ppppcStack_130 = (char ****)pppppcVar1;
          func_0x00010937c708(pppppcVar2,&ppppcStack_130);
          if ((int)pppppcVar2 != 0) break;
          func_0x00010937c560(&ppppcStack_110);
          FUN_10a453c38();
          func_0x00010937c698(&ppppcStack_110);
          cVar5 = *(char *)pppppcVar1;
        }
      }
    }
  }
  return pppppcVar2;
}



/* Entry: 10a453c38; end: 10a453dc7;  */

void FUN_10a453c38(byte *param_1,undefined8 *param_2)

{
  byte **ppbVar1;
  byte bVar2;
  byte *pbStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  bVar2 = *param_1;
  if (bVar2 == 3) {
    func_0x00010937c804(&pbStack_60,param_1);
    (*(code *)*param_2)(&pbStack_60,param_2);
    if (uStack_50._7_1_ < '\0') {
      __ZdlPv(pbStack_60);
    }
  }
  else {
    pbStack_60 = param_1;
    if (bVar2 == 2) {
      uStack_58 = 0;
      uStack_48 = 0x8000000000000000;
      uStack_50 = **(undefined8 **)(param_1 + 8);
      lStack_78 = 0;
      uStack_68 = 0x8000000000000000;
      uStack_70 = (*(undefined8 **)(param_1 + 8))[1];
      pbStack_80 = param_1;
      while( true ) {
        ppbVar1 = &pbStack_60;
        func_0x00010937c708(ppbVar1,&pbStack_80);
        if (((ulong)ppbVar1 & 1) != 0) break;
        func_0x00010937c560(&pbStack_60);
        FUN_10a453c38();
        func_0x00010937c698(&pbStack_60);
      }
    }
    else if (bVar2 == 1) {
      uStack_48 = 0x8000000000000000;
      uStack_50 = 0;
      uStack_58 = **(undefined8 **)(param_1 + 8);
      bVar2 = 1;
      while( true ) {
        lStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0x8000000000000000;
        if (bVar2 == 2) {
          uStack_70 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
        }
        else if (bVar2 == 1) {
          lStack_78 = *(long *)(param_1 + 8) + 8;
        }
        else {
          uStack_68 = 1;
        }
        ppbVar1 = &pbStack_60;
        pbStack_80 = param_1;
        func_0x00010937c708(ppbVar1,&pbStack_80);
        if ((int)ppbVar1 != 0) break;
        func_0x00010937c560(&pbStack_60);
        FUN_10a453c38();
        func_0x00010937c698(&pbStack_60);
        bVar2 = *param_1;
      }
    }
  }
  return;
}



/* Entry: 10a453dc8; end: 10a454def;  */

void FUN_10a453dc8(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *****pppppuVar7;
  undefined *****pppppuVar8;
  long *plVar9;
  code *pcVar10;
  bool bVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  short ****ppppsVar14;
  undefined ***pppuVar15;
  short ****ppppsVar16;
  char cVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uStack_3b8;
  undefined ****ppppuStack_3b0;
  undefined ****ppppuStack_3a8;
  undefined **ppuStack_3a0;
  short ***pppsStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  undefined1 auStack_358 [8];
  long lStack_350;
  long lStack_348;
  undefined1 uStack_340;
  long lStack_338;
  long lStack_330;
  undefined1 uStack_328;
  undefined1 uStack_320;
  long lStack_318;
  undefined ****ppppuStack_310;
  undefined ****ppppuStack_308;
  undefined **ppuStack_300;
  long lStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [8];
  long lStack_2e0;
  long lStack_2d8;
  undefined1 uStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined8 uStack_2a8;
  undefined **appuStack_290 [20];
  undefined ****ppppuStack_1f0;
  undefined ****ppppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined1 auStack_1d0 [24];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined **appuStack_190 [2];
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 auStack_170 [56];
  undefined8 uStack_138;
  char cStack_121;
  undefined **appuStack_110 [19];
  undefined1 uStack_72;
  undefined1 auStack_71 [17];
  
  FUN_109febc44(appuStack_190);
  if (param_3 != 0) {
    func_0x000107c28330(auStack_1d0);
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    puVar12 = auStack_1d0;
    func_0x000107c28360(puVar12,&UNK_10f658e06,&UNK_10f658e0e);
    if (puVar12 != &UNK_10f658e0e) {
      FUN_10a4777ec();
LAB_10a454c5c:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10a454c60);
      (*pcVar10)();
    }
    FUN_10a454df0(&ppppuStack_310,param_2);
    FUN_10a23d168(&ppppuStack_1f0,&lStack_2f8);
    ppppuStack_310 = (undefined ****)&PTR_SUB_1108a5a38;
    ppuStack_300 = &PTR_DAT_1108a5a60;
    appuStack_290[0] = &PTR_DAT_1108a5a88;
    lStack_2f8._0_1_ = 0xb0;
    lStack_2f8._1_7_ = 0x11088d7;
    if (uStack_2a8._7_1_ < '\0') {
      __ZdlPv(CONCAT71(uStack_2b7,uStack_2b8));
    }
    lStack_2f8._0_1_ =
         SUB81(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10,0);
    lStack_2f8._1_7_ =
         (undefined7)
         ((ulong)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10) >> 8);
    __ZNSt3__16localeD1Ev(auStack_2f0);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppppuStack_310,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_290);
    lStack_350 = 0;
    lStack_348 = 0;
    uStack_340 = 0;
    lStack_338 = 0;
    lStack_330 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    lStack_318 = 0;
    plStack_378 = (long *)0x0;
    plStack_380 = (long *)0x0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_35f = 0;
    auStack_358[0] = 0;
    uStack_367 = 0;
    uStack_360 = 0;
    iVar1 = 1;
LAB_10a453f48:
    lStack_2e0 = 0;
    lStack_2d8 = 0;
    uStack_2d0 = 0;
    lStack_2c8 = 0;
    lStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    ppppuStack_308 = (undefined ****)0x0;
    ppppuStack_310 = (undefined ****)0x0;
    lStack_2f8._0_1_ = 0;
    ppuStack_300 = (undefined **)0x0;
    stack0xfffffffffffffd11 = 0;
    lStack_2f8._1_7_ = 0;
    auStack_2f0[0] = 0;
    pppppuVar7 = (undefined *****)ppppuStack_1e8;
    pppppuVar8 = (undefined *****)ppppuStack_1f0;
    if (-1 < (long)ppuStack_1e0) {
      pppppuVar7 = (undefined *****)((ulong)ppuStack_1e0 >> 0x38);
      pppppuVar8 = &ppppuStack_1f0;
    }
    puVar13 = auStack_1d0;
    func_0x000107c28348(puVar13,pppppuVar8,(long)pppppuVar8 + (long)pppppuVar7,&ppppuStack_310,0);
    lVar22 = lStack_2e0;
    pppppuVar7 = (undefined *****)ppppuStack_1e8;
    pppppuVar8 = (undefined *****)ppppuStack_1f0;
    if (-1 < (long)ppuStack_1e0) {
      pppppuVar7 = (undefined *****)((ulong)ppuStack_1e0 >> 0x38);
      pppppuVar8 = &ppppuStack_1f0;
    }
    func_0x000107c28350(&plStack_380,
                        ((long)ppppuStack_308 - (long)ppppuStack_310 >> 3) * -0x5555555555555555);
    if (plStack_378 != plStack_380) {
      lVar18 = 0;
      uVar19 = 0;
      do {
        uVar20 = ((long)ppppuStack_308 - (long)ppppuStack_310 >> 3) * -0x5555555555555555;
        plVar5 = (long *)((long)ppppuStack_310 + lVar18);
        if (uVar20 < uVar19 || uVar20 - uVar19 == 0) {
          plVar5 = &lStack_2f8;
        }
        *(long *)((long)plStack_380 + lVar18) = (long)pppppuVar8 + (*plVar5 - lVar22);
        uVar20 = ((long)plStack_378 - (long)plStack_380 >> 3) * -0x5555555555555555;
        if (uVar20 < uVar19 || uVar20 - uVar19 == 0) goto LAB_10a454c5c;
        uVar20 = ((long)ppppuStack_308 - (long)ppppuStack_310 >> 3) * -0x5555555555555555;
        plVar5 = (long *)((long)ppppuStack_310 + lVar18 + 8);
        if (uVar20 < uVar19 || uVar20 - uVar19 == 0) {
          plVar5 = (long *)auStack_2f0;
        }
        *(long *)((long)plStack_380 + lVar18 + 8) = (long)pppppuVar8 + (*plVar5 - lVar22);
        uVar20 = ((long)plStack_378 - (long)plStack_380 >> 3) * -0x5555555555555555;
        if (uVar20 < uVar19 || uVar20 - uVar19 == 0) goto LAB_10a454c5c;
        uVar21 = ((long)ppppuStack_308 - (long)ppppuStack_310 >> 3) * -0x5555555555555555;
        puVar2 = (undefined1 *)((long)ppppuStack_310 + lVar18 + 0x10);
        if (uVar21 < uVar19 || uVar21 - uVar19 == 0) {
          puVar2 = auStack_2e8;
        }
        *(undefined1 *)((long)plStack_380 + lVar18 + 0x10) = *puVar2;
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 0x18;
      } while (uVar19 < uVar20);
    }
    uStack_368 = (undefined1)((long)pppppuVar8 + (long)pppppuVar7);
    uStack_367 = (undefined7)((ulong)((long)pppppuVar8 + (long)pppppuVar7) >> 8);
    auStack_358[0] = 0;
    lStack_350 = (long)pppppuVar8 + (lStack_2e0 - lVar22);
    lStack_348 = (long)pppppuVar8 + (lStack_2d8 - lVar22);
    uStack_340 = uStack_2d0;
    lStack_330 = (long)pppppuVar8 + (lStack_2c0 - lVar22);
    lStack_338 = (long)pppppuVar8 + (lStack_2c8 - lVar22);
    uStack_328 = uStack_2b8;
    lStack_318 = lStack_350;
    uStack_320 = uStack_2b0;
    uStack_360 = uStack_368;
    uStack_35f = uStack_367;
    if ((undefined *****)ppppuStack_310 != (undefined *****)0x0) {
      ppppuStack_308 = ppppuStack_310;
      __ZdlPv();
    }
    plVar6 = plStack_378;
    plVar5 = plStack_380;
    if ((int)puVar13 != 0) {
      plVar4 = (long *)auStack_358;
      plVar9 = (long *)&uStack_368;
      if (plStack_378 != plStack_380) {
        plVar4 = plStack_380 + 2;
        plVar9 = plStack_380;
      }
      if ((char)*plVar4 == '\x01') {
        lVar22 = *plVar9;
        plVar3 = (long *)&uStack_360;
        if (plStack_378 != plStack_380) {
          plVar3 = plStack_380 + 1;
        }
        lVar18 = *plVar3;
        uVar19 = lVar18 - lVar22;
        if (0x7ffffffffffffff7 < uVar19) {
          func_0x000109ffde50();
          goto LAB_10a454c5c;
        }
        if (uVar19 < 0x17) {
          uStack_388 = CONCAT17((char)uVar19,(undefined7)uStack_388);
          ppppsVar14 = &pppsStack_398;
        }
        else {
          ppppsVar16 = (short ****)0x19;
          if ((uVar19 | 7) != 0x17) {
            ppppsVar16 = (short ****)((uVar19 | 7) + 1);
          }
          ppppsVar14 = ppppsVar16;
          __Znwm();
          uStack_390 = uVar19;
          uStack_388 = (ulong)ppppsVar16 | 0x8000000000000000;
          pppsStack_398 = (short ***)ppppsVar14;
        }
        if (lVar18 != lVar22) {
          _memmove(ppppsVar14,lVar22,uVar19);
        }
        *(undefined1 *)((long)ppppsVar14 + uVar19) = 0;
        uVar19 = uStack_388;
        bVar11 = (long)uStack_388 < 0;
        if ((long)uStack_388 < 0) {
          ppppsVar16 = (short ****)pppsStack_398;
          cVar17 = uStack_388._7_1_;
          if (uStack_390 == 2) goto LAB_10a454230;
          if (param_3 <= (ulong)(long)iVar1) {
            bVar11 = true;
            goto LAB_10a4542fc;
          }
          goto LAB_10a4547b0;
        }
        if (uStack_388._7_1_ != '\x02') goto LAB_10a454280;
        ppppsVar16 = &pppsStack_398;
        cVar17 = '\x02';
LAB_10a454230:
        if (*(short *)ppppsVar16 != 0x2525) {
          if (param_3 <= (ulong)(long)iVar1) goto LAB_10a4542fc;
          if (-1 < (long)uStack_388) goto LAB_10a454298;
          if (uStack_390 == 2) {
            if (*(short *)pppsStack_398 != 0x7325) {
              if (*(short *)pppsStack_398 == 0x6425) {
                bVar11 = true;
              }
              else {
                bVar11 = true;
                ppppsVar16 = (short ****)pppsStack_398;
                if (*(short *)pppsStack_398 != 0x6925) goto LAB_10a4542e0;
              }
              goto LAB_10a454618;
            }
            bVar11 = true;
            goto LAB_10a4544f4;
          }
          goto LAB_10a4547b0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&ppppuStack_310,&ppppuStack_1f0,0,*plVar9 - lStack_318,&ppppuStack_3b0);
        pppppuVar7 = (undefined *****)ppppuStack_308;
        pppppuVar8 = (undefined *****)ppppuStack_310;
        if (-1 < (long)ppuStack_300) {
          pppppuVar7 = (undefined *****)((ulong)ppuStack_300 >> 0x38);
          pppppuVar8 = &ppppuStack_310;
        }
        FUN_10a002568(&ppuStack_180,pppppuVar8,pppppuVar7);
        FUN_10a002568();
        if ((long)ppuStack_300 < 0) {
          __ZdlPv(ppppuStack_310);
        }
        plVar5 = (long *)&uStack_368;
        if (plStack_378 != plStack_380) {
          plVar5 = plStack_380;
        }
        plVar6 = (long *)auStack_358;
        if (plStack_378 != plStack_380) {
          plVar6 = plStack_380 + 2;
        }
        if ((char)*plVar6 == '\x01') {
          plVar6 = (long *)&uStack_360;
          if (plStack_378 != plStack_380) {
            plVar6 = plStack_380 + 1;
          }
          lVar22 = *plVar6 - *plVar5;
        }
        else {
          lVar22 = 0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&ppppuStack_310,&ppppuStack_1f0,(*plVar5 - lStack_318) + lVar22,
                   0xffffffffffffffff,&ppppuStack_3b0);
        if ((long)ppuStack_1e0 < 0) {
          __ZdlPv(ppppuStack_1f0);
        }
        ppppuStack_1e8 = ppppuStack_308;
        ppppuStack_1f0 = ppppuStack_310;
        ppuStack_1e0 = ppuStack_300;
        if ((long)uVar19 < 0) {
LAB_10a4547b0:
          __ZdlPv(pppsStack_398);
        }
        goto LAB_10a453f48;
      }
      uStack_388._7_1_ = '\0';
      pppsStack_398 = (short ***)0x0;
      uStack_390 = 0;
      uStack_388 = 0;
LAB_10a454280:
      cVar17 = uStack_388._7_1_;
      if ((ulong)(long)iVar1 < param_3) {
LAB_10a454298:
        if (cVar17 == '\x02') {
          if ((short)pppsStack_398 == 0x7325) {
            bVar11 = false;
LAB_10a4544f4:
            FUN_10a454df0(&ppppuStack_310,param_2 + (long)iVar1 * 0x18);
            FUN_10a23d168(&ppppuStack_3b0,&lStack_2f8);
            ppppuStack_310 = (undefined ****)&PTR_SUB_1108a5a38;
            appuStack_290[0] = &PTR_DAT_1108a5a88;
            ppuStack_300 = &PTR_DAT_1108a5a60;
            lStack_2f8._0_1_ = 0xb0;
            lStack_2f8._1_7_ = 0x11088d7;
            if (uStack_2a8 < 0) {
              __ZdlPv(CONCAT71(uStack_2b7,uStack_2b8));
            }
            lStack_2f8._0_1_ =
                 SUB81(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10,0)
            ;
            lStack_2f8._1_7_ =
                 (undefined7)
                 ((ulong)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10
                         ) >> 8);
            __ZNSt3__16localeD1Ev(auStack_2f0);
            __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                      (&ppppuStack_310,&PTR_PTR_1108a5aa0);
            __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_290);
            plVar5 = (long *)&uStack_368;
            if (plStack_378 != plStack_380) {
              plVar5 = plStack_380;
            }
            plVar6 = (long *)auStack_358;
            if (plStack_378 != plStack_380) {
              plVar6 = plStack_380 + 2;
            }
            if ((char)*plVar6 == '\x01') {
              plVar6 = (long *)&uStack_360;
              if (plStack_378 != plStack_380) {
                plVar6 = plStack_380 + 1;
              }
              lVar22 = *plVar6 - *plVar5;
            }
            else {
              lVar22 = 0;
            }
            pppppuVar7 = (undefined *****)ppppuStack_3a8;
            pppppuVar8 = (undefined *****)ppppuStack_3b0;
            if (-1 < (long)ppuStack_3a0) {
              pppppuVar7 = (undefined *****)((ulong)ppuStack_3a0 >> 0x38);
              pppppuVar8 = &ppppuStack_3b0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKcm
                      (&ppppuStack_1f0,*plVar5 - lStack_318,lVar22,pppppuVar8,pppppuVar7);
          }
          else {
            if ((short)pppsStack_398 == 0x6425) {
              bVar11 = false;
            }
            else {
              bVar11 = false;
              if ((short)pppsStack_398 != 0x6925) {
                ppppsVar16 = &pppsStack_398;
LAB_10a4542e0:
                if (*(short *)ppppsVar16 == 0x6625) {
                  FUN_10a454df0(&ppppuStack_310,param_2 + (long)iVar1 * 0x18);
                  FUN_10a23d168(&ppppuStack_3b0,&lStack_2f8);
                  ppppuStack_310 = (undefined ****)&PTR_SUB_1108a5a38;
                  ppuStack_300 = &PTR_DAT_1108a5a60;
                  appuStack_290[0] = &PTR_DAT_1108a5a88;
                  lStack_2f8._0_1_ = 0xb0;
                  lStack_2f8._1_7_ = 0x11088d7;
                  if (uStack_2a8 < 0) {
                    __ZdlPv(CONCAT71(uStack_2b7,uStack_2b8));
                  }
                  lStack_2f8._0_1_ =
                       SUB81(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 +
                             0x10,0);
                  lStack_2f8._1_7_ =
                       (undefined7)
                       ((ulong)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20
                               + 0x10) >> 8);
                  __ZNSt3__16localeD1Ev(auStack_2f0);
                  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                            (&ppppuStack_310,&PTR_PTR_1108a5aa0);
                  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_290);
                  uStack_3b8 = 0;
                  __ZNSt3__14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm
                            (&ppppuStack_3b0,&uStack_3b8);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                            (&ppppuStack_310,&ppppuStack_3b0,0,uStack_3b8,auStack_71);
                  if ((long)ppuStack_3a0 < 0) {
                    __ZdlPv(ppppuStack_3b0);
                  }
                  ppppuStack_3a8 = ppppuStack_308;
                  ppppuStack_3b0 = ppppuStack_310;
                  ppuStack_3a0 = ppuStack_300;
                  plVar5 = (long *)&uStack_368;
                  if (plStack_378 != plStack_380) {
                    plVar5 = plStack_380;
                  }
                  plVar6 = (long *)auStack_358;
                  if (plStack_378 != plStack_380) {
                    plVar6 = plStack_380 + 2;
                  }
                  if ((char)*plVar6 == '\x01') {
                    plVar6 = (long *)&uStack_360;
                    if (plStack_378 != plStack_380) {
                      plVar6 = plStack_380 + 1;
                    }
                    lVar22 = *plVar6 - *plVar5;
                  }
                  else {
                    lVar22 = 0;
                  }
                  pppppuVar7 = (undefined *****)ppppuStack_308;
                  pppppuVar8 = (undefined *****)ppppuStack_310;
                  if (-1 < (long)ppuStack_300) {
                    pppppuVar7 = (undefined *****)((ulong)ppuStack_300 >> 0x38);
                    pppppuVar8 = &ppppuStack_3b0;
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKcm
                            (&ppppuStack_1f0,*plVar5 - lStack_318,lVar22,pppppuVar8,pppppuVar7);
                  goto LAB_10a454790;
                }
                if (bVar11) goto LAB_10a4547b0;
                goto LAB_10a453f48;
              }
            }
LAB_10a454618:
            FUN_10a454df0(&ppppuStack_310,param_2 + (long)iVar1 * 0x18);
            FUN_10a23d168(&ppppuStack_3b0,&lStack_2f8);
            ppppuStack_310 = (undefined ****)&PTR_SUB_1108a5a38;
            ppuStack_300 = &PTR_DAT_1108a5a60;
            appuStack_290[0] = &PTR_DAT_1108a5a88;
            lStack_2f8._0_1_ = 0xb0;
            lStack_2f8._1_7_ = 0x11088d7;
            if (uStack_2a8 < 0) {
              __ZdlPv(CONCAT71(uStack_2b7,uStack_2b8));
            }
            lStack_2f8._0_1_ =
                 SUB81(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10,0)
            ;
            lStack_2f8._1_7_ =
                 (undefined7)
                 ((ulong)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10
                         ) >> 8);
            __ZNSt3__16localeD1Ev(auStack_2f0);
            __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                      (&ppppuStack_310,&PTR_PTR_1108a5aa0);
            __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_290);
            uStack_3b8 = 0;
            __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                      (&ppppuStack_3b0,&uStack_3b8,10);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                      (&ppppuStack_310,&ppppuStack_3b0,0,uStack_3b8,&uStack_72);
            if ((long)ppuStack_3a0 < 0) {
              __ZdlPv(ppppuStack_3b0);
            }
            ppppuStack_3a8 = ppppuStack_308;
            ppppuStack_3b0 = ppppuStack_310;
            ppuStack_3a0 = ppuStack_300;
            plVar5 = (long *)&uStack_368;
            if (plStack_378 != plStack_380) {
              plVar5 = plStack_380;
            }
            plVar6 = (long *)auStack_358;
            if (plStack_378 != plStack_380) {
              plVar6 = plStack_380 + 2;
            }
            if ((char)*plVar6 == '\x01') {
              plVar6 = (long *)&uStack_360;
              if (plStack_378 != plStack_380) {
                plVar6 = plStack_380 + 1;
              }
              lVar22 = *plVar6 - *plVar5;
            }
            else {
              lVar22 = 0;
            }
            pppppuVar7 = (undefined *****)ppppuStack_308;
            pppppuVar8 = (undefined *****)ppppuStack_310;
            if (-1 < (long)ppuStack_300) {
              pppppuVar7 = (undefined *****)((ulong)ppuStack_300 >> 0x38);
              pppppuVar8 = &ppppuStack_3b0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKcm
                      (&ppppuStack_1f0,*plVar5 - lStack_318,lVar22,pppppuVar8,pppppuVar7);
          }
LAB_10a454790:
          if ((long)ppuStack_3a0 < 0) {
            __ZdlPv(ppppuStack_3b0);
          }
          iVar1 = iVar1 + 1;
          if (bVar11) goto LAB_10a4547b0;
        }
      }
      else {
        bVar11 = false;
LAB_10a4542fc:
        if ((char)*plVar4 == '\x01') {
          plVar4 = (long *)&uStack_360;
          if (plVar6 != plVar5) {
            plVar4 = plVar5 + 1;
          }
          lVar22 = *plVar4 - *plVar9;
        }
        else {
          lVar22 = 0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&ppppuStack_310,&ppppuStack_1f0,0,(*plVar9 - lStack_318) + lVar22,&ppppuStack_3b0
                  );
        pppppuVar7 = (undefined *****)ppppuStack_308;
        pppppuVar8 = (undefined *****)ppppuStack_310;
        if (-1 < (long)ppuStack_300) {
          pppppuVar7 = (undefined *****)((ulong)ppuStack_300 >> 0x38);
          pppppuVar8 = &ppppuStack_310;
        }
        FUN_10a002568(&ppuStack_180,pppppuVar8,pppppuVar7);
        if ((long)ppuStack_300 < 0) {
          __ZdlPv(ppppuStack_310);
        }
        plVar5 = (long *)&uStack_368;
        if (plStack_378 != plStack_380) {
          plVar5 = plStack_380;
        }
        plVar6 = (long *)auStack_358;
        if (plStack_378 != plStack_380) {
          plVar6 = plStack_380 + 2;
        }
        if ((char)*plVar6 == '\x01') {
          plVar6 = (long *)&uStack_360;
          if (plStack_378 != plStack_380) {
            plVar6 = plStack_380 + 1;
          }
          lVar22 = *plVar6 - *plVar5;
        }
        else {
          lVar22 = 0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&ppppuStack_310,&ppppuStack_1f0,(*plVar5 - lStack_318) + lVar22,
                   0xffffffffffffffff,&ppppuStack_3b0);
        if ((long)ppuStack_1e0 < 0) {
          __ZdlPv(ppppuStack_1f0);
        }
        ppppuStack_1e8 = ppppuStack_308;
        ppppuStack_1f0 = ppppuStack_310;
        ppuStack_1e0 = ppuStack_300;
        if (bVar11) goto LAB_10a4547b0;
      }
      goto LAB_10a453f48;
    }
    pppppuVar7 = (undefined *****)ppppuStack_1e8;
    pppppuVar8 = (undefined *****)ppppuStack_1f0;
    if (-1 < (long)ppuStack_1e0) {
      pppppuVar7 = (undefined *****)((ulong)ppuStack_1e0 >> 0x38);
      pppppuVar8 = &ppppuStack_1f0;
    }
    FUN_10a002568(&ppuStack_180,pppppuVar8,pppppuVar7);
    if (param_3 * 0x18 + (long)iVar1 * -0x18 != 0) {
      lVar22 = param_2 + (long)iVar1 * 0x18;
      puVar12 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
      do {
        pppuVar15 = &ppuStack_180;
        FUN_10a002568(pppuVar15," ",1);
        FUN_10a454df0(&ppppuStack_310,lVar22);
        FUN_10a23d168(&pppsStack_398,&lStack_2f8);
        uVar19 = uStack_390;
        ppppsVar16 = (short ****)pppsStack_398;
        if (-1 < (long)uStack_388) {
          uVar19 = uStack_388 >> 0x38;
          ppppsVar16 = &pppsStack_398;
        }
        FUN_10a002568(pppuVar15,ppppsVar16,uVar19);
        if ((long)uStack_388 < 0) {
          __ZdlPv(pppsStack_398);
        }
        ppppuStack_310 = (undefined ****)&PTR_SUB_1108a5a38;
        ppuStack_300 = &PTR_DAT_1108a5a60;
        lStack_2f8._0_1_ = 0xb0;
        lStack_2f8._1_7_ = 0x11088d7;
        appuStack_290[0] = &PTR_DAT_1108a5a88;
        if (uStack_2a8 < 0) {
          __ZdlPv(CONCAT71(uStack_2b7,uStack_2b8));
        }
        lStack_2f8._0_1_ = SUB81(puVar12,0);
        lStack_2f8._1_7_ = (undefined7)((ulong)puVar12 >> 8);
        __ZNSt3__16localeD1Ev(auStack_2f0);
        __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppppuStack_310,&PTR_PTR_1108a5aa0);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_290);
        lVar22 = lVar22 + 0x18;
      } while (lVar22 != param_2 + param_3 * 0x18);
    }
    if (plStack_380 != (long *)0x0) {
      plStack_378 = plStack_380;
      __ZdlPv();
    }
    if ((long)ppuStack_1e0 < 0) {
      __ZdlPv(ppppuStack_1f0);
    }
    plVar5 = plStack_1a0;
    if (plStack_1a0 != (long *)0x0) {
      plVar6 = plStack_1a0 + 1;
      do {
        lVar22 = *plVar6;
        cVar17 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *plVar6 = lVar22 + -1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    __ZNSt3__16localeD1Ev(auStack_1d0);
  }
  func_0x00010a002480(param_1,&ppuStack_178,&ppppuStack_310);
  appuStack_190[0] = &PTR_SUB_1108a5a38;
  ppuStack_180 = &PTR_DAT_1108a5a60;
  appuStack_110[0] = &PTR_DAT_1108a5a88;
  ppuStack_178 = &PTR_DAT_11088d7b0;
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  ppuStack_178 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_170);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_190,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
  return;
}



/* Entry: 10a454df0; end: 10a454ecb;  */

void FUN_10a454df0(long param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_109febc44();
  if (*(int *)(param_2 + 8) == 0) {
    pcVar2 = "undefined";
    uVar3 = 9;
  }
  else {
    if (*(int *)(param_2 + 8) != 1) {
      FUN_10a455384(&pppuStack_48,param_2);
      ppppuVar1 = (undefined8 ****)pppuStack_48;
      if (-1 < (char)bStack_31) {
        uStack_40 = (ulong)bStack_31;
        ppppuVar1 = &pppuStack_48;
      }
      FUN_10a002568(param_1 + 0x10,ppppuVar1,uStack_40);
      if (-1 < (char)bStack_31) {
        return;
      }
      __ZdlPv(pppuStack_48);
      return;
    }
    pcVar2 = "null";
    uVar3 = 4;
  }
  FUN_10a002568(param_1 + 0x10,pcVar2,uVar3);
  return;
}



/* Entry: 10a454ecc; end: 10a454f57;  */

void FUN_10a454ecc(long *param_1,undefined1 param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uStack_31;
  
  uVar1 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  FUN_10a003c90(param_1,uVar1 + 1,&uStack_31);
  plVar2 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
  }
  *(undefined1 *)plVar2 = param_2;
  if (uVar1 != 0) {
    plVar3 = (long *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      plVar3 = param_3;
    }
    _memmove((long)plVar2 + 1,plVar3,uVar1);
  }
  *(undefined1 *)((long)plVar2 + 1 + uVar1) = 0;
  return;
}



/* Entry: 10a454f58; end: 10a4551bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a4552c0) */

void FUN_10a454f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  code ***pppcVar6;
  code ***pppcVar7;
  ulong *puVar8;
  ulong uVar9;
  code ***unaff_x25;
  code **ppcVar10;
  undefined1 *puStack_1a0;
  ulong uStack_198;
  byte bStack_189;
  ulong uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_120;
  code **ppcStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  code **ppcStack_100;
  undefined8 **ppuStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code **ppcStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (*ppuVar4 != (undefined *)0x0) {
    unaff_x25 = &ppcStack_a0;
    FUN_10a3dc3dc(&ppcStack_a0);
    if (*(char *)(puStack_98 + 1) == '\x01') {
      (*(code *)ppcStack_a0)(param_5,param_6,param_2,param_3,&ppcStack_a0);
    }
    (*(code *)*puStack_98)(&puStack_98);
  }
  FUN_10a4551bc(auStack_d8,param_1);
  FUN_10a453dc8(&ppuStack_f0,param_2,param_3);
  pppuVar1 = (undefined8 ***)ppuStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    pppuVar1 = &ppuStack_f0;
  }
  puVar5 = auStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar1,uStack_e8);
  uStack_b8 = puVar5[1];
  uStack_c0 = *puVar5;
  lStack_b0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&DAT_10f68f57e,1);
  puStack_98 = (undefined8 *)puVar5[1];
  ppcStack_a0 = (code **)*puVar5;
  lStack_90 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(ppuStack_f0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  ppcStack_100 = ppcStack_a0;
  if (-1 < lStack_90) {
    ppcStack_100 = (code **)&ppcStack_a0;
  }
  uVar9 = (ulong)*(uint *)(&UNK_10e4b5f50 + (param_4 & 0xffffffff) * 4);
  pppcVar6 = (code ***)0x1;
  func_0x00010ae06f08();
  if (lStack_90 < 0) {
    pppcVar6 = (code ***)ppcStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    (*(code *)*puStack_98)(unaff_x25 + 1);
    pppcVar7 = pppcVar6;
    __Unwind_Resume();
    pcStack_108 = FUN_10a4551bc;
    uStack_150 = uVar9;
    uStack_120 = param_3;
    ppcStack_118 = (code **)pppcVar6;
    puStack_110 = &stack0xfffffffffffffff0;
    func_0x00010989a8b0(&lStack_138,&uStack_150,1);
    if (lStack_138 == lStack_130) {
      *pppcVar7 = (code **)0x0;
      pppcVar7[1] = (code **)0x0;
      pppcVar7[2] = (code **)0x0;
    }
    else {
      FUN_10a454ecc(&uStack_188,0x5b,lStack_138);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&uStack_188,0x3a)
      ;
      uStack_168 = uStack_180;
      uStack_170 = uStack_188;
      lStack_160 = lStack_178;
      uStack_180 = 0;
      lStack_178 = 0;
      uStack_188 = 0;
      if (*(char *)(lStack_138 + 0x34) == '\x01') {
        uVar3 = *(undefined4 *)(lStack_138 + 0x30);
      }
      else {
        uVar3 = 0;
      }
      __ZNSt3__19to_stringEi(&puStack_1a0,uVar3);
      ppuVar2 = (undefined1 **)puStack_1a0;
      if (-1 < (char)bStack_189) {
        uStack_198 = (ulong)bStack_189;
        ppuVar2 = &puStack_1a0;
      }
      puVar8 = &uStack_170;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar8,ppuVar2,uStack_198);
      uStack_148 = puVar8[1];
      uStack_150 = *puVar8;
      uStack_140 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar8 = &uStack_150;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar8,&UNK_10f4edf8b,2);
      ppcVar10 = (code **)*puVar8;
      pppcVar7[1] = (code **)puVar8[1];
      *pppcVar7 = ppcVar10;
      pppcVar7[2] = (code **)puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      if ((char)bStack_189 < '\0') {
        __ZdlPv(puStack_1a0);
      }
      if (lStack_160 < 0) {
        __ZdlPv(uStack_170);
      }
      if (lStack_178 < 0) {
        __ZdlPv(uStack_188);
      }
    }
    FUN_10a472960(&lStack_138);
    return;
  }
  return;
}



/* Entry: 10a4551bc; end: 10a455383;  */

/* WARNING: Removing unreachable block (ram,0x00010a4552c0) */

void FUN_10a4551bc(undefined8 *param_1,undefined8 param_2)

{
  undefined1 **ppuVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puStack_a0;
  ulong uStack_98;
  byte bStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  
  uStack_50 = param_2;
  func_0x00010989a8b0(&lStack_38,&uStack_50,1);
  if (lStack_38 == lStack_30) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_10a454ecc(&uStack_88,0x5b,lStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&uStack_88,0x3a);
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    lStack_60 = lStack_78;
    uStack_80 = 0;
    lStack_78 = 0;
    uStack_88 = 0;
    if (*(char *)(lStack_38 + 0x34) == '\x01') {
      uVar2 = *(undefined4 *)(lStack_38 + 0x30);
    }
    else {
      uVar2 = 0;
    }
    __ZNSt3__19to_stringEi(&puStack_a0,uVar2);
    ppuVar1 = (undefined1 **)puStack_a0;
    if (-1 < (char)bStack_89) {
      uStack_98 = (ulong)bStack_89;
      ppuVar1 = &puStack_a0;
    }
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,ppuVar1,uStack_98);
    uStack_48 = puVar3[1];
    uStack_50 = *puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_50;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f4edf8b,2);
    uVar4 = *puVar3;
    param_1[1] = puVar3[1];
    *param_1 = uVar4;
    param_1[2] = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    if ((char)bStack_89 < '\0') {
      __ZdlPv(puStack_a0);
    }
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    if (lStack_78 < 0) {
      __ZdlPv(uStack_88);
    }
  }
  FUN_10a472960(&lStack_38);
  return;
}



/* Entry: 10a455384; end: 10a4553f7;  */

void FUN_10a455384(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38,&DAT_10f648172);
  FUN_10a4729e4(param_1,param_2,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a4553f8; end: 10a455553;  */

void FUN_10a4553f8(undefined8 param_1,ulong param_2)

{
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 auStack_130 [7];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109fed7e0(&ppuStack_140);
  *(uint *)((long)auStack_130 + (long)(ppuStack_140[-3] + -8)) =
       *(uint *)((long)auStack_130 + (long)(ppuStack_140[-3] + -8)) & 0xfffffeff | 4;
  *(undefined8 *)((long)auStack_130 + (long)ppuStack_140[-3]) = 3;
  if ((long)param_2 < 1000000000) {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
              ((double)(long)param_2 / 1000000.0,&ppuStack_140);
  }
  else {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
              ((double)param_2 / 1000000000.0,&ppuStack_140);
  }
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_d0[0] = &PTR_DAT_11088d708;
  ppuStack_140 = &PTR_DAT_11088d6e0;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_140,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a455554; end: 10a455b9b;  */

undefined *** FUN_10a455554(undefined ***param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  char **ppcVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  long lVar13;
  undefined8 uVar14;
  char *pcVar15;
  long lVar16;
  char *pcStack_b40;
  char *pcStack_b38;
  char *pcStack_b30;
  undefined *puStack_b28;
  char *pcStack_b18;
  char **ppcStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined *puStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined4 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined ***pppuStack_ab0;
  char *pcStack_aa8;
  char *pcStack_aa0;
  undefined *puStack_a98;
  undefined ***pppuStack_a90;
  undefined8 **ppuStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined *puStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined4 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  char *pcStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined *puStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined4 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined ***pppuStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined *puStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined4 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined ***pppuStack_958;
  undefined8 uStack_950;
  char *pcStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined *puStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined4 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined ***pppuStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined *puStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined4 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  char *pcStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined *puStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined4 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  char *pcStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined *puStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined4 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  char *pcStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined *puStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined4 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined *puStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined *puStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined4 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  char *pcStack_6d8;
  undefined *puStack_6d0;
  char **ppcStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined *puStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined4 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  char *pcStack_668;
  char *pcStack_660;
  char **ppcStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined *puStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined4 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined *puStack_5f8;
  undefined ***pppuStack_5f0;
  dword *pdStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined4 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined ***pppuStack_588;
  undefined *puStack_580;
  undefined ****ppppuStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  char *pcStack_518;
  char *pcStack_510;
  char **ppcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined *puStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined4 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined ***pppuStack_4a8;
  char *pcStack_4a0;
  undefined ****ppppuStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  char *pcStack_438;
  char *pcStack_430;
  char **ppcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  char *pcStack_3c8;
  undefined ***pppuStack_3c0;
  char **ppcStack_3b8;
  char *pcStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  char *pcStack_358;
  char *pcStack_350;
  char **ppcStack_348;
  char *pcStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined ***pppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined ****ppppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  char *pcStack_270;
  undefined *puStack_268;
  char **ppcStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  code *pcStack_188;
  undefined **ppuStack_180;
  undefined1 auStack_178 [48];
  long alStack_148 [3];
  long *plStack_130;
  long lStack_128;
  undefined ***pppuStack_120;
  char *pcStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char **ppcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (*ppuVar7 == (undefined *)0x0) {
    uVar14 = 0;
  }
  else {
    lVar16 = *(long *)(*ppuVar7 + 0x870);
    lVar13 = *(long *)(lVar16 + 0x68);
    __ZNSt3__115recursive_mutex4lockEv(lVar16 + 0x70);
    lVar13 = *(long *)(lVar13 + 0xb8);
    if ((*(byte *)(lVar13 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a455b10);
      (*pcVar6)();
    }
    uVar14 = *(undefined8 *)(lVar13 + 0x50);
    __ZNSt3__115recursive_mutex6unlockEv(lVar16 + 0x70);
  }
  ppcStack_c8 = (char **)0x0;
  uStack_c0 = 0;
  pcStack_d0 = "console";
  uStack_e8 = 0xffffffffffffffff;
  uStack_f0 = 0x100000064;
  uStack_b0 = 0xffffffffffffffff;
  uStack_b8 = 0x100000064;
  pcStack_a8 = "";
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "";
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x00010a004eb4(param_1,&pcStack_d0);
  pcStack_e0 = "data";
  ppcStack_c8 = &pcStack_e0;
  pcStack_d0 = "log";
  uStack_c0 = 1;
  uStack_b0 = uStack_e8;
  uStack_b8 = uStack_f0;
  pcStack_a8 = "";
  pcStack_98 = (char *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_68 = &PTR_DAT_110bdd3b8;
  uStack_60 = uVar14;
  pppuStack_50 = &ppuStack_68;
  FUN_10a455b9c(param_1,&pcStack_d0,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_10a455694:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_10a455694;
  }
  pcStack_e0 = "data";
  ppcStack_c8 = &pcStack_e0;
  pcStack_d0 = "info";
  uStack_c0 = 1;
  uStack_b0 = uStack_e8;
  uStack_b8 = uStack_f0;
  pcStack_a8 = "";
  pcStack_98 = (char *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_68 = &PTR_DAT_110bdd448;
  uStack_60 = uVar14;
  pppuStack_50 = &ppuStack_68;
  FUN_10a455b9c(param_1,&pcStack_d0,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_10a455718:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_10a455718;
  }
  pcStack_e0 = "data";
  ppcStack_c8 = &pcStack_e0;
  pcStack_d0 = "warn";
  uStack_c0 = 1;
  uStack_b0 = uStack_e8;
  uStack_b8 = uStack_f0;
  pcStack_a8 = "";
  pcStack_98 = (char *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_68 = &PTR_DAT_110bdd4c8;
  uStack_60 = uVar14;
  pppuStack_50 = &ppuStack_68;
  FUN_10a455b9c(param_1,&pcStack_d0,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_10a45579c:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_10a45579c;
  }
  pcStack_e0 = "data";
  ppcStack_c8 = &pcStack_e0;
  pcStack_d0 = "error";
  uStack_c0 = 1;
  uStack_b0 = uStack_e8;
  uStack_b8 = uStack_f0;
  pcStack_a8 = "";
  pcStack_98 = (char *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_68 = &PTR_DAT_110bdd548;
  uStack_60 = uVar14;
  pppuStack_50 = &ppuStack_68;
  FUN_10a455b9c(param_1,&pcStack_d0,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_10a455820:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_10a455820;
  }
  pcStack_e0 = "data";
  ppcStack_c8 = &pcStack_e0;
  pcStack_d0 = "debug";
  uStack_c0 = 1;
  uStack_b0 = uStack_e8;
  uStack_b8 = uStack_f0;
  pcStack_a8 = "";
  pcStack_98 = (char *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_68 = &PTR_DAT_110bdd5c8;
  uStack_60 = uVar14;
  pppuStack_50 = &ppuStack_68;
  FUN_10a455b9c(param_1,&pcStack_d0,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_10a4558a4:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_10a4558a4;
  }
  pcStack_e0 = "data";
  ppcStack_c8 = &pcStack_e0;
  pcStack_d0 = "trace";
  uStack_c0 = 1;
  uStack_b0 = uStack_e8;
  uStack_b8 = uStack_f0;
  pcStack_a8 = "";
  pcStack_98 = (char *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_68 = &PTR_DAT_110bdd648;
  uStack_60 = uVar14;
  pppuStack_50 = &ppuStack_68;
  FUN_10a455b9c(param_1,&pcStack_d0,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_10a455928:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_10a455928;
  }
  pcStack_e0 = "label";
  ppcStack_c8 = &pcStack_e0;
  pcStack_d0 = "time";
  uStack_c0 = 1;
  uStack_b0 = uStack_e8;
  uStack_b8 = uStack_f0;
  pcStack_a8 = "";
  pcStack_98 = (char *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_68 = &PTR_DAT_110bdd6c8;
  uStack_60 = uVar14;
  pppuStack_50 = &ppuStack_68;
  FUN_10a455b9c(param_1,&pcStack_d0,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_10a4559b8:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_10a4559b8;
  }
  pcStack_e0 = "label";
  pcStack_d8 = "data";
  ppcStack_c8 = &pcStack_e0;
  pcStack_d0 = "timeLog";
  uStack_c0 = 2;
  uStack_b0 = uStack_e8;
  uStack_b8 = uStack_f0;
  pcStack_a8 = "";
  pcStack_98 = (char *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_68 = &PTR_DAT_110bdd748;
  uStack_60 = uVar14;
  pppuStack_50 = &ppuStack_68;
  FUN_10a455b9c(param_1,&pcStack_d0,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_10a455a40:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_10a455a40;
  }
  pcStack_e0 = "label";
  ppcStack_c8 = &pcStack_e0;
  pcStack_d0 = "timeEnd";
  uStack_c0 = 1;
  uStack_b0 = uStack_e8;
  uStack_b8 = uStack_f0;
  pcStack_a8 = "";
  pcStack_98 = (char *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_68 = &PTR_DAT_110bdd7c8;
  ppcVar10 = &pcStack_d0;
  pppuVar12 = &ppuStack_68;
  uStack_60 = uVar14;
  pppuStack_50 = &ppuStack_68;
  FUN_10a455b9c(param_1);
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_10a455ac8:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_10a455ac8;
  }
  func_0x00010a004064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == &ppuStack_68) {
    lVar13 = 0x20;
LAB_10a455b80:
    (**(code **)((long)*pppuStack_50 + lVar13))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_10a455b80;
  }
  pppuVar11 = param_1;
  __Unwind_Resume();
  pppuStack_120 = &ppuStack_68;
  pcStack_118 = "";
  pppuStack_110 = &ppuStack_68;
  pppuStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  pcStack_f8 = FUN_10a455b9c;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = pppuVar11;
  FUN_10a0051e8();
  if (((ulong)pppuVar8 & 1) == 0) {
    pcVar15 = *ppcVar10;
    FUN_10a477a6c(alStack_148,pppuVar12);
    pcStack_188 = FUN_10a477ad0;
    ppuStack_180 = &PTR_FUN_110bdd390;
    FUN_10a477a6c(auStack_178,alStack_148);
    if (plStack_130 == alStack_148) {
      lVar13 = 0x20;
LAB_10a455c38:
      (**(code **)(*plStack_130 + lVar13))();
    }
    else if (plStack_130 != (long *)0x0) {
      lVar13 = 0x28;
      goto LAB_10a455c38;
    }
    if (pppuVar11[2] == pppuVar11[3]) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a455cac);
      (*pcVar6)();
    }
    FUN_10a0544d8(pppuVar11,pcVar15,&pcStack_188,0,pppuVar11[3] + -1);
    pppuVar8 = &ppuStack_180;
    (*(code *)*ppuStack_180)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return pppuVar11;
  }
  ___stack_chk_fail();
  pppuVar8[0x36] = &PTR_DAT_110b9fad8;
  pppuVar12 = pppuVar8 + 0x37;
  if (*(char *)((long)pppuVar8 + 0x1cf) < '\0') {
    pppuVar8[0x38] = (undefined **)0x4;
    pppuVar11 = (undefined ***)pppuVar8[0x37];
  }
  else {
    *(undefined1 *)((long)pppuVar8 + 0x1cf) = 4;
    pppuVar11 = pppuVar12;
  }
  *(undefined4 *)pppuVar11 = 0x32636576;
  *(undefined1 *)((long)pppuVar11 + 4) = 0;
  puStack_268 = &DAT_10f4913b9;
  ppcStack_260 = (char **)0x0;
  uStack_248 = 0xffffffffffffffff;
  uStack_250 = 0x100000064;
  uStack_238 = 0;
  puStack_240 = (undefined *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_258 = 0;
  uStack_220 = 0;
  uStack_218 = 0xffffffff;
  uStack_210 = 0;
  uStack_208 = 0;
  func_0x00010a052690(pppuVar8 + 0x2d,&puStack_268);
  pppuVar11 = pppuVar8;
  FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar11 & 1) == 0) {
    ppuStack_2d8 = &PTR_DAT_110b9fad8;
    ppppuStack_2d0 = (undefined ****)0x0;
    puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffffffffff00);
    uStack_258 = uStack_258 & 0xffffffffffffff00;
    func_0x0001098949cc(pppuVar8,&DAT_10f4913b9,&ppuStack_2d8,&puStack_268);
  }
  uStack_8d8 = 0x100000064;
  pppuVar11 = pppuVar8;
  pppuStack_8e0 = pppuVar8;
  FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar11 & 1) == 0) {
    func_0x00010a06ba0c(pppuVar8,FUN_10a4797b4,2,2);
  }
  puStack_740 = &DAT_10f62b0e2;
  uStack_738 = 0;
  uStack_720 = 0xffffffffffffffff;
  uStack_728 = 0x100000064;
  uStack_730 = 0;
  puStack_718 = &UNK_10f658e98;
  uStack_710 = 0x18;
  uStack_708 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6f0 = 0xffffffff;
  uStack_6e0 = 0;
  uStack_6e8 = 0;
  FUN_10a459dd0(&pppuStack_8e0,&puStack_740);
  pcStack_7a8 = "y";
  uStack_7a0 = 0;
  uStack_788 = 0xffffffffffffffff;
  uStack_790 = 0x100000064;
  uStack_798 = 0;
  puStack_780 = &UNK_10f658eb1;
  uStack_778 = 0x18;
  uStack_770 = 0;
  uStack_760 = 0;
  uStack_768 = 0;
  uStack_758 = 0xffffffff;
  uStack_748 = 0;
  uStack_750 = 0;
  func_0x00010a459e38(&pppuStack_8e0,&pcStack_7a8);
  pcStack_810 = "r";
  uStack_808 = 0;
  uStack_7f0 = 0xffffffffffffffff;
  uStack_7f8 = 0x100000064;
  uStack_800 = 0;
  puStack_7e8 = &UNK_10f658eca;
  uStack_7e0 = 0x23;
  uStack_7d8 = 0;
  uStack_7c8 = 0;
  uStack_7d0 = 0;
  uStack_7c0 = 0xffffffff;
  uStack_7b0 = 0;
  uStack_7b8 = 0;
  FUN_10a459dd0(&pppuStack_8e0,&pcStack_810);
  pcStack_878 = "g";
  uStack_870 = 0;
  uStack_858 = 0xffffffffffffffff;
  uStack_860 = 0x100000064;
  uStack_868 = 0;
  puStack_850 = &UNK_10f658eee;
  uStack_848 = 0x23;
  uStack_840 = 0;
  uStack_830 = 0;
  uStack_838 = 0;
  uStack_828 = 0xffffffff;
  uStack_818 = 0;
  uStack_820 = 0;
  func_0x00010a459e38(&pppuStack_8e0,&pcStack_878);
  pppuVar11 = pppuVar8;
  FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar11 & 1) == 0) {
    if (((ulong)pppuVar8[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar8,&DAT_10f648172,FUN_10a479d10,1,pppuVar8[8]);
  }
  pppuVar11 = pppuVar8;
  FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar11 & 1) == 0) {
    if (((ulong)pppuVar8[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar8,&UNK_10f658f12,FUN_10a479e34,3,pppuVar8[8]);
  }
  pcStack_948 = "vec";
  ppcStack_260 = &pcStack_948;
  puStack_268 = &UNK_10f65ae8e;
  uStack_248 = 0xffffffffffffffff;
  uStack_250 = 0x200000019;
  uStack_258 = 1;
  puStack_240 = &UNK_10f65ae95;
  uStack_238 = 0x2a;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 0xffffffff;
  uStack_210 = 0;
  uStack_208 = 0;
  FUN_10a47a280(&pppuStack_8e0,&puStack_268);
  pppuStack_9c0 = (undefined ***)&UNK_10f6590db;
  ppppuStack_2d0 = &pppuStack_9c0;
  ppuStack_2d8 = (undefined **)&UNK_10f65aec0;
  uStack_2b8 = 0xffffffffffffffff;
  uStack_2c0 = 0x200000019;
  uStack_2c8 = 1;
  puStack_2b0 = &UNK_10f65aec7;
  uStack_2a8 = 0x31;
  uStack_2a0 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_288 = 0xffffffff;
  uStack_278 = 0;
  uStack_280 = 0;
  func_0x00010a47a2f4(&pppuStack_8e0,&ppuStack_2d8);
  pcStack_a28 = "vec";
  ppcStack_348 = &pcStack_a28;
  pcStack_350 = "mulVec";
  uStack_330 = 0xffffffffffffffff;
  uStack_338 = 0x200000019;
  pcStack_340 = (char *)0x1;
  puStack_328 = &UNK_10f65af00;
  uStack_320 = 0x2f;
  uStack_318 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_300 = 0xffffffff;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  func_0x00010a47a368(&pppuStack_8e0,&pcStack_350);
  pppuStack_a90 = (undefined ***)&UNK_10f6590db;
  ppcStack_3b8 = (char **)&pppuStack_a90;
  pppuStack_3c0 = (undefined ***)&UNK_10f65af30;
  uStack_3a0 = 0xffffffffffffffff;
  uStack_3a8 = 0x200000019;
  pcStack_3b0 = (char *)0x1;
  puStack_398 = &UNK_10f65af37;
  uStack_390 = 0x2c;
  uStack_388 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_370 = 0xffffffff;
  uStack_360 = 0;
  uStack_368 = 0;
  func_0x00010a47a3dc(&pppuStack_8e0,&pppuStack_3c0);
  pppuVar11 = pppuStack_8e0;
  pppuVar9 = pppuStack_8e0;
  FUN_10a0051e8(pppuStack_8e0,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65af64,FUN_10a47a8dc,2,pppuVar11[8]);
  }
  pcStack_b18 = "vec";
  ppcStack_428 = &pcStack_b18;
  pcStack_430 = "add";
  uStack_410 = 0xffffffffffffffff;
  uStack_418 = 0x100000064;
  uStack_420 = 1;
  puStack_408 = &UNK_10f65af6f;
  uStack_400 = 0x1e;
  uStack_3f8 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3e0 = 0xffffffff;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  FUN_10a47a280(&pppuStack_8e0,&pcStack_430);
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65af8e,FUN_10a47aa24,2,pppuVar11[8]);
  }
  pppuStack_ab0 = (undefined ***)&UNK_10f6590db;
  ppppuStack_498 = &pppuStack_ab0;
  pcStack_4a0 = "sub";
  uStack_480 = 0xffffffffffffffff;
  uStack_488 = 0x100000064;
  uStack_490 = 1;
  puStack_478 = &UNK_10f65af99;
  uStack_470 = 0x1f;
  uStack_468 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_450 = 0xffffffff;
  uStack_440 = 0;
  uStack_448 = 0;
  func_0x00010a47a2f4(&pppuStack_8e0,&pcStack_4a0);
  pcStack_b40 = "vec";
  ppcStack_508 = &pcStack_b40;
  pcStack_510 = "multInPlace";
  uStack_4f0 = 0xffffffffffffffff;
  uStack_4f8 = 0x100000064;
  uStack_500 = 1;
  puStack_4e8 = &UNK_10f65afc5;
  uStack_4e0 = 0x38;
  uStack_4d8 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4c0 = 0xffffffff;
  uStack_4b0 = 0;
  uStack_4b8 = 0;
  func_0x00010a47a450(&pppuStack_8e0,&pcStack_510);
  pppuStack_958 = (undefined ***)&UNK_10f6590db;
  ppppuStack_578 = &pppuStack_958;
  puStack_580 = &UNK_10f659760;
  uStack_560 = 0xffffffffffffffff;
  uStack_568 = 0x100000064;
  uStack_570 = 1;
  puStack_558 = &UNK_10f65affe;
  uStack_550 = 0x4a;
  uStack_548 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_530 = 0xffffffff;
  uStack_520 = 0;
  uStack_528 = 0;
  func_0x00010a47a368(&pppuStack_8e0,&puStack_580);
  pcStack_270 = "vec";
  pdStack_5e8 = (dword *)&pcStack_270;
  pppuStack_5f0 = (undefined ***)&UNK_10f65b049;
  uStack_5d0 = 0xffffffffffffffff;
  uStack_5d8 = 0x100000064;
  uStack_5e0 = 1;
  puStack_5c8 = &UNK_10f65afc5;
  uStack_5c0 = 0x38;
  uStack_5b8 = 0;
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_5a0 = 0xffffffff;
  uStack_590 = 0;
  uStack_598 = 0;
  func_0x00010a47a450(&pppuStack_8e0,&pppuStack_5f0);
  pppuStack_2e0 = (undefined ***)&UNK_10f6590db;
  ppcStack_658 = (char **)&pppuStack_2e0;
  pcStack_660 = "scale";
  uStack_640 = 0xffffffffffffffff;
  uStack_648 = 0x100000064;
  uStack_650 = 1;
  puStack_638 = &UNK_10f65affe;
  uStack_630 = 0x4a;
  uStack_628 = 0;
  uStack_618 = 0;
  uStack_620 = 0;
  uStack_610 = 0xffffffff;
  uStack_600 = 0;
  uStack_608 = 0;
  func_0x00010a47a368(&pppuStack_8e0,&pcStack_660);
  pppuVar11 = pppuStack_8e0;
  pppuVar9 = pppuStack_8e0;
  FUN_10a0051e8(pppuStack_8e0,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b056,FUN_10a47abd4,2,pppuVar11[8]);
  }
  pcStack_358 = "vec";
  ppcStack_6c8 = &pcStack_358;
  puStack_6d0 = &UNK_10f659799;
  uStack_6b0 = 0xffffffffffffffff;
  uStack_6b8 = 0x100000064;
  uStack_6c0 = 1;
  puStack_6a8 = &UNK_10f65b061;
  uStack_6a0 = 0x37;
  uStack_698 = 0;
  uStack_688 = 0;
  uStack_690 = 0;
  uStack_680 = 0xffffffff;
  uStack_670 = 0;
  uStack_678 = 0;
  func_0x00010a47a3dc(&pppuStack_8e0,&puStack_6d0);
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b099,FUN_10a47acac,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&DAT_10f65b0ad,FUN_10a47ada4,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f4916a0,FUN_10a47af08,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    FUN_10a052828(pppuVar11,&DAT_10f355a53,FUN_10a47afe0,FUN_10a47b0ac);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b0ba,FUN_10a47b160,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b0cd,FUN_10a47b214,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    FUN_10a052828(pppuVar11,&UNK_10f65b0d9,FUN_10a47b2c8,FUN_10a47b390);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b0e7,FUN_10a47b444,1,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f491784,FUN_10a47b520,1,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b0f8,FUN_10a47b614,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&DAT_10f3e1a8f,FUN_10a47b734,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b100,FUN_10a47b81c,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&DAT_10f329830,FUN_10a47b900,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b110,FUN_10a47b9dc,3,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b123,FUN_10a47bb5c,3,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b12f,FUN_10a47bca4,3,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b13b,FUN_10a47bd58,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f598d6c,FUN_10a47be0c,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b14a,FUN_10a47bec0,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b160,FUN_10a47bf74,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b16f,FUN_10a47c028,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f4917f3,FUN_10a47c10c,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f64f5cc,FUN_10a47c1c0,1,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b17e,FUN_10a47c28c,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,"fill",FUN_10a47c520,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f658f18,FUN_10a47c610,1,pppuVar11[8]);
  }
  pppuVar11[0x36] = (undefined **)PTR___ZTIDn_1103469e8;
  ppuVar7 = pppuVar11[0x2e];
  if (pppuVar11[0x2d] != ppuVar7) {
    uVar1 = *(undefined4 *)(ppuVar7 + -10);
    uVar3 = *(undefined4 *)((long)ppuVar7 + -0x4c);
    uVar2 = *(undefined4 *)(ppuVar7 + -9);
    uVar4 = *(undefined4 *)((long)ppuVar7 + -0x44);
    uVar5 = *(undefined4 *)(ppuVar7 + -3);
    pppuVar11[0x2e] = ppuVar7 + -0xd;
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,uVar1,uVar3,uVar5,uVar2,uVar4);
    if (((ulong)pppuVar9 & 1) == 0) {
      func_0x000109894f40(pppuVar11,0);
      FUN_10a05431c(pppuVar11);
    }
    FUN_10a003e74(pppuVar8,&DAT_10f4913b9,4);
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&DAT_10f3dd8f1,FUN_10a47c6e4,2,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&DAT_10f3dd8ed,FUN_10a47c838,2,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&UNK_10f658f2c,FUN_10a47c8e4,3,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&DAT_10f5aeeaf,FUN_10a47ca34,0,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&DAT_10f4b54a4,FUN_10a47cae4,0,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&DAT_10f4653a7,FUN_10a47cb90,0,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&UNK_10f655b08,FUN_10a47cc44,0,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,"left",FUN_10a47ccf8,0,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,"right",FUN_10a47cdac,0,pppuVar8[3] + -1);
    }
    puStack_268 = &UNK_10f658f31;
    ppcStack_260 = (char **)0x0;
    uStack_248 = 0xffffffffffffffff;
    uStack_250 = 0x200000064;
    uStack_258 = 0;
    puStack_240 = &UNK_10f658f41;
    uStack_238 = 0xb3;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 0xffffffff;
    uStack_210 = 0;
    uStack_208 = 0;
    FUN_10a459ea0(pppuVar8,&puStack_268);
    puStack_268 = &UNK_10f658ff5;
    ppcStack_260 = (char **)0x0;
    uStack_248 = 0xffffffffffffffff;
    uStack_250 = 0x100000064;
    uStack_258 = 0;
    puStack_240 = &UNK_10f659006;
    uStack_238 = 0x58;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 0xffffffff;
    uStack_210 = 0;
    uStack_208 = 0;
    FUN_10a459ea0();
    func_0x00010a004064();
    pppuVar8[0x36] = &PTR_DAT_110b9fba0;
    if (*(char *)((long)pppuVar8 + 0x1cf) < '\0') {
      pppuVar8[0x38] = (undefined **)0x4;
      pppuVar11 = (undefined ***)pppuVar8[0x37];
    }
    else {
      *(undefined1 *)((long)pppuVar8 + 0x1cf) = 4;
      pppuVar11 = pppuVar12;
    }
    *(undefined4 *)pppuVar11 = 0x33636576;
    *(undefined1 *)((long)pppuVar11 + 4) = 0;
    puStack_268 = &DAT_10f4913be;
    ppcStack_260 = (char **)0x0;
    uStack_248 = 0xffffffffffffffff;
    uStack_250 = 0x100000064;
    uStack_238 = 0;
    puStack_240 = (undefined *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    uStack_220 = 0;
    uStack_218 = 0xffffffff;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010a052690(pppuVar8 + 0x2d,&puStack_268);
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      ppuStack_2d8 = &PTR_DAT_110b9fba0;
      ppppuStack_2d0 = (undefined ****)0x0;
      puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffffffffff00);
      uStack_258 = uStack_258 & 0xffffffffffffff00;
      func_0x0001098949cc(pppuVar8,&DAT_10f4913be,&ppuStack_2d8,&puStack_268);
    }
    uStack_9b8 = 0x100000064;
    pppuVar11 = pppuVar8;
    pppuStack_9c0 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      func_0x00010a06ba0c(pppuVar8,FUN_10a47cf30,3,3);
    }
    puStack_740 = &DAT_10f62b0e2;
    uStack_738 = 0;
    uStack_720 = 0xffffffffffffffff;
    uStack_728 = 0x100000064;
    uStack_730 = 0;
    puStack_718 = &UNK_10f65905f;
    uStack_710 = 0x18;
    uStack_708 = 0;
    uStack_6f8 = 0;
    uStack_700 = 0;
    uStack_6f0 = 0xffffffff;
    uStack_6e0 = 0;
    uStack_6e8 = 0;
    FUN_10a45a258(&pppuStack_9c0,&puStack_740);
    pcStack_7a8 = "y";
    uStack_7a0 = 0;
    uStack_788 = 0xffffffffffffffff;
    uStack_790 = 0x100000064;
    uStack_798 = 0;
    puStack_780 = &UNK_10f659078;
    uStack_778 = 0x18;
    uStack_770 = 0;
    uStack_760 = 0;
    uStack_768 = 0;
    uStack_758 = 0xffffffff;
    uStack_748 = 0;
    uStack_750 = 0;
    func_0x00010a45a2c0(&pppuStack_9c0,&pcStack_7a8);
    pcStack_810 = "z";
    uStack_808 = 0;
    uStack_7f0 = 0xffffffffffffffff;
    uStack_7f8 = 0x100000064;
    uStack_800 = 0;
    puStack_7e8 = &UNK_10f659091;
    uStack_7e0 = 0x18;
    uStack_7d8 = 0;
    uStack_7c8 = 0;
    uStack_7d0 = 0;
    uStack_7c0 = 0xffffffff;
    uStack_7b0 = 0;
    uStack_7b8 = 0;
    func_0x00010a45a328(&pppuStack_9c0,&pcStack_810);
    pcStack_878 = "r";
    uStack_870 = 0;
    uStack_858 = 0xffffffffffffffff;
    uStack_860 = 0x100000064;
    uStack_868 = 0;
    puStack_850 = &UNK_10f658eca;
    uStack_848 = 0x23;
    uStack_840 = 0;
    uStack_830 = 0;
    uStack_838 = 0;
    uStack_828 = 0xffffffff;
    uStack_818 = 0;
    uStack_820 = 0;
    FUN_10a45a258(&pppuStack_9c0,&pcStack_878);
    pppuStack_8e0 = (undefined ***)0x10f2849e6;
    uStack_8d8 = 0;
    uStack_8c0 = 0xffffffffffffffff;
    uStack_8c8 = 0x100000064;
    uStack_8d0 = 0;
    puStack_8b8 = &UNK_10f658eee;
    uStack_8b0 = 0x23;
    uStack_8a8 = 0;
    uStack_898 = 0;
    uStack_8a0 = 0;
    uStack_890 = 0xffffffff;
    uStack_880 = 0;
    uStack_888 = 0;
    func_0x00010a45a2c0(&pppuStack_9c0,&pppuStack_8e0);
    pcStack_948 = "b";
    uStack_940 = 0;
    uStack_928 = 0xffffffffffffffff;
    uStack_930 = 0x100000064;
    uStack_938 = 0;
    puStack_920 = &UNK_10f6590aa;
    uStack_918 = 0x23;
    uStack_910 = 0;
    uStack_900 = 0;
    uStack_908 = 0;
    uStack_8f8 = 0xffffffff;
    uStack_8e8 = 0;
    uStack_8f0 = 0;
    func_0x00010a45a328(&pppuStack_9c0,&pcStack_948);
    pppuVar11 = pppuStack_9c0;
    pppuVar9 = pppuStack_9c0;
    FUN_10a0051e8(pppuStack_9c0,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&DAT_10f648172,FUN_10a47d668,1,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f6590ce,FUN_10a47d78c,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f491684,FUN_10a47d8f8,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f6590df,FUN_10a47da38,3,pppuVar11[8]);
    }
    pcStack_a28 = "vec";
    ppcStack_260 = &pcStack_a28;
    puStack_268 = &UNK_10f65ae8e;
    uStack_248 = 0xffffffffffffffff;
    uStack_250 = 0x200000019;
    uStack_258 = 1;
    puStack_240 = &UNK_10f65ae95;
    uStack_238 = 0x2a;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 0xffffffff;
    uStack_210 = 0;
    uStack_208 = 0;
    FUN_10a47e08c(&pppuStack_9c0,&puStack_268);
    pppuStack_a90 = (undefined ***)&UNK_10f6590db;
    ppppuStack_2d0 = &pppuStack_a90;
    ppuStack_2d8 = (undefined **)&UNK_10f65aec0;
    uStack_2b8 = 0xffffffffffffffff;
    uStack_2c0 = 0x200000019;
    uStack_2c8 = 1;
    puStack_2b0 = &UNK_10f65aec7;
    uStack_2a8 = 0x31;
    uStack_2a0 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_288 = 0xffffffff;
    uStack_278 = 0;
    uStack_280 = 0;
    func_0x00010a47e100(&pppuStack_9c0,&ppuStack_2d8);
    pcStack_b18 = "vec";
    ppcStack_348 = &pcStack_b18;
    pcStack_350 = "mulVec";
    uStack_330 = 0xffffffffffffffff;
    uStack_338 = 0x200000019;
    pcStack_340 = (char *)0x1;
    puStack_328 = &UNK_10f65af00;
    uStack_320 = 0x2f;
    uStack_318 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_300 = 0xffffffff;
    uStack_2f0 = 0;
    uStack_2f8 = 0;
    func_0x00010a47e174(&pppuStack_9c0,&pcStack_350);
    pppuStack_ab0 = (undefined ***)&UNK_10f6590db;
    ppcStack_3b8 = (char **)&pppuStack_ab0;
    pppuStack_3c0 = (undefined ***)&UNK_10f65af30;
    uStack_3a0 = 0xffffffffffffffff;
    uStack_3a8 = 0x200000019;
    pcStack_3b0 = (char *)0x1;
    puStack_398 = &UNK_10f65af37;
    uStack_390 = 0x2c;
    uStack_388 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_370 = 0xffffffff;
    uStack_360 = 0;
    uStack_368 = 0;
    func_0x00010a47e1e8(&pppuStack_9c0,&pppuStack_3c0);
    pppuVar11 = pppuStack_9c0;
    pppuVar9 = pppuStack_9c0;
    FUN_10a0051e8(pppuStack_9c0,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65af64,FUN_10a47e5a0,2,pppuVar11[8]);
    }
    pcStack_b40 = "vec";
    ppcStack_428 = &pcStack_b40;
    pcStack_430 = "add";
    uStack_410 = 0xffffffffffffffff;
    uStack_418 = 0x100000064;
    uStack_420 = 1;
    puStack_408 = &UNK_10f65af6f;
    uStack_400 = 0x1e;
    uStack_3f8 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3e0 = 0xffffffff;
    uStack_3d0 = 0;
    uStack_3d8 = 0;
    FUN_10a47e08c(&pppuStack_9c0,&pcStack_430);
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65af8e,FUN_10a47e688,2,pppuVar11[8]);
    }
    pppuStack_958 = (undefined ***)&UNK_10f6590db;
    ppppuStack_498 = &pppuStack_958;
    pcStack_4a0 = "sub";
    uStack_480 = 0xffffffffffffffff;
    uStack_488 = 0x100000064;
    uStack_490 = 1;
    puStack_478 = &UNK_10f65af99;
    uStack_470 = 0x1f;
    uStack_468 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_450 = 0xffffffff;
    uStack_440 = 0;
    uStack_448 = 0;
    func_0x00010a47e100(&pppuStack_9c0,&pcStack_4a0);
    pcStack_270 = "vec";
    ppcStack_508 = &pcStack_270;
    pcStack_510 = "multInPlace";
    uStack_4f0 = 0xffffffffffffffff;
    uStack_4f8 = 0x100000064;
    uStack_500 = 1;
    puStack_4e8 = &UNK_10f65afc5;
    uStack_4e0 = 0x38;
    uStack_4d8 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4c0 = 0xffffffff;
    uStack_4b0 = 0;
    uStack_4b8 = 0;
    func_0x00010a47e25c(&pppuStack_9c0,&pcStack_510);
    pppuStack_2e0 = (undefined ***)&UNK_10f6590db;
    ppppuStack_578 = &pppuStack_2e0;
    puStack_580 = &UNK_10f659760;
    uStack_560 = 0xffffffffffffffff;
    uStack_568 = 0x100000064;
    uStack_570 = 1;
    puStack_558 = &UNK_10f65affe;
    uStack_550 = 0x4a;
    uStack_548 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_530 = 0xffffffff;
    uStack_520 = 0;
    uStack_528 = 0;
    func_0x00010a47e174(&pppuStack_9c0,&puStack_580);
    pcStack_358 = "vec";
    pdStack_5e8 = (dword *)&pcStack_358;
    pppuStack_5f0 = (undefined ***)&UNK_10f65b049;
    uStack_5d0 = 0xffffffffffffffff;
    uStack_5d8 = 0x100000064;
    uStack_5e0 = 1;
    puStack_5c8 = &UNK_10f65afc5;
    uStack_5c0 = 0x38;
    uStack_5b8 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_5a0 = 0xffffffff;
    uStack_590 = 0;
    uStack_598 = 0;
    func_0x00010a47e25c(&pppuStack_9c0,&pppuStack_5f0);
    pcStack_3c8 = "vec";
    ppcStack_658 = &pcStack_3c8;
    pcStack_660 = "scale";
    uStack_640 = 0xffffffffffffffff;
    uStack_648 = 0x100000064;
    uStack_650 = 1;
    puStack_638 = &UNK_10f65affe;
    uStack_630 = 0x4a;
    uStack_628 = 0;
    uStack_618 = 0;
    uStack_620 = 0;
    uStack_610 = 0xffffffff;
    uStack_600 = 0;
    uStack_608 = 0;
    func_0x00010a47e174(&pppuStack_9c0,&pcStack_660);
    pppuVar11 = pppuStack_9c0;
    pppuVar9 = pppuStack_9c0;
    FUN_10a0051e8(pppuStack_9c0,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b056,FUN_10a47e858,2,pppuVar11[8]);
    }
    pcStack_438 = "vec";
    ppcStack_6c8 = &pcStack_438;
    puStack_6d0 = &UNK_10f659799;
    uStack_6b0 = 0xffffffffffffffff;
    uStack_6b8 = 0x100000064;
    uStack_6c0 = 1;
    puStack_6a8 = &UNK_10f65b061;
    uStack_6a0 = 0x37;
    uStack_698 = 0;
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_680 = 0xffffffff;
    uStack_670 = 0;
    uStack_678 = 0;
    func_0x00010a47e1e8(&pppuStack_9c0,&puStack_6d0);
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b099,FUN_10a47e940,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&DAT_10f65b0ad,FUN_10a47ea44,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f4916a0,FUN_10a47ebac,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      FUN_10a052828(pppuVar11,&DAT_10f355a53,FUN_10a47eca8,FUN_10a47ed80);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b0ba,FUN_10a47ee34,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b0cd,FUN_10a47eee8,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      FUN_10a052828(pppuVar11,&UNK_10f65b0d9,FUN_10a47ef9c,FUN_10a47f070);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b0e7,FUN_10a47f124,1,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f491784,FUN_10a47f214,1,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b0f8,FUN_10a47f318,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&DAT_10f3e1a8f,FUN_10a47f3ec,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b100,FUN_10a47f4e8,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&DAT_10f329830,FUN_10a47f5e0,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b110,FUN_10a47f6cc,3,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b123,FUN_10a47f780,3,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b12f,FUN_10a47f8f8,3,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b13b,FUN_10a47f9ac,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f598d6c,FUN_10a47fa60,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b14a,FUN_10a47fb14,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b160,FUN_10a47fc14,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b16f,FUN_10a47fcc8,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f4917f3,FUN_10a47fd7c,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f64f5cc,FUN_10a47fe30,1,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b17e,FUN_10a47ff04,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,"fill",FUN_10a480084,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f6590f4,FUN_10a480178,3,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f659102,FUN_10a48022c,3,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f658f18,FUN_10a4802e0,1,pppuVar11[8]);
    }
    ppcStack_348 = (char **)0x10f28482f;
    pcStack_350 = "x";
    pcStack_340 = "z";
    ppcStack_260 = &pcStack_350;
    puStack_268 = &UNK_10f65910f;
    uStack_248 = 0xffffffffffffffff;
    uStack_250 = 0x100000064;
    uStack_258 = 3;
    puStack_240 = &UNK_10f659116;
    uStack_238 = 0x7f;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 0xffffffff;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010a45a390(&pppuStack_9c0,&puStack_268);
    ppcStack_3b8 = (char **)0x10f2849e6;
    pppuStack_3c0 = (undefined ***)0x10f2849a6;
    pcStack_3b0 = "b";
    ppppuStack_2d0 = &pppuStack_3c0;
    ppuStack_2d8 = (undefined **)&UNK_10f659196;
    uStack_2b8 = 0xffffffffffffffff;
    uStack_2c0 = 0x100000064;
    uStack_2c8 = 3;
    puStack_2b0 = &UNK_10f65919d;
    uStack_2a8 = 0x98;
    uStack_2a0 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_288 = 0xffffffff;
    uStack_278 = 0;
    uStack_280 = 0;
    func_0x00010a45a390(&pppuStack_9c0,&ppuStack_2d8);
    pppuVar11[0x36] = (undefined **)PTR___ZTIDn_1103469e8;
    ppuVar7 = pppuVar11[0x2e];
    if (pppuVar11[0x2d] != ppuVar7) {
      uVar1 = *(undefined4 *)(ppuVar7 + -10);
      uVar3 = *(undefined4 *)((long)ppuVar7 + -0x4c);
      uVar2 = *(undefined4 *)(ppuVar7 + -9);
      uVar4 = *(undefined4 *)((long)ppuVar7 + -0x44);
      uVar5 = *(undefined4 *)(ppuVar7 + -3);
      pppuVar11[0x2e] = ppuVar7 + -0xd;
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,uVar1,uVar3,uVar5,uVar2,uVar4);
      if (((ulong)pppuVar9 & 1) == 0) {
        func_0x000109894f40(pppuVar11,0);
        FUN_10a05431c(pppuVar11);
      }
      FUN_10a003e74(pppuVar8,&DAT_10f4913be,4);
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&UNK_10f659236,FUN_10a480618,2,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f3dd8f1,FUN_10a480700,2,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f3dd8ed,FUN_10a480858,2,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&UNK_10f658f2c,FUN_10a480904,3,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&UNK_10f659245,FUN_10a480a94,3,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f5aeeaf,FUN_10a480b40,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f4b54a4,FUN_10a480bf8,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f4653a7,FUN_10a480ca8,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&UNK_10f655b08,FUN_10a480d60,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,"left",FUN_10a480e18,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,"right",FUN_10a480ed0,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f3260f3,FUN_10a480f88,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f36da21,FUN_10a48103c,0,pppuVar8[3] + -1);
      }
      puStack_268 = &UNK_10f658f31;
      ppcStack_260 = (char **)0x0;
      uStack_248 = 0xffffffffffffffff;
      uStack_250 = 0x200000064;
      uStack_258 = 0;
      puStack_240 = &UNK_10f65924b;
      uStack_238 = 0xb3;
      uStack_230 = 0;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_218 = 0xffffffff;
      uStack_210 = 0;
      uStack_208 = 0;
      FUN_10a45a404(pppuVar8,&puStack_268);
      puStack_268 = &UNK_10f658ff5;
      ppcStack_260 = (char **)0x0;
      uStack_248 = 0xffffffffffffffff;
      uStack_250 = 0x100000064;
      uStack_258 = 0;
      puStack_240 = &UNK_10f6592ff;
      uStack_238 = 0x58;
      uStack_230 = 0;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_218 = 0xffffffff;
      uStack_210 = 0;
      uStack_208 = 0;
      FUN_10a45a404();
      func_0x00010a004064();
      pppuVar8[0x36] = &PTR_DAT_110bb3c20;
      if (*(char *)((long)pppuVar8 + 0x1cf) < '\0') {
        pppuVar8[0x38] = (undefined **)0x4;
        pppuVar11 = (undefined ***)pppuVar8[0x37];
      }
      else {
        *(undefined1 *)((long)pppuVar8 + 0x1cf) = 4;
        pppuVar11 = pppuVar12;
      }
      *(undefined4 *)pppuVar11 = 0x34636576;
      *(undefined1 *)((long)pppuVar11 + 4) = 0;
      puStack_268 = &DAT_10f4913c3;
      ppcStack_260 = (char **)0x0;
      uStack_248 = 0xffffffffffffffff;
      uStack_250 = 0x100000064;
      uStack_238 = 0;
      puStack_240 = (undefined *)0x0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_258 = 0;
      uStack_220 = 0;
      uStack_218 = 0xffffffff;
      uStack_210 = 0;
      uStack_208 = 0;
      func_0x00010a052690(pppuVar8 + 0x2d,&puStack_268);
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        ppuStack_2d8 = &PTR_DAT_110bb3c20;
        ppppuStack_2d0 = (undefined ****)0x0;
        puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffffffffff00);
        uStack_258 = uStack_258 & 0xffffffffffffff00;
        func_0x0001098949cc(pppuVar8,&DAT_10f4913c3,&ppuStack_2d8,&puStack_268);
      }
      uStack_950 = 0x100000064;
      pppuVar11 = pppuVar8;
      pppuStack_958 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        func_0x00010a06ba0c(pppuVar8,FUN_10a4811a8,4,4);
      }
      puStack_740 = &DAT_10f62b0e2;
      uStack_738 = 0;
      uStack_720 = 0xffffffffffffffff;
      uStack_728 = 0x100000064;
      uStack_730 = 0;
      puStack_718 = &UNK_10f659358;
      uStack_710 = 0x18;
      uStack_708 = 0;
      uStack_6f8 = 0;
      uStack_700 = 0;
      uStack_6f0 = 0xffffffff;
      uStack_6e0 = 0;
      uStack_6e8 = 0;
      FUN_10a45a5bc(&pppuStack_958,&puStack_740);
      pcStack_7a8 = "y";
      uStack_7a0 = 0;
      uStack_788 = 0xffffffffffffffff;
      uStack_790 = 0x100000064;
      uStack_798 = 0;
      puStack_780 = &UNK_10f659371;
      uStack_778 = 0x18;
      uStack_770 = 0;
      uStack_760 = 0;
      uStack_768 = 0;
      uStack_758 = 0xffffffff;
      uStack_748 = 0;
      uStack_750 = 0;
      func_0x00010a45a624(&pppuStack_958,&pcStack_7a8);
      pcStack_810 = "z";
      uStack_808 = 0;
      uStack_7f0 = 0xffffffffffffffff;
      uStack_7f8 = 0x100000064;
      uStack_800 = 0;
      puStack_7e8 = &UNK_10f65938a;
      uStack_7e0 = 0x18;
      uStack_7d8 = 0;
      uStack_7c8 = 0;
      uStack_7d0 = 0;
      uStack_7c0 = 0xffffffff;
      uStack_7b0 = 0;
      uStack_7b8 = 0;
      func_0x00010a45a68c(&pppuStack_958,&pcStack_810);
      pcStack_878 = "w";
      uStack_870 = 0;
      uStack_858 = 0xffffffffffffffff;
      uStack_860 = 0x100000064;
      uStack_868 = 0;
      puStack_850 = &UNK_10f6593a3;
      uStack_848 = 0x18;
      uStack_840 = 0;
      uStack_830 = 0;
      uStack_838 = 0;
      uStack_828 = 0xffffffff;
      uStack_818 = 0;
      uStack_820 = 0;
      func_0x00010a45a6f4(&pppuStack_958,&pcStack_878);
      pppuStack_8e0 = (undefined ***)0x10f2849a6;
      uStack_8d8 = 0;
      uStack_8c0 = 0xffffffffffffffff;
      uStack_8c8 = 0x100000064;
      uStack_8d0 = 0;
      puStack_8b8 = &UNK_10f658eca;
      uStack_8b0 = 0x23;
      uStack_8a8 = 0;
      uStack_898 = 0;
      uStack_8a0 = 0;
      uStack_890 = 0xffffffff;
      uStack_880 = 0;
      uStack_888 = 0;
      FUN_10a45a5bc(&pppuStack_958,&pppuStack_8e0);
      pcStack_948 = "g";
      uStack_940 = 0;
      uStack_928 = 0xffffffffffffffff;
      uStack_930 = 0x100000064;
      uStack_938 = 0;
      puStack_920 = &UNK_10f658eee;
      uStack_918 = 0x23;
      uStack_910 = 0;
      uStack_900 = 0;
      uStack_908 = 0;
      uStack_8f8 = 0xffffffff;
      uStack_8e8 = 0;
      uStack_8f0 = 0;
      func_0x00010a45a624(&pppuStack_958,&pcStack_948);
      pppuStack_9c0 = (undefined ***)0x10f268db8;
      uStack_9b8 = 0;
      uStack_9a0 = 0xffffffffffffffff;
      uStack_9a8 = 0x100000064;
      uStack_9b0 = 0;
      puStack_998 = &UNK_10f6590aa;
      uStack_990 = 0x23;
      uStack_988 = 0;
      uStack_980 = 0;
      uStack_978 = 0;
      uStack_970 = 0xffffffff;
      uStack_960 = 0;
      uStack_968 = 0;
      func_0x00010a45a68c(&pppuStack_958,&pppuStack_9c0);
      pcStack_a28 = "a";
      uStack_a20 = 0;
      uStack_a08 = 0xffffffffffffffff;
      uStack_a10 = 0x100000064;
      uStack_a18 = 0;
      puStack_a00 = &UNK_10f6593bc;
      uStack_9f8 = 0x23;
      uStack_9f0 = 0;
      uStack_9e8 = 0;
      uStack_9e0 = 0;
      uStack_9d8 = 0xffffffff;
      uStack_9d0 = 0;
      uStack_9c8 = 0;
      func_0x00010a45a6f4(&pppuStack_958,&pcStack_a28);
      pppuVar11 = pppuStack_958;
      pppuVar9 = pppuStack_958;
      FUN_10a0051e8(pppuStack_958,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&DAT_10f648172,FUN_10a481a90,1,pppuVar11[8]);
      }
      pcStack_aa8 = "y";
      pppuStack_ab0 = (undefined ***)&DAT_10f62b0e2;
      puStack_a98 = &DAT_10f30a8bb;
      pcStack_aa0 = "z";
      ppuStack_a88 = &pppuStack_ab0;
      pppuStack_a90 = (undefined ***)&UNK_10f6593e0;
      uStack_a70 = 0xffffffffffffffff;
      uStack_a78 = 0x100000064;
      uStack_a80 = 4;
      puStack_a68 = &UNK_10f6593e8;
      uStack_a60 = 0x84;
      uStack_a58 = 0;
      uStack_a50 = 0;
      uStack_a48 = 0;
      uStack_a40 = 0xffffffff;
      uStack_a38 = 0;
      uStack_a30 = 0;
      func_0x00010a45a75c(&pppuStack_958,&pppuStack_a90);
      pcStack_b38 = "g";
      pcStack_b40 = "r";
      puStack_b28 = &DAT_10f3dc16b;
      pcStack_b30 = "b";
      ppcStack_b10 = &pcStack_b40;
      pcStack_b18 = "setRGBA";
      uStack_b08 = 4;
      uStack_af8 = 0xffffffffffffffff;
      uStack_b00 = 0x100000064;
      puStack_af0 = &UNK_10f659475;
      uStack_ae8 = 0x9d;
      uStack_ad8 = 0;
      uStack_ad0 = 0;
      uStack_ae0 = 0;
      uStack_ac8 = 0xffffffff;
      uStack_ac0 = 0;
      uStack_ab8 = 0;
      func_0x00010a45a75c(&pppuStack_958,&pcStack_b18);
      ppcStack_260 = &pcStack_270;
      pcStack_270 = "vec";
      puStack_268 = &UNK_10f65ae8e;
      uStack_248 = 0xffffffffffffffff;
      uStack_250 = 0x200000019;
      uStack_258 = 1;
      puStack_240 = &UNK_10f65ae95;
      uStack_238 = 0x2a;
      uStack_230 = 0;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_218 = 0xffffffff;
      uStack_210 = 0;
      uStack_208 = 0;
      FUN_10a4822d8(&pppuStack_958,&puStack_268);
      pppuStack_2e0 = (undefined ***)&UNK_10f6590db;
      ppppuStack_2d0 = &pppuStack_2e0;
      ppuStack_2d8 = (undefined **)&UNK_10f65aec0;
      uStack_2b8 = 0xffffffffffffffff;
      uStack_2c0 = 0x200000019;
      uStack_2c8 = 1;
      puStack_2b0 = &UNK_10f65aec7;
      uStack_2a8 = 0x31;
      uStack_2a0 = 0;
      uStack_290 = 0;
      uStack_298 = 0;
      uStack_288 = 0xffffffff;
      uStack_278 = 0;
      uStack_280 = 0;
      func_0x00010a48234c(&pppuStack_958,&ppuStack_2d8);
      pcStack_358 = "vec";
      ppcStack_348 = &pcStack_358;
      pcStack_350 = "mulVec";
      uStack_330 = 0xffffffffffffffff;
      uStack_338 = 0x200000019;
      pcStack_340 = (char *)0x1;
      puStack_328 = &UNK_10f65af00;
      uStack_320 = 0x2f;
      uStack_318 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_300 = 0xffffffff;
      uStack_2f0 = 0;
      uStack_2f8 = 0;
      func_0x00010a4823c0(&pppuStack_958,&pcStack_350);
      pcStack_3c8 = "vec";
      ppcStack_3b8 = &pcStack_3c8;
      pppuStack_3c0 = (undefined ***)&UNK_10f65af30;
      uStack_3a0 = 0xffffffffffffffff;
      uStack_3a8 = 0x200000019;
      pcStack_3b0 = (char *)0x1;
      puStack_398 = &UNK_10f65af37;
      uStack_390 = 0x2c;
      uStack_388 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_370 = 0xffffffff;
      uStack_360 = 0;
      uStack_368 = 0;
      func_0x00010a482434(&pppuStack_958,&pppuStack_3c0);
      pppuVar11 = pppuStack_958;
      pppuVar9 = pppuStack_958;
      FUN_10a0051e8(pppuStack_958,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65af64,FUN_10a482878,2,pppuVar11[8]);
      }
      pcStack_438 = "vec";
      ppcStack_428 = &pcStack_438;
      pcStack_430 = "add";
      uStack_410 = 0xffffffffffffffff;
      uStack_418 = 0x100000064;
      uStack_420 = 1;
      puStack_408 = &UNK_10f65af6f;
      uStack_400 = 0x1e;
      uStack_3f8 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3e0 = 0xffffffff;
      uStack_3d0 = 0;
      uStack_3d8 = 0;
      FUN_10a4822d8(&pppuStack_958,&pcStack_430);
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65af8e,FUN_10a4829b4,2,pppuVar11[8]);
      }
      pppuStack_4a8 = (undefined ***)&UNK_10f6590db;
      ppppuStack_498 = &pppuStack_4a8;
      pcStack_4a0 = "sub";
      uStack_480 = 0xffffffffffffffff;
      uStack_488 = 0x100000064;
      uStack_490 = 1;
      puStack_478 = &UNK_10f65af99;
      uStack_470 = 0x1f;
      uStack_468 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_450 = 0xffffffff;
      uStack_440 = 0;
      uStack_448 = 0;
      func_0x00010a48234c(&pppuStack_958,&pcStack_4a0);
      pcStack_518 = "vec";
      ppcStack_508 = &pcStack_518;
      pcStack_510 = "multInPlace";
      uStack_4f0 = 0xffffffffffffffff;
      uStack_4f8 = 0x100000064;
      uStack_500 = 1;
      puStack_4e8 = &UNK_10f65afc5;
      uStack_4e0 = 0x38;
      uStack_4d8 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4c0 = 0xffffffff;
      uStack_4b0 = 0;
      uStack_4b8 = 0;
      func_0x00010a4824a8(&pppuStack_958,&pcStack_510);
      pppuStack_588 = (undefined ***)&UNK_10f6590db;
      ppppuStack_578 = &pppuStack_588;
      puStack_580 = &UNK_10f659760;
      uStack_560 = 0xffffffffffffffff;
      uStack_568 = 0x100000064;
      uStack_570 = 1;
      puStack_558 = &UNK_10f65affe;
      uStack_550 = 0x4a;
      uStack_548 = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      uStack_530 = 0xffffffff;
      uStack_520 = 0;
      uStack_528 = 0;
      func_0x00010a4823c0(&pppuStack_958,&puStack_580);
      puStack_5f8 = &UNK_10f6590db;
      pdStack_5e8 = (dword *)&puStack_5f8;
      pppuStack_5f0 = (undefined ***)&UNK_10f65b049;
      uStack_5d0 = 0xffffffffffffffff;
      uStack_5d8 = 0x100000064;
      uStack_5e0 = 1;
      puStack_5c8 = &UNK_10f65afc5;
      uStack_5c0 = 0x38;
      uStack_5b8 = 0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_5a0 = 0xffffffff;
      uStack_590 = 0;
      uStack_598 = 0;
      func_0x00010a4824a8(&pppuStack_958,&pppuStack_5f0);
      pcStack_668 = "vec";
      ppcStack_658 = &pcStack_668;
      pcStack_660 = "scale";
      uStack_640 = 0xffffffffffffffff;
      uStack_648 = 0x100000064;
      uStack_650 = 1;
      puStack_638 = &UNK_10f65affe;
      uStack_630 = 0x4a;
      uStack_628 = 0;
      uStack_618 = 0;
      uStack_620 = 0;
      uStack_610 = 0xffffffff;
      uStack_600 = 0;
      uStack_608 = 0;
      func_0x00010a4823c0(&pppuStack_958,&pcStack_660);
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b056,FUN_10a482b4c,2,pppuVar11[8]);
      }
      pcStack_6d8 = "vec";
      ppcStack_6c8 = &pcStack_6d8;
      puStack_6d0 = &UNK_10f659799;
      uStack_6b0 = 0xffffffffffffffff;
      uStack_6b8 = 0x100000064;
      uStack_6c0 = 1;
      puStack_6a8 = &UNK_10f65b061;
      uStack_6a0 = 0x37;
      uStack_698 = 0;
      uStack_688 = 0;
      uStack_690 = 0;
      uStack_680 = 0xffffffff;
      uStack_670 = 0;
      uStack_678 = 0;
      func_0x00010a482434(&pppuStack_958,&puStack_6d0);
      pppuVar11 = pppuStack_958;
      pppuVar9 = pppuStack_958;
      FUN_10a0051e8(pppuStack_958,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b099,FUN_10a482c18,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&DAT_10f65b0ad,FUN_10a482ccc,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f4916a0,FUN_10a482e34,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        FUN_10a052828(pppuVar11,&DAT_10f355a53,FUN_10a482f40,FUN_10a483020);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b0ba,FUN_10a4830d4,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b0cd,FUN_10a483188,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        FUN_10a052828(pppuVar11,&UNK_10f65b0d9,FUN_10a48323c,FUN_10a483318);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b0e7,FUN_10a4833cc,1,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f491784,FUN_10a4834b8,1,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b0f8,FUN_10a4835b8,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&DAT_10f3e1a8f,FUN_10a483708,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b100,FUN_10a483810,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&DAT_10f329830,FUN_10a483914,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b110,FUN_10a483a08,3,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b123,FUN_10a483b88,3,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b12f,FUN_10a483cb0,3,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b13b,FUN_10a483d64,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f598d6c,FUN_10a483e18,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b14a,FUN_10a483ecc,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b160,FUN_10a483f80,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b16f,FUN_10a484034,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f4917f3,FUN_10a4840e8,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f64f5cc,FUN_10a48419c,1,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b17e,FUN_10a484268,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,"fill",FUN_10a4843b4,2,pppuVar11[8]);
      }
      pppuVar11[0x36] = (undefined **)PTR___ZTIDn_1103469e8;
      ppuVar7 = pppuVar11[0x2e];
      if (pppuVar11[0x2d] != ppuVar7) {
        uVar1 = *(undefined4 *)(ppuVar7 + -10);
        uVar3 = *(undefined4 *)((long)ppuVar7 + -0x4c);
        uVar2 = *(undefined4 *)(ppuVar7 + -9);
        uVar4 = *(undefined4 *)((long)ppuVar7 + -0x44);
        uVar5 = *(undefined4 *)(ppuVar7 + -3);
        pppuVar11[0x2e] = ppuVar7 + -0xd;
        pppuVar9 = pppuVar11;
        FUN_10a0051e8(pppuVar11,uVar1,uVar3,uVar5,uVar2,uVar4);
        if (((ulong)pppuVar9 & 1) == 0) {
          func_0x000109894f40(pppuVar11,0);
          FUN_10a05431c(pppuVar11);
        }
        FUN_10a003e74(pppuVar8,&DAT_10f4913c3,4);
        pppuVar11 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar11 & 1) == 0) {
          if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar8,&DAT_10f3dd8f1,FUN_10a4844a8,2,pppuVar8[3] + -1);
        }
        pppuVar11 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar11 & 1) == 0) {
          if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar8,&DAT_10f3dd8ed,FUN_10a484600,2,pppuVar8[3] + -1);
        }
        pppuVar11 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar11 & 1) == 0) {
          if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar8,&UNK_10f658f2c,FUN_10a4846ac,3,pppuVar8[3] + -1);
        }
        pppuVar11 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar11 & 1) == 0) {
          if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar8,&DAT_10f5aeeaf,FUN_10a4847fc,0,pppuVar8[3] + -1);
        }
        pppuVar11 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar11 & 1) == 0) {
          if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar8,&DAT_10f4b54a4,FUN_10a4848ac,0,pppuVar8[3] + -1);
        }
        func_0x00010a004064(pppuVar8);
        pppuVar8[0x36] = &PTR_DAT_110bc8050;
        if (*(char *)((long)pppuVar8 + 0x1cf) < '\0') {
          pppuVar8[0x38] = (undefined **)0x5;
          pppuVar12 = (undefined ***)pppuVar8[0x37];
        }
        else {
          *(undefined1 *)((long)pppuVar8 + 0x1cf) = 5;
        }
        *(undefined4 *)pppuVar12 = 0x34636576;
        *(undefined2 *)((long)pppuVar12 + 4) = 0x62;
        puStack_268 = &UNK_10f659513;
        ppcStack_260 = (char **)0x0;
        uStack_248 = 0xffffffffffffffff;
        uStack_250 = 0x100000064;
        uStack_238 = 0;
        puStack_240 = (undefined *)0x0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_258 = 0;
        uStack_220 = 0;
        uStack_218 = 0xffffffff;
        uStack_210 = 0;
        uStack_208 = 0;
        func_0x00010a052690(pppuVar8 + 0x2d,&puStack_268);
        pppuVar12 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar12 & 1) == 0) {
          ppuStack_2d8 = &PTR_DAT_110bc8050;
          ppppuStack_2d0 = (undefined ****)0x0;
          puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffffffffff00);
          uStack_258 = uStack_258 & 0xffffffffffffff00;
          func_0x0001098949cc(pppuVar8,&UNK_10f659513,&ppuStack_2d8,&puStack_268);
        }
        pdStack_5e8 = &segment_command_100000020.flags;
        pppuVar12 = pppuVar8;
        pppuStack_5f0 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar12 & 1) == 0) {
          func_0x00010a06ba0c(pppuVar8,FUN_10a484958,4,4);
        }
        puStack_268 = &DAT_10f62b0e2;
        ppcStack_260 = (char **)0x0;
        uStack_248 = 0xffffffffffffffff;
        uStack_250 = 0x100000064;
        uStack_258 = 0;
        puStack_240 = &UNK_10f659519;
        uStack_238 = 0x19;
        uStack_230 = 0;
        uStack_228 = 0;
        uStack_220 = 0;
        uStack_218 = 0xffffffff;
        uStack_210 = 0;
        uStack_208 = 0;
        FUN_10a45a920(&pppuStack_5f0,&puStack_268);
        ppuStack_2d8 = (undefined **)0x10f28482f;
        ppppuStack_2d0 = (undefined ****)0x0;
        uStack_2b8 = 0xffffffffffffffff;
        uStack_2c0 = 0x100000064;
        uStack_2c8 = 0;
        puStack_2b0 = &UNK_10f659533;
        uStack_2a8 = 0x19;
        uStack_2a0 = 0;
        uStack_290 = 0;
        uStack_298 = 0;
        uStack_288 = 0xffffffff;
        uStack_278 = 0;
        uStack_280 = 0;
        func_0x00010a45a988(&pppuStack_5f0,&ppuStack_2d8);
        pcStack_350 = "z";
        ppcStack_348 = (char **)0x0;
        uStack_330 = 0xffffffffffffffff;
        uStack_338 = 0x100000064;
        pcStack_340 = (char *)0x0;
        puStack_328 = &UNK_10f65954d;
        uStack_320 = 0x19;
        uStack_318 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_300 = 0xffffffff;
        uStack_2f0 = 0;
        uStack_2f8 = 0;
        func_0x00010a45a9f0(&pppuStack_5f0,&pcStack_350);
        pppuStack_3c0 = (undefined ***)&DAT_10f30a8bb;
        ppcStack_3b8 = (char **)0x0;
        uStack_3a0 = 0xffffffffffffffff;
        uStack_3a8 = 0x100000064;
        pcStack_3b0 = (char *)0x0;
        puStack_398 = &UNK_10f659567;
        uStack_390 = 0x19;
        uStack_388 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_370 = 0xffffffff;
        uStack_360 = 0;
        uStack_368 = 0;
        func_0x00010a45aa58(&pppuStack_5f0,&pppuStack_3c0);
        pcStack_430 = "r";
        ppcStack_428 = (char **)0x0;
        uStack_410 = 0xffffffffffffffff;
        uStack_418 = 0x100000064;
        uStack_420 = 0;
        puStack_408 = &UNK_10f658eca;
        uStack_400 = 0x23;
        uStack_3f8 = 0;
        uStack_3e8 = 0;
        uStack_3f0 = 0;
        uStack_3e0 = 0xffffffff;
        uStack_3d0 = 0;
        uStack_3d8 = 0;
        FUN_10a45a920(&pppuStack_5f0,&pcStack_430);
        pcStack_4a0 = "g";
        ppppuStack_498 = (undefined ****)0x0;
        uStack_480 = 0xffffffffffffffff;
        uStack_488 = 0x100000064;
        uStack_490 = 0;
        puStack_478 = &UNK_10f658eee;
        uStack_470 = 0x23;
        uStack_468 = 0;
        uStack_458 = 0;
        uStack_460 = 0;
        uStack_450 = 0xffffffff;
        uStack_440 = 0;
        uStack_448 = 0;
        func_0x00010a45a988(&pppuStack_5f0,&pcStack_4a0);
        pcStack_510 = "b";
        ppcStack_508 = (char **)0x0;
        uStack_4f0 = 0xffffffffffffffff;
        uStack_4f8 = 0x100000064;
        uStack_500 = 0;
        puStack_4e8 = &UNK_10f6590aa;
        uStack_4e0 = 0x23;
        uStack_4d8 = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4c0 = 0xffffffff;
        uStack_4b0 = 0;
        uStack_4b8 = 0;
        func_0x00010a45a9f0(&pppuStack_5f0,&pcStack_510);
        puStack_580 = &DAT_10f3dc16b;
        ppppuStack_578 = (undefined ****)0x0;
        uStack_560 = 0xffffffffffffffff;
        uStack_568 = 0x100000064;
        uStack_570 = 0;
        puStack_558 = &UNK_10f6593bc;
        uStack_550 = 0x23;
        uStack_548 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        uStack_530 = 0xffffffff;
        uStack_520 = 0;
        uStack_528 = 0;
        func_0x00010a45aa58(&pppuStack_5f0,&puStack_580);
        pppuVar12 = pppuStack_5f0;
        pppuVar8 = pppuStack_5f0;
        FUN_10a0051e8(pppuStack_5f0,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar8 & 1) == 0) {
          if (((ulong)pppuVar12[0xf] & 1) == 0) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar12,&DAT_10f648172,FUN_10a4850a0,1,pppuVar12[8]);
        }
        pppuVar12[0x36] = (undefined **)PTR___ZTIDn_1103469e8;
        ppuVar7 = pppuVar12[0x2e];
        if (pppuVar12[0x2d] != ppuVar7) {
          uVar1 = *(undefined4 *)(ppuVar7 + -10);
          uVar3 = *(undefined4 *)((long)ppuVar7 + -0x4c);
          uVar2 = *(undefined4 *)(ppuVar7 + -9);
          uVar4 = *(undefined4 *)((long)ppuVar7 + -0x44);
          uVar5 = *(undefined4 *)(ppuVar7 + -3);
          pppuVar12[0x2e] = ppuVar7 + -0xd;
          pppuVar8 = pppuVar12;
          FUN_10a0051e8(pppuVar12,uVar1,uVar3,uVar5,uVar2,uVar4);
          if (((ulong)pppuVar8 & 1) == 0) {
            func_0x000109894f40(pppuVar12,0);
            FUN_10a05431c(pppuVar12);
            pppuVar8 = pppuVar12;
          }
          return pppuVar8;
        }
      }
    }
  }
LAB_10a459c74:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a459c78);
  (*pcVar6)();
}



/* Entry: 10a455b9c; end: 10a455caf;  */

undefined *** FUN_10a455b9c(undefined ***param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 uVar13;
  char *pcStack_a50;
  char *pcStack_a48;
  char *pcStack_a40;
  undefined *puStack_a38;
  char *pcStack_a28;
  char **ppcStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined *puStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined4 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined ***pppuStack_9c0;
  char *pcStack_9b8;
  char *pcStack_9b0;
  undefined *puStack_9a8;
  undefined ***pppuStack_9a0;
  undefined8 **ppuStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined *puStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined4 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  char *pcStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined *puStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined4 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined ***pppuStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined4 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined ***pppuStack_868;
  undefined8 uStack_860;
  char *pcStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined *puStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined4 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined ***pppuStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined *puStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined4 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  char *pcStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined *puStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined4 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  char *pcStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined4 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  char *pcStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined *puStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined4 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined *puStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined *puStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined4 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  char *pcStack_5e8;
  undefined *puStack_5e0;
  char **ppcStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  char *pcStack_578;
  char *pcStack_570;
  char **ppcStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined4 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined *puStack_508;
  undefined ***pppuStack_500;
  dword *pdStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined ***pppuStack_498;
  undefined *puStack_490;
  undefined ****ppppuStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined4 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  char *pcStack_428;
  char *pcStack_420;
  char **ppcStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined ***pppuStack_3b8;
  char *pcStack_3b0;
  undefined ****ppppuStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char **ppcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  char *pcStack_2d8;
  undefined ***pppuStack_2d0;
  char **ppcStack_2c8;
  char *pcStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char **ppcStack_258;
  char *pcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined ***pppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined ****ppppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  char *pcStack_180;
  undefined *puStack_178;
  char **ppcStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined1 auStack_88 [48];
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)pppuVar8 & 1) == 0) {
    uVar13 = *param_2;
    FUN_10a477a6c(alStack_58,param_3);
    pcStack_98 = FUN_10a477ad0;
    ppuStack_90 = &PTR_FUN_110bdd390;
    FUN_10a477a6c(auStack_88,alStack_58);
    if (plStack_40 == alStack_58) {
      lVar10 = 0x20;
LAB_10a455c38:
      (**(code **)(*plStack_40 + lVar10))();
    }
    else if (plStack_40 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_10a455c38;
    }
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a455cac);
      (*pcVar7)();
    }
    FUN_10a0544d8(param_1,uVar13,&pcStack_98,0,param_1[3] + -1);
    pppuVar8 = &ppuStack_90;
    (*(code *)*ppuStack_90)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  pppuVar8[0x36] = &PTR_DAT_110b9fad8;
  pppuVar12 = pppuVar8 + 0x37;
  if (*(char *)((long)pppuVar8 + 0x1cf) < '\0') {
    pppuVar8[0x38] = (undefined **)0x4;
    pppuVar11 = (undefined ***)pppuVar8[0x37];
  }
  else {
    *(undefined1 *)((long)pppuVar8 + 0x1cf) = 4;
    pppuVar11 = pppuVar12;
  }
  *(undefined4 *)pppuVar11 = 0x32636576;
  *(undefined1 *)((long)pppuVar11 + 4) = 0;
  puStack_178 = &DAT_10f4913b9;
  ppcStack_170 = (char **)0x0;
  uStack_158 = 0xffffffffffffffff;
  uStack_160 = 0x100000064;
  uStack_148 = 0;
  puStack_150 = (undefined *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_130 = 0;
  uStack_128 = 0xffffffff;
  uStack_120 = 0;
  uStack_118 = 0;
  func_0x00010a052690(pppuVar8 + 0x2d,&puStack_178);
  pppuVar11 = pppuVar8;
  FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar11 & 1) == 0) {
    ppuStack_1e8 = &PTR_DAT_110b9fad8;
    ppppuStack_1e0 = (undefined ****)0x0;
    puStack_178 = (undefined *)((ulong)puStack_178 & 0xffffffffffffff00);
    uStack_168 = uStack_168 & 0xffffffffffffff00;
    func_0x0001098949cc(pppuVar8,&DAT_10f4913b9,&ppuStack_1e8,&puStack_178);
  }
  uStack_7e8 = 0x100000064;
  pppuVar11 = pppuVar8;
  pppuStack_7f0 = pppuVar8;
  FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar11 & 1) == 0) {
    func_0x00010a06ba0c(pppuVar8,FUN_10a4797b4,2,2);
  }
  puStack_650 = &DAT_10f62b0e2;
  uStack_648 = 0;
  uStack_630 = 0xffffffffffffffff;
  uStack_638 = 0x100000064;
  uStack_640 = 0;
  puStack_628 = &UNK_10f658e98;
  uStack_620 = 0x18;
  uStack_618 = 0;
  uStack_608 = 0;
  uStack_610 = 0;
  uStack_600 = 0xffffffff;
  uStack_5f0 = 0;
  uStack_5f8 = 0;
  FUN_10a459dd0(&pppuStack_7f0,&puStack_650);
  pcStack_6b8 = "y";
  uStack_6b0 = 0;
  uStack_698 = 0xffffffffffffffff;
  uStack_6a0 = 0x100000064;
  uStack_6a8 = 0;
  puStack_690 = &UNK_10f658eb1;
  uStack_688 = 0x18;
  uStack_680 = 0;
  uStack_670 = 0;
  uStack_678 = 0;
  uStack_668 = 0xffffffff;
  uStack_658 = 0;
  uStack_660 = 0;
  func_0x00010a459e38(&pppuStack_7f0,&pcStack_6b8);
  pcStack_720 = "r";
  uStack_718 = 0;
  uStack_700 = 0xffffffffffffffff;
  uStack_708 = 0x100000064;
  uStack_710 = 0;
  puStack_6f8 = &UNK_10f658eca;
  uStack_6f0 = 0x23;
  uStack_6e8 = 0;
  uStack_6d8 = 0;
  uStack_6e0 = 0;
  uStack_6d0 = 0xffffffff;
  uStack_6c0 = 0;
  uStack_6c8 = 0;
  FUN_10a459dd0(&pppuStack_7f0,&pcStack_720);
  pcStack_788 = "g";
  uStack_780 = 0;
  uStack_768 = 0xffffffffffffffff;
  uStack_770 = 0x100000064;
  uStack_778 = 0;
  puStack_760 = &UNK_10f658eee;
  uStack_758 = 0x23;
  uStack_750 = 0;
  uStack_740 = 0;
  uStack_748 = 0;
  uStack_738 = 0xffffffff;
  uStack_728 = 0;
  uStack_730 = 0;
  func_0x00010a459e38(&pppuStack_7f0,&pcStack_788);
  pppuVar11 = pppuVar8;
  FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar11 & 1) == 0) {
    if (((ulong)pppuVar8[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar8,&DAT_10f648172,FUN_10a479d10,1,pppuVar8[8]);
  }
  pppuVar11 = pppuVar8;
  FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar11 & 1) == 0) {
    if (((ulong)pppuVar8[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar8,&UNK_10f658f12,FUN_10a479e34,3,pppuVar8[8]);
  }
  pcStack_858 = "vec";
  ppcStack_170 = &pcStack_858;
  puStack_178 = &UNK_10f65ae8e;
  uStack_158 = 0xffffffffffffffff;
  uStack_160 = 0x200000019;
  uStack_168 = 1;
  puStack_150 = &UNK_10f65ae95;
  uStack_148 = 0x2a;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0xffffffff;
  uStack_120 = 0;
  uStack_118 = 0;
  FUN_10a47a280(&pppuStack_7f0,&puStack_178);
  pppuStack_8d0 = (undefined ***)&UNK_10f6590db;
  ppppuStack_1e0 = &pppuStack_8d0;
  ppuStack_1e8 = (undefined **)&UNK_10f65aec0;
  uStack_1c8 = 0xffffffffffffffff;
  uStack_1d0 = 0x200000019;
  uStack_1d8 = 1;
  puStack_1c0 = &UNK_10f65aec7;
  uStack_1b8 = 0x31;
  uStack_1b0 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_198 = 0xffffffff;
  uStack_188 = 0;
  uStack_190 = 0;
  func_0x00010a47a2f4(&pppuStack_7f0,&ppuStack_1e8);
  pcStack_938 = "vec";
  ppcStack_258 = &pcStack_938;
  pcStack_260 = "mulVec";
  uStack_240 = 0xffffffffffffffff;
  uStack_248 = 0x200000019;
  pcStack_250 = (char *)0x1;
  puStack_238 = &UNK_10f65af00;
  uStack_230 = 0x2f;
  uStack_228 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_210 = 0xffffffff;
  uStack_200 = 0;
  uStack_208 = 0;
  func_0x00010a47a368(&pppuStack_7f0,&pcStack_260);
  pppuStack_9a0 = (undefined ***)&UNK_10f6590db;
  ppcStack_2c8 = (char **)&pppuStack_9a0;
  pppuStack_2d0 = (undefined ***)&UNK_10f65af30;
  uStack_2b0 = 0xffffffffffffffff;
  uStack_2b8 = 0x200000019;
  pcStack_2c0 = (char *)0x1;
  puStack_2a8 = &UNK_10f65af37;
  uStack_2a0 = 0x2c;
  uStack_298 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_280 = 0xffffffff;
  uStack_270 = 0;
  uStack_278 = 0;
  func_0x00010a47a3dc(&pppuStack_7f0,&pppuStack_2d0);
  pppuVar11 = pppuStack_7f0;
  pppuVar9 = pppuStack_7f0;
  FUN_10a0051e8(pppuStack_7f0,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65af64,FUN_10a47a8dc,2,pppuVar11[8]);
  }
  pcStack_a28 = "vec";
  ppcStack_338 = &pcStack_a28;
  pcStack_340 = "add";
  uStack_320 = 0xffffffffffffffff;
  uStack_328 = 0x100000064;
  uStack_330 = 1;
  puStack_318 = &UNK_10f65af6f;
  uStack_310 = 0x1e;
  uStack_308 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2f0 = 0xffffffff;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  FUN_10a47a280(&pppuStack_7f0,&pcStack_340);
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65af8e,FUN_10a47aa24,2,pppuVar11[8]);
  }
  pppuStack_9c0 = (undefined ***)&UNK_10f6590db;
  ppppuStack_3a8 = &pppuStack_9c0;
  pcStack_3b0 = "sub";
  uStack_390 = 0xffffffffffffffff;
  uStack_398 = 0x100000064;
  uStack_3a0 = 1;
  puStack_388 = &UNK_10f65af99;
  uStack_380 = 0x1f;
  uStack_378 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_360 = 0xffffffff;
  uStack_350 = 0;
  uStack_358 = 0;
  func_0x00010a47a2f4(&pppuStack_7f0,&pcStack_3b0);
  pcStack_a50 = "vec";
  ppcStack_418 = &pcStack_a50;
  pcStack_420 = "multInPlace";
  uStack_400 = 0xffffffffffffffff;
  uStack_408 = 0x100000064;
  uStack_410 = 1;
  puStack_3f8 = &UNK_10f65afc5;
  uStack_3f0 = 0x38;
  uStack_3e8 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3d0 = 0xffffffff;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  func_0x00010a47a450(&pppuStack_7f0,&pcStack_420);
  pppuStack_868 = (undefined ***)&UNK_10f6590db;
  ppppuStack_488 = &pppuStack_868;
  puStack_490 = &UNK_10f659760;
  uStack_470 = 0xffffffffffffffff;
  uStack_478 = 0x100000064;
  uStack_480 = 1;
  puStack_468 = &UNK_10f65affe;
  uStack_460 = 0x4a;
  uStack_458 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_440 = 0xffffffff;
  uStack_430 = 0;
  uStack_438 = 0;
  func_0x00010a47a368(&pppuStack_7f0,&puStack_490);
  pcStack_180 = "vec";
  pdStack_4f8 = (dword *)&pcStack_180;
  pppuStack_500 = (undefined ***)&UNK_10f65b049;
  uStack_4e0 = 0xffffffffffffffff;
  uStack_4e8 = 0x100000064;
  uStack_4f0 = 1;
  puStack_4d8 = &UNK_10f65afc5;
  uStack_4d0 = 0x38;
  uStack_4c8 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4b0 = 0xffffffff;
  uStack_4a0 = 0;
  uStack_4a8 = 0;
  func_0x00010a47a450(&pppuStack_7f0,&pppuStack_500);
  pppuStack_1f0 = (undefined ***)&UNK_10f6590db;
  ppcStack_568 = (char **)&pppuStack_1f0;
  pcStack_570 = "scale";
  uStack_550 = 0xffffffffffffffff;
  uStack_558 = 0x100000064;
  uStack_560 = 1;
  puStack_548 = &UNK_10f65affe;
  uStack_540 = 0x4a;
  uStack_538 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_520 = 0xffffffff;
  uStack_510 = 0;
  uStack_518 = 0;
  func_0x00010a47a368(&pppuStack_7f0,&pcStack_570);
  pppuVar11 = pppuStack_7f0;
  pppuVar9 = pppuStack_7f0;
  FUN_10a0051e8(pppuStack_7f0,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b056,FUN_10a47abd4,2,pppuVar11[8]);
  }
  pcStack_268 = "vec";
  ppcStack_5d8 = &pcStack_268;
  puStack_5e0 = &UNK_10f659799;
  uStack_5c0 = 0xffffffffffffffff;
  uStack_5c8 = 0x100000064;
  uStack_5d0 = 1;
  puStack_5b8 = &UNK_10f65b061;
  uStack_5b0 = 0x37;
  uStack_5a8 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_590 = 0xffffffff;
  uStack_580 = 0;
  uStack_588 = 0;
  func_0x00010a47a3dc(&pppuStack_7f0,&puStack_5e0);
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b099,FUN_10a47acac,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&DAT_10f65b0ad,FUN_10a47ada4,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f4916a0,FUN_10a47af08,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    FUN_10a052828(pppuVar11,&DAT_10f355a53,FUN_10a47afe0,FUN_10a47b0ac);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b0ba,FUN_10a47b160,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b0cd,FUN_10a47b214,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    FUN_10a052828(pppuVar11,&UNK_10f65b0d9,FUN_10a47b2c8,FUN_10a47b390);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b0e7,FUN_10a47b444,1,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f491784,FUN_10a47b520,1,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b0f8,FUN_10a47b614,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&DAT_10f3e1a8f,FUN_10a47b734,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b100,FUN_10a47b81c,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&DAT_10f329830,FUN_10a47b900,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b110,FUN_10a47b9dc,3,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b123,FUN_10a47bb5c,3,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b12f,FUN_10a47bca4,3,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b13b,FUN_10a47bd58,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f598d6c,FUN_10a47be0c,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b14a,FUN_10a47bec0,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b160,FUN_10a47bf74,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b16f,FUN_10a47c028,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f4917f3,FUN_10a47c10c,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f64f5cc,FUN_10a47c1c0,1,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f65b17e,FUN_10a47c28c,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,"fill",FUN_10a47c520,2,pppuVar11[8]);
  }
  pppuVar9 = pppuVar11;
  FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar9 & 1) == 0) {
    if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pppuVar11,&UNK_10f658f18,FUN_10a47c610,1,pppuVar11[8]);
  }
  pppuVar11[0x36] = (undefined **)PTR___ZTIDn_1103469e8;
  ppuVar5 = pppuVar11[0x2e];
  if (pppuVar11[0x2d] != ppuVar5) {
    uVar1 = *(undefined4 *)(ppuVar5 + -10);
    uVar3 = *(undefined4 *)((long)ppuVar5 + -0x4c);
    uVar2 = *(undefined4 *)(ppuVar5 + -9);
    uVar4 = *(undefined4 *)((long)ppuVar5 + -0x44);
    uVar6 = *(undefined4 *)(ppuVar5 + -3);
    pppuVar11[0x2e] = ppuVar5 + -0xd;
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,uVar1,uVar3,uVar6,uVar2,uVar4);
    if (((ulong)pppuVar9 & 1) == 0) {
      func_0x000109894f40(pppuVar11,0);
      FUN_10a05431c(pppuVar11);
    }
    FUN_10a003e74(pppuVar8,&DAT_10f4913b9,4);
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&DAT_10f3dd8f1,FUN_10a47c6e4,2,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&DAT_10f3dd8ed,FUN_10a47c838,2,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&UNK_10f658f2c,FUN_10a47c8e4,3,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&DAT_10f5aeeaf,FUN_10a47ca34,0,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&DAT_10f4b54a4,FUN_10a47cae4,0,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&DAT_10f4653a7,FUN_10a47cb90,0,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,&UNK_10f655b08,FUN_10a47cc44,0,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,"left",FUN_10a47ccf8,0,pppuVar8[3] + -1);
    }
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar8,"right",FUN_10a47cdac,0,pppuVar8[3] + -1);
    }
    puStack_178 = &UNK_10f658f31;
    ppcStack_170 = (char **)0x0;
    uStack_158 = 0xffffffffffffffff;
    uStack_160 = 0x200000064;
    uStack_168 = 0;
    puStack_150 = &UNK_10f658f41;
    uStack_148 = 0xb3;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0xffffffff;
    uStack_120 = 0;
    uStack_118 = 0;
    FUN_10a459ea0(pppuVar8,&puStack_178);
    puStack_178 = &UNK_10f658ff5;
    ppcStack_170 = (char **)0x0;
    uStack_158 = 0xffffffffffffffff;
    uStack_160 = 0x100000064;
    uStack_168 = 0;
    puStack_150 = &UNK_10f659006;
    uStack_148 = 0x58;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0xffffffff;
    uStack_120 = 0;
    uStack_118 = 0;
    FUN_10a459ea0();
    func_0x00010a004064();
    pppuVar8[0x36] = &PTR_DAT_110b9fba0;
    if (*(char *)((long)pppuVar8 + 0x1cf) < '\0') {
      pppuVar8[0x38] = (undefined **)0x4;
      pppuVar11 = (undefined ***)pppuVar8[0x37];
    }
    else {
      *(undefined1 *)((long)pppuVar8 + 0x1cf) = 4;
      pppuVar11 = pppuVar12;
    }
    *(undefined4 *)pppuVar11 = 0x33636576;
    *(undefined1 *)((long)pppuVar11 + 4) = 0;
    puStack_178 = &DAT_10f4913be;
    ppcStack_170 = (char **)0x0;
    uStack_158 = 0xffffffffffffffff;
    uStack_160 = 0x100000064;
    uStack_148 = 0;
    puStack_150 = (undefined *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_130 = 0;
    uStack_128 = 0xffffffff;
    uStack_120 = 0;
    uStack_118 = 0;
    func_0x00010a052690(pppuVar8 + 0x2d,&puStack_178);
    pppuVar11 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      ppuStack_1e8 = &PTR_DAT_110b9fba0;
      ppppuStack_1e0 = (undefined ****)0x0;
      puStack_178 = (undefined *)((ulong)puStack_178 & 0xffffffffffffff00);
      uStack_168 = uStack_168 & 0xffffffffffffff00;
      func_0x0001098949cc(pppuVar8,&DAT_10f4913be,&ppuStack_1e8,&puStack_178);
    }
    uStack_8c8 = 0x100000064;
    pppuVar11 = pppuVar8;
    pppuStack_8d0 = pppuVar8;
    FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar11 & 1) == 0) {
      func_0x00010a06ba0c(pppuVar8,FUN_10a47cf30,3,3);
    }
    puStack_650 = &DAT_10f62b0e2;
    uStack_648 = 0;
    uStack_630 = 0xffffffffffffffff;
    uStack_638 = 0x100000064;
    uStack_640 = 0;
    puStack_628 = &UNK_10f65905f;
    uStack_620 = 0x18;
    uStack_618 = 0;
    uStack_608 = 0;
    uStack_610 = 0;
    uStack_600 = 0xffffffff;
    uStack_5f0 = 0;
    uStack_5f8 = 0;
    FUN_10a45a258(&pppuStack_8d0,&puStack_650);
    pcStack_6b8 = "y";
    uStack_6b0 = 0;
    uStack_698 = 0xffffffffffffffff;
    uStack_6a0 = 0x100000064;
    uStack_6a8 = 0;
    puStack_690 = &UNK_10f659078;
    uStack_688 = 0x18;
    uStack_680 = 0;
    uStack_670 = 0;
    uStack_678 = 0;
    uStack_668 = 0xffffffff;
    uStack_658 = 0;
    uStack_660 = 0;
    func_0x00010a45a2c0(&pppuStack_8d0,&pcStack_6b8);
    pcStack_720 = "z";
    uStack_718 = 0;
    uStack_700 = 0xffffffffffffffff;
    uStack_708 = 0x100000064;
    uStack_710 = 0;
    puStack_6f8 = &UNK_10f659091;
    uStack_6f0 = 0x18;
    uStack_6e8 = 0;
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    uStack_6d0 = 0xffffffff;
    uStack_6c0 = 0;
    uStack_6c8 = 0;
    func_0x00010a45a328(&pppuStack_8d0,&pcStack_720);
    pcStack_788 = "r";
    uStack_780 = 0;
    uStack_768 = 0xffffffffffffffff;
    uStack_770 = 0x100000064;
    uStack_778 = 0;
    puStack_760 = &UNK_10f658eca;
    uStack_758 = 0x23;
    uStack_750 = 0;
    uStack_740 = 0;
    uStack_748 = 0;
    uStack_738 = 0xffffffff;
    uStack_728 = 0;
    uStack_730 = 0;
    FUN_10a45a258(&pppuStack_8d0,&pcStack_788);
    pppuStack_7f0 = (undefined ***)0x10f2849e6;
    uStack_7e8 = 0;
    uStack_7d0 = 0xffffffffffffffff;
    uStack_7d8 = 0x100000064;
    uStack_7e0 = 0;
    puStack_7c8 = &UNK_10f658eee;
    uStack_7c0 = 0x23;
    uStack_7b8 = 0;
    uStack_7a8 = 0;
    uStack_7b0 = 0;
    uStack_7a0 = 0xffffffff;
    uStack_790 = 0;
    uStack_798 = 0;
    func_0x00010a45a2c0(&pppuStack_8d0,&pppuStack_7f0);
    pcStack_858 = "b";
    uStack_850 = 0;
    uStack_838 = 0xffffffffffffffff;
    uStack_840 = 0x100000064;
    uStack_848 = 0;
    puStack_830 = &UNK_10f6590aa;
    uStack_828 = 0x23;
    uStack_820 = 0;
    uStack_810 = 0;
    uStack_818 = 0;
    uStack_808 = 0xffffffff;
    uStack_7f8 = 0;
    uStack_800 = 0;
    func_0x00010a45a328(&pppuStack_8d0,&pcStack_858);
    pppuVar11 = pppuStack_8d0;
    pppuVar9 = pppuStack_8d0;
    FUN_10a0051e8(pppuStack_8d0,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&DAT_10f648172,FUN_10a47d668,1,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f6590ce,FUN_10a47d78c,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f491684,FUN_10a47d8f8,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f6590df,FUN_10a47da38,3,pppuVar11[8]);
    }
    pcStack_938 = "vec";
    ppcStack_170 = &pcStack_938;
    puStack_178 = &UNK_10f65ae8e;
    uStack_158 = 0xffffffffffffffff;
    uStack_160 = 0x200000019;
    uStack_168 = 1;
    puStack_150 = &UNK_10f65ae95;
    uStack_148 = 0x2a;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0xffffffff;
    uStack_120 = 0;
    uStack_118 = 0;
    FUN_10a47e08c(&pppuStack_8d0,&puStack_178);
    pppuStack_9a0 = (undefined ***)&UNK_10f6590db;
    ppppuStack_1e0 = &pppuStack_9a0;
    ppuStack_1e8 = (undefined **)&UNK_10f65aec0;
    uStack_1c8 = 0xffffffffffffffff;
    uStack_1d0 = 0x200000019;
    uStack_1d8 = 1;
    puStack_1c0 = &UNK_10f65aec7;
    uStack_1b8 = 0x31;
    uStack_1b0 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_198 = 0xffffffff;
    uStack_188 = 0;
    uStack_190 = 0;
    func_0x00010a47e100(&pppuStack_8d0,&ppuStack_1e8);
    pcStack_a28 = "vec";
    ppcStack_258 = &pcStack_a28;
    pcStack_260 = "mulVec";
    uStack_240 = 0xffffffffffffffff;
    uStack_248 = 0x200000019;
    pcStack_250 = (char *)0x1;
    puStack_238 = &UNK_10f65af00;
    uStack_230 = 0x2f;
    uStack_228 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_210 = 0xffffffff;
    uStack_200 = 0;
    uStack_208 = 0;
    func_0x00010a47e174(&pppuStack_8d0,&pcStack_260);
    pppuStack_9c0 = (undefined ***)&UNK_10f6590db;
    ppcStack_2c8 = (char **)&pppuStack_9c0;
    pppuStack_2d0 = (undefined ***)&UNK_10f65af30;
    uStack_2b0 = 0xffffffffffffffff;
    uStack_2b8 = 0x200000019;
    pcStack_2c0 = (char *)0x1;
    puStack_2a8 = &UNK_10f65af37;
    uStack_2a0 = 0x2c;
    uStack_298 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_280 = 0xffffffff;
    uStack_270 = 0;
    uStack_278 = 0;
    func_0x00010a47e1e8(&pppuStack_8d0,&pppuStack_2d0);
    pppuVar11 = pppuStack_8d0;
    pppuVar9 = pppuStack_8d0;
    FUN_10a0051e8(pppuStack_8d0,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65af64,FUN_10a47e5a0,2,pppuVar11[8]);
    }
    pcStack_a50 = "vec";
    ppcStack_338 = &pcStack_a50;
    pcStack_340 = "add";
    uStack_320 = 0xffffffffffffffff;
    uStack_328 = 0x100000064;
    uStack_330 = 1;
    puStack_318 = &UNK_10f65af6f;
    uStack_310 = 0x1e;
    uStack_308 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2f0 = 0xffffffff;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    FUN_10a47e08c(&pppuStack_8d0,&pcStack_340);
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65af8e,FUN_10a47e688,2,pppuVar11[8]);
    }
    pppuStack_868 = (undefined ***)&UNK_10f6590db;
    ppppuStack_3a8 = &pppuStack_868;
    pcStack_3b0 = "sub";
    uStack_390 = 0xffffffffffffffff;
    uStack_398 = 0x100000064;
    uStack_3a0 = 1;
    puStack_388 = &UNK_10f65af99;
    uStack_380 = 0x1f;
    uStack_378 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_360 = 0xffffffff;
    uStack_350 = 0;
    uStack_358 = 0;
    func_0x00010a47e100(&pppuStack_8d0,&pcStack_3b0);
    pcStack_180 = "vec";
    ppcStack_418 = &pcStack_180;
    pcStack_420 = "multInPlace";
    uStack_400 = 0xffffffffffffffff;
    uStack_408 = 0x100000064;
    uStack_410 = 1;
    puStack_3f8 = &UNK_10f65afc5;
    uStack_3f0 = 0x38;
    uStack_3e8 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3d0 = 0xffffffff;
    uStack_3c0 = 0;
    uStack_3c8 = 0;
    func_0x00010a47e25c(&pppuStack_8d0,&pcStack_420);
    pppuStack_1f0 = (undefined ***)&UNK_10f6590db;
    ppppuStack_488 = &pppuStack_1f0;
    puStack_490 = &UNK_10f659760;
    uStack_470 = 0xffffffffffffffff;
    uStack_478 = 0x100000064;
    uStack_480 = 1;
    puStack_468 = &UNK_10f65affe;
    uStack_460 = 0x4a;
    uStack_458 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_440 = 0xffffffff;
    uStack_430 = 0;
    uStack_438 = 0;
    func_0x00010a47e174(&pppuStack_8d0,&puStack_490);
    pcStack_268 = "vec";
    pdStack_4f8 = (dword *)&pcStack_268;
    pppuStack_500 = (undefined ***)&UNK_10f65b049;
    uStack_4e0 = 0xffffffffffffffff;
    uStack_4e8 = 0x100000064;
    uStack_4f0 = 1;
    puStack_4d8 = &UNK_10f65afc5;
    uStack_4d0 = 0x38;
    uStack_4c8 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4b0 = 0xffffffff;
    uStack_4a0 = 0;
    uStack_4a8 = 0;
    func_0x00010a47e25c(&pppuStack_8d0,&pppuStack_500);
    pcStack_2d8 = "vec";
    ppcStack_568 = &pcStack_2d8;
    pcStack_570 = "scale";
    uStack_550 = 0xffffffffffffffff;
    uStack_558 = 0x100000064;
    uStack_560 = 1;
    puStack_548 = &UNK_10f65affe;
    uStack_540 = 0x4a;
    uStack_538 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_520 = 0xffffffff;
    uStack_510 = 0;
    uStack_518 = 0;
    func_0x00010a47e174(&pppuStack_8d0,&pcStack_570);
    pppuVar11 = pppuStack_8d0;
    pppuVar9 = pppuStack_8d0;
    FUN_10a0051e8(pppuStack_8d0,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b056,FUN_10a47e858,2,pppuVar11[8]);
    }
    pcStack_348 = "vec";
    ppcStack_5d8 = &pcStack_348;
    puStack_5e0 = &UNK_10f659799;
    uStack_5c0 = 0xffffffffffffffff;
    uStack_5c8 = 0x100000064;
    uStack_5d0 = 1;
    puStack_5b8 = &UNK_10f65b061;
    uStack_5b0 = 0x37;
    uStack_5a8 = 0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_590 = 0xffffffff;
    uStack_580 = 0;
    uStack_588 = 0;
    func_0x00010a47e1e8(&pppuStack_8d0,&puStack_5e0);
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b099,FUN_10a47e940,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&DAT_10f65b0ad,FUN_10a47ea44,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f4916a0,FUN_10a47ebac,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      FUN_10a052828(pppuVar11,&DAT_10f355a53,FUN_10a47eca8,FUN_10a47ed80);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b0ba,FUN_10a47ee34,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b0cd,FUN_10a47eee8,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      FUN_10a052828(pppuVar11,&UNK_10f65b0d9,FUN_10a47ef9c,FUN_10a47f070);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b0e7,FUN_10a47f124,1,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f491784,FUN_10a47f214,1,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b0f8,FUN_10a47f318,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&DAT_10f3e1a8f,FUN_10a47f3ec,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b100,FUN_10a47f4e8,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&DAT_10f329830,FUN_10a47f5e0,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b110,FUN_10a47f6cc,3,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b123,FUN_10a47f780,3,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b12f,FUN_10a47f8f8,3,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b13b,FUN_10a47f9ac,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f598d6c,FUN_10a47fa60,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b14a,FUN_10a47fb14,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b160,FUN_10a47fc14,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b16f,FUN_10a47fcc8,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f4917f3,FUN_10a47fd7c,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f64f5cc,FUN_10a47fe30,1,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f65b17e,FUN_10a47ff04,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,"fill",FUN_10a480084,2,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f6590f4,FUN_10a480178,3,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f659102,FUN_10a48022c,3,pppuVar11[8]);
    }
    pppuVar9 = pppuVar11;
    FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar9 & 1) == 0) {
      if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pppuVar11,&UNK_10f658f18,FUN_10a4802e0,1,pppuVar11[8]);
    }
    ppcStack_258 = (char **)0x10f28482f;
    pcStack_260 = "x";
    pcStack_250 = "z";
    ppcStack_170 = &pcStack_260;
    puStack_178 = &UNK_10f65910f;
    uStack_158 = 0xffffffffffffffff;
    uStack_160 = 0x100000064;
    uStack_168 = 3;
    puStack_150 = &UNK_10f659116;
    uStack_148 = 0x7f;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0xffffffff;
    uStack_120 = 0;
    uStack_118 = 0;
    func_0x00010a45a390(&pppuStack_8d0,&puStack_178);
    ppcStack_2c8 = (char **)0x10f2849e6;
    pppuStack_2d0 = (undefined ***)0x10f2849a6;
    pcStack_2c0 = "b";
    ppppuStack_1e0 = &pppuStack_2d0;
    ppuStack_1e8 = (undefined **)&UNK_10f659196;
    uStack_1c8 = 0xffffffffffffffff;
    uStack_1d0 = 0x100000064;
    uStack_1d8 = 3;
    puStack_1c0 = &UNK_10f65919d;
    uStack_1b8 = 0x98;
    uStack_1b0 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_198 = 0xffffffff;
    uStack_188 = 0;
    uStack_190 = 0;
    func_0x00010a45a390(&pppuStack_8d0,&ppuStack_1e8);
    pppuVar11[0x36] = (undefined **)PTR___ZTIDn_1103469e8;
    ppuVar5 = pppuVar11[0x2e];
    if (pppuVar11[0x2d] != ppuVar5) {
      uVar1 = *(undefined4 *)(ppuVar5 + -10);
      uVar3 = *(undefined4 *)((long)ppuVar5 + -0x4c);
      uVar2 = *(undefined4 *)(ppuVar5 + -9);
      uVar4 = *(undefined4 *)((long)ppuVar5 + -0x44);
      uVar6 = *(undefined4 *)(ppuVar5 + -3);
      pppuVar11[0x2e] = ppuVar5 + -0xd;
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,uVar1,uVar3,uVar6,uVar2,uVar4);
      if (((ulong)pppuVar9 & 1) == 0) {
        func_0x000109894f40(pppuVar11,0);
        FUN_10a05431c(pppuVar11);
      }
      FUN_10a003e74(pppuVar8,&DAT_10f4913be,4);
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&UNK_10f659236,FUN_10a480618,2,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f3dd8f1,FUN_10a480700,2,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f3dd8ed,FUN_10a480858,2,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&UNK_10f658f2c,FUN_10a480904,3,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&UNK_10f659245,FUN_10a480a94,3,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f5aeeaf,FUN_10a480b40,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f4b54a4,FUN_10a480bf8,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f4653a7,FUN_10a480ca8,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&UNK_10f655b08,FUN_10a480d60,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,"left",FUN_10a480e18,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,"right",FUN_10a480ed0,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f3260f3,FUN_10a480f88,0,pppuVar8[3] + -1);
      }
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar8,&DAT_10f36da21,FUN_10a48103c,0,pppuVar8[3] + -1);
      }
      puStack_178 = &UNK_10f658f31;
      ppcStack_170 = (char **)0x0;
      uStack_158 = 0xffffffffffffffff;
      uStack_160 = 0x200000064;
      uStack_168 = 0;
      puStack_150 = &UNK_10f65924b;
      uStack_148 = 0xb3;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0xffffffff;
      uStack_120 = 0;
      uStack_118 = 0;
      FUN_10a45a404(pppuVar8,&puStack_178);
      puStack_178 = &UNK_10f658ff5;
      ppcStack_170 = (char **)0x0;
      uStack_158 = 0xffffffffffffffff;
      uStack_160 = 0x100000064;
      uStack_168 = 0;
      puStack_150 = &UNK_10f6592ff;
      uStack_148 = 0x58;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0xffffffff;
      uStack_120 = 0;
      uStack_118 = 0;
      FUN_10a45a404();
      func_0x00010a004064();
      pppuVar8[0x36] = &PTR_DAT_110bb3c20;
      if (*(char *)((long)pppuVar8 + 0x1cf) < '\0') {
        pppuVar8[0x38] = (undefined **)0x4;
        pppuVar11 = (undefined ***)pppuVar8[0x37];
      }
      else {
        *(undefined1 *)((long)pppuVar8 + 0x1cf) = 4;
        pppuVar11 = pppuVar12;
      }
      *(undefined4 *)pppuVar11 = 0x34636576;
      *(undefined1 *)((long)pppuVar11 + 4) = 0;
      puStack_178 = &DAT_10f4913c3;
      ppcStack_170 = (char **)0x0;
      uStack_158 = 0xffffffffffffffff;
      uStack_160 = 0x100000064;
      uStack_148 = 0;
      puStack_150 = (undefined *)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_130 = 0;
      uStack_128 = 0xffffffff;
      uStack_120 = 0;
      uStack_118 = 0;
      func_0x00010a052690(pppuVar8 + 0x2d,&puStack_178);
      pppuVar11 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        ppuStack_1e8 = &PTR_DAT_110bb3c20;
        ppppuStack_1e0 = (undefined ****)0x0;
        puStack_178 = (undefined *)((ulong)puStack_178 & 0xffffffffffffff00);
        uStack_168 = uStack_168 & 0xffffffffffffff00;
        func_0x0001098949cc(pppuVar8,&DAT_10f4913c3,&ppuStack_1e8,&puStack_178);
      }
      uStack_860 = 0x100000064;
      pppuVar11 = pppuVar8;
      pppuStack_868 = pppuVar8;
      FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar11 & 1) == 0) {
        func_0x00010a06ba0c(pppuVar8,FUN_10a4811a8,4,4);
      }
      puStack_650 = &DAT_10f62b0e2;
      uStack_648 = 0;
      uStack_630 = 0xffffffffffffffff;
      uStack_638 = 0x100000064;
      uStack_640 = 0;
      puStack_628 = &UNK_10f659358;
      uStack_620 = 0x18;
      uStack_618 = 0;
      uStack_608 = 0;
      uStack_610 = 0;
      uStack_600 = 0xffffffff;
      uStack_5f0 = 0;
      uStack_5f8 = 0;
      FUN_10a45a5bc(&pppuStack_868,&puStack_650);
      pcStack_6b8 = "y";
      uStack_6b0 = 0;
      uStack_698 = 0xffffffffffffffff;
      uStack_6a0 = 0x100000064;
      uStack_6a8 = 0;
      puStack_690 = &UNK_10f659371;
      uStack_688 = 0x18;
      uStack_680 = 0;
      uStack_670 = 0;
      uStack_678 = 0;
      uStack_668 = 0xffffffff;
      uStack_658 = 0;
      uStack_660 = 0;
      func_0x00010a45a624(&pppuStack_868,&pcStack_6b8);
      pcStack_720 = "z";
      uStack_718 = 0;
      uStack_700 = 0xffffffffffffffff;
      uStack_708 = 0x100000064;
      uStack_710 = 0;
      puStack_6f8 = &UNK_10f65938a;
      uStack_6f0 = 0x18;
      uStack_6e8 = 0;
      uStack_6d8 = 0;
      uStack_6e0 = 0;
      uStack_6d0 = 0xffffffff;
      uStack_6c0 = 0;
      uStack_6c8 = 0;
      func_0x00010a45a68c(&pppuStack_868,&pcStack_720);
      pcStack_788 = "w";
      uStack_780 = 0;
      uStack_768 = 0xffffffffffffffff;
      uStack_770 = 0x100000064;
      uStack_778 = 0;
      puStack_760 = &UNK_10f6593a3;
      uStack_758 = 0x18;
      uStack_750 = 0;
      uStack_740 = 0;
      uStack_748 = 0;
      uStack_738 = 0xffffffff;
      uStack_728 = 0;
      uStack_730 = 0;
      func_0x00010a45a6f4(&pppuStack_868,&pcStack_788);
      pppuStack_7f0 = (undefined ***)0x10f2849a6;
      uStack_7e8 = 0;
      uStack_7d0 = 0xffffffffffffffff;
      uStack_7d8 = 0x100000064;
      uStack_7e0 = 0;
      puStack_7c8 = &UNK_10f658eca;
      uStack_7c0 = 0x23;
      uStack_7b8 = 0;
      uStack_7a8 = 0;
      uStack_7b0 = 0;
      uStack_7a0 = 0xffffffff;
      uStack_790 = 0;
      uStack_798 = 0;
      FUN_10a45a5bc(&pppuStack_868,&pppuStack_7f0);
      pcStack_858 = "g";
      uStack_850 = 0;
      uStack_838 = 0xffffffffffffffff;
      uStack_840 = 0x100000064;
      uStack_848 = 0;
      puStack_830 = &UNK_10f658eee;
      uStack_828 = 0x23;
      uStack_820 = 0;
      uStack_810 = 0;
      uStack_818 = 0;
      uStack_808 = 0xffffffff;
      uStack_7f8 = 0;
      uStack_800 = 0;
      func_0x00010a45a624(&pppuStack_868,&pcStack_858);
      pppuStack_8d0 = (undefined ***)0x10f268db8;
      uStack_8c8 = 0;
      uStack_8b0 = 0xffffffffffffffff;
      uStack_8b8 = 0x100000064;
      uStack_8c0 = 0;
      puStack_8a8 = &UNK_10f6590aa;
      uStack_8a0 = 0x23;
      uStack_898 = 0;
      uStack_890 = 0;
      uStack_888 = 0;
      uStack_880 = 0xffffffff;
      uStack_870 = 0;
      uStack_878 = 0;
      func_0x00010a45a68c(&pppuStack_868,&pppuStack_8d0);
      pcStack_938 = "a";
      uStack_930 = 0;
      uStack_918 = 0xffffffffffffffff;
      uStack_920 = 0x100000064;
      uStack_928 = 0;
      puStack_910 = &UNK_10f6593bc;
      uStack_908 = 0x23;
      uStack_900 = 0;
      uStack_8f8 = 0;
      uStack_8f0 = 0;
      uStack_8e8 = 0xffffffff;
      uStack_8e0 = 0;
      uStack_8d8 = 0;
      func_0x00010a45a6f4(&pppuStack_868,&pcStack_938);
      pppuVar11 = pppuStack_868;
      pppuVar9 = pppuStack_868;
      FUN_10a0051e8(pppuStack_868,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&DAT_10f648172,FUN_10a481a90,1,pppuVar11[8]);
      }
      pcStack_9b8 = "y";
      pppuStack_9c0 = (undefined ***)&DAT_10f62b0e2;
      puStack_9a8 = &DAT_10f30a8bb;
      pcStack_9b0 = "z";
      ppuStack_998 = &pppuStack_9c0;
      pppuStack_9a0 = (undefined ***)&UNK_10f6593e0;
      uStack_980 = 0xffffffffffffffff;
      uStack_988 = 0x100000064;
      uStack_990 = 4;
      puStack_978 = &UNK_10f6593e8;
      uStack_970 = 0x84;
      uStack_968 = 0;
      uStack_960 = 0;
      uStack_958 = 0;
      uStack_950 = 0xffffffff;
      uStack_948 = 0;
      uStack_940 = 0;
      func_0x00010a45a75c(&pppuStack_868,&pppuStack_9a0);
      pcStack_a48 = "g";
      pcStack_a50 = "r";
      puStack_a38 = &DAT_10f3dc16b;
      pcStack_a40 = "b";
      ppcStack_a20 = &pcStack_a50;
      pcStack_a28 = "setRGBA";
      uStack_a18 = 4;
      uStack_a08 = 0xffffffffffffffff;
      uStack_a10 = 0x100000064;
      puStack_a00 = &UNK_10f659475;
      uStack_9f8 = 0x9d;
      uStack_9e8 = 0;
      uStack_9e0 = 0;
      uStack_9f0 = 0;
      uStack_9d8 = 0xffffffff;
      uStack_9d0 = 0;
      uStack_9c8 = 0;
      func_0x00010a45a75c(&pppuStack_868,&pcStack_a28);
      ppcStack_170 = &pcStack_180;
      pcStack_180 = "vec";
      puStack_178 = &UNK_10f65ae8e;
      uStack_158 = 0xffffffffffffffff;
      uStack_160 = 0x200000019;
      uStack_168 = 1;
      puStack_150 = &UNK_10f65ae95;
      uStack_148 = 0x2a;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0xffffffff;
      uStack_120 = 0;
      uStack_118 = 0;
      FUN_10a4822d8(&pppuStack_868,&puStack_178);
      pppuStack_1f0 = (undefined ***)&UNK_10f6590db;
      ppppuStack_1e0 = &pppuStack_1f0;
      ppuStack_1e8 = (undefined **)&UNK_10f65aec0;
      uStack_1c8 = 0xffffffffffffffff;
      uStack_1d0 = 0x200000019;
      uStack_1d8 = 1;
      puStack_1c0 = &UNK_10f65aec7;
      uStack_1b8 = 0x31;
      uStack_1b0 = 0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_198 = 0xffffffff;
      uStack_188 = 0;
      uStack_190 = 0;
      func_0x00010a48234c(&pppuStack_868,&ppuStack_1e8);
      pcStack_268 = "vec";
      ppcStack_258 = &pcStack_268;
      pcStack_260 = "mulVec";
      uStack_240 = 0xffffffffffffffff;
      uStack_248 = 0x200000019;
      pcStack_250 = (char *)0x1;
      puStack_238 = &UNK_10f65af00;
      uStack_230 = 0x2f;
      uStack_228 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_210 = 0xffffffff;
      uStack_200 = 0;
      uStack_208 = 0;
      func_0x00010a4823c0(&pppuStack_868,&pcStack_260);
      pcStack_2d8 = "vec";
      ppcStack_2c8 = &pcStack_2d8;
      pppuStack_2d0 = (undefined ***)&UNK_10f65af30;
      uStack_2b0 = 0xffffffffffffffff;
      uStack_2b8 = 0x200000019;
      pcStack_2c0 = (char *)0x1;
      puStack_2a8 = &UNK_10f65af37;
      uStack_2a0 = 0x2c;
      uStack_298 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_280 = 0xffffffff;
      uStack_270 = 0;
      uStack_278 = 0;
      func_0x00010a482434(&pppuStack_868,&pppuStack_2d0);
      pppuVar11 = pppuStack_868;
      pppuVar9 = pppuStack_868;
      FUN_10a0051e8(pppuStack_868,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65af64,FUN_10a482878,2,pppuVar11[8]);
      }
      pcStack_348 = "vec";
      ppcStack_338 = &pcStack_348;
      pcStack_340 = "add";
      uStack_320 = 0xffffffffffffffff;
      uStack_328 = 0x100000064;
      uStack_330 = 1;
      puStack_318 = &UNK_10f65af6f;
      uStack_310 = 0x1e;
      uStack_308 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2f0 = 0xffffffff;
      uStack_2e0 = 0;
      uStack_2e8 = 0;
      FUN_10a4822d8(&pppuStack_868,&pcStack_340);
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65af8e,FUN_10a4829b4,2,pppuVar11[8]);
      }
      pppuStack_3b8 = (undefined ***)&UNK_10f6590db;
      ppppuStack_3a8 = &pppuStack_3b8;
      pcStack_3b0 = "sub";
      uStack_390 = 0xffffffffffffffff;
      uStack_398 = 0x100000064;
      uStack_3a0 = 1;
      puStack_388 = &UNK_10f65af99;
      uStack_380 = 0x1f;
      uStack_378 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_360 = 0xffffffff;
      uStack_350 = 0;
      uStack_358 = 0;
      func_0x00010a48234c(&pppuStack_868,&pcStack_3b0);
      pcStack_428 = "vec";
      ppcStack_418 = &pcStack_428;
      pcStack_420 = "multInPlace";
      uStack_400 = 0xffffffffffffffff;
      uStack_408 = 0x100000064;
      uStack_410 = 1;
      puStack_3f8 = &UNK_10f65afc5;
      uStack_3f0 = 0x38;
      uStack_3e8 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3d0 = 0xffffffff;
      uStack_3c0 = 0;
      uStack_3c8 = 0;
      func_0x00010a4824a8(&pppuStack_868,&pcStack_420);
      pppuStack_498 = (undefined ***)&UNK_10f6590db;
      ppppuStack_488 = &pppuStack_498;
      puStack_490 = &UNK_10f659760;
      uStack_470 = 0xffffffffffffffff;
      uStack_478 = 0x100000064;
      uStack_480 = 1;
      puStack_468 = &UNK_10f65affe;
      uStack_460 = 0x4a;
      uStack_458 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_440 = 0xffffffff;
      uStack_430 = 0;
      uStack_438 = 0;
      func_0x00010a4823c0(&pppuStack_868,&puStack_490);
      puStack_508 = &UNK_10f6590db;
      pdStack_4f8 = (dword *)&puStack_508;
      pppuStack_500 = (undefined ***)&UNK_10f65b049;
      uStack_4e0 = 0xffffffffffffffff;
      uStack_4e8 = 0x100000064;
      uStack_4f0 = 1;
      puStack_4d8 = &UNK_10f65afc5;
      uStack_4d0 = 0x38;
      uStack_4c8 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4b0 = 0xffffffff;
      uStack_4a0 = 0;
      uStack_4a8 = 0;
      func_0x00010a4824a8(&pppuStack_868,&pppuStack_500);
      pcStack_578 = "vec";
      ppcStack_568 = &pcStack_578;
      pcStack_570 = "scale";
      uStack_550 = 0xffffffffffffffff;
      uStack_558 = 0x100000064;
      uStack_560 = 1;
      puStack_548 = &UNK_10f65affe;
      uStack_540 = 0x4a;
      uStack_538 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      uStack_520 = 0xffffffff;
      uStack_510 = 0;
      uStack_518 = 0;
      func_0x00010a4823c0(&pppuStack_868,&pcStack_570);
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b056,FUN_10a482b4c,2,pppuVar11[8]);
      }
      pcStack_5e8 = "vec";
      ppcStack_5d8 = &pcStack_5e8;
      puStack_5e0 = &UNK_10f659799;
      uStack_5c0 = 0xffffffffffffffff;
      uStack_5c8 = 0x100000064;
      uStack_5d0 = 1;
      puStack_5b8 = &UNK_10f65b061;
      uStack_5b0 = 0x37;
      uStack_5a8 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_590 = 0xffffffff;
      uStack_580 = 0;
      uStack_588 = 0;
      func_0x00010a482434(&pppuStack_868,&puStack_5e0);
      pppuVar11 = pppuStack_868;
      pppuVar9 = pppuStack_868;
      FUN_10a0051e8(pppuStack_868,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b099,FUN_10a482c18,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&DAT_10f65b0ad,FUN_10a482ccc,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f4916a0,FUN_10a482e34,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        FUN_10a052828(pppuVar11,&DAT_10f355a53,FUN_10a482f40,FUN_10a483020);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b0ba,FUN_10a4830d4,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b0cd,FUN_10a483188,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        FUN_10a052828(pppuVar11,&UNK_10f65b0d9,FUN_10a48323c,FUN_10a483318);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b0e7,FUN_10a4833cc,1,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f491784,FUN_10a4834b8,1,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b0f8,FUN_10a4835b8,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&DAT_10f3e1a8f,FUN_10a483708,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b100,FUN_10a483810,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&DAT_10f329830,FUN_10a483914,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b110,FUN_10a483a08,3,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b123,FUN_10a483b88,3,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b12f,FUN_10a483cb0,3,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b13b,FUN_10a483d64,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f598d6c,FUN_10a483e18,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b14a,FUN_10a483ecc,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b160,FUN_10a483f80,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b16f,FUN_10a484034,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f4917f3,FUN_10a4840e8,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f64f5cc,FUN_10a48419c,1,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,&UNK_10f65b17e,FUN_10a484268,2,pppuVar11[8]);
      }
      pppuVar9 = pppuVar11;
      FUN_10a0051e8(pppuVar11,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pppuVar9 & 1) == 0) {
        if (((ulong)pppuVar11[0xf] & 1) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pppuVar11,"fill",FUN_10a4843b4,2,pppuVar11[8]);
      }
      pppuVar11[0x36] = (undefined **)PTR___ZTIDn_1103469e8;
      ppuVar5 = pppuVar11[0x2e];
      if (pppuVar11[0x2d] != ppuVar5) {
        uVar1 = *(undefined4 *)(ppuVar5 + -10);
        uVar3 = *(undefined4 *)((long)ppuVar5 + -0x4c);
        uVar2 = *(undefined4 *)(ppuVar5 + -9);
        uVar4 = *(undefined4 *)((long)ppuVar5 + -0x44);
        uVar6 = *(undefined4 *)(ppuVar5 + -3);
        pppuVar11[0x2e] = ppuVar5 + -0xd;
        pppuVar9 = pppuVar11;
        FUN_10a0051e8(pppuVar11,uVar1,uVar3,uVar6,uVar2,uVar4);
        if (((ulong)pppuVar9 & 1) == 0) {
          func_0x000109894f40(pppuVar11,0);
          FUN_10a05431c(pppuVar11);
        }
        FUN_10a003e74(pppuVar8,&DAT_10f4913c3,4);
        pppuVar11 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar11 & 1) == 0) {
          if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar8,&DAT_10f3dd8f1,FUN_10a4844a8,2,pppuVar8[3] + -1);
        }
        pppuVar11 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar11 & 1) == 0) {
          if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar8,&DAT_10f3dd8ed,FUN_10a484600,2,pppuVar8[3] + -1);
        }
        pppuVar11 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar11 & 1) == 0) {
          if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar8,&UNK_10f658f2c,FUN_10a4846ac,3,pppuVar8[3] + -1);
        }
        pppuVar11 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar11 & 1) == 0) {
          if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar8,&DAT_10f5aeeaf,FUN_10a4847fc,0,pppuVar8[3] + -1);
        }
        pppuVar11 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar11 & 1) == 0) {
          if (pppuVar8[2] == pppuVar8[3]) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar8,&DAT_10f4b54a4,FUN_10a4848ac,0,pppuVar8[3] + -1);
        }
        func_0x00010a004064(pppuVar8);
        pppuVar8[0x36] = &PTR_DAT_110bc8050;
        if (*(char *)((long)pppuVar8 + 0x1cf) < '\0') {
          pppuVar8[0x38] = (undefined **)0x5;
          pppuVar12 = (undefined ***)pppuVar8[0x37];
        }
        else {
          *(undefined1 *)((long)pppuVar8 + 0x1cf) = 5;
        }
        *(undefined4 *)pppuVar12 = 0x34636576;
        *(undefined2 *)((long)pppuVar12 + 4) = 0x62;
        puStack_178 = &UNK_10f659513;
        ppcStack_170 = (char **)0x0;
        uStack_158 = 0xffffffffffffffff;
        uStack_160 = 0x100000064;
        uStack_148 = 0;
        puStack_150 = (undefined *)0x0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_130 = 0;
        uStack_128 = 0xffffffff;
        uStack_120 = 0;
        uStack_118 = 0;
        func_0x00010a052690(pppuVar8 + 0x2d,&puStack_178);
        pppuVar12 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar12 & 1) == 0) {
          ppuStack_1e8 = &PTR_DAT_110bc8050;
          ppppuStack_1e0 = (undefined ****)0x0;
          puStack_178 = (undefined *)((ulong)puStack_178 & 0xffffffffffffff00);
          uStack_168 = uStack_168 & 0xffffffffffffff00;
          func_0x0001098949cc(pppuVar8,&UNK_10f659513,&ppuStack_1e8,&puStack_178);
        }
        pdStack_4f8 = &segment_command_100000020.flags;
        pppuVar12 = pppuVar8;
        pppuStack_500 = pppuVar8;
        FUN_10a0051e8(pppuVar8,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar12 & 1) == 0) {
          func_0x00010a06ba0c(pppuVar8,FUN_10a484958,4,4);
        }
        puStack_178 = &DAT_10f62b0e2;
        ppcStack_170 = (char **)0x0;
        uStack_158 = 0xffffffffffffffff;
        uStack_160 = 0x100000064;
        uStack_168 = 0;
        puStack_150 = &UNK_10f659519;
        uStack_148 = 0x19;
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0xffffffff;
        uStack_120 = 0;
        uStack_118 = 0;
        FUN_10a45a920(&pppuStack_500,&puStack_178);
        ppuStack_1e8 = (undefined **)0x10f28482f;
        ppppuStack_1e0 = (undefined ****)0x0;
        uStack_1c8 = 0xffffffffffffffff;
        uStack_1d0 = 0x100000064;
        uStack_1d8 = 0;
        puStack_1c0 = &UNK_10f659533;
        uStack_1b8 = 0x19;
        uStack_1b0 = 0;
        uStack_1a0 = 0;
        uStack_1a8 = 0;
        uStack_198 = 0xffffffff;
        uStack_188 = 0;
        uStack_190 = 0;
        func_0x00010a45a988(&pppuStack_500,&ppuStack_1e8);
        pcStack_260 = "z";
        ppcStack_258 = (char **)0x0;
        uStack_240 = 0xffffffffffffffff;
        uStack_248 = 0x100000064;
        pcStack_250 = (char *)0x0;
        puStack_238 = &UNK_10f65954d;
        uStack_230 = 0x19;
        uStack_228 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_210 = 0xffffffff;
        uStack_200 = 0;
        uStack_208 = 0;
        func_0x00010a45a9f0(&pppuStack_500,&pcStack_260);
        pppuStack_2d0 = (undefined ***)&DAT_10f30a8bb;
        ppcStack_2c8 = (char **)0x0;
        uStack_2b0 = 0xffffffffffffffff;
        uStack_2b8 = 0x100000064;
        pcStack_2c0 = (char *)0x0;
        puStack_2a8 = &UNK_10f659567;
        uStack_2a0 = 0x19;
        uStack_298 = 0;
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_280 = 0xffffffff;
        uStack_270 = 0;
        uStack_278 = 0;
        func_0x00010a45aa58(&pppuStack_500,&pppuStack_2d0);
        pcStack_340 = "r";
        ppcStack_338 = (char **)0x0;
        uStack_320 = 0xffffffffffffffff;
        uStack_328 = 0x100000064;
        uStack_330 = 0;
        puStack_318 = &UNK_10f658eca;
        uStack_310 = 0x23;
        uStack_308 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        uStack_2f0 = 0xffffffff;
        uStack_2e0 = 0;
        uStack_2e8 = 0;
        FUN_10a45a920(&pppuStack_500,&pcStack_340);
        pcStack_3b0 = "g";
        ppppuStack_3a8 = (undefined ****)0x0;
        uStack_390 = 0xffffffffffffffff;
        uStack_398 = 0x100000064;
        uStack_3a0 = 0;
        puStack_388 = &UNK_10f658eee;
        uStack_380 = 0x23;
        uStack_378 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        uStack_360 = 0xffffffff;
        uStack_350 = 0;
        uStack_358 = 0;
        func_0x00010a45a988(&pppuStack_500,&pcStack_3b0);
        pcStack_420 = "b";
        ppcStack_418 = (char **)0x0;
        uStack_400 = 0xffffffffffffffff;
        uStack_408 = 0x100000064;
        uStack_410 = 0;
        puStack_3f8 = &UNK_10f6590aa;
        uStack_3f0 = 0x23;
        uStack_3e8 = 0;
        uStack_3d8 = 0;
        uStack_3e0 = 0;
        uStack_3d0 = 0xffffffff;
        uStack_3c0 = 0;
        uStack_3c8 = 0;
        func_0x00010a45a9f0(&pppuStack_500,&pcStack_420);
        puStack_490 = &DAT_10f3dc16b;
        ppppuStack_488 = (undefined ****)0x0;
        uStack_470 = 0xffffffffffffffff;
        uStack_478 = 0x100000064;
        uStack_480 = 0;
        puStack_468 = &UNK_10f6593bc;
        uStack_460 = 0x23;
        uStack_458 = 0;
        uStack_448 = 0;
        uStack_450 = 0;
        uStack_440 = 0xffffffff;
        uStack_430 = 0;
        uStack_438 = 0;
        func_0x00010a45aa58(&pppuStack_500,&puStack_490);
        pppuVar8 = pppuStack_500;
        pppuVar12 = pppuStack_500;
        FUN_10a0051e8(pppuStack_500,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pppuVar12 & 1) == 0) {
          if (((ulong)pppuVar8[0xf] & 1) == 0) goto LAB_10a459c74;
          FUN_10a054dac(pppuVar8,&DAT_10f648172,FUN_10a4850a0,1,pppuVar8[8]);
        }
        pppuVar8[0x36] = (undefined **)PTR___ZTIDn_1103469e8;
        ppuVar5 = pppuVar8[0x2e];
        if (pppuVar8[0x2d] != ppuVar5) {
          uVar1 = *(undefined4 *)(ppuVar5 + -10);
          uVar3 = *(undefined4 *)((long)ppuVar5 + -0x4c);
          uVar2 = *(undefined4 *)(ppuVar5 + -9);
          uVar4 = *(undefined4 *)((long)ppuVar5 + -0x44);
          uVar6 = *(undefined4 *)(ppuVar5 + -3);
          pppuVar8[0x2e] = ppuVar5 + -0xd;
          pppuVar12 = pppuVar8;
          FUN_10a0051e8(pppuVar8,uVar1,uVar3,uVar6,uVar2,uVar4);
          if (((ulong)pppuVar12 & 1) == 0) {
            func_0x000109894f40(pppuVar8,0);
            FUN_10a05431c(pppuVar8);
            pppuVar12 = pppuVar8;
          }
          return pppuVar12;
        }
      }
    }
  }
LAB_10a459c74:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a459c78);
  (*pcVar7)();
}



/* Entry: 10a455cb0; end: 10a459c77;  */

void FUN_10a455cb0(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uVar6;
  code *pcVar7;
  char *pcVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcStack_9b0;
  char *pcStack_9a8;
  char *pcStack_9a0;
  undefined *puStack_998;
  char *pcStack_988;
  char **ppcStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined *puStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined4 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  char *pcStack_920;
  char *pcStack_918;
  char *pcStack_910;
  undefined *puStack_908;
  char *pcStack_900;
  undefined **ppuStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined *puStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined4 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  char *pcStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined *puStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined4 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  char *pcStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined *puStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined4 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  char *pcStack_7c8;
  undefined8 uStack_7c0;
  char *pcStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined *puStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined4 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  char *pcStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined *puStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined4 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  char *pcStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined *puStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined4 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  char *pcStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined *puStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined4 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  char *pcStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined4 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined *puStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined4 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  char *pcStack_548;
  undefined *puStack_540;
  char **ppcStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined4 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  char *pcStack_4d8;
  char *pcStack_4d0;
  char **ppcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined *puStack_468;
  char *pcStack_460;
  dword *pdStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  char *pcStack_3f8;
  undefined *puStack_3f0;
  char **ppcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char **ppcStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  char *pcStack_318;
  char *pcStack_310;
  char **ppcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char **ppcStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  char *pcStack_238;
  char *pcStack_230;
  char **ppcStack_228;
  char *pcStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char **ppcStack_1b8;
  char *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  char *pcStack_150;
  undefined **ppuStack_148;
  char **ppcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char *pcStack_e0;
  undefined *puStack_d8;
  char **ppcStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9fad8;
  pcVar10 = param_1 + 0x1b8;
  if (param_1[0x1cf] < '\0') {
    param_1[0x1c0] = '\x04';
    param_1[0x1c1] = '\0';
    param_1[0x1c2] = '\0';
    param_1[0x1c3] = '\0';
    param_1[0x1c4] = '\0';
    param_1[0x1c5] = '\0';
    param_1[0x1c6] = '\0';
    param_1[0x1c7] = '\0';
    pcVar9 = *(char **)(param_1 + 0x1b8);
  }
  else {
    param_1[0x1cf] = '\x04';
    pcVar9 = pcVar10;
  }
  builtin_strncpy(pcVar9,"vec2",5);
  puStack_d8 = &DAT_10f4913b9;
  ppcStack_d0 = (char **)0x0;
  uStack_b8 = 0xffffffffffffffff;
  uStack_c0 = 0x100000064;
  uStack_a8 = 0;
  puStack_b0 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_90 = 0;
  uStack_88 = 0xffffffff;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_d8);
  pcVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar9 & 1) == 0) {
    ppuStack_148 = &PTR_DAT_110b9fad8;
    ppcStack_140 = (char **)0x0;
    puStack_d8 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff00);
    uStack_c8 = uStack_c8 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&DAT_10f4913b9,&ppuStack_148,&puStack_d8);
  }
  uStack_748 = 0x100000064;
  pcVar9 = param_1;
  pcStack_750 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar9 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a4797b4,2,2);
  }
  puStack_5b0 = &DAT_10f62b0e2;
  uStack_5a8 = 0;
  uStack_590 = 0xffffffffffffffff;
  uStack_598 = 0x100000064;
  uStack_5a0 = 0;
  puStack_588 = &UNK_10f658e98;
  uStack_580 = 0x18;
  uStack_578 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_560 = 0xffffffff;
  uStack_550 = 0;
  uStack_558 = 0;
  FUN_10a459dd0(&pcStack_750,&puStack_5b0);
  pcStack_618 = "y";
  uStack_610 = 0;
  uStack_5f8 = 0xffffffffffffffff;
  uStack_600 = 0x100000064;
  uStack_608 = 0;
  puStack_5f0 = &UNK_10f658eb1;
  uStack_5e8 = 0x18;
  uStack_5e0 = 0;
  uStack_5d0 = 0;
  uStack_5d8 = 0;
  uStack_5c8 = 0xffffffff;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  func_0x00010a459e38(&pcStack_750,&pcStack_618);
  pcStack_680 = "r";
  uStack_678 = 0;
  uStack_660 = 0xffffffffffffffff;
  uStack_668 = 0x100000064;
  uStack_670 = 0;
  puStack_658 = &UNK_10f658eca;
  uStack_650 = 0x23;
  uStack_648 = 0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_630 = 0xffffffff;
  uStack_620 = 0;
  uStack_628 = 0;
  FUN_10a459dd0(&pcStack_750,&pcStack_680);
  pcStack_6e8 = "g";
  uStack_6e0 = 0;
  uStack_6c8 = 0xffffffffffffffff;
  uStack_6d0 = 0x100000064;
  uStack_6d8 = 0;
  puStack_6c0 = &UNK_10f658eee;
  uStack_6b8 = 0x23;
  uStack_6b0 = 0;
  uStack_6a0 = 0;
  uStack_6a8 = 0;
  uStack_698 = 0xffffffff;
  uStack_688 = 0;
  uStack_690 = 0;
  func_0x00010a459e38(&pcStack_750,&pcStack_6e8);
  pcVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar9 & 1) == 0) {
    if ((param_1[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(param_1,&DAT_10f648172,FUN_10a479d10,1,*(undefined8 *)(param_1 + 0x40));
  }
  pcVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar9 & 1) == 0) {
    if ((param_1[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(param_1,&UNK_10f658f12,FUN_10a479e34,3,*(undefined8 *)(param_1 + 0x40));
  }
  pcStack_7b8 = "vec";
  ppcStack_d0 = &pcStack_7b8;
  puStack_d8 = &UNK_10f65ae8e;
  uStack_b8 = 0xffffffffffffffff;
  uStack_c0 = 0x200000019;
  uStack_c8 = 1;
  puStack_b0 = &UNK_10f65ae95;
  uStack_a8 = 0x2a;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0xffffffff;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10a47a280(&pcStack_750,&puStack_d8);
  pcStack_830 = "vec";
  ppcStack_140 = &pcStack_830;
  ppuStack_148 = (undefined **)&UNK_10f65aec0;
  uStack_128 = 0xffffffffffffffff;
  uStack_130 = 0x200000019;
  uStack_138 = 1;
  puStack_120 = &UNK_10f65aec7;
  uStack_118 = 0x31;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f8 = 0xffffffff;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010a47a2f4(&pcStack_750,&ppuStack_148);
  pcStack_898 = "vec";
  ppcStack_1b8 = &pcStack_898;
  pcStack_1c0 = "mulVec";
  uStack_1a0 = 0xffffffffffffffff;
  uStack_1a8 = 0x200000019;
  pcStack_1b0 = (char *)0x1;
  puStack_198 = &UNK_10f65af00;
  uStack_190 = 0x2f;
  uStack_188 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_170 = 0xffffffff;
  uStack_160 = 0;
  uStack_168 = 0;
  func_0x00010a47a368(&pcStack_750,&pcStack_1c0);
  pcStack_900 = "vec";
  ppcStack_228 = &pcStack_900;
  pcStack_230 = "divVec";
  uStack_210 = 0xffffffffffffffff;
  uStack_218 = 0x200000019;
  pcStack_220 = (char *)0x1;
  puStack_208 = &UNK_10f65af37;
  uStack_200 = 0x2c;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0xffffffff;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  func_0x00010a47a3dc(&pcStack_750,&pcStack_230);
  pcVar9 = pcStack_750;
  pcVar8 = pcStack_750;
  FUN_10a0051e8(pcStack_750,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65af64,FUN_10a47a8dc,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcStack_988 = "vec";
  ppcStack_298 = &pcStack_988;
  pcStack_2a0 = "add";
  uStack_280 = 0xffffffffffffffff;
  uStack_288 = 0x100000064;
  uStack_290 = 1;
  puStack_278 = &UNK_10f65af6f;
  uStack_270 = 0x1e;
  uStack_268 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_250 = 0xffffffff;
  uStack_240 = 0;
  uStack_248 = 0;
  FUN_10a47a280(&pcStack_750,&pcStack_2a0);
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65af8e,FUN_10a47aa24,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcStack_920 = "vec";
  ppcStack_308 = &pcStack_920;
  pcStack_310 = "sub";
  uStack_2f0 = 0xffffffffffffffff;
  uStack_2f8 = 0x100000064;
  uStack_300 = 1;
  puStack_2e8 = &UNK_10f65af99;
  uStack_2e0 = 0x1f;
  uStack_2d8 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2c0 = 0xffffffff;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  func_0x00010a47a2f4(&pcStack_750,&pcStack_310);
  pcStack_9b0 = "vec";
  ppcStack_378 = &pcStack_9b0;
  pcStack_380 = "multInPlace";
  uStack_360 = 0xffffffffffffffff;
  uStack_368 = 0x100000064;
  uStack_370 = 1;
  puStack_358 = &UNK_10f65afc5;
  uStack_350 = 0x38;
  uStack_348 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_330 = 0xffffffff;
  uStack_320 = 0;
  uStack_328 = 0;
  func_0x00010a47a450(&pcStack_750,&pcStack_380);
  pcStack_7c8 = "vec";
  ppcStack_3e8 = &pcStack_7c8;
  puStack_3f0 = &UNK_10f659760;
  uStack_3d0 = 0xffffffffffffffff;
  uStack_3d8 = 0x100000064;
  uStack_3e0 = 1;
  puStack_3c8 = &UNK_10f65affe;
  uStack_3c0 = 0x4a;
  uStack_3b8 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_3a0 = 0xffffffff;
  uStack_390 = 0;
  uStack_398 = 0;
  func_0x00010a47a368(&pcStack_750,&puStack_3f0);
  pcStack_e0 = "vec";
  pdStack_458 = (dword *)&pcStack_e0;
  pcStack_460 = "scaleInPlace";
  uStack_440 = 0xffffffffffffffff;
  uStack_448 = 0x100000064;
  uStack_450 = 1;
  puStack_438 = &UNK_10f65afc5;
  uStack_430 = 0x38;
  uStack_428 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_410 = 0xffffffff;
  uStack_400 = 0;
  uStack_408 = 0;
  func_0x00010a47a450(&pcStack_750,&pcStack_460);
  pcStack_150 = "vec";
  ppcStack_4c8 = &pcStack_150;
  pcStack_4d0 = "scale";
  uStack_4b0 = 0xffffffffffffffff;
  uStack_4b8 = 0x100000064;
  uStack_4c0 = 1;
  puStack_4a8 = &UNK_10f65affe;
  uStack_4a0 = 0x4a;
  uStack_498 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_480 = 0xffffffff;
  uStack_470 = 0;
  uStack_478 = 0;
  func_0x00010a47a368(&pcStack_750,&pcStack_4d0);
  pcVar9 = pcStack_750;
  pcVar8 = pcStack_750;
  FUN_10a0051e8(pcStack_750,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b056,FUN_10a47abd4,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcStack_1c8 = "vec";
  ppcStack_538 = &pcStack_1c8;
  puStack_540 = &UNK_10f659799;
  uStack_520 = 0xffffffffffffffff;
  uStack_528 = 0x100000064;
  uStack_530 = 1;
  puStack_518 = &UNK_10f65b061;
  uStack_510 = 0x37;
  uStack_508 = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4f0 = 0xffffffff;
  uStack_4e0 = 0;
  uStack_4e8 = 0;
  func_0x00010a47a3dc(&pcStack_750,&puStack_540);
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b099,FUN_10a47acac,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&DAT_10f65b0ad,FUN_10a47ada4,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f4916a0,FUN_10a47af08,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    FUN_10a052828(pcVar9,&DAT_10f355a53,FUN_10a47afe0,FUN_10a47b0ac);
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b0ba,FUN_10a47b160,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b0cd,FUN_10a47b214,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    FUN_10a052828(pcVar9,&UNK_10f65b0d9,FUN_10a47b2c8,FUN_10a47b390);
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b0e7,FUN_10a47b444,1,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f491784,FUN_10a47b520,1,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b0f8,FUN_10a47b614,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&DAT_10f3e1a8f,FUN_10a47b734,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b100,FUN_10a47b81c,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&DAT_10f329830,FUN_10a47b900,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b110,FUN_10a47b9dc,3,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b123,FUN_10a47bb5c,3,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b12f,FUN_10a47bca4,3,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b13b,FUN_10a47bd58,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f598d6c,FUN_10a47be0c,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b14a,FUN_10a47bec0,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b160,FUN_10a47bf74,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b16f,FUN_10a47c028,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f4917f3,FUN_10a47c10c,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f64f5cc,FUN_10a47c1c0,1,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f65b17e,FUN_10a47c28c,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,"fill",FUN_10a47c520,2,*(undefined8 *)(pcVar9 + 0x40));
  }
  pcVar8 = pcVar9;
  FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pcVar8 & 1) == 0) {
    if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
    FUN_10a054dac(pcVar9,&UNK_10f658f18,FUN_10a47c610,1,*(undefined8 *)(pcVar9 + 0x40));
  }
  *(undefined **)(pcVar9 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar5 = *(long *)(pcVar9 + 0x170);
  if (*(long *)(pcVar9 + 0x168) != lVar5) {
    uVar1 = *(undefined4 *)(lVar5 + -0x50);
    uVar3 = *(undefined4 *)(lVar5 + -0x4c);
    uVar2 = *(undefined4 *)(lVar5 + -0x48);
    uVar4 = *(undefined4 *)(lVar5 + -0x44);
    uVar6 = *(undefined4 *)(lVar5 + -0x18);
    *(long *)(pcVar9 + 0x170) = lVar5 + -0x68;
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,uVar1,uVar3,uVar6,uVar2,uVar4);
    if (((ulong)pcVar8 & 1) == 0) {
      func_0x000109894f40(pcVar9,0);
      FUN_10a05431c(pcVar9);
    }
    FUN_10a003e74(param_1,&DAT_10f4913b9,4);
    pcVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
      FUN_10a054dac(param_1,&DAT_10f3dd8f1,FUN_10a47c6e4,2,*(long *)(param_1 + 0x18) + -8);
    }
    pcVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
      FUN_10a054dac(param_1,&DAT_10f3dd8ed,FUN_10a47c838,2,*(long *)(param_1 + 0x18) + -8);
    }
    pcVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
      FUN_10a054dac(param_1,&UNK_10f658f2c,FUN_10a47c8e4,3,*(long *)(param_1 + 0x18) + -8);
    }
    pcVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
      FUN_10a054dac(param_1,&DAT_10f5aeeaf,FUN_10a47ca34,0,*(long *)(param_1 + 0x18) + -8);
    }
    pcVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
      FUN_10a054dac(param_1,&DAT_10f4b54a4,FUN_10a47cae4,0,*(long *)(param_1 + 0x18) + -8);
    }
    pcVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
      FUN_10a054dac(param_1,&DAT_10f4653a7,FUN_10a47cb90,0,*(long *)(param_1 + 0x18) + -8);
    }
    pcVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
      FUN_10a054dac(param_1,&UNK_10f655b08,FUN_10a47cc44,0,*(long *)(param_1 + 0x18) + -8);
    }
    pcVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
      FUN_10a054dac(param_1,"left",FUN_10a47ccf8,0,*(long *)(param_1 + 0x18) + -8);
    }
    pcVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
      FUN_10a054dac(param_1,"right",FUN_10a47cdac,0,*(long *)(param_1 + 0x18) + -8);
    }
    puStack_d8 = &UNK_10f658f31;
    ppcStack_d0 = (char **)0x0;
    uVar12 = 0xffffffffffffffff;
    uVar11 = 0x200000064;
    uStack_b8 = 0xffffffffffffffff;
    uStack_c0 = 0x200000064;
    uStack_c8 = 0;
    puStack_b0 = &UNK_10f658f41;
    uStack_a8 = 0xb3;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0xffffffff;
    uStack_80 = 0;
    uStack_78 = 0;
    FUN_10a459ea0(param_1,&puStack_d8);
    puStack_d8 = &UNK_10f658ff5;
    ppcStack_d0 = (char **)0x0;
    uStack_b8 = 0xffffffffffffffff;
    uStack_c0 = 0x100000064;
    uStack_c8 = 0;
    puStack_b0 = &UNK_10f659006;
    uStack_a8 = 0x58;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0xffffffff;
    uStack_80 = 0;
    uStack_78 = 0;
    FUN_10a459ea0();
    func_0x00010a004064();
    *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9fba0;
    if (param_1[0x1cf] < '\0') {
      param_1[0x1c0] = '\x04';
      param_1[0x1c1] = '\0';
      param_1[0x1c2] = '\0';
      param_1[0x1c3] = '\0';
      param_1[0x1c4] = '\0';
      param_1[0x1c5] = '\0';
      param_1[0x1c6] = '\0';
      param_1[0x1c7] = '\0';
      pcVar9 = *(char **)(param_1 + 0x1b8);
    }
    else {
      param_1[0x1cf] = '\x04';
      pcVar9 = pcVar10;
    }
    builtin_strncpy(pcVar9,"vec3",5);
    puStack_d8 = &DAT_10f4913be;
    ppcStack_d0 = (char **)0x0;
    uStack_b8 = 0xffffffffffffffff;
    uStack_c0 = 0x100000064;
    uStack_a8 = 0;
    puStack_b0 = (undefined *)0x0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_90 = 0;
    uStack_88 = 0xffffffff;
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x00010a052690(param_1 + 0x168,&puStack_d8);
    pcVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff,in_x6,in_x7,uVar11,uVar12);
    if (((ulong)pcVar9 & 1) == 0) {
      ppuStack_148 = &PTR_DAT_110b9fba0;
      ppcStack_140 = (char **)0x0;
      puStack_d8 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff00);
      uStack_c8 = uStack_c8 & 0xffffffffffffff00;
      func_0x0001098949cc(param_1,&DAT_10f4913be,&ppuStack_148,&puStack_d8);
    }
    uStack_828 = 0x100000064;
    pcVar9 = param_1;
    pcStack_830 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar9 & 1) == 0) {
      func_0x00010a06ba0c(param_1,FUN_10a47cf30,3,3);
    }
    puStack_5b0 = &DAT_10f62b0e2;
    uStack_5a8 = 0;
    uStack_590 = 0xffffffffffffffff;
    uStack_598 = 0x100000064;
    uStack_5a0 = 0;
    puStack_588 = &UNK_10f65905f;
    uStack_580 = 0x18;
    uStack_578 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_560 = 0xffffffff;
    uStack_550 = 0;
    uStack_558 = 0;
    FUN_10a45a258(&pcStack_830,&puStack_5b0);
    pcStack_618 = "y";
    uStack_610 = 0;
    uStack_5f8 = 0xffffffffffffffff;
    uStack_600 = 0x100000064;
    uStack_608 = 0;
    puStack_5f0 = &UNK_10f659078;
    uStack_5e8 = 0x18;
    uStack_5e0 = 0;
    uStack_5d0 = 0;
    uStack_5d8 = 0;
    uStack_5c8 = 0xffffffff;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    func_0x00010a45a2c0(&pcStack_830,&pcStack_618);
    pcStack_680 = "z";
    uStack_678 = 0;
    uStack_660 = 0xffffffffffffffff;
    uStack_668 = 0x100000064;
    uStack_670 = 0;
    puStack_658 = &UNK_10f659091;
    uStack_650 = 0x18;
    uStack_648 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
    uStack_630 = 0xffffffff;
    uStack_620 = 0;
    uStack_628 = 0;
    func_0x00010a45a328(&pcStack_830,&pcStack_680);
    pcStack_6e8 = "r";
    uStack_6e0 = 0;
    uStack_6c8 = 0xffffffffffffffff;
    uStack_6d0 = 0x100000064;
    uStack_6d8 = 0;
    puStack_6c0 = &UNK_10f658eca;
    uStack_6b8 = 0x23;
    uStack_6b0 = 0;
    uStack_6a0 = 0;
    uStack_6a8 = 0;
    uStack_698 = 0xffffffff;
    uStack_688 = 0;
    uStack_690 = 0;
    FUN_10a45a258(&pcStack_830,&pcStack_6e8);
    pcStack_750 = "g";
    uStack_748 = 0;
    uStack_730 = 0xffffffffffffffff;
    uStack_738 = 0x100000064;
    uStack_740 = 0;
    puStack_728 = &UNK_10f658eee;
    uStack_720 = 0x23;
    uStack_718 = 0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_700 = 0xffffffff;
    uStack_6f0 = 0;
    uStack_6f8 = 0;
    func_0x00010a45a2c0(&pcStack_830,&pcStack_750);
    pcStack_7b8 = "b";
    uStack_7b0 = 0;
    uStack_798 = 0xffffffffffffffff;
    uStack_7a0 = 0x100000064;
    uStack_7a8 = 0;
    puStack_790 = &UNK_10f6590aa;
    uStack_788 = 0x23;
    uStack_780 = 0;
    uStack_770 = 0;
    uStack_778 = 0;
    uStack_768 = 0xffffffff;
    uStack_758 = 0;
    uStack_760 = 0;
    func_0x00010a45a328(&pcStack_830,&pcStack_7b8);
    pcVar9 = pcStack_830;
    pcVar8 = pcStack_830;
    FUN_10a0051e8(pcStack_830,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&DAT_10f648172,FUN_10a47d668,1,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f6590ce,FUN_10a47d78c,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f491684,FUN_10a47d8f8,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f6590df,FUN_10a47da38,3,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcStack_898 = "vec";
    ppcStack_d0 = &pcStack_898;
    puStack_d8 = &UNK_10f65ae8e;
    uStack_b8 = 0xffffffffffffffff;
    uStack_c0 = 0x200000019;
    uStack_c8 = 1;
    puStack_b0 = &UNK_10f65ae95;
    uStack_a8 = 0x2a;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0xffffffff;
    uStack_80 = 0;
    uStack_78 = 0;
    FUN_10a47e08c(&pcStack_830,&puStack_d8);
    pcStack_900 = "vec";
    ppcStack_140 = &pcStack_900;
    ppuStack_148 = (undefined **)&UNK_10f65aec0;
    uStack_128 = 0xffffffffffffffff;
    uStack_130 = 0x200000019;
    uStack_138 = 1;
    puStack_120 = &UNK_10f65aec7;
    uStack_118 = 0x31;
    uStack_110 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f8 = 0xffffffff;
    uStack_e8 = 0;
    uStack_f0 = 0;
    func_0x00010a47e100(&pcStack_830,&ppuStack_148);
    pcStack_988 = "vec";
    ppcStack_1b8 = &pcStack_988;
    pcStack_1c0 = "mulVec";
    uStack_1a0 = 0xffffffffffffffff;
    uStack_1a8 = 0x200000019;
    pcStack_1b0 = (char *)0x1;
    puStack_198 = &UNK_10f65af00;
    uStack_190 = 0x2f;
    uStack_188 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_170 = 0xffffffff;
    uStack_160 = 0;
    uStack_168 = 0;
    func_0x00010a47e174(&pcStack_830,&pcStack_1c0);
    pcStack_920 = "vec";
    ppcStack_228 = &pcStack_920;
    pcStack_230 = "divVec";
    uStack_210 = 0xffffffffffffffff;
    uStack_218 = 0x200000019;
    pcStack_220 = (char *)0x1;
    puStack_208 = &UNK_10f65af37;
    uStack_200 = 0x2c;
    uStack_1f8 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1e0 = 0xffffffff;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    func_0x00010a47e1e8(&pcStack_830,&pcStack_230);
    pcVar9 = pcStack_830;
    pcVar8 = pcStack_830;
    FUN_10a0051e8(pcStack_830,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65af64,FUN_10a47e5a0,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcStack_9b0 = "vec";
    ppcStack_298 = &pcStack_9b0;
    pcStack_2a0 = "add";
    uStack_280 = 0xffffffffffffffff;
    uStack_288 = 0x100000064;
    uStack_290 = 1;
    puStack_278 = &UNK_10f65af6f;
    uStack_270 = 0x1e;
    uStack_268 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_250 = 0xffffffff;
    uStack_240 = 0;
    uStack_248 = 0;
    FUN_10a47e08c(&pcStack_830,&pcStack_2a0);
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65af8e,FUN_10a47e688,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcStack_7c8 = "vec";
    ppcStack_308 = &pcStack_7c8;
    pcStack_310 = "sub";
    uStack_2f0 = 0xffffffffffffffff;
    uStack_2f8 = 0x100000064;
    uStack_300 = 1;
    puStack_2e8 = &UNK_10f65af99;
    uStack_2e0 = 0x1f;
    uStack_2d8 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2c0 = 0xffffffff;
    uStack_2b0 = 0;
    uStack_2b8 = 0;
    func_0x00010a47e100(&pcStack_830,&pcStack_310);
    pcStack_e0 = "vec";
    ppcStack_378 = &pcStack_e0;
    pcStack_380 = "multInPlace";
    uStack_360 = 0xffffffffffffffff;
    uStack_368 = 0x100000064;
    uStack_370 = 1;
    puStack_358 = &UNK_10f65afc5;
    uStack_350 = 0x38;
    uStack_348 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_330 = 0xffffffff;
    uStack_320 = 0;
    uStack_328 = 0;
    func_0x00010a47e25c(&pcStack_830,&pcStack_380);
    pcStack_150 = "vec";
    ppcStack_3e8 = &pcStack_150;
    puStack_3f0 = &UNK_10f659760;
    uStack_3d0 = 0xffffffffffffffff;
    uStack_3d8 = 0x100000064;
    uStack_3e0 = 1;
    puStack_3c8 = &UNK_10f65affe;
    uStack_3c0 = 0x4a;
    uStack_3b8 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_3a0 = 0xffffffff;
    uStack_390 = 0;
    uStack_398 = 0;
    func_0x00010a47e174(&pcStack_830,&puStack_3f0);
    pcStack_1c8 = "vec";
    pdStack_458 = (dword *)&pcStack_1c8;
    pcStack_460 = "scaleInPlace";
    uStack_440 = 0xffffffffffffffff;
    uStack_448 = 0x100000064;
    uStack_450 = 1;
    puStack_438 = &UNK_10f65afc5;
    uStack_430 = 0x38;
    uStack_428 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_410 = 0xffffffff;
    uStack_400 = 0;
    uStack_408 = 0;
    func_0x00010a47e25c(&pcStack_830,&pcStack_460);
    pcStack_238 = "vec";
    ppcStack_4c8 = &pcStack_238;
    pcStack_4d0 = "scale";
    uStack_4b0 = 0xffffffffffffffff;
    uStack_4b8 = 0x100000064;
    uStack_4c0 = 1;
    puStack_4a8 = &UNK_10f65affe;
    uStack_4a0 = 0x4a;
    uStack_498 = 0;
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_480 = 0xffffffff;
    uStack_470 = 0;
    uStack_478 = 0;
    func_0x00010a47e174(&pcStack_830,&pcStack_4d0);
    pcVar9 = pcStack_830;
    pcVar8 = pcStack_830;
    FUN_10a0051e8(pcStack_830,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b056,FUN_10a47e858,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcStack_2a8 = "vec";
    ppcStack_538 = &pcStack_2a8;
    puStack_540 = &UNK_10f659799;
    uStack_520 = 0xffffffffffffffff;
    uStack_528 = 0x100000064;
    uStack_530 = 1;
    puStack_518 = &UNK_10f65b061;
    uStack_510 = 0x37;
    uStack_508 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4f0 = 0xffffffff;
    uStack_4e0 = 0;
    uStack_4e8 = 0;
    func_0x00010a47e1e8(&pcStack_830,&puStack_540);
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b099,FUN_10a47e940,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&DAT_10f65b0ad,FUN_10a47ea44,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f4916a0,FUN_10a47ebac,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      FUN_10a052828(pcVar9,&DAT_10f355a53,FUN_10a47eca8,FUN_10a47ed80);
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b0ba,FUN_10a47ee34,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b0cd,FUN_10a47eee8,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      FUN_10a052828(pcVar9,&UNK_10f65b0d9,FUN_10a47ef9c,FUN_10a47f070);
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b0e7,FUN_10a47f124,1,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f491784,FUN_10a47f214,1,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b0f8,FUN_10a47f318,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&DAT_10f3e1a8f,FUN_10a47f3ec,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b100,FUN_10a47f4e8,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&DAT_10f329830,FUN_10a47f5e0,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b110,FUN_10a47f6cc,3,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b123,FUN_10a47f780,3,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b12f,FUN_10a47f8f8,3,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b13b,FUN_10a47f9ac,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f598d6c,FUN_10a47fa60,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b14a,FUN_10a47fb14,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b160,FUN_10a47fc14,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b16f,FUN_10a47fcc8,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f4917f3,FUN_10a47fd7c,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f64f5cc,FUN_10a47fe30,1,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f65b17e,FUN_10a47ff04,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,"fill",FUN_10a480084,2,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f6590f4,FUN_10a480178,3,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f659102,FUN_10a48022c,3,*(undefined8 *)(pcVar9 + 0x40));
    }
    pcVar8 = pcVar9;
    FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pcVar8 & 1) == 0) {
      if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
      FUN_10a054dac(pcVar9,&UNK_10f658f18,FUN_10a4802e0,1,*(undefined8 *)(pcVar9 + 0x40));
    }
    ppcStack_1b8 = (char **)0x10f28482f;
    pcStack_1c0 = "x";
    pcStack_1b0 = "z";
    ppcStack_d0 = &pcStack_1c0;
    puStack_d8 = &UNK_10f65910f;
    uStack_b8 = 0xffffffffffffffff;
    uStack_c0 = 0x100000064;
    uStack_c8 = 3;
    puStack_b0 = &UNK_10f659116;
    uStack_a8 = 0x7f;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0xffffffff;
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x00010a45a390(&pcStack_830,&puStack_d8);
    ppcStack_228 = (char **)0x10f2849e6;
    pcStack_230 = "r";
    pcStack_220 = "b";
    ppcStack_140 = &pcStack_230;
    ppuStack_148 = (undefined **)&UNK_10f659196;
    uStack_128 = 0xffffffffffffffff;
    uStack_130 = 0x100000064;
    uStack_138 = 3;
    puStack_120 = &UNK_10f65919d;
    uStack_118 = 0x98;
    uStack_110 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f8 = 0xffffffff;
    uStack_e8 = 0;
    uStack_f0 = 0;
    func_0x00010a45a390(&pcStack_830,&ppuStack_148);
    *(undefined **)(pcVar9 + 0x1b0) = PTR___ZTIDn_1103469e8;
    lVar5 = *(long *)(pcVar9 + 0x170);
    if (*(long *)(pcVar9 + 0x168) != lVar5) {
      uVar1 = *(undefined4 *)(lVar5 + -0x50);
      uVar3 = *(undefined4 *)(lVar5 + -0x4c);
      uVar2 = *(undefined4 *)(lVar5 + -0x48);
      uVar4 = *(undefined4 *)(lVar5 + -0x44);
      uVar6 = *(undefined4 *)(lVar5 + -0x18);
      *(long *)(pcVar9 + 0x170) = lVar5 + -0x68;
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,uVar1,uVar3,uVar6,uVar2,uVar4);
      if (((ulong)pcVar8 & 1) == 0) {
        func_0x000109894f40(pcVar9,0);
        FUN_10a05431c(pcVar9);
      }
      FUN_10a003e74(param_1,&DAT_10f4913be,4);
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,&UNK_10f659236,FUN_10a480618,2,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,&DAT_10f3dd8f1,FUN_10a480700,2,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,&DAT_10f3dd8ed,FUN_10a480858,2,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,&UNK_10f658f2c,FUN_10a480904,3,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,&UNK_10f659245,FUN_10a480a94,3,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,&DAT_10f5aeeaf,FUN_10a480b40,0,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,&DAT_10f4b54a4,FUN_10a480bf8,0,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,&DAT_10f4653a7,FUN_10a480ca8,0,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,&UNK_10f655b08,FUN_10a480d60,0,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,"left",FUN_10a480e18,0,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,"right",FUN_10a480ed0,0,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,&DAT_10f3260f3,FUN_10a480f88,0,*(long *)(param_1 + 0x18) + -8);
      }
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
        FUN_10a054dac(param_1,&DAT_10f36da21,FUN_10a48103c,0,*(long *)(param_1 + 0x18) + -8);
      }
      puStack_d8 = &UNK_10f658f31;
      ppcStack_d0 = (char **)0x0;
      uStack_c8 = 0;
      puStack_b0 = &UNK_10f65924b;
      uStack_a8 = 0xb3;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0xffffffff;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_c0 = uVar11;
      uStack_b8 = uVar12;
      FUN_10a45a404(param_1,&puStack_d8);
      puStack_d8 = &UNK_10f658ff5;
      ppcStack_d0 = (char **)0x0;
      uStack_b8 = 0xffffffffffffffff;
      uStack_c0 = 0x100000064;
      uStack_c8 = 0;
      puStack_b0 = &UNK_10f6592ff;
      uStack_a8 = 0x58;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0xffffffff;
      uStack_80 = 0;
      uStack_78 = 0;
      FUN_10a45a404();
      func_0x00010a004064();
      *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb3c20;
      if (param_1[0x1cf] < '\0') {
        param_1[0x1c0] = '\x04';
        param_1[0x1c1] = '\0';
        param_1[0x1c2] = '\0';
        param_1[0x1c3] = '\0';
        param_1[0x1c4] = '\0';
        param_1[0x1c5] = '\0';
        param_1[0x1c6] = '\0';
        param_1[0x1c7] = '\0';
        pcVar9 = *(char **)(param_1 + 0x1b8);
      }
      else {
        param_1[0x1cf] = '\x04';
        pcVar9 = pcVar10;
      }
      builtin_strncpy(pcVar9,"vec4",5);
      puStack_d8 = &DAT_10f4913c3;
      ppcStack_d0 = (char **)0x0;
      uStack_b8 = 0xffffffffffffffff;
      uStack_c0 = 0x100000064;
      uStack_a8 = 0;
      puStack_b0 = (undefined *)0x0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_90 = 0;
      uStack_88 = 0xffffffff;
      uStack_80 = 0;
      uStack_78 = 0;
      func_0x00010a052690(param_1 + 0x168,&puStack_d8);
      pcVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        ppuStack_148 = &PTR_DAT_110bb3c20;
        ppcStack_140 = (char **)0x0;
        puStack_d8 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff00);
        uStack_c8 = uStack_c8 & 0xffffffffffffff00;
        func_0x0001098949cc(param_1,&DAT_10f4913c3,&ppuStack_148,&puStack_d8);
      }
      uStack_7c0 = 0x100000064;
      pcVar9 = param_1;
      pcStack_7c8 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar9 & 1) == 0) {
        func_0x00010a06ba0c(param_1,FUN_10a4811a8,4,4);
      }
      puStack_5b0 = &DAT_10f62b0e2;
      uStack_5a8 = 0;
      uStack_590 = 0xffffffffffffffff;
      uStack_598 = 0x100000064;
      uStack_5a0 = 0;
      puStack_588 = &UNK_10f659358;
      uStack_580 = 0x18;
      uStack_578 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      uStack_560 = 0xffffffff;
      uStack_550 = 0;
      uStack_558 = 0;
      FUN_10a45a5bc(&pcStack_7c8,&puStack_5b0);
      pcStack_618 = "y";
      uStack_610 = 0;
      uStack_5f8 = 0xffffffffffffffff;
      uStack_600 = 0x100000064;
      uStack_608 = 0;
      puStack_5f0 = &UNK_10f659371;
      uStack_5e8 = 0x18;
      uStack_5e0 = 0;
      uStack_5d0 = 0;
      uStack_5d8 = 0;
      uStack_5c8 = 0xffffffff;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      func_0x00010a45a624(&pcStack_7c8,&pcStack_618);
      pcStack_680 = "z";
      uStack_678 = 0;
      uStack_660 = 0xffffffffffffffff;
      uStack_668 = 0x100000064;
      uStack_670 = 0;
      puStack_658 = &UNK_10f65938a;
      uStack_650 = 0x18;
      uStack_648 = 0;
      uStack_638 = 0;
      uStack_640 = 0;
      uStack_630 = 0xffffffff;
      uStack_620 = 0;
      uStack_628 = 0;
      func_0x00010a45a68c(&pcStack_7c8,&pcStack_680);
      pcStack_6e8 = "w";
      uStack_6e0 = 0;
      uStack_6c8 = 0xffffffffffffffff;
      uStack_6d0 = 0x100000064;
      uStack_6d8 = 0;
      puStack_6c0 = &UNK_10f6593a3;
      uStack_6b8 = 0x18;
      uStack_6b0 = 0;
      uStack_6a0 = 0;
      uStack_6a8 = 0;
      uStack_698 = 0xffffffff;
      uStack_688 = 0;
      uStack_690 = 0;
      func_0x00010a45a6f4(&pcStack_7c8,&pcStack_6e8);
      pcStack_750 = "r";
      uStack_748 = 0;
      uStack_730 = 0xffffffffffffffff;
      uStack_738 = 0x100000064;
      uStack_740 = 0;
      puStack_728 = &UNK_10f658eca;
      uStack_720 = 0x23;
      uStack_718 = 0;
      uStack_708 = 0;
      uStack_710 = 0;
      uStack_700 = 0xffffffff;
      uStack_6f0 = 0;
      uStack_6f8 = 0;
      FUN_10a45a5bc(&pcStack_7c8,&pcStack_750);
      pcStack_7b8 = "g";
      uStack_7b0 = 0;
      uStack_798 = 0xffffffffffffffff;
      uStack_7a0 = 0x100000064;
      uStack_7a8 = 0;
      puStack_790 = &UNK_10f658eee;
      uStack_788 = 0x23;
      uStack_780 = 0;
      uStack_770 = 0;
      uStack_778 = 0;
      uStack_768 = 0xffffffff;
      uStack_758 = 0;
      uStack_760 = 0;
      func_0x00010a45a624(&pcStack_7c8,&pcStack_7b8);
      pcStack_830 = "b";
      uStack_828 = 0;
      uStack_810 = 0xffffffffffffffff;
      uStack_818 = 0x100000064;
      uStack_820 = 0;
      puStack_808 = &UNK_10f6590aa;
      uStack_800 = 0x23;
      uStack_7f8 = 0;
      uStack_7f0 = 0;
      uStack_7e8 = 0;
      uStack_7e0 = 0xffffffff;
      uStack_7d0 = 0;
      uStack_7d8 = 0;
      func_0x00010a45a68c(&pcStack_7c8,&pcStack_830);
      pcStack_898 = "a";
      uStack_890 = 0;
      uStack_878 = 0xffffffffffffffff;
      uStack_880 = 0x100000064;
      uStack_888 = 0;
      puStack_870 = &UNK_10f6593bc;
      uStack_868 = 0x23;
      uStack_860 = 0;
      uStack_858 = 0;
      uStack_850 = 0;
      uStack_848 = 0xffffffff;
      uStack_840 = 0;
      uStack_838 = 0;
      func_0x00010a45a6f4(&pcStack_7c8,&pcStack_898);
      pcVar9 = pcStack_7c8;
      pcVar8 = pcStack_7c8;
      FUN_10a0051e8(pcStack_7c8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&DAT_10f648172,FUN_10a481a90,1,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcStack_918 = "y";
      pcStack_920 = "x";
      puStack_908 = &DAT_10f30a8bb;
      pcStack_910 = "z";
      ppuStack_8f8 = &pcStack_920;
      pcStack_900 = "setXYZW";
      uStack_8e0 = 0xffffffffffffffff;
      uStack_8e8 = 0x100000064;
      uStack_8f0 = 4;
      puStack_8d8 = &UNK_10f6593e8;
      uStack_8d0 = 0x84;
      uStack_8c8 = 0;
      uStack_8c0 = 0;
      uStack_8b8 = 0;
      uStack_8b0 = 0xffffffff;
      uStack_8a8 = 0;
      uStack_8a0 = 0;
      func_0x00010a45a75c(&pcStack_7c8,&pcStack_900);
      pcStack_9a8 = "g";
      pcStack_9b0 = "r";
      puStack_998 = &DAT_10f3dc16b;
      pcStack_9a0 = "b";
      ppcStack_980 = &pcStack_9b0;
      pcStack_988 = "setRGBA";
      uStack_978 = 4;
      uStack_968 = 0xffffffffffffffff;
      uStack_970 = 0x100000064;
      puStack_960 = &UNK_10f659475;
      uStack_958 = 0x9d;
      uStack_948 = 0;
      uStack_940 = 0;
      uStack_950 = 0;
      uStack_938 = 0xffffffff;
      uStack_930 = 0;
      uStack_928 = 0;
      func_0x00010a45a75c(&pcStack_7c8,&pcStack_988);
      ppcStack_d0 = &pcStack_e0;
      pcStack_e0 = "vec";
      puStack_d8 = &UNK_10f65ae8e;
      uStack_b8 = 0xffffffffffffffff;
      uStack_c0 = 0x200000019;
      uStack_c8 = 1;
      puStack_b0 = &UNK_10f65ae95;
      uStack_a8 = 0x2a;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0xffffffff;
      uStack_80 = 0;
      uStack_78 = 0;
      FUN_10a4822d8(&pcStack_7c8,&puStack_d8);
      pcStack_150 = "vec";
      ppcStack_140 = &pcStack_150;
      ppuStack_148 = (undefined **)&UNK_10f65aec0;
      uStack_128 = 0xffffffffffffffff;
      uStack_130 = 0x200000019;
      uStack_138 = 1;
      puStack_120 = &UNK_10f65aec7;
      uStack_118 = 0x31;
      uStack_110 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f8 = 0xffffffff;
      uStack_e8 = 0;
      uStack_f0 = 0;
      func_0x00010a48234c(&pcStack_7c8,&ppuStack_148);
      pcStack_1c8 = "vec";
      ppcStack_1b8 = &pcStack_1c8;
      pcStack_1c0 = "mulVec";
      uStack_1a0 = 0xffffffffffffffff;
      uStack_1a8 = 0x200000019;
      pcStack_1b0 = (char *)0x1;
      puStack_198 = &UNK_10f65af00;
      uStack_190 = 0x2f;
      uStack_188 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_170 = 0xffffffff;
      uStack_160 = 0;
      uStack_168 = 0;
      func_0x00010a4823c0(&pcStack_7c8,&pcStack_1c0);
      pcStack_238 = "vec";
      ppcStack_228 = &pcStack_238;
      pcStack_230 = "divVec";
      uStack_210 = 0xffffffffffffffff;
      uStack_218 = 0x200000019;
      pcStack_220 = (char *)0x1;
      puStack_208 = &UNK_10f65af37;
      uStack_200 = 0x2c;
      uStack_1f8 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1e0 = 0xffffffff;
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      func_0x00010a482434(&pcStack_7c8,&pcStack_230);
      pcVar9 = pcStack_7c8;
      pcVar8 = pcStack_7c8;
      FUN_10a0051e8(pcStack_7c8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65af64,FUN_10a482878,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcStack_2a8 = "vec";
      ppcStack_298 = &pcStack_2a8;
      pcStack_2a0 = "add";
      uStack_280 = 0xffffffffffffffff;
      uStack_288 = 0x100000064;
      uStack_290 = 1;
      puStack_278 = &UNK_10f65af6f;
      uStack_270 = 0x1e;
      uStack_268 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_250 = 0xffffffff;
      uStack_240 = 0;
      uStack_248 = 0;
      FUN_10a4822d8(&pcStack_7c8,&pcStack_2a0);
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65af8e,FUN_10a4829b4,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcStack_318 = "vec";
      ppcStack_308 = &pcStack_318;
      pcStack_310 = "sub";
      uStack_2f0 = 0xffffffffffffffff;
      uStack_2f8 = 0x100000064;
      uStack_300 = 1;
      puStack_2e8 = &UNK_10f65af99;
      uStack_2e0 = 0x1f;
      uStack_2d8 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2c0 = 0xffffffff;
      uStack_2b0 = 0;
      uStack_2b8 = 0;
      func_0x00010a48234c(&pcStack_7c8,&pcStack_310);
      pcStack_388 = "vec";
      ppcStack_378 = &pcStack_388;
      pcStack_380 = "multInPlace";
      uStack_360 = 0xffffffffffffffff;
      uStack_368 = 0x100000064;
      uStack_370 = 1;
      puStack_358 = &UNK_10f65afc5;
      uStack_350 = 0x38;
      uStack_348 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_330 = 0xffffffff;
      uStack_320 = 0;
      uStack_328 = 0;
      func_0x00010a4824a8(&pcStack_7c8,&pcStack_380);
      pcStack_3f8 = "vec";
      ppcStack_3e8 = &pcStack_3f8;
      puStack_3f0 = &UNK_10f659760;
      uStack_3d0 = 0xffffffffffffffff;
      uStack_3d8 = 0x100000064;
      uStack_3e0 = 1;
      puStack_3c8 = &UNK_10f65affe;
      uStack_3c0 = 0x4a;
      uStack_3b8 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_3a0 = 0xffffffff;
      uStack_390 = 0;
      uStack_398 = 0;
      func_0x00010a4823c0(&pcStack_7c8,&puStack_3f0);
      puStack_468 = &UNK_10f6590db;
      pdStack_458 = (dword *)&puStack_468;
      pcStack_460 = "scaleInPlace";
      uStack_440 = 0xffffffffffffffff;
      uStack_448 = 0x100000064;
      uStack_450 = 1;
      puStack_438 = &UNK_10f65afc5;
      uStack_430 = 0x38;
      uStack_428 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_410 = 0xffffffff;
      uStack_400 = 0;
      uStack_408 = 0;
      func_0x00010a4824a8(&pcStack_7c8,&pcStack_460);
      pcStack_4d8 = "vec";
      ppcStack_4c8 = &pcStack_4d8;
      pcStack_4d0 = "scale";
      uStack_4b0 = 0xffffffffffffffff;
      uStack_4b8 = 0x100000064;
      uStack_4c0 = 1;
      puStack_4a8 = &UNK_10f65affe;
      uStack_4a0 = 0x4a;
      uStack_498 = 0;
      uStack_488 = 0;
      uStack_490 = 0;
      uStack_480 = 0xffffffff;
      uStack_470 = 0;
      uStack_478 = 0;
      func_0x00010a4823c0(&pcStack_7c8,&pcStack_4d0);
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b056,FUN_10a482b4c,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcStack_548 = "vec";
      ppcStack_538 = &pcStack_548;
      puStack_540 = &UNK_10f659799;
      uStack_520 = 0xffffffffffffffff;
      uStack_528 = 0x100000064;
      uStack_530 = 1;
      puStack_518 = &UNK_10f65b061;
      uStack_510 = 0x37;
      uStack_508 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4f0 = 0xffffffff;
      uStack_4e0 = 0;
      uStack_4e8 = 0;
      func_0x00010a482434(&pcStack_7c8,&puStack_540);
      pcVar9 = pcStack_7c8;
      pcVar8 = pcStack_7c8;
      FUN_10a0051e8(pcStack_7c8,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b099,FUN_10a482c18,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&DAT_10f65b0ad,FUN_10a482ccc,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f4916a0,FUN_10a482e34,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        FUN_10a052828(pcVar9,&DAT_10f355a53,FUN_10a482f40,FUN_10a483020);
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b0ba,FUN_10a4830d4,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b0cd,FUN_10a483188,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        FUN_10a052828(pcVar9,&UNK_10f65b0d9,FUN_10a48323c,FUN_10a483318);
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b0e7,FUN_10a4833cc,1,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f491784,FUN_10a4834b8,1,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b0f8,FUN_10a4835b8,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&DAT_10f3e1a8f,FUN_10a483708,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b100,FUN_10a483810,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&DAT_10f329830,FUN_10a483914,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b110,FUN_10a483a08,3,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b123,FUN_10a483b88,3,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b12f,FUN_10a483cb0,3,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b13b,FUN_10a483d64,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f598d6c,FUN_10a483e18,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b14a,FUN_10a483ecc,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b160,FUN_10a483f80,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b16f,FUN_10a484034,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f4917f3,FUN_10a4840e8,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f64f5cc,FUN_10a48419c,1,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,&UNK_10f65b17e,FUN_10a484268,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      pcVar8 = pcVar9;
      FUN_10a0051e8(pcVar9,100,1,0xffffffff,0xffffffff,0xffffffff);
      if (((ulong)pcVar8 & 1) == 0) {
        if ((pcVar9[0x78] & 1U) == 0) goto LAB_10a459c74;
        FUN_10a054dac(pcVar9,"fill",FUN_10a4843b4,2,*(undefined8 *)(pcVar9 + 0x40));
      }
      *(undefined **)(pcVar9 + 0x1b0) = PTR___ZTIDn_1103469e8;
      lVar5 = *(long *)(pcVar9 + 0x170);
      if (*(long *)(pcVar9 + 0x168) != lVar5) {
        uVar1 = *(undefined4 *)(lVar5 + -0x50);
        uVar3 = *(undefined4 *)(lVar5 + -0x4c);
        uVar2 = *(undefined4 *)(lVar5 + -0x48);
        uVar4 = *(undefined4 *)(lVar5 + -0x44);
        uVar6 = *(undefined4 *)(lVar5 + -0x18);
        *(long *)(pcVar9 + 0x170) = lVar5 + -0x68;
        pcVar8 = pcVar9;
        FUN_10a0051e8(pcVar9,uVar1,uVar3,uVar6,uVar2,uVar4);
        if (((ulong)pcVar8 & 1) == 0) {
          func_0x000109894f40(pcVar9,0);
          FUN_10a05431c(pcVar9);
        }
        FUN_10a003e74(param_1,&DAT_10f4913c3,4);
        pcVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pcVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
          FUN_10a054dac(param_1,&DAT_10f3dd8f1,FUN_10a4844a8,2,*(long *)(param_1 + 0x18) + -8);
        }
        pcVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pcVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
          FUN_10a054dac(param_1,&DAT_10f3dd8ed,FUN_10a484600,2,*(long *)(param_1 + 0x18) + -8);
        }
        pcVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pcVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
          FUN_10a054dac(param_1,&UNK_10f658f2c,FUN_10a4846ac,3,*(long *)(param_1 + 0x18) + -8);
        }
        pcVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pcVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
          FUN_10a054dac(param_1,&DAT_10f5aeeaf,FUN_10a4847fc,0,*(long *)(param_1 + 0x18) + -8);
        }
        pcVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pcVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a459c74;
          FUN_10a054dac(param_1,&DAT_10f4b54a4,FUN_10a4848ac,0,*(long *)(param_1 + 0x18) + -8);
        }
        func_0x00010a004064(param_1);
        *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc8050;
        if (param_1[0x1cf] < '\0') {
          param_1[0x1c0] = '\x05';
          param_1[0x1c1] = '\0';
          param_1[0x1c2] = '\0';
          param_1[0x1c3] = '\0';
          param_1[0x1c4] = '\0';
          param_1[0x1c5] = '\0';
          param_1[0x1c6] = '\0';
          param_1[0x1c7] = '\0';
          pcVar10 = *(char **)(param_1 + 0x1b8);
        }
        else {
          param_1[0x1cf] = '\x05';
        }
        builtin_strncpy(pcVar10,"vec4b",6);
        puStack_d8 = &UNK_10f659513;
        ppcStack_d0 = (char **)0x0;
        uStack_b8 = 0xffffffffffffffff;
        uStack_c0 = 0x100000064;
        uStack_a8 = 0;
        puStack_b0 = (undefined *)0x0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_90 = 0;
        uStack_88 = 0xffffffff;
        uStack_80 = 0;
        uStack_78 = 0;
        func_0x00010a052690(param_1 + 0x168,&puStack_d8);
        pcVar10 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pcVar10 & 1) == 0) {
          ppuStack_148 = &PTR_DAT_110bc8050;
          ppcStack_140 = (char **)0x0;
          puStack_d8 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff00);
          uStack_c8 = uStack_c8 & 0xffffffffffffff00;
          func_0x0001098949cc(param_1,&UNK_10f659513,&ppuStack_148,&puStack_d8);
        }
        pdStack_458 = &segment_command_100000020.flags;
        pcVar10 = param_1;
        pcStack_460 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pcVar10 & 1) == 0) {
          func_0x00010a06ba0c(param_1,FUN_10a484958,4,4);
        }
        puStack_d8 = &DAT_10f62b0e2;
        ppcStack_d0 = (char **)0x0;
        uStack_b8 = 0xffffffffffffffff;
        uStack_c0 = 0x100000064;
        uStack_c8 = 0;
        puStack_b0 = &UNK_10f659519;
        uStack_a8 = 0x19;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0xffffffff;
        uStack_80 = 0;
        uStack_78 = 0;
        FUN_10a45a920(&pcStack_460,&puStack_d8);
        ppuStack_148 = (undefined **)0x10f28482f;
        ppcStack_140 = (char **)0x0;
        uStack_128 = 0xffffffffffffffff;
        uStack_130 = 0x100000064;
        uStack_138 = 0;
        puStack_120 = &UNK_10f659533;
        uStack_118 = 0x19;
        uStack_110 = 0;
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_f8 = 0xffffffff;
        uStack_e8 = 0;
        uStack_f0 = 0;
        func_0x00010a45a988(&pcStack_460,&ppuStack_148);
        pcStack_1c0 = "z";
        ppcStack_1b8 = (char **)0x0;
        uStack_1a0 = 0xffffffffffffffff;
        uStack_1a8 = 0x100000064;
        pcStack_1b0 = (char *)0x0;
        puStack_198 = &UNK_10f65954d;
        uStack_190 = 0x19;
        uStack_188 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_170 = 0xffffffff;
        uStack_160 = 0;
        uStack_168 = 0;
        func_0x00010a45a9f0(&pcStack_460,&pcStack_1c0);
        pcStack_230 = "w";
        ppcStack_228 = (char **)0x0;
        uStack_210 = 0xffffffffffffffff;
        uStack_218 = 0x100000064;
        pcStack_220 = (char *)0x0;
        puStack_208 = &UNK_10f659567;
        uStack_200 = 0x19;
        uStack_1f8 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1e0 = 0xffffffff;
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        func_0x00010a45aa58(&pcStack_460,&pcStack_230);
        pcStack_2a0 = "r";
        ppcStack_298 = (char **)0x0;
        uStack_280 = 0xffffffffffffffff;
        uStack_288 = 0x100000064;
        uStack_290 = 0;
        puStack_278 = &UNK_10f658eca;
        uStack_270 = 0x23;
        uStack_268 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        uStack_250 = 0xffffffff;
        uStack_240 = 0;
        uStack_248 = 0;
        FUN_10a45a920(&pcStack_460,&pcStack_2a0);
        pcStack_310 = "g";
        ppcStack_308 = (char **)0x0;
        uStack_2f0 = 0xffffffffffffffff;
        uStack_2f8 = 0x100000064;
        uStack_300 = 0;
        puStack_2e8 = &UNK_10f658eee;
        uStack_2e0 = 0x23;
        uStack_2d8 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2c0 = 0xffffffff;
        uStack_2b0 = 0;
        uStack_2b8 = 0;
        func_0x00010a45a988(&pcStack_460,&pcStack_310);
        pcStack_380 = "b";
        ppcStack_378 = (char **)0x0;
        uStack_360 = 0xffffffffffffffff;
        uStack_368 = 0x100000064;
        uStack_370 = 0;
        puStack_358 = &UNK_10f6590aa;
        uStack_350 = 0x23;
        uStack_348 = 0;
        uStack_338 = 0;
        uStack_340 = 0;
        uStack_330 = 0xffffffff;
        uStack_320 = 0;
        uStack_328 = 0;
        func_0x00010a45a9f0(&pcStack_460,&pcStack_380);
        puStack_3f0 = &DAT_10f3dc16b;
        ppcStack_3e8 = (char **)0x0;
        uStack_3d0 = 0xffffffffffffffff;
        uStack_3d8 = 0x100000064;
        uStack_3e0 = 0;
        puStack_3c8 = &UNK_10f6593bc;
        uStack_3c0 = 0x23;
        uStack_3b8 = 0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_3a0 = 0xffffffff;
        uStack_390 = 0;
        uStack_398 = 0;
        func_0x00010a45aa58(&pcStack_460,&puStack_3f0);
        pcVar10 = pcStack_460;
        pcVar9 = pcStack_460;
        FUN_10a0051e8(pcStack_460,100,1,0xffffffff,0xffffffff,0xffffffff);
        if (((ulong)pcVar9 & 1) == 0) {
          if ((pcVar10[0x78] & 1U) == 0) goto LAB_10a459c74;
          FUN_10a054dac(pcVar10,&DAT_10f648172,FUN_10a4850a0,1,*(undefined8 *)(pcVar10 + 0x40));
        }
        *(undefined **)(pcVar10 + 0x1b0) = PTR___ZTIDn_1103469e8;
        lVar5 = *(long *)(pcVar10 + 0x170);
        if (*(long *)(pcVar10 + 0x168) != lVar5) {
          uVar1 = *(undefined4 *)(lVar5 + -0x50);
          uVar3 = *(undefined4 *)(lVar5 + -0x4c);
          uVar2 = *(undefined4 *)(lVar5 + -0x48);
          uVar4 = *(undefined4 *)(lVar5 + -0x44);
          uVar6 = *(undefined4 *)(lVar5 + -0x18);
          *(long *)(pcVar10 + 0x170) = lVar5 + -0x68;
          pcVar9 = pcVar10;
          FUN_10a0051e8(pcVar10,uVar1,uVar3,uVar6,uVar2,uVar4);
          if (((ulong)pcVar9 & 1) == 0) {
            func_0x000109894f40(pcVar10,0);
            FUN_10a05431c(pcVar10);
          }
          return;
        }
      }
    }
  }
LAB_10a459c74:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a459c78);
  (*pcVar7)();
}



/* Entry: 10a459c78; end: 10a459d97;  */

void FUN_10a459c78(undefined8 param_1,undefined4 *param_2)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f65a2dc,4);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_2);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_2[1]);
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a459d98; end: 10a459dcf;  */

float FUN_10a459d98(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2;
  if (*param_2 <= *param_1) {
    fVar1 = *param_1;
  }
  return fVar1;
}



/* Entry: 10a459dd0; end: 10a459e9f;  */

ulong * FUN_10a459dd0(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  FUN_10a0051e8(uVar2,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(uVar2,*param_2,FUN_10a479924,FUN_10a4799e0);
  }
  return param_1;
}



/* Entry: 10a459ea0; end: 10a459f07;  */

ulong FUN_10a459ea0(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a459f08);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a47ce60,0,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a459f08; end: 10a45a03f;  */

void FUN_10a459f08(undefined8 param_1,undefined4 *param_2)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f65a2dc,4);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_2);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_2[1]);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_2[2]);
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a45a040; end: 10a45a06b;  */

float FUN_10a45a040(long param_1,long param_2)

{
  return -(*(float *)(param_2 + 4) * *(float *)(param_1 + 8)) +
         *(float *)(param_2 + 8) * *(float *)(param_1 + 4);
}



/* Entry: 10a45a06c; end: 10a45a093;  */

void FUN_10a45a06c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_10a008fbc();
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  return;
}



/* Entry: 10a45a094; end: 10a45a097;  */

ulong FUN_10a45a094(undefined8 param_1,ulong *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar4;
  undefined8 uVar3;
  float fVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = *(float *)(param_3 + 1);
  uVar7 = *param_2;
  fVar11 = *(float *)((long)param_2 + 4);
  fVar5 = *(float *)(param_2 + 1);
  fVar1 = (float)uVar7;
  fVar6 = (float)*param_3;
  fVar2 = (float)(uVar7 >> 0x20);
  fVar4 = (float)((ulong)*param_3 >> 0x20);
  fVar2 = fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5;
  fVar4 = fVar6 * fVar6 + fVar4 * fVar4 + fVar8 * fVar8;
  if ((9.999999e-09 <= fVar2) && (9.999999e-09 <= fVar4)) {
    fVar13 = *(float *)((long)param_3 + 4);
    fVar2 = SQRT(fVar2);
    uVar3 = NEON_fmov(0x3f800000,4);
    fVar4 = (float)((ulong)uVar3 >> 0x20) / SQRT(fVar4);
    fVar12 = (fVar1 * fVar6 + fVar11 * fVar13 + fVar5 * fVar8) * ((float)uVar3 / fVar2) * fVar4;
    if (fVar12 <= 0.99999845) {
      fVar10 = fVar12;
      _acosf();
      fVar9 = 3.1415927;
      if (-0.99999845 <= fVar12) {
        fVar9 = fVar10;
      }
      if (fVar9 <= (float)param_1) {
        uVar7 = (ulong)(uint)(fVar6 * fVar4 * fVar2);
      }
      else if (3.1415927 <= fVar9 - (float)param_1) {
        uVar7 = (ulong)(uint)(fVar6 * -fVar4 * fVar2);
      }
      else {
        if (-0.99999845 <= fVar12) {
          fVar2 = -(fVar6 * fVar11) + fVar13 * fVar1;
          fVar4 = -(fVar8 * fVar1) + fVar6 * fVar5;
          fVar12 = -(fVar13 * fVar5) + fVar8 * fVar11;
          fVar13 = fVar5;
        }
        else {
          fVar13 = fVar13 - fVar11;
          fVar8 = fVar8 - fVar5;
          fVar2 = fVar6 - fVar1;
          fVar4 = 0.0;
          fVar12 = -fVar8;
          if (fVar8 * fVar8 <= fVar13 * fVar13) {
            fVar2 = 0.0;
            fVar4 = -(fVar6 - fVar1);
            fVar12 = fVar13;
          }
        }
        ___sincosf_stret(param_1,fVar13);
        fVar6 = 1.0 / SQRT(fVar12 * fVar12 + fVar4 * fVar4 + fVar2 * fVar2);
        fVar12 = fVar12 * fVar6;
        fVar4 = fVar4 * fVar6;
        fVar2 = fVar2 * fVar6;
        fVar8 = 1.0 - fVar13;
        fVar9 = fVar8 * fVar12;
        fVar10 = fVar8 * fVar4;
        fVar8 = fVar8 * fVar2;
        fVar6 = (float)param_1;
        uVar7 = (ulong)(uint)(fVar11 * ((fVar6 * fVar12 + fVar2 * fVar10) * 0.0 +
                                       -(fVar6 * fVar2) + fVar12 * fVar10 +
                                       (fVar13 + fVar4 * fVar10) * 0.0) +
                              fVar1 * ((-(fVar6 * fVar4) + fVar2 * fVar9) * 0.0 +
                                      fVar13 + fVar12 * fVar9 +
                                      (fVar6 * fVar2 + fVar4 * fVar9) * 0.0) +
                             fVar5 * ((fVar13 + fVar2 * fVar8) * 0.0 +
                                     fVar6 * fVar4 + fVar12 * fVar8 +
                                     (-(fVar6 * fVar12) + fVar4 * fVar8) * 0.0));
      }
    }
    else {
      uVar7 = (ulong)(uint)(fVar6 * fVar4 * fVar2);
    }
  }
  return uVar7;
}



/* Entry: 10a45a098; end: 10a45a1c7;  */

void FUN_10a45a098(float param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_40;
  float fStack_38;
  undefined8 uStack_30;
  float fStack_28;
  
  fVar1 = (float)*(undefined8 *)param_2;
  fVar5 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fStack_28 = param_2[2];
  fVar7 = SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fStack_28 * fStack_28);
  if ((uint)ABS(fVar7) < 0x7f800000) {
    uVar3 = *param_3;
    fStack_38 = *(float *)(param_3 + 1);
    fVar2 = (float)uVar3;
    fVar4 = (float)((ulong)uVar3 >> 0x20);
    if (1e-06 <= fVar7) {
      fVar6 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fStack_38 * fStack_38);
      if (0x7f7fffff < (uint)ABS(fVar6)) {
        return;
      }
      if (1e-06 <= fVar6) {
        fStack_28 = fStack_28 / fVar7;
        uStack_30 = CONCAT44(fVar5 / fVar7,fVar1 / fVar7);
        fStack_38 = fStack_38 / fVar6;
        fVar2 = fVar2 / fVar6;
        uStack_40 = CONCAT44(fVar4 / fVar6,fVar2);
        fVar1 = param_1;
        FUN_10a0eff40(&uStack_30,&uStack_40);
        fVar5 = param_1 * fVar6 + (1.0 - param_1) * fVar7;
        fStack_38 = fVar5 * (float)uVar3;
        *param_2 = fVar5 * fVar1;
        param_2[1] = fVar5 * fVar2;
      }
      else {
        param_1 = 1.0 - param_1;
        *(ulong *)param_2 = CONCAT44(fVar5 * param_1,fVar1 * param_1);
        fStack_38 = param_1 * fStack_28;
      }
    }
    else {
      fStack_38 = param_1 * fStack_38;
      *(ulong *)param_2 = CONCAT44(fVar4 * param_1,fVar2 * param_1);
    }
    param_2[2] = fStack_38;
  }
  return;
}



/* Entry: 10a45a1c8; end: 10a45a21f;  */

float FUN_10a45a1c8(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2;
  if (*param_2 <= *param_1) {
    fVar1 = *param_1;
  }
  return fVar1;
}



/* Entry: 10a45a220; end: 10a45a257;  */

ulong FUN_10a45a220(ulong *param_1)

{
  ulong uStack_20;
  undefined4 uStack_18;
  
  uStack_20 = *param_1;
  uStack_18 = (undefined4)param_1[1];
  FUN_10a45a098(&uStack_20);
  return uStack_20 & 0xffffffff;
}



/* Entry: 10a45a258; end: 10a45a403;  */

ulong * FUN_10a45a258(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  FUN_10a0051e8(uVar2,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(uVar2,*param_2,FUN_10a47d0d0,FUN_10a47d18c);
  }
  return param_1;
}



/* Entry: 10a45a404; end: 10a45a46b;  */

ulong FUN_10a45a404(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a45a46c);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a4810f0,0,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a45a46c; end: 10a45a5bb;  */

void FUN_10a45a46c(undefined8 param_1,undefined4 *param_2)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f65a2dc,4);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_2);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_2[1]);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_2[2]);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_2[3]);
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a45a5bc; end: 10a45a7cf;  */

ulong * FUN_10a45a5bc(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  FUN_10a0051e8(uVar2,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(uVar2,*param_2,FUN_10a48134c,FUN_10a481408);
  }
  return param_1;
}



/* Entry: 10a45a7d0; end: 10a45a91f;  */

void FUN_10a45a7d0(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f65a2dc,4);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a45a920; end: 10a45aabf;  */

ulong * FUN_10a45a920(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  FUN_10a0051e8(uVar2,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(uVar2,*param_2,FUN_10a484ac0,FUN_10a484b78);
  }
  return param_1;
}



/* Entry: 10a45aac0; end: 10a45dad7;  */

void FUN_10a45aac0(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined **ppuStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d0;
  undefined ***pppuStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  FUN_10a003e74(param_1,&UNK_10f654e5d,4);
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&DAT_10f51b364,FUN_10a4851c4,0,*(long *)(param_1 + 0x18) + -8);
  }
  func_0x00010a004064(param_1);
  pppuStack_c8 = (undefined ***)0x0;
  uStack_c0 = 0;
  pcStack_d0 = "MathUtils";
  uStack_b0 = 0xffffffffffffffff;
  uStack_b8 = 0x100000064;
  puStack_a8 = &UNK_10f65a2f3;
  uStack_a0 = 0x27;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x00010a004eb4(param_1,&pcStack_d0);
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&UNK_10f65a31b,FUN_10a472c8c,2,*(long *)(param_1 + 0x18) + -8);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&UNK_10f658f2c,FUN_10a472db8,3,*(long *)(param_1 + 0x18) + -8);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&DAT_10f3dd912,FUN_10a472f54,3,*(long *)(param_1 + 0x18) + -8);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&UNK_10f59d497,FUN_10a472ff0,5,*(long *)(param_1 + 0x18) + -8);
  }
  pppuStack_c8 = (undefined ***)0x0;
  uStack_c0 = 0;
  pcStack_d0 = "DegToRad";
  uStack_b0 = 0xffffffffffffffff;
  uStack_b8 = 0x100000064;
  puStack_a8 = &UNK_10f65a330;
  uStack_a0 = 0x38;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_10a472be8(0x3c8efa35,param_1,&pcStack_d0);
  pppuStack_c8 = (undefined ***)0x0;
  uStack_c0 = 0;
  pcStack_d0 = "RadToDeg";
  uStack_b0 = 0xffffffffffffffff;
  uStack_b8 = 0x100000064;
  puStack_a8 = &UNK_10f65a372;
  uStack_a0 = 0x38;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_10a472be8(0x42652ee1);
  func_0x00010a004064();
  FUN_10a455cb0(param_1);
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9fbd8;
  puVar11 = (undefined4 *)(param_1 + 0x1b8);
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 4;
    puVar10 = *(undefined4 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 4;
    puVar10 = puVar11;
  }
  *puVar10 = 0x74617571;
  *(undefined1 *)(puVar10 + 1) = 0;
  pppuStack_c8 = (undefined ***)0x0;
  uStack_c0 = 0;
  pcStack_d0 = "quat";
  uStack_b0 = 0xffffffffffffffff;
  uStack_b8 = 0x100000064;
  uStack_a0 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_80 = 0xffffffff;
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x00010a052690(param_1 + 0x168,&pcStack_d0);
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    ppuStack_f0 = &PTR_DAT_110b9fbd8;
    pcStack_e8 = (char *)0x0;
    pcStack_d0 = (char *)((ulong)pcStack_d0 & 0xffffffffffffff00);
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f654e6c,&ppuStack_f0,&pcStack_d0);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a485270,4,4);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f62b0e2,FUN_10a485414,FUN_10a4854d0);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    FUN_10a052828(param_1,"y",FUN_10a4855c0,FUN_10a48567c);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    FUN_10a052828(param_1,"z",FUN_10a48576c,FUN_10a485828);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f30a8bb,FUN_10a485918,FUN_10a4859d4);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&UNK_10f596f31,FUN_10a485ac4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&UNK_10f491784,FUN_10a485ba0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&DAT_10f648172,FUN_10a485cb0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&UNK_10f659581,FUN_10a485dd4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&UNK_10f65958f,FUN_10a485f20,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&UNK_10f659598,FUN_10a48603c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&DAT_10f329830,FUN_10a4860e8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&DAT_10f47de24,FUN_10a4861dc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&UNK_10f6595a0,FUN_10a48632c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&UNK_10f4916a0,FUN_10a486480,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
    FUN_10a054dac(param_1,&UNK_10f6595ad,FUN_10a48658c,1,*(undefined8 *)(param_1 + 0x40));
  }
  puVar7 = PTR___ZTIDn_1103469e8;
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar5 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar5) {
    uVar1 = *(undefined4 *)(lVar5 + -0x50);
    uVar3 = *(undefined4 *)(lVar5 + -0x4c);
    uVar2 = *(undefined4 *)(lVar5 + -0x48);
    uVar4 = *(undefined4 *)(lVar5 + -0x44);
    uVar6 = *(undefined4 *)(lVar5 + -0x18);
    *(long *)(param_1 + 0x170) = lVar5 + -0x68;
    uVar9 = param_1;
    FUN_10a0051e8(param_1,uVar1,uVar3,uVar6,uVar2,uVar4);
    if ((uVar9 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    FUN_10a003e74(param_1,&UNK_10f654e6c,4);
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f6595b5,FUN_10a486638,2,*(long *)(param_1 + 0x18) + -8);
    }
    ppuStack_f0 = (undefined **)0x10f27d055;
    pcStack_e8 = "axis";
    pcStack_d0 = "angleAxis";
    uStack_c0 = 2;
    uStack_b0 = 0xffffffffffffffff;
    uStack_b8 = 0x100000064;
    puStack_a8 = &UNK_10f6595cc;
    uStack_a0 = 0x36;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_80 = 0xffffffff;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar9 = param_1;
    pppuStack_c8 = &ppuStack_f0;
    FUN_10a45dfd0(param_1,&pcStack_d0);
    pcStack_e8 = "y";
    ppuStack_f0 = (undefined **)&DAT_10f62b0e2;
    pcStack_e0 = "z";
    pcStack_d0 = "fromEulerAngles";
    uStack_c0 = 3;
    uStack_b0 = 0xffffffffffffffff;
    uStack_b8 = 0x100000064;
    puStack_a8 = &UNK_10f659613;
    uStack_a0 = 0x45;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_80 = 0xffffffff;
    uStack_78 = 0;
    uStack_70 = 0;
    pppuStack_c8 = &ppuStack_f0;
    func_0x00010a45e038();
    FUN_10a0051e8();
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f659659,FUN_10a486b34,1,*(long *)(param_1 + 0x18) + -8);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f659666,FUN_10a486d30,2,*(long *)(param_1 + 0x18) + -8);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f659675,FUN_10a487024,2,*(long *)(param_1 + 0x18) + -8);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f658f2c,FUN_10a4870d0,3,*(long *)(param_1 + 0x18) + -8);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f659245,FUN_10a487260,3,*(long *)(param_1 + 0x18) + -8);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f65967c,FUN_10a48730c,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f659689,FUN_10a4873c0,1,*(long *)(param_1 + 0x18) + -8);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f659699,FUN_10a48748c,1,*(long *)(param_1 + 0x18) + -8);
    }
    pcStack_e8 = "y";
    ppuStack_f0 = (undefined **)&DAT_10f62b0e2;
    pcStack_e0 = "z";
    pcStack_d0 = "quatFromEuler";
    uStack_c0 = 3;
    uStack_b0 = 0xffffffffffffffff;
    uStack_b8 = 0x200000064;
    puStack_a8 = &UNK_10f6596b8;
    uStack_a0 = 0x7b;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_80 = 0xffffffff;
    uStack_78 = 0;
    uStack_70 = 0;
    pppuStack_c8 = &ppuStack_f0;
    func_0x00010a45e038(param_1,&pcStack_d0);
    func_0x00010a004064();
    uVar9 = param_1;
    FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f6595ad,FUN_10a487640,1,*(long *)(param_1 + 0x18) + -8);
    }
    ppuStack_f0 = (undefined **)0x10f27d055;
    pcStack_e8 = "axis";
    pcStack_d0 = "quatFromAngleAxis";
    uStack_c0 = 2;
    uStack_b0 = 0xffffffffffffffff;
    uStack_b8 = 0x200000019;
    uStack_a0 = 0;
    puStack_a8 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_80 = 0xffffffff;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar9 = param_1;
    pppuStack_c8 = &ppuStack_f0;
    FUN_10a45dfd0(param_1,&pcStack_d0);
    FUN_10a0051e8();
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f659746,FUN_10a48788c,1,*(long *)(param_1 + 0x18) + -8);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f659245,FUN_10a487a2c,3,*(long *)(param_1 + 0x18) + -8);
    }
    *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc7ba8;
    if (*(char *)(param_1 + 0x1cf) < '\0') {
      *(undefined8 *)(param_1 + 0x1c0) = 4;
      puVar10 = *(undefined4 **)(param_1 + 0x1b8);
    }
    else {
      *(undefined1 *)(param_1 + 0x1cf) = 4;
      puVar10 = puVar11;
    }
    *puVar10 = 0x3274616d;
    *(undefined1 *)(puVar10 + 1) = 0;
    pppuStack_c8 = (undefined ***)0x0;
    uStack_c0 = 0;
    pcStack_d0 = "mat2";
    uStack_b0 = 0xffffffffffffffff;
    uStack_b8 = 0x100000064;
    uStack_a0 = 0;
    puStack_a8 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_80 = 0xffffffff;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010a052690(param_1 + 0x168,&pcStack_d0);
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      ppuStack_f0 = &PTR_DAT_110bc7ba8;
      pcStack_e8 = (char *)0x0;
      pcStack_d0 = (char *)((ulong)pcStack_d0 & 0xffffffffffffff00);
      uStack_c0 = uStack_c0 & 0xffffffffffffff00;
      func_0x0001098949cc(param_1,&DAT_10f4913fe,&ppuStack_f0,&pcStack_d0);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      func_0x00010a06ba0c(param_1,FUN_10a487ad8,0,0);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      FUN_10a052828(param_1,"description",FUN_10a487bd0,FUN_10a487c7c);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      FUN_10a052828(param_1,&UNK_10f659750,FUN_10a487e30,FUN_10a487efc);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      FUN_10a052828(param_1,&UNK_10f659758,FUN_10a487fc0,FUN_10a48808c);
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a488150,2,*(undefined8 *)(param_1 + 0x40));
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,"sub",FUN_10a488370,2,*(undefined8 *)(param_1 + 0x40));
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f659760,FUN_10a488424,2,*(undefined8 *)(param_1 + 0x40));
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f659799,FUN_10a4884d8,2,*(undefined8 *)(param_1 + 0x40));
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f49168a,FUN_10a48858c,1,*(undefined8 *)(param_1 + 0x40));
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&DAT_10f2da2c7,FUN_10a488654,1,*(undefined8 *)(param_1 + 0x40));
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f49189e,FUN_10a488748,1,*(undefined8 *)(param_1 + 0x40));
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f4916a0,FUN_10a488818,2,*(undefined8 *)(param_1 + 0x40));
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&UNK_10f65979d,FUN_10a488910,2,*(undefined8 *)(param_1 + 0x40));
    }
    uVar9 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
      FUN_10a054dac(param_1,&DAT_10f648172,FUN_10a488a1c,1,*(undefined8 *)(param_1 + 0x40));
    }
    *(undefined **)(param_1 + 0x1b0) = puVar7;
    lVar5 = *(long *)(param_1 + 0x170);
    if (*(long *)(param_1 + 0x168) != lVar5) {
      uVar1 = *(undefined4 *)(lVar5 + -0x50);
      uVar3 = *(undefined4 *)(lVar5 + -0x4c);
      uVar2 = *(undefined4 *)(lVar5 + -0x48);
      uVar4 = *(undefined4 *)(lVar5 + -0x44);
      uVar6 = *(undefined4 *)(lVar5 + -0x18);
      *(long *)(param_1 + 0x170) = lVar5 + -0x68;
      uVar9 = param_1;
      FUN_10a0051e8(param_1,uVar1,uVar3,uVar6,uVar2,uVar4);
      if ((uVar9 & 1) == 0) {
        func_0x000109894f40(param_1,0);
        FUN_10a05431c(param_1);
      }
      FUN_10a003e74(param_1,&DAT_10f4913fe,4);
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,&DAT_10f2c6059,FUN_10a488ac8,0,*(long *)(param_1 + 0x18) + -8);
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,&DAT_10f4b54a4,FUN_10a488b78,0,*(long *)(param_1 + 0x18) + -8);
      }
      ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
      pcStack_e8 = "b";
      pcStack_d0 = "add";
      uStack_c0 = 2;
      uStack_b0 = 0xffffffffffffffff;
      uStack_b8 = 0x800000064;
      uStack_a0 = 0;
      puStack_a8 = (undefined *)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_70 = 0;
      pppuStack_c8 = &ppuStack_f0;
      FUN_10a45e5bc(param_1,&pcStack_d0);
      ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
      pcStack_e8 = "b";
      pcStack_d0 = "sub";
      uStack_c0 = 2;
      uStack_b0 = 0xffffffffffffffff;
      uStack_b8 = 0x800000064;
      uStack_a0 = 0;
      puStack_a8 = (undefined *)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_70 = 0;
      pppuStack_c8 = &ppuStack_f0;
      func_0x00010a45e624();
      ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
      pcStack_e8 = "b";
      pcStack_d0 = "mul";
      uStack_c0 = 2;
      uStack_b0 = 0xffffffffffffffff;
      uStack_b8 = 0x800000064;
      puStack_a8 = &UNK_10f659765;
      uStack_a0 = 0x33;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_98 = 0;
      uStack_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_70 = 0;
      pppuStack_c8 = &ppuStack_f0;
      func_0x00010a45e68c();
      ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
      pcStack_e8 = "b";
      pcStack_d0 = "div";
      uStack_c0 = 2;
      uStack_b0 = 0xffffffffffffffff;
      uStack_b8 = 0x800000064;
      uStack_a0 = 0;
      puStack_a8 = (undefined *)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_70 = 0;
      pppuStack_c8 = &ppuStack_f0;
      func_0x00010a45e6f4();
      func_0x00010a004064();
      ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
      pcStack_e8 = "b";
      pcStack_d0 = "mat2Add";
      uStack_c0 = 2;
      uStack_b0 = 0xffffffffffffffff;
      uStack_b8 = 0x200000019;
      uStack_a0 = 0;
      puStack_a8 = (undefined *)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_70 = 0;
      pppuStack_c8 = &ppuStack_f0;
      FUN_10a45e5bc(param_1,&pcStack_d0);
      ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
      pcStack_e8 = "b";
      pcStack_d0 = "mat2Sub";
      uStack_c0 = 2;
      uStack_b0 = 0xffffffffffffffff;
      uStack_b8 = 0x200000019;
      uStack_a0 = 0;
      puStack_a8 = (undefined *)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_70 = 0;
      pppuStack_c8 = &ppuStack_f0;
      func_0x00010a45e624();
      ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
      pcStack_e8 = "b";
      pcStack_d0 = "mat2Mul";
      uStack_c0 = 2;
      uStack_b0 = 0xffffffffffffffff;
      uStack_b8 = 0x200000019;
      uStack_a0 = 0;
      puStack_a8 = (undefined *)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_70 = 0;
      pppuStack_c8 = &ppuStack_f0;
      func_0x00010a45e68c();
      ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
      pcStack_e8 = "b";
      pcStack_d0 = "mat2Div";
      uStack_c0 = 2;
      uStack_b0 = 0xffffffffffffffff;
      uStack_b8 = 0x200000019;
      uStack_a0 = 0;
      puStack_a8 = (undefined *)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_70 = 0;
      pppuStack_c8 = &ppuStack_f0;
      func_0x00010a45e6f4();
      *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb3c58;
      if (*(char *)(param_1 + 0x1cf) < '\0') {
        *(undefined8 *)(param_1 + 0x1c0) = 4;
        puVar10 = *(undefined4 **)(param_1 + 0x1b8);
      }
      else {
        *(undefined1 *)(param_1 + 0x1cf) = 4;
        puVar10 = puVar11;
      }
      *puVar10 = 0x3374616d;
      *(undefined1 *)(puVar10 + 1) = 0;
      pppuStack_c8 = (undefined ***)0x0;
      uStack_c0 = 0;
      pcStack_d0 = "mat3";
      uStack_b0 = 0xffffffffffffffff;
      uStack_b8 = 0x100000064;
      uStack_a0 = 0;
      puStack_a8 = (undefined *)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010a052690(param_1 + 0x168,&pcStack_d0);
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        ppuStack_f0 = &PTR_DAT_110bb3c58;
        pcStack_e8 = (char *)0x0;
        pcStack_d0 = (char *)((ulong)pcStack_d0 & 0xffffffffffffff00);
        uStack_c0 = uStack_c0 & 0xffffffffffffff00;
        func_0x0001098949cc(param_1,&DAT_10f491403,&ppuStack_f0,&pcStack_d0);
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        func_0x00010a06ba0c(param_1,FUN_10a488f7c,0,0);
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        FUN_10a052828(param_1,"description",FUN_10a489090,FUN_10a48913c);
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        FUN_10a052828(param_1,&UNK_10f659750,FUN_10a4892f0,FUN_10a4893c4);
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        FUN_10a052828(param_1,&UNK_10f659758,FUN_10a489490,FUN_10a489564);
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        FUN_10a052828(param_1,&UNK_10f6597cc,FUN_10a489630,FUN_10a489704);
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a4897d0,2,*(undefined8 *)(param_1 + 0x40));
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,"sub",FUN_10a48990c,2,*(undefined8 *)(param_1 + 0x40));
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,&UNK_10f659760,FUN_10a4899c0,2,*(undefined8 *)(param_1 + 0x40));
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,&UNK_10f659799,FUN_10a489a74,2,*(undefined8 *)(param_1 + 0x40));
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,&UNK_10f49168a,FUN_10a489b28,1,*(undefined8 *)(param_1 + 0x40));
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,&DAT_10f2da2c7,FUN_10a489c18,1,*(undefined8 *)(param_1 + 0x40));
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,&UNK_10f49189e,FUN_10a489d78,1,*(undefined8 *)(param_1 + 0x40));
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,&UNK_10f4916a0,FUN_10a489e68,2,*(undefined8 *)(param_1 + 0x40));
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,&UNK_10f65979d,FUN_10a489fc4,2,*(undefined8 *)(param_1 + 0x40));
      }
      uVar9 = param_1;
      FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
        FUN_10a054dac(param_1,&DAT_10f648172,FUN_10a48a0e0,1,*(undefined8 *)(param_1 + 0x40));
      }
      *(undefined **)(param_1 + 0x1b0) = puVar7;
      lVar5 = *(long *)(param_1 + 0x170);
      if (*(long *)(param_1 + 0x168) != lVar5) {
        uVar1 = *(undefined4 *)(lVar5 + -0x50);
        uVar3 = *(undefined4 *)(lVar5 + -0x4c);
        uVar2 = *(undefined4 *)(lVar5 + -0x48);
        uVar4 = *(undefined4 *)(lVar5 + -0x44);
        uVar6 = *(undefined4 *)(lVar5 + -0x18);
        *(long *)(param_1 + 0x170) = lVar5 + -0x68;
        uVar9 = param_1;
        FUN_10a0051e8(param_1,uVar1,uVar3,uVar6,uVar2,uVar4);
        if ((uVar9 & 1) == 0) {
          func_0x000109894f40(param_1,0);
          FUN_10a05431c(param_1);
        }
        FUN_10a003e74(param_1,&DAT_10f491403,4);
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&DAT_10f2c6059,FUN_10a48a18c,0,*(long *)(param_1 + 0x18) + -8);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&DAT_10f4b54a4,FUN_10a48a24c,0,*(long *)(param_1 + 0x18) + -8);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f6597d4,FUN_10a48a300,1,*(long *)(param_1 + 0x18) + -8);
        }
        ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
        pcStack_e8 = "b";
        pcStack_d0 = "add";
        uStack_c0 = 2;
        uStack_b0 = 0xffffffffffffffff;
        uStack_b8 = 0x800000064;
        uStack_a0 = 0;
        puStack_a8 = (undefined *)0x0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_88 = 0;
        uStack_80 = 0xffffffff;
        uStack_78 = 0;
        uStack_70 = 0;
        pppuStack_c8 = &ppuStack_f0;
        FUN_10a45f100(param_1,&pcStack_d0);
        ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
        pcStack_e8 = "b";
        pcStack_d0 = "sub";
        uStack_c0 = 2;
        uStack_b0 = 0xffffffffffffffff;
        uStack_b8 = 0x800000064;
        uStack_a0 = 0;
        puStack_a8 = (undefined *)0x0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_88 = 0;
        uStack_80 = 0xffffffff;
        uStack_78 = 0;
        uStack_70 = 0;
        pppuStack_c8 = &ppuStack_f0;
        func_0x00010a45f168();
        ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
        pcStack_e8 = "b";
        pcStack_d0 = "mul";
        uStack_c0 = 2;
        uStack_b0 = 0xffffffffffffffff;
        uStack_b8 = 0x800000064;
        puStack_a8 = &UNK_10f659765;
        uStack_a0 = 0x33;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        uStack_80 = 0xffffffff;
        uStack_78 = 0;
        uStack_70 = 0;
        pppuStack_c8 = &ppuStack_f0;
        func_0x00010a45f1d0();
        ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
        pcStack_e8 = "b";
        pcStack_d0 = "div";
        uStack_c0 = 2;
        uStack_b0 = 0xffffffffffffffff;
        uStack_b8 = 0x800000064;
        uStack_a0 = 0;
        puStack_a8 = (undefined *)0x0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_88 = 0;
        uStack_80 = 0xffffffff;
        uStack_78 = 0;
        uStack_70 = 0;
        pppuStack_c8 = &ppuStack_f0;
        func_0x00010a45f238();
        func_0x00010a004064();
        ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
        pcStack_e8 = "b";
        pcStack_d0 = "mat3Add";
        uStack_c0 = 2;
        uStack_b0 = 0xffffffffffffffff;
        uStack_b8 = 0x200000019;
        puStack_a8 = &UNK_10f6597ed;
        uStack_a0 = 0x2f;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        uStack_80 = 0xffffffff;
        uStack_78 = 0;
        uStack_70 = 0;
        uVar9 = param_1;
        pppuStack_c8 = &ppuStack_f0;
        FUN_10a45f100(param_1,&pcStack_d0);
        ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
        pcStack_e8 = "b";
        pcStack_d0 = "mat3Sub";
        uStack_c0 = 2;
        uStack_b0 = 0xffffffffffffffff;
        uStack_b8 = 0x200000019;
        puStack_a8 = &UNK_10f659825;
        uStack_a0 = 0x35;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        uStack_80 = 0xffffffff;
        uStack_78 = 0;
        uStack_70 = 0;
        pppuStack_c8 = &ppuStack_f0;
        func_0x00010a45f168();
        ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
        pcStack_e8 = "b";
        pcStack_d0 = "mat3Mul";
        uStack_c0 = 2;
        uStack_b0 = 0xffffffffffffffff;
        uStack_b8 = 0x200000019;
        uStack_a0 = 0;
        puStack_a8 = (undefined *)0x0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_88 = 0;
        uStack_80 = 0xffffffff;
        uStack_78 = 0;
        uStack_70 = 0;
        pppuStack_c8 = &ppuStack_f0;
        func_0x00010a45f1d0();
        ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
        pcStack_e8 = "b";
        pcStack_d0 = "mat3Div";
        uStack_c0 = 2;
        uStack_b0 = 0xffffffffffffffff;
        uStack_b8 = 0x200000019;
        uStack_a0 = 0;
        puStack_a8 = (undefined *)0x0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_88 = 0;
        uStack_80 = 0xffffffff;
        uStack_78 = 0;
        uStack_70 = 0;
        pppuStack_c8 = &ppuStack_f0;
        func_0x00010a45f238();
        FUN_10a0051e8();
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f65986b,FUN_10a48a7a8,1,*(long *)(param_1 + 0x18) + -8);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f659877,FUN_10a48a8b8,1,*(long *)(param_1 + 0x18) + -8);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f659887,FUN_10a48a9a4,1,*(long *)(param_1 + 0x18) + -8);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f659895,FUN_10a48aa50,2,*(long *)(param_1 + 0x18) + -8);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f6598a8,FUN_10a48aafc,2,*(long *)(param_1 + 0x18) + -8);
        }
        *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110ba79e8;
        if (*(char *)(param_1 + 0x1cf) < '\0') {
          *(undefined8 *)(param_1 + 0x1c0) = 4;
          puVar11 = *(undefined4 **)(param_1 + 0x1b8);
        }
        else {
          *(undefined1 *)(param_1 + 0x1cf) = 4;
        }
        *puVar11 = 0x3474616d;
        *(undefined1 *)(puVar11 + 1) = 0;
        pppuStack_c8 = (undefined ***)0x0;
        uStack_c0 = 0;
        pcStack_d0 = "mat4";
        uStack_b0 = 0xffffffffffffffff;
        uStack_b8 = 0x100000064;
        uStack_a0 = 0;
        puStack_a8 = (undefined *)0x0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_88 = 0;
        uStack_80 = 0xffffffff;
        uStack_78 = 0;
        uStack_70 = 0;
        func_0x00010a052690(param_1 + 0x168,&pcStack_d0);
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          ppuStack_f0 = &PTR_DAT_110ba79e8;
          pcStack_e8 = (char *)0x0;
          pcStack_d0 = (char *)((ulong)pcStack_d0 & 0xffffffffffffff00);
          uStack_c0 = uStack_c0 & 0xffffffffffffff00;
          func_0x0001098949cc(param_1,&DAT_10f491408,&ppuStack_f0,&pcStack_d0);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          func_0x00010a06ba0c(param_1,FUN_10a48ac24,0,0);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          FUN_10a052828(param_1,"description",FUN_10a48ad30,FUN_10a48addc);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          FUN_10a052828(param_1,&UNK_10f659750,FUN_10a48af90,FUN_10a48b05c);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          FUN_10a052828(param_1,&UNK_10f659758,FUN_10a48b120,FUN_10a48b1ec);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          FUN_10a052828(param_1,&UNK_10f6597cc,FUN_10a48b2b0,FUN_10a48b37c);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          FUN_10a052828(param_1,&UNK_10f6598b9,FUN_10a48b440,FUN_10a48b50c);
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a48b5d0,2,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,"sub",FUN_10a48b70c,2,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f659760,FUN_10a48b7c0,2,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f659799,FUN_10a48b8a4,2,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f49168a,FUN_10a48b958,1,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&DAT_10f2da2c7,FUN_10a48baa0,1,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f49189e,FUN_10a48bb70,1,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f4916a0,FUN_10a48bc74,2,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f6598c1,FUN_10a48be40,2,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f6598cf,FUN_10a48bf80,2,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f6598e1,FUN_10a48c034,2,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f65979d,FUN_10a48c138,2,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f6598f0,FUN_10a48c258,1,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&DAT_10f648172,FUN_10a48c328,1,*(undefined8 *)(param_1 + 0x40));
        }
        uVar9 = param_1;
        FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a45dad4;
          FUN_10a054dac(param_1,&UNK_10f659903,FUN_10a48c3d4,1,*(undefined8 *)(param_1 + 0x40));
        }
        *(undefined **)(param_1 + 0x1b0) = puVar7;
        lVar5 = *(long *)(param_1 + 0x170);
        if (*(long *)(param_1 + 0x168) != lVar5) {
          uVar1 = *(undefined4 *)(lVar5 + -0x50);
          uVar3 = *(undefined4 *)(lVar5 + -0x4c);
          uVar2 = *(undefined4 *)(lVar5 + -0x48);
          uVar4 = *(undefined4 *)(lVar5 + -0x44);
          uVar6 = *(undefined4 *)(lVar5 + -0x18);
          *(long *)(param_1 + 0x170) = lVar5 + -0x68;
          uVar9 = param_1;
          FUN_10a0051e8(param_1,uVar1,uVar3,uVar6,uVar2,uVar4);
          if ((uVar9 & 1) == 0) {
            func_0x000109894f40(param_1,0);
            FUN_10a05431c(param_1);
          }
          FUN_10a003e74(param_1,&DAT_10f491408,4);
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659913,FUN_10a48c4a8,4,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f65991f,FUN_10a48c62c,4,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&DAT_10f2c6059,FUN_10a48c6d8,0,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&DAT_10f4b54a4,FUN_10a48c798,0,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659928,FUN_10a48c84c,3,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659930,FUN_10a48c9b0,3,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659675,FUN_10a48cb18,3,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f415471,FUN_10a48cbc4,4,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f638bea,FUN_10a48cdbc,6,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f65993a,FUN_10a48cfdc,1,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659947,FUN_10a48d148,1,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659951,FUN_10a48d258,1,*(long *)(param_1 + 0x18) + -8);
          }
          ppuStack_f0 = (undefined **)0x10f27d055;
          pcStack_d0 = "fromEulerX";
          uStack_c0 = 1;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x100000064;
          puStack_a8 = &UNK_10f65996c;
          uStack_a0 = 0x3e;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_98 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          uVar9 = param_1;
          pppuStack_c8 = &ppuStack_f0;
          FUN_10a460020(param_1,&pcStack_d0);
          ppuStack_f0 = (undefined **)0x10f27d055;
          pcStack_d0 = "fromEulerY";
          uStack_c0 = 1;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x100000064;
          puStack_a8 = &UNK_10f6599b6;
          uStack_a0 = 0x3e;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_98 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a460088();
          ppuStack_f0 = (undefined **)0x10f27d055;
          pcStack_d0 = "fromEulerZ";
          uStack_c0 = 1;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x100000064;
          puStack_a8 = &UNK_10f659a00;
          uStack_a0 = 0x3e;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_98 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a4600f0();
          ppuStack_f0 = (undefined **)&UNK_10f659a3f;
          pcStack_d0 = "fromEulerAngles";
          uStack_c0 = 1;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x100000064;
          puStack_a8 = &UNK_10f659a46;
          uStack_a0 = 0x42;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_98 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a460158();
          ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
          pcStack_e8 = "b";
          pcStack_d0 = "add";
          uStack_c0 = 2;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x800000064;
          uStack_a0 = 0;
          puStack_a8 = (undefined *)0x0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a4601c0();
          ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
          pcStack_e8 = "b";
          pcStack_d0 = "sub";
          uStack_c0 = 2;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x800000064;
          uStack_a0 = 0;
          puStack_a8 = (undefined *)0x0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a460228();
          ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
          pcStack_e8 = "b";
          pcStack_d0 = "mul";
          uStack_c0 = 2;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x800000064;
          puStack_a8 = &UNK_10f659765;
          uStack_a0 = 0x33;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_98 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a460290();
          ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
          pcStack_e8 = "b";
          pcStack_d0 = "div";
          uStack_c0 = 2;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x800000064;
          uStack_a0 = 0;
          puStack_a8 = (undefined *)0x0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a4602f8();
          FUN_10a0051e8();
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659a89,FUN_10a48dae8,2,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f49179b,FUN_10a48db94,2,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659a92,FUN_10a48dd88,1,*(long *)(param_1 + 0x18) + -8);
          }
          ppuStack_f0 = (undefined **)&UNK_10f6590db;
          pcStack_d0 = "fromYawPitchRoll";
          uStack_c0 = 1;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x200000064;
          puStack_a8 = &UNK_10f659ab6;
          uStack_a0 = 0x89;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_98 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a460360(param_1,&pcStack_d0);
          func_0x00010a004064();
          ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
          pcStack_e8 = "b";
          pcStack_d0 = "mat4Add";
          uStack_c0 = 2;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x200000019;
          uStack_a0 = 0;
          puStack_a8 = (undefined *)0x0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          uVar9 = param_1;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a4601c0(param_1,&pcStack_d0);
          ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
          pcStack_e8 = "b";
          pcStack_d0 = "mat4Sub";
          uStack_c0 = 2;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x200000019;
          puStack_a8 = &UNK_10f659825;
          uStack_a0 = 0x35;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_98 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a460228();
          ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
          pcStack_e8 = "b";
          pcStack_d0 = "mat4Mul";
          uStack_c0 = 2;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x200000019;
          uStack_a0 = 0;
          puStack_a8 = (undefined *)0x0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a460290();
          ppuStack_f0 = (undefined **)&DAT_10f3dc16b;
          pcStack_e8 = "b";
          pcStack_d0 = "mat4Div";
          uStack_c0 = 2;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x200000019;
          uStack_a0 = 0;
          puStack_a8 = (undefined *)0x0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a4602f8();
          FUN_10a0051e8();
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659b60,FUN_10a48dfa4,1,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659b6c,FUN_10a48e0b4,1,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659b7c,FUN_10a48e1f8,1,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659b8a,FUN_10a48e2a4,2,*(long *)(param_1 + 0x18) + -8);
          }
          uVar9 = param_1;
          FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659b9d,FUN_10a48e350,2,*(long *)(param_1 + 0x18) + -8);
          }
          ppuStack_f0 = (undefined **)0x10f27d055;
          pcStack_d0 = "eulerAngleX";
          uStack_c0 = 1;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x200000019;
          uStack_a0 = 0;
          puStack_a8 = (undefined *)0x0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          uVar9 = param_1;
          pppuStack_c8 = &ppuStack_f0;
          FUN_10a460020(param_1,&pcStack_d0);
          ppuStack_f0 = (undefined **)0x10f27d055;
          pcStack_d0 = "eulerAngleY";
          uStack_c0 = 1;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x200000019;
          uStack_a0 = 0;
          puStack_a8 = (undefined *)0x0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a460088();
          ppuStack_f0 = (undefined **)0x10f27d055;
          pcStack_d0 = "eulerAngleZ";
          uStack_c0 = 1;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x200000019;
          uStack_a0 = 0;
          puStack_a8 = (undefined *)0x0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a4600f0();
          ppuStack_f0 = (undefined **)&UNK_10f6590db;
          pcStack_d0 = "eulerAngleYXZ";
          uStack_c0 = 1;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x200000019;
          uStack_a0 = 0;
          puStack_a8 = (undefined *)0x0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a460158();
          ppuStack_f0 = (undefined **)&UNK_10f6590db;
          pcStack_d0 = "yawPitchRoll";
          uStack_c0 = 1;
          uStack_b0 = 0xffffffffffffffff;
          uStack_b8 = 0x200000019;
          uStack_a0 = 0;
          puStack_a8 = (undefined *)0x0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_70 = 0;
          pppuStack_c8 = &ppuStack_f0;
          func_0x00010a460360();
          FUN_10a0051e8();
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a45dad4;
            FUN_10a054dac(param_1,&UNK_10f659bed,FUN_10a48e3fc,1,*(long *)(param_1 + 0x18) + -8);
          }
          return;
        }
      }
    }
  }
LAB_10a45dad4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a45dad8);
  (*pcVar8)();
}



/* Entry: 10a45dad8; end: 10a45dc27;  */

void FUN_10a45dad8(undefined8 param_1,undefined4 *param_2)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f65a2dc,4);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*param_2);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_2[1]);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_2[2]);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(param_2[3]);
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a45dc28; end: 10a45dc67;  */

float FUN_10a45dc28(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0 - param_1[3] * param_1[3];
  fVar1 = 0.0;
  if (0.0 < fVar2) {
    fVar1 = (1.0 / SQRT(fVar2)) * *param_1;
  }
  return fVar1;
}



/* Entry: 10a45dc68; end: 10a45de0b;  */

float FUN_10a45dc68(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float afStack_5c [3];
  
  fVar12 = param_1[2];
  fVar7 = param_1[3];
  fVar5 = fVar7 * fVar7;
  fVar8 = *param_1;
  fVar11 = param_1[1];
  fVar6 = fVar8 * fVar8;
  fVar14 = fVar11 * fVar11;
  fVar9 = fVar12 * fVar12;
  fVar10 = fVar5 + fVar6 + fVar14 + fVar9;
  fVar13 = fVar7 * fVar12 + fVar11 * fVar8;
  if (fVar13 <= fVar10 * 0.4999) {
    if (fVar10 * -0.4999 <= fVar13) {
      fVar4 = fVar8 * -2.0 * fVar12 + fVar7 * (fVar11 + fVar11);
      _atan2f(fVar4,fVar5 + ((fVar6 - fVar14) - fVar9));
      fVar10 = (fVar13 + fVar13) / fVar10;
      _asinf();
      fVar8 = fVar11 * -2.0 * fVar12 + fVar7 * (fVar8 + fVar8);
      _atan2f(fVar8,fVar5 + ((fVar14 - fVar6) - fVar9));
    }
    else {
      _atan2f(fVar8,fVar7);
      fVar4 = fVar8 * -2.0;
      fVar8 = 0.0;
      fVar10 = -1.5707964;
    }
  }
  else {
    _atan2f(fVar8,fVar7);
    fVar4 = fVar8 + fVar8;
    fVar8 = 0.0;
    fVar10 = 1.5707964;
  }
  iVar3 = 0;
  afStack_5c[1] = fVar4;
  afStack_5c[2] = fVar10;
  afStack_5c[0] = fVar8;
  do {
    pfVar1 = afStack_5c + 2;
    if (iVar3 == 1) {
      pfVar1 = afStack_5c + 1;
    }
    pfVar2 = afStack_5c;
    if (iVar3 != 2) {
      pfVar2 = pfVar1;
    }
    if (*pfVar2 < 0.0) {
      pfVar1 = afStack_5c + 2;
      if (iVar3 == 1) {
        pfVar1 = afStack_5c + 1;
      }
      pfVar2 = afStack_5c;
      if (iVar3 != 2) {
        pfVar2 = pfVar1;
      }
      *pfVar2 = *pfVar2 + 6.2831855;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  return afStack_5c[2];
}



/* Entry: 10a45de0c; end: 10a45dfcf;  */

float FUN_10a45de0c(float param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  
  fVar8 = (float)*param_2;
  fVar9 = (float)*param_3;
  fVar2 = fVar8 * fVar9;
  fVar3 = (float)((ulong)*param_2 >> 0x20) * (float)((ulong)*param_3 >> 0x20);
  fVar4 = (float)param_2[1] * (float)param_3[1];
  fVar5 = (float)((ulong)param_2[1] >> 0x20) * (float)((ulong)param_3[1] >> 0x20);
  auVar7._4_4_ = fVar3;
  auVar7._0_4_ = fVar2;
  auVar7._8_4_ = fVar4;
  auVar7._12_4_ = fVar5;
  auVar1._4_4_ = fVar3;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar4;
  auVar1._12_4_ = fVar5;
  auVar7 = NEON_ext(auVar7,auVar1,8,1);
  uVar6 = NEON_rev64(auVar7._0_8_,4);
  fVar2 = fVar2 + (float)uVar6 + fVar3 + (float)((ulong)uVar6 >> 0x20);
  if (fVar2 <= 0.9999999) {
    _acosf();
    fVar3 = (1.0 - param_1) * fVar2;
    _sinf();
    param_1 = param_1 * fVar2;
    _sinf();
    _sinf(fVar2);
    fVar2 = (fVar8 * fVar3 + fVar9 * param_1) / fVar2;
  }
  else {
    fVar2 = fVar9 * param_1 + fVar8 * (1.0 - param_1);
  }
  return fVar2;
}



/* Entry: 10a45dfd0; end: 10a45e09f;  */

ulong FUN_10a45dfd0(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a45e038);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a48678c,2,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a45e0a0; end: 10a45e2a7;  */

void FUN_10a45e0a0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long alStack_e8 [3];
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long alStack_98 [2];
  char cStack_81;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uStack_a8 = (undefined4)param_2[1];
  uStack_a4 = (undefined4)((ulong)param_2[1] >> 0x20);
  uStack_b0 = (undefined4)*param_2;
  uStack_ac = (undefined4)((ulong)*param_2 >> 0x20);
  uVar9 = NEON_rev64(CONCAT44(uStack_a8,uStack_ac),4);
  uStack_ac = (undefined4)uVar9;
  uStack_a8 = (undefined4)((ulong)uVar9 >> 0x20);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar8 = &uStack_b0;
  bVar3 = true;
  do {
    bVar6 = bVar3;
    lVar5 = 0;
    alStack_e8[0] = 0;
    alStack_e8[1] = 0;
    alStack_e8[2] = 0;
    bVar3 = true;
    do {
      bVar7 = bVar3;
      __ZNSt3__19to_stringEf(alStack_98,*(undefined4 *)((long)puVar8 + lVar5));
      plVar4 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(plVar4," ",1);
      uStack_78 = plVar4[1];
      ppuStack_80 = (undefined8 **)*plVar4;
      uStack_70 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_78;
      pppuVar2 = (undefined8 ***)ppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar1 = uStack_70 >> 0x38;
        pppuVar2 = &ppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (alStack_e8,pppuVar2,uVar1);
      if ((long)uStack_70 < 0) {
        __ZdlPv(ppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      lVar5 = 4;
      bVar3 = false;
    } while (bVar7);
    plVar4 = alStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar4,0,&DAT_10f68f57e,1);
    uStack_c8 = plVar4[1];
    ppuStack_d0 = (undefined8 **)*plVar4;
    uStack_c0 = plVar4[2];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    uVar1 = uStack_c8;
    pppuVar2 = (undefined8 ***)ppuStack_d0;
    if (-1 < (long)uStack_c0) {
      uVar1 = uStack_c0 >> 0x38;
      pppuVar2 = &ppuStack_d0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppuVar2,uVar1);
    if ((long)uStack_c0 < 0) {
      __ZdlPv(ppuStack_d0);
    }
    if (alStack_e8[2] < 0) {
      __ZdlPv(alStack_e8[0]);
    }
    puVar8 = (undefined4 *)((ulong)&uStack_b0 | 8);
    bVar3 = false;
  } while (bVar6);
  return;
}



/* Entry: 10a45e2a8; end: 10a45e377;  */

float FUN_10a45e2a8(float *param_1,float *param_2)

{
  return *param_1 + *param_2;
}



/* Entry: 10a45e378; end: 10a45e4eb;  */

void FUN_10a45e378(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined **appuStack_180 [2];
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [19];
  undefined1 uStack_61;
  
  FUN_109febc44(appuStack_180);
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar2 = bVar1;
    FUN_10a002568(&ppuStack_170,&DAT_10f62a9e8,1);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
              (*(undefined4 *)(param_2 + lVar3 * 8),&ppuStack_170);
    FUN_10a002568();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
              (*(undefined4 *)(param_2 + lVar3 * 8 + 4),&ppuStack_170);
    FUN_10a002568();
    lVar3 = 1;
    bVar1 = false;
  } while (bVar2);
  func_0x00010a002480(param_1,&ppuStack_168,&uStack_61);
  appuStack_180[0] = &PTR_SUB_1108a5a38;
  ppuStack_170 = &PTR_DAT_1108a5a60;
  appuStack_100[0] = &PTR_DAT_1108a5a88;
  ppuStack_168 = &PTR_DAT_11088d7b0;
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
  ppuStack_168 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_160);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_180,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
  return;
}



/* Entry: 10a45e4ec; end: 10a45e5bb;  */

float FUN_10a45e4ec(float *param_1,float *param_2)

{
  return *param_1 + *param_2;
}



/* Entry: 10a45e5bc; end: 10a45e75b;  */

ulong FUN_10a45e5bc(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a45e624);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a488c20,2,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a45e75c; end: 10a45e99f;  */

/* WARNING: Removing unreachable block (ram,0x00010a45e870) */

void FUN_10a45e75c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  long alStack_f8 [3];
  undefined8 ****ppppuStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined4 auStack_c0 [2];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 ****ppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar8 = 0;
  uStack_a0 = *(undefined4 *)(param_2 + 4);
  uStack_a8._4_4_ = (undefined4)((ulong)param_2[3] >> 0x20);
  auStack_c0[1] = (undefined4)((ulong)*param_2 >> 0x20);
  uVar3 = auStack_c0[1];
  uStack_b8._4_4_ = (undefined4)((ulong)param_2[1] >> 0x20);
  uStack_ac = (undefined4)((ulong)param_2[2] >> 0x20);
  uVar4 = uStack_ac;
  auStack_c0[0] = (undefined4)*param_2;
  auStack_c0[1] = uStack_b8._4_4_;
  uStack_b8 = CONCAT44(uVar3,(int)param_2[3]);
  _uStack_b0 = CONCAT44(uStack_a8._4_4_,(int)param_2[2]);
  uStack_a8 = CONCAT44(uVar4,(int)param_2[1]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    iVar9 = 0;
    alStack_f8[0] = 0;
    alStack_f8[1] = 0;
    alStack_f8[2] = 0;
    do {
      puVar7 = (undefined4 *)((long)&uStack_b8 + lVar8 * 0xc);
      if ((iVar9 != 2) && (puVar7 = auStack_c0 + lVar8 * 3, iVar9 == 1)) {
        puVar7 = auStack_c0 + lVar8 * 3 + 1;
      }
      __ZNSt3__19to_stringEf(auStack_98,*puVar7);
      puVar5 = auStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar5," ",1);
      uStack_78 = puVar5[1];
      ppppuStack_80 = (undefined8 ****)*puVar5;
      uStack_70 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      uVar1 = uStack_78;
      pppppuVar2 = (undefined8 *****)ppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar1 = uStack_70 >> 0x38;
        pppppuVar2 = &ppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (alStack_f8,pppppuVar2,uVar1);
      if (cStack_81 < '\0') {
        __ZdlPv(auStack_98[0]);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 3);
    plVar6 = alStack_f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar6,0,&DAT_10f68f57e,1);
    uStack_d8 = plVar6[1];
    ppppuStack_e0 = (undefined8 ****)*plVar6;
    uStack_d0 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar1 = uStack_d8;
    pppppuVar2 = (undefined8 *****)ppppuStack_e0;
    if (-1 < (long)uStack_d0) {
      uVar1 = uStack_d0 >> 0x38;
      pppppuVar2 = &ppppuStack_e0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppuVar2,uVar1);
    if ((long)uStack_d0 < 0) {
      __ZdlPv(ppppuStack_e0);
    }
    if (alStack_f8[2] < 0) {
      __ZdlPv(alStack_f8[0]);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 3);
  return;
}



/* Entry: 10a45e9a0; end: 10a45eabb;  */

void FUN_10a45e9a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_3 + 4);
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar6 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  param_1[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) + (float)((ulong)param_3[1] >> 0x20),
                        (float)param_2[1] + (float)param_3[1]);
  *param_1 = CONCAT44((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                      (float)uVar3 + (float)uVar6);
  param_1[3] = CONCAT44((float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar8 >> 0x20),
                        (float)uVar5 + (float)uVar8);
  param_1[2] = CONCAT44((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar7 >> 0x20),
                        (float)uVar4 + (float)uVar7);
  *(float *)(param_1 + 4) = fVar1 + fVar2;
  return;
}



/* Entry: 10a45eabc; end: 10a45ebef;  */

void FUN_10a45eabc(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar4 = *param_2;
  fVar3 = param_2[1];
  fVar2 = param_2[2];
  fVar8 = param_2[3];
  fVar6 = param_2[4];
  fVar5 = param_2[5];
  fVar9 = param_2[6];
  fVar7 = param_2[7];
  fVar1 = param_2[8];
  fVar13 = param_3[7];
  fVar10 = param_3[8];
  fVar11 = param_3[4];
  fVar12 = param_3[5];
  fVar14 = param_3[6];
  fVar15 = -(fVar13 * fVar12) + fVar10 * fVar11;
  fVar16 = *param_3;
  fVar17 = param_3[1];
  fVar19 = param_3[2];
  fVar18 = param_3[3];
  fVar20 = -(fVar13 * fVar19) + fVar10 * fVar17;
  fVar22 = -(fVar11 * fVar19) + fVar12 * fVar17;
  fVar21 = 1.0 / (-(fVar18 * fVar20) + fVar15 * fVar16 + fVar22 * fVar14);
  fVar15 = fVar15 * fVar21;
  fVar23 = -((-(fVar14 * fVar12) + fVar10 * fVar18) * fVar21);
  fVar24 = (-(fVar14 * fVar11) + fVar13 * fVar18) * fVar21;
  fVar20 = -(fVar20 * fVar21);
  fVar10 = (-(fVar14 * fVar19) + fVar10 * fVar16) * fVar21;
  fVar13 = -((-(fVar14 * fVar17) + fVar13 * fVar16) * fVar21);
  fVar22 = fVar22 * fVar21;
  fVar12 = -((-(fVar18 * fVar19) + fVar12 * fVar16) * fVar21);
  fVar21 = (-(fVar18 * fVar17) + fVar11 * fVar16) * fVar21;
  *param_1 = fVar8 * fVar20 + fVar15 * fVar4 + fVar22 * fVar9;
  param_1[1] = fVar6 * fVar20 + fVar15 * fVar3 + fVar22 * fVar7;
  param_1[2] = fVar5 * fVar20 + fVar15 * fVar2 + fVar22 * fVar1;
  param_1[3] = fVar8 * fVar10 + fVar23 * fVar4 + fVar12 * fVar9;
  param_1[4] = fVar6 * fVar10 + fVar23 * fVar3 + fVar12 * fVar7;
  param_1[5] = fVar5 * fVar10 + fVar23 * fVar2 + fVar12 * fVar1;
  param_1[6] = fVar8 * fVar13 + fVar24 * fVar4 + fVar21 * fVar9;
  param_1[7] = fVar6 * fVar13 + fVar24 * fVar3 + fVar21 * fVar7;
  param_1[8] = fVar5 * fVar13 + fVar24 * fVar2 + fVar21 * fVar1;
  return;
}



/* Entry: 10a45ebf0; end: 10a45ed77;  */

void FUN_10a45ebf0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined **appuStack_188 [2];
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined1 auStack_168 [56];
  undefined8 uStack_130;
  char cStack_119;
  undefined **appuStack_108 [19];
  undefined1 auStack_69 [9];
  
  FUN_109febc44(appuStack_188);
  lVar4 = 0;
  do {
    FUN_10a002568(&ppuStack_178,&DAT_10f62a9e8,1);
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                (*(undefined4 *)(param_2 + lVar4 * 0xc + lVar2),&ppuStack_178);
      FUN_10a002568();
      lVar2 = 4;
      bVar1 = false;
    } while (bVar3);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
              (*(undefined4 *)(param_2 + lVar4 * 0xc + 8),&ppuStack_178);
    FUN_10a002568();
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  func_0x00010a002480(param_1,&ppuStack_170,auStack_69);
  appuStack_188[0] = &PTR_SUB_1108a5a38;
  ppuStack_178 = &PTR_DAT_1108a5a60;
  appuStack_108[0] = &PTR_DAT_1108a5a88;
  ppuStack_170 = &PTR_DAT_11088d7b0;
  if (cStack_119 < '\0') {
    __ZdlPv(uStack_130);
  }
  ppuStack_170 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_168);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_188,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_108);
  return;
}



/* Entry: 10a45ed78; end: 10a45eea3;  */

void FUN_10a45ed78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_3 + 4);
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar6 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  param_1[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) + (float)((ulong)param_3[1] >> 0x20),
                        (float)param_2[1] + (float)param_3[1]);
  *param_1 = CONCAT44((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                      (float)uVar3 + (float)uVar6);
  param_1[3] = CONCAT44((float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar8 >> 0x20),
                        (float)uVar5 + (float)uVar8);
  param_1[2] = CONCAT44((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar7 >> 0x20),
                        (float)uVar4 + (float)uVar7);
  *(float *)(param_1 + 4) = fVar1 + fVar2;
  return;
}



/* Entry: 10a45eea4; end: 10a45efd7;  */

void FUN_10a45eea4(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar4 = *param_2;
  fVar3 = param_2[1];
  fVar2 = param_2[2];
  fVar8 = param_2[3];
  fVar6 = param_2[4];
  fVar5 = param_2[5];
  fVar9 = param_2[6];
  fVar7 = param_2[7];
  fVar1 = param_2[8];
  fVar13 = param_3[7];
  fVar10 = param_3[8];
  fVar11 = param_3[4];
  fVar12 = param_3[5];
  fVar14 = param_3[6];
  fVar15 = -(fVar13 * fVar12) + fVar10 * fVar11;
  fVar16 = *param_3;
  fVar17 = param_3[1];
  fVar19 = param_3[2];
  fVar18 = param_3[3];
  fVar20 = -(fVar13 * fVar19) + fVar10 * fVar17;
  fVar22 = -(fVar11 * fVar19) + fVar12 * fVar17;
  fVar21 = 1.0 / (-(fVar18 * fVar20) + fVar15 * fVar16 + fVar22 * fVar14);
  fVar15 = fVar15 * fVar21;
  fVar23 = -((-(fVar14 * fVar12) + fVar10 * fVar18) * fVar21);
  fVar24 = (-(fVar14 * fVar11) + fVar13 * fVar18) * fVar21;
  fVar20 = -(fVar20 * fVar21);
  fVar10 = (-(fVar14 * fVar19) + fVar10 * fVar16) * fVar21;
  fVar13 = -((-(fVar14 * fVar17) + fVar13 * fVar16) * fVar21);
  fVar22 = fVar22 * fVar21;
  fVar12 = -((-(fVar18 * fVar19) + fVar12 * fVar16) * fVar21);
  fVar21 = (-(fVar18 * fVar17) + fVar11 * fVar16) * fVar21;
  *param_1 = fVar8 * fVar20 + fVar15 * fVar4 + fVar22 * fVar9;
  param_1[1] = fVar6 * fVar20 + fVar15 * fVar3 + fVar22 * fVar7;
  param_1[2] = fVar5 * fVar20 + fVar15 * fVar2 + fVar22 * fVar1;
  param_1[3] = fVar8 * fVar10 + fVar23 * fVar4 + fVar12 * fVar9;
  param_1[4] = fVar6 * fVar10 + fVar23 * fVar3 + fVar12 * fVar7;
  param_1[5] = fVar5 * fVar10 + fVar23 * fVar2 + fVar12 * fVar1;
  param_1[6] = fVar8 * fVar13 + fVar24 * fVar4 + fVar21 * fVar9;
  param_1[7] = fVar6 * fVar13 + fVar24 * fVar3 + fVar21 * fVar7;
  param_1[8] = fVar5 * fVar13 + fVar24 * fVar2 + fVar21 * fVar1;
  return;
}



/* Entry: 10a45efd8; end: 10a45f0ff;  */

void FUN_10a45efd8(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar4 = param_2[7];
  fVar2 = param_2[8];
  fVar1 = param_2[4];
  fVar3 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = -(fVar4 * fVar3) + fVar2 * fVar1;
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar10 = param_2[2];
  fVar9 = param_2[3];
  fVar12 = -(fVar1 * fVar10) + fVar3 * fVar8;
  fVar11 = 1.0 / (-(fVar9 * (-(fVar4 * fVar10) + fVar2 * fVar8)) + fVar6 * fVar7 + fVar12 * fVar5);
  param_1[1] = CONCAT44((-(fVar9 * fVar2) - -(fVar5 * fVar3)) * fVar11,fVar12 * fVar11);
  *param_1 = CONCAT44((-(fVar8 * fVar2) - -(fVar4 * fVar10)) * fVar11,fVar6 * fVar11);
  param_1[3] = CONCAT44((-(fVar7 * fVar4) - -(fVar5 * fVar8)) * fVar11,
                        (-(fVar5 * fVar1) + fVar4 * fVar9) * fVar11);
  param_1[2] = CONCAT44((-(fVar7 * fVar3) - -(fVar9 * fVar10)) * fVar11,
                        (-(fVar5 * fVar10) + fVar2 * fVar7) * fVar11);
  *(float *)(param_1 + 4) = (-(fVar9 * fVar8) + fVar1 * fVar7) * fVar11;
  return;
}



/* Entry: 10a45f100; end: 10a45f29f;  */

ulong FUN_10a45f100(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a45f168);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a48a450,2,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a45f2a0; end: 10a45f2ff;  */

void FUN_10a45f2a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = *param_4;
  uVar9 = param_4[1];
  uVar10 = param_4[2];
  uVar11 = param_4[3];
  uVar12 = *param_5;
  uVar13 = param_5[1];
  uVar14 = param_5[2];
  uVar15 = param_5[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar8;
  param_1[3] = uVar12;
  param_1[4] = uVar1;
  param_1[5] = uVar5;
  param_1[6] = uVar9;
  param_1[7] = uVar13;
  param_1[8] = uVar2;
  param_1[9] = uVar6;
  param_1[10] = uVar10;
  param_1[0xb] = uVar14;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar7;
  param_1[0xe] = uVar11;
  param_1[0xf] = uVar15;
  return;
}



/* Entry: 10a45f300; end: 10a45f55f;  */

/* WARNING: Removing unreachable block (ram,0x00010a45f42c) */

void FUN_10a45f300(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  int iVar13;
  long alStack_118 [3];
  undefined8 ***pppuStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined4 auStack_e0 [2];
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar12 = 0;
  uStack_c0._4_4_ = (undefined4)((ulong)param_2[4] >> 0x20);
  auStack_e0[1] = (undefined4)((ulong)*param_2 >> 0x20);
  uVar4 = auStack_e0[1];
  uStack_ac = (undefined4)((ulong)param_2[6] >> 0x20);
  uStack_a8 = (undefined4)param_2[7];
  uStack_d8._4_4_ = (undefined4)((ulong)param_2[1] >> 0x20);
  uVar5 = uStack_d8._4_4_;
  uStack_d0 = (undefined4)param_2[2];
  uStack_c8 = (undefined4)param_2[3];
  uVar6 = uStack_c8;
  uStack_c4 = (undefined4)((ulong)param_2[3] >> 0x20);
  uVar7 = uStack_c4;
  uStack_b4 = (undefined4)((ulong)param_2[5] >> 0x20);
  uVar8 = uStack_b4;
  uStack_b0 = (undefined4)param_2[6];
  auStack_e0[0] = (undefined4)*param_2;
  auStack_e0[1] = uStack_d0;
  uStack_d8 = CONCAT44(uStack_b0,(int)param_2[4]);
  _uStack_d0 = CONCAT44((int)((ulong)param_2[2] >> 0x20),uVar4);
  _uStack_c8 = CONCAT44(uStack_ac,uStack_c0._4_4_);
  uStack_c0 = CONCAT44(uVar6,(int)param_2[1]);
  _uStack_b8 = CONCAT44(uStack_a8,(int)param_2[5]);
  _uStack_b0 = CONCAT44(uVar7,uVar5);
  _uStack_a8 = CONCAT44((int)((ulong)param_2[7] >> 0x20),uVar8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    iVar13 = 0;
    puVar1 = auStack_e0 + lVar12 * 4;
    alStack_118[0] = 0;
    alStack_118[1] = 0;
    alStack_118[2] = 0;
    do {
      puVar11 = (undefined4 *)((ulong)puVar1 | 0xc);
      if (((iVar13 != 3) && (puVar11 = (undefined4 *)((ulong)puVar1 | 8), iVar13 != 2)) &&
         (puVar11 = puVar1, iVar13 == 1)) {
        puVar11 = (undefined4 *)((ulong)puVar1 | 4);
      }
      __ZNSt3__19to_stringEf(auStack_98,*puVar11);
      puVar9 = auStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9," ",1);
      uStack_78 = puVar9[1];
      pppuStack_80 = (undefined8 ***)*puVar9;
      uStack_70 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      uVar2 = uStack_78;
      ppppuVar3 = (undefined8 ****)pppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar2 = uStack_70 >> 0x38;
        ppppuVar3 = &pppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (alStack_118,ppppuVar3,uVar2);
      if (cStack_81 < '\0') {
        __ZdlPv(auStack_98[0]);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 4);
    plVar10 = alStack_118;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar10,0,&DAT_10f68f57e,1);
    uStack_f8 = plVar10[1];
    pppuStack_100 = (undefined8 ***)*plVar10;
    uStack_f0 = plVar10[2];
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = 0;
    uVar2 = uStack_f8;
    ppppuVar3 = (undefined8 ****)pppuStack_100;
    if (-1 < (long)uStack_f0) {
      uVar2 = uStack_f0 >> 0x38;
      ppppuVar3 = &pppuStack_100;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,ppppuVar3,uVar2);
    if ((long)uStack_f0 < 0) {
      __ZdlPv(pppuStack_100);
    }
    if (alStack_118[2] < 0) {
      __ZdlPv(alStack_118[0]);
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 4);
  return;
}



/* Entry: 10a45f560; end: 10a45f5b7;  */

void FUN_10a45f560(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  uVar4 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  param_1[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) + (float)((ulong)param_3[1] >> 0x20),
                        (float)param_2[1] + (float)param_3[1]);
  *param_1 = CONCAT44((float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar4 >> 0x20),
                      (float)uVar1 + (float)uVar4);
  param_1[3] = CONCAT44((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                        (float)uVar3 + (float)uVar6);
  param_1[2] = CONCAT44((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar5 >> 0x20),
                        (float)uVar2 + (float)uVar5);
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  uVar4 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  param_1[5] = CONCAT44((float)((ulong)param_2[5] >> 0x20) + (float)((ulong)param_3[5] >> 0x20),
                        (float)param_2[5] + (float)param_3[5]);
  param_1[4] = CONCAT44((float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar4 >> 0x20),
                        (float)uVar1 + (float)uVar4);
  param_1[7] = CONCAT44((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                        (float)uVar3 + (float)uVar6);
  param_1[6] = CONCAT44((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar5 >> 0x20),
                        (float)uVar2 + (float)uVar5);
  return;
}



/* Entry: 10a45f5b8; end: 10a45f61f;  */

void FUN_10a45f5b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [64];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  func_0x0001094f5708(auStack_a0,param_3);
  func_0x000109519fd0(&uStack_60,&uStack_e0,auStack_a0);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  param_1[7] = uStack_28;
  param_1[6] = uStack_30;
  return;
}



/* Entry: 10a45f620; end: 10a45f7af;  */

void FUN_10a45f620(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined **appuStack_188 [2];
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined1 auStack_168 [56];
  undefined8 uStack_130;
  char cStack_119;
  undefined **appuStack_108 [19];
  undefined1 auStack_69 [9];
  
  FUN_109febc44(appuStack_188);
  lVar4 = 0;
  do {
    FUN_10a002568(&ppuStack_178,&DAT_10f62a9e8,1);
    iVar5 = 0;
    puVar1 = (undefined4 *)(param_2 + lVar4 * 0x10);
    do {
      puVar2 = puVar1;
      if (iVar5 == 1) {
        puVar2 = puVar1 + 1;
      }
      puVar3 = puVar1 + 2;
      if (iVar5 != 2) {
        puVar3 = puVar2;
      }
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*puVar3,&ppuStack_178);
      FUN_10a002568();
      iVar5 = iVar5 + 1;
    } while (iVar5 != 3);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(puVar1[3],&ppuStack_178);
    FUN_10a002568();
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  func_0x00010a002480(param_1,&ppuStack_170,auStack_69);
  appuStack_188[0] = &PTR_SUB_1108a5a38;
  ppuStack_178 = &PTR_DAT_1108a5a60;
  appuStack_108[0] = &PTR_DAT_1108a5a88;
  ppuStack_170 = &PTR_DAT_11088d7b0;
  if (cStack_119 < '\0') {
    __ZdlPv(uStack_130);
  }
  ppuStack_170 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_168);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_188,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_108);
  return;
}



/* Entry: 10a45f7b0; end: 10a45f933;  */

void FUN_10a45f7b0(undefined8 *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  float fStack_28;
  float fStack_24;
  
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_60 = 0x3f800000;
  uStack_4c = 0x3f800000;
  uStack_48 = 0;
  uStack_40 = 0;
  fVar2 = *(float *)(param_2 + 1) * 0.0;
  fVar1 = (float)*param_2;
  fVar4 = fVar1 * 0.0;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar5 = fVar3 * 0.0;
  uVar6 = NEON_rev64(CONCAT44(fVar5,fVar4),4);
  fVar4 = fVar4 + fVar5;
  uStack_30 = CONCAT44(fVar3 + (float)((ulong)uVar6 >> 0x20) + fVar2 + 0.0,
                       fVar1 + (float)uVar6 + fVar2 + 0.0);
  uStack_38 = 0x3f800000;
  _fStack_28 = CONCAT44(fVar4 + fVar2 + 1.0,*(float *)(param_2 + 1) + fVar4 + 0.0);
  fVar2 = *param_3;
  fVar1 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fStack_e0 = (fVar1 * fVar1 + fVar3 * fVar3) * -2.0 + 1.0;
  fStack_dc = fVar2 * fVar1 + fVar3 * fVar4;
  fStack_dc = fStack_dc + fStack_dc;
  fStack_d8 = fVar2 * fVar3 - fVar1 * fVar4;
  fStack_d8 = fStack_d8 + fStack_d8;
  fStack_d0 = fVar2 * fVar1 - fVar3 * fVar4;
  fStack_d0 = fStack_d0 + fStack_d0;
  fStack_cc = (fVar2 * fVar2 + fVar3 * fVar3) * -2.0 + 1.0;
  fStack_c8 = fVar1 * fVar3 + fVar2 * fVar4;
  fStack_c8 = fStack_c8 + fStack_c8;
  fStack_c0 = fVar2 * fVar3 + fVar1 * fVar4;
  fStack_c0 = fStack_c0 + fStack_c0;
  fStack_bc = fVar1 * fVar3 - fVar2 * fVar4;
  fStack_bc = fStack_bc + fStack_bc;
  uStack_d4 = 0;
  uStack_c4 = 0;
  fStack_b8 = (fVar2 * fVar2 + fVar1 * fVar1) * -2.0 + 1.0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_a4 = 0x3f800000;
  func_0x000109519fd0(auStack_a0,&uStack_60,&fStack_e0);
  fVar2 = (float)*param_4;
  fVar1 = (float)*(undefined8 *)((long)param_4 + 4);
  param_1[1] = CONCAT44(SUB84(auStack_a0._8_8_,4) * fVar2,(float)auStack_a0._8_8_ * fVar2);
  *param_1 = CONCAT44(SUB84(auStack_a0._0_8_,4) * fVar2,(float)auStack_a0._0_8_ * fVar2);
  param_1[3] = CONCAT44(SUB84(auStack_a0._24_8_,4) * fVar1,(float)auStack_a0._24_8_ * fVar1);
  param_1[2] = CONCAT44(SUB84(auStack_a0._16_8_,4) * fVar1,(float)auStack_a0._16_8_ * fVar1);
  fVar2 = *(float *)(param_4 + 1);
  param_1[5] = CONCAT44(SUB84(auStack_a0._40_8_,4) * fVar2,(float)auStack_a0._40_8_ * fVar2);
  param_1[4] = CONCAT44(SUB84(auStack_a0._32_8_,4) * fVar2,(float)auStack_a0._32_8_ * fVar2);
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}



/* Entry: 10a45f934; end: 10a45fb17;  */

void FUN_10a45f934(float *param_1,undefined8 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar4 = *param_3;
  fVar6 = param_3[1];
  fVar1 = *(float *)(param_2 + 1);
  fVar9 = param_3[2] - fVar1;
  fVar12 = param_4[1];
  fVar11 = param_4[2];
  fVar13 = *param_4;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  fVar2 = (float)*param_2;
  fVar4 = fVar4 - fVar2;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar6 = fVar6 - fVar3;
  fVar14 = 1.0 / SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar9 * fVar9);
  fVar5 = fVar4 * fVar14;
  fVar7 = fVar6 * fVar14;
  fVar8 = fVar9 * fVar14;
  fVar16 = -(fVar12 * fVar8) + fVar11 * fVar7;
  fVar11 = -(fVar11 * fVar5) + fVar13 * fVar8;
  fVar12 = -(fVar13 * fVar7) + fVar12 * fVar5;
  fVar13 = 1.0 / SQRT(fVar12 * fVar12 + fVar16 * fVar16 + fVar11 * fVar11);
  fVar16 = fVar16 * fVar13;
  fVar11 = fVar11 * fVar13;
  fVar12 = fVar12 * fVar13;
  fVar13 = -(fVar7 * fVar12) + fVar8 * fVar11;
  fVar17 = -(fVar8 * fVar16) + fVar5 * fVar12;
  fVar15 = -(fVar5 * fVar11) + fVar7 * fVar16;
  *param_1 = fVar16;
  param_1[1] = fVar13;
  param_1[4] = fVar11;
  param_1[5] = fVar17;
  param_1[8] = fVar12;
  param_1[9] = fVar15;
  param_1[2] = -(fVar4 * fVar14);
  param_1[6] = -(fVar6 * fVar14);
  param_1[10] = -(fVar9 * fVar14);
  uVar10 = NEON_rev64(CONCAT44(fVar3 * fVar11,fVar2 * fVar13),4);
  *(ulong *)(param_1 + 0xc) =
       CONCAT44(-(fVar15 * fVar1 + (float)((ulong)uVar10 >> 0x20) + fVar3 * fVar17),
                -(fVar12 * fVar1 + (float)uVar10 + fVar2 * fVar16));
  param_1[0xe] = fVar1 * fVar8 + fVar5 * fVar2 + fVar7 * fVar3;
  return;
}



/* Entry: 10a45fb18; end: 10a45fc13;  */

void FUN_10a45fb18(undefined4 *param_1,undefined8 param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = *param_4;
  ___sincosf_stret();
  *param_1 = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[5] = param_3;
  param_1[6] = fVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = -fVar1;
  param_1[10] = param_3;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0x3f800000;
  return;
}



/* Entry: 10a45fc14; end: 10a45fc6b;  */

void FUN_10a45fc14(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  uVar4 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  param_1[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) + (float)((ulong)param_3[1] >> 0x20),
                        (float)param_2[1] + (float)param_3[1]);
  *param_1 = CONCAT44((float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar4 >> 0x20),
                      (float)uVar1 + (float)uVar4);
  param_1[3] = CONCAT44((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                        (float)uVar3 + (float)uVar6);
  param_1[2] = CONCAT44((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar5 >> 0x20),
                        (float)uVar2 + (float)uVar5);
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  uVar4 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  param_1[5] = CONCAT44((float)((ulong)param_2[5] >> 0x20) + (float)((ulong)param_3[5] >> 0x20),
                        (float)param_2[5] + (float)param_3[5]);
  param_1[4] = CONCAT44((float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar4 >> 0x20),
                        (float)uVar1 + (float)uVar4);
  param_1[7] = CONCAT44((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                        (float)uVar3 + (float)uVar6);
  param_1[6] = CONCAT44((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar5 >> 0x20),
                        (float)uVar2 + (float)uVar5);
  return;
}



/* Entry: 10a45fc6c; end: 10a45fcd3;  */

void FUN_10a45fc6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [64];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  func_0x0001094f5708(auStack_a0,param_3);
  func_0x000109519fd0(&uStack_60,&uStack_e0,auStack_a0);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  param_1[7] = uStack_28;
  param_1[6] = uStack_30;
  return;
}



/* Entry: 10a45fcd4; end: 10a45ff0b;  */

void FUN_10a45fcd4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x3f800000;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uVar8 = param_3[4];
  uVar10 = param_3[7];
  uVar9 = param_3[6];
  uVar12 = param_3[1];
  uVar11 = *param_3;
  uVar14 = param_3[3];
  uVar13 = param_3[2];
  param_1[5] = CONCAT44((float)((ulong)param_2[5] >> 0x20) * (float)((ulong)param_3[5] >> 0x20),
                        (float)param_2[5] * (float)param_3[5]);
  param_1[4] = CONCAT44((float)((ulong)uVar1 >> 0x20) * (float)((ulong)uVar8 >> 0x20),
                        (float)uVar1 * (float)uVar8);
  param_1[7] = CONCAT44((float)((ulong)uVar3 >> 0x20) * (float)((ulong)uVar10 >> 0x20),
                        (float)uVar3 * (float)uVar10);
  param_1[6] = CONCAT44((float)((ulong)uVar2 >> 0x20) * (float)((ulong)uVar9 >> 0x20),
                        (float)uVar2 * (float)uVar9);
  param_1[1] = CONCAT44((float)((ulong)uVar5 >> 0x20) * (float)((ulong)uVar12 >> 0x20),
                        (float)uVar5 * (float)uVar12);
  *param_1 = CONCAT44((float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar11 >> 0x20),
                      (float)uVar4 * (float)uVar11);
  param_1[3] = CONCAT44((float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar14 >> 0x20),
                        (float)uVar7 * (float)uVar14);
  param_1[2] = CONCAT44((float)((ulong)uVar6 >> 0x20) * (float)((ulong)uVar13 >> 0x20),
                        (float)uVar6 * (float)uVar13);
  return;
}



/* Entry: 10a45ff0c; end: 10a46001f;  */

void FUN_10a45ff0c(float *param_1)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar3 = *param_1;
  fVar4 = param_1[5];
  fVar5 = param_1[10];
  fVar6 = (fVar3 - fVar4) - fVar5;
  fVar7 = (fVar4 - fVar3) - fVar5;
  fVar9 = (fVar5 - fVar3) - fVar4;
  fVar5 = fVar3 + fVar4 + fVar5;
  fVar3 = fVar6;
  if (fVar6 <= fVar5) {
    fVar3 = fVar5;
  }
  bVar1 = 2;
  if (fVar7 <= fVar3) {
    fVar7 = fVar3;
    bVar1 = fVar5 < fVar6;
  }
  bVar2 = 3;
  if (fVar9 <= fVar7) {
    fVar9 = fVar7;
    bVar2 = bVar1;
  }
  fVar5 = SQRT(fVar9 + 1.0) * 0.5;
  fVar3 = 0.25 / fVar5;
  fVar7 = (param_1[8] - param_1[2]) * fVar3;
  fVar6 = (param_1[1] + param_1[4]) * fVar3;
  fVar8 = (param_1[6] + param_1[9]) * fVar3;
  fVar9 = (param_1[1] - param_1[4]) * fVar3;
  fVar4 = (param_1[2] + param_1[8]) * fVar3;
  fStack_14 = fVar7;
  fStack_18 = fVar8;
  fStack_1c = fVar5;
  fStack_20 = fVar6;
  if (bVar2 != 2) {
    fStack_14 = fVar9;
    fStack_18 = fVar5;
    fStack_1c = fVar8;
    fStack_20 = fVar4;
  }
  fVar3 = (param_1[6] - param_1[9]) * fVar3;
  fVar8 = fVar5;
  if (bVar2 != 0) {
    fVar8 = fVar3;
    fVar9 = fVar4;
    fVar7 = fVar6;
    fVar3 = fVar5;
  }
  if (bVar2 < 2) {
    fStack_14 = fVar8;
    fStack_18 = fVar9;
    fStack_1c = fVar7;
    fStack_20 = fVar3;
  }
  FUN_10a0f0a8c(&fStack_20);
  return;
}



/* Entry: 10a460020; end: 10a4603c7;  */

ulong FUN_10a460020(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a460088);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a48d304,1,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a4603c8; end: 10a46160f;  */

dword * FUN_10a4603c8(dword *param_1,undefined8 param_2,undefined8 *param_3,dword *param_4,
                     dword param_5,dword *param_6)

{
  dword *pdVar1;
  dword *pdVar2;
  dword *pdVar3;
  dword *pdVar4;
  ulong *puVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  dword dVar8;
  char cVar9;
  bool bVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  long *plVar19;
  undefined8 uVar20;
  ulong uVar21;
  dword *pdVar22;
  dword *pdVar23;
  dword *pdVar24;
  dword *pdVar25;
  dword *pdVar26;
  dword *pdVar27;
  dword *pdVar28;
  dword *pdVar29;
  dword *pdVar30;
  dword *pdVar31;
  long lVar32;
  undefined *puVar33;
  int iVar34;
  ulong uVar35;
  long *plVar36;
  undefined8 *puVar37;
  dword *pdVar38;
  undefined8 uVar39;
  ulong uVar40;
  ulong uVar41;
  long *plStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  long *plStack_148;
  undefined1 uStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  long *plStack_128;
  long ****pppplStack_120;
  undefined **ppuStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  dword *pdStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined ***)param_1 = &PTR_FUN_110bda100;
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined ***)(param_1 + 6) = &PTR_FUN_110bdc198;
  pdVar22 = param_1 + 10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  pdVar22[0] = 0;
  pdVar22[1] = 0;
  pdVar23 = param_1 + 0xe;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  pdVar23[0] = 0;
  pdVar23[1] = 0;
  *(undefined8 *)(param_1 + 8) = param_2;
  pdVar24 = param_1 + 0x12;
  *(undefined1 *)pdVar24 = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  pdVar25 = param_1 + 0x16;
  pdVar25[0] = 0;
  pdVar25[1] = 0;
  pdVar26 = param_1 + 0x1a;
  pdVar26[0] = 0;
  pdVar26[1] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x1c);
  pdVar38 = param_1 + 0x2c;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  pdVar38[0] = 0;
  pdVar38[1] = 0;
  pdVar27 = param_1 + 0x38;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  pdVar27[0] = 0;
  pdVar27[1] = 0;
  pdVar28 = param_1 + 0x3c;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  pdVar28[0] = 0;
  pdVar28[1] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  pdVar29 = param_1 + 0x42;
  *(undefined ***)pdVar29 = &PTR_DAT_110950c70;
  *(code **)(param_1 + 0x40) = FUN_10a473238;
  *(undefined **)(param_1 + 0x50) = &UNK_1053a6a3c;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined ***)(param_1 + 0x52) = &PTR_DAT_110ae9180;
  pdVar30 = param_1 + 0x62;
  param_1[100] = 0;
  param_1[0x65] = 0;
  pdVar30[0] = 0;
  pdVar30[1] = 0;
  pdVar31 = param_1 + 0x66;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  pdVar31[0] = 0;
  pdVar31[1] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0x32aaaba7;
  param_1[0x6d] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x7e] = 0xa473244;
  param_1[0x7f] = 1;
  *(undefined ***)(param_1 + 0x80) = &PTR_DAT_110ae9180;
  pdVar1 = param_1 + 0x8e;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  pdVar1[0] = 0;
  pdVar1[1] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = 0x3f800000;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0x3f800000;
  pdVar2 = param_1 + 0xa2;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  pdVar2[0] = 0;
  pdVar2[1] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xaa] = 0x3f800000;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb4] = 0x3f800000;
  pdVar3 = param_1 + 0xb6;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  pdVar3[0] = 0;
  pdVar3[1] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbe] = 0x3f800000;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = param_5;
  param_1[0xc4] = 0x32aaaba7;
  param_1[0xc5] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0x32aaaba7;
  param_1[0xdd] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xde] = 0;
  puVar33 = PTR___tlv_bootstrap_11340d750;
  param_1[0xdf] = 0;
  ppuVar18 = &PTR___tlv_bootstrap_11340d750;
  ppuVar15 = ppuVar18;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar16 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar15 & 1) == 0) {
    ppuVar15 = ppuVar16;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar15,0x100000000);
    (*(code *)puVar33)();
    *(undefined1 *)ppuVar18 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  uVar20 = uStack_158;
  puVar37 = (undefined8 *)ppuVar16[2];
  if (puVar37 == (undefined8 *)0x0) {
    uStack_158 = (dword *)((ulong)uStack_158._1_7_ << 8);
    plStack_148 = (long *)0x0;
    uStack_140 = 0;
  }
  else {
    cVar9 = *(char *)(puVar37[1] + 0x17);
    uStack_158 = (dword *)CONCAT71(uStack_158._1_7_,cVar9);
    uVar39 = uStack_158;
    uStack_158._4_4_ = SUB84(uVar20,4);
    uStack_158._0_4_ = CONCAT22(7,(short)uVar39);
    ppuVar18 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar34 = *(int *)ppuVar18;
    if (*(int *)ppuVar18 == 0) {
      pdStack_e0 = (dword *)0x0;
      _pthread_threadid_np(0,&pdStack_e0);
      *(int *)ppuVar18 = (int)pdStack_e0;
      iVar34 = (int)pdStack_e0;
    }
    uStack_158 = (dword *)CONCAT44(iVar34,(undefined4)uStack_158);
    plStack_148 = (long *)0x0;
    uStack_140 = 0;
    if (cVar9 != '\0') {
      lVar32 = puVar37[1];
      bVar11 = *(byte *)(lVar32 + 0x42) | *(byte *)(lVar32 + 0x43);
      if (((bVar11 & 1) != 0) || (*(char *)(lVar32 + 0x40) == '\x01')) {
        uVar21 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar35 = cntvct_el0;
        if (uVar21 != 1000000000) {
          uVar40 = 0;
          if (uVar21 != 0) {
            uVar40 = uVar35 / uVar21;
          }
          uVar41 = 0;
          if (uVar21 != 0) {
            uVar41 = ((uVar35 - uVar40 * uVar21) * 1000000000) / uVar21;
          }
          uVar35 = uVar41 + uVar40 * 1000000000;
        }
        uStack_150 = uVar35;
        if (((bVar11 & 1) != 0) &&
           (puVar17 = puVar37, FUN_10a1333cc(), puVar17 != (undefined8 *)0x0)) {
          *puVar17 = &UNK_10f65a3c5;
          puVar17[1] = 0;
          puVar17[2] = uVar35;
          *(int *)(puVar17 + 3) = iVar34;
          *(undefined2 *)((long)puVar17 + 0x1c) = 7;
          *(undefined1 *)((long)puVar17 + 0x1e) = 3;
          if ((*(byte *)(puVar37 + 0x38) & 1) == 0) goto LAB_10a46129c;
          puVar37[0x18] = puVar37[0x18] + 1;
        }
      }
      if (*(char *)(puVar37[1] + 0x41) == '\x01') {
        plVar36 = (long *)puVar37[0xb];
        if (plVar36 != (long *)0x0) {
          plVar19 = plVar36;
          (**(code **)(*plVar36 + 0x10))(plVar36,&UNK_10f65a3c5);
          plStack_148 = plVar19;
        }
        uStack_140 = plVar36 != (long *)0x0;
      }
    }
  }
  if (param_4 == (dword *)0x0) {
    FUN_109d2037c(&pdStack_e0,&UNK_10f659c02,10);
    ppuVar18 = ppuStack_d8;
    pdVar4 = pdStack_e0;
    pdStack_e0 = (dword *)0x0;
    ppuStack_d8 = (undefined **)0x0;
    plVar36 = *(long **)(param_1 + 0xc);
    *(undefined ***)(param_1 + 0xc) = ppuVar18;
    *(dword **)(param_1 + 10) = pdVar4;
    if (plVar36 != (long *)0x0) {
      plVar19 = plVar36 + 1;
      do {
        lVar32 = *plVar19;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar10) {
          *plVar19 = lVar32 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plVar36 + 0x10))(plVar36);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar36);
      }
    }
    ppuVar18 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar16 = ppuStack_d8 + 1;
      do {
        puVar33 = *ppuVar16;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar10) {
          *ppuVar16 = puVar33 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (puVar33 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    uVar39 = *(undefined8 *)(param_1 + 0xc);
    uVar20 = *(undefined8 *)(param_1 + 10);
    if (*(long *)(param_1 + 0xc) != 0) {
      plVar36 = (long *)(*(long *)(param_1 + 0xc) + 8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar10) {
          *plVar36 = *plVar36 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    plVar36 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar39;
    *(undefined8 *)(param_1 + 0xe) = uVar20;
    if (plVar36 != (long *)0x0) {
      plVar19 = plVar36 + 1;
      do {
        lVar32 = *plVar19;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar10) {
          *plVar19 = lVar32 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_10a460af4;
    }
  }
  else {
    if ((param_1[0x14] & 1) == 0) {
      lVar32 = *(long *)(param_4 + 0xe);
      *(long *)pdVar24 = lVar32;
      if (lVar32 != 0) {
        plVar36 = (long *)(lVar32 + 8);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar10) {
            *plVar36 = *plVar36 + 4;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    else {
      FUN_109d19404(pdVar24,param_4 + 0xe);
      if ((param_1[0x14] & 1) == 0) goto LAB_10a46129c;
    }
    puVar37 = (undefined8 *)0xd0;
    __Znwm();
    puVar37[1] = 0;
    puVar37[2] = 0;
    *puVar37 = &PTR_DAT_110ae90f0;
    pdVar4 = (dword *)(puVar37 + 3);
    ppuStack_d8 = (undefined **)&UNK_1053a6a3c;
    ppuStack_d0 = &PTR_DAT_110ae9180;
    pdStack_e0 = param_4;
    func_0x000109d18e28(pdVar4,&UNK_10f659c0d,0x15,&pdStack_e0,pdVar24);
    func_0x0001092ba41c(&pdStack_e0);
    ppuStack_130 = (undefined **)0x0;
    plStack_128 = (long *)0x0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    ppuStack_d8 = (undefined **)&UNK_109896774;
    ppuStack_d0 = &PTR_DAT_110b17068;
    ppuVar18 = (undefined **)0x170;
    pdStack_e0 = pdVar4;
    uStack_c8 = pdVar4;
    uStack_c0 = puVar37;
    __Znwm();
    ppuVar18[1] = (undefined *)0x0;
    ppuVar18[2] = (undefined *)0x0;
    *ppuVar18 = (undefined *)&PTR_FUN_110bc42c8;
    plVar36 = (long *)0x18;
    __Znwm();
    *plVar36 = (long)&PTR_FUN_110bdd868;
    plVar36[1] = (long)param_1;
    plVar36[2] = (long)param_1;
    plStack_178 = plVar36;
    FUN_109d1dddc(ppuVar18 + 3,&plStack_178,FUN_10a48e904,&pdStack_e0,&UNK_10f659c02,10);
    if (plStack_178 != (long *)0x0) {
      (**(code **)(*plStack_178 + 8))();
    }
    pppplStack_120 = (long ****)(ppuVar18 + 3);
    ppuStack_118 = ppuVar18;
    FUN_10a461610(pdVar23,&pppplStack_120);
    ppuVar18 = ppuStack_118;
    if (ppuStack_118 != (undefined **)0x0) {
      ppuVar16 = ppuStack_118 + 1;
      do {
        puVar33 = *ppuVar16;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar10) {
          *ppuVar16 = puVar33 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (puVar33 == (undefined *)0x0) {
        (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    func_0x0001092ba41c(&pdStack_e0);
    plVar36 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      plVar19 = plStack_160 + 1;
      do {
        lVar32 = *plVar19;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar10) {
          *plVar19 = lVar32 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar36);
      }
    }
    if (param_6 != (dword *)0x0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      puStack_110 = (undefined8 *)0x0;
      uStack_f8 = 0;
      uStack_100 = 0;
      pppplStack_120 = (long ****)&UNK_1053a6a3c;
      ppuStack_118 = &PTR_DAT_110ae9180;
      ppuStack_d8 = (undefined **)&UNK_1053a6a3c;
      ppuStack_d0 = &PTR_DAT_110ae9180;
      plVar36 = (long *)0x170;
      pdStack_e0 = param_6;
      __Znwm();
      plVar36[1] = 0;
      plVar36[2] = 0;
      *plVar36 = (long)&PTR_FUN_110bc42c8;
      plVar19 = (long *)0x18;
      __Znwm();
      *plVar19 = (long)&PTR_FUN_110bdd8a0;
      plVar19[1] = (long)param_1;
      plVar19[2] = (long)param_1;
      plStack_138 = plVar19;
      FUN_109d1dddc(plVar36 + 3,&plStack_138,FUN_10a48ea28,&pdStack_e0,&UNK_10f659c23,10);
      if (plStack_138 != (long *)0x0) {
        (**(code **)(*plStack_138 + 8))();
      }
      plStack_178 = plVar36 + 3;
      plStack_170 = plVar36;
      FUN_10a461610(pdVar30,&plStack_178);
      plVar36 = plStack_170;
      if (plStack_170 != (long *)0x0) {
        plVar19 = plStack_170 + 1;
        do {
          lVar32 = *plVar19;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar10) {
            *plVar19 = lVar32 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plStack_170 + 0x10))(plStack_170);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar36);
        }
      }
      func_0x0001092ba41c(&pdStack_e0);
      (*(code *)*ppuStack_118)(&ppuStack_118);
    }
    if (plStack_128 != (long *)0x0) {
      plVar19 = plStack_128 + 1;
      do {
        lVar32 = *plVar19;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar10) {
          *plVar19 = lVar32 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        plVar36 = plStack_128;
      } while (cVar9 != '\0');
LAB_10a460af4:
      if (lVar32 == 0) {
        (**(code **)(*plVar36 + 0x10))(plVar36);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar36);
      }
    }
  }
  ppuStack_d8 = (undefined **)*param_3;
  pdStack_e0 = param_1;
  (**(code **)(param_3[1] + 0x10))(&ppuStack_d0,param_3 + 1);
  *(code **)(param_1 + 0x40) = FUN_10a48eb74;
  (*(code *)**(undefined8 **)(param_1 + 0x42))(pdVar29);
  *(undefined ***)(param_1 + 0x42) = &PTR_FUN_110bdd8e0;
  puVar37 = (undefined8 *)0x48;
  __Znwm();
  *puVar37 = pdStack_e0;
  puVar37[1] = ppuStack_d8;
  (*(code *)ppuStack_d0[2])(puVar37 + 2,&ppuStack_d0);
  *(undefined8 **)(param_1 + 0x44) = puVar37;
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  uStack_b8 = 0;
  uStack_c0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = (dword *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  pdStack_e0 = (dword *)FUN_10a48efb0;
  ppuStack_d8 = &PTR_DAT_110ae9180;
  uVar20 = 0xd0;
  __Znwm(0xd0);
  func_0x00010989638c();
  FUN_10a4768a0(pdVar26,uVar20);
  (*(code *)*ppuStack_d8)(&ppuStack_d8);
  if ((*(byte *)(*(long *)(*(long *)pdVar26 + 0xb8) + 0x1e0) & 1) != 0) {
    plVar36 = *(long **)(*(long *)(*(long *)pdVar26 + 0xb8) + 0x50);
    puVar37 = (undefined8 *)0x10;
    __Znwm();
    *puVar37 = plVar36;
    (**(code **)(*plVar36 + 0x58))();
    puVar37[1] = plVar36;
    lVar32 = *(long *)(param_1 + 0x34);
    *(undefined8 **)(param_1 + 0x34) = puVar37;
    if (lVar32 != 0) {
      __ZdlPv();
    }
    if ((*(byte *)(*(long *)(*(long *)pdVar26 + 0xb8) + 0x1e0) & 1) != 0) {
      uVar21 = 0x238;
      __Znwm();
      dVar8 = param_1[0xc2];
      func_0x00010989439c();
      *(undefined8 *)(uVar21 + 0xd8) = 0;
      *(undefined8 *)(uVar21 + 0xd0) = 0;
      *(undefined8 *)(uVar21 + 0xe8) = 0;
      *(undefined8 *)(uVar21 + 0xe0) = 0;
      *(undefined4 *)(uVar21 + 0xf0) = 0x3f800000;
      *(undefined8 *)(uVar21 + 0x100) = 0;
      *(undefined8 *)(uVar21 + 0xf8) = 0;
      *(undefined8 *)(uVar21 + 0x110) = 0;
      *(undefined8 *)(uVar21 + 0x108) = 0;
      *(undefined4 *)(uVar21 + 0x118) = 0x3f800000;
      *(code **)(uVar21 + 0x120) = FUN_10a48f038;
      *(undefined ***)(uVar21 + 0x128) = &PTR_DAT_110950c70;
      *(dword *)(uVar21 + 0x160) = dVar8;
      *(undefined8 *)(uVar21 + 0x170) = 0;
      *(undefined8 *)(uVar21 + 0x168) = 0;
      *(undefined8 *)(uVar21 + 0x180) = 0;
      *(undefined8 *)(uVar21 + 0x178) = 0;
      *(undefined8 *)(uVar21 + 400) = 0;
      *(undefined8 *)(uVar21 + 0x188) = 0;
      *(undefined8 *)(uVar21 + 0x198) = 0;
      *(undefined4 *)(uVar21 + 0x1a0) = 0x3f800000;
      *(undefined4 *)(uVar21 + 0x1a8) = 0;
      *(undefined1 *)(uVar21 + 0x1ac) = 0;
      *(undefined **)(uVar21 + 0x1b0) = PTR___ZTIDn_1103469e8;
      *(undefined8 *)(uVar21 + 0x1b8) = 0;
      *(undefined8 *)(uVar21 + 0x1c0) = 0;
      *(undefined8 *)(uVar21 + 0x1c8) = 0;
      *(undefined8 *)(uVar21 + 0x1d8) = 0xffffffffffffffff;
      *(undefined8 *)(uVar21 + 0x1d0) = 0x200000002;
      *(undefined8 *)(uVar21 + 0x1e8) = 0;
      *(undefined8 *)(uVar21 + 0x1e0) = 0;
      *(undefined8 *)(uVar21 + 0x1f8) = 0;
      *(undefined8 *)(uVar21 + 0x1f0) = 0;
      *(undefined8 *)(uVar21 + 0x200) = 0;
      *(undefined4 *)(uVar21 + 0x208) = 0x3f800000;
      *(undefined8 *)(uVar21 + 0x218) = 0;
      *(undefined8 *)(uVar21 + 0x210) = 0;
      *(undefined8 *)(uVar21 + 0x228) = 0;
      *(undefined8 *)(uVar21 + 0x220) = 0;
      *(undefined4 *)(uVar21 + 0x230) = 0x3f800000;
      func_0x000109887da8(&pppplStack_120,&UNK_10f65b204,0xc);
      ppppplVar6 = (long *****)pppplStack_120;
      if (-1 < (long)puStack_110) {
        ppppplVar6 = &pppplStack_120;
      }
      *(undefined ***)(uVar21 + 0x1b0) = &PTR_DAT_110b178e0;
      ppppplVar7 = (long *****)"";
      if (ppppplVar6 != (long *****)0x0) {
        ppppplVar7 = ppppplVar6;
      }
      func_0x000107c2c4dc(uVar21 + 0x1b8,ppppplVar7);
      ppuStack_d8 = (undefined **)0x0;
      uStack_c0 = (undefined8 *)0xffffffffffffffff;
      uStack_c8 = &segment_command_100000020.flags;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      ppuStack_d0 = (undefined **)0x0;
      uStack_98 = 0;
      uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
      uStack_88 = 0;
      uStack_80 = 0;
      pdStack_e0 = (dword *)ppppplVar6;
      func_0x00010a052690((undefined8 *)(uVar21 + 0x168),&pdStack_e0);
      uVar35 = uVar21;
      FUN_10a0051e8(uVar21,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar35 & 1) == 0) {
        ppuStack_130 = &PTR_DAT_110b178e0;
        plStack_128 = (long *)0x0;
        pdStack_e0 = (dword *)((ulong)pdStack_e0 & 0xffffffffffffff00);
        ppuStack_d0 = (undefined **)((ulong)ppuStack_d0 & 0xffffffffffffff00);
        func_0x0001098949cc(uVar21,ppppplVar6,&ppuStack_130,&pdStack_e0);
      }
      if ((long)puStack_110 < 0) {
        __ZdlPv(pppplStack_120);
      }
      uVar35 = uVar21;
      FUN_10a0051e8(uVar21,0x19,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar35 & 1) == 0) {
        if ((*(byte *)(uVar21 + 0x78) & 1) == 0) goto LAB_10a46129c;
        FUN_10a054dac(uVar21,&DAT_10f648172,FUN_10a48f048,1,*(undefined8 *)(uVar21 + 0x40));
      }
      uVar35 = uVar21;
      FUN_10a0051e8(uVar21,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar35 & 1) == 0) {
        if ((*(byte *)(uVar21 + 0x78) & 1) == 0) goto LAB_10a46129c;
        FUN_10a054dac(uVar21,&UNK_10f63474c,FUN_10a48f1c0,1,*(undefined8 *)(uVar21 + 0x40));
      }
      uVar35 = uVar21;
      FUN_10a0051e8(uVar21,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar35 & 1) == 0) {
        if ((*(byte *)(uVar21 + 0x78) & 1) == 0) goto LAB_10a46129c;
        FUN_10a054dac(uVar21,&UNK_10f65b1ad,FUN_10a48f2f0,2,*(undefined8 *)(uVar21 + 0x40));
      }
      uVar35 = uVar21;
      FUN_10a0051e8(uVar21,100,1,0xffffffff,0xffffffff,0xffffffff);
      if ((uVar35 & 1) == 0) {
        if ((*(byte *)(uVar21 + 0x78) & 1) == 0) goto LAB_10a46129c;
        FUN_10a054dac(uVar21,&UNK_10f65b1b6,FUN_10a48f420,2,*(undefined8 *)(uVar21 + 0x40));
      }
      *(undefined **)(uVar21 + 0x1b0) = PTR___ZTIDn_1103469e8;
      lVar32 = *(long *)(uVar21 + 0x170);
      if (*(long *)(uVar21 + 0x168) != lVar32) {
        ppuStack_d8 = *(undefined ***)(lVar32 + -0x60);
        pdStack_e0 = *(dword **)(lVar32 + -0x68);
        uStack_b8 = *(undefined8 *)(lVar32 + -0x40);
        uVar40 = *(ulong *)(lVar32 + -0x48);
        uVar41 = *(ulong *)(lVar32 + -0x50);
        ppuStack_d0 = *(undefined ***)(lVar32 + -0x58);
        uStack_a8 = *(undefined8 *)(lVar32 + -0x30);
        uStack_b0 = *(undefined8 *)(lVar32 + -0x38);
        uStack_98 = *(undefined8 *)(lVar32 + -0x20);
        uStack_a0 = *(undefined8 *)(lVar32 + -0x28);
        uStack_80 = *(undefined8 *)(lVar32 + -8);
        uStack_88 = *(undefined8 *)(lVar32 + -0x10);
        uStack_90 = *(ulong *)(lVar32 + -0x18);
        *(long *)(uVar21 + 0x170) = lVar32 + -0x68;
        uStack_c8._4_4_ = (undefined4)(uVar41 >> 0x20);
        uVar12 = uStack_c8._4_4_;
        uStack_c0._4_4_ = (undefined4)(uVar40 >> 0x20);
        uVar13 = uStack_c0._4_4_;
        uVar35 = uVar21;
        uStack_c8 = (dword *)uVar41;
        uStack_c0 = (undefined8 *)uVar40;
        FUN_10a0051e8(uVar21,uVar41 & 0xffffffff,uVar12,uStack_90 & 0xffffffff,uVar40 & 0xffffffff,
                      uVar13);
        if ((uVar35 & 1) == 0) {
          func_0x000109894f40(uVar21,0);
          FUN_10a054234(uVar21,&pdStack_e0,uVar21 + 0x1b8,&UNK_10f65b204,0xc);
          FUN_10a05431c(uVar21);
        }
        func_0x00010a4616f0(param_1 + 0x36,uVar21);
        func_0x00010989ace0(&pdStack_e0,*(undefined8 *)(param_1 + 0x34),&UNK_10f65a3d3,0x103,"",0);
        puVar37 = (undefined8 *)0x18;
        __Znwm();
        *puVar37 = pdStack_e0;
        *(int *)(puVar37 + 1) = (int)ppuStack_d8;
        if ((int)ppuStack_d8 == 3) {
          puVar37[2] = ppuStack_d0;
        }
        else if ((int)ppuStack_d8 == 2) {
          *(undefined1 *)(puVar37 + 2) = ppuStack_d0._0_1_;
        }
        else if (3 < (int)ppuStack_d8) {
          puVar37[2] = ppuStack_d0;
        }
        pppplStack_120 = (long ****)0x0;
        FUN_10a3b9b54(pdVar27);
        FUN_10a3b9b54(&pppplStack_120,0);
        func_0x00010989ace0(&pdStack_e0,*(undefined8 *)(param_1 + 0x34),&UNK_10f65a4d7,0x71,"",0);
        puVar37 = (undefined8 *)0x18;
        __Znwm();
        *puVar37 = pdStack_e0;
        *(int *)(puVar37 + 1) = (int)ppuStack_d8;
        if ((int)ppuStack_d8 == 3) {
          puVar37[2] = ppuStack_d0;
        }
        else if ((int)ppuStack_d8 == 2) {
          *(undefined1 *)(puVar37 + 2) = ppuStack_d0._0_1_;
        }
        else if (3 < (int)ppuStack_d8) {
          puVar37[2] = ppuStack_d0;
        }
        pppplStack_120 = (long ****)0x0;
        FUN_10a3b9b54(param_1 + 0x3e);
        FUN_10a3b9b54(&pppplStack_120,0);
        func_0x00010989ace0(&pdStack_e0,*(undefined8 *)(param_1 + 0x34),&UNK_10f65a549,0xcc,"",0);
        puVar37 = (undefined8 *)0x18;
        __Znwm();
        *puVar37 = pdStack_e0;
        *(int *)(puVar37 + 1) = (int)ppuStack_d8;
        if ((int)ppuStack_d8 == 3) {
          puVar37[2] = ppuStack_d0;
        }
        else if ((int)ppuStack_d8 == 2) {
          *(undefined1 *)(puVar37 + 2) = ppuStack_d0._0_1_;
        }
        else if (3 < (int)ppuStack_d8) {
          puVar37[2] = ppuStack_d0;
        }
        pppplStack_120 = (long ****)0x0;
        FUN_10a3b9b54(param_1 + 0x3a);
        FUN_10a3b9b54(&pppplStack_120,0);
        func_0x00010989ace0(&pdStack_e0,*(undefined8 *)(param_1 + 0x34),&UNK_10f65a616,0xe3,"",0);
        puVar37 = (undefined8 *)0x18;
        __Znwm();
        *puVar37 = pdStack_e0;
        *(int *)(puVar37 + 1) = (int)ppuStack_d8;
        if ((int)ppuStack_d8 == 3) {
          puVar37[2] = ppuStack_d0;
        }
        else if ((int)ppuStack_d8 == 2) {
          *(undefined1 *)(puVar37 + 2) = ppuStack_d0._0_1_;
        }
        else if (3 < (int)ppuStack_d8) {
          puVar37[2] = ppuStack_d0;
        }
        pppplStack_120 = (long ****)0x0;
        FUN_10a3b9b54(pdVar28);
        FUN_10a3b9b54(&pppplStack_120,0);
        func_0x00010989ace0(&pdStack_e0,*(undefined8 *)(param_1 + 0x34),&UNK_10f65a6fa,0x44,"",0);
        if ((3 < (int)ppuStack_d8) && (ppuStack_d0 != (undefined **)0x0)) {
          (**(code **)*ppuStack_d0)();
        }
        puVar37 = (undefined8 *)&UNK_10f65a73f;
        func_0x00010989ace0(&pppplStack_120,*(undefined8 *)(param_1 + 0x34),&UNK_10f65a73f,0x1c8,"",
                            0);
        if ((3 < (int)ppuStack_118) && (puStack_110 != (undefined8 *)0x0)) {
          (**(code **)*puStack_110)();
        }
        puVar17 = &uStack_158;
        FUN_10a48e720();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
          ___stack_chk_fail();
          if ((int)puVar37 != 0) {
            func_0x000104bd46a0();
            func_0x0001092ba41c(&pdStack_e0);
            func_0x00010a06e274(&uStack_168);
            func_0x00010a06e274(&ppuStack_130);
            FUN_10a48e720(&uStack_158);
            FUN_10a473254(param_1 + 0xec);
            __ZNSt3__15mutexD1Ev(param_1 + 0xdc);
            func_0x00010a4732c0(param_1 + 0xd4);
            __ZNSt3__15mutexD1Ev(param_1 + 0xc4);
            __ZNSt13exception_ptrD1Ev(param_1 + 0xc0);
            func_0x00010a48e6c0(pdVar3);
            func_0x00010a48e664(param_1 + 0xac);
            func_0x00010a48e5c0(pdVar2);
            func_0x00010a48e564(param_1 + 0x98);
            FUN_10a48e4c8(pdVar1);
            (*(code *)**(undefined8 **)(param_1 + 0x80))(param_1 + 0x80);
            __ZNSt3__15mutexD1Ev(param_1 + 0x6c);
            uStack_158 = pdVar31;
            FUN_10a47332c(&uStack_158);
            func_0x00010a06e274(pdVar30);
            FUN_10a044790(param_1 + 0x50);
            (*(code *)**(undefined8 **)(param_1 + 0x52))(param_1 + 0x52);
            (*(code *)**(undefined8 **)(param_1 + 0x42))(pdVar29);
            FUN_10a3b9b54(param_1 + 0x3e,0);
            FUN_10a3b9b54(pdVar28,0);
            FUN_10a3b9b54(param_1 + 0x3a,0);
            FUN_10a3b9b54(pdVar27,0);
            func_0x00010a4616f0(param_1 + 0x36,0);
            lVar32 = *(long *)(param_1 + 0x34);
            param_1[0x34] = 0;
            param_1[0x35] = 0;
            if (lVar32 != 0) {
              __ZdlPv();
            }
            func_0x00010a061620(param_1 + 0x2e);
            plVar36 = *(long **)pdVar38;
            if (plVar36 != (long *)0x0) {
              puVar5 = (ulong *)(plVar36 + 1);
              do {
                uVar21 = *puVar5;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                if (bVar10) {
                  *puVar5 = uVar21 - 4;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if ((uVar21 & 0x1fffffffc) == 4) {
                do {
                  uVar21 = *puVar5;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                  if (bVar10) {
                    *puVar5 = uVar21 - 1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (uVar21 - 1 == 0) {
                  (**(code **)(*plVar36 + 8))();
                }
              }
            }
            __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x1c);
            puVar37 = (undefined8 *)0x0;
            FUN_10a4768a0(pdVar26);
            func_0x00010a061620(pdVar25);
            if (((char)param_1[0x14] == '\x01') &&
               (plVar36 = *(long **)pdVar24, plVar36 != (long *)0x0)) {
              puVar5 = (ulong *)(plVar36 + 1);
              do {
                uVar21 = *puVar5;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                if (bVar10) {
                  *puVar5 = uVar21 - 4;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if ((uVar21 & 0x1fffffffc) == 4) {
                (**(code **)(*plVar36 + 0x10))(plVar36);
                do {
                  uVar21 = *puVar5;
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                  if (bVar10) {
                    *puVar5 = uVar21 - 1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (uVar21 - 1 == 0) {
                  (**(code **)(*plVar36 + 8))(plVar36);
                }
              }
            }
            func_0x00010a06e274(pdVar23);
            FUN_10a3f850c(pdVar22);
          }
          __Unwind_Resume();
          uVar39 = puVar37[1];
          uVar20 = *puVar37;
          *puVar37 = 0;
          puVar37[1] = 0;
          plVar36 = (long *)puVar17[1];
          puVar17[1] = uVar39;
          *puVar17 = uVar20;
          if (plVar36 != (long *)0x0) {
            plVar19 = plVar36 + 1;
            do {
              lVar32 = *plVar19;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar10) {
                *plVar19 = lVar32 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar32 == 0) {
              (**(code **)(*plVar36 + 0x10))(plVar36);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar36);
            }
          }
          return (dword *)puVar17;
        }
        return param_1;
      }
    }
  }
LAB_10a46129c:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10a4612a0);
  (*pcVar14)();
}



/* Entry: 10a461610; end: 10a461673;  */

undefined8 * FUN_10a461610(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a461674; end: 10a461677;  */

void FUN_10a461674(void)

{
  return;
}



/* Entry: 10a461678; end: 10a4617d3;  */

void FUN_10a461678(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0xb0);
  if (*plVar6 != 0) {
    FUN_109d1a244(plVar6);
    plVar4 = (long *)*plVar6;
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    *plVar6 = 0;
  }
  return;
}



/* Entry: 10a4617d4; end: 10a4617f3;  */

void FUN_10a4617d4(long param_1)

{
  func_0x0001098956bc(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8));
  return;
}



/* Entry: 10a4617f4; end: 10a461cc7;  */

undefined8 * FUN_10a4617f4(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  *param_1 = &PTR_FUN_110bda100;
  FUN_10a461678();
  FUN_109d1918c(&plStack_58,param_1[0xd]);
  if (plStack_58 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_58 + 1);
    do {
      uVar7 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar7 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar7 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plStack_58 + 8))();
      }
    }
  }
  plVar8 = param_1 + 0xb;
  if ((long *)*plVar8 != (long *)0x0) {
    (**(code **)(*(long *)*plVar8 + 0x38))(&plStack_70);
    if (param_1[5] == 0) {
      FUN_109d1a244(&plStack_70);
    }
    else {
      while (((uint)plStack_70[2] >> 1 & 1) == 0) {
        FUN_109d202f4(param_1[5]);
      }
    }
    func_0x00010a225c4c(plVar8);
    if (plStack_70 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_70 + 1);
      do {
        uVar7 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar7 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar7 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plStack_70 + 8))();
        }
      }
    }
  }
  if (param_1[5] != 0) {
    FUN_109d202f4();
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x62);
  plVar10 = (long *)param_1[0x6a];
  uStack_60 = param_1[0x6c];
  plVar11 = (long *)param_1[0x6b];
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6c] = 0;
  plStack_70 = plVar10;
  plStack_68 = plVar11;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x62);
  for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
    plVar6 = (long *)plVar10[1];
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      lVar9 = *plVar10;
      if (lVar9 != 0) {
        FUN_10a053e40(&plStack_88,lVar9);
        if (plStack_88 == (long *)0x0) {
          FUN_10a39a040(lVar9 + 0x10);
        }
        else {
          FUN_10aa88e9c(plStack_88,lVar9);
        }
        plVar3 = plStack_80;
        if (plStack_80 != (long *)0x0) {
          plVar2 = plStack_80 + 1;
          do {
            lVar9 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
      }
      plVar3 = plVar6 + 1;
      do {
        lVar9 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x6e);
  plVar10 = (long *)param_1[0x76];
  uStack_78 = param_1[0x78];
  plVar11 = (long *)param_1[0x77];
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  plStack_88 = plVar10;
  plStack_80 = plVar11;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x6e);
  for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
    plVar6 = (long *)plVar10[1];
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      lVar9 = *plVar10;
      if (lVar9 != 0) {
        FUN_10aa8888c(lVar9);
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
      }
      plVar3 = plVar6 + 1;
      do {
        lVar9 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  FUN_10a473254(&plStack_88);
  func_0x00010a4732c0(&plStack_70);
  FUN_10a473254(param_1 + 0x76);
  __ZNSt3__15mutexD1Ev(param_1 + 0x6e);
  func_0x00010a4732c0(param_1 + 0x6a);
  __ZNSt3__15mutexD1Ev(param_1 + 0x62);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x60);
  func_0x00010a48e6c0(param_1 + 0x5b);
  func_0x00010a48e664(param_1 + 0x56);
  func_0x00010a48e5c0(param_1 + 0x51);
  func_0x00010a48e564(param_1 + 0x4c);
  FUN_10a48e4c8(param_1 + 0x47);
  (**(code **)param_1[0x40])(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1 + 0x36);
  plStack_70 = param_1 + 0x33;
  FUN_10a47332c(&plStack_70);
  func_0x00010a06e274(param_1 + 0x31);
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  (**(code **)param_1[0x21])(param_1 + 0x21);
  FUN_10a3b9b54(param_1 + 0x1f,0);
  FUN_10a3b9b54(param_1 + 0x1e,0);
  FUN_10a3b9b54(param_1 + 0x1d,0);
  FUN_10a3b9b54(param_1 + 0x1c,0);
  func_0x00010a4616f0(param_1 + 0x1b,0);
  lVar9 = param_1[0x1a];
  param_1[0x1a] = 0;
  if (lVar9 != 0) {
    __ZdlPv();
  }
  func_0x00010a061620(param_1 + 0x17);
  plVar10 = (long *)param_1[0x16];
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar7 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar7 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar7 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0xe);
  FUN_10a4768a0(param_1 + 0xd,0);
  func_0x00010a061620(plVar8);
  if ((*(char *)(param_1 + 10) == '\x01') && (plVar8 = (long *)param_1[9], plVar8 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar7 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar7 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      do {
        uVar7 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar7 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  func_0x00010a06e274(param_1 + 7);
  FUN_10a3f850c(param_1 + 5);
  return param_1;
}



/* Entry: 10a461cc8; end: 10a461ccb;  */

undefined8 * FUN_10a461cc8(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  *param_1 = &PTR_FUN_110bda100;
  FUN_10a461678();
  FUN_109d1918c(&plStack_58,param_1[0xd]);
  if (plStack_58 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_58 + 1);
    do {
      uVar7 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar7 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar7 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plStack_58 + 8))();
      }
    }
  }
  plVar8 = param_1 + 0xb;
  if ((long *)*plVar8 != (long *)0x0) {
    (**(code **)(*(long *)*plVar8 + 0x38))(&plStack_70);
    if (param_1[5] == 0) {
      FUN_109d1a244(&plStack_70);
    }
    else {
      while (((uint)plStack_70[2] >> 1 & 1) == 0) {
        FUN_109d202f4(param_1[5]);
      }
    }
    func_0x00010a225c4c(plVar8);
    if (plStack_70 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_70 + 1);
      do {
        uVar7 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar7 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar7 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plStack_70 + 8))();
        }
      }
    }
  }
  if (param_1[5] != 0) {
    FUN_109d202f4();
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x62);
  plVar10 = (long *)param_1[0x6a];
  uStack_60 = param_1[0x6c];
  plVar11 = (long *)param_1[0x6b];
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6c] = 0;
  plStack_70 = plVar10;
  plStack_68 = plVar11;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x62);
  for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
    plVar6 = (long *)plVar10[1];
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      lVar9 = *plVar10;
      if (lVar9 != 0) {
        FUN_10a053e40(&plStack_88,lVar9);
        if (plStack_88 == (long *)0x0) {
          FUN_10a39a040(lVar9 + 0x10);
        }
        else {
          FUN_10aa88e9c(plStack_88,lVar9);
        }
        plVar3 = plStack_80;
        if (plStack_80 != (long *)0x0) {
          plVar2 = plStack_80 + 1;
          do {
            lVar9 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
      }
      plVar3 = plVar6 + 1;
      do {
        lVar9 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x6e);
  plVar10 = (long *)param_1[0x76];
  uStack_78 = param_1[0x78];
  plVar11 = (long *)param_1[0x77];
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  plStack_88 = plVar10;
  plStack_80 = plVar11;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x6e);
  for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
    plVar6 = (long *)plVar10[1];
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      lVar9 = *plVar10;
      if (lVar9 != 0) {
        FUN_10aa8888c(lVar9);
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
      }
      plVar3 = plVar6 + 1;
      do {
        lVar9 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  FUN_10a473254(&plStack_88);
  func_0x00010a4732c0(&plStack_70);
  FUN_10a473254(param_1 + 0x76);
  __ZNSt3__15mutexD1Ev(param_1 + 0x6e);
  func_0x00010a4732c0(param_1 + 0x6a);
  __ZNSt3__15mutexD1Ev(param_1 + 0x62);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x60);
  func_0x00010a48e6c0(param_1 + 0x5b);
  func_0x00010a48e664(param_1 + 0x56);
  func_0x00010a48e5c0(param_1 + 0x51);
  func_0x00010a48e564(param_1 + 0x4c);
  FUN_10a48e4c8(param_1 + 0x47);
  (**(code **)param_1[0x40])(param_1 + 0x40);
  __ZNSt3__15mutexD1Ev(param_1 + 0x36);
  plStack_70 = param_1 + 0x33;
  FUN_10a47332c(&plStack_70);
  func_0x00010a06e274(param_1 + 0x31);
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  (**(code **)param_1[0x21])(param_1 + 0x21);
  FUN_10a3b9b54(param_1 + 0x1f,0);
  FUN_10a3b9b54(param_1 + 0x1e,0);
  FUN_10a3b9b54(param_1 + 0x1d,0);
  FUN_10a3b9b54(param_1 + 0x1c,0);
  func_0x00010a4616f0(param_1 + 0x1b,0);
  lVar9 = param_1[0x1a];
  param_1[0x1a] = 0;
  if (lVar9 != 0) {
    __ZdlPv();
  }
  func_0x00010a061620(param_1 + 0x17);
  plVar10 = (long *)param_1[0x16];
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar7 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar7 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar7 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0xe);
  FUN_10a4768a0(param_1 + 0xd,0);
  func_0x00010a061620(plVar8);
  if ((*(char *)(param_1 + 10) == '\x01') && (plVar8 = (long *)param_1[9], plVar8 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar7 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar7 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      do {
        uVar7 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar7 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  func_0x00010a06e274(param_1 + 7);
  FUN_10a3f850c(param_1 + 5);
  return param_1;
}



/* Entry: 10a461ccc; end: 10a461cdf;  */

void FUN_10a461ccc(void)

{
  FUN_10a4617f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a461ce0; end: 10a461deb;  */

void FUN_10a461ce0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x310);
  FUN_10a461dec(param_1 + 0x350,param_2);
  uVar1 = *(long *)(param_1 + 0x368) + 1;
  *(ulong *)(param_1 + 0x368) = uVar1;
  if ((uVar1 & 0x3ff) == 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x358);
    puVar8 = *(undefined8 **)(param_1 + 0x350);
    do {
      puVar6 = puVar8;
      puVar7 = puVar5;
      if (puVar6 == puVar5) goto LAB_10a461db0;
      puVar8 = puVar6 + 2;
    } while ((puVar6[1] != 0) && (*(long *)(puVar6[1] + 8) != -1));
    puVar7 = puVar6;
    if ((puVar6 != puVar5) && (puVar8 != puVar5)) {
      do {
        lVar3 = puVar8[1];
        if ((lVar3 != 0) && (*(long *)(lVar3 + 8) != -1)) {
          uVar4 = *puVar8;
          *puVar8 = 0;
          puVar8[1] = 0;
          lVar2 = puVar6[1];
          *puVar6 = uVar4;
          puVar6[1] = lVar3;
          if (lVar2 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar6 = puVar6 + 2;
        }
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar5);
      puVar5 = *(undefined8 **)(param_1 + 0x358);
      puVar7 = puVar6;
    }
LAB_10a461db0:
    FUN_10a4733cc(param_1 + 0x350,puVar7,puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x310);
  return;
}



/* Entry: 10a461dec; end: 10a461ecf;  */

void FUN_10a461dec(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    puVar6 = puVar11 + 2;
    puVar11[1] = param_2[1];
    *puVar11 = uVar5;
    *param_2 = 0;
    param_2[1] = 0;
LAB_10a461eb0:
    param_1[1] = (long)puVar6;
    return;
  }
  lVar7 = (long)puVar11 - *param_1;
  uVar1 = (lVar7 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar3 = param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 3;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7fffffffffffffef < uVar3) {
      uVar4 = 0xfffffffffffffff;
    }
    if (uVar4 >> 0x3c == 0) {
      lVar2 = uVar4 << 4;
      __Znwm();
      puVar11 = (undefined8 *)(lVar2 + lVar7);
      uVar12 = param_2[1];
      uVar5 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      lVar7 = *param_1;
      lVar8 = (long)puVar11 - (param_1[1] - lVar7);
      puVar6 = puVar11 + 2;
      puVar11[1] = uVar12;
      *puVar11 = uVar5;
      _memcpy(lVar8,lVar7);
      *param_1 = lVar8;
      param_1[1] = (long)puVar6;
      param_1[2] = lVar2 + uVar4 * 0x10;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
      }
      goto LAB_10a461eb0;
    }
  }
  else {
    FUN_10a4733b8();
  }
  func_0x000109ffded8();
  __ZNSt3__15mutex4lockEv(param_1 + 0x6e);
  FUN_10a461fdc(param_1 + 0x76,param_2);
  lVar7 = param_1[0x79];
  param_1[0x79] = lVar7 + 1U;
  if ((lVar7 + 1U & 0x3ff) == 0) {
    puVar6 = (undefined8 *)param_1[0x77];
    puVar11 = (undefined8 *)param_1[0x76];
    do {
      puVar9 = puVar11;
      puVar10 = puVar6;
      if (puVar9 == puVar6) goto LAB_10a461fa0;
      puVar11 = puVar9 + 2;
    } while ((puVar9[1] != 0) && (*(long *)(puVar9[1] + 8) != -1));
    puVar10 = puVar9;
    if ((puVar9 != puVar6) && (puVar11 != puVar6)) {
      do {
        lVar7 = puVar11[1];
        if ((lVar7 != 0) && (*(long *)(lVar7 + 8) != -1)) {
          uVar5 = *puVar11;
          *puVar11 = 0;
          puVar11[1] = 0;
          lVar2 = puVar9[1];
          *puVar9 = uVar5;
          puVar9[1] = lVar7;
          if (lVar2 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar9 = puVar9 + 2;
        }
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar6);
      puVar6 = (undefined8 *)param_1[0x77];
      puVar10 = puVar9;
    }
LAB_10a461fa0:
    FUN_10a4734d0(param_1 + 0x76,puVar10,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x6e);
  return;
}



/* Entry: 10a461ed0; end: 10a461fdb;  */

void FUN_10a461ed0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x370);
  FUN_10a461fdc(param_1 + 0x3b0,param_2);
  uVar1 = *(long *)(param_1 + 0x3c8) + 1;
  *(ulong *)(param_1 + 0x3c8) = uVar1;
  if ((uVar1 & 0x3ff) == 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x3b8);
    puVar8 = *(undefined8 **)(param_1 + 0x3b0);
    do {
      puVar6 = puVar8;
      puVar7 = puVar5;
      if (puVar6 == puVar5) goto LAB_10a461fa0;
      puVar8 = puVar6 + 2;
    } while ((puVar6[1] != 0) && (*(long *)(puVar6[1] + 8) != -1));
    puVar7 = puVar6;
    if ((puVar6 != puVar5) && (puVar8 != puVar5)) {
      do {
        lVar3 = puVar8[1];
        if ((lVar3 != 0) && (*(long *)(lVar3 + 8) != -1)) {
          uVar4 = *puVar8;
          *puVar8 = 0;
          puVar8[1] = 0;
          lVar2 = puVar6[1];
          *puVar6 = uVar4;
          puVar6[1] = lVar3;
          if (lVar2 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar6 = puVar6 + 2;
        }
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar5);
      puVar5 = *(undefined8 **)(param_1 + 0x3b8);
      puVar7 = puVar6;
    }
LAB_10a461fa0:
    FUN_10a4734d0(param_1 + 0x3b0,puVar7,puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x370);
  return;
}



/* Entry: 10a461fdc; end: 10a4620bf;  */

long * FUN_10a461fdc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar13 = *param_2;
    puVar12 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar13;
    *param_2 = 0;
    param_2[1] = 0;
    plVar8 = param_1;
LAB_10a4620a0:
    param_1[1] = (long)puVar12;
    return plVar8;
  }
  lVar10 = (long)puVar2 - *param_1;
  uVar1 = (lVar10 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 >> 0x3c == 0) {
      lVar5 = uVar7 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar5 + lVar10);
      uVar14 = param_2[1];
      uVar13 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      plVar9 = (long *)*param_1;
      plVar11 = (long *)((long)puVar2 - (param_1[1] - (long)plVar9));
      puVar12 = puVar2 + 2;
      puVar2[1] = uVar14;
      *puVar2 = uVar13;
      plVar8 = plVar11;
      _memcpy(plVar11,plVar9);
      *param_1 = (long)plVar11;
      param_1[1] = (long)puVar12;
      param_1[2] = lVar5 + uVar7 * 0x10;
      if (plVar9 != (long *)0x0) {
        __ZdlPv(plVar9);
        plVar8 = plVar9;
      }
      goto LAB_10a4620a0;
    }
  }
  else {
    FUN_10a4734bc();
  }
  func_0x000109ffded8();
  plVar8 = (long *)param_1[0x31];
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)param_1[7];
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)param_1[5];
      plVar9 = (long *)param_1[6];
    }
    else {
      plVar9 = (long *)param_1[8];
    }
    if (plVar9 != (long *)0x0) {
      plVar11 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        lVar10 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  return plVar8;
}



/* Entry: 10a4620c0; end: 10a462143;  */

long FUN_10a4620c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)(param_1 + 0x188);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      plVar6 = *(long **)(param_1 + 0x30);
    }
    else {
      plVar6 = *(long **)(param_1 + 0x40);
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return lVar5;
}



/* Entry: 10a462144; end: 10a462293;  */

void FUN_10a462144(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 extraout_x8;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  long *plStack_80;
  undefined1 uStack_71;
  long lStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)(param_1 + 0x58);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    lStack_70 = *(long *)(param_1 + 0x38);
    if (lStack_70 == 0) {
      lStack_70 = *(long *)(param_1 + 0x28);
      lStack_50 = *(long *)(param_1 + 0x30);
    }
    else {
      lStack_50 = *(long *)(param_1 + 0x40);
    }
    if (lStack_50 != 0) {
      plVar1 = (long *)(lStack_50 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_68 = &UNK_109896774;
    ppuStack_60 = &PTR_DAT_110b17068;
    lStack_58 = lStack_70;
    if (*(char *)(param_1 + 0x50) == '\x01') {
      FUN_10a48f684(auStack_88,&uStack_71,&UNK_10f659c2e,&lStack_70,param_1 + 0x48);
    }
    else {
      func_0x00010a48f700(auStack_88,&uStack_71,&UNK_10f659c2e,&lStack_70);
    }
    func_0x00010a21ba78(plVar5,auStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar1 = plStack_80 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
      }
    }
    func_0x0001092ba41c(&lStack_70);
    lVar4 = *plVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001092ba41c(&lStack_70);
  __Unwind_Resume();
  uVar6 = *(undefined8 *)(lVar4 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(lVar4 + 0x70);
  FUN_109d1918c(extraout_x8,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar4 + 0x70);
  return;
}



/* Entry: 10a462294; end: 10a4622d7;  */

void FUN_10a462294(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x70);
  FUN_109d1918c(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_2 + 0x70);
  return;
}



/* Entry: 10a4622d8; end: 10a46233b;  */

void FUN_10a4622d8(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bda138);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bda138);
    *(ushort *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa20) + 0x20) = (ushort)param_2 | 0x100;
  }
  return;
}



/* Entry: 10a46233c; end: 10a46233f;  */

void FUN_10a46233c(void)

{
  return;
}



/* Entry: 10a462340; end: 10a4623cb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a462340(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [8];
  long alStack_30 [2];
  
  __ZNSt13exception_ptrC1ERKS_(alStack_30,param_1 + 0x300);
  alStack_30[1] = 0;
  __ZNSt13exception_ptraSERKS_(param_1 + 0x300,alStack_30 + 1);
  __ZNSt13exception_ptrD1Ev(alStack_30 + 1);
  if (alStack_30[0] == 0) {
    __ZNSt13exception_ptrD1Ev(alStack_30);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_38,alStack_30);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4623b0);
  (*pcVar1)();
}



/* Entry: 10a4623cc; end: 10a4625b7;  */

void FUN_10a4623cc(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(apuStack_a0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_b8,apuStack_a0,*param_1);
  if (apuStack_a0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_c0);
  plVar2 = (long *)*param_1;
  func_0x0001098849a4(apuStack_a0,plVar2,param_2 + 8);
  func_0x0001098849a4(auStack_90,plVar2,param_3 + 8);
  func_0x0001098849a4(aiStack_80,plVar2,param_4 + 8);
  uStack_48 = 3;
  ppuStack_50 = apuStack_a0;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_70 = &puStack_b8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar2;
  puStack_60 = (undefined1 *)&puStack_c0;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar1)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a4625b8; end: 10a46278f;  */

void FUN_10a4625b8(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(&ppuStack_70,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*param_1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_b0);
  plVar2 = (long *)*param_1;
  func_0x0001098849a4(auStack_90,plVar2,param_2 + 8);
  func_0x0001098849a4(aiStack_80,plVar2,param_3 + 8);
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar2;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar1)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a462790; end: 10a46298f;  */

void FUN_10a462790(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  undefined1 auStack_78 [8];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  plStack_58 = (long *)*param_1;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  (**(code **)(*plStack_58 + 0x128))(auStack_78,plStack_58,puVar2,uVar1);
  auStack_80[0] = 6;
  func_0x0001098849a4(aiStack_70,plStack_58,param_3 + 8);
  uStack_38 = 2;
  puStack_40 = auStack_80;
  (**(code **)(*plStack_58 + 0x58))(plStack_58);
  ppuStack_60 = &puStack_98;
  ppuStack_48 = &puStack_40;
  puStack_50 = (undefined1 *)&puStack_a0;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar3)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a462990; end: 10a462a9f;  */

void FUN_10a462990(long param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auStack_70 [8];
  int iStack_68;
  undefined8 *puStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  bVar3 = *(byte *)((long)param_2 + 0x17);
  uVar1 = *(uint *)(param_2 + 1);
  if (-1 < (char)bVar3) {
    uVar1 = (uint)bVar3;
  }
  uVar6 = (ulong)uVar1;
  plVar7 = (long *)*param_2;
  if (-1 < (char)bVar3) {
    plVar7 = param_2;
  }
  func_0x00010b0ae4b8(&ppuStack_58,&UNK_10f65a913,0x2e);
  pppuVar4 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar4 = &ppuStack_58;
  }
  uVar2 = param_3[1];
  puVar5 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar5 = param_3;
  }
  func_0x00010989ada8(auStack_70,*(undefined8 *)(param_1 + 0xd0),pppuVar4,uStack_50,puVar5,uVar2,
                      param_4,param_5,param_8,uVar6,plVar7);
  if ((3 < iStack_68) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  FUN_10a462340(param_1);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a462aa0; end: 10a462c0f;  */

void FUN_10a462aa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined1 auStack_70 [8];
  int iStack_68;
  undefined8 *puStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  func_0x00010b0ae4b8(&pppuStack_58,&UNK_10f65ad37,0x7f);
  ppppuVar2 = (undefined8 ****)pppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppppuVar2 = &pppuStack_58;
  }
  uVar1 = param_4[1];
  puVar3 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar3 = param_4;
  }
  func_0x00010989ace0(auStack_70,*(undefined8 *)(param_1 + 0xd0),ppppuVar2,uStack_50,puVar3,uVar1);
  FUN_10a4623cc(*(undefined8 *)(param_1 + 0xe8),param_5,auStack_70,param_2);
  FUN_10a462340(param_1);
  if ((3 < iStack_68) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(pppuStack_58);
  }
  return;
}



/* Entry: 10a462c10; end: 10a462cdb;  */

void FUN_10a462c10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [8];
  int iStack_40;
  undefined8 *puStack_38;
  
  uVar1 = param_5[1];
  puVar2 = (undefined8 *)*param_5;
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_5 + 0x17);
    puVar2 = param_5;
  }
  func_0x00010989b104(auStack_48,*(undefined8 *)(param_1 + 0xd0),param_3,param_4,puVar2,uVar1);
  FUN_10a4623cc(*(undefined8 *)(param_1 + 0xe8),param_6,auStack_48,param_2);
  FUN_10a462340(param_1);
  if ((3 < iStack_40) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a462cdc; end: 10a462e3b;  */

void FUN_10a462cdc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined1 auStack_60 [8];
  int iStack_58;
  undefined8 *puStack_50;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x00010b0ae4b8(&pppuStack_48,&UNK_10f65ad37,0x7f);
  ppppuVar2 = (undefined8 ****)pppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppppuVar2 = &pppuStack_48;
  }
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  func_0x00010989ace0(auStack_60,*(undefined8 *)(param_1 + 0xd0),ppppuVar2,uStack_40,puVar3,uVar1);
  FUN_10a4625b8(*(undefined8 *)(param_1 + 0xf0),param_4,auStack_60);
  FUN_10a462340(param_1);
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if ((char)bStack_31 < '\0') {
    __ZdlPv(pppuStack_48);
  }
  return;
}



/* Entry: 10a462e3c; end: 10a462eeb;  */

void FUN_10a462e3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [8];
  int iStack_30;
  undefined8 *puStack_28;
  
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  func_0x00010989b104(auStack_38,*(undefined8 *)(param_1 + 0xd0),param_2,param_3,puVar2,uVar1);
  FUN_10a4625b8(*(undefined8 *)(param_1 + 0xf0),param_5,auStack_38);
  FUN_10a462340(param_1);
  if ((3 < iStack_30) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a462eec; end: 10a46304b;  */

void FUN_10a462eec(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined1 auStack_60 [8];
  int iStack_58;
  undefined8 *puStack_50;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x00010b0ae4b8(&pppuStack_48,&UNK_10f65ad37,0x7f);
  ppppuVar2 = (undefined8 ****)pppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppppuVar2 = &pppuStack_48;
  }
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  func_0x00010989ace0(auStack_60,*(undefined8 *)(param_1 + 0xd0),ppppuVar2,uStack_40,puVar3,uVar1);
  FUN_10a4625b8(*(undefined8 *)(param_1 + 0xf8),param_4,auStack_60);
  FUN_10a462340(param_1);
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if ((char)bStack_31 < '\0') {
    __ZdlPv(pppuStack_48);
  }
  return;
}



/* Entry: 10a46304c; end: 10a4630fb;  */

void FUN_10a46304c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [8];
  int iStack_30;
  undefined8 *puStack_28;
  
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  func_0x00010989b104(auStack_38,*(undefined8 *)(param_1 + 0xd0),param_2,param_3,puVar2,uVar1);
  FUN_10a4625b8(*(undefined8 *)(param_1 + 0xf8),param_5,auStack_38);
  FUN_10a462340(param_1);
  if ((3 < iStack_30) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a4630fc; end: 10a4634eb;  */

void FUN_10a4630fc(long *param_1,long param_2,long ****param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  long ****pppplVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long lVar8;
  long *plVar9;
  long ***ppplVar10;
  long lVar11;
  long *plVar12;
  long ***ppplStack_c0;
  long **pplStack_b8;
  long ***ppplStack_b0;
  long **pplStack_a8;
  long **pplStack_a0;
  undefined1 auStack_90 [24];
  long ***ppplStack_78;
  long **pplStack_70;
  undefined7 uStack_68;
  char cStack_61;
  
  cVar3 = *(char *)((long)param_3 + 0x17);
  if (cVar3 < '\0') {
    func_0x000107c3192c(&ppplStack_b0,*param_3,param_3[1]);
    cVar3 = *(char *)((long)param_3 + 0x17);
    if (-1 < cVar3) goto LAB_10a463160;
    pppplVar7 = (long ****)*param_3;
    ppplVar10 = param_3[1];
  }
  else {
    pplStack_a8 = (long **)param_3[1];
    ppplStack_b0 = *param_3;
    pplStack_a0 = (long **)param_3[2];
LAB_10a463160:
    ppplVar10 = (long ***)(long)(int)cVar3;
    pppplVar7 = param_3;
  }
  if (10 < (long)ppplVar10) {
    pppplVar2 = (long ****)((long)pppplVar7 + (long)ppplVar10);
    pppplVar6 = pppplVar7;
    while (_memchr(pppplVar6,0x53,(long)ppplVar10 + -10), pppplVar6 != (long ****)0x0) {
      if (*pppplVar6 == (long ***)0x657645656e656353 &&
          *(long *)((long)pppplVar6 + 3) == 0x2e746e657645656e) {
        if ((pppplVar6 != pppplVar2) && ((long)pppplVar6 - (long)pppplVar7 != -1))
        goto LAB_10a463218;
        break;
      }
      pppplVar6 = (long ****)((long)pppplVar6 + 1);
      ppplVar10 = (long ***)((long)pppplVar2 - (long)pppplVar6);
      if ((long)ppplVar10 < 0xb) break;
    }
  }
  pppplVar6 = (long ****)&UNK_10e4b6e58;
  FUN_10a0b4df8(&ppplStack_78,&UNK_10e4b6e58,param_3);
  if ((long)pplStack_a0 < 0) {
    __ZdlPv();
    pppplVar6 = (long ****)ppplStack_b0;
  }
  pplStack_a8 = pplStack_70;
  ppplStack_b0 = ppplStack_78;
  pplStack_a0 = (long **)CONCAT17(cStack_61,uStack_68);
LAB_10a463218:
  lVar11 = *(long *)(param_2 + 0x10);
  pplStack_b8 = pplStack_a8;
  ppplStack_c0 = ppplStack_b0;
  if (-1 < (long)pplStack_a0) {
    pplStack_b8 = (long **)((ulong)pplStack_a0 >> 0x38);
    ppplStack_c0 = (long ***)&ppplStack_b0;
  }
  FUN_10a3ca004();
  FUN_10a3ca840();
  pppplVar7 = pppplVar6;
  FUN_10a10bbb4();
  if (pppplVar7 == (long ****)0x0) {
    FUN_10a0ee900(&ppplStack_78,&UNK_10f63cd1e,0x2c);
    FUN_10a10bcb0(&ppplStack_78);
LAB_10a463478:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a46347c);
    (*pcVar5)();
  }
  if (*(int *)(pppplVar7 + 4) < *(int *)(*(long *)(lVar11 + 0x100) + 0x288)) {
    FUN_10a0ee900(&ppplStack_78,&UNK_10f63cd4b,0x32);
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      if (-1 < cStack_61) {
        ppplStack_78 = (long ***)&ppplStack_78;
      }
      func_0x00010ae06f08(1,8,&UNK_10f63cd7e,&UNK_10f65b212,0xbf,"%s",param_8,param_9,ppplStack_78);
    }
    func_0x0001098998d4(auStack_90,&ppplStack_c0);
    FUN_10a10be38(&ppplStack_78,auStack_90,param_4,param_5,*(undefined4 *)(pppplVar7 + 4));
    goto LAB_10a463478;
  }
  lVar8 = lVar11;
  (*(code *)pppplVar7[5])(lVar11,param_4,param_5,pppplVar7 + 5);
  if ((lVar8 == 0) || (___dynamic_cast(), lVar8 == 0)) {
    FUN_10a2719b0(&UNK_10f648c9d);
    goto LAB_10a463478;
  }
  FUN_10a570894(pppplVar6,lVar11,ppplStack_c0,pplStack_b8);
  *param_1 = lVar8;
  plVar9 = (long *)0x20;
  __Znwm();
  plVar12 = plVar9 + 1;
  *plVar12 = 0;
  *plVar9 = (long)&PTR_FUN_110bdd910;
  plVar9[2] = 0;
  plVar9[3] = lVar8;
  param_1[1] = (long)plVar9;
  if (*(long *)(lVar8 + 0x30) == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar9 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(long *)(lVar8 + 0x28) = lVar8;
    *(long **)(lVar8 + 0x30) = plVar9;
  }
  else {
    if (*(long *)(*(long *)(lVar8 + 0x30) + 8) != -1) goto LAB_10a46337c;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar9 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(long *)(lVar8 + 0x28) = lVar8;
    *(long **)(lVar8 + 0x30) = plVar9;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar11 = *plVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10a46337c:
  if ((long)pplStack_a0 < 0) {
    __ZdlPv(ppplStack_b0);
  }
  return;
}



/* Entry: 10a4634ec; end: 10a463537;  */

void FUN_10a4634ec(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x1b0);
  FUN_10a463538(param_1 + 0x198,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x1b0);
  return;
}



/* Entry: 10a463538; end: 10a463657;  */

undefined8 * FUN_10a463538(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    puVar7 = puVar3 + 8;
    *puVar3 = *param_2;
    (**(code **)(param_2[1] + 0x10))(puVar3 + 1,param_2 + 1);
    param_1[1] = (long)puVar7;
  }
  else {
    lVar6 = (long)puVar3 - *param_1;
    uVar1 = (lVar6 >> 6) + 1;
    if (uVar1 >> 0x3a != 0) {
      FUN_10a4736a4();
      func_0x00010a4736ec(&plStack_58);
      __Unwind_Resume();
      lVar6 = 0;
      do {
        __ZNSt3__15mutex4lockEv(param_1 + 0x36);
        puVar3 = (undefined8 *)param_1[0x33];
        puVar7 = (undefined8 *)param_1[0x34];
        if (puVar3 == puVar7) {
          __ZNSt3__15mutex6unlockEv(param_1 + 0x36);
          break;
        }
        lStack_b0 = param_1[0x35];
        param_1[0x33] = 0;
        param_1[0x34] = 0;
        param_1[0x35] = 0;
        puStack_c0 = puVar3;
        puStack_b8 = puVar7;
        __ZNSt3__15mutex6unlockEv(param_1 + 0x36);
        puVar7 = puStack_b8;
        for (puVar3 = puStack_c0; puVar3 != puVar7; puVar3 = puVar3 + 8) {
          (*(code *)*puVar3)(puVar3);
        }
        if (param_1[5] != 0) {
          FUN_109d202f4();
        }
        puStack_a8 = (undefined1 *)&puStack_c0;
        FUN_10a47332c(&puStack_a8);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 10);
      puVar3 = (undefined8 *)param_1[5];
      if (puVar3 != (undefined8 *)0x0) {
        FUN_109d202f4();
      }
      return puVar3;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 5;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar5 = 0x3ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a4736b8();
    }
    puStack_50 = (undefined8 *)((long)plVar2 + lVar6);
    plStack_40 = plVar2 + uVar5 * 8;
    puVar3 = puStack_50 + 8;
    *puStack_50 = *param_2;
    plStack_58 = plVar2;
    (**(code **)(param_2[1] + 0x10))(puStack_50 + 1,param_2 + 1);
    puStack_48 = puVar3;
    FUN_10a4735c0(param_1,&plStack_58);
    puVar7 = (undefined8 *)param_1[1];
    func_0x00010a4736ec(&plStack_58);
  }
  param_1[1] = (long)puVar7;
  return puVar7 + -8;
}



/* Entry: 10a463658; end: 10a46373b;  */

void FUN_10a463658(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  lVar3 = 0;
  do {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1b0);
    puVar2 = *(undefined8 **)(param_1 + 0x198);
    puVar1 = *(undefined8 **)(param_1 + 0x1a0);
    if (puVar2 == puVar1) {
      __ZNSt3__15mutex6unlockEv(param_1 + 0x1b0);
      break;
    }
    uStack_50 = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    puStack_60 = puVar2;
    puStack_58 = puVar1;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1b0);
    puVar1 = puStack_58;
    for (puVar2 = puStack_60; puVar2 != puVar1; puVar2 = puVar2 + 8) {
      (*(code *)*puVar2)(puVar2);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_109d202f4();
    }
    puStack_48 = (undefined1 *)&puStack_60;
    FUN_10a47332c(&puStack_48);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 10);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_109d202f4();
  }
  return;
}



/* Entry: 10a46373c; end: 10a463ca3;  */

/* WARNING: Removing unreachable block (ram,0x00010a4638d4) */
/* WARNING: Removing unreachable block (ram,0x00010a4638d8) */
/* WARNING: Removing unreachable block (ram,0x00010a4638e0) */
/* WARNING: Removing unreachable block (ram,0x00010a4638e8) */
/* WARNING: Removing unreachable block (ram,0x00010a4638ec) */

void FUN_10a46373c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long *plStack_1f0;
  long *plStack_1e8;
  code *pcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined1 uStack_1b9;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 *puStack_128;
  code *pcStack_120;
  char cStack_111;
  undefined8 *apuStack_108 [8];
  undefined8 *apuStack_c8 [7];
  code *pcStack_90;
  long *plStack_88;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (*ppuVar10 == *(undefined **)(param_1 + 0x10)) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  }
  else if (*(long *)(param_1 + 0x68) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x68) + 0xb8);
    func_0x0001098956bc();
    if ((int)lVar5 == 0) {
      puVar9 = (undefined8 *)(param_1 + 0xb8);
      ppuVar10 = (undefined **)*puVar9;
      if (ppuVar10 == (undefined **)0x0) {
        FUN_109d1ba5c();
        uStack_150 = 0;
        uStack_158 = 0;
        uStack_140 = 0;
        uStack_148 = 0;
        uStack_160 = 0;
        uStack_168 = 0;
        puStack_178 = &UNK_1053a6a3c;
        ppuStack_170 = &PTR_DAT_110ae9180;
        uStack_180 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_1a8 = 0;
        puStack_1b8 = &UNK_1053a6a3c;
        ppuStack_1b0 = &PTR_DAT_110ae9180;
        FUN_109d1b72c(&plStack_138,&UNK_10f659c49,5,*(undefined4 *)(lVar5 + 0x18),&puStack_178,
                      &puStack_1b8,0);
        uStack_1c8 = 1;
        FUN_109d1f2ec(&pcStack_1e0,&uStack_1b9,&plStack_138,&uStack_1c8);
        pcStack_90 = pcStack_1e0;
        plStack_88 = (long *)&UNK_109896774;
        ppuStack_80 = &PTR_DAT_110b17068;
        uStack_70 = uStack_1d8;
        pcStack_78 = pcStack_1e0;
        plVar6 = (long *)0xd0;
        __Znwm();
        plVar6[1] = 0;
        plVar6[2] = 0;
        plVar7 = plVar6 + 3;
        *plVar6 = (long)&PTR_DAT_110ae90f0;
        func_0x000109d18d1c(plVar7,&UNK_10f659c3f,9,&pcStack_90);
        plStack_1f0 = plVar7;
        plStack_1e8 = plVar6;
        func_0x00010a21ba78(puVar9,&plStack_1f0);
        plVar6 = plStack_1e8;
        if (plStack_1e8 != (long *)0x0) {
          plVar7 = plStack_1e8 + 1;
          do {
            lVar5 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        func_0x0001092ba41c(&pcStack_90);
        (*(code *)*apuStack_c8[0])(apuStack_c8);
        (*(code *)*apuStack_108[0])(apuStack_108);
        if (cStack_111 < '\0') {
          __ZdlPv(puStack_128);
        }
        (*(code *)*ppuStack_1b0)(&ppuStack_1b0);
        (*(code *)*ppuStack_170)(&ppuStack_170);
        ppuVar10 = (undefined **)*puVar9;
      }
      plVar6 = (long *)ppuVar10[2];
      plStack_130 = (long *)0x0;
      puStack_128 = (undefined8 *)0x0;
      if (plVar6 == (long *)0x0) {
        puVar9 = (undefined8 *)0xc0;
        __Znwm();
        puVar9[2] = 0;
        puVar9[1] = 0x200000006;
        *(undefined2 *)(puVar9 + 3) = 4;
        puVar9[5] = 0;
        puVar9[4] = 0;
        puVar9[7] = 0;
        puVar9[6] = 0;
        puVar9[9] = 0;
        puVar9[8] = 0;
        puVar9[0xb] = 0;
        puVar9[10] = 0;
        puVar9[0xd] = 0;
        puVar9[0xc] = 0;
        puVar9[0xf] = 0;
        puVar9[0xe] = 0;
        puVar9[0x10] = 0;
        puVar9[0x11] = puVar9 + 3;
        puVar9[0x12] = 0;
        *(undefined2 *)(puVar9 + 0x13) = 0;
        *puVar9 = &PTR_DAT_110bdc1f0;
        plStack_138 = puVar9 + 0x14;
        *plStack_138 = param_1;
        *(undefined1 *)(puVar9 + 0x16) = 1;
        puVar9[0x17] = 0;
        pcStack_120 = FUN_10a473770;
        plStack_130 = puVar9;
        puStack_128 = puVar9;
      }
      else {
        pcStack_90 = (code *)0x0;
        (**(code **)(*plVar6 + 0x28))(plVar6,0,&pcStack_90);
        if (pcStack_90 != (code *)0x0) goto LAB_10a463c0c;
        puVar9 = (undefined8 *)0xc8;
        __Znwm();
        puVar9[2] = 0;
        puVar9[1] = 0x200000006;
        *(undefined2 *)(puVar9 + 3) = 4;
        puVar9[5] = 0;
        puVar9[4] = 0;
        puVar9[7] = 0;
        puVar9[6] = 0;
        puVar9[9] = 0;
        puVar9[8] = 0;
        puVar9[0xb] = 0;
        puVar9[10] = 0;
        puVar9[0xd] = 0;
        puVar9[0xc] = 0;
        puVar9[0xf] = 0;
        puVar9[0xe] = 0;
        puVar9[0x10] = 0;
        puVar9[0x11] = puVar9 + 3;
        puVar9[0x12] = 0;
        *(undefined2 *)(puVar9 + 0x13) = 0;
        puVar9[0x14] = param_1;
        *puVar9 = &PTR_FUN_110bdc1b8;
        *(undefined1 *)(puVar9 + 0x16) = 1;
        puVar9[0x17] = 0;
        puVar9[0x18] = plVar6;
        if (plStack_130 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_130 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plStack_130 + 8))();
            }
          }
        }
        plStack_130 = puVar9;
        if (puStack_128 != (undefined8 *)0x0) {
          func_0x0001092b4274(&puStack_128);
        }
        pcStack_120 = (code *)0x10a473740;
        plStack_138 = puVar9 + 0x14;
        puStack_128 = puVar9;
        __ZNSt13exception_ptrD1Ev(&pcStack_90);
      }
      plVar6 = plStack_138;
      if (plStack_138[3] != 0) {
        func_0x0001092b4274();
      }
      plVar6[3] = (long)puStack_128;
      puStack_128 = (undefined8 *)0x0;
      pcStack_90 = pcStack_120;
      plStack_88 = plStack_138;
      ppuStack_80 = ppuVar10;
      (**(code **)*ppuVar10)(ppuVar10,&pcStack_90);
      plVar6 = plStack_130;
      plStack_130 = (long *)0x0;
      if ((puStack_128 != (undefined8 *)0x0) &&
         (func_0x0001092b4274(&puStack_128), plStack_130 != (long *)0x0)) {
        puVar1 = (ulong *)(plStack_130 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plStack_130 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0xb0);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      *(long **)(param_1 + 0xb0) = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_10a463c0c:
  func_0x0001092af97c(&pcStack_90);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a463c18);
  (*pcVar4)();
}



/* Entry: 10a463ca4; end: 10a463d3f;  */

long FUN_10a463ca4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long *in_stack_ffffffffffffffd8;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_109d202f4();
  }
  FUN_109d1918c(&stack0xffffffffffffffd8,*(undefined8 *)(param_1 + 0x68));
  if (in_stack_ffffffffffffffd8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffd8 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffd8 + 8))();
      }
    }
  }
  puVar6 = *(undefined **)(param_1 + 0x28);
  if (puVar6 != (undefined *)0x0) {
    ppuVar4 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    lVar8 = 0;
    puVar9 = *ppuVar4;
    *ppuVar4 = puVar6;
    uStack_48 = 0;
    uStack_40 = 0;
    puStack_38 = (undefined *)0x0;
    while( true ) {
      puVar5 = puVar6 + 0x18;
      FUN_109d203a8(puVar5,&uStack_48);
      if ((int)puVar5 == 0) break;
      *ppuVar4 = puStack_38;
      FUN_109d1aecc(&uStack_48);
      lVar8 = lVar8 + 1;
    }
    *ppuVar4 = puVar9;
    return lVar8;
  }
  return 0;
}



/* Entry: 10a463d40; end: 10a463def;  */

void FUN_10a463d40(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined **ppuVar3;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 == 0) {
    return;
  }
  lVar2 = param_1 + 0x288;
  FUN_10a48f7e0();
  if (lVar2 == 0) {
    FUN_10ae03140();
    ppuVar3 = &PTR_PTR_113302108;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar3,&PTR_PTR_113302108);
  }
  param_1 = param_1 + 0x288;
  lVar2 = param_1;
  FUN_10a48f7e0(param_1,param_2);
  if (lVar2 != 0) {
    func_0x00010a48f8f8(param_1,lVar2);
  }
  return;
}



/* Entry: 10a463df0; end: 10a46438f;  */

undefined8 FUN_10a463df0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *unaff_x24;
  long *plVar19;
  float fVar20;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
    return 0;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0xa20);
  if (*(char *)(lVar10 + 0x21) == '\x01') {
    if ((*(byte *)(lVar10 + 0x20) & 1) != 0) {
      return 0;
    }
  }
  else if (0xe8 < *(int *)(lVar10 + 0x18)) {
    return 0;
  }
  if (*(char *)(lVar7 + 0x157) < '\0') {
    func_0x000107c3192c(&lStack_80,*(undefined8 *)(lVar7 + 0x140),*(undefined8 *)(lVar7 + 0x148));
  }
  else {
    uStack_78 = *(ulong *)(lVar7 + 0x148);
    lStack_80 = *(long *)(lVar7 + 0x140);
    uStack_70 = *(ulong *)(lVar7 + 0x150);
  }
  uVar18 = uStack_78;
  if (-1 < (long)uStack_70) {
    uVar18 = uStack_70 >> 0x38;
  }
  if (uVar18 != 0) {
    plVar5 = (long *)(param_1 + 0x288);
    plVar12 = plVar5;
    FUN_10a48f7e0(plVar5,&lStack_80);
    if (plVar12 == (long *)0x0) {
      lVar7 = param_2[1];
      lVar10 = *param_2;
      if (lVar7 != 0) {
        plVar12 = (long *)(lVar7 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = *plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar12 = plVar5;
      func_0x000107c2b05c(plVar5,&lStack_80);
      plVar19 = *(long **)(param_1 + 0x290);
      if (plVar19 != (long *)0x0) {
        uVar18 = (long)plVar19 - 1;
        if (((ulong)plVar19 & uVar18) == 0) {
          unaff_x24 = (long *)(uVar18 & (ulong)plVar12);
        }
        else {
          unaff_x24 = plVar12;
          if (plVar19 <= plVar12) {
            uVar3 = 0;
            if (plVar19 != (long *)0x0) {
              uVar3 = (ulong)plVar12 / (ulong)plVar19;
            }
            unaff_x24 = (long *)((long)plVar12 - uVar3 * (long)plVar19);
          }
        }
        plVar8 = *(long **)(*plVar5 + (long)unaff_x24 * 8);
        if (plVar8 != (long *)0x0) {
          for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            plVar9 = (long *)plVar8[1];
            if (plVar9 == plVar12) {
              plVar9 = plVar5;
              func_0x000107c2b068(plVar5,plVar8 + 2,&lStack_80);
              if (((ulong)plVar9 & 1) != 0) goto LAB_10a4642cc;
            }
            else {
              if (((ulong)plVar19 & uVar18) == 0) {
                plVar9 = (long *)((ulong)plVar9 & uVar18);
              }
              else if (plVar19 <= plVar9) {
                uVar3 = 0;
                if (plVar19 != (long *)0x0) {
                  uVar3 = (ulong)plVar9 / (ulong)plVar19;
                }
                plVar9 = (long *)((long)plVar9 - uVar3 * (long)plVar19);
              }
              if (plVar9 != unaff_x24) break;
            }
          }
        }
      }
      plVar8 = (long *)0x50;
      __Znwm();
      uStack_58 = 0;
      *plVar8 = 0;
      plVar8[1] = (long)plVar12;
      plStack_68 = plVar8;
      plStack_60 = plVar5;
      if ((long)uStack_70 < 0) {
        func_0x000107c3192c(plVar8 + 2,lStack_80,uStack_78);
      }
      else {
        plVar8[3] = uStack_78;
        plVar8[2] = lStack_80;
        plVar8[4] = uStack_70;
      }
      plVar8[5] = lVar10;
      plVar8[6] = lVar7;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar8[7] = 0;
      plVar8[8] = 0;
      *(undefined2 *)(plVar8 + 9) = 0;
      uStack_58 = CONCAT71(uStack_58._1_7_,1);
      fVar20 = (float)(*(long *)(param_1 + 0x2a0) + 1);
      if ((plVar19 == (long *)0x0) || (*(float *)(param_1 + 0x2a8) * (float)plVar19 < fVar20)) {
        uVar18 = 1;
        if ((long *)0x2 < plVar19) {
          uVar18 = (ulong)(((ulong)plVar19 & (long)plVar19 - 1U) != 0);
        }
        plVar9 = (long *)(uVar18 | (long)plVar19 << 1);
        plVar19 = (long *)(long)(fVar20 / *(float *)(param_1 + 0x2a8));
        if (plVar9 <= plVar19) {
          plVar9 = plVar19;
        }
        if ((long)plVar9 - 1U == 0) {
          plVar9 = (long *)0x2;
        }
        else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar19 = *(long **)(param_1 + 0x290);
        if (plVar19 < plVar9) {
LAB_10a4640e0:
          if ((ulong)plVar9 >> 0x3d != 0) {
            func_0x000109ffded8();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a464350);
            (*pcVar4)();
          }
          lVar10 = (long)plVar9 << 3;
          __Znwm();
          lVar6 = *plVar5;
          *plVar5 = lVar10;
          if (lVar6 != 0) {
            __ZdlPv();
          }
          plVar19 = (long *)0x0;
          *(long **)(param_1 + 0x290) = plVar9;
          do {
            *(undefined8 *)(*plVar5 + (long)plVar19 * 8) = 0;
            plVar19 = (long *)((long)plVar19 + 1);
          } while (plVar9 != plVar19);
          plVar11 = *(long **)(param_1 + 0x298);
          plVar19 = plVar9;
          if (plVar11 != (long *)0x0) {
            plVar13 = (long *)plVar11[1];
            uVar18 = (long)plVar9 - 1;
            if (((ulong)plVar9 & uVar18) == 0) {
              plVar13 = (long *)((ulong)plVar13 & uVar18);
            }
            else if (plVar9 <= plVar13) {
              uVar3 = 0;
              if (plVar9 != (long *)0x0) {
                uVar3 = (ulong)plVar13 / (ulong)plVar9;
              }
              plVar13 = (long *)((long)plVar13 - uVar3 * (long)plVar9);
            }
            *(long *)(*plVar5 + (long)plVar13 * 8) = param_1 + 0x298;
            plVar14 = (long *)*plVar11;
            while (plVar14 != (long *)0x0) {
              plVar16 = (long *)plVar14[1];
              if (((ulong)plVar9 & uVar18) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar18);
              }
              else if (plVar9 <= plVar16) {
                uVar3 = 0;
                if (plVar9 != (long *)0x0) {
                  uVar3 = (ulong)plVar16 / (ulong)plVar9;
                }
                plVar16 = (long *)((long)plVar16 - uVar3 * (long)plVar9);
              }
              plVar15 = plVar14;
              if (plVar16 != plVar13) {
                lVar10 = *plVar5;
                if (*(long *)(lVar10 + (long)plVar16 * 8) == 0) {
                  *(long **)(lVar10 + (long)plVar16 * 8) = plVar11;
                  plVar13 = plVar16;
                }
                else {
                  *plVar11 = *plVar14;
                  *plVar14 = **(undefined8 **)(lVar10 + (long)plVar16 * 8);
                  **(long **)(lVar10 + (long)plVar16 * 8) = (long)plVar14;
                  plVar15 = plVar11;
                }
              }
              plVar11 = plVar15;
              plVar14 = (long *)*plVar15;
            }
          }
        }
        else if (plVar9 < plVar19) {
          plVar11 = (long *)(long)((float)*(ulong *)(param_1 + 0x2a0) / *(float *)(param_1 + 0x2a8))
          ;
          if ((plVar19 < (long *)0x3) || (((ulong)plVar19 & (long)plVar19 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar11) {
            plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 + -1) & 0x3fU));
          }
          if (plVar9 <= plVar11) {
            plVar9 = plVar11;
          }
          if (plVar9 < plVar19) {
            if (plVar9 != (long *)0x0) goto LAB_10a4640e0;
            lVar10 = *plVar5;
            *plVar5 = 0;
            if (lVar10 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(param_1 + 0x290) = 0;
            plVar19 = (long *)0x0;
          }
          else {
            plVar19 = *(long **)(param_1 + 0x290);
          }
        }
        if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
          unaff_x24 = (long *)((long)plVar19 - 1U & (ulong)plVar12);
        }
        else {
          unaff_x24 = plVar12;
          if (plVar19 <= plVar12) {
            uVar18 = 0;
            if (plVar19 != (long *)0x0) {
              uVar18 = (ulong)plVar12 / (ulong)plVar19;
            }
            unaff_x24 = (long *)((long)plVar12 - uVar18 * (long)plVar19);
          }
        }
      }
      lVar10 = *plVar5;
      plVar12 = *(long **)(lVar10 + (long)unaff_x24 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar8 = *(long *)(param_1 + 0x298);
        *(long **)(param_1 + 0x298) = plVar8;
        *(long *)(lVar10 + (long)unaff_x24 * 8) = param_1 + 0x298;
        if (*plVar8 != 0) {
          plVar12 = *(long **)(*plVar8 + 8);
          if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
            plVar12 = (long *)((ulong)plVar12 & (long)plVar19 - 1U);
          }
          else if (plVar19 <= plVar12) {
            uVar18 = 0;
            if (plVar19 != (long *)0x0) {
              uVar18 = (ulong)plVar12 / (ulong)plVar19;
            }
            plVar12 = (long *)((long)plVar12 - uVar18 * (long)plVar19);
          }
          *(long **)(*plVar5 + (long)plVar12 * 8) = plVar8;
        }
      }
      else {
        *plVar8 = *plVar12;
        *plVar12 = (long)plVar8;
      }
      *(long *)(param_1 + 0x2a0) = *(long *)(param_1 + 0x2a0) + 1;
LAB_10a4642cc:
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
      }
      uVar17 = 1;
      goto LAB_10a4642dc;
    }
    plVar5 = (long *)plVar12[6];
    if (plVar5 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      uVar17 = 0;
      if (plVar5 == (long *)0x0) goto LAB_10a4642dc;
      if ((plVar12[5] != 0) && (*(long *)(plVar12[5] + 0x158) != *(long *)(*param_2 + 0x158))) {
        *(undefined1 *)((long)plVar12 + 0x49) = 1;
      }
      plVar12 = plVar5 + 1;
      do {
        lVar7 = *plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  uVar17 = 0;
LAB_10a4642dc:
  if ((long)uStack_70 < 0) {
    __ZdlPv(lStack_80);
    return uVar17;
  }
  return uVar17;
}


