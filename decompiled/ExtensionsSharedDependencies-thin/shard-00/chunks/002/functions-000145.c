/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00396248; end: 0039628b;  */

void FUN_00396248(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 8;
  param_2[0x69] = uVar1;
  return;
}



/* Entry: 0039628c; end: 00396387;  */

void FUN_0039628c(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4,
                 code *param_5,code *param_6)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  (*param_5)();
  (*param_6)();
  func_0x005748b4();
  lStack_70 = param_4 - (long)auStack_68;
  puStack_78 = auStack_68;
  FUN_0035d0e4(&puStack_90,auStack_68);
  ppuVar1 = (undefined1 **)puStack_90;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    ppuVar1 = &puStack_90;
  }
  FUN_003ff220(param_1,param_2,param_3,ppuVar1,uStack_88);
  if ((char)bStack_79 < '\0') {
    param_2 = puStack_90;
    __ZdlPv(puStack_90);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    if ((char)bStack_79 < '\0') {
      __ZdlPv(puStack_90);
    }
    __Unwind_Resume(param_2);
    return;
  }
  return;
}



/* Entry: 00396388; end: 0039638b;  */

void FUN_00396388(void)

{
  return;
}



/* Entry: 0039638c; end: 003963cf;  */

void FUN_0039638c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_00396410();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_003964ec();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 003963d0; end: 0039640f;  */

segment_command *
FUN_003963d0(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  segment_command *psVar10;
  long *plVar11;
  segment_command *psVar12;
  qword *pqVar13;
  qword *pqVar14;
  long *plVar15;
  uint uVar16;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar17;
  qword qVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  qword qVar29;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar30;
  undefined8 uVar31;
  qword qVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 0xc) &&
     (lVar17._0_4_ = param_2->cmd, lVar17._4_4_ = param_2->cmdsize,
     lVar17 == 0x2d746e65746e6f63 && *(int *)param_2->segname == 0x65707974)) {
    psVar12 = param_4;
    FUN_003967d8();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00396894();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 2) && ((short)param_2->cmd == 0x6574)) {
    psVar12 = param_4;
    FUN_00396b7c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00396c38();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(char *)(param_1 + 1) = (char)psVar12;
    return psVar10;
  }
  if ((param_3 == 0xd) &&
     (lVar34._0_4_ = param_2->cmd, lVar34._4_4_ = param_2->cmdsize,
     lVar34 == 0x636e652d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x676e69646f636e65))
  {
    psVar12 = param_4;
    FUN_00396f4c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397008();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x1e) &&
     (lVar35._0_4_ = param_2->cmd, lVar35._4_4_ = param_2->cmdsize,
     ((lVar35 == 0x746e692d63707267 && *(long *)param_2->segname == 0x6e652d6c616e7265) &&
     *(long *)(param_2->segname + 8) == 0x722d676e69646f63) &&
     *(long *)(param_2->segname + 0xe) == 0x747365757165722d)) {
    psVar12 = param_4;
    FUN_00396f4c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397320();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x14) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     (lVar1 == 0x6363612d63707267 && *(long *)param_2->segname == 0x6f636e652d747065) &&
     *(int *)(param_2->segname + 8) == 0x676e6964)) {
    psVar12 = param_4;
    FUN_00397484();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_0039755c();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    psVar10 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar10->cmd = (char)psVar12;
    param_1[1] = psVar10;
    return psVar10;
  }
  if ((param_3 == 0xb) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize,
     lVar20 == 0x6174732d63707267 && *(long *)((long)&param_2->cmd + 3) == 0x7375746174732d63)) {
    psVar12 = param_4;
    FUN_003978c8();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397984();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0xc) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    psVar12 = param_4;
    FUN_00397cbc();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 0x1a) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     ((lVar2 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    psVar12 = param_4;
    FUN_00396040();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003980dc();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x16) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     (lVar3 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar12 = param_4;
    FUN_00398224();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 10) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar17 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar17) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar12;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     lVar23 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar4._0_4_ = param_2->cmd, lVar4._4_4_ = param_2->cmdsize,
     ((lVar4 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar5._0_4_ = param_2->cmd, lVar5._4_4_ = param_2->cmdsize,
     (lVar5 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     lVar24 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize,
     lVar25 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar6._0_4_ = param_2->cmd, lVar6._4_4_ = param_2->cmdsize,
     (lVar6 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar12 = param_4;
    FUN_00399244();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 0xb) &&
     (lVar26._0_4_ = param_2->cmd, lVar26._4_4_ = param_2->cmdsize,
     lVar26 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar12 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar18 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar12;
    *(int *)(param_1 + 5) = (int)qVar18;
    psVar12 = &segment_command_00000020;
    __Znwm();
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar12->cmd = (int)uVar30;
    psVar12->cmdsize = (int)((ulong)uVar30 >> 0x20);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar12->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar12->segname = uVar30;
    psVar12->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar12;
    return psVar12;
  }
  if ((param_3 == 8) &&
     (lVar28._0_4_ = param_2->cmd, lVar28._4_4_ = param_2->cmdsize, lVar28 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar18 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar12;
    *(int *)(param_1 + 5) = (int)qVar18;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar12;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar12);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar9 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar9 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar15 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar17 = *(long *)param_4;
  qVar18 = param_4->vmaddr;
  uVar30 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar17;
  *(qword *)((long)register0x00000008 + -0x58) = qVar18;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar30;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar14 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar11 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
    do {
      lVar17 = *plVar11;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar17 + -1 == 0) {
      (*(code *)plVar11[1])();
    }
  }
  psVar12 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar12) {
    do {
      lVar17 = *(long *)psVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar12,0x10);
      if (bVar8) {
        *(long *)psVar12 = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)psVar12->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar12;
  }
  ___stack_chk_fail();
  if ((int)pqVar14 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar10 = psVar12;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar12;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar18 = *pqVar14;
  if (qVar18 == 0) {
    qVar32 = (long)pqVar14 + 9;
    qVar29 = (qword)(byte)pqVar14[1];
  }
  else {
    qVar29 = pqVar14[1];
    qVar32 = pqVar14[2];
  }
  if (qVar29 < 4) {
    uVar27 = 0;
  }
  else {
    uVar27 = (ulong)(*(int *)(qVar29 + qVar32 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar10 = &UNK_009dee20 + uVar27 * 0x40;
  if (qVar18 == 0) {
    uVar16 = (uint)(byte)pqVar14[1];
  }
  else {
    uVar16 = (uint)pqVar14[1];
  }
  if (*plVar15 == 0) {
    uVar19 = (uint)*(byte *)(plVar15 + 1);
  }
  else {
    uVar19 = (uint)plVar15[1];
  }
  *(uint *)&psVar10->fileoff = uVar19 + uVar16 + 0x20;
  pqVar13 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar18 = *pqVar14;
  qVar29 = pqVar14[3];
  qVar32 = pqVar14[2];
  pqVar13[1] = pqVar14[1];
  *pqVar13 = qVar18;
  pqVar13[3] = qVar29;
  pqVar13[2] = qVar32;
  pqVar14[1] = 0;
  *pqVar14 = 0;
  pqVar14[3] = 0;
  pqVar14[2] = 0;
  lVar17 = *plVar15;
  lVar35 = plVar15[3];
  lVar34 = plVar15[2];
  pqVar13[5] = plVar15[1];
  pqVar13[4] = lVar17;
  pqVar13[7] = lVar35;
  pqVar13[6] = lVar34;
  plVar15[1] = 0;
  *plVar15 = 0;
  plVar15[3] = 0;
  plVar15[2] = 0;
  *(qword **)psVar10->segname = pqVar13;
  return psVar10;
}



/* Entry: 00396410; end: 003964eb;  */

ulong FUN_00396410(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = uStack_48 & 0xff;
  uVar3 = (ulong)&plStack_50 | 9;
  if (plStack_50 != (long *)0x0) {
    uVar6 = uStack_48;
    uVar3 = uStack_40;
  }
  FUN_003feac4(uVar3,uVar6,param_1[4],param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    if (iVar5 != 0) {
      func_0x0040cf10(plVar4);
      FUN_0034b418(&plStack_50);
    }
    __Unwind_Resume(plVar4);
    if ((bRam0000000000afa738 & 1) == 0) {
      iVar5 = 0xafa738;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        uRam0000000000afa6f8 = 0;
        uRam0000000000afa700 = 0x3ff2e4;
        pcRam0000000000afa708 = FUN_00396660;
        pcRam0000000000afa710 = FUN_0039657c;
        uRam0000000000afa718 = 0x396680;
        pcRam0000000000afa720 = ":scheme";
        uRam0000000000afa728 = 7;
        uRam0000000000afa730 = 0;
        ___cxa_guard_release(0xafa738);
      }
    }
    return 0xafa6f8;
  }
  return uVar3;
}



/* Entry: 003964ec; end: 0039657b;  */

undefined8 FUN_003964ec(void)

{
  int iVar1;
  
  if ((bRam0000000000afa738 & 1) == 0) {
    iVar1 = 0xafa738;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa6f8 = 0;
      uRam0000000000afa700 = 0x3ff2e4;
      pcRam0000000000afa708 = FUN_00396660;
      pcRam0000000000afa710 = FUN_0039657c;
      uRam0000000000afa718 = 0x396680;
      pcRam0000000000afa720 = ":scheme";
      uRam0000000000afa728 = 7;
      uRam0000000000afa730 = 0;
      ___cxa_guard_release(0xafa738);
    }
  }
  return 0xafa6f8;
}



/* Entry: 0039657c; end: 0039665f;  */

void FUN_0039657c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  uint *puStack_50;
  uint *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_48 = (uint *)param_1[1];
  puStack_50 = (uint *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar6 = (uint *)((ulong)puStack_48 & 0xff);
  uVar4 = (ulong)&puStack_50 | 9;
  if (puStack_50 != (uint *)0x0) {
    puVar6 = puStack_48;
    uVar4 = uStack_40;
  }
  FUN_003feac4(uVar4,puVar6,param_2,param_3);
  puVar5 = puStack_50;
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_50) {
    do {
      lVar7 = *(long *)puStack_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
      if (bVar3) {
        *(long *)puStack_50 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(puStack_50 + 2))();
    }
  }
  *(int *)(param_4 + 8) = (int)uVar4;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    if ((int)puVar6 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&puStack_50);
    }
    __Unwind_Resume();
    uVar1 = *puVar5;
    *puVar6 = *puVar6 | 0x10;
    puVar6[0x68] = uVar1;
    return;
  }
  return;
}



/* Entry: 00396660; end: 003966a3;  */

void FUN_00396660(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x10;
  param_2[0x68] = uVar1;
  return;
}



/* Entry: 003966a4; end: 0039676f;  */

void FUN_003966a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  FUN_0035d0e4(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_003ff220(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 00396770; end: 003967b3;  */

void FUN_00396770(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_003967d8();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_00396894();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 003967b4; end: 003967d7;  */

segment_command *
FUN_003967b4(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  segment_command *psVar9;
  long *plVar10;
  segment_command *psVar11;
  qword *pqVar12;
  qword *pqVar13;
  long *plVar14;
  uint uVar15;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar16;
  qword qVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  qword qVar28;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar29;
  undefined8 uVar30;
  qword qVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 2) && ((short)param_2->cmd == 0x6574)) {
    psVar11 = param_4;
    FUN_00396b7c();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00396c38();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(char *)(param_1 + 1) = (char)psVar11;
    return psVar9;
  }
  if ((param_3 == 0xd) &&
     (lVar16._0_4_ = param_2->cmd, lVar16._4_4_ = param_2->cmdsize,
     lVar16 == 0x636e652d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x676e69646f636e65))
  {
    psVar11 = param_4;
    FUN_00396f4c();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397008();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0x1e) &&
     (lVar33._0_4_ = param_2->cmd, lVar33._4_4_ = param_2->cmdsize,
     ((lVar33 == 0x746e692d63707267 && *(long *)param_2->segname == 0x6e652d6c616e7265) &&
     *(long *)(param_2->segname + 8) == 0x722d676e69646f63) &&
     *(long *)(param_2->segname + 0xe) == 0x747365757165722d)) {
    psVar11 = param_4;
    FUN_00396f4c();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397320();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0x14) &&
     (lVar34._0_4_ = param_2->cmd, lVar34._4_4_ = param_2->cmdsize,
     (lVar34 == 0x6363612d63707267 && *(long *)param_2->segname == 0x6f636e652d747065) &&
     *(int *)(param_2->segname + 8) == 0x676e6964)) {
    psVar11 = param_4;
    FUN_00397484();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_0039755c();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    psVar9 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar9->cmd = (char)psVar11;
    param_1[1] = psVar9;
    return psVar9;
  }
  if ((param_3 == 0xb) &&
     (lVar19._0_4_ = param_2->cmd, lVar19._4_4_ = param_2->cmdsize,
     lVar19 == 0x6174732d63707267 && *(long *)((long)&param_2->cmd + 3) == 0x7375746174732d63)) {
    psVar11 = param_4;
    FUN_003978c8();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397984();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0xc) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize,
     lVar20 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    psVar11 = param_4;
    FUN_00397cbc();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 0x1a) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     ((lVar1 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    psVar11 = param_4;
    FUN_00396040();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_003980dc();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0x16) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     (lVar2 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar11 = param_4;
    FUN_00398224();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 10) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar16 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar16) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar11;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     ((lVar3 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar4._0_4_ = param_2->cmd, lVar4._4_4_ = param_2->cmdsize,
     (lVar4 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     lVar23 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     lVar24 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar5._0_4_ = param_2->cmd, lVar5._4_4_ = param_2->cmdsize,
     (lVar5 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar11 = param_4;
    FUN_00399244();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 0xb) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize,
     lVar25 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar11 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar17 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar17;
    psVar11 = &segment_command_00000020;
    __Znwm();
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar11->cmd = (int)uVar29;
    psVar11->cmdsize = (int)((ulong)uVar29 >> 0x20);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar11->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar11->segname = uVar29;
    psVar11->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar11;
    return psVar11;
  }
  if ((param_3 == 8) &&
     (lVar27._0_4_ = param_2->cmd, lVar27._4_4_ = param_2->cmdsize, lVar27 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar17 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar17;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar11;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar11);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar8 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar8 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar14 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar16 = *(long *)param_4;
  qVar17 = param_4->vmaddr;
  uVar29 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar16;
  *(qword *)((long)register0x00000008 + -0x58) = qVar17;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar29;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar13 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar10 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar10) {
    do {
      lVar16 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 + -1 == 0) {
      (*(code *)plVar10[1])();
    }
  }
  psVar11 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar11) {
    do {
      lVar16 = *(long *)psVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar11,0x10);
      if (bVar7) {
        *(long *)psVar11 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)psVar11->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar11;
  }
  ___stack_chk_fail();
  if ((int)pqVar13 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar9 = psVar11;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar11;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar17 = *pqVar13;
  if (qVar17 == 0) {
    qVar31 = (long)pqVar13 + 9;
    qVar28 = (qword)(byte)pqVar13[1];
  }
  else {
    qVar28 = pqVar13[1];
    qVar31 = pqVar13[2];
  }
  if (qVar28 < 4) {
    uVar26 = 0;
  }
  else {
    uVar26 = (ulong)(*(int *)(qVar28 + qVar31 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar9 = &UNK_009dee20 + uVar26 * 0x40;
  if (qVar17 == 0) {
    uVar15 = (uint)(byte)pqVar13[1];
  }
  else {
    uVar15 = (uint)pqVar13[1];
  }
  if (*plVar14 == 0) {
    uVar18 = (uint)*(byte *)(plVar14 + 1);
  }
  else {
    uVar18 = (uint)plVar14[1];
  }
  *(uint *)&psVar9->fileoff = uVar18 + uVar15 + 0x20;
  pqVar12 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar17 = *pqVar13;
  qVar28 = pqVar13[3];
  qVar31 = pqVar13[2];
  pqVar12[1] = pqVar13[1];
  *pqVar12 = qVar17;
  pqVar12[3] = qVar28;
  pqVar12[2] = qVar31;
  pqVar13[1] = 0;
  *pqVar13 = 0;
  pqVar13[3] = 0;
  pqVar13[2] = 0;
  lVar16 = *plVar14;
  lVar34 = plVar14[3];
  lVar33 = plVar14[2];
  pqVar12[5] = plVar14[1];
  pqVar12[4] = lVar16;
  pqVar12[7] = lVar34;
  pqVar12[6] = lVar33;
  plVar14[1] = 0;
  *plVar14 = 0;
  plVar14[3] = 0;
  plVar14[2] = 0;
  *(qword **)psVar9->segname = pqVar12;
  return psVar9;
}



/* Entry: 003967d8; end: 00396893;  */

undefined1 * FUN_003967d8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  FUN_003fe72c(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10(plVar4);
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam0000000000afa780 & 1) == 0) {
    iVar5 = 0xafa780;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam0000000000afa740 = 0;
      uRam0000000000afa748 = 0x3ff2e4;
      pcRam0000000000afa750 = FUN_003969e0;
      pcRam0000000000afa758 = FUN_00396924;
      uRam0000000000afa760 = 0x396a00;
      pcRam0000000000afa768 = "content-type";
      uRam0000000000afa770 = 0xc;
      uRam0000000000afa778 = 0;
      ___cxa_guard_release(0xafa780);
    }
  }
  return (undefined1 *)0xafa740;
}



/* Entry: 00396894; end: 00396923;  */

undefined8 FUN_00396894(void)

{
  int iVar1;
  
  if ((bRam0000000000afa780 & 1) == 0) {
    iVar1 = 0xafa780;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa740 = 0;
      uRam0000000000afa748 = 0x3ff2e4;
      pcRam0000000000afa750 = FUN_003969e0;
      pcRam0000000000afa758 = FUN_00396924;
      uRam0000000000afa760 = 0x396a00;
      pcRam0000000000afa768 = "content-type";
      uRam0000000000afa770 = 0xc;
      uRam0000000000afa778 = 0;
      ___cxa_guard_release(0xafa780);
    }
  }
  return 0xafa740;
}



/* Entry: 00396924; end: 003969df;  */

void FUN_00396924(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB84(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_003fe72c();
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined4 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 0x20;
  *(int *)(CONCAT44(uVar6,iVar5) + 0x19c) = (int)lVar7;
  return;
}



/* Entry: 003969e0; end: 00396a23;  */

void FUN_003969e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x20;
  param_2[0x67] = uVar1;
  return;
}



/* Entry: 00396a24; end: 00396aef;  */

void FUN_00396a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  FUN_0035d0e4(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_003ff220(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 00396af0; end: 00396b33;  */

void FUN_00396af0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_00396b7c();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_00396c38();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(char *)(param_1 + 1) = (char)lVar1;
  return;
}



/* Entry: 00396b34; end: 00396b7b;  */

segment_command *
FUN_00396b34(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  segment_command *psVar9;
  long *plVar10;
  segment_command *psVar11;
  qword *pqVar12;
  qword *pqVar13;
  long *plVar14;
  uint uVar15;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar16;
  qword qVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  qword qVar28;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar29;
  undefined8 uVar30;
  qword qVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 0xd) &&
     (lVar16._0_4_ = param_2->cmd, lVar16._4_4_ = param_2->cmdsize,
     lVar16 == 0x636e652d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x676e69646f636e65))
  {
    psVar11 = param_4;
    FUN_00396f4c();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397008();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0x1e) &&
     (lVar33._0_4_ = param_2->cmd, lVar33._4_4_ = param_2->cmdsize,
     ((lVar33 == 0x746e692d63707267 && *(long *)param_2->segname == 0x6e652d6c616e7265) &&
     *(long *)(param_2->segname + 8) == 0x722d676e69646f63) &&
     *(long *)(param_2->segname + 0xe) == 0x747365757165722d)) {
    psVar11 = param_4;
    FUN_00396f4c();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397320();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0x14) &&
     (lVar34._0_4_ = param_2->cmd, lVar34._4_4_ = param_2->cmdsize,
     (lVar34 == 0x6363612d63707267 && *(long *)param_2->segname == 0x6f636e652d747065) &&
     *(int *)(param_2->segname + 8) == 0x676e6964)) {
    psVar11 = param_4;
    FUN_00397484();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_0039755c();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    psVar9 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar9->cmd = (char)psVar11;
    param_1[1] = psVar9;
    return psVar9;
  }
  if ((param_3 == 0xb) &&
     (lVar19._0_4_ = param_2->cmd, lVar19._4_4_ = param_2->cmdsize,
     lVar19 == 0x6174732d63707267 && *(long *)((long)&param_2->cmd + 3) == 0x7375746174732d63)) {
    psVar11 = param_4;
    FUN_003978c8();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397984();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0xc) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize,
     lVar20 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    psVar11 = param_4;
    FUN_00397cbc();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 0x1a) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     ((lVar1 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    psVar11 = param_4;
    FUN_00396040();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_003980dc();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0x16) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     (lVar2 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar11 = param_4;
    FUN_00398224();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 10) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar16 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar16) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar11;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     ((lVar3 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar4._0_4_ = param_2->cmd, lVar4._4_4_ = param_2->cmdsize,
     (lVar4 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     lVar23 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     lVar24 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar5._0_4_ = param_2->cmd, lVar5._4_4_ = param_2->cmdsize,
     (lVar5 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar11 = param_4;
    FUN_00399244();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 0xb) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize,
     lVar25 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar11 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar17 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar17;
    psVar11 = &segment_command_00000020;
    __Znwm();
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar11->cmd = (int)uVar29;
    psVar11->cmdsize = (int)((ulong)uVar29 >> 0x20);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar11->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar11->segname = uVar29;
    psVar11->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar11;
    return psVar11;
  }
  if ((param_3 == 8) &&
     (lVar27._0_4_ = param_2->cmd, lVar27._4_4_ = param_2->cmdsize, lVar27 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar17 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar17;
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar29;
    param_1[4] = uVar32;
    param_1[3] = uVar30;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar11;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar11);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar8 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar8 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar14 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar16 = *(long *)param_4;
  qVar17 = param_4->vmaddr;
  uVar29 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar16;
  *(qword *)((long)register0x00000008 + -0x58) = qVar17;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar29;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar13 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar10 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar10) {
    do {
      lVar16 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 + -1 == 0) {
      (*(code *)plVar10[1])();
    }
  }
  psVar11 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar11) {
    do {
      lVar16 = *(long *)psVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar11,0x10);
      if (bVar7) {
        *(long *)psVar11 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)psVar11->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar11;
  }
  ___stack_chk_fail();
  if ((int)pqVar13 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar9 = psVar11;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar11;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar17 = *pqVar13;
  if (qVar17 == 0) {
    qVar31 = (long)pqVar13 + 9;
    qVar28 = (qword)(byte)pqVar13[1];
  }
  else {
    qVar28 = pqVar13[1];
    qVar31 = pqVar13[2];
  }
  if (qVar28 < 4) {
    uVar26 = 0;
  }
  else {
    uVar26 = (ulong)(*(int *)(qVar28 + qVar31 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar9 = &UNK_009dee20 + uVar26 * 0x40;
  if (qVar17 == 0) {
    uVar15 = (uint)(byte)pqVar13[1];
  }
  else {
    uVar15 = (uint)pqVar13[1];
  }
  if (*plVar14 == 0) {
    uVar18 = (uint)*(byte *)(plVar14 + 1);
  }
  else {
    uVar18 = (uint)plVar14[1];
  }
  *(uint *)&psVar9->fileoff = uVar18 + uVar15 + 0x20;
  pqVar12 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar17 = *pqVar13;
  qVar28 = pqVar13[3];
  qVar31 = pqVar13[2];
  pqVar12[1] = pqVar13[1];
  *pqVar12 = qVar17;
  pqVar12[3] = qVar28;
  pqVar12[2] = qVar31;
  pqVar13[1] = 0;
  *pqVar13 = 0;
  pqVar13[3] = 0;
  pqVar13[2] = 0;
  lVar16 = *plVar14;
  lVar34 = plVar14[3];
  lVar33 = plVar14[2];
  pqVar12[5] = plVar14[1];
  pqVar12[4] = lVar16;
  pqVar12[7] = lVar34;
  pqVar12[6] = lVar33;
  plVar14[1] = 0;
  *plVar14 = 0;
  plVar14[3] = 0;
  plVar14[2] = 0;
  *(qword **)psVar9->segname = pqVar12;
  return psVar9;
}



/* Entry: 00396b7c; end: 00396c37;  */

undefined1 * FUN_00396b7c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  FUN_003fea28(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10(plVar4);
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam0000000000afa7c8 & 1) == 0) {
    iVar5 = 0xafa7c8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam0000000000afa788 = 0;
      uRam0000000000afa790 = 0x3ff2e4;
      pcRam0000000000afa798 = FUN_00396d84;
      pcRam0000000000afa7a0 = FUN_00396cc8;
      uRam0000000000afa7a8 = 0x396da4;
      puRam0000000000afa7b0 = &DAT_0091e112;
      uRam0000000000afa7b8 = 2;
      uRam0000000000afa7c0 = 0;
      ___cxa_guard_release(0xafa7c8);
    }
  }
  return (undefined1 *)0xafa788;
}



/* Entry: 00396c38; end: 00396cc7;  */

undefined8 FUN_00396c38(void)

{
  int iVar1;
  
  if ((bRam0000000000afa7c8 & 1) == 0) {
    iVar1 = 0xafa7c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa788 = 0;
      uRam0000000000afa790 = 0x3ff2e4;
      pcRam0000000000afa798 = FUN_00396d84;
      pcRam0000000000afa7a0 = FUN_00396cc8;
      uRam0000000000afa7a8 = 0x396da4;
      puRam0000000000afa7b0 = &DAT_0091e112;
      uRam0000000000afa7b8 = 2;
      uRam0000000000afa7c0 = 0;
      ___cxa_guard_release(0xafa7c8);
    }
  }
  return 0xafa788;
}



/* Entry: 00396cc8; end: 00396d83;  */

void FUN_00396cc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB81(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_003fea28();
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined1 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 0x40;
  *(char *)(CONCAT44(uVar6,iVar5) + 0x198) = (char)lVar7;
  return;
}



/* Entry: 00396d84; end: 00396dc7;  */

void FUN_00396d84(undefined1 *param_1,uint *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x40;
  *(undefined1 *)(param_2 + 0x66) = uVar1;
  return;
}



/* Entry: 00396dc8; end: 00396e93;  */

void FUN_00396dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  FUN_0035d0e4(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_003ff220(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 00396e94; end: 00396ed7;  */

void FUN_00396e94(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_00396f4c();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_00397008();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 00396ed8; end: 00396f4b;  */

segment_command *
FUN_00396ed8(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  segment_command *psVar9;
  long *plVar10;
  segment_command *psVar11;
  qword *pqVar12;
  qword *pqVar13;
  long *plVar14;
  uint uVar15;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar16;
  qword qVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  qword qVar27;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar28;
  undefined8 uVar29;
  qword qVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 0x1e) &&
     (lVar16._0_4_ = param_2->cmd, lVar16._4_4_ = param_2->cmdsize,
     ((lVar16 == 0x746e692d63707267 && *(long *)param_2->segname == 0x6e652d6c616e7265) &&
     *(long *)(param_2->segname + 8) == 0x722d676e69646f63) &&
     *(long *)(param_2->segname + 0xe) == 0x747365757165722d)) {
    psVar11 = param_4;
    FUN_00396f4c();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397320();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0x14) &&
     (lVar32._0_4_ = param_2->cmd, lVar32._4_4_ = param_2->cmdsize,
     (lVar32 == 0x6363612d63707267 && *(long *)param_2->segname == 0x6f636e652d747065) &&
     *(int *)(param_2->segname + 8) == 0x676e6964)) {
    psVar11 = param_4;
    FUN_00397484();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_0039755c();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    psVar9 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar9->cmd = (char)psVar11;
    param_1[1] = psVar9;
    return psVar9;
  }
  if ((param_3 == 0xb) &&
     (lVar33._0_4_ = param_2->cmd, lVar33._4_4_ = param_2->cmdsize,
     lVar33 == 0x6174732d63707267 && *(long *)((long)&param_2->cmd + 3) == 0x7375746174732d63)) {
    psVar11 = param_4;
    FUN_003978c8();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397984();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0xc) &&
     (lVar19._0_4_ = param_2->cmd, lVar19._4_4_ = param_2->cmdsize,
     lVar19 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    psVar11 = param_4;
    FUN_00397cbc();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 0x1a) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     ((lVar1 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    psVar11 = param_4;
    FUN_00396040();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_003980dc();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0x16) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     (lVar2 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar11 = param_4;
    FUN_00398224();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 10) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize,
     lVar20 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar16 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar16) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar11;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar28;
    param_1[4] = uVar31;
    param_1[3] = uVar29;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar28;
    param_1[4] = uVar31;
    param_1[3] = uVar29;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     ((lVar3 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar28;
    param_1[4] = uVar31;
    param_1[3] = uVar29;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar4._0_4_ = param_2->cmd, lVar4._4_4_ = param_2->cmdsize,
     (lVar4 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar28;
    param_1[4] = uVar31;
    param_1[3] = uVar29;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar28;
    param_1[4] = uVar31;
    param_1[3] = uVar29;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     lVar23 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar28;
    param_1[4] = uVar31;
    param_1[3] = uVar29;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar5._0_4_ = param_2->cmd, lVar5._4_4_ = param_2->cmdsize,
     (lVar5 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar11 = param_4;
    FUN_00399244();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 0xb) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     lVar24 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar11 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar17 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar17;
    psVar11 = &segment_command_00000020;
    __Znwm();
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar11->cmd = (int)uVar28;
    psVar11->cmdsize = (int)((ulong)uVar28 >> 0x20);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar11->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar11->segname = uVar28;
    psVar11->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar11;
    return psVar11;
  }
  if ((param_3 == 8) &&
     (lVar26._0_4_ = param_2->cmd, lVar26._4_4_ = param_2->cmdsize, lVar26 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar17 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar17;
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar28;
    param_1[4] = uVar31;
    param_1[3] = uVar29;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar11;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar11);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar8 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar8 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar14 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar16 = *(long *)param_4;
  qVar17 = param_4->vmaddr;
  uVar28 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar16;
  *(qword *)((long)register0x00000008 + -0x58) = qVar17;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar28;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar13 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar10 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar10) {
    do {
      lVar16 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 + -1 == 0) {
      (*(code *)plVar10[1])();
    }
  }
  psVar11 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar11) {
    do {
      lVar16 = *(long *)psVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar11,0x10);
      if (bVar7) {
        *(long *)psVar11 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)psVar11->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar11;
  }
  ___stack_chk_fail();
  if ((int)pqVar13 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar9 = psVar11;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar11;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar17 = *pqVar13;
  if (qVar17 == 0) {
    qVar30 = (long)pqVar13 + 9;
    qVar27 = (qword)(byte)pqVar13[1];
  }
  else {
    qVar27 = pqVar13[1];
    qVar30 = pqVar13[2];
  }
  if (qVar27 < 4) {
    uVar25 = 0;
  }
  else {
    uVar25 = (ulong)(*(int *)(qVar27 + qVar30 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar9 = &UNK_009dee20 + uVar25 * 0x40;
  if (qVar17 == 0) {
    uVar15 = (uint)(byte)pqVar13[1];
  }
  else {
    uVar15 = (uint)pqVar13[1];
  }
  if (*plVar14 == 0) {
    uVar18 = (uint)*(byte *)(plVar14 + 1);
  }
  else {
    uVar18 = (uint)plVar14[1];
  }
  *(uint *)&psVar9->fileoff = uVar18 + uVar15 + 0x20;
  pqVar12 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar17 = *pqVar13;
  qVar27 = pqVar13[3];
  qVar30 = pqVar13[2];
  pqVar12[1] = pqVar13[1];
  *pqVar12 = qVar17;
  pqVar12[3] = qVar27;
  pqVar12[2] = qVar30;
  pqVar13[1] = 0;
  *pqVar13 = 0;
  pqVar13[3] = 0;
  pqVar13[2] = 0;
  lVar16 = *plVar14;
  lVar33 = plVar14[3];
  lVar32 = plVar14[2];
  pqVar12[5] = plVar14[1];
  pqVar12[4] = lVar16;
  pqVar12[7] = lVar33;
  pqVar12[6] = lVar32;
  plVar14[1] = 0;
  *plVar14 = 0;
  plVar14[3] = 0;
  plVar14[2] = 0;
  *(qword **)psVar9->segname = pqVar12;
  return psVar9;
}



/* Entry: 00396f4c; end: 00397007;  */

undefined1 * FUN_00396f4c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  FUN_003fed98(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10(plVar4);
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam0000000000afa810 & 1) == 0) {
    iVar5 = 0xafa810;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam0000000000afa7d0 = 0;
      uRam0000000000afa7d8 = 0x3ff2e4;
      pcRam0000000000afa7e0 = FUN_00397154;
      pcRam0000000000afa7e8 = FUN_00397098;
      uRam0000000000afa7f0 = 0x397174;
      pcRam0000000000afa7f8 = "grpc-encoding";
      uRam0000000000afa800 = 0xd;
      uRam0000000000afa808 = 0;
      ___cxa_guard_release(0xafa810);
    }
  }
  return (undefined1 *)0xafa7d0;
}



/* Entry: 00397008; end: 00397097;  */

undefined8 FUN_00397008(void)

{
  int iVar1;
  
  if ((bRam0000000000afa810 & 1) == 0) {
    iVar1 = 0xafa810;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa7d0 = 0;
      uRam0000000000afa7d8 = 0x3ff2e4;
      pcRam0000000000afa7e0 = FUN_00397154;
      pcRam0000000000afa7e8 = FUN_00397098;
      uRam0000000000afa7f0 = 0x397174;
      pcRam0000000000afa7f8 = "grpc-encoding";
      uRam0000000000afa800 = 0xd;
      uRam0000000000afa808 = 0;
      ___cxa_guard_release(0xafa810);
    }
  }
  return 0xafa7d0;
}



/* Entry: 00397098; end: 00397153;  */

void FUN_00397098(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB84(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_003fed98();
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined4 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 0x80;
  *(int *)(CONCAT44(uVar6,iVar5) + 0x194) = (int)lVar7;
  return;
}



/* Entry: 00397154; end: 00397197;  */

void FUN_00397154(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x80;
  param_2[0x65] = uVar1;
  return;
}



/* Entry: 00397198; end: 00397263;  */

void FUN_00397198(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  FUN_0035d0e4(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_003ff220(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 00397264; end: 00397287;  */

char * FUN_00397264(char *param_1)

{
  char *pcVar1;
  
  func_0x003b0630();
  pcVar1 = "<discarded-invalid-value>";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  return pcVar1;
}



/* Entry: 00397288; end: 003972cb;  */

void FUN_00397288(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_00396f4c();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_00397320();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 003972cc; end: 0039731f;  */

segment_command *
FUN_003972cc(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  segment_command *psVar9;
  long *plVar10;
  segment_command *psVar11;
  qword *pqVar12;
  qword *pqVar13;
  long *plVar14;
  uint uVar15;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar16;
  qword qVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  qword qVar26;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar27;
  undefined8 uVar28;
  qword qVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 0x14) &&
     (lVar16._0_4_ = param_2->cmd, lVar16._4_4_ = param_2->cmdsize,
     (lVar16 == 0x6363612d63707267 && *(long *)param_2->segname == 0x6f636e652d747065) &&
     *(int *)(param_2->segname + 8) == 0x676e6964)) {
    psVar11 = param_4;
    FUN_00397484();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_0039755c();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    psVar9 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar9->cmd = (char)psVar11;
    param_1[1] = psVar9;
    return psVar9;
  }
  if ((param_3 == 0xb) &&
     (lVar31._0_4_ = param_2->cmd, lVar31._4_4_ = param_2->cmdsize,
     lVar31 == 0x6174732d63707267 && *(long *)((long)&param_2->cmd + 3) == 0x7375746174732d63)) {
    psVar11 = param_4;
    FUN_003978c8();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397984();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0xc) &&
     (lVar32._0_4_ = param_2->cmd, lVar32._4_4_ = param_2->cmdsize,
     lVar32 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    psVar11 = param_4;
    FUN_00397cbc();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 0x1a) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     ((lVar1 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    psVar11 = param_4;
    FUN_00396040();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_003980dc();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar17;
    *(int *)(param_1 + 1) = (int)psVar11;
    return psVar9;
  }
  if ((param_3 == 0x16) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     (lVar2 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar11 = param_4;
    FUN_00398224();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 10) &&
     (lVar19._0_4_ = param_2->cmd, lVar19._4_4_ = param_2->cmdsize,
     lVar19 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar16 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar16) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar11;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize,
     lVar20 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar27;
    param_1[4] = uVar30;
    param_1[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar27;
    param_1[4] = uVar30;
    param_1[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     ((lVar3 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar27;
    param_1[4] = uVar30;
    param_1[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar4._0_4_ = param_2->cmd, lVar4._4_4_ = param_2->cmdsize,
     (lVar4 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar27;
    param_1[4] = uVar30;
    param_1[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar27;
    param_1[4] = uVar30;
    param_1[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar27;
    param_1[4] = uVar30;
    param_1[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar11;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar5._0_4_ = param_2->cmd, lVar5._4_4_ = param_2->cmdsize,
     (lVar5 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar11 = param_4;
    FUN_00399244();
    qVar17 = param_4->filesize;
    psVar9 = psVar11;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar17;
    *param_1 = psVar9;
    param_1[1] = psVar11;
    return psVar9;
  }
  if ((param_3 == 0xb) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     lVar23 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar11 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar17 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar17;
    psVar11 = &segment_command_00000020;
    __Znwm();
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar11->cmd = (int)uVar27;
    psVar11->cmdsize = (int)((ulong)uVar27 >> 0x20);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar11->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar11->segname = uVar27;
    psVar11->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar11;
    return psVar11;
  }
  if ((param_3 == 8) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize, lVar25 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar11 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar17 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar17;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar27;
    param_1[4] = uVar30;
    param_1[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar11;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar11);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar8 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar8 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar14 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar16 = *(long *)param_4;
  qVar17 = param_4->vmaddr;
  uVar27 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar16;
  *(qword *)((long)register0x00000008 + -0x58) = qVar17;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar27;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar13 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar10 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar10) {
    do {
      lVar16 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 + -1 == 0) {
      (*(code *)plVar10[1])();
    }
  }
  psVar11 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar11) {
    do {
      lVar16 = *(long *)psVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar11,0x10);
      if (bVar7) {
        *(long *)psVar11 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)psVar11->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar11;
  }
  ___stack_chk_fail();
  if ((int)pqVar13 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar9 = psVar11;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar11;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar17 = *pqVar13;
  if (qVar17 == 0) {
    qVar29 = (long)pqVar13 + 9;
    qVar26 = (qword)(byte)pqVar13[1];
  }
  else {
    qVar26 = pqVar13[1];
    qVar29 = pqVar13[2];
  }
  if (qVar26 < 4) {
    uVar24 = 0;
  }
  else {
    uVar24 = (ulong)(*(int *)(qVar26 + qVar29 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar9 = &UNK_009dee20 + uVar24 * 0x40;
  if (qVar17 == 0) {
    uVar15 = (uint)(byte)pqVar13[1];
  }
  else {
    uVar15 = (uint)pqVar13[1];
  }
  if (*plVar14 == 0) {
    uVar18 = (uint)*(byte *)(plVar14 + 1);
  }
  else {
    uVar18 = (uint)plVar14[1];
  }
  *(uint *)&psVar9->fileoff = uVar18 + uVar15 + 0x20;
  pqVar12 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar17 = *pqVar13;
  qVar26 = pqVar13[3];
  qVar29 = pqVar13[2];
  pqVar12[1] = pqVar13[1];
  *pqVar12 = qVar17;
  pqVar12[3] = qVar26;
  pqVar12[2] = qVar29;
  pqVar13[1] = 0;
  *pqVar13 = 0;
  pqVar13[3] = 0;
  pqVar13[2] = 0;
  lVar16 = *plVar14;
  lVar32 = plVar14[3];
  lVar31 = plVar14[2];
  pqVar12[5] = plVar14[1];
  pqVar12[4] = lVar16;
  pqVar12[7] = lVar32;
  pqVar12[6] = lVar31;
  plVar14[1] = 0;
  *plVar14 = 0;
  plVar14[3] = 0;
  plVar14[2] = 0;
  *(qword **)psVar9->segname = pqVar12;
  return psVar9;
}



/* Entry: 00397320; end: 003973af;  */

undefined8 FUN_00397320(void)

{
  int iVar1;
  
  if ((bRam0000000000afa858 & 1) == 0) {
    iVar1 = 0xafa858;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa818 = 0;
      uRam0000000000afa820 = 0x3ff2e4;
      pcRam0000000000afa828 = FUN_003973b0;
      pcRam0000000000afa830 = FUN_00397098;
      uRam0000000000afa838 = 0x3973c8;
      pcRam0000000000afa840 = "grpc-internal-encoding-request";
      uRam0000000000afa848 = 0x1e;
      uRam0000000000afa850 = 0;
      ___cxa_guard_release(0xafa858);
    }
  }
  return 0xafa818;
}



/* Entry: 003973b0; end: 003973eb;  */

void FUN_003973b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x100;
  param_2[100] = uVar1;
  return;
}



/* Entry: 003973ec; end: 0039743b;  */

void FUN_003973ec(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_2;
  FUN_00397484();
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_0039755c();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar4;
  puVar3 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  __Znwm();
  *puVar3 = (char)lVar1;
  param_1[1] = (long)puVar3;
  return;
}



/* Entry: 0039743c; end: 00397483;  */

segment_command *
FUN_0039743c(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  segment_command *psVar8;
  long *plVar9;
  segment_command *psVar10;
  qword *pqVar11;
  qword *pqVar12;
  long *plVar13;
  uint uVar14;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar15;
  qword qVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  qword qVar25;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar26;
  undefined8 uVar27;
  qword qVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 0xb) &&
     (lVar15._0_4_ = param_2->cmd, lVar15._4_4_ = param_2->cmdsize,
     lVar15 == 0x6174732d63707267 && *(long *)((long)&param_2->cmd + 3) == 0x7375746174732d63)) {
    psVar10 = param_4;
    FUN_003978c8();
    qVar16 = param_4->filesize;
    psVar8 = psVar10;
    FUN_00397984();
    *param_1 = psVar8;
    *(int *)(param_1 + 5) = (int)qVar16;
    *(int *)(param_1 + 1) = (int)psVar10;
    return psVar8;
  }
  if ((param_3 == 0xc) &&
     (lVar30._0_4_ = param_2->cmd, lVar30._4_4_ = param_2->cmdsize,
     lVar30 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    psVar10 = param_4;
    FUN_00397cbc();
    qVar16 = param_4->filesize;
    psVar8 = psVar10;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar16;
    *param_1 = psVar8;
    param_1[1] = psVar10;
    return psVar8;
  }
  if ((param_3 == 0x1a) &&
     (lVar31._0_4_ = param_2->cmd, lVar31._4_4_ = param_2->cmdsize,
     ((lVar31 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    psVar10 = param_4;
    FUN_00396040();
    qVar16 = param_4->filesize;
    psVar8 = psVar10;
    FUN_003980dc();
    *param_1 = psVar8;
    *(int *)(param_1 + 5) = (int)qVar16;
    *(int *)(param_1 + 1) = (int)psVar10;
    return psVar8;
  }
  if ((param_3 == 0x16) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     (lVar1 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar10 = param_4;
    FUN_00398224();
    qVar16 = param_4->filesize;
    psVar8 = psVar10;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar16;
    *param_1 = psVar8;
    param_1[1] = psVar10;
    return psVar8;
  }
  if ((param_3 == 10) &&
     (lVar18._0_4_ = param_2->cmd, lVar18._4_4_ = param_2->cmdsize,
     lVar18 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar15 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar10 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar15) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar10;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar19._0_4_ = param_2->cmd, lVar19._4_4_ = param_2->cmdsize,
     lVar19 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar10 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar26;
    param_1[4] = uVar29;
    param_1[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar10;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar10 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar26;
    param_1[4] = uVar29;
    param_1[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar10;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     ((lVar2 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar10 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar26;
    param_1[4] = uVar29;
    param_1[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar10;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     (lVar3 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar10 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar26;
    param_1[4] = uVar29;
    param_1[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar10;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize,
     lVar20 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar10 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar26;
    param_1[4] = uVar29;
    param_1[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar10;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar10 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar26;
    param_1[4] = uVar29;
    param_1[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar10;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar4._0_4_ = param_2->cmd, lVar4._4_4_ = param_2->cmdsize,
     (lVar4 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar10 = param_4;
    FUN_00399244();
    qVar16 = param_4->filesize;
    psVar8 = psVar10;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar16;
    *param_1 = psVar8;
    param_1[1] = psVar10;
    return psVar8;
  }
  if ((param_3 == 0xb) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar10 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar16 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar16;
    psVar10 = &segment_command_00000020;
    __Znwm();
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar10->cmd = (int)uVar26;
    psVar10->cmdsize = (int)((ulong)uVar26 >> 0x20);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar10->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar10->segname = uVar26;
    psVar10->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar10;
    return psVar10;
  }
  if ((param_3 == 8) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize, lVar24 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar10 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar16 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar16;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar26;
    param_1[4] = uVar29;
    param_1[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar10;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar10);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar7 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar7 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar13 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar15 = *(long *)param_4;
  qVar16 = param_4->vmaddr;
  uVar26 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar15;
  *(qword *)((long)register0x00000008 + -0x58) = qVar16;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar26;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar12 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar9 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      lVar15 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plVar9[1])();
    }
  }
  psVar10 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar10) {
    do {
      lVar15 = *(long *)psVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar10,0x10);
      if (bVar6) {
        *(long *)psVar10 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)psVar10->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar10;
  }
  ___stack_chk_fail();
  if ((int)pqVar12 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar8 = psVar10;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar10;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar16 = *pqVar12;
  if (qVar16 == 0) {
    qVar28 = (long)pqVar12 + 9;
    qVar25 = (qword)(byte)pqVar12[1];
  }
  else {
    qVar25 = pqVar12[1];
    qVar28 = pqVar12[2];
  }
  if (qVar25 < 4) {
    uVar23 = 0;
  }
  else {
    uVar23 = (ulong)(*(int *)(qVar25 + qVar28 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar8 = &UNK_009dee20 + uVar23 * 0x40;
  if (qVar16 == 0) {
    uVar14 = (uint)(byte)pqVar12[1];
  }
  else {
    uVar14 = (uint)pqVar12[1];
  }
  if (*plVar13 == 0) {
    uVar17 = (uint)*(byte *)(plVar13 + 1);
  }
  else {
    uVar17 = (uint)plVar13[1];
  }
  *(uint *)&psVar8->fileoff = uVar17 + uVar14 + 0x20;
  pqVar11 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar16 = *pqVar12;
  qVar25 = pqVar12[3];
  qVar28 = pqVar12[2];
  pqVar11[1] = pqVar12[1];
  *pqVar11 = qVar16;
  pqVar11[3] = qVar25;
  pqVar11[2] = qVar28;
  pqVar12[1] = 0;
  *pqVar12 = 0;
  pqVar12[3] = 0;
  pqVar12[2] = 0;
  lVar15 = *plVar13;
  lVar31 = plVar13[3];
  lVar30 = plVar13[2];
  pqVar11[5] = plVar13[1];
  pqVar11[4] = lVar15;
  pqVar11[7] = lVar31;
  pqVar11[6] = lVar30;
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar13[3] = 0;
  plVar13[2] = 0;
  *(qword **)psVar8->segname = pqVar11;
  return psVar8;
}



/* Entry: 00397484; end: 0039755b;  */

ulong FUN_00397484(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar1 = uStack_48 & 0xff;
  uVar4 = (ulong)&plStack_50 | 9;
  if (plStack_50 != (long *)0x0) {
    uVar1 = uStack_48;
    uVar4 = uStack_40;
  }
  iVar6 = (int)uVar1;
  FUN_003b0984(uVar4);
  plVar5 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar3) {
        *plStack_50 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    if (iVar6 != 0) {
      func_0x0040cf10(plVar5);
      FUN_0034b418(&plStack_50);
    }
    __Unwind_Resume(plVar5);
    if ((bRam0000000000afa8a0 & 1) == 0) {
      iVar6 = 0xafa8a0;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        uRam0000000000afa860 = 0;
        pcRam0000000000afa868 = FUN_003975ec;
        uRam0000000000afa870 = 0x3975fc;
        pcRam0000000000afa878 = FUN_00397618;
        pcRam0000000000afa880 = FUN_00397738;
        pcRam0000000000afa888 = "grpc-accept-encoding";
        uRam0000000000afa890 = 0x14;
        uRam0000000000afa898 = 0;
        ___cxa_guard_release(0xafa8a0);
      }
    }
    return 0xafa860;
  }
  return uVar4;
}



/* Entry: 0039755c; end: 003975eb;  */

undefined8 FUN_0039755c(void)

{
  int iVar1;
  
  if ((bRam0000000000afa8a0 & 1) == 0) {
    iVar1 = 0xafa8a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa860 = 0;
      pcRam0000000000afa868 = FUN_003975ec;
      uRam0000000000afa870 = 0x3975fc;
      pcRam0000000000afa878 = FUN_00397618;
      pcRam0000000000afa880 = FUN_00397738;
      pcRam0000000000afa888 = "grpc-accept-encoding";
      uRam0000000000afa890 = 0x14;
      uRam0000000000afa898 = 0;
      ___cxa_guard_release(0xafa8a0);
    }
  }
  return 0xafa860;
}



/* Entry: 003975ec; end: 00397617;  */

void FUN_003975ec(long *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00397618; end: 00397737;  */

void FUN_00397618(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 extraout_x8;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  long *plStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  __Znwm();
  uStack_58 = param_1[1];
  plStack_60 = (long *)*param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar8 = uStack_58 & 0xff;
  uVar3 = (ulong)&plStack_60 | 9;
  if (plStack_60 != (long *)0x0) {
    uVar8 = uStack_58;
    uVar3 = uStack_50;
  }
  uVar5 = (undefined1)uVar3;
  FUN_003b0984();
  *puVar6 = uVar5;
  *(undefined1 **)(param_4 + 8) = puVar6;
  plVar7 = plStack_60;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_60) {
    do {
      lVar10 = *plStack_60;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_60,0x10);
      if (bVar2) {
        *plStack_60 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_60[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    while ((int)uVar8 == 0) {
      __Unwind_Resume();
    }
    func_0x0040cf10(plVar7);
    uVar9 = 0x14;
    FUN_00397814(plVar7);
    uVar8 = (ulong)plVar7 & 0xff;
    FUN_00397820(uVar8);
    FUN_0035d0e4(&ppuStack_a8,uVar8,uVar9);
    pppuVar4 = (undefined8 ***)ppuStack_a8;
    if (-1 < (char)bStack_91) {
      uStack_a0 = (ulong)bStack_91;
      pppuVar4 = &ppuStack_a8;
    }
    FUN_003ff220(extraout_x8,"grpc-accept-encoding",0x14,pppuVar4,uStack_a0);
    if ((char)bStack_91 < '\0') {
      __ZdlPv(ppuStack_a8);
    }
    return;
  }
  return;
}



/* Entry: 00397738; end: 0039775b;  */

void FUN_00397738(undefined8 param_1,ulong param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  uVar2 = 0x14;
  FUN_00397814(param_2);
  param_2 = param_2 & 0xff;
  FUN_00397820(param_2);
  FUN_0035d0e4(&ppuStack_48,param_2,uVar2);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  FUN_003ff220(param_1,"grpc-accept-encoding",0x14,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 0039775c; end: 00397813;  */

void FUN_0039775c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  uVar2 = param_3;
  (*param_5)(param_4);
  param_4 = param_4 & 0xff;
  (*param_6)(param_4);
  FUN_0035d0e4(&ppuStack_48,param_4,uVar2);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  FUN_003ff220(param_1,param_2,param_3,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 00397814; end: 0039781f;  */

undefined1 FUN_00397814(undefined8 *param_1)

{
  return *(undefined1 *)*param_1;
}



/* Entry: 00397820; end: 00397843;  */

void FUN_00397820(undefined1 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = param_1;
  func_0x003b0934(&uStack_11);
  return;
}



/* Entry: 00397844; end: 00397887;  */

void FUN_00397844(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_003978c8();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_00397984();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 00397888; end: 003978c7;  */

segment_command *
FUN_00397888(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  segment_command *psVar7;
  long *plVar8;
  segment_command *psVar9;
  qword *pqVar10;
  qword *pqVar11;
  long *plVar12;
  uint uVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar14;
  qword qVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  qword qVar24;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar25;
  undefined8 uVar26;
  qword qVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 0xc) &&
     (lVar14._0_4_ = param_2->cmd, lVar14._4_4_ = param_2->cmdsize,
     lVar14 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    psVar9 = param_4;
    FUN_00397cbc();
    qVar15 = param_4->filesize;
    psVar7 = psVar9;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar15;
    *param_1 = psVar7;
    param_1[1] = psVar9;
    return psVar7;
  }
  if ((param_3 == 0x1a) &&
     (lVar29._0_4_ = param_2->cmd, lVar29._4_4_ = param_2->cmdsize,
     ((lVar29 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    psVar9 = param_4;
    FUN_00396040();
    qVar15 = param_4->filesize;
    psVar7 = psVar9;
    FUN_003980dc();
    *param_1 = psVar7;
    *(int *)(param_1 + 5) = (int)qVar15;
    *(int *)(param_1 + 1) = (int)psVar9;
    return psVar7;
  }
  if ((param_3 == 0x16) &&
     (lVar30._0_4_ = param_2->cmd, lVar30._4_4_ = param_2->cmdsize,
     (lVar30 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar9 = param_4;
    FUN_00398224();
    qVar15 = param_4->filesize;
    psVar7 = psVar9;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar15;
    *param_1 = psVar7;
    param_1[1] = psVar9;
    return psVar7;
  }
  if ((param_3 == 10) &&
     (lVar17._0_4_ = param_2->cmd, lVar17._4_4_ = param_2->cmdsize,
     lVar17 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar14 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar14) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar9;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar18._0_4_ = param_2->cmd, lVar18._4_4_ = param_2->cmdsize,
     lVar18 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar25;
    param_1[4] = uVar28;
    param_1[3] = uVar26;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar25;
    param_1[4] = uVar28;
    param_1[3] = uVar26;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     ((lVar1 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar25;
    param_1[4] = uVar28;
    param_1[3] = uVar26;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     (lVar2 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar25;
    param_1[4] = uVar28;
    param_1[3] = uVar26;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar19._0_4_ = param_2->cmd, lVar19._4_4_ = param_2->cmdsize,
     lVar19 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar25;
    param_1[4] = uVar28;
    param_1[3] = uVar26;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize,
     lVar20 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar25;
    param_1[4] = uVar28;
    param_1[3] = uVar26;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     (lVar3 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar9 = param_4;
    FUN_00399244();
    qVar15 = param_4->filesize;
    psVar7 = psVar9;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar15;
    *param_1 = psVar7;
    param_1[1] = psVar9;
    return psVar7;
  }
  if ((param_3 == 0xb) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar9 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar15 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar15;
    psVar9 = &segment_command_00000020;
    __Znwm();
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar9->cmd = (int)uVar25;
    psVar9->cmdsize = (int)((ulong)uVar25 >> 0x20);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar9->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar9->segname = uVar25;
    psVar9->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar9;
    return psVar9;
  }
  if ((param_3 == 8) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize, lVar23 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar15 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar15;
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar25;
    param_1[4] = uVar28;
    param_1[3] = uVar26;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar9);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar6 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar12 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar14 = *(long *)param_4;
  qVar15 = param_4->vmaddr;
  uVar25 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar14;
  *(qword *)((long)register0x00000008 + -0x58) = qVar15;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar25;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar11 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar8 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar14 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  psVar9 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar9) {
    do {
      lVar14 = *(long *)psVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar9,0x10);
      if (bVar5) {
        *(long *)psVar9 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)psVar9->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar9;
  }
  ___stack_chk_fail();
  if ((int)pqVar11 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar7 = psVar9;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar15 = *pqVar11;
  if (qVar15 == 0) {
    qVar27 = (long)pqVar11 + 9;
    qVar24 = (qword)(byte)pqVar11[1];
  }
  else {
    qVar24 = pqVar11[1];
    qVar27 = pqVar11[2];
  }
  if (qVar24 < 4) {
    uVar22 = 0;
  }
  else {
    uVar22 = (ulong)(*(int *)(qVar24 + qVar27 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar7 = &UNK_009dee20 + uVar22 * 0x40;
  if (qVar15 == 0) {
    uVar13 = (uint)(byte)pqVar11[1];
  }
  else {
    uVar13 = (uint)pqVar11[1];
  }
  if (*plVar12 == 0) {
    uVar16 = (uint)*(byte *)(plVar12 + 1);
  }
  else {
    uVar16 = (uint)plVar12[1];
  }
  *(uint *)&psVar7->fileoff = uVar16 + uVar13 + 0x20;
  pqVar10 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar15 = *pqVar11;
  qVar24 = pqVar11[3];
  qVar27 = pqVar11[2];
  pqVar10[1] = pqVar11[1];
  *pqVar10 = qVar15;
  pqVar10[3] = qVar24;
  pqVar10[2] = qVar27;
  pqVar11[1] = 0;
  *pqVar11 = 0;
  pqVar11[3] = 0;
  pqVar11[2] = 0;
  lVar14 = *plVar12;
  lVar30 = plVar12[3];
  lVar29 = plVar12[2];
  pqVar10[5] = plVar12[1];
  pqVar10[4] = lVar14;
  pqVar10[7] = lVar30;
  pqVar10[6] = lVar29;
  plVar12[1] = 0;
  *plVar12 = 0;
  plVar12[3] = 0;
  plVar12[2] = 0;
  *(qword **)psVar7->segname = pqVar10;
  return psVar7;
}



/* Entry: 003978c8; end: 00397983;  */

undefined1 * FUN_003978c8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  FUN_0034c7dc(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10(plVar4);
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam0000000000afa8e8 & 1) == 0) {
    iVar5 = 0xafa8e8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam0000000000afa8a8 = 0;
      uRam0000000000afa8b0 = 0x3ff2e4;
      pcRam0000000000afa8b8 = FUN_00397ad0;
      pcRam0000000000afa8c0 = FUN_00397a14;
      uRam0000000000afa8c8 = 0x397af0;
      pcRam0000000000afa8d0 = "grpc-status";
      uRam0000000000afa8d8 = 0xb;
      uRam0000000000afa8e0 = 0;
      ___cxa_guard_release(0xafa8e8);
    }
  }
  return (undefined1 *)0xafa8a8;
}



/* Entry: 00397984; end: 00397a13;  */

undefined8 FUN_00397984(void)

{
  int iVar1;
  
  if ((bRam0000000000afa8e8 & 1) == 0) {
    iVar1 = 0xafa8e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa8a8 = 0;
      uRam0000000000afa8b0 = 0x3ff2e4;
      pcRam0000000000afa8b8 = FUN_00397ad0;
      pcRam0000000000afa8c0 = FUN_00397a14;
      uRam0000000000afa8c8 = 0x397af0;
      pcRam0000000000afa8d0 = "grpc-status";
      uRam0000000000afa8d8 = 0xb;
      uRam0000000000afa8e0 = 0;
      ___cxa_guard_release(0xafa8e8);
    }
  }
  return 0xafa8a8;
}



/* Entry: 00397a14; end: 00397acf;  */

void FUN_00397a14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB84(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_0034c7dc();
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined4 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 0x400;
  *(int *)(CONCAT44(uVar6,iVar5) + 0x188) = (int)lVar7;
  return;
}



/* Entry: 00397ad0; end: 00397b13;  */

void FUN_00397ad0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x400;
  param_2[0x62] = uVar1;
  return;
}



/* Entry: 00397b14; end: 00397c0f;  */

void FUN_00397b14(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4,
                 code *param_5,code *param_6)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  (*param_5)();
  (*param_6)();
  func_0x00574ac0();
  lStack_70 = param_4 - (long)auStack_68;
  puStack_78 = auStack_68;
  FUN_0035d0e4(&puStack_90,auStack_68);
  ppuVar1 = (undefined1 **)puStack_90;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    ppuVar1 = &puStack_90;
  }
  FUN_003ff220(param_1,param_2,param_3,ppuVar1,uStack_88);
  if ((char)bStack_79 < '\0') {
    param_2 = puStack_90;
    __ZdlPv(puStack_90);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    if ((char)bStack_79 < '\0') {
      __ZdlPv(puStack_90);
    }
    __Unwind_Resume(param_2);
    return;
  }
  return;
}



/* Entry: 00397c10; end: 00397c13;  */

void FUN_00397c10(void)

{
  return;
}



/* Entry: 00397c14; end: 00397c53;  */

void FUN_00397c14(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_00397cbc();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_00397d78();
  *(int *)(param_1 + 5) = (int)uVar3;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  return;
}



/* Entry: 00397c54; end: 00397cbb;  */

segment_command *
FUN_00397c54(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  segment_command *psVar7;
  long *plVar8;
  segment_command *psVar9;
  qword *pqVar10;
  qword *pqVar11;
  long *plVar12;
  uint uVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar14;
  qword qVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  qword qVar23;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar24;
  undefined8 uVar25;
  qword qVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 0x1a) &&
     (lVar14._0_4_ = param_2->cmd, lVar14._4_4_ = param_2->cmdsize,
     ((lVar14 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    psVar9 = param_4;
    FUN_00396040();
    qVar15 = param_4->filesize;
    psVar7 = psVar9;
    FUN_003980dc();
    *param_1 = psVar7;
    *(int *)(param_1 + 5) = (int)qVar15;
    *(int *)(param_1 + 1) = (int)psVar9;
    return psVar7;
  }
  if ((param_3 == 0x16) &&
     (lVar28._0_4_ = param_2->cmd, lVar28._4_4_ = param_2->cmdsize,
     (lVar28 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar9 = param_4;
    FUN_00398224();
    qVar15 = param_4->filesize;
    psVar7 = psVar9;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar15;
    *param_1 = psVar7;
    param_1[1] = psVar9;
    return psVar7;
  }
  if ((param_3 == 10) &&
     (lVar29._0_4_ = param_2->cmd, lVar29._4_4_ = param_2->cmdsize,
     lVar29 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar14 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar14) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar9;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar17._0_4_ = param_2->cmd, lVar17._4_4_ = param_2->cmdsize,
     lVar17 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar24;
    param_1[4] = uVar27;
    param_1[3] = uVar25;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar24;
    param_1[4] = uVar27;
    param_1[3] = uVar25;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     ((lVar1 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar24;
    param_1[4] = uVar27;
    param_1[3] = uVar25;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     (lVar2 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar24;
    param_1[4] = uVar27;
    param_1[3] = uVar25;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar18._0_4_ = param_2->cmd, lVar18._4_4_ = param_2->cmdsize,
     lVar18 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar24;
    param_1[4] = uVar27;
    param_1[3] = uVar25;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar19._0_4_ = param_2->cmd, lVar19._4_4_ = param_2->cmdsize,
     lVar19 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar24;
    param_1[4] = uVar27;
    param_1[3] = uVar25;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     (lVar3 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar9 = param_4;
    FUN_00399244();
    qVar15 = param_4->filesize;
    psVar7 = psVar9;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar15;
    *param_1 = psVar7;
    param_1[1] = psVar9;
    return psVar7;
  }
  if ((param_3 == 0xb) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize,
     lVar20 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar9 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar15 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar15;
    psVar9 = &segment_command_00000020;
    __Znwm();
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar9->cmd = (int)uVar24;
    psVar9->cmdsize = (int)((ulong)uVar24 >> 0x20);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar9->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar9->segname = uVar24;
    psVar9->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar9;
    return psVar9;
  }
  if ((param_3 == 8) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize, lVar22 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar15 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar15;
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar24;
    param_1[4] = uVar27;
    param_1[3] = uVar25;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar9);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar6 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar12 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar14 = *(long *)param_4;
  qVar15 = param_4->vmaddr;
  uVar24 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar14;
  *(qword *)((long)register0x00000008 + -0x58) = qVar15;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar24;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar11 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar8 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar14 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  psVar9 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar9) {
    do {
      lVar14 = *(long *)psVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar9,0x10);
      if (bVar5) {
        *(long *)psVar9 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)psVar9->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar9;
  }
  ___stack_chk_fail();
  if ((int)pqVar11 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar7 = psVar9;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar15 = *pqVar11;
  if (qVar15 == 0) {
    qVar26 = (long)pqVar11 + 9;
    qVar23 = (qword)(byte)pqVar11[1];
  }
  else {
    qVar23 = pqVar11[1];
    qVar26 = pqVar11[2];
  }
  if (qVar23 < 4) {
    uVar21 = 0;
  }
  else {
    uVar21 = (ulong)(*(int *)(qVar23 + qVar26 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar7 = &UNK_009dee20 + uVar21 * 0x40;
  if (qVar15 == 0) {
    uVar13 = (uint)(byte)pqVar11[1];
  }
  else {
    uVar13 = (uint)pqVar11[1];
  }
  if (*plVar12 == 0) {
    uVar16 = (uint)*(byte *)(plVar12 + 1);
  }
  else {
    uVar16 = (uint)plVar12[1];
  }
  *(uint *)&psVar7->fileoff = uVar16 + uVar13 + 0x20;
  pqVar10 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar15 = *pqVar11;
  qVar23 = pqVar11[3];
  qVar26 = pqVar11[2];
  pqVar10[1] = pqVar11[1];
  *pqVar10 = qVar15;
  pqVar10[3] = qVar23;
  pqVar10[2] = qVar26;
  pqVar11[1] = 0;
  *pqVar11 = 0;
  pqVar11[3] = 0;
  pqVar11[2] = 0;
  lVar14 = *plVar12;
  lVar29 = plVar12[3];
  lVar28 = plVar12[2];
  pqVar10[5] = plVar12[1];
  pqVar10[4] = lVar14;
  pqVar10[7] = lVar29;
  pqVar10[6] = lVar28;
  plVar12[1] = 0;
  *plVar12 = 0;
  plVar12[3] = 0;
  plVar12[2] = 0;
  *(qword **)psVar7->segname = pqVar10;
  return psVar7;
}



/* Entry: 00397cbc; end: 00397d77;  */

undefined1 * FUN_00397cbc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  FUN_003fe8a8(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10(plVar4);
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam0000000000afa930 & 1) == 0) {
    iVar5 = 0xafa930;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam0000000000afa8f0 = 0;
      uRam0000000000afa8f8 = 0x3ff2e4;
      pcRam0000000000afa900 = FUN_00397ec4;
      pcRam0000000000afa908 = FUN_00397e08;
      uRam0000000000afa910 = 0x397f00;
      pcRam0000000000afa918 = "grpc-timeout";
      uRam0000000000afa920 = 0xc;
      uRam0000000000afa928 = 0;
      ___cxa_guard_release(0xafa930);
    }
  }
  return (undefined1 *)0xafa8f0;
}



/* Entry: 00397d78; end: 00397e07;  */

undefined8 FUN_00397d78(void)

{
  int iVar1;
  
  if ((bRam0000000000afa930 & 1) == 0) {
    iVar1 = 0xafa930;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa8f0 = 0;
      uRam0000000000afa8f8 = 0x3ff2e4;
      pcRam0000000000afa900 = FUN_00397ec4;
      pcRam0000000000afa908 = FUN_00397e08;
      uRam0000000000afa910 = 0x397f00;
      pcRam0000000000afa918 = "grpc-timeout";
      uRam0000000000afa920 = 0xc;
      uRam0000000000afa928 = 0;
      ___cxa_guard_release(0xafa930);
    }
  }
  return 0xafa8f0;
}



/* Entry: 00397e08; end: 00397ec3;  */

void FUN_00397e08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  long **pplVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  iVar6 = (int)param_2;
  pplVar4 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_003fe8a8();
  plVar5 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar8 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(long ***)(param_4 + 8) = pplVar4;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  puVar3 = (uint *)CONCAT44(uVar7,iVar6);
  lVar8 = *plVar5;
  FUN_003fe8fc();
  *puVar3 = *puVar3 | 0x800;
  *(long *)(puVar3 + 0x60) = lVar8;
  return;
}



/* Entry: 00397ec4; end: 00397ef7;  */

void FUN_00397ec4(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_003fe8fc();
  *param_2 = *param_2 | 0x800;
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  return;
}



/* Entry: 00397ef8; end: 00397f23;  */

undefined8 FUN_00397ef8(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 00397f24; end: 00398017;  */

void FUN_00397f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5,code *param_6)

{
  undefined1 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)(param_4);
  (*param_6)(&puStack_70);
  ppuVar1 = (undefined1 **)puStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuVar1 = &puStack_70;
  }
  FUN_0035d0e4(&ppuStack_58,ppuVar1,uStack_68);
  pppuVar2 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar2 = &ppuStack_58;
  }
  FUN_003ff220(param_1,param_2,param_3,pppuVar2,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(puStack_70);
  }
  return;
}



/* Entry: 00398018; end: 0039803b;  */

void FUN_00398018(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_003b8e48(&uStack_18);
  return;
}



/* Entry: 0039803c; end: 0039807f;  */

void FUN_0039803c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_00396040();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_003980dc();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 00398080; end: 003980db;  */

segment_command *
FUN_00398080(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  segment_command *psVar7;
  long *plVar8;
  segment_command *psVar9;
  qword *pqVar10;
  qword *pqVar11;
  long *plVar12;
  uint uVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar14;
  qword qVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  qword qVar22;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar23;
  undefined8 uVar24;
  qword qVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 0x16) &&
     (lVar14._0_4_ = param_2->cmd, lVar14._4_4_ = param_2->cmdsize,
     (lVar14 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar9 = param_4;
    FUN_00398224();
    qVar15 = param_4->filesize;
    psVar7 = psVar9;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar15;
    *param_1 = psVar7;
    param_1[1] = psVar9;
    return psVar7;
  }
  if ((param_3 == 10) &&
     (lVar27._0_4_ = param_2->cmd, lVar27._4_4_ = param_2->cmdsize,
     lVar27 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar14 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar14) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar9;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar28._0_4_ = param_2->cmd, lVar28._4_4_ = param_2->cmdsize,
     lVar28 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar23;
    param_1[4] = uVar26;
    param_1[3] = uVar24;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar23;
    param_1[4] = uVar26;
    param_1[3] = uVar24;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     ((lVar1 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar23;
    param_1[4] = uVar26;
    param_1[3] = uVar24;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     (lVar2 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar23;
    param_1[4] = uVar26;
    param_1[3] = uVar24;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar17._0_4_ = param_2->cmd, lVar17._4_4_ = param_2->cmdsize,
     lVar17 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar23;
    param_1[4] = uVar26;
    param_1[3] = uVar24;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar18._0_4_ = param_2->cmd, lVar18._4_4_ = param_2->cmdsize,
     lVar18 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar23;
    param_1[4] = uVar26;
    param_1[3] = uVar24;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar9;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     (lVar3 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar9 = param_4;
    FUN_00399244();
    qVar15 = param_4->filesize;
    psVar7 = psVar9;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar15;
    *param_1 = psVar7;
    param_1[1] = psVar9;
    return psVar7;
  }
  if ((param_3 == 0xb) &&
     (lVar19._0_4_ = param_2->cmd, lVar19._4_4_ = param_2->cmdsize,
     lVar19 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar9 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar15 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar15;
    psVar9 = &segment_command_00000020;
    __Znwm();
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar9->cmd = (int)uVar23;
    psVar9->cmdsize = (int)((ulong)uVar23 >> 0x20);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar9->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar9->segname = uVar23;
    psVar9->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar9;
    return psVar9;
  }
  if ((param_3 == 8) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize, lVar21 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar15 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar9;
    *(int *)(param_1 + 5) = (int)qVar15;
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar23;
    param_1[4] = uVar26;
    param_1[3] = uVar24;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar9);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar6 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar12 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar14 = *(long *)param_4;
  qVar15 = param_4->vmaddr;
  uVar23 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar14;
  *(qword *)((long)register0x00000008 + -0x58) = qVar15;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar23;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar11 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar8 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar14 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  psVar9 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar9) {
    do {
      lVar14 = *(long *)psVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar9,0x10);
      if (bVar5) {
        *(long *)psVar9 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)psVar9->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar9;
  }
  ___stack_chk_fail();
  if ((int)pqVar11 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar7 = psVar9;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar15 = *pqVar11;
  if (qVar15 == 0) {
    qVar25 = (long)pqVar11 + 9;
    qVar22 = (qword)(byte)pqVar11[1];
  }
  else {
    qVar22 = pqVar11[1];
    qVar25 = pqVar11[2];
  }
  if (qVar22 < 4) {
    uVar20 = 0;
  }
  else {
    uVar20 = (ulong)(*(int *)(qVar22 + qVar25 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar7 = &UNK_009dee20 + uVar20 * 0x40;
  if (qVar15 == 0) {
    uVar13 = (uint)(byte)pqVar11[1];
  }
  else {
    uVar13 = (uint)pqVar11[1];
  }
  if (*plVar12 == 0) {
    uVar16 = (uint)*(byte *)(plVar12 + 1);
  }
  else {
    uVar16 = (uint)plVar12[1];
  }
  *(uint *)&psVar7->fileoff = uVar16 + uVar13 + 0x20;
  pqVar10 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar15 = *pqVar11;
  qVar22 = pqVar11[3];
  qVar25 = pqVar11[2];
  pqVar10[1] = pqVar11[1];
  *pqVar10 = qVar15;
  pqVar10[3] = qVar22;
  pqVar10[2] = qVar25;
  pqVar11[1] = 0;
  *pqVar11 = 0;
  pqVar11[3] = 0;
  pqVar11[2] = 0;
  lVar14 = *plVar12;
  lVar28 = plVar12[3];
  lVar27 = plVar12[2];
  pqVar10[5] = plVar12[1];
  pqVar10[4] = lVar14;
  pqVar10[7] = lVar28;
  pqVar10[6] = lVar27;
  plVar12[1] = 0;
  *plVar12 = 0;
  plVar12[3] = 0;
  plVar12[2] = 0;
  *(qword **)psVar7->segname = pqVar10;
  return psVar7;
}



/* Entry: 003980dc; end: 0039816b;  */

undefined8 FUN_003980dc(void)

{
  int iVar1;
  
  if ((bRam0000000000afa978 & 1) == 0) {
    iVar1 = 0xafa978;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa938 = 0;
      uRam0000000000afa940 = 0x3ff2e4;
      pcRam0000000000afa948 = FUN_0039816c;
      pcRam0000000000afa950 = FUN_0039618c;
      uRam0000000000afa958 = 0x398184;
      pcRam0000000000afa960 = "grpc-previous-rpc-attempts";
      uRam0000000000afa968 = 0x1a;
      uRam0000000000afa970 = 0;
      ___cxa_guard_release(0xafa978);
    }
  }
  return 0xafa938;
}



/* Entry: 0039816c; end: 003981a7;  */

void FUN_0039816c(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x1000;
  param_2[0x5e] = uVar1;
  return;
}



/* Entry: 003981a8; end: 003981e7;  */

void FUN_003981a8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_00398224();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_003982e0();
  *(int *)(param_1 + 5) = (int)uVar3;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  return;
}



/* Entry: 003981e8; end: 00398223;  */

segment_command *
FUN_003981e8(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  segment_command *psVar6;
  long *plVar7;
  segment_command *psVar8;
  qword *pqVar9;
  qword *pqVar10;
  long *plVar11;
  uint uVar12;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar13;
  qword qVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  qword qVar21;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar22;
  undefined8 uVar23;
  qword qVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_3 == 10) &&
     (lVar13._0_4_ = param_2->cmd, lVar13._4_4_ = param_2->cmdsize,
     lVar13 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar8 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = uStack_30;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar8;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar26._0_4_ = param_2->cmd, lVar26._4_4_ = param_2->cmdsize,
     lVar26 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar8 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar22;
    param_1[4] = uVar25;
    param_1[3] = uVar23;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar8;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar8 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar22;
    param_1[4] = uVar25;
    param_1[3] = uVar23;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar8;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar27._0_4_ = param_2->cmd, lVar27._4_4_ = param_2->cmdsize,
     ((lVar27 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar8 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar22;
    param_1[4] = uVar25;
    param_1[3] = uVar23;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar8;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     (lVar1 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar8 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar22;
    param_1[4] = uVar25;
    param_1[3] = uVar23;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar8;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar16._0_4_ = param_2->cmd, lVar16._4_4_ = param_2->cmdsize,
     lVar16 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar8 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar22;
    param_1[4] = uVar25;
    param_1[3] = uVar23;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar8;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar17._0_4_ = param_2->cmd, lVar17._4_4_ = param_2->cmdsize,
     lVar17 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar8 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar22;
    param_1[4] = uVar25;
    param_1[3] = uVar23;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar8;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     (lVar2 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar8 = param_4;
    FUN_00399244();
    qVar14 = param_4->filesize;
    psVar6 = psVar8;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar14;
    *param_1 = psVar6;
    param_1[1] = psVar8;
    return psVar6;
  }
  if ((param_3 == 0xb) &&
     (lVar18._0_4_ = param_2->cmd, lVar18._4_4_ = param_2->cmdsize,
     lVar18 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar8 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar14 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar8;
    *(int *)(param_1 + 5) = (int)qVar14;
    psVar8 = &segment_command_00000020;
    __Znwm();
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar8->cmd = (int)uVar22;
    psVar8->cmdsize = (int)((ulong)uVar22 >> 0x20);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar8->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar8->segname = uVar22;
    psVar8->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar8;
    return psVar8;
  }
  if ((param_3 == 8) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize, lVar20 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar8 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar14 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar8;
    *(int *)(param_1 + 5) = (int)qVar14;
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar22;
    param_1[4] = uVar25;
    param_1[3] = uVar23;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar8;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar8);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar5 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar11 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar13 = *(long *)param_4;
  qVar14 = param_4->vmaddr;
  uVar22 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar13;
  *(qword *)((long)register0x00000008 + -0x58) = qVar14;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar22;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar10 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar7 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
    do {
      lVar13 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plVar7[1])();
    }
  }
  psVar8 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar8) {
    do {
      lVar13 = *(long *)psVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar8,0x10);
      if (bVar4) {
        *(long *)psVar8 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)psVar8->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar8;
  }
  ___stack_chk_fail();
  if ((int)pqVar10 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar6 = psVar8;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar14 = *pqVar10;
  if (qVar14 == 0) {
    qVar24 = (long)pqVar10 + 9;
    qVar21 = (qword)(byte)pqVar10[1];
  }
  else {
    qVar21 = pqVar10[1];
    qVar24 = pqVar10[2];
  }
  if (qVar21 < 4) {
    uVar19 = 0;
  }
  else {
    uVar19 = (ulong)(*(int *)(qVar21 + qVar24 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar6 = &UNK_009dee20 + uVar19 * 0x40;
  if (qVar14 == 0) {
    uVar12 = (uint)(byte)pqVar10[1];
  }
  else {
    uVar12 = (uint)pqVar10[1];
  }
  if (*plVar11 == 0) {
    uVar15 = (uint)*(byte *)(plVar11 + 1);
  }
  else {
    uVar15 = (uint)plVar11[1];
  }
  *(uint *)&psVar6->fileoff = uVar15 + uVar12 + 0x20;
  pqVar9 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar14 = *pqVar10;
  qVar21 = pqVar10[3];
  qVar24 = pqVar10[2];
  pqVar9[1] = pqVar10[1];
  *pqVar9 = qVar14;
  pqVar9[3] = qVar21;
  pqVar9[2] = qVar24;
  pqVar10[1] = 0;
  *pqVar10 = 0;
  pqVar10[3] = 0;
  pqVar10[2] = 0;
  lVar13 = *plVar11;
  lVar27 = plVar11[3];
  lVar26 = plVar11[2];
  pqVar9[5] = plVar11[1];
  pqVar9[4] = lVar13;
  pqVar9[7] = lVar27;
  pqVar9[6] = lVar26;
  plVar11[1] = 0;
  *plVar11 = 0;
  plVar11[3] = 0;
  plVar11[2] = 0;
  *(qword **)psVar6->segname = pqVar9;
  return psVar6;
}



/* Entry: 00398224; end: 003982df;  */

undefined1 * FUN_00398224(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  func_0x003fee04(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10(plVar4);
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam0000000000afa9c0 & 1) == 0) {
    iVar5 = 0xafa9c0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam0000000000afa980 = 0;
      uRam0000000000afa988 = 0x3ff2e4;
      pcRam0000000000afa990 = FUN_0039842c;
      pcRam0000000000afa998 = FUN_00398370;
      uRam0000000000afa9a0 = 0x398444;
      pcRam0000000000afa9a8 = "grpc-retry-pushback-ms";
      uRam0000000000afa9b0 = 0x16;
      uRam0000000000afa9b8 = 0;
      ___cxa_guard_release(0xafa9c0);
    }
  }
  return (undefined1 *)0xafa980;
}



/* Entry: 003982e0; end: 0039836f;  */

undefined8 FUN_003982e0(void)

{
  int iVar1;
  
  if ((bRam0000000000afa9c0 & 1) == 0) {
    iVar1 = 0xafa9c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa980 = 0;
      uRam0000000000afa988 = 0x3ff2e4;
      pcRam0000000000afa990 = FUN_0039842c;
      pcRam0000000000afa998 = FUN_00398370;
      uRam0000000000afa9a0 = 0x398444;
      pcRam0000000000afa9a8 = "grpc-retry-pushback-ms";
      uRam0000000000afa9b0 = 0x16;
      uRam0000000000afa9b8 = 0;
      ___cxa_guard_release(0xafa9c0);
    }
  }
  return 0xafa980;
}



/* Entry: 00398370; end: 0039842b;  */

void FUN_00398370(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x003fee04();
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(long ***)(param_4 + 8) = pplVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 0x2000;
  *(long *)(CONCAT44(uVar6,iVar5) + 0x170) = lVar7;
  return;
}



/* Entry: 0039842c; end: 00398467;  */

void FUN_0039842c(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x2000;
  *(undefined8 *)(param_2 + 0x5c) = uVar1;
  return;
}



/* Entry: 00398468; end: 00398563;  */

void FUN_00398468(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4,
                 code *param_5,code *param_6)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  (*param_5)();
  (*param_6)();
  func_0x00574d40();
  lStack_70 = param_4 - (long)auStack_68;
  puStack_78 = auStack_68;
  FUN_0035d0e4(&puStack_90,auStack_68);
  ppuVar1 = (undefined1 **)puStack_90;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    ppuVar1 = &puStack_90;
  }
  FUN_003ff220(param_1,param_2,param_3,ppuVar1,uStack_88);
  if ((char)bStack_79 < '\0') {
    param_2 = puStack_90;
    __ZdlPv(puStack_90);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    if ((char)bStack_79 < '\0') {
      __ZdlPv(puStack_90);
    }
    __Unwind_Resume(param_2);
    return;
  }
  return;
}



/* Entry: 00398564; end: 00398567;  */

void FUN_00398564(void)

{
  return;
}



/* Entry: 00398568; end: 003985ff;  */

segment_command *
FUN_00398568(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  segment_command *psVar6;
  segment_command *psVar7;
  long *plVar8;
  segment_command *psVar9;
  qword *pqVar10;
  qword *pqVar11;
  segment_command *psVar12;
  long *plVar13;
  uint uVar14;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  qword qVar23;
  qword qVar24;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar25;
  code *pcVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  qword qVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  qword qStack_70;
  segment_command *psStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pppppuVar25 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar9 = param_2;
  FUN_003955d0(&uStack_48);
  qVar24 = param_2->filesize;
  FUN_00398640();
  *param_1 = psVar9;
  *(int *)(param_1 + 5) = (int)qVar24;
  param_1[2] = uStack_40;
  param_1[1] = uStack_48;
  param_1[4] = uStack_30;
  param_1[3] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return psVar9;
  }
  ___stack_chk_fail();
  FUN_0034b418(&uStack_48);
  pcVar26 = FUN_00398600;
  psVar6 = psVar9;
  __Unwind_Resume();
  puVar4 = auStack_50;
  puVar15 = extraout_x8;
  if ((param_3 == 0xc) &&
     (lVar16._0_4_ = psVar6->cmd, lVar16._4_4_ = psVar6->cmdsize, puVar4 = auStack_50,
     lVar16 == 0x73656d2d63707267 && *(int *)psVar6->segname == 0x65676173)) {
    pcStack_58 = FUN_00398600;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    psVar7 = param_4;
    psVar12 = param_4;
    qStack_70 = qVar24;
    psStack_68 = psVar9;
    ppppuStack_60 = pppppuVar25;
    FUN_003955d0(&uStack_98);
    qVar24 = param_4->filesize;
    FUN_003987dc();
    *extraout_x8 = psVar7;
    *(int *)(extraout_x8 + 5) = (int)qVar24;
    extraout_x8[2] = uStack_90;
    extraout_x8[1] = uStack_98;
    extraout_x8[4] = uStack_80;
    extraout_x8[3] = uStack_88;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return psVar7;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_98);
    pcVar26 = FUN_003987b4;
    psVar6 = psVar7;
    __Unwind_Resume();
    puVar4 = auStack_a0;
    param_4 = psVar12;
    puVar15 = extraout_x8_00;
    psVar9 = psVar7;
    pppppuVar25 = &ppppuStack_60;
  }
  if ((param_3 == 4) && (psVar6->cmd == 0x74736f68)) {
    *(qword *)(puVar4 + -0x20) = qVar24;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar25;
    *(code **)(puVar4 + -8) = pcVar26;
    pppppuVar25 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar24 = param_4->filesize;
    FUN_003989b8();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar24;
    uVar27 = *(undefined8 *)(puVar4 + -0x48);
    uVar30 = *(undefined8 *)(puVar4 + -0x30);
    uVar28 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar27;
    puVar15[4] = uVar30;
    puVar15[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar26 = FUN_00398950;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar31._0_4_ = psVar6->cmd, lVar31._4_4_ = psVar6->cmdsize,
     ((lVar31 == 0x746e696f70646e65 && *(long *)psVar6->segname == 0x656d2d64616f6c2d) &&
     *(long *)(psVar6->segname + 8) == 0x69622d7363697274) && (char)psVar6->vmaddr == 'n')) {
    *(qword *)(puVar4 + -0x20) = qVar24;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar25;
    *(code **)(puVar4 + -8) = pcVar26;
    pppppuVar25 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar24 = param_4->filesize;
    FUN_00398b88();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar24;
    uVar27 = *(undefined8 *)(puVar4 + -0x48);
    uVar30 = *(undefined8 *)(puVar4 + -0x30);
    uVar28 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar27;
    puVar15[4] = uVar30;
    puVar15[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar26 = FUN_00398b2c;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar32._0_4_ = psVar6->cmd, lVar32._4_4_ = psVar6->cmdsize,
     (lVar32 == 0x7265732d63707267 && *(long *)psVar6->segname == 0x746174732d726576) &&
     *(long *)(psVar6->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)(puVar4 + -0x20) = qVar24;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar25;
    *(code **)(puVar4 + -8) = pcVar26;
    pppppuVar25 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar24 = param_4->filesize;
    FUN_00398d48();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar24;
    uVar27 = *(undefined8 *)(puVar4 + -0x48);
    uVar30 = *(undefined8 *)(puVar4 + -0x30);
    uVar28 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar27;
    puVar15[4] = uVar30;
    puVar15[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar26 = FUN_00398d00;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar18._0_4_ = psVar6->cmd, lVar18._4_4_ = psVar6->cmdsize,
     lVar18 == 0x6172742d63707267 && *(long *)((long)&psVar6->cmdsize + 2) == 0x6e69622d65636172)) {
    *(qword *)(puVar4 + -0x20) = qVar24;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar25;
    *(code **)(puVar4 + -8) = pcVar26;
    pppppuVar25 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar24 = param_4->filesize;
    FUN_00398f08();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar24;
    uVar27 = *(undefined8 *)(puVar4 + -0x48);
    uVar30 = *(undefined8 *)(puVar4 + -0x30);
    uVar28 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar27;
    puVar15[4] = uVar30;
    puVar15[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar26 = FUN_00398ec0;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar19._0_4_ = psVar6->cmd, lVar19._4_4_ = psVar6->cmdsize,
     lVar19 == 0x6761742d63707267 && *(long *)((long)&psVar6->cmdsize + 1) == 0x6e69622d73676174)) {
    *(qword *)(puVar4 + -0x20) = qVar24;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar25;
    *(code **)(puVar4 + -8) = pcVar26;
    pppppuVar25 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar24 = param_4->filesize;
    FUN_003990dc();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar24;
    uVar27 = *(undefined8 *)(puVar4 + -0x48);
    uVar30 = *(undefined8 *)(puVar4 + -0x30);
    uVar28 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar27;
    puVar15[4] = uVar30;
    puVar15[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar26 = FUN_00399080;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar1._0_4_ = psVar6->cmd, lVar1._4_4_ = psVar6->cmdsize,
     (lVar1 == 0x635f626c63707267 && *(long *)psVar6->segname == 0x74735f746e65696c) &&
     *(long *)(psVar6->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(qword *)(puVar4 + -0x20) = qVar24;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar25;
    *(code **)(puVar4 + -8) = pcVar26;
    psVar9 = param_4;
    FUN_00399244();
    qVar24 = param_4->filesize;
    psVar6 = psVar9;
    FUN_00399290();
    *(int *)(puVar15 + 5) = (int)qVar24;
    *puVar15 = psVar6;
    puVar15[1] = psVar9;
    return psVar6;
  }
  if ((param_3 == 0xb) &&
     (lVar20._0_4_ = psVar6->cmd, lVar20._4_4_ = psVar6->cmdsize,
     lVar20 == 0x2d74736f632d626c && *(long *)((long)&psVar6->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)(puVar4 + -0x20) = qVar24;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar25;
    *(code **)(puVar4 + -8) = pcVar26;
    psVar9 = param_4;
    FUN_00399554(puVar4 + -0x40);
    qVar24 = param_4->filesize;
    FUN_00399608();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar24;
    psVar9 = &segment_command_00000020;
    __Znwm();
    uVar27 = *(undefined8 *)(puVar4 + -0x40);
    psVar9->cmd = (int)uVar27;
    psVar9->cmdsize = (int)((ulong)uVar27 >> 0x20);
    uVar27 = *(undefined8 *)(puVar4 + -0x38);
    *(undefined8 *)(psVar9->segname + 8) = *(undefined8 *)(puVar4 + -0x30);
    *(undefined8 *)psVar9->segname = uVar27;
    psVar9->vmaddr = *(qword *)(puVar4 + -0x28);
    puVar15[1] = psVar9;
    return psVar9;
  }
  if ((param_3 == 8) &&
     (lVar22._0_4_ = psVar6->cmd, lVar22._4_4_ = psVar6->cmdsize, lVar22 == 0x6e656b6f742d626c)) {
    *(qword *)(puVar4 + -0x20) = qVar24;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar25;
    *(code **)(puVar4 + -8) = pcVar26;
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar24 = param_4->filesize;
    FUN_00399b24();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar24;
    uVar27 = *(undefined8 *)(puVar4 + -0x48);
    uVar30 = *(undefined8 *)(puVar4 + -0x30);
    uVar28 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar27;
    puVar15[4] = uVar30;
    puVar15[3] = uVar28;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    __Unwind_Resume(psVar9);
    *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar5 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar13 = (long *)(puVar4 + -0x70);
  *(qword *)(puVar4 + -0x20) = qVar24;
  *(segment_command **)(puVar4 + -0x18) = psVar9;
  *(undefined8 ******)(puVar4 + -0x10) = pppppuVar25;
  *(code **)(puVar4 + -8) = pcVar26;
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(puVar4 + -0x48,psVar6,param_3);
  lVar16 = *(long *)param_4;
  qVar24 = param_4->vmaddr;
  uVar27 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)(puVar4 + -0x70) = lVar16;
  *(qword *)(puVar4 + -0x58) = qVar24;
  *(undefined8 *)(puVar4 + -0x60) = uVar27;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar11 = (qword *)(puVar4 + -0x48);
  FUN_00399d0c(puVar15);
  plVar8 = *(long **)(puVar4 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar16 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  psVar9 = *(segment_command **)(puVar4 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar9) {
    do {
      lVar16 = *(long *)psVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar9,0x10);
      if (bVar3) {
        *(long *)psVar9 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)psVar9->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
    return psVar9;
  }
  ___stack_chk_fail();
  if ((int)pqVar11 != 0) {
    func_0x0040cf10();
    FUN_0034b418(puVar4 + -0x70);
    FUN_0034b418(puVar4 + -0x48);
  }
  psVar6 = psVar9;
  __Unwind_Resume();
  *(undefined8 *)(puVar4 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x98) = unaff_x21;
  *(segment_command **)(puVar4 + -0x90) = param_4;
  *(segment_command **)(puVar4 + -0x88) = psVar9;
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x78) = FUN_00399d0c;
  qVar24 = *pqVar11;
  if (qVar24 == 0) {
    qVar29 = (long)pqVar11 + 9;
    qVar23 = (qword)(byte)pqVar11[1];
  }
  else {
    qVar23 = pqVar11[1];
    qVar29 = pqVar11[2];
  }
  if (qVar23 < 4) {
    uVar21 = 0;
  }
  else {
    uVar21 = (ulong)(*(int *)(qVar23 + qVar29 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar6 = &UNK_009dee20 + uVar21 * 0x40;
  if (qVar24 == 0) {
    uVar14 = (uint)(byte)pqVar11[1];
  }
  else {
    uVar14 = (uint)pqVar11[1];
  }
  if (*plVar13 == 0) {
    uVar17 = (uint)*(byte *)(plVar13 + 1);
  }
  else {
    uVar17 = (uint)plVar13[1];
  }
  *(uint *)&psVar6->fileoff = uVar17 + uVar14 + 0x20;
  pqVar10 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar24 = *pqVar11;
  qVar23 = pqVar11[3];
  qVar29 = pqVar11[2];
  pqVar10[1] = pqVar11[1];
  *pqVar10 = qVar24;
  pqVar10[3] = qVar23;
  pqVar10[2] = qVar29;
  pqVar11[1] = 0;
  *pqVar11 = 0;
  pqVar11[3] = 0;
  pqVar11[2] = 0;
  lVar16 = *plVar13;
  lVar32 = plVar13[3];
  lVar31 = plVar13[2];
  pqVar10[5] = plVar13[1];
  pqVar10[4] = lVar16;
  pqVar10[7] = lVar32;
  pqVar10[6] = lVar31;
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar13[3] = 0;
  plVar13[2] = 0;
  *(qword **)psVar6->segname = pqVar10;
  return psVar6;
}



/* Entry: 00398600; end: 0039863f;  */

segment_command *
FUN_00398600(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  segment_command *psVar5;
  long *plVar6;
  segment_command *psVar7;
  qword *pqVar8;
  qword *pqVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  long lVar12;
  qword qVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  qword qVar20;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar21;
  undefined8 uVar22;
  qword qVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_3 == 0xc) &&
     (lVar12._0_4_ = param_2->cmd, lVar12._4_4_ = param_2->cmdsize,
     lVar12 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = uStack_30;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar7;
    param_1 = extraout_x8;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar21;
    param_1[4] = uVar24;
    param_1[3] = uVar22;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 0x19) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize,
     ((lVar25 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar21;
    param_1[4] = uVar24;
    param_1[3] = uVar22;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x15) &&
     (lVar26._0_4_ = param_2->cmd, lVar26._4_4_ = param_2->cmdsize,
     (lVar26 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar21;
    param_1[4] = uVar24;
    param_1[3] = uVar22;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0xe) &&
     (lVar15._0_4_ = param_2->cmd, lVar15._4_4_ = param_2->cmdsize,
     lVar15 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar21;
    param_1[4] = uVar24;
    param_1[3] = uVar22;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xd) &&
     (lVar16._0_4_ = param_2->cmd, lVar16._4_4_ = param_2->cmdsize,
     lVar16 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar21;
    param_1[4] = uVar24;
    param_1[3] = uVar22;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0x13) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     (lVar1 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar7 = param_4;
    FUN_00399244();
    qVar13 = param_4->filesize;
    psVar5 = psVar7;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar13;
    *param_1 = psVar5;
    param_1[1] = psVar7;
    return psVar5;
  }
  if ((param_3 == 0xb) &&
     (lVar17._0_4_ = param_2->cmd, lVar17._4_4_ = param_2->cmdsize,
     lVar17 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar7 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar13 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar7;
    *(int *)(param_1 + 5) = (int)qVar13;
    psVar7 = &segment_command_00000020;
    __Znwm();
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar7->cmd = (int)uVar21;
    psVar7->cmdsize = (int)((ulong)uVar21 >> 0x20);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar7->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar7->segname = uVar21;
    psVar7->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar7;
    return psVar7;
  }
  if ((param_3 == 8) &&
     (lVar19._0_4_ = param_2->cmd, lVar19._4_4_ = param_2->cmdsize, lVar19 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar13 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar7;
    *(int *)(param_1 + 5) = (int)qVar13;
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar21;
    param_1[4] = uVar24;
    param_1[3] = uVar22;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar7;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar7);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar4 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar10 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar12 = *(long *)param_4;
  qVar13 = param_4->vmaddr;
  uVar21 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar12;
  *(qword *)((long)register0x00000008 + -0x58) = qVar13;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar21;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar9 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar6 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar6[1])();
    }
  }
  psVar7 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar7) {
    do {
      lVar12 = *(long *)psVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar7,0x10);
      if (bVar3) {
        *(long *)psVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)psVar7->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar7;
  }
  ___stack_chk_fail();
  if ((int)pqVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar5 = psVar7;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar13 = *pqVar9;
  if (qVar13 == 0) {
    qVar23 = (long)pqVar9 + 9;
    qVar20 = (qword)(byte)pqVar9[1];
  }
  else {
    qVar20 = pqVar9[1];
    qVar23 = pqVar9[2];
  }
  if (qVar20 < 4) {
    uVar18 = 0;
  }
  else {
    uVar18 = (ulong)(*(int *)(qVar20 + qVar23 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar5 = &UNK_009dee20 + uVar18 * 0x40;
  if (qVar13 == 0) {
    uVar11 = (uint)(byte)pqVar9[1];
  }
  else {
    uVar11 = (uint)pqVar9[1];
  }
  if (*plVar10 == 0) {
    uVar14 = (uint)*(byte *)(plVar10 + 1);
  }
  else {
    uVar14 = (uint)plVar10[1];
  }
  *(uint *)&psVar5->fileoff = uVar14 + uVar11 + 0x20;
  pqVar8 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar13 = *pqVar9;
  qVar20 = pqVar9[3];
  qVar23 = pqVar9[2];
  pqVar8[1] = pqVar9[1];
  *pqVar8 = qVar13;
  pqVar8[3] = qVar20;
  pqVar8[2] = qVar23;
  pqVar9[1] = 0;
  *pqVar9 = 0;
  pqVar9[3] = 0;
  pqVar9[2] = 0;
  lVar12 = *plVar10;
  lVar26 = plVar10[3];
  lVar25 = plVar10[2];
  pqVar8[5] = plVar10[1];
  pqVar8[4] = lVar12;
  pqVar8[7] = lVar26;
  pqVar8[6] = lVar25;
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10[3] = 0;
  plVar10[2] = 0;
  *(qword **)psVar5->segname = pqVar8;
  return psVar5;
}



/* Entry: 00398640; end: 003986cf;  */

undefined8 FUN_00398640(void)

{
  int iVar1;
  
  if ((bRam0000000000afaa08 & 1) == 0) {
    iVar1 = 0xafaa08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa9c8 = 0;
      uRam0000000000afa9d0 = 0x3ff2b8;
      pcRam0000000000afa9d8 = FUN_003986d0;
      pcRam0000000000afa9e0 = FUN_00395710;
      uRam0000000000afa9e8 = 0x3986f8;
      pcRam0000000000afa9f0 = "user-agent";
      uRam0000000000afa9f8 = 10;
      uRam0000000000afaa00 = 0;
      ___cxa_guard_release(0xafaa08);
    }
  }
  return 0xafa9c8;
}



/* Entry: 003986d0; end: 0039871b;  */

undefined1  [16] FUN_003986d0(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 extraout_x8;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = param_2 + 0x54;
  uVar3 = *param_2;
  *param_2 = uVar3 | 0x4000;
  if ((uVar3 >> 0xe & 1) == 0) {
    param_2[0x56] = 0;
    param_2[0x57] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_2[0x5a] = 0;
    param_2[0x5b] = 0;
    param_2[0x58] = 0;
    param_2[0x59] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_80,param_1);
  uVar8 = uStack_68;
  uVar7 = uStack_70;
  uVar12 = uStack_78;
  plVar10 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar9 = *(long **)puVar1;
  uStack_58 = *(undefined8 *)(param_2 + 0x58);
  uStack_60 = *(undefined8 *)(param_2 + 0x56);
  uStack_50 = *(undefined8 *)(param_2 + 0x5a);
  *(long **)puVar1 = plVar10;
  *(undefined8 *)(param_2 + 0x58) = uVar7;
  *(undefined8 *)(param_2 + 0x56) = uVar12;
  *(undefined8 *)(param_2 + 0x5a) = uVar8;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      lVar13 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plVar9[1])();
    }
  }
  plVar10 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar13 = *plStack_80;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar5) {
        *plStack_80 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar10;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar12 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_d8,plVar10);
  pplVar11 = aplStack_d8;
  FUN_00395a64(pplVar11);
  FUN_0035d0e4(&puStack_f0,pplVar11,uVar12);
  ppuVar6 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar6 = &puStack_f0;
  }
  uVar12 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar6,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar10 = aplStack_d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_d8[0]) {
    do {
      lVar13 = *aplStack_d8[0];
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar5) {
        *aplStack_d8[0] = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar10 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar15._8_8_ = uVar12;
    auVar15._0_8_ = plVar10;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar12 != 0) {
    func_0x0040cf10();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    FUN_0034b418(aplStack_d8);
  }
  __Unwind_Resume();
  uVar2 = plVar10[1] & 0xff;
  lVar13 = (long)plVar10 + 9;
  if (*plVar10 != 0) {
    uVar2 = plVar10[1];
    lVar13 = plVar10[2];
  }
  auVar16._8_8_ = uVar2;
  auVar16._0_8_ = lVar13;
  return auVar16;
}



/* Entry: 0039871c; end: 003987b3;  */

segment_command *
FUN_0039871c(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  segment_command *psVar6;
  segment_command *psVar7;
  long *plVar8;
  segment_command *psVar9;
  qword *pqVar10;
  qword *pqVar11;
  segment_command *psVar12;
  long *plVar13;
  uint uVar14;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  qword qVar22;
  qword qVar23;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  qword qVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  qword qStack_70;
  segment_command *psStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pppppuVar24 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar9 = param_2;
  FUN_003955d0(&uStack_48);
  qVar23 = param_2->filesize;
  FUN_003987dc();
  *param_1 = psVar9;
  *(int *)(param_1 + 5) = (int)qVar23;
  param_1[2] = uStack_40;
  param_1[1] = uStack_48;
  param_1[4] = uStack_30;
  param_1[3] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return psVar9;
  }
  ___stack_chk_fail();
  FUN_0034b418(&uStack_48);
  pcVar25 = FUN_003987b4;
  psVar6 = psVar9;
  __Unwind_Resume();
  puVar4 = auStack_50;
  puVar15 = extraout_x8;
  if ((param_3 == 4) && (puVar4 = auStack_50, psVar6->cmd == 0x74736f68)) {
    pcStack_58 = FUN_003987b4;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    psVar7 = param_4;
    psVar12 = param_4;
    qStack_70 = qVar23;
    psStack_68 = psVar9;
    ppppuStack_60 = pppppuVar24;
    FUN_003955d0(&uStack_98);
    qVar23 = param_4->filesize;
    FUN_003989b8();
    *extraout_x8 = psVar7;
    *(int *)(extraout_x8 + 5) = (int)qVar23;
    extraout_x8[2] = uStack_90;
    extraout_x8[1] = uStack_98;
    extraout_x8[4] = uStack_80;
    extraout_x8[3] = uStack_88;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return psVar7;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_98);
    pcVar25 = FUN_00398950;
    psVar6 = psVar7;
    __Unwind_Resume();
    puVar4 = auStack_a0;
    param_4 = psVar12;
    puVar15 = extraout_x8_00;
    psVar9 = psVar7;
    pppppuVar24 = &ppppuStack_60;
  }
  if ((param_3 == 0x19) &&
     (lVar16._0_4_ = psVar6->cmd, lVar16._4_4_ = psVar6->cmdsize,
     ((lVar16 == 0x746e696f70646e65 && *(long *)psVar6->segname == 0x656d2d64616f6c2d) &&
     *(long *)(psVar6->segname + 8) == 0x69622d7363697274) && (char)psVar6->vmaddr == 'n')) {
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar23 = param_4->filesize;
    FUN_00398b88();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar23;
    uVar26 = *(undefined8 *)(puVar4 + -0x48);
    uVar29 = *(undefined8 *)(puVar4 + -0x30);
    uVar27 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar26;
    puVar15[4] = uVar29;
    puVar15[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar25 = FUN_00398b2c;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_01;
  }
  if ((param_3 == 0x15) &&
     (lVar30._0_4_ = psVar6->cmd, lVar30._4_4_ = psVar6->cmdsize,
     (lVar30 == 0x7265732d63707267 && *(long *)psVar6->segname == 0x746174732d726576) &&
     *(long *)(psVar6->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar23 = param_4->filesize;
    FUN_00398d48();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar23;
    uVar26 = *(undefined8 *)(puVar4 + -0x48);
    uVar29 = *(undefined8 *)(puVar4 + -0x30);
    uVar27 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar26;
    puVar15[4] = uVar29;
    puVar15[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar25 = FUN_00398d00;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_02;
  }
  if ((param_3 == 0xe) &&
     (lVar31._0_4_ = psVar6->cmd, lVar31._4_4_ = psVar6->cmdsize,
     lVar31 == 0x6172742d63707267 && *(long *)((long)&psVar6->cmdsize + 2) == 0x6e69622d65636172)) {
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar23 = param_4->filesize;
    FUN_00398f08();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar23;
    uVar26 = *(undefined8 *)(puVar4 + -0x48);
    uVar29 = *(undefined8 *)(puVar4 + -0x30);
    uVar27 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar26;
    puVar15[4] = uVar29;
    puVar15[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar25 = FUN_00398ec0;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_03;
  }
  if ((param_3 == 0xd) &&
     (lVar18._0_4_ = psVar6->cmd, lVar18._4_4_ = psVar6->cmdsize,
     lVar18 == 0x6761742d63707267 && *(long *)((long)&psVar6->cmdsize + 1) == 0x6e69622d73676174)) {
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar23 = param_4->filesize;
    FUN_003990dc();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar23;
    uVar26 = *(undefined8 *)(puVar4 + -0x48);
    uVar29 = *(undefined8 *)(puVar4 + -0x30);
    uVar27 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar26;
    puVar15[4] = uVar29;
    puVar15[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar25 = FUN_00399080;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_04;
  }
  if ((param_3 == 0x13) &&
     (lVar1._0_4_ = psVar6->cmd, lVar1._4_4_ = psVar6->cmdsize,
     (lVar1 == 0x635f626c63707267 && *(long *)psVar6->segname == 0x74735f746e65696c) &&
     *(long *)(psVar6->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    psVar9 = param_4;
    FUN_00399244();
    qVar23 = param_4->filesize;
    psVar6 = psVar9;
    FUN_00399290();
    *(int *)(puVar15 + 5) = (int)qVar23;
    *puVar15 = psVar6;
    puVar15[1] = psVar9;
    return psVar6;
  }
  if ((param_3 == 0xb) &&
     (lVar19._0_4_ = psVar6->cmd, lVar19._4_4_ = psVar6->cmdsize,
     lVar19 == 0x2d74736f632d626c && *(long *)((long)&psVar6->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    psVar9 = param_4;
    FUN_00399554(puVar4 + -0x40);
    qVar23 = param_4->filesize;
    FUN_00399608();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar23;
    psVar9 = &segment_command_00000020;
    __Znwm();
    uVar26 = *(undefined8 *)(puVar4 + -0x40);
    psVar9->cmd = (int)uVar26;
    psVar9->cmdsize = (int)((ulong)uVar26 >> 0x20);
    uVar26 = *(undefined8 *)(puVar4 + -0x38);
    *(undefined8 *)(psVar9->segname + 8) = *(undefined8 *)(puVar4 + -0x30);
    *(undefined8 *)psVar9->segname = uVar26;
    psVar9->vmaddr = *(qword *)(puVar4 + -0x28);
    puVar15[1] = psVar9;
    return psVar9;
  }
  if ((param_3 == 8) &&
     (lVar21._0_4_ = psVar6->cmd, lVar21._4_4_ = psVar6->cmdsize, lVar21 == 0x6e656b6f742d626c)) {
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar23 = param_4->filesize;
    FUN_00399b24();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar23;
    uVar26 = *(undefined8 *)(puVar4 + -0x48);
    uVar29 = *(undefined8 *)(puVar4 + -0x30);
    uVar27 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar26;
    puVar15[4] = uVar29;
    puVar15[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    __Unwind_Resume(psVar9);
    *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar5 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar13 = (long *)(puVar4 + -0x70);
  *(qword *)(puVar4 + -0x20) = qVar23;
  *(segment_command **)(puVar4 + -0x18) = psVar9;
  *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
  *(code **)(puVar4 + -8) = pcVar25;
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(puVar4 + -0x48,psVar6,param_3);
  lVar16 = *(long *)param_4;
  qVar23 = param_4->vmaddr;
  uVar26 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)(puVar4 + -0x70) = lVar16;
  *(qword *)(puVar4 + -0x58) = qVar23;
  *(undefined8 *)(puVar4 + -0x60) = uVar26;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar11 = (qword *)(puVar4 + -0x48);
  FUN_00399d0c(puVar15);
  plVar8 = *(long **)(puVar4 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar16 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  psVar9 = *(segment_command **)(puVar4 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar9) {
    do {
      lVar16 = *(long *)psVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar9,0x10);
      if (bVar3) {
        *(long *)psVar9 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)psVar9->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
    return psVar9;
  }
  ___stack_chk_fail();
  if ((int)pqVar11 != 0) {
    func_0x0040cf10();
    FUN_0034b418(puVar4 + -0x70);
    FUN_0034b418(puVar4 + -0x48);
  }
  psVar6 = psVar9;
  __Unwind_Resume();
  *(undefined8 *)(puVar4 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x98) = unaff_x21;
  *(segment_command **)(puVar4 + -0x90) = param_4;
  *(segment_command **)(puVar4 + -0x88) = psVar9;
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x78) = FUN_00399d0c;
  qVar23 = *pqVar11;
  if (qVar23 == 0) {
    qVar28 = (long)pqVar11 + 9;
    qVar22 = (qword)(byte)pqVar11[1];
  }
  else {
    qVar22 = pqVar11[1];
    qVar28 = pqVar11[2];
  }
  if (qVar22 < 4) {
    uVar20 = 0;
  }
  else {
    uVar20 = (ulong)(*(int *)(qVar22 + qVar28 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar6 = &UNK_009dee20 + uVar20 * 0x40;
  if (qVar23 == 0) {
    uVar14 = (uint)(byte)pqVar11[1];
  }
  else {
    uVar14 = (uint)pqVar11[1];
  }
  if (*plVar13 == 0) {
    uVar17 = (uint)*(byte *)(plVar13 + 1);
  }
  else {
    uVar17 = (uint)plVar13[1];
  }
  *(uint *)&psVar6->fileoff = uVar17 + uVar14 + 0x20;
  pqVar10 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar23 = *pqVar11;
  qVar22 = pqVar11[3];
  qVar28 = pqVar11[2];
  pqVar10[1] = pqVar11[1];
  *pqVar10 = qVar23;
  pqVar10[3] = qVar22;
  pqVar10[2] = qVar28;
  pqVar11[1] = 0;
  *pqVar11 = 0;
  pqVar11[3] = 0;
  pqVar11[2] = 0;
  lVar16 = *plVar13;
  lVar31 = plVar13[3];
  lVar30 = plVar13[2];
  pqVar10[5] = plVar13[1];
  pqVar10[4] = lVar16;
  pqVar10[7] = lVar31;
  pqVar10[6] = lVar30;
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar13[3] = 0;
  plVar13[2] = 0;
  *(qword **)psVar6->segname = pqVar10;
  return psVar6;
}



/* Entry: 003987b4; end: 003987db;  */

segment_command *
FUN_003987b4(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  segment_command *psVar5;
  long *plVar6;
  segment_command *psVar7;
  qword *pqVar8;
  qword *pqVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  long lVar12;
  qword qVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  qword qVar19;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar20;
  undefined8 uVar21;
  qword qVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = uStack_30;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar7;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0x19) &&
     (lVar12._0_4_ = param_2->cmd, lVar12._4_4_ = param_2->cmdsize,
     ((lVar12 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar20;
    param_1[4] = uVar23;
    param_1[3] = uVar21;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 0x15) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     (lVar24 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar20;
    param_1[4] = uVar23;
    param_1[3] = uVar21;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0xe) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize,
     lVar25 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar20;
    param_1[4] = uVar23;
    param_1[3] = uVar21;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0xd) &&
     (lVar15._0_4_ = param_2->cmd, lVar15._4_4_ = param_2->cmdsize,
     lVar15 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar20;
    param_1[4] = uVar23;
    param_1[3] = uVar21;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0x13) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     (lVar1 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar7 = param_4;
    FUN_00399244();
    qVar13 = param_4->filesize;
    psVar5 = psVar7;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar13;
    *param_1 = psVar5;
    param_1[1] = psVar7;
    return psVar5;
  }
  if ((param_3 == 0xb) &&
     (lVar16._0_4_ = param_2->cmd, lVar16._4_4_ = param_2->cmdsize,
     lVar16 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar7 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar13 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar7;
    *(int *)(param_1 + 5) = (int)qVar13;
    psVar7 = &segment_command_00000020;
    __Znwm();
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar7->cmd = (int)uVar20;
    psVar7->cmdsize = (int)((ulong)uVar20 >> 0x20);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar7->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar7->segname = uVar20;
    psVar7->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar7;
    return psVar7;
  }
  if ((param_3 == 8) &&
     (lVar18._0_4_ = param_2->cmd, lVar18._4_4_ = param_2->cmdsize, lVar18 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar13 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar7;
    *(int *)(param_1 + 5) = (int)qVar13;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar20;
    param_1[4] = uVar23;
    param_1[3] = uVar21;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar7;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar7);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar4 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar10 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar12 = *(long *)param_4;
  qVar13 = param_4->vmaddr;
  uVar20 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar12;
  *(qword *)((long)register0x00000008 + -0x58) = qVar13;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar20;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar9 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar6 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar6[1])();
    }
  }
  psVar7 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar7) {
    do {
      lVar12 = *(long *)psVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar7,0x10);
      if (bVar3) {
        *(long *)psVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)psVar7->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar7;
  }
  ___stack_chk_fail();
  if ((int)pqVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar5 = psVar7;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar13 = *pqVar9;
  if (qVar13 == 0) {
    qVar22 = (long)pqVar9 + 9;
    qVar19 = (qword)(byte)pqVar9[1];
  }
  else {
    qVar19 = pqVar9[1];
    qVar22 = pqVar9[2];
  }
  if (qVar19 < 4) {
    uVar17 = 0;
  }
  else {
    uVar17 = (ulong)(*(int *)(qVar19 + qVar22 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar5 = &UNK_009dee20 + uVar17 * 0x40;
  if (qVar13 == 0) {
    uVar11 = (uint)(byte)pqVar9[1];
  }
  else {
    uVar11 = (uint)pqVar9[1];
  }
  if (*plVar10 == 0) {
    uVar14 = (uint)*(byte *)(plVar10 + 1);
  }
  else {
    uVar14 = (uint)plVar10[1];
  }
  *(uint *)&psVar5->fileoff = uVar14 + uVar11 + 0x20;
  pqVar8 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar13 = *pqVar9;
  qVar19 = pqVar9[3];
  qVar22 = pqVar9[2];
  pqVar8[1] = pqVar9[1];
  *pqVar8 = qVar13;
  pqVar8[3] = qVar19;
  pqVar8[2] = qVar22;
  pqVar9[1] = 0;
  *pqVar9 = 0;
  pqVar9[3] = 0;
  pqVar9[2] = 0;
  lVar12 = *plVar10;
  lVar25 = plVar10[3];
  lVar24 = plVar10[2];
  pqVar8[5] = plVar10[1];
  pqVar8[4] = lVar12;
  pqVar8[7] = lVar25;
  pqVar8[6] = lVar24;
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10[3] = 0;
  plVar10[2] = 0;
  *(qword **)psVar5->segname = pqVar8;
  return psVar5;
}



/* Entry: 003987dc; end: 0039886b;  */

undefined8 FUN_003987dc(void)

{
  int iVar1;
  
  if ((bRam0000000000afaa50 & 1) == 0) {
    iVar1 = 0xafaa50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afaa10 = 0;
      uRam0000000000afaa18 = 0x3ff2b8;
      pcRam0000000000afaa20 = FUN_0039886c;
      pcRam0000000000afaa28 = FUN_00395710;
      uRam0000000000afaa30 = 0x398894;
      pcRam0000000000afaa38 = "grpc-message";
      uRam0000000000afaa40 = 0xc;
      uRam0000000000afaa48 = 0;
      ___cxa_guard_release(0xafaa50);
    }
  }
  return 0xafaa10;
}



/* Entry: 0039886c; end: 003988b7;  */

undefined1  [16] FUN_0039886c(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 extraout_x8;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = param_2 + 0x4c;
  uVar3 = *param_2;
  *param_2 = uVar3 | 0x8000;
  if ((uVar3 >> 0xf & 1) == 0) {
    param_2[0x4e] = 0;
    param_2[0x4f] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_2[0x52] = 0;
    param_2[0x53] = 0;
    param_2[0x50] = 0;
    param_2[0x51] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_80,param_1);
  uVar8 = uStack_68;
  uVar7 = uStack_70;
  uVar12 = uStack_78;
  plVar10 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar9 = *(long **)puVar1;
  uStack_58 = *(undefined8 *)(param_2 + 0x50);
  uStack_60 = *(undefined8 *)(param_2 + 0x4e);
  uStack_50 = *(undefined8 *)(param_2 + 0x52);
  *(long **)puVar1 = plVar10;
  *(undefined8 *)(param_2 + 0x50) = uVar7;
  *(undefined8 *)(param_2 + 0x4e) = uVar12;
  *(undefined8 *)(param_2 + 0x52) = uVar8;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      lVar13 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plVar9[1])();
    }
  }
  plVar10 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar13 = *plStack_80;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar5) {
        *plStack_80 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar10;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar12 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_d8,plVar10);
  pplVar11 = aplStack_d8;
  FUN_00395a64(pplVar11);
  FUN_0035d0e4(&puStack_f0,pplVar11,uVar12);
  ppuVar6 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar6 = &puStack_f0;
  }
  uVar12 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar6,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar10 = aplStack_d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_d8[0]) {
    do {
      lVar13 = *aplStack_d8[0];
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar5) {
        *aplStack_d8[0] = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar10 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar15._8_8_ = uVar12;
    auVar15._0_8_ = plVar10;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar12 != 0) {
    func_0x0040cf10();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    FUN_0034b418(aplStack_d8);
  }
  __Unwind_Resume();
  uVar2 = plVar10[1] & 0xff;
  lVar13 = (long)plVar10 + 9;
  if (*plVar10 != 0) {
    uVar2 = plVar10[1];
    lVar13 = plVar10[2];
  }
  auVar16._8_8_ = uVar2;
  auVar16._0_8_ = lVar13;
  return auVar16;
}



/* Entry: 003988b8; end: 0039894f;  */

segment_command *
FUN_003988b8(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  segment_command *psVar6;
  segment_command *psVar7;
  long *plVar8;
  segment_command *psVar9;
  qword *pqVar10;
  qword *pqVar11;
  segment_command *psVar12;
  long *plVar13;
  uint uVar14;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  qword qVar22;
  qword qVar23;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  qword qVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  qword qStack_70;
  segment_command *psStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pppppuVar24 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar9 = param_2;
  FUN_003955d0(&uStack_48);
  qVar23 = param_2->filesize;
  FUN_003989b8();
  *param_1 = psVar9;
  *(int *)(param_1 + 5) = (int)qVar23;
  param_1[2] = uStack_40;
  param_1[1] = uStack_48;
  param_1[4] = uStack_30;
  param_1[3] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return psVar9;
  }
  ___stack_chk_fail();
  FUN_0034b418(&uStack_48);
  pcVar25 = FUN_00398950;
  psVar6 = psVar9;
  __Unwind_Resume();
  puVar4 = auStack_50;
  puVar15 = extraout_x8;
  if ((param_3 == 0x19) &&
     (lVar16._0_4_ = psVar6->cmd, lVar16._4_4_ = psVar6->cmdsize, puVar4 = auStack_50,
     ((lVar16 == 0x746e696f70646e65 && *(long *)psVar6->segname == 0x656d2d64616f6c2d) &&
     *(long *)(psVar6->segname + 8) == 0x69622d7363697274) && (char)psVar6->vmaddr == 'n')) {
    pcStack_58 = FUN_00398950;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    psVar7 = param_4;
    psVar12 = param_4;
    qStack_70 = qVar23;
    psStack_68 = psVar9;
    ppppuStack_60 = pppppuVar24;
    FUN_003955d0(&uStack_98);
    qVar23 = param_4->filesize;
    FUN_00398b88();
    *extraout_x8 = psVar7;
    *(int *)(extraout_x8 + 5) = (int)qVar23;
    extraout_x8[2] = uStack_90;
    extraout_x8[1] = uStack_98;
    extraout_x8[4] = uStack_80;
    extraout_x8[3] = uStack_88;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return psVar7;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_98);
    pcVar25 = FUN_00398b2c;
    psVar6 = psVar7;
    __Unwind_Resume();
    puVar4 = auStack_a0;
    param_4 = psVar12;
    puVar15 = extraout_x8_00;
    psVar9 = psVar7;
    pppppuVar24 = &ppppuStack_60;
  }
  if ((param_3 == 0x15) &&
     (lVar30._0_4_ = psVar6->cmd, lVar30._4_4_ = psVar6->cmdsize,
     (lVar30 == 0x7265732d63707267 && *(long *)psVar6->segname == 0x746174732d726576) &&
     *(long *)(psVar6->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar23 = param_4->filesize;
    FUN_00398d48();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar23;
    uVar26 = *(undefined8 *)(puVar4 + -0x48);
    uVar29 = *(undefined8 *)(puVar4 + -0x30);
    uVar27 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar26;
    puVar15[4] = uVar29;
    puVar15[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar25 = FUN_00398d00;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_01;
  }
  if ((param_3 == 0xe) &&
     (lVar31._0_4_ = psVar6->cmd, lVar31._4_4_ = psVar6->cmdsize,
     lVar31 == 0x6172742d63707267 && *(long *)((long)&psVar6->cmdsize + 2) == 0x6e69622d65636172)) {
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar23 = param_4->filesize;
    FUN_00398f08();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar23;
    uVar26 = *(undefined8 *)(puVar4 + -0x48);
    uVar29 = *(undefined8 *)(puVar4 + -0x30);
    uVar27 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar26;
    puVar15[4] = uVar29;
    puVar15[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar25 = FUN_00398ec0;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_02;
  }
  if ((param_3 == 0xd) &&
     (lVar18._0_4_ = psVar6->cmd, lVar18._4_4_ = psVar6->cmdsize,
     lVar18 == 0x6761742d63707267 && *(long *)((long)&psVar6->cmdsize + 1) == 0x6e69622d73676174)) {
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar23 = param_4->filesize;
    FUN_003990dc();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar23;
    uVar26 = *(undefined8 *)(puVar4 + -0x48);
    uVar29 = *(undefined8 *)(puVar4 + -0x30);
    uVar27 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar26;
    puVar15[4] = uVar29;
    puVar15[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar25 = FUN_00399080;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_03;
  }
  if ((param_3 == 0x13) &&
     (lVar1._0_4_ = psVar6->cmd, lVar1._4_4_ = psVar6->cmdsize,
     (lVar1 == 0x635f626c63707267 && *(long *)psVar6->segname == 0x74735f746e65696c) &&
     *(long *)(psVar6->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    psVar9 = param_4;
    FUN_00399244();
    qVar23 = param_4->filesize;
    psVar6 = psVar9;
    FUN_00399290();
    *(int *)(puVar15 + 5) = (int)qVar23;
    *puVar15 = psVar6;
    puVar15[1] = psVar9;
    return psVar6;
  }
  if ((param_3 == 0xb) &&
     (lVar19._0_4_ = psVar6->cmd, lVar19._4_4_ = psVar6->cmdsize,
     lVar19 == 0x2d74736f632d626c && *(long *)((long)&psVar6->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    psVar9 = param_4;
    FUN_00399554(puVar4 + -0x40);
    qVar23 = param_4->filesize;
    FUN_00399608();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar23;
    psVar9 = &segment_command_00000020;
    __Znwm();
    uVar26 = *(undefined8 *)(puVar4 + -0x40);
    psVar9->cmd = (int)uVar26;
    psVar9->cmdsize = (int)((ulong)uVar26 >> 0x20);
    uVar26 = *(undefined8 *)(puVar4 + -0x38);
    *(undefined8 *)(psVar9->segname + 8) = *(undefined8 *)(puVar4 + -0x30);
    *(undefined8 *)psVar9->segname = uVar26;
    psVar9->vmaddr = *(qword *)(puVar4 + -0x28);
    puVar15[1] = psVar9;
    return psVar9;
  }
  if ((param_3 == 8) &&
     (lVar21._0_4_ = psVar6->cmd, lVar21._4_4_ = psVar6->cmdsize, lVar21 == 0x6e656b6f742d626c)) {
    *(qword *)(puVar4 + -0x20) = qVar23;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(code **)(puVar4 + -8) = pcVar25;
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar23 = param_4->filesize;
    FUN_00399b24();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar23;
    uVar26 = *(undefined8 *)(puVar4 + -0x48);
    uVar29 = *(undefined8 *)(puVar4 + -0x30);
    uVar27 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar26;
    puVar15[4] = uVar29;
    puVar15[3] = uVar27;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    __Unwind_Resume(psVar9);
    *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar5 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar13 = (long *)(puVar4 + -0x70);
  *(qword *)(puVar4 + -0x20) = qVar23;
  *(segment_command **)(puVar4 + -0x18) = psVar9;
  *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
  *(code **)(puVar4 + -8) = pcVar25;
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(puVar4 + -0x48,psVar6,param_3);
  lVar16 = *(long *)param_4;
  qVar23 = param_4->vmaddr;
  uVar26 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)(puVar4 + -0x70) = lVar16;
  *(qword *)(puVar4 + -0x58) = qVar23;
  *(undefined8 *)(puVar4 + -0x60) = uVar26;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar11 = (qword *)(puVar4 + -0x48);
  FUN_00399d0c(puVar15);
  plVar8 = *(long **)(puVar4 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar16 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  psVar9 = *(segment_command **)(puVar4 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar9) {
    do {
      lVar16 = *(long *)psVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar9,0x10);
      if (bVar3) {
        *(long *)psVar9 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)psVar9->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
    return psVar9;
  }
  ___stack_chk_fail();
  if ((int)pqVar11 != 0) {
    func_0x0040cf10();
    FUN_0034b418(puVar4 + -0x70);
    FUN_0034b418(puVar4 + -0x48);
  }
  psVar6 = psVar9;
  __Unwind_Resume();
  *(undefined8 *)(puVar4 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x98) = unaff_x21;
  *(segment_command **)(puVar4 + -0x90) = param_4;
  *(segment_command **)(puVar4 + -0x88) = psVar9;
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x78) = FUN_00399d0c;
  qVar23 = *pqVar11;
  if (qVar23 == 0) {
    qVar28 = (long)pqVar11 + 9;
    qVar22 = (qword)(byte)pqVar11[1];
  }
  else {
    qVar22 = pqVar11[1];
    qVar28 = pqVar11[2];
  }
  if (qVar22 < 4) {
    uVar20 = 0;
  }
  else {
    uVar20 = (ulong)(*(int *)(qVar22 + qVar28 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar6 = &UNK_009dee20 + uVar20 * 0x40;
  if (qVar23 == 0) {
    uVar14 = (uint)(byte)pqVar11[1];
  }
  else {
    uVar14 = (uint)pqVar11[1];
  }
  if (*plVar13 == 0) {
    uVar17 = (uint)*(byte *)(plVar13 + 1);
  }
  else {
    uVar17 = (uint)plVar13[1];
  }
  *(uint *)&psVar6->fileoff = uVar17 + uVar14 + 0x20;
  pqVar10 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar23 = *pqVar11;
  qVar22 = pqVar11[3];
  qVar28 = pqVar11[2];
  pqVar10[1] = pqVar11[1];
  *pqVar10 = qVar23;
  pqVar10[3] = qVar22;
  pqVar10[2] = qVar28;
  pqVar11[1] = 0;
  *pqVar11 = 0;
  pqVar11[3] = 0;
  pqVar11[2] = 0;
  lVar16 = *plVar13;
  lVar31 = plVar13[3];
  lVar30 = plVar13[2];
  pqVar10[5] = plVar13[1];
  pqVar10[4] = lVar16;
  pqVar10[7] = lVar31;
  pqVar10[6] = lVar30;
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar13[3] = 0;
  plVar13[2] = 0;
  *(qword **)psVar6->segname = pqVar10;
  return psVar6;
}



/* Entry: 00398950; end: 003989b7;  */

segment_command *
FUN_00398950(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  segment_command *psVar5;
  long *plVar6;
  segment_command *psVar7;
  qword *pqVar8;
  qword *pqVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long lVar12;
  qword qVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  qword qVar19;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar20;
  undefined8 uVar21;
  qword qVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_3 == 0x19) &&
     (lVar12._0_4_ = param_2->cmd, lVar12._4_4_ = param_2->cmdsize,
     ((lVar12 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = uStack_30;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar7;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0x15) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     (lVar24 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar20;
    param_1[4] = uVar23;
    param_1[3] = uVar21;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 0xe) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize,
     lVar25 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar20;
    param_1[4] = uVar23;
    param_1[3] = uVar21;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0xd) &&
     (lVar15._0_4_ = param_2->cmd, lVar15._4_4_ = param_2->cmdsize,
     lVar15 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar20;
    param_1[4] = uVar23;
    param_1[3] = uVar21;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x13) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     (lVar1 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar7 = param_4;
    FUN_00399244();
    qVar13 = param_4->filesize;
    psVar5 = psVar7;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar13;
    *param_1 = psVar5;
    param_1[1] = psVar7;
    return psVar5;
  }
  if ((param_3 == 0xb) &&
     (lVar16._0_4_ = param_2->cmd, lVar16._4_4_ = param_2->cmdsize,
     lVar16 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar7 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar13 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar7;
    *(int *)(param_1 + 5) = (int)qVar13;
    psVar7 = &segment_command_00000020;
    __Znwm();
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar7->cmd = (int)uVar20;
    psVar7->cmdsize = (int)((ulong)uVar20 >> 0x20);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar7->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar7->segname = uVar20;
    psVar7->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar7;
    return psVar7;
  }
  if ((param_3 == 8) &&
     (lVar18._0_4_ = param_2->cmd, lVar18._4_4_ = param_2->cmdsize, lVar18 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar13 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar7;
    *(int *)(param_1 + 5) = (int)qVar13;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar20;
    param_1[4] = uVar23;
    param_1[3] = uVar21;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar7;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar7);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar4 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar10 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar12 = *(long *)param_4;
  qVar13 = param_4->vmaddr;
  uVar20 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar12;
  *(qword *)((long)register0x00000008 + -0x58) = qVar13;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar20;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar9 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar6 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar6[1])();
    }
  }
  psVar7 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar7) {
    do {
      lVar12 = *(long *)psVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar7,0x10);
      if (bVar3) {
        *(long *)psVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)psVar7->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar7;
  }
  ___stack_chk_fail();
  if ((int)pqVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar5 = psVar7;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar13 = *pqVar9;
  if (qVar13 == 0) {
    qVar22 = (long)pqVar9 + 9;
    qVar19 = (qword)(byte)pqVar9[1];
  }
  else {
    qVar19 = pqVar9[1];
    qVar22 = pqVar9[2];
  }
  if (qVar19 < 4) {
    uVar17 = 0;
  }
  else {
    uVar17 = (ulong)(*(int *)(qVar19 + qVar22 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar5 = &UNK_009dee20 + uVar17 * 0x40;
  if (qVar13 == 0) {
    uVar11 = (uint)(byte)pqVar9[1];
  }
  else {
    uVar11 = (uint)pqVar9[1];
  }
  if (*plVar10 == 0) {
    uVar14 = (uint)*(byte *)(plVar10 + 1);
  }
  else {
    uVar14 = (uint)plVar10[1];
  }
  *(uint *)&psVar5->fileoff = uVar14 + uVar11 + 0x20;
  pqVar8 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar13 = *pqVar9;
  qVar19 = pqVar9[3];
  qVar22 = pqVar9[2];
  pqVar8[1] = pqVar9[1];
  *pqVar8 = qVar13;
  pqVar8[3] = qVar19;
  pqVar8[2] = qVar22;
  pqVar9[1] = 0;
  *pqVar9 = 0;
  pqVar9[3] = 0;
  pqVar9[2] = 0;
  lVar12 = *plVar10;
  lVar25 = plVar10[3];
  lVar24 = plVar10[2];
  pqVar8[5] = plVar10[1];
  pqVar8[4] = lVar12;
  pqVar8[7] = lVar25;
  pqVar8[6] = lVar24;
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10[3] = 0;
  plVar10[2] = 0;
  *(qword **)psVar5->segname = pqVar8;
  return psVar5;
}



/* Entry: 003989b8; end: 00398a47;  */

undefined8 FUN_003989b8(void)

{
  int iVar1;
  
  if ((bRam0000000000afaa98 & 1) == 0) {
    iVar1 = 0xafaa98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afaa58 = 0;
      uRam0000000000afaa60 = 0x3ff2b8;
      pcRam0000000000afaa68 = FUN_00398a48;
      pcRam0000000000afaa70 = FUN_00395710;
      uRam0000000000afaa78 = 0x398a70;
      pcRam0000000000afaa80 = "host";
      uRam0000000000afaa88 = 4;
      uRam0000000000afaa90 = 0;
      ___cxa_guard_release(0xafaa98);
    }
  }
  return 0xafaa58;
}



/* Entry: 00398a48; end: 00398a93;  */

undefined1  [16] FUN_00398a48(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 extraout_x8;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = param_2 + 0x44;
  uVar3 = *param_2;
  *param_2 = uVar3 | 0x10000;
  if ((uVar3 >> 0x10 & 1) == 0) {
    param_2[0x46] = 0;
    param_2[0x47] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_2[0x4a] = 0;
    param_2[0x4b] = 0;
    param_2[0x48] = 0;
    param_2[0x49] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_80,param_1);
  uVar8 = uStack_68;
  uVar7 = uStack_70;
  uVar12 = uStack_78;
  plVar10 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar9 = *(long **)puVar1;
  uStack_58 = *(undefined8 *)(param_2 + 0x48);
  uStack_60 = *(undefined8 *)(param_2 + 0x46);
  uStack_50 = *(undefined8 *)(param_2 + 0x4a);
  *(long **)puVar1 = plVar10;
  *(undefined8 *)(param_2 + 0x48) = uVar7;
  *(undefined8 *)(param_2 + 0x46) = uVar12;
  *(undefined8 *)(param_2 + 0x4a) = uVar8;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      lVar13 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plVar9[1])();
    }
  }
  plVar10 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar13 = *plStack_80;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar5) {
        *plStack_80 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar10;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar12 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_d8,plVar10);
  pplVar11 = aplStack_d8;
  FUN_00395a64(pplVar11);
  FUN_0035d0e4(&puStack_f0,pplVar11,uVar12);
  ppuVar6 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar6 = &puStack_f0;
  }
  uVar12 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar6,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar10 = aplStack_d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_d8[0]) {
    do {
      lVar13 = *aplStack_d8[0];
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar5) {
        *aplStack_d8[0] = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar10 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar15._8_8_ = uVar12;
    auVar15._0_8_ = plVar10;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar12 != 0) {
    func_0x0040cf10();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    FUN_0034b418(aplStack_d8);
  }
  __Unwind_Resume();
  uVar2 = plVar10[1] & 0xff;
  lVar13 = (long)plVar10 + 9;
  if (*plVar10 != 0) {
    uVar2 = plVar10[1];
    lVar13 = plVar10[2];
  }
  auVar16._8_8_ = uVar2;
  auVar16._0_8_ = lVar13;
  return auVar16;
}



/* Entry: 00398a94; end: 00398b2b;  */

segment_command *
FUN_00398a94(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  segment_command *psVar6;
  segment_command *psVar7;
  long *plVar8;
  segment_command *psVar9;
  qword *pqVar10;
  qword *pqVar11;
  segment_command *psVar12;
  long *plVar13;
  uint uVar14;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  qword qVar21;
  qword qVar22;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  qword qVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  qword qStack_70;
  segment_command *psStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pppppuVar23 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar9 = param_2;
  FUN_003955d0(&uStack_48);
  qVar22 = param_2->filesize;
  FUN_00398b88();
  *param_1 = psVar9;
  *(int *)(param_1 + 5) = (int)qVar22;
  param_1[2] = uStack_40;
  param_1[1] = uStack_48;
  param_1[4] = uStack_30;
  param_1[3] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return psVar9;
  }
  ___stack_chk_fail();
  FUN_0034b418(&uStack_48);
  pcVar24 = FUN_00398b2c;
  psVar6 = psVar9;
  __Unwind_Resume();
  puVar4 = auStack_50;
  puVar15 = extraout_x8;
  if ((param_3 == 0x15) &&
     (lVar16._0_4_ = psVar6->cmd, lVar16._4_4_ = psVar6->cmdsize, puVar4 = auStack_50,
     (lVar16 == 0x7265732d63707267 && *(long *)psVar6->segname == 0x746174732d726576) &&
     *(long *)(psVar6->segname + 5) == 0x6e69622d73746174)) {
    pcStack_58 = FUN_00398b2c;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    psVar7 = param_4;
    psVar12 = param_4;
    qStack_70 = qVar22;
    psStack_68 = psVar9;
    ppppuStack_60 = pppppuVar23;
    FUN_003955d0(&uStack_98);
    qVar22 = param_4->filesize;
    FUN_00398d48();
    *extraout_x8 = psVar7;
    *(int *)(extraout_x8 + 5) = (int)qVar22;
    extraout_x8[2] = uStack_90;
    extraout_x8[1] = uStack_98;
    extraout_x8[4] = uStack_80;
    extraout_x8[3] = uStack_88;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return psVar7;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_98);
    pcVar24 = FUN_00398d00;
    psVar6 = psVar7;
    __Unwind_Resume();
    puVar4 = auStack_a0;
    param_4 = psVar12;
    puVar15 = extraout_x8_00;
    psVar9 = psVar7;
    pppppuVar23 = &ppppuStack_60;
  }
  if ((param_3 == 0xe) &&
     (lVar29._0_4_ = psVar6->cmd, lVar29._4_4_ = psVar6->cmdsize,
     lVar29 == 0x6172742d63707267 && *(long *)((long)&psVar6->cmdsize + 2) == 0x6e69622d65636172)) {
    *(qword *)(puVar4 + -0x20) = qVar22;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar23;
    *(code **)(puVar4 + -8) = pcVar24;
    pppppuVar23 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar22 = param_4->filesize;
    FUN_00398f08();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar22;
    uVar25 = *(undefined8 *)(puVar4 + -0x48);
    uVar28 = *(undefined8 *)(puVar4 + -0x30);
    uVar26 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar25;
    puVar15[4] = uVar28;
    puVar15[3] = uVar26;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar24 = FUN_00398ec0;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_01;
  }
  if ((param_3 == 0xd) &&
     (lVar30._0_4_ = psVar6->cmd, lVar30._4_4_ = psVar6->cmdsize,
     lVar30 == 0x6761742d63707267 && *(long *)((long)&psVar6->cmdsize + 1) == 0x6e69622d73676174)) {
    *(qword *)(puVar4 + -0x20) = qVar22;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar23;
    *(code **)(puVar4 + -8) = pcVar24;
    pppppuVar23 = (undefined8 *****)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    psVar7 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar22 = param_4->filesize;
    FUN_003990dc();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar22;
    uVar25 = *(undefined8 *)(puVar4 + -0x48);
    uVar28 = *(undefined8 *)(puVar4 + -0x30);
    uVar26 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar25;
    puVar15[4] = uVar28;
    puVar15[3] = uVar26;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    pcVar24 = FUN_00399080;
    psVar6 = psVar9;
    __Unwind_Resume();
    puVar4 = puVar4 + -0x50;
    param_4 = psVar7;
    puVar15 = extraout_x8_02;
  }
  if ((param_3 == 0x13) &&
     (lVar1._0_4_ = psVar6->cmd, lVar1._4_4_ = psVar6->cmdsize,
     (lVar1 == 0x635f626c63707267 && *(long *)psVar6->segname == 0x74735f746e65696c) &&
     *(long *)(psVar6->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(qword *)(puVar4 + -0x20) = qVar22;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar23;
    *(code **)(puVar4 + -8) = pcVar24;
    psVar9 = param_4;
    FUN_00399244();
    qVar22 = param_4->filesize;
    psVar6 = psVar9;
    FUN_00399290();
    *(int *)(puVar15 + 5) = (int)qVar22;
    *puVar15 = psVar6;
    puVar15[1] = psVar9;
    return psVar6;
  }
  if ((param_3 == 0xb) &&
     (lVar18._0_4_ = psVar6->cmd, lVar18._4_4_ = psVar6->cmdsize,
     lVar18 == 0x2d74736f632d626c && *(long *)((long)&psVar6->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)(puVar4 + -0x20) = qVar22;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar23;
    *(code **)(puVar4 + -8) = pcVar24;
    psVar9 = param_4;
    FUN_00399554(puVar4 + -0x40);
    qVar22 = param_4->filesize;
    FUN_00399608();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar22;
    psVar9 = &segment_command_00000020;
    __Znwm();
    uVar25 = *(undefined8 *)(puVar4 + -0x40);
    psVar9->cmd = (int)uVar25;
    psVar9->cmdsize = (int)((ulong)uVar25 >> 0x20);
    uVar25 = *(undefined8 *)(puVar4 + -0x38);
    *(undefined8 *)(psVar9->segname + 8) = *(undefined8 *)(puVar4 + -0x30);
    *(undefined8 *)psVar9->segname = uVar25;
    psVar9->vmaddr = *(qword *)(puVar4 + -0x28);
    puVar15[1] = psVar9;
    return psVar9;
  }
  if ((param_3 == 8) &&
     (lVar20._0_4_ = psVar6->cmd, lVar20._4_4_ = psVar6->cmdsize, lVar20 == 0x6e656b6f742d626c)) {
    *(qword *)(puVar4 + -0x20) = qVar22;
    *(segment_command **)(puVar4 + -0x18) = psVar9;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar23;
    *(code **)(puVar4 + -8) = pcVar24;
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar9 = param_4;
    FUN_003955d0(puVar4 + -0x48);
    qVar22 = param_4->filesize;
    FUN_00399b24();
    *puVar15 = psVar9;
    *(int *)(puVar15 + 5) = (int)qVar22;
    uVar25 = *(undefined8 *)(puVar4 + -0x48);
    uVar28 = *(undefined8 *)(puVar4 + -0x30);
    uVar26 = *(undefined8 *)(puVar4 + -0x38);
    puVar15[2] = *(undefined8 *)(puVar4 + -0x40);
    puVar15[1] = uVar25;
    puVar15[4] = uVar28;
    puVar15[3] = uVar26;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
      return psVar9;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar4 + -0x48);
    __Unwind_Resume(psVar9);
    *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar5 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar13 = (long *)(puVar4 + -0x70);
  *(qword *)(puVar4 + -0x20) = qVar22;
  *(segment_command **)(puVar4 + -0x18) = psVar9;
  *(undefined8 ******)(puVar4 + -0x10) = pppppuVar23;
  *(code **)(puVar4 + -8) = pcVar24;
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(puVar4 + -0x48,psVar6,param_3);
  lVar16 = *(long *)param_4;
  qVar22 = param_4->vmaddr;
  uVar25 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)(puVar4 + -0x70) = lVar16;
  *(qword *)(puVar4 + -0x58) = qVar22;
  *(undefined8 *)(puVar4 + -0x60) = uVar25;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar11 = (qword *)(puVar4 + -0x48);
  FUN_00399d0c(puVar15);
  plVar8 = *(long **)(puVar4 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar16 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  psVar9 = *(segment_command **)(puVar4 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar9) {
    do {
      lVar16 = *(long *)psVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar9,0x10);
      if (bVar3) {
        *(long *)psVar9 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)psVar9->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar4 + -0x28)) {
    return psVar9;
  }
  ___stack_chk_fail();
  if ((int)pqVar11 != 0) {
    func_0x0040cf10();
    FUN_0034b418(puVar4 + -0x70);
    FUN_0034b418(puVar4 + -0x48);
  }
  psVar6 = psVar9;
  __Unwind_Resume();
  *(undefined8 *)(puVar4 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x98) = unaff_x21;
  *(segment_command **)(puVar4 + -0x90) = param_4;
  *(segment_command **)(puVar4 + -0x88) = psVar9;
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x78) = FUN_00399d0c;
  qVar22 = *pqVar11;
  if (qVar22 == 0) {
    qVar27 = (long)pqVar11 + 9;
    qVar21 = (qword)(byte)pqVar11[1];
  }
  else {
    qVar21 = pqVar11[1];
    qVar27 = pqVar11[2];
  }
  if (qVar21 < 4) {
    uVar19 = 0;
  }
  else {
    uVar19 = (ulong)(*(int *)(qVar21 + qVar27 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar6 = &UNK_009dee20 + uVar19 * 0x40;
  if (qVar22 == 0) {
    uVar14 = (uint)(byte)pqVar11[1];
  }
  else {
    uVar14 = (uint)pqVar11[1];
  }
  if (*plVar13 == 0) {
    uVar17 = (uint)*(byte *)(plVar13 + 1);
  }
  else {
    uVar17 = (uint)plVar13[1];
  }
  *(uint *)&psVar6->fileoff = uVar17 + uVar14 + 0x20;
  pqVar10 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar22 = *pqVar11;
  qVar21 = pqVar11[3];
  qVar27 = pqVar11[2];
  pqVar10[1] = pqVar11[1];
  *pqVar10 = qVar22;
  pqVar10[3] = qVar21;
  pqVar10[2] = qVar27;
  pqVar11[1] = 0;
  *pqVar11 = 0;
  pqVar11[3] = 0;
  pqVar11[2] = 0;
  lVar16 = *plVar13;
  lVar30 = plVar13[3];
  lVar29 = plVar13[2];
  pqVar10[5] = plVar13[1];
  pqVar10[4] = lVar16;
  pqVar10[7] = lVar30;
  pqVar10[6] = lVar29;
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar13[3] = 0;
  plVar13[2] = 0;
  *(qword **)psVar6->segname = pqVar10;
  return psVar6;
}



/* Entry: 00398b2c; end: 00398b87;  */

segment_command *
FUN_00398b2c(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  segment_command *psVar5;
  long *plVar6;
  segment_command *psVar7;
  qword *pqVar8;
  qword *pqVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar12;
  qword qVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  qword qVar18;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  qword qVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_3 == 0x15) &&
     (lVar12._0_4_ = param_2->cmd, lVar12._4_4_ = param_2->cmdsize,
     (lVar12 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = uStack_30;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar7;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xe) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     lVar23 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar19;
    param_1[4] = uVar22;
    param_1[3] = uVar20;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 0xd) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     lVar24 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar19;
    param_1[4] = uVar22;
    param_1[3] = uVar20;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar7;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x13) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     (lVar1 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar7 = param_4;
    FUN_00399244();
    qVar13 = param_4->filesize;
    psVar5 = psVar7;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar13;
    *param_1 = psVar5;
    param_1[1] = psVar7;
    return psVar5;
  }
  if ((param_3 == 0xb) &&
     (lVar15._0_4_ = param_2->cmd, lVar15._4_4_ = param_2->cmdsize,
     lVar15 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar7 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar13 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar7;
    *(int *)(param_1 + 5) = (int)qVar13;
    psVar7 = &segment_command_00000020;
    __Znwm();
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar7->cmd = (int)uVar19;
    psVar7->cmdsize = (int)((ulong)uVar19 >> 0x20);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar7->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar7->segname = uVar19;
    psVar7->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar7;
    return psVar7;
  }
  if ((param_3 == 8) &&
     (lVar17._0_4_ = param_2->cmd, lVar17._4_4_ = param_2->cmdsize, lVar17 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar7 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar13 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar7;
    *(int *)(param_1 + 5) = (int)qVar13;
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar19;
    param_1[4] = uVar22;
    param_1[3] = uVar20;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar7;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar7);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar4 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar10 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar12 = *(long *)param_4;
  qVar13 = param_4->vmaddr;
  uVar19 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar12;
  *(qword *)((long)register0x00000008 + -0x58) = qVar13;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar19;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar9 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar6 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar6[1])();
    }
  }
  psVar7 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar7) {
    do {
      lVar12 = *(long *)psVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar7,0x10);
      if (bVar3) {
        *(long *)psVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)psVar7->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar7;
  }
  ___stack_chk_fail();
  if ((int)pqVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar5 = psVar7;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar13 = *pqVar9;
  if (qVar13 == 0) {
    qVar21 = (long)pqVar9 + 9;
    qVar18 = (qword)(byte)pqVar9[1];
  }
  else {
    qVar18 = pqVar9[1];
    qVar21 = pqVar9[2];
  }
  if (qVar18 < 4) {
    uVar16 = 0;
  }
  else {
    uVar16 = (ulong)(*(int *)(qVar18 + qVar21 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar5 = &UNK_009dee20 + uVar16 * 0x40;
  if (qVar13 == 0) {
    uVar11 = (uint)(byte)pqVar9[1];
  }
  else {
    uVar11 = (uint)pqVar9[1];
  }
  if (*plVar10 == 0) {
    uVar14 = (uint)*(byte *)(plVar10 + 1);
  }
  else {
    uVar14 = (uint)plVar10[1];
  }
  *(uint *)&psVar5->fileoff = uVar14 + uVar11 + 0x20;
  pqVar8 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar13 = *pqVar9;
  qVar18 = pqVar9[3];
  qVar21 = pqVar9[2];
  pqVar8[1] = pqVar9[1];
  *pqVar8 = qVar13;
  pqVar8[3] = qVar18;
  pqVar8[2] = qVar21;
  pqVar9[1] = 0;
  *pqVar9 = 0;
  pqVar9[3] = 0;
  pqVar9[2] = 0;
  lVar12 = *plVar10;
  lVar24 = plVar10[3];
  lVar23 = plVar10[2];
  pqVar8[5] = plVar10[1];
  pqVar8[4] = lVar12;
  pqVar8[7] = lVar24;
  pqVar8[6] = lVar23;
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10[3] = 0;
  plVar10[2] = 0;
  *(qword **)psVar5->segname = pqVar8;
  return psVar5;
}



/* Entry: 00398b88; end: 00398c1b;  */

undefined8 FUN_00398b88(void)

{
  int iVar1;
  
  if ((bRam0000000000afaae0 & 1) == 0) {
    iVar1 = 0xafaae0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afaaa0 = 1;
      uRam0000000000afaaa8 = 0x3ff2b8;
      pcRam0000000000afaab0 = FUN_00398c1c;
      pcRam0000000000afaab8 = FUN_00395710;
      uRam0000000000afaac0 = 0x398c44;
      pcRam0000000000afaac8 = "endpoint-load-metrics-bin";
      uRam0000000000afaad0 = 0x19;
      uRam0000000000afaad8 = 0;
      ___cxa_guard_release(0xafaae0);
    }
  }
  return 0xafaaa0;
}



/* Entry: 00398c1c; end: 00398c67;  */

undefined1  [16] FUN_00398c1c(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = *param_2;
  puVar13 = param_2 + 0x3c;
  *param_2 = uVar2 | 0x20000;
  if ((uVar2 >> 0x11 & 1) == 0) {
    param_2[0x3e] = 0;
    param_2[0x3f] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    param_2[0x42] = 0;
    param_2[0x43] = 0;
    param_2[0x40] = 0;
    param_2[0x41] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_80,param_1);
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar11 = uStack_78;
  plVar9 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar8 = *(long **)puVar13;
  uStack_58 = *(undefined8 *)(param_2 + 0x40);
  uStack_60 = *(undefined8 *)(param_2 + 0x3e);
  uStack_50 = *(undefined8 *)(param_2 + 0x42);
  *(long **)puVar13 = plVar9;
  *(undefined8 *)(param_2 + 0x40) = uVar6;
  *(undefined8 *)(param_2 + 0x3e) = uVar11;
  *(undefined8 *)(param_2 + 0x42) = uVar7;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  plVar9 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar12 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar11 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_d8,plVar9);
  pplVar10 = aplStack_d8;
  FUN_00395a64(pplVar10);
  FUN_0035d0e4(&puStack_f0,pplVar10,uVar11);
  ppuVar5 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar5 = &puStack_f0;
  }
  uVar11 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar5,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar9 = aplStack_d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_d8[0]) {
    do {
      lVar12 = *aplStack_d8[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar4) {
        *aplStack_d8[0] = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar9 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = plVar9;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    func_0x0040cf10();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    FUN_0034b418(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar9[1] & 0xff;
  lVar12 = (long)plVar9 + 9;
  if (*plVar9 != 0) {
    uVar1 = plVar9[1];
    lVar12 = plVar9[2];
  }
  auVar16._8_8_ = uVar1;
  auVar16._0_8_ = lVar12;
  return auVar16;
}



/* Entry: 00398c68; end: 00398cff;  */

segment_command *
FUN_00398c68(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  segment_command *psVar5;
  segment_command *psVar6;
  long *plVar7;
  segment_command *psVar8;
  qword *pqVar9;
  qword *pqVar10;
  segment_command *psVar11;
  long *plVar12;
  uint uVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  qword qVar20;
  qword qVar21;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  qword qVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  qword qStack_70;
  segment_command *psStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pppppuVar22 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar8 = param_2;
  FUN_003955d0(&uStack_48);
  qVar21 = param_2->filesize;
  FUN_00398d48();
  *param_1 = psVar8;
  *(int *)(param_1 + 5) = (int)qVar21;
  param_1[2] = uStack_40;
  param_1[1] = uStack_48;
  param_1[4] = uStack_30;
  param_1[3] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return psVar8;
  }
  ___stack_chk_fail();
  FUN_0034b418(&uStack_48);
  pcVar23 = FUN_00398d00;
  psVar5 = psVar8;
  __Unwind_Resume();
  puVar3 = auStack_50;
  puVar14 = extraout_x8;
  if ((param_3 == 0xe) &&
     (lVar15._0_4_ = psVar5->cmd, lVar15._4_4_ = psVar5->cmdsize, puVar3 = auStack_50,
     lVar15 == 0x6172742d63707267 && *(long *)((long)&psVar5->cmdsize + 2) == 0x6e69622d65636172)) {
    pcStack_58 = FUN_00398d00;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    psVar6 = param_4;
    psVar11 = param_4;
    qStack_70 = qVar21;
    psStack_68 = psVar8;
    ppppuStack_60 = pppppuVar22;
    FUN_003955d0(&uStack_98);
    qVar21 = param_4->filesize;
    FUN_00398f08();
    *extraout_x8 = psVar6;
    *(int *)(extraout_x8 + 5) = (int)qVar21;
    extraout_x8[2] = uStack_90;
    extraout_x8[1] = uStack_98;
    extraout_x8[4] = uStack_80;
    extraout_x8[3] = uStack_88;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return psVar6;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_98);
    pcVar23 = FUN_00398ec0;
    psVar5 = psVar6;
    __Unwind_Resume();
    puVar3 = auStack_a0;
    param_4 = psVar11;
    puVar14 = extraout_x8_00;
    psVar8 = psVar6;
    pppppuVar22 = &ppppuStack_60;
  }
  if ((param_3 == 0xd) &&
     (lVar28._0_4_ = psVar5->cmd, lVar28._4_4_ = psVar5->cmdsize,
     lVar28 == 0x6761742d63707267 && *(long *)((long)&psVar5->cmdsize + 1) == 0x6e69622d73676174)) {
    *(qword *)(puVar3 + -0x20) = qVar21;
    *(segment_command **)(puVar3 + -0x18) = psVar8;
    *(undefined8 ******)(puVar3 + -0x10) = pppppuVar22;
    *(code **)(puVar3 + -8) = pcVar23;
    pppppuVar22 = (undefined8 *****)(puVar3 + -0x10);
    *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar8 = param_4;
    psVar6 = param_4;
    FUN_003955d0(puVar3 + -0x48);
    qVar21 = param_4->filesize;
    FUN_003990dc();
    *puVar14 = psVar8;
    *(int *)(puVar14 + 5) = (int)qVar21;
    uVar24 = *(undefined8 *)(puVar3 + -0x48);
    uVar27 = *(undefined8 *)(puVar3 + -0x30);
    uVar25 = *(undefined8 *)(puVar3 + -0x38);
    puVar14[2] = *(undefined8 *)(puVar3 + -0x40);
    puVar14[1] = uVar24;
    puVar14[4] = uVar27;
    puVar14[3] = uVar25;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar3 + -0x28)) {
      return psVar8;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar3 + -0x48);
    pcVar23 = FUN_00399080;
    psVar5 = psVar8;
    __Unwind_Resume();
    puVar3 = puVar3 + -0x50;
    param_4 = psVar6;
    puVar14 = extraout_x8_01;
  }
  if ((param_3 == 0x13) &&
     (lVar29._0_4_ = psVar5->cmd, lVar29._4_4_ = psVar5->cmdsize,
     (lVar29 == 0x635f626c63707267 && *(long *)psVar5->segname == 0x74735f746e65696c) &&
     *(long *)(psVar5->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(qword *)(puVar3 + -0x20) = qVar21;
    *(segment_command **)(puVar3 + -0x18) = psVar8;
    *(undefined8 ******)(puVar3 + -0x10) = pppppuVar22;
    *(code **)(puVar3 + -8) = pcVar23;
    psVar8 = param_4;
    FUN_00399244();
    qVar21 = param_4->filesize;
    psVar5 = psVar8;
    FUN_00399290();
    *(int *)(puVar14 + 5) = (int)qVar21;
    *puVar14 = psVar5;
    puVar14[1] = psVar8;
    return psVar5;
  }
  if ((param_3 == 0xb) &&
     (lVar17._0_4_ = psVar5->cmd, lVar17._4_4_ = psVar5->cmdsize,
     lVar17 == 0x2d74736f632d626c && *(long *)((long)&psVar5->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)(puVar3 + -0x20) = qVar21;
    *(segment_command **)(puVar3 + -0x18) = psVar8;
    *(undefined8 ******)(puVar3 + -0x10) = pppppuVar22;
    *(code **)(puVar3 + -8) = pcVar23;
    psVar8 = param_4;
    FUN_00399554(puVar3 + -0x40);
    qVar21 = param_4->filesize;
    FUN_00399608();
    *puVar14 = psVar8;
    *(int *)(puVar14 + 5) = (int)qVar21;
    psVar8 = &segment_command_00000020;
    __Znwm();
    uVar24 = *(undefined8 *)(puVar3 + -0x40);
    psVar8->cmd = (int)uVar24;
    psVar8->cmdsize = (int)((ulong)uVar24 >> 0x20);
    uVar24 = *(undefined8 *)(puVar3 + -0x38);
    *(undefined8 *)(psVar8->segname + 8) = *(undefined8 *)(puVar3 + -0x30);
    *(undefined8 *)psVar8->segname = uVar24;
    psVar8->vmaddr = *(qword *)(puVar3 + -0x28);
    puVar14[1] = psVar8;
    return psVar8;
  }
  if ((param_3 == 8) &&
     (lVar19._0_4_ = psVar5->cmd, lVar19._4_4_ = psVar5->cmdsize, lVar19 == 0x6e656b6f742d626c)) {
    *(qword *)(puVar3 + -0x20) = qVar21;
    *(segment_command **)(puVar3 + -0x18) = psVar8;
    *(undefined8 ******)(puVar3 + -0x10) = pppppuVar22;
    *(code **)(puVar3 + -8) = pcVar23;
    *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar8 = param_4;
    FUN_003955d0(puVar3 + -0x48);
    qVar21 = param_4->filesize;
    FUN_00399b24();
    *puVar14 = psVar8;
    *(int *)(puVar14 + 5) = (int)qVar21;
    uVar24 = *(undefined8 *)(puVar3 + -0x48);
    uVar27 = *(undefined8 *)(puVar3 + -0x30);
    uVar25 = *(undefined8 *)(puVar3 + -0x38);
    puVar14[2] = *(undefined8 *)(puVar3 + -0x40);
    puVar14[1] = uVar24;
    puVar14[4] = uVar27;
    puVar14[3] = uVar25;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar3 + -0x28)) {
      return psVar8;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar3 + -0x48);
    __Unwind_Resume(psVar8);
    *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar4 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar12 = (long *)(puVar3 + -0x70);
  *(qword *)(puVar3 + -0x20) = qVar21;
  *(segment_command **)(puVar3 + -0x18) = psVar8;
  *(undefined8 ******)(puVar3 + -0x10) = pppppuVar22;
  *(code **)(puVar3 + -8) = pcVar23;
  *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(puVar3 + -0x48,psVar5,param_3);
  lVar15 = *(long *)param_4;
  qVar21 = param_4->vmaddr;
  uVar24 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)(puVar3 + -0x70) = lVar15;
  *(qword *)(puVar3 + -0x58) = qVar21;
  *(undefined8 *)(puVar3 + -0x60) = uVar24;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar10 = (qword *)(puVar3 + -0x48);
  FUN_00399d0c(puVar14);
  plVar7 = *(long **)(puVar3 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
    do {
      lVar15 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plVar7[1])();
    }
  }
  psVar8 = *(segment_command **)(puVar3 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar8) {
    do {
      lVar15 = *(long *)psVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psVar8,0x10);
      if (bVar2) {
        *(long *)psVar8 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)psVar8->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar3 + -0x28)) {
    return psVar8;
  }
  ___stack_chk_fail();
  if ((int)pqVar10 != 0) {
    func_0x0040cf10();
    FUN_0034b418(puVar3 + -0x70);
    FUN_0034b418(puVar3 + -0x48);
  }
  psVar5 = psVar8;
  __Unwind_Resume();
  *(undefined8 *)(puVar3 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x98) = unaff_x21;
  *(segment_command **)(puVar3 + -0x90) = param_4;
  *(segment_command **)(puVar3 + -0x88) = psVar8;
  *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x78) = FUN_00399d0c;
  qVar21 = *pqVar10;
  if (qVar21 == 0) {
    qVar26 = (long)pqVar10 + 9;
    qVar20 = (qword)(byte)pqVar10[1];
  }
  else {
    qVar20 = pqVar10[1];
    qVar26 = pqVar10[2];
  }
  if (qVar20 < 4) {
    uVar18 = 0;
  }
  else {
    uVar18 = (ulong)(*(int *)(qVar20 + qVar26 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar5 = &UNK_009dee20 + uVar18 * 0x40;
  if (qVar21 == 0) {
    uVar13 = (uint)(byte)pqVar10[1];
  }
  else {
    uVar13 = (uint)pqVar10[1];
  }
  if (*plVar12 == 0) {
    uVar16 = (uint)*(byte *)(plVar12 + 1);
  }
  else {
    uVar16 = (uint)plVar12[1];
  }
  *(uint *)&psVar5->fileoff = uVar16 + uVar13 + 0x20;
  pqVar9 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar21 = *pqVar10;
  qVar20 = pqVar10[3];
  qVar26 = pqVar10[2];
  pqVar9[1] = pqVar10[1];
  *pqVar9 = qVar21;
  pqVar9[3] = qVar20;
  pqVar9[2] = qVar26;
  pqVar10[1] = 0;
  *pqVar10 = 0;
  pqVar10[3] = 0;
  pqVar10[2] = 0;
  lVar15 = *plVar12;
  lVar29 = plVar12[3];
  lVar28 = plVar12[2];
  pqVar9[5] = plVar12[1];
  pqVar9[4] = lVar15;
  pqVar9[7] = lVar29;
  pqVar9[6] = lVar28;
  plVar12[1] = 0;
  *plVar12 = 0;
  plVar12[3] = 0;
  plVar12[2] = 0;
  *(qword **)psVar5->segname = pqVar9;
  return psVar5;
}



/* Entry: 00398d00; end: 00398d47;  */

segment_command *
FUN_00398d00(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  segment_command *psVar4;
  long *plVar5;
  segment_command *psVar6;
  qword *pqVar7;
  qword *pqVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar11;
  qword qVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  qword qVar17;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar18;
  undefined8 uVar19;
  qword qVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_3 == 0xe) &&
     (lVar11._0_4_ = param_2->cmd, lVar11._4_4_ = param_2->cmdsize,
     lVar11 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar6 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = uStack_30;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar6;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xd) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar6 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar18;
    param_1[4] = uVar21;
    param_1[3] = uVar19;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar6;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 0x13) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     (lVar23 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar6 = param_4;
    FUN_00399244();
    qVar12 = param_4->filesize;
    psVar4 = psVar6;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar12;
    *param_1 = psVar4;
    param_1[1] = psVar6;
    return psVar4;
  }
  if ((param_3 == 0xb) &&
     (lVar14._0_4_ = param_2->cmd, lVar14._4_4_ = param_2->cmdsize,
     lVar14 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar6 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar12 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar6;
    *(int *)(param_1 + 5) = (int)qVar12;
    psVar6 = &segment_command_00000020;
    __Znwm();
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar6->cmd = (int)uVar18;
    psVar6->cmdsize = (int)((ulong)uVar18 >> 0x20);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar6->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar6->segname = uVar18;
    psVar6->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar6;
    return psVar6;
  }
  if ((param_3 == 8) &&
     (lVar16._0_4_ = param_2->cmd, lVar16._4_4_ = param_2->cmdsize, lVar16 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar6 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar12 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar6;
    *(int *)(param_1 + 5) = (int)qVar12;
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar18;
    param_1[4] = uVar21;
    param_1[3] = uVar19;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar6;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar6);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar3 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar9 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar11 = *(long *)param_4;
  qVar12 = param_4->vmaddr;
  uVar18 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar11;
  *(qword *)((long)register0x00000008 + -0x58) = qVar12;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar18;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar8 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar5 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
    do {
      lVar11 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plVar5[1])();
    }
  }
  psVar6 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar6) {
    do {
      lVar11 = *(long *)psVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psVar6,0x10);
      if (bVar2) {
        *(long *)psVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)psVar6->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar6;
  }
  ___stack_chk_fail();
  if ((int)pqVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar4 = psVar6;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar6;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar12 = *pqVar8;
  if (qVar12 == 0) {
    qVar20 = (long)pqVar8 + 9;
    qVar17 = (qword)(byte)pqVar8[1];
  }
  else {
    qVar17 = pqVar8[1];
    qVar20 = pqVar8[2];
  }
  if (qVar17 < 4) {
    uVar15 = 0;
  }
  else {
    uVar15 = (ulong)(*(int *)(qVar17 + qVar20 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar4 = &UNK_009dee20 + uVar15 * 0x40;
  if (qVar12 == 0) {
    uVar10 = (uint)(byte)pqVar8[1];
  }
  else {
    uVar10 = (uint)pqVar8[1];
  }
  if (*plVar9 == 0) {
    uVar13 = (uint)*(byte *)(plVar9 + 1);
  }
  else {
    uVar13 = (uint)plVar9[1];
  }
  *(uint *)&psVar4->fileoff = uVar13 + uVar10 + 0x20;
  pqVar7 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar12 = *pqVar8;
  qVar17 = pqVar8[3];
  qVar20 = pqVar8[2];
  pqVar7[1] = pqVar8[1];
  *pqVar7 = qVar12;
  pqVar7[3] = qVar17;
  pqVar7[2] = qVar20;
  pqVar8[1] = 0;
  *pqVar8 = 0;
  pqVar8[3] = 0;
  pqVar8[2] = 0;
  lVar11 = *plVar9;
  lVar23 = plVar9[3];
  lVar22 = plVar9[2];
  pqVar7[5] = plVar9[1];
  pqVar7[4] = lVar11;
  pqVar7[7] = lVar23;
  pqVar7[6] = lVar22;
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9[3] = 0;
  plVar9[2] = 0;
  *(qword **)psVar4->segname = pqVar7;
  return psVar4;
}



/* Entry: 00398d48; end: 00398ddb;  */

undefined8 FUN_00398d48(void)

{
  int iVar1;
  
  if ((bRam0000000000afab28 & 1) == 0) {
    iVar1 = 0xafab28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afaae8 = 1;
      uRam0000000000afaaf0 = 0x3ff2b8;
      pcRam0000000000afaaf8 = FUN_00398ddc;
      pcRam0000000000afab00 = FUN_00395710;
      uRam0000000000afab08 = 0x398e04;
      pcRam0000000000afab10 = "grpc-server-stats-bin";
      uRam0000000000afab18 = 0x15;
      uRam0000000000afab20 = 0;
      ___cxa_guard_release(0xafab28);
    }
  }
  return 0xafaae8;
}



/* Entry: 00398ddc; end: 00398e27;  */

undefined1  [16] FUN_00398ddc(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = *param_2;
  puVar13 = param_2 + 0x34;
  *param_2 = uVar2 | 0x40000;
  if ((uVar2 >> 0x12 & 1) == 0) {
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
    param_2[0x38] = 0;
    param_2[0x39] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_80,param_1);
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar11 = uStack_78;
  plVar9 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar8 = *(long **)puVar13;
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_60 = *(undefined8 *)(param_2 + 0x36);
  uStack_50 = *(undefined8 *)(param_2 + 0x3a);
  *(long **)puVar13 = plVar9;
  *(undefined8 *)(param_2 + 0x38) = uVar6;
  *(undefined8 *)(param_2 + 0x36) = uVar11;
  *(undefined8 *)(param_2 + 0x3a) = uVar7;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  plVar9 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar12 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar11 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_d8,plVar9);
  pplVar10 = aplStack_d8;
  FUN_00395a64(pplVar10);
  FUN_0035d0e4(&puStack_f0,pplVar10,uVar11);
  ppuVar5 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar5 = &puStack_f0;
  }
  uVar11 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar5,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar9 = aplStack_d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_d8[0]) {
    do {
      lVar12 = *aplStack_d8[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar4) {
        *aplStack_d8[0] = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar9 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = plVar9;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    func_0x0040cf10();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    FUN_0034b418(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar9[1] & 0xff;
  lVar12 = (long)plVar9 + 9;
  if (*plVar9 != 0) {
    uVar1 = plVar9[1];
    lVar12 = plVar9[2];
  }
  auVar16._8_8_ = uVar1;
  auVar16._0_8_ = lVar12;
  return auVar16;
}



/* Entry: 00398e28; end: 00398ebf;  */

segment_command *
FUN_00398e28(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  segment_command *psVar5;
  segment_command *psVar6;
  long *plVar7;
  segment_command *psVar8;
  qword *pqVar9;
  qword *pqVar10;
  segment_command *psVar11;
  long *plVar12;
  uint uVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  qword qVar19;
  qword qVar20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  qword qVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  qword qStack_70;
  segment_command *psStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pppppuVar21 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar8 = param_2;
  FUN_003955d0(&uStack_48);
  qVar20 = param_2->filesize;
  FUN_00398f08();
  *param_1 = psVar8;
  *(int *)(param_1 + 5) = (int)qVar20;
  param_1[2] = uStack_40;
  param_1[1] = uStack_48;
  param_1[4] = uStack_30;
  param_1[3] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return psVar8;
  }
  ___stack_chk_fail();
  FUN_0034b418(&uStack_48);
  pcVar22 = FUN_00398ec0;
  psVar5 = psVar8;
  __Unwind_Resume();
  puVar3 = auStack_50;
  puVar14 = extraout_x8;
  if ((param_3 == 0xd) &&
     (lVar15._0_4_ = psVar5->cmd, lVar15._4_4_ = psVar5->cmdsize, puVar3 = auStack_50,
     lVar15 == 0x6761742d63707267 && *(long *)((long)&psVar5->cmdsize + 1) == 0x6e69622d73676174)) {
    pcStack_58 = FUN_00398ec0;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    psVar6 = param_4;
    psVar11 = param_4;
    qStack_70 = qVar20;
    psStack_68 = psVar8;
    ppppuStack_60 = pppppuVar21;
    FUN_003955d0(&uStack_98);
    qVar20 = param_4->filesize;
    FUN_003990dc();
    *extraout_x8 = psVar6;
    *(int *)(extraout_x8 + 5) = (int)qVar20;
    extraout_x8[2] = uStack_90;
    extraout_x8[1] = uStack_98;
    extraout_x8[4] = uStack_80;
    extraout_x8[3] = uStack_88;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return psVar6;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_98);
    pcVar22 = FUN_00399080;
    psVar5 = psVar6;
    __Unwind_Resume();
    puVar3 = auStack_a0;
    param_4 = psVar11;
    puVar14 = extraout_x8_00;
    psVar8 = psVar6;
    pppppuVar21 = &ppppuStack_60;
  }
  if ((param_3 == 0x13) &&
     (lVar27._0_4_ = psVar5->cmd, lVar27._4_4_ = psVar5->cmdsize,
     (lVar27 == 0x635f626c63707267 && *(long *)psVar5->segname == 0x74735f746e65696c) &&
     *(long *)(psVar5->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(qword *)(puVar3 + -0x20) = qVar20;
    *(segment_command **)(puVar3 + -0x18) = psVar8;
    *(undefined8 ******)(puVar3 + -0x10) = pppppuVar21;
    *(code **)(puVar3 + -8) = pcVar22;
    psVar8 = param_4;
    FUN_00399244();
    qVar20 = param_4->filesize;
    psVar5 = psVar8;
    FUN_00399290();
    *(int *)(puVar14 + 5) = (int)qVar20;
    *puVar14 = psVar5;
    puVar14[1] = psVar8;
    return psVar5;
  }
  if ((param_3 == 0xb) &&
     (lVar28._0_4_ = psVar5->cmd, lVar28._4_4_ = psVar5->cmdsize,
     lVar28 == 0x2d74736f632d626c && *(long *)((long)&psVar5->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)(puVar3 + -0x20) = qVar20;
    *(segment_command **)(puVar3 + -0x18) = psVar8;
    *(undefined8 ******)(puVar3 + -0x10) = pppppuVar21;
    *(code **)(puVar3 + -8) = pcVar22;
    psVar8 = param_4;
    FUN_00399554(puVar3 + -0x40);
    qVar20 = param_4->filesize;
    FUN_00399608();
    *puVar14 = psVar8;
    *(int *)(puVar14 + 5) = (int)qVar20;
    psVar8 = &segment_command_00000020;
    __Znwm();
    uVar23 = *(undefined8 *)(puVar3 + -0x40);
    psVar8->cmd = (int)uVar23;
    psVar8->cmdsize = (int)((ulong)uVar23 >> 0x20);
    uVar23 = *(undefined8 *)(puVar3 + -0x38);
    *(undefined8 *)(psVar8->segname + 8) = *(undefined8 *)(puVar3 + -0x30);
    *(undefined8 *)psVar8->segname = uVar23;
    psVar8->vmaddr = *(qword *)(puVar3 + -0x28);
    puVar14[1] = psVar8;
    return psVar8;
  }
  if ((param_3 == 8) &&
     (lVar18._0_4_ = psVar5->cmd, lVar18._4_4_ = psVar5->cmdsize, lVar18 == 0x6e656b6f742d626c)) {
    *(qword *)(puVar3 + -0x20) = qVar20;
    *(segment_command **)(puVar3 + -0x18) = psVar8;
    *(undefined8 ******)(puVar3 + -0x10) = pppppuVar21;
    *(code **)(puVar3 + -8) = pcVar22;
    *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar8 = param_4;
    FUN_003955d0(puVar3 + -0x48);
    qVar20 = param_4->filesize;
    FUN_00399b24();
    *puVar14 = psVar8;
    *(int *)(puVar14 + 5) = (int)qVar20;
    uVar23 = *(undefined8 *)(puVar3 + -0x48);
    uVar26 = *(undefined8 *)(puVar3 + -0x30);
    uVar24 = *(undefined8 *)(puVar3 + -0x38);
    puVar14[2] = *(undefined8 *)(puVar3 + -0x40);
    puVar14[1] = uVar23;
    puVar14[4] = uVar26;
    puVar14[3] = uVar24;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar3 + -0x28)) {
      return psVar8;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar3 + -0x48);
    __Unwind_Resume(psVar8);
    *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar4 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar12 = (long *)(puVar3 + -0x70);
  *(qword *)(puVar3 + -0x20) = qVar20;
  *(segment_command **)(puVar3 + -0x18) = psVar8;
  *(undefined8 ******)(puVar3 + -0x10) = pppppuVar21;
  *(code **)(puVar3 + -8) = pcVar22;
  *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(puVar3 + -0x48,psVar5,param_3);
  lVar15 = *(long *)param_4;
  qVar20 = param_4->vmaddr;
  uVar23 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)(puVar3 + -0x70) = lVar15;
  *(qword *)(puVar3 + -0x58) = qVar20;
  *(undefined8 *)(puVar3 + -0x60) = uVar23;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar10 = (qword *)(puVar3 + -0x48);
  FUN_00399d0c(puVar14);
  plVar7 = *(long **)(puVar3 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
    do {
      lVar15 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plVar7[1])();
    }
  }
  psVar8 = *(segment_command **)(puVar3 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar8) {
    do {
      lVar15 = *(long *)psVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psVar8,0x10);
      if (bVar2) {
        *(long *)psVar8 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)psVar8->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar3 + -0x28)) {
    return psVar8;
  }
  ___stack_chk_fail();
  if ((int)pqVar10 != 0) {
    func_0x0040cf10();
    FUN_0034b418(puVar3 + -0x70);
    FUN_0034b418(puVar3 + -0x48);
  }
  psVar5 = psVar8;
  __Unwind_Resume();
  *(undefined8 *)(puVar3 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x98) = unaff_x21;
  *(segment_command **)(puVar3 + -0x90) = param_4;
  *(segment_command **)(puVar3 + -0x88) = psVar8;
  *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x78) = FUN_00399d0c;
  qVar20 = *pqVar10;
  if (qVar20 == 0) {
    qVar25 = (long)pqVar10 + 9;
    qVar19 = (qword)(byte)pqVar10[1];
  }
  else {
    qVar19 = pqVar10[1];
    qVar25 = pqVar10[2];
  }
  if (qVar19 < 4) {
    uVar17 = 0;
  }
  else {
    uVar17 = (ulong)(*(int *)(qVar19 + qVar25 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar5 = &UNK_009dee20 + uVar17 * 0x40;
  if (qVar20 == 0) {
    uVar13 = (uint)(byte)pqVar10[1];
  }
  else {
    uVar13 = (uint)pqVar10[1];
  }
  if (*plVar12 == 0) {
    uVar16 = (uint)*(byte *)(plVar12 + 1);
  }
  else {
    uVar16 = (uint)plVar12[1];
  }
  *(uint *)&psVar5->fileoff = uVar16 + uVar13 + 0x20;
  pqVar9 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar20 = *pqVar10;
  qVar19 = pqVar10[3];
  qVar25 = pqVar10[2];
  pqVar9[1] = pqVar10[1];
  *pqVar9 = qVar20;
  pqVar9[3] = qVar19;
  pqVar9[2] = qVar25;
  pqVar10[1] = 0;
  *pqVar10 = 0;
  pqVar10[3] = 0;
  pqVar10[2] = 0;
  lVar15 = *plVar12;
  lVar28 = plVar12[3];
  lVar27 = plVar12[2];
  pqVar9[5] = plVar12[1];
  pqVar9[4] = lVar15;
  pqVar9[7] = lVar28;
  pqVar9[6] = lVar27;
  plVar12[1] = 0;
  *plVar12 = 0;
  plVar12[3] = 0;
  plVar12[2] = 0;
  *(qword **)psVar5->segname = pqVar9;
  return psVar5;
}



/* Entry: 00398ec0; end: 00398f07;  */

segment_command *
FUN_00398ec0(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  segment_command *psVar4;
  long *plVar5;
  segment_command *psVar6;
  qword *pqVar7;
  qword *pqVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  qword qVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  qword qVar16;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar17;
  undefined8 uVar18;
  qword qVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_3 == 0xd) &&
     (lVar11._0_4_ = param_2->cmd, lVar11._4_4_ = param_2->cmdsize,
     lVar11 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar6 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = uStack_30;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar6;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0x13) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     (lVar21 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar6 = param_4;
    FUN_00399244();
    qVar12 = param_4->filesize;
    psVar4 = psVar6;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar12;
    *param_1 = psVar4;
    param_1[1] = psVar6;
    return psVar4;
  }
  if ((param_3 == 0xb) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar6 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar12 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar6;
    *(int *)(param_1 + 5) = (int)qVar12;
    psVar6 = &segment_command_00000020;
    __Znwm();
    uVar17 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar6->cmd = (int)uVar17;
    psVar6->cmdsize = (int)((ulong)uVar17 >> 0x20);
    uVar17 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar6->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar6->segname = uVar17;
    psVar6->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar6;
    return psVar6;
  }
  if ((param_3 == 8) &&
     (lVar15._0_4_ = param_2->cmd, lVar15._4_4_ = param_2->cmdsize, lVar15 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar6 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar12 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar6;
    *(int *)(param_1 + 5) = (int)qVar12;
    uVar17 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar17;
    param_1[4] = uVar20;
    param_1[3] = uVar18;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar6;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar6);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar3 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar9 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar11 = *(long *)param_4;
  qVar12 = param_4->vmaddr;
  uVar17 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar11;
  *(qword *)((long)register0x00000008 + -0x58) = qVar12;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar17;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar8 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar5 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
    do {
      lVar11 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plVar5[1])();
    }
  }
  psVar6 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar6) {
    do {
      lVar11 = *(long *)psVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psVar6,0x10);
      if (bVar2) {
        *(long *)psVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)psVar6->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar6;
  }
  ___stack_chk_fail();
  if ((int)pqVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar4 = psVar6;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar6;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar12 = *pqVar8;
  if (qVar12 == 0) {
    qVar19 = (long)pqVar8 + 9;
    qVar16 = (qword)(byte)pqVar8[1];
  }
  else {
    qVar16 = pqVar8[1];
    qVar19 = pqVar8[2];
  }
  if (qVar16 < 4) {
    uVar14 = 0;
  }
  else {
    uVar14 = (ulong)(*(int *)(qVar16 + qVar19 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar4 = &UNK_009dee20 + uVar14 * 0x40;
  if (qVar12 == 0) {
    uVar10 = (uint)(byte)pqVar8[1];
  }
  else {
    uVar10 = (uint)pqVar8[1];
  }
  if (*plVar9 == 0) {
    uVar13 = (uint)*(byte *)(plVar9 + 1);
  }
  else {
    uVar13 = (uint)plVar9[1];
  }
  *(uint *)&psVar4->fileoff = uVar13 + uVar10 + 0x20;
  pqVar7 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar12 = *pqVar8;
  qVar16 = pqVar8[3];
  qVar19 = pqVar8[2];
  pqVar7[1] = pqVar8[1];
  *pqVar7 = qVar12;
  pqVar7[3] = qVar16;
  pqVar7[2] = qVar19;
  pqVar8[1] = 0;
  *pqVar8 = 0;
  pqVar8[3] = 0;
  pqVar8[2] = 0;
  lVar11 = *plVar9;
  lVar22 = plVar9[3];
  lVar21 = plVar9[2];
  pqVar7[5] = plVar9[1];
  pqVar7[4] = lVar11;
  pqVar7[7] = lVar22;
  pqVar7[6] = lVar21;
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9[3] = 0;
  plVar9[2] = 0;
  *(qword **)psVar4->segname = pqVar7;
  return psVar4;
}



/* Entry: 00398f08; end: 00398f9b;  */

undefined8 FUN_00398f08(void)

{
  int iVar1;
  
  if ((bRam0000000000afab70 & 1) == 0) {
    iVar1 = 0xafab70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afab30 = 1;
      uRam0000000000afab38 = 0x3ff2b8;
      pcRam0000000000afab40 = FUN_00398f9c;
      pcRam0000000000afab48 = FUN_00395710;
      uRam0000000000afab50 = 0x398fc4;
      pcRam0000000000afab58 = "grpc-trace-bin";
      uRam0000000000afab60 = 0xe;
      uRam0000000000afab68 = 0;
      ___cxa_guard_release(0xafab70);
    }
  }
  return 0xafab30;
}



/* Entry: 00398f9c; end: 00398fe7;  */

undefined1  [16] FUN_00398f9c(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = *param_2;
  puVar13 = param_2 + 0x2c;
  *param_2 = uVar2 | 0x80000;
  if ((uVar2 >> 0x13 & 1) == 0) {
    param_2[0x2e] = 0;
    param_2[0x2f] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    param_2[0x32] = 0;
    param_2[0x33] = 0;
    param_2[0x30] = 0;
    param_2[0x31] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_80,param_1);
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar11 = uStack_78;
  plVar9 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar8 = *(long **)puVar13;
  uStack_58 = *(undefined8 *)(param_2 + 0x30);
  uStack_60 = *(undefined8 *)(param_2 + 0x2e);
  uStack_50 = *(undefined8 *)(param_2 + 0x32);
  *(long **)puVar13 = plVar9;
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *(undefined8 *)(param_2 + 0x2e) = uVar11;
  *(undefined8 *)(param_2 + 0x32) = uVar7;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  plVar9 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar12 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar11 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_d8,plVar9);
  pplVar10 = aplStack_d8;
  FUN_00395a64(pplVar10);
  FUN_0035d0e4(&puStack_f0,pplVar10,uVar11);
  ppuVar5 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar5 = &puStack_f0;
  }
  uVar11 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar5,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar9 = aplStack_d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_d8[0]) {
    do {
      lVar12 = *aplStack_d8[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar4) {
        *aplStack_d8[0] = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar9 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = plVar9;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    func_0x0040cf10();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    FUN_0034b418(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar9[1] & 0xff;
  lVar12 = (long)plVar9 + 9;
  if (*plVar9 != 0) {
    uVar1 = plVar9[1];
    lVar12 = plVar9[2];
  }
  auVar16._8_8_ = uVar1;
  auVar16._0_8_ = lVar12;
  return auVar16;
}



/* Entry: 00398fe8; end: 0039907f;  */

segment_command *
FUN_00398fe8(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  segment_command *psVar4;
  qword *pqVar5;
  segment_command **ppsVar6;
  long **pplVar7;
  uint uVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  segment_command *psVar11;
  uint uVar12;
  ulong uVar13;
  segment_command *psVar14;
  qword qVar15;
  segment_command *psVar16;
  long lVar17;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  segment_command *psStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 in_stack_ffffffffffffff80;
  qword in_stack_ffffffffffffff88;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar4 = param_2;
  FUN_003955d0(&uStack_48);
  qVar15 = param_2->filesize;
  FUN_003990dc();
  *param_1 = psVar4;
  *(int *)(param_1 + 5) = (int)qVar15;
  param_1[2] = uStack_40;
  param_1[1] = uStack_48;
  param_1[4] = uStack_30;
  param_1[3] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return psVar4;
  }
  ___stack_chk_fail();
  FUN_0034b418(&uStack_48);
  __Unwind_Resume();
  puStack_60 = &stack0xfffffffffffffff0;
  if ((param_3 == 0x13) &&
     (lVar9._0_4_ = psVar4->cmd, lVar9._4_4_ = psVar4->cmdsize,
     (lVar9 == 0x635f626c63707267 && *(long *)psVar4->segname == 0x74735f746e65696c) &&
     *(long *)(psVar4->segname + 3) == 0x73746174735f746e)) {
    pcStack_58 = FUN_00399080;
    psVar4 = param_4;
    FUN_00399244();
    qVar15 = param_4->filesize;
    psVar11 = psVar4;
    FUN_00399290();
    *(int *)(extraout_x8 + 5) = (int)qVar15;
    *extraout_x8 = psVar11;
    extraout_x8[1] = psVar4;
    return psVar11;
  }
  if ((param_3 == 0xb) &&
     (lVar10._0_4_ = psVar4->cmd, lVar10._4_4_ = psVar4->cmdsize,
     lVar10 == 0x2d74736f632d626c && *(long *)((long)&psVar4->cmd + 3) == 0x6e69622d74736f63)) {
    pcStack_58 = FUN_00399080;
    psVar4 = param_4;
    FUN_00399554(&lStack_90);
    qVar15 = param_4->filesize;
    FUN_00399608();
    *extraout_x8 = psVar4;
    *(int *)(extraout_x8 + 5) = (int)qVar15;
    psVar4 = &segment_command_00000020;
    __Znwm();
    psVar4->cmd = (undefined4)lStack_90;
    psVar4->cmdsize = lStack_90._4_4_;
    *(undefined8 *)(psVar4->segname + 8) = in_stack_ffffffffffffff80;
    *(undefined8 *)psVar4->segname = uStack_88;
    psVar4->vmaddr = in_stack_ffffffffffffff88;
    extraout_x8[1] = psVar4;
    return psVar4;
  }
  if ((param_3 == 8) &&
     (lVar17._0_4_ = psVar4->cmd, lVar17._4_4_ = psVar4->cmdsize, lVar17 == 0x6e656b6f742d626c)) {
    pcStack_58 = FUN_00399080;
    lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
    psVar4 = param_4;
    FUN_003955d0(&psStack_98);
    qVar15 = param_4->filesize;
    FUN_00399b24();
    *extraout_x8 = psVar4;
    *(int *)(extraout_x8 + 5) = (int)qVar15;
    extraout_x8[2] = lStack_90;
    extraout_x8[1] = psStack_98;
    extraout_x8[4] = in_stack_ffffffffffffff80;
    extraout_x8[3] = uStack_88;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
      return psVar4;
    }
    ___stack_chk_fail();
    FUN_0034b418(&psStack_98);
    __Unwind_Resume(psVar4);
    pcStack_a8 = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar3 = 0xafac90;
      ppuStack_b0 = &puStack_60;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  pplVar7 = &plStack_c0;
  pcStack_58 = FUN_00399080;
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(&psStack_98,psVar4,param_3);
  uStack_b8 = *(undefined8 *)param_4->segname;
  plStack_c0 = *(long **)param_4;
  pcStack_a8 = (code *)param_4->vmaddr;
  ppuStack_b0 = *(undefined1 ***)(param_4->segname + 8);
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  ppsVar6 = &psStack_98;
  FUN_00399d0c(extraout_x8);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_c0) {
    do {
      lVar10 = *plStack_c0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
      if (bVar2) {
        *plStack_c0 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_c0[1])();
    }
  }
  psVar4 = psStack_98;
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psStack_98) {
    do {
      lVar10 = *(long *)psStack_98;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psStack_98,0x10);
      if (bVar2) {
        *(long *)psStack_98 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)psStack_98->segname)();
      psVar4 = psStack_98;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
    return psVar4;
  }
  ___stack_chk_fail();
  if ((int)ppsVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_c0);
    FUN_0034b418(&psStack_98);
  }
  __Unwind_Resume();
  psVar11 = *ppsVar6;
  if (psVar11 == (segment_command *)0x0) {
    psVar16 = (segment_command *)((long)ppsVar6 + 9);
    psVar14 = (segment_command *)(ulong)*(byte *)(ppsVar6 + 1);
  }
  else {
    psVar14 = ppsVar6[1];
    psVar16 = ppsVar6[2];
  }
  if (psVar14 < (segment_command *)0x4) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ulong)(*(int *)(psVar16->segname + (long)(psVar14->segname + -0x14)) == 0x6e69622d);
  }
  *(undefined **)psVar4 = &UNK_009dee20 + uVar13 * 0x40;
  if (psVar11 == (segment_command *)0x0) {
    uVar8 = (uint)*(byte *)(ppsVar6 + 1);
  }
  else {
    uVar8 = (uint)ppsVar6[1];
  }
  if (*pplVar7 == (long *)0x0) {
    uVar12 = (uint)*(byte *)(pplVar7 + 1);
  }
  else {
    uVar12 = (uint)pplVar7[1];
  }
  *(uint *)&psVar4->fileoff = uVar12 + uVar8 + 0x20;
  pqVar5 = &segment_command_00000020.vmsize;
  __Znwm();
  psVar11 = *ppsVar6;
  psVar14 = ppsVar6[3];
  psVar16 = ppsVar6[2];
  pqVar5[1] = (qword)ppsVar6[1];
  *pqVar5 = (qword)psVar11;
  pqVar5[3] = (qword)psVar14;
  pqVar5[2] = (qword)psVar16;
  ppsVar6[1] = (segment_command *)0x0;
  *ppsVar6 = (segment_command *)0x0;
  ppsVar6[3] = (segment_command *)0x0;
  ppsVar6[2] = (segment_command *)0x0;
  lVar9 = (long)*pplVar7;
  lVar17 = (long)pplVar7[3];
  lVar10 = (long)pplVar7[2];
  pqVar5[5] = (qword)pplVar7[1];
  pqVar5[4] = lVar9;
  pqVar5[7] = lVar17;
  pqVar5[6] = lVar10;
  pplVar7[1] = (long *)0x0;
  *pplVar7 = (long *)0x0;
  pplVar7[3] = (long *)0x0;
  pplVar7[2] = (long *)0x0;
  *(qword **)psVar4->segname = pqVar5;
  return psVar4;
}


