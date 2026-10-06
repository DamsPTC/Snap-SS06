/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e8def8; end: 101e8e0c3;  */

void FUN_101e8def8(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  
  lVar2 = param_1;
  lVar5 = param_2;
  func_0x0001000f11b0();
  if (SBORROW8(lVar2,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e8e0c4);
    (*pcVar1)();
  }
  lVar2 = (lVar2 - param_2) / 1000;
  lVar3 = param_1;
  func_0x000107c44314();
  if (lVar3 == 0) {
    func_0x000107c4407c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar3 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61648();
      if (param_3 != 0) {
        uVar8 = *(undefined8 *)(param_3 + 0x20);
        func_0x000107c6157c(uVar8);
        func_0x000107c61574(param_3);
        FUN_101e909c8(param_4,lVar2);
        func_0x000107c61574(uVar8);
      }
      plVar6 = *(long **)(*(long *)(param_5 + 0x40) + 0x28);
      *plVar6 = lVar3;
      plVar6[1] = lVar5;
      func_0x000107c61450(param_5);
      return;
    }
  }
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  puVar7 = (undefined8 *)0x0;
  if (param_3 != 0) {
    puVar7 = *(undefined8 **)(param_3 + 0x20);
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(param_3);
    FUN_101e90ad0(param_4,lVar3,lVar2);
    func_0x000107c61574();
  }
  FUN_101e8f380();
  puVar4 = &UNK_110491da8;
  func_0x000107c613f8(&UNK_110491da8,puVar7,0,0);
  *puVar7 = 2;
  uVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar7 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar7 = puVar4;
  func_0x000107c61454(param_5,uVar8);
  return;
}



/* Entry: 101e8e0c4; end: 101e8e287;  */

undefined8 * FUN_101e8e0c4(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  puVar5 = *(undefined8 **)(unaff_x20 + 0x18);
  func_0x000107c5fadc();
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar5 != (undefined8 *)0x0) {
    puVar2 = puVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    param_1 = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      func_0x000107c5ee30();
      func_0x000107c61170(puVar2);
      uVar1 = (uint)(param_2 >> 0x20);
      uVar4 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar4 == 0) {
          if ((param_2 & 0xff000000000000) == 0) {
LAB_101e8e20c:
            func_0x00010006c090(param_1,param_2);
            goto LAB_101e8e218;
          }
        }
        else if ((long)(int)param_1 == (long)param_1 >> 0x20) goto LAB_101e8e20c;
      }
      else if ((uVar4 != 2) || (param_1[2] == param_1[3])) goto LAB_101e8e20c;
      func_0x000107c610f8(PTR_PTR_1126bca38);
      func_0x00010006c00c(param_1,param_2);
      puVar2 = param_1;
      FUN_10196004c(param_1,param_2);
      puVar3 = param_1;
      func_0x00010006c090(param_1,param_2);
      if (unaff_x21 == (undefined8 *)0x0) {
        if (puVar2 != (undefined8 *)0x0) {
          func_0x00010006c090(param_1,param_2);
          func_0x000107c61170(puVar5);
          return puVar2;
        }
      }
      else {
        func_0x000107c614ac();
        puVar3 = unaff_x21;
      }
      FUN_101e8f380();
      func_0x000107c613f8(&UNK_110491da8,puVar3,0,0);
      *puVar3 = 6;
      func_0x000107c61654();
      func_0x00010006c090(param_1,param_2);
      goto LAB_101e8e248;
    }
  }
LAB_101e8e218:
  FUN_101e8f380();
  func_0x000107c613f8(&UNK_110491da8,param_1,0,0);
  *param_1 = 5;
  func_0x000107c61654();
  puVar2 = unaff_x21;
LAB_101e8e248:
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 101e8e288; end: 101e8e2c3;  */

void FUN_101e8e288(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e8e2c4; end: 101e8e36f;  */

/* WARNING: Removing unreachable block (ram,0x000101e8c314) */
/* WARNING: Removing unreachable block (ram,0x000101e8c31c) */
/* WARNING: Removing unreachable block (ram,0x000101e8c338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101e8e2c4(long param_1,long param_2,long param_3,long param_4,long param_5,
                    undefined1 param_6,long param_7,undefined1 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  code **ppcVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  code *pcVar14;
  long *plVar15;
  undefined8 uVar16;
  code **ppcVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long *unaff_x20;
  long lVar23;
  long unaff_x22;
  long lVar24;
  undefined8 *puVar25;
  code *pcStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  code *pcStack_1b0;
  long lStack_1a8;
  code *pcStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  ulong *puStack_130;
  code *pcStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  code *pcStack_108;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  
  lVar23 = *unaff_x20;
  plVar15 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_101e8e370;
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15[0x15] = param_7;
  plVar15[0x16] = lVar23;
  *(undefined1 *)((long)plVar15 + 0xe9) = param_8;
  *(undefined1 *)(plVar15 + 0x1d) = param_6;
  plVar15[0x13] = param_4;
  plVar15[0x14] = param_5;
  plVar15[0x11] = param_2;
  plVar15[0x12] = param_3;
  plVar15[0x10] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101e8c2ac;
  }
  else {
    func_0x000107c60e78();
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar19 = plVar15[0x11];
    FUN_101e8c970(lVar19,plVar15[0x12],plVar15[0x13],plVar15[0x14]);
    plVar15[0x17] = lVar19;
    lVar23 = plVar15[0x11];
    FUN_101e8e3ac(lVar23,plVar15[0x12],lVar19,(char)plVar15[0x1d],plVar15[0x15],
                  *(undefined1 *)((long)plVar15 + 0xe9));
    plVar15[0x18] = lVar23;
    plVar4 = (long *)0xa0;
    func_0x000107c615b8();
    plVar15[0x19] = (long)plVar4;
    *plVar4 = (long)plVar15;
    plVar4[1] = (long)FUN_101e8c3b0;
    lVar22 = plVar15[0x16];
    lVar23 = plVar15[0x11];
    lVar24 = plVar15[0x12];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
      func_0x000107c60e78();
      uStack_60 = (ulong)&stack0xffffffffffffffe0 | 0x1000000000000000;
      lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_68 = *plVar15;
      lVar23 = *plVar15;
      *(long **)(lStack_68 + 0xd0) = plVar4;
      *(long *)(lStack_68 + 0xd8) = lVar24;
      *(long *)(lStack_68 + 0xe0) = lVar22;
      func_0x000107c615c0(*(undefined8 *)(lStack_68 + 200));
      if (lVar22 == 0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101e8c458;
          goto LAB_107c615e0;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101e8c908;
        goto LAB_107c615e0;
      }
      func_0x000107c60e78();
      uStack_80 = (ulong)&uStack_60 | 0x1000000000000000;
      uStack_98 = 0;
      pcStack_78 = FUN_101e8c458;
      lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar21 = 0xd000000000000016;
      uVar8 = *(undefined8 *)(lVar23 + 0xd0);
      uVar18 = *(undefined8 *)(lVar23 + 0xd8);
      lVar24 = *(long *)(lVar23 + 0xb0);
      uVar16 = *(undefined8 *)(lVar23 + 0x88);
      uVar2 = *(undefined8 *)(lVar23 + 0x90);
      uStack_e8 = 0;
      plStack_e0 = (long *)0xe000000000000000;
      lStack_90 = lVar19;
      lStack_88 = lVar23;
      func_0x000107c602fc(0x22);
      func_0x000107c6142c(plStack_e0);
      uStack_e8 = 0xd000000000000020;
      plStack_e0 = (undefined8 *)0x800000010f016e50;
      func_0x000107c5fb78(uVar8,uVar18);
      plVar4 = plStack_e0;
      func_0x000107c6142c();
      func_0x0001000f11b0();
      puVar25 = plVar4;
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar5 = *puVar25;
      uStack_e8 = 0;
      plStack_e0 = (long *)0xe000000000000000;
      puStack_f8 = puVar25;
      func_0x000107c61174(uVar5);
      func_0x000107c602fc(0x2c);
      func_0x000107c6142c(plStack_e0);
      uStack_e8 = 0xd00000000000002a;
      plStack_e0 = (long *)0x800000010f016e80;
      func_0x000107c5fb78(uVar16,uVar2);
      plVar15 = plStack_e0;
      uVar16 = uStack_e8;
      func_0x000100029b28(uStack_e8,plStack_e0);
      uStack_f0 = uVar16;
      func_0x000107c6142c(plVar15);
      func_0x000107c61170(uVar5);
      puVar6 = PTR_PTR_1126a96b0;
      func_0x000107c61168();
      func_0x000107c5fadc(uVar8,uVar18);
      uVar16 = *(undefined8 *)(lVar24 + 0x28);
      func_0x000107c5fadc(uVar16,*(undefined8 *)(lVar24 + 0x30));
      *(long *)(lVar23 + 0x70) = 0;
      func_0x000107c4b74c();
      func_0x000107c61180();
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar8);
      lVar24 = *(long *)(lVar23 + 0x70);
      func_0x000107c61174();
      func_0x000107c61174();
      lVar19 = lVar24;
      func_0x0001000f11b0();
      if (SBORROW8(lVar19,(long)plVar4)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8c904);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      if (lVar24 == 0) {
        uVar8 = *(undefined8 *)(lVar23 + 0xd8);
        puVar7 = *(undefined **)(lVar23 + 0xb8);
        uVar16 = *(undefined8 *)(lVar23 + 0xc0);
        puVar25 = *(undefined8 **)(lVar23 + 0x80);
        func_0x000101e90784(*(undefined8 *)(lVar23 + 0xd0),uVar8,(lVar19 - (long)plVar4) / 1000);
        func_0x000107c6142c(uVar8);
        puVar9 = (undefined *)0x0;
        FUN_101e91d64();
        puVar11 = puVar9;
        func_0x000107c613fc();
        lVar20 = 0;
        func_0x00010006a340();
        *(undefined8 *)(puVar11 + 0x28) = 0;
        *(undefined8 *)(puVar11 + 0x20) = 0;
        *(undefined8 *)(puVar11 + 0x38) = 0;
        *(undefined8 *)(puVar11 + 0x30) = 0;
        *(undefined8 *)(puVar11 + 0x40) = 0;
        func_0x000107c613fc();
        uVar8 = uVar16;
        func_0x000107c6157c();
        func_0x00010006a360();
        *(undefined8 *)(puVar11 + 0x48) = uVar8;
        *(undefined8 *)(puVar11 + 0x58) = 0;
        *(undefined8 *)(puVar11 + 0x50) = 0;
        *(undefined8 *)(puVar11 + 0x68) = 0;
        *(undefined8 *)(puVar11 + 0x60) = 0;
        *(undefined8 *)(puVar11 + 0x70) = 0;
        lVar19 = lVar20;
        func_0x000107c613fc(lVar20,0x18,7);
        func_0x00010006a360();
        *(long *)(puVar11 + 0x78) = lVar19;
        lVar24 = _DAT_112e35280;
        lVar19 = 0x112e34ff8;
        func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
        (**(code **)(*(long *)(lVar19 + -8) + 0x38))(puVar11 + lVar24,1,1,lVar19);
        puVar3 = puStack_f8;
        *(undefined **)(puVar11 + 0x10) = puVar6;
        *(undefined8 *)(puVar11 + 0x18) = uVar16;
        puVar25[3] = puVar9;
        puVar25[4] = &PTR_DAT_110491e80;
        *puVar25 = puVar11;
        lVar19 = lVar23 + 0x28;
        lVar24 = 0;
        uVar18 = 0;
        func_0x000107c61428(puStack_f8,lVar19,0,0);
        uVar8 = *puVar3;
        func_0x000107c61174(uVar8);
        func_0x000100069b5c(uStack_f0);
        func_0x000107c61170(uVar8);
        func_0x000107c61574(uVar16);
        func_0x000107c61170(puVar7);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar23 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) goto LAB_101e8c8e0;
      }
      else {
        uVar21 = *(undefined8 *)(lVar23 + 0xb8);
        puVar11 = *(undefined **)(lVar23 + 0xc0);
        uVar8 = *(undefined8 *)(lVar23 + 0x88);
        puVar25 = *(undefined8 **)(lVar23 + 0x90);
        func_0x000107c6142c(*(undefined8 *)(lVar23 + 0xd8));
        uStack_e8 = 0;
        plStack_e0 = (long *)0xe000000000000000;
        lVar20 = lVar24;
        func_0x000107c61174();
        func_0x000107c602fc(0x18);
        func_0x000107c6142c(plStack_e0);
        uStack_e8 = 0xd000000000000016;
        plStack_e0 = (long *)0x800000010f016eb0;
        func_0x000107c614cc(lVar20,lVar23 + 0x78,lVar23 + 0x40);
        uVar16 = *(undefined8 *)(lVar23 + 0x50);
        func_0x000107c60640(*(undefined8 *)(lVar23 + 0x48));
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar16);
        func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
        func_0x000107c5fb78(uVar8,puVar25);
        func_0x000107c61170(lVar20);
        plVar15 = plStack_e0;
        func_0x000107c6142c();
        FUN_101e8f380();
        puVar7 = &UNK_110491da8;
        func_0x000107c613f8(&UNK_110491da8,plVar15,0,0);
        *plVar15 = lVar24;
        func_0x000107c61654();
        func_0x000107c615e8(puVar6);
        func_0x000107c61170(lVar20);
        puVar3 = puStack_f8;
        lVar19 = lVar23 + 0x58;
        lVar24 = 0;
        uVar18 = 0;
        func_0x000107c61428(puStack_f8,lVar19,0,0);
        uVar8 = *puVar3;
        func_0x000107c61174(uVar8);
        func_0x000100069b5c(uStack_f0);
        func_0x000107c61170(uVar8);
        func_0x000107c61574(puVar11);
        func_0x000107c61170(uVar21);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar23 + 8);
        puVar9 = puVar7;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
LAB_101e8c8e0:
                    /* WARNING: Could not recover jumptable at 0x000101e8c8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return UNRECOVERED_JUMPTABLE_00;
        }
      }
      func_0x000107c60e78();
      uStack_110 = (ulong)&uStack_80 | 0x1000000000000000;
      pcStack_108 = FUN_101e8c908;
      lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar8 = *(undefined8 *)(lVar23 + 0xb8);
      lStack_118 = lVar23;
      func_0x000107c61574(*(undefined8 *)(lVar23 + 0xc0));
      func_0x000107c61170(uVar8);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar23 + 0xe0);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar23 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
                    /* WARNING: Could not recover jumptable at 0x000101e8c968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      pcStack_128 = FUN_101e8c970;
      puStack_180 = puVar25;
      lStack_170 = lVar20;
      puStack_168 = puVar11;
      uStack_160 = uVar16;
      puStack_158 = puVar6;
      puStack_150 = puVar9;
      lStack_148 = lVar23;
      pcStack_140 = UNRECOVERED_JUMPTABLE_00;
      uStack_138 = uVar21;
      puStack_130 = &uStack_110;
      FUN_101e8e0c4(lVar24,uVar18);
      if (puVar7 == (undefined *)0x0) {
        lVar23 = lVar24;
        lStack_178 = lVar19;
        func_0x000107c4d084();
        func_0x000107c61180();
        if (lVar23 == 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdb4);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        lVar19 = lVar23;
        func_0x000107c3db60();
        func_0x000107c61180();
        func_0x000107c61170(lVar23);
        puVar7 = PTR___sypN_11034f1a8;
        lVar20 = lVar19;
        func_0x000107c5fc54(lVar19,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61170(lVar19);
        puVar6 = PTR___sSSN_11034da80;
        lVar19 = *(long *)(lVar20 + 0x10);
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar23 = lVar20;
        if (lVar19 == 0) {
          func_0x000107c6142c();
          puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          do {
            func_0x0001000bb420(lVar23 + 0x20,&pcStack_1a0);
            func_0x000100102924(&pcStack_1a0,&pcStack_1d0);
            ppcVar10 = &pcStack_1b0;
            func_0x000107c6147c(ppcVar10,&pcStack_1d0,puVar7 + 8,puVar6,6);
            lVar22 = lStack_1a8;
            UNRECOVERED_JUMPTABLE_00 = pcStack_1b0;
            if ((((ulong)ppcVar10 & 1) != 0) && (lStack_1a8 != 0)) {
              puVar9 = puVar11;
              func_0x000107c61558();
              puVar12 = puVar11;
              if (((ulong)puVar9 & 1) == 0) {
                puVar12 = (undefined *)0x0;
                func_0x0001000d182c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
              }
              uVar1 = *(ulong *)(puVar12 + 0x10);
              puVar11 = puVar12;
              if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
                puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
                func_0x0001000d182c(puVar11,uVar1 + 1,1,puVar12);
              }
              *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
              *(code **)(puVar11 + uVar1 * 0x10 + 0x20) = UNRECOVERED_JUMPTABLE_00;
              *(long *)(puVar11 + uVar1 * 0x10 + 0x28) = lVar22;
            }
            lVar19 = lVar19 + -1;
            lVar23 = lVar23 + 0x20;
          } while (lVar19 != 0);
          func_0x000107c6142c(lVar20);
        }
        FUN_101e90128(puVar11);
        func_0x000107c6142c(puVar11);
        lVar23 = lVar24;
        func_0x000107c4d084();
        func_0x000107c61180();
        lVar19 = lStack_178;
        if (lVar23 == 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdb8);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        lStack_1c8 = lStack_178;
        pcStack_1d0 = UNRECOVERED_JUMPTABLE;
        func_0x000107c61434(lStack_178);
        ppcVar10 = &pcStack_1d0;
        func_0x000107c6061c(ppcVar10,PTR___sSSN_11034da80);
        lVar20 = lVar23;
        func_0x000107c3ac74();
        func_0x000107c61180();
        func_0x000107c61170(lVar23);
        func_0x000107c615e8(ppcVar10);
        if (lVar20 == 0) {
          lStack_1c8 = 0;
          pcStack_1d0 = (code *)0x0;
          lStack_1b8 = 0;
          uStack_1c0 = 0;
        }
        else {
          func_0x000107c60234(&pcStack_1d0,lVar20);
          func_0x000107c615e8(lVar20);
        }
        puStack_198 = (undefined8 *)lStack_1c8;
        pcStack_1a0 = pcStack_1d0;
        lStack_188 = lStack_1b8;
        uStack_190 = uStack_1c0;
        if (lStack_1b8 == 0) {
          func_0x00010006e7f4(&pcStack_1a0);
        }
        else {
          uVar8 = 0;
          FUN_10196014c(0);
          ppcVar10 = &pcStack_1b0;
          ppcVar17 = &pcStack_1a0;
          func_0x000107c6147c(ppcVar10,ppcVar17,puVar7 + 8,uVar8,6);
          if (((ulong)ppcVar10 & 1) != 0) {
            UNRECOVERED_JUMPTABLE_00 = pcStack_1b0;
            func_0x000107c40488();
            func_0x000107c61180();
            if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
              UNRECOVERED_JUMPTABLE_00 = (code *)0xe300000000000000;
              uVar8 = 0x6c696e;
            }
            else {
              UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
              func_0x000107c5ee30();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
              uVar8 = 0;
              UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
              func_0x000107c5ee24(0,UNRECOVERED_JUMPTABLE,ppcVar17);
              func_0x00010006c090(UNRECOVERED_JUMPTABLE,ppcVar17);
            }
            UNRECOVERED_JUMPTABLE = pcStack_1b0;
            func_0x000107c5d918();
            func_0x000107c61180();
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
              UNRECOVERED_JUMPTABLE = (code *)0x0;
            }
            else {
              pcStack_1a0 = (code *)0x0;
              ppcVar17 = &pcStack_1a0;
              func_0x000107c5f9e4();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE);
              UNRECOVERED_JUMPTABLE = pcStack_1a0;
            }
            pcVar13 = pcStack_1b0;
            func_0x000107c4d088();
            func_0x000107c61180();
            if (pcVar13 != (code *)0x0) {
              pcVar14 = pcVar13;
              func_0x000107c5faec();
              func_0x000107c61170(pcVar13);
              FUN_101e90228(pcVar14,ppcVar17,uVar8,UNRECOVERED_JUMPTABLE_00,UNRECOVERED_JUMPTABLE);
              func_0x000107c61170(lVar24);
              func_0x000107c6142c(UNRECOVERED_JUMPTABLE_00);
              func_0x000107c6142c(ppcVar17);
              func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
              return pcStack_1b0;
            }
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdbc);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
        }
        pcStack_1a0 = (code *)0xd000000000000019;
        puStack_198 = (undefined8 *)0x800000010f017050;
        func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
        func_0x000107c5fb78(UNRECOVERED_JUMPTABLE,lVar19);
        puVar25 = puStack_198;
        func_0x000107c6142c();
        FUN_101e8f380();
        UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_110491da8;
        func_0x000107c613f8(&UNK_110491da8,puVar25,0,0);
        *puVar25 = 7;
        func_0x000107c61654();
        func_0x000107c61170(lVar24);
      }
      return UNRECOVERED_JUMPTABLE_00;
    }
    plVar4[6] = lVar19;
    plVar4[7] = lVar22;
    plVar4[4] = lVar23;
    plVar4[5] = lVar24;
    UNRECOVERED_JUMPTABLE_00 = FUN_101e8cdd8;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return UNRECOVERED_JUMPTABLE_00;
}



/* Entry: 101e8e370; end: 101e8e3ab;  */

void FUN_101e8e370(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e8e3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e8e3ac; end: 101e8f37f;  */

void FUN_101e8e3ac(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,
                  undefined8 param_5,byte param_6)

{
  ulong uVar1;
  code *pcVar2;
  byte *pbVar3;
  byte **ppbVar4;
  undefined8 uVar5;
  byte **ppbVar6;
  byte **ppbVar7;
  byte **ppbVar8;
  byte *pbVar9;
  byte **ppbVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte **ppbVar15;
  byte **ppbVar16;
  uint uVar17;
  byte *pbVar18;
  uint uStack_dc;
  byte *pbStack_d8;
  byte *pbStack_b0;
  byte **ppbStack_a8;
  byte *pbStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  byte *pbStack_80;
  byte **ppbStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c5d918();
  func_0x000107c61180();
  if (param_3 == 0) {
    pbStack_80 = (byte *)0xd000000000000016;
    ppbStack_78 = (byte **)0x800000010f016fc0;
    func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
    func_0x000107c5fb78(param_1,param_2);
    ppbVar15 = ppbStack_78;
    func_0x000107c6142c();
    FUN_101e8f380();
    func_0x000107c613f8(&UNK_110491da8,ppbVar15,0,0);
    *ppbVar15 = (byte *)0x8;
    func_0x000107c61654();
    return;
  }
  pbStack_a0 = (byte *)0x616e5f7475706e69;
  uStack_98 = 0xea0000000000656d;
  ppbVar15 = &pbStack_a0;
  func_0x000107c6061c(ppbVar15,PTR___sSSN_11034da80);
  lVar12 = param_3;
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(ppbVar15);
  if (lVar12 == 0) {
    uStack_98 = 0;
    pbStack_a0 = (byte *)0x0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&pbStack_a0,lVar12);
    func_0x000107c615e8(lVar12);
  }
  ppbStack_78 = (byte **)uStack_98;
  pbStack_80 = pbStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&pbStack_80);
  }
  else {
    ppbVar15 = &pbStack_b0;
    func_0x000107c6147c(ppbVar15,&pbStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    ppbVar4 = ppbStack_a8;
    pbVar3 = pbStack_b0;
    if (((ulong)ppbVar15 & 1) != 0) {
      uVar1 = (ulong)pbStack_b0 & 0xffffffffffff;
      if (((ulong)ppbStack_a8 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)ppbStack_a8 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        pbStack_a0 = (byte *)0x6e5f74757074756f;
        uStack_98 = 0xeb00000000656d61;
        ppbVar15 = &pbStack_a0;
        ppbVar6 = (byte **)PTR___sSSN_11034da80;
        func_0x000107c6061c(ppbVar15);
        lVar12 = param_3;
        func_0x000107c3ac74();
        func_0x000107c61180();
        func_0x000107c615e8(ppbVar15);
        if (lVar12 == 0) {
          uStack_98 = 0;
          pbStack_a0 = (byte *)0x0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          func_0x000107c60234(&pbStack_a0,lVar12);
          func_0x000107c615e8(lVar12);
        }
        ppbStack_78 = (byte **)uStack_98;
        pbStack_80 = pbStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          func_0x000107c6142c(ppbVar4);
          func_0x00010006e7f4(&pbStack_80);
LAB_101e8e788:
          pbVar14 = (byte *)0xa;
          pbVar3 = (byte *)0xa;
        }
        else {
          ppbVar15 = &pbStack_b0;
          ppbVar6 = &pbStack_80;
          func_0x000107c6147c(ppbVar15,ppbVar6,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          ppbVar16 = ppbStack_a8;
          pbVar14 = pbStack_b0;
          if (((ulong)ppbVar15 & 1) == 0) {
LAB_101e8e784:
            func_0x000107c6142c(ppbVar4);
            goto LAB_101e8e788;
          }
          uVar1 = (ulong)pbStack_b0 & 0xffffffffffff;
          if (((ulong)ppbStack_a8 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)ppbStack_a8 >> 0x38 & 0xf;
          }
          if (uVar1 == 0) {
            func_0x000107c6142c(ppbVar4);
            ppbVar4 = ppbStack_a8;
            goto LAB_101e8e784;
          }
          pbStack_a0 = (byte *)0x61665f656c616373;
          uStack_98 = 0xec000000726f7463;
          ppbVar15 = &pbStack_a0;
          ppbVar6 = (byte **)PTR___sSSN_11034da80;
          func_0x000107c6061c(ppbVar15);
          lVar12 = param_3;
          func_0x000107c3ac74();
          func_0x000107c61180();
          func_0x000107c615e8(ppbVar15);
          if (lVar12 == 0) {
            uStack_98 = 0;
            pbStack_a0 = (byte *)0x0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            func_0x000107c60234(&pbStack_a0,lVar12);
            func_0x000107c615e8(lVar12);
          }
          ppbStack_78 = (byte **)uStack_98;
          pbStack_80 = pbStack_a0;
          lStack_68 = lStack_88;
          uStack_70 = uStack_90;
          if (lStack_88 == 0) {
            func_0x000107c6142c(ppbVar16);
            func_0x000107c6142c(ppbVar4);
            func_0x00010006e7f4(&pbStack_80);
LAB_101e8e920:
            pbVar14 = (byte *)0xb;
            pbVar3 = (byte *)0xb;
          }
          else {
            ppbVar15 = &pbStack_b0;
            ppbVar6 = &pbStack_80;
            func_0x000107c6147c(ppbVar15,ppbVar6,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
            ppbVar8 = ppbStack_a8;
            if (((ulong)ppbVar15 & 1) == 0) {
              func_0x000107c6142c(ppbVar16);
LAB_101e8e91c:
              func_0x000107c6142c(ppbVar4);
              goto LAB_101e8e920;
            }
            ppbVar6 = (byte **)((ulong)pbStack_b0 & 0xffffffffffff);
            ppbVar7 = (byte **)((ulong)ppbStack_a8 >> 0x38 & 0xf);
            ppbVar15 = ppbVar6;
            if (((ulong)ppbStack_a8 & 0x2000000000000000) != 0) {
              ppbVar15 = ppbVar7;
            }
            if (ppbVar15 == (byte **)0x0) {
              func_0x000107c6142c(ppbVar4);
              func_0x000107c6142c(ppbVar16);
              ppbVar4 = ppbStack_a8;
              goto LAB_101e8e91c;
            }
            if (((ulong)ppbStack_a8 >> 0x3c & 1) == 0) {
              if (((ulong)ppbStack_a8 >> 0x3d & 1) == 0) {
                if (((ulong)pbStack_b0 >> 0x3c & 1) == 0) {
                  pbVar9 = pbStack_b0;
                  ppbVar6 = ppbStack_a8;
                  func_0x000107c60358();
                }
                else {
                  pbVar9 = (byte *)(((ulong)ppbStack_a8 & 0xfffffffffffffff) + 0x20);
                }
                if (*pbVar9 == 0x2b) {
                  if ((long)ppbVar6 < 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f30c);
                    (*pcVar2)();
                  }
                  lVar12 = (long)ppbVar6 + -1;
                  if (lVar12 == 0) goto LAB_101e8eae8;
                  pbVar18 = (byte *)0x0;
                  do {
                    pbVar9 = pbVar9 + 1;
                    if (((9 < *pbVar9 - 0x30) ||
                        (lVar13 = (long)pbVar18 * 10,
                        SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                       (uVar1 = (ulong)(byte)(*pbVar9 - 0x30), pbVar18 = (byte *)(lVar13 + uVar1),
                       SCARRY8(lVar13,uVar1))) goto LAB_101e8eae8;
                    ppbVar15 = (byte **)0x0;
                    lVar12 = lVar12 + -1;
                  } while (lVar12 != 0);
                }
                else if (*pbVar9 == 0x2d) {
                  if ((long)ppbVar6 < 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f304);
                    (*pcVar2)();
                  }
                  lVar12 = (long)ppbVar6 + -1;
                  if (lVar12 == 0) {
LAB_101e8eae8:
                    pbVar18 = (byte *)0x0;
                    ppbVar15 = (byte **)0x1;
                  }
                  else {
                    pbVar18 = (byte *)0x0;
                    do {
                      pbVar9 = pbVar9 + 1;
                      if (((9 < *pbVar9 - 0x30) ||
                          (lVar13 = (long)pbVar18 * 10,
                          SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                         (uVar1 = (ulong)(byte)(*pbVar9 - 0x30), pbVar18 = (byte *)(lVar13 - uVar1),
                         SBORROW8(lVar13,uVar1))) goto LAB_101e8eae8;
                      ppbVar15 = (byte **)0x0;
                      lVar12 = lVar12 + -1;
                    } while (lVar12 != 0);
                  }
                }
                else {
                  if (ppbVar6 == (byte **)0x0) goto LAB_101e8eae8;
                  if (pbVar9 == (byte *)0x0) {
                    ppbVar15 = (byte **)0x0;
                    pbVar18 = (byte *)0x0;
                  }
                  else {
                    pbVar18 = (byte *)0x0;
                    do {
                      if (((9 < *pbVar9 - 0x30) ||
                          (lVar12 = (long)pbVar18 * 10,
                          SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                         (uVar1 = (ulong)(byte)(*pbVar9 - 0x30), pbVar18 = (byte *)(lVar12 + uVar1),
                         SCARRY8(lVar12,uVar1))) goto LAB_101e8eae8;
                      ppbVar15 = (byte **)0x0;
                      ppbVar6 = (byte **)((long)ppbVar6 + -1);
                      pbVar9 = pbVar9 + 1;
                    } while (ppbVar6 != (byte **)0x0);
                  }
                }
              }
              else {
                pbStack_80 = pbStack_b0;
                ppbStack_78 = (byte **)((ulong)ppbStack_a8 & 0xffffffffffffff);
                uVar17 = (uint)pbStack_b0 & 0xff;
                if (uVar17 == 0x2b) {
                  if (ppbVar7 == (byte **)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f310);
                    (*pcVar2)();
                  }
                  lVar12 = (long)ppbVar7 + -1;
                  if (lVar12 == 0) goto LAB_101e8eae8;
                  pbVar18 = (byte *)0x0;
                  pbVar9 = (byte *)((ulong)&pbStack_80 | 1);
                  do {
                    if (((9 < *pbVar9 - 0x30) ||
                        (lVar13 = (long)pbVar18 * 10,
                        SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                       (uVar1 = (ulong)(byte)(*pbVar9 - 0x30), pbVar18 = (byte *)(lVar13 + uVar1),
                       SCARRY8(lVar13,uVar1))) goto LAB_101e8eae8;
                    ppbVar15 = (byte **)0x0;
                    lVar12 = lVar12 + -1;
                    pbVar9 = pbVar9 + 1;
                  } while (lVar12 != 0);
                }
                else if (uVar17 == 0x2d) {
                  if (ppbVar7 == (byte **)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f308);
                    (*pcVar2)();
                  }
                  lVar12 = (long)ppbVar7 + -1;
                  if (lVar12 == 0) goto LAB_101e8eae8;
                  pbVar18 = (byte *)0x0;
                  pbVar9 = (byte *)((ulong)&pbStack_80 | 1);
                  do {
                    if (((9 < *pbVar9 - 0x30) ||
                        (lVar13 = (long)pbVar18 * 10,
                        SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                       (uVar1 = (ulong)(byte)(*pbVar9 - 0x30), pbVar18 = (byte *)(lVar13 - uVar1),
                       SBORROW8(lVar13,uVar1))) goto LAB_101e8eae8;
                    ppbVar15 = (byte **)0x0;
                    lVar12 = lVar12 + -1;
                    pbVar9 = pbVar9 + 1;
                  } while (lVar12 != 0);
                }
                else {
                  if (ppbVar7 == (byte **)0x0) goto LAB_101e8eae8;
                  pbVar18 = (byte *)0x0;
                  ppbVar10 = &pbStack_80;
                  do {
                    if (((9 < *(byte *)ppbVar10 - 0x30) ||
                        (lVar12 = (long)pbVar18 * 10,
                        SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                       (uVar1 = (ulong)(byte)(*(byte *)ppbVar10 - 0x30),
                       pbVar18 = (byte *)(lVar12 + uVar1), SCARRY8(lVar12,uVar1)))
                    goto LAB_101e8eae8;
                    ppbVar15 = (byte **)0x0;
                    ppbVar7 = (byte **)((long)ppbVar7 + -1);
                    ppbVar10 = (byte **)((long)ppbVar10 + 1);
                  } while (ppbVar7 != (byte **)0x0);
                }
              }
            }
            else {
              pbVar18 = pbStack_b0;
              ppbVar6 = ppbStack_a8;
              func_0x000100edba6c(pbStack_b0,ppbStack_a8,10);
              ppbVar15 = ppbVar6;
            }
            func_0x000107c6142c(ppbVar8);
            if (((uint)ppbVar15 & 0xff) == 1) {
              func_0x000107c6142c(ppbVar4);
              func_0x000107c6142c(ppbVar16);
              pbVar14 = (byte *)0xc;
              pbVar3 = (byte *)0xc;
            }
            else {
              pbStack_a0 = (byte *)0xd000000000000011;
              uStack_98 = 0x800000010f017010;
              ppbVar15 = &pbStack_a0;
              ppbVar6 = (byte **)PTR___sSSN_11034da80;
              func_0x000107c6061c(ppbVar15);
              lVar12 = param_3;
              func_0x000107c3ac74();
              func_0x000107c61180();
              func_0x000107c615e8(ppbVar15);
              if (lVar12 == 0) {
                uStack_98 = 0;
                pbStack_a0 = (byte *)0x0;
                lStack_88 = 0;
                uStack_90 = 0;
              }
              else {
                func_0x000107c60234(&pbStack_a0,lVar12);
                func_0x000107c615e8(lVar12);
              }
              ppbStack_78 = (byte **)uStack_98;
              pbStack_80 = pbStack_a0;
              lStack_68 = lStack_88;
              uStack_70 = uStack_90;
              if (lStack_88 == 0) {
LAB_101e8ec7c:
                pbStack_80 = pbStack_a0;
                ppbStack_78 = (byte **)uStack_98;
                uStack_70 = uStack_90;
                lStack_68 = lStack_88;
                func_0x000107c6142c(ppbVar16);
                func_0x000107c6142c(ppbVar4);
                func_0x00010006e7f4(&pbStack_80);
              }
              else {
                ppbVar15 = &pbStack_b0;
                ppbVar6 = &pbStack_80;
                func_0x000107c6147c(ppbVar15,ppbVar6,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6
                                   );
                ppbVar8 = ppbStack_a8;
                if (((ulong)ppbVar15 & 1) == 0) {
LAB_101e8ec98:
                  func_0x000107c6142c(ppbVar16);
                  ppbStack_a8 = ppbVar4;
                }
                else {
                  ppbVar6 = (byte **)((ulong)pbStack_b0 & 0xffffffffffff);
                  ppbVar7 = (byte **)((ulong)ppbStack_a8 >> 0x38 & 0xf);
                  ppbVar15 = ppbVar6;
                  if (((ulong)ppbStack_a8 & 0x2000000000000000) != 0) {
                    ppbVar15 = ppbVar7;
                  }
                  if (ppbVar15 == (byte **)0x0) {
                    func_0x000107c6142c(ppbVar4);
                    func_0x000107c6142c(ppbVar16);
                  }
                  else {
                    if (((ulong)ppbStack_a8 >> 0x3c & 1) == 0) {
                      if (((ulong)ppbStack_a8 >> 0x3d & 1) == 0) {
                        if (((ulong)pbStack_b0 >> 0x3c & 1) == 0) {
                          pbVar9 = pbStack_b0;
                          ppbVar6 = ppbStack_a8;
                          func_0x000107c60358();
                        }
                        else {
                          pbVar9 = (byte *)(((ulong)ppbStack_a8 & 0xfffffffffffffff) + 0x20);
                        }
                        if (*pbVar9 == 0x2b) {
                          if ((long)ppbVar6 < 1) {
                    /* WARNING: Does not return */
                            pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f348);
                            (*pcVar2)();
                          }
                          lVar12 = (long)ppbVar6 + -1;
                          if (lVar12 == 0) goto LAB_101e8f0e8;
                          pbStack_d8 = (byte *)0x0;
                          do {
                            pbVar9 = pbVar9 + 1;
                            if (9 < *pbVar9 - 0x30) goto LAB_101e8eebc;
                            lVar13 = (long)pbStack_d8 * 10;
                            if ((SUB168(SEXT816((long)pbStack_d8) * SEXT816(10),8) != lVar13 >> 0x3f
                                ) || (uVar1 = (ulong)(byte)(*pbVar9 - 0x30),
                                     pbStack_d8 = (byte *)(lVar13 + uVar1), SCARRY8(lVar13,uVar1)))
                            goto LAB_101e8f0e8;
                            uVar17 = 0;
                            lVar12 = lVar12 + -1;
                          } while (lVar12 != 0);
                        }
                        else if (*pbVar9 == 0x2d) {
                          if ((long)ppbVar6 < 1) {
                    /* WARNING: Does not return */
                            pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f340);
                            (*pcVar2)();
                          }
                          lVar12 = (long)ppbVar6 + -1;
                          if (lVar12 == 0) {
LAB_101e8f0e8:
                            pbStack_d8 = (byte *)0x0;
                            uVar17 = 1;
                          }
                          else {
                            pbStack_d8 = (byte *)0x0;
                            do {
                              pbVar9 = pbVar9 + 1;
                              if (9 < *pbVar9 - 0x30) goto LAB_101e8eebc;
                              lVar13 = (long)pbStack_d8 * 10;
                              if ((SUB168(SEXT816((long)pbStack_d8) * SEXT816(10),8) !=
                                   lVar13 >> 0x3f) ||
                                 (uVar1 = (ulong)(byte)(*pbVar9 - 0x30),
                                 pbStack_d8 = (byte *)(lVar13 - uVar1), SBORROW8(lVar13,uVar1)))
                              goto LAB_101e8f0e8;
                              uVar17 = 0;
                              lVar12 = lVar12 + -1;
                            } while (lVar12 != 0);
                          }
                        }
                        else {
                          if (ppbVar6 == (byte **)0x0) goto LAB_101e8f0e8;
                          if (pbVar9 == (byte *)0x0) {
                            uVar17 = 0;
                            pbStack_d8 = (byte *)0x0;
                          }
                          else {
                            pbStack_d8 = (byte *)0x0;
                            do {
                              if (9 < *pbVar9 - 0x30) goto LAB_101e8eebc;
                              lVar12 = (long)pbStack_d8 * 10;
                              if ((SUB168(SEXT816((long)pbStack_d8) * SEXT816(10),8) !=
                                   lVar12 >> 0x3f) ||
                                 (uVar1 = (ulong)(byte)(*pbVar9 - 0x30),
                                 pbStack_d8 = (byte *)(lVar12 + uVar1), SCARRY8(lVar12,uVar1)))
                              goto LAB_101e8f0e8;
                              uVar17 = 0;
                              ppbVar6 = (byte **)((long)ppbVar6 + -1);
                              pbVar9 = pbVar9 + 1;
                            } while (ppbVar6 != (byte **)0x0);
                          }
                        }
                      }
                      else {
                        pbStack_80 = pbStack_b0;
                        ppbStack_78 = (byte **)((ulong)ppbStack_a8 & 0xffffffffffffff);
                        uVar17 = (uint)pbStack_b0 & 0xff;
                        if (uVar17 == 0x2b) {
                          if (ppbVar7 == (byte **)0x0) {
                    /* WARNING: Does not return */
                            pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f34c);
                            (*pcVar2)();
                          }
                          lVar12 = (long)ppbVar7 + -1;
                          if (lVar12 == 0) goto LAB_101e8f0e8;
                          pbStack_d8 = (byte *)0x0;
                          pbVar9 = (byte *)((ulong)&pbStack_80 | 1);
                          do {
                            if (9 < *pbVar9 - 0x30) goto LAB_101e8eebc;
                            lVar13 = (long)pbStack_d8 * 10;
                            if ((SUB168(SEXT816((long)pbStack_d8) * SEXT816(10),8) != lVar13 >> 0x3f
                                ) || (uVar1 = (ulong)(byte)(*pbVar9 - 0x30),
                                     pbStack_d8 = (byte *)(lVar13 + uVar1), SCARRY8(lVar13,uVar1)))
                            goto LAB_101e8f0e8;
                            uVar17 = 0;
                            lVar12 = lVar12 + -1;
                            pbVar9 = pbVar9 + 1;
                          } while (lVar12 != 0);
                        }
                        else if (uVar17 == 0x2d) {
                          if (ppbVar7 == (byte **)0x0) {
                    /* WARNING: Does not return */
                            pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f344);
                            (*pcVar2)();
                          }
                          lVar12 = (long)ppbVar7 + -1;
                          if (lVar12 == 0) goto LAB_101e8f0e8;
                          pbStack_d8 = (byte *)0x0;
                          pbVar9 = (byte *)((ulong)&pbStack_80 | 1);
                          do {
                            if (9 < *pbVar9 - 0x30) goto LAB_101e8eebc;
                            lVar13 = (long)pbStack_d8 * 10;
                            if ((SUB168(SEXT816((long)pbStack_d8) * SEXT816(10),8) != lVar13 >> 0x3f
                                ) || (uVar1 = (ulong)(byte)(*pbVar9 - 0x30),
                                     pbStack_d8 = (byte *)(lVar13 - uVar1), SBORROW8(lVar13,uVar1)))
                            goto LAB_101e8f0e8;
                            uVar17 = 0;
                            lVar12 = lVar12 + -1;
                            pbVar9 = pbVar9 + 1;
                          } while (lVar12 != 0);
                        }
                        else if (ppbVar7 == (byte **)0x0) {
LAB_101e8eebc:
                          pbStack_d8 = (byte *)0x0;
                          uVar17 = 1;
                        }
                        else {
                          pbStack_d8 = (byte *)0x0;
                          ppbVar15 = &pbStack_80;
                          do {
                            if (9 < *(byte *)ppbVar15 - 0x30) goto LAB_101e8eebc;
                            lVar12 = (long)pbStack_d8 * 10;
                            if ((SUB168(SEXT816((long)pbStack_d8) * SEXT816(10),8) != lVar12 >> 0x3f
                                ) || (uVar1 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
                                     pbStack_d8 = (byte *)(lVar12 + uVar1), SCARRY8(lVar12,uVar1)))
                            goto LAB_101e8f0e8;
                            uVar17 = 0;
                            ppbVar7 = (byte **)((long)ppbVar7 + -1);
                            ppbVar15 = (byte **)((long)ppbVar15 + 1);
                          } while (ppbVar7 != (byte **)0x0);
                        }
                      }
                    }
                    else {
                      pbStack_d8 = pbStack_b0;
                      ppbVar6 = ppbStack_a8;
                      func_0x000100edba6c(pbStack_b0,ppbStack_a8,10);
                      uVar17 = (uint)ppbVar6;
                    }
                    func_0x000107c6142c(ppbVar8);
                    if ((uVar17 & 0xff) == 1) {
LAB_101e8eee4:
                      func_0x000107c6142c(ppbVar4);
                      ppbStack_a8 = ppbVar16;
                    }
                    else {
                      pbStack_a0 = (byte *)0xd000000000000012;
                      uStack_98 = 0x800000010f017030;
                      ppbVar15 = &pbStack_a0;
                      ppbVar6 = (byte **)PTR___sSSN_11034da80;
                      func_0x000107c6061c(ppbVar15);
                      lVar12 = param_3;
                      func_0x000107c3ac74();
                      func_0x000107c61180();
                      func_0x000107c615e8(ppbVar15);
                      if (lVar12 == 0) {
                        uStack_98 = 0;
                        pbStack_a0 = (byte *)0x0;
                        lStack_88 = 0;
                        uStack_90 = 0;
                      }
                      else {
                        func_0x000107c60234(&pbStack_a0,lVar12);
                        func_0x000107c615e8(lVar12);
                      }
                      ppbStack_78 = (byte **)uStack_98;
                      pbStack_80 = pbStack_a0;
                      lStack_68 = lStack_88;
                      uStack_70 = uStack_90;
                      if (lStack_88 == 0) goto LAB_101e8ec7c;
                      ppbVar15 = &pbStack_b0;
                      ppbVar6 = &pbStack_80;
                      func_0x000107c6147c(ppbVar15,ppbVar6,PTR___sypN_11034f1a8 + 8,
                                          PTR___sSSN_11034da80,6);
                      if (((ulong)ppbVar15 & 1) == 0) goto LAB_101e8ec98;
                      ppbVar6 = (byte **)((ulong)pbStack_b0 & 0xffffffffffff);
                      ppbVar8 = (byte **)((ulong)ppbStack_a8 >> 0x38 & 0xf);
                      ppbVar15 = ppbVar6;
                      if (((ulong)ppbStack_a8 & 0x2000000000000000) != 0) {
                        ppbVar15 = ppbVar8;
                      }
                      if (ppbVar15 == (byte **)0x0) {
                        func_0x000107c6142c(ppbVar4);
                        ppbVar4 = ppbVar16;
                        ppbVar16 = ppbStack_a8;
                        goto LAB_101e8eee4;
                      }
                      if (((ulong)ppbStack_a8 >> 0x3c & 1) == 0) {
                        if (((ulong)ppbStack_a8 >> 0x3d & 1) == 0) {
                          if (((ulong)pbStack_b0 >> 0x3c & 1) == 0) {
                            ppbVar6 = ppbStack_a8;
                            func_0x000107c60358();
                          }
                          else {
                            pbStack_b0 = (byte *)(((ulong)ppbStack_a8 & 0xfffffffffffffff) + 0x20);
                          }
                          if (*pbStack_b0 == 0x2b) {
                            if ((long)ppbVar6 < 1) {
                    /* WARNING: Does not return */
                              pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f37c);
                              (*pcVar2)();
                            }
                            lVar12 = (long)ppbVar6 + -1;
                            if (lVar12 == 0) goto LAB_101e8f240;
                            pbVar9 = (byte *)0x0;
                            do {
                              pbStack_b0 = pbStack_b0 + 1;
                              if (((9 < *pbStack_b0 - 0x30) ||
                                  (lVar13 = (long)pbVar9 * 10,
                                  SUB168(SEXT816((long)pbVar9) * SEXT816(10),8) != lVar13 >> 0x3f))
                                 || (uVar1 = (ulong)(byte)(*pbStack_b0 - 0x30),
                                    pbVar9 = (byte *)(lVar13 + uVar1), SCARRY8(lVar13,uVar1)))
                              goto LAB_101e8f240;
                              uStack_dc = 0;
                              lVar12 = lVar12 + -1;
                            } while (lVar12 != 0);
                          }
                          else if (*pbStack_b0 == 0x2d) {
                            if ((long)ppbVar6 < 1) {
                    /* WARNING: Does not return */
                              pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f374);
                              (*pcVar2)();
                            }
                            lVar12 = (long)ppbVar6 + -1;
                            if (lVar12 == 0) {
LAB_101e8f240:
                              uStack_dc = 1;
                              pbVar9 = (byte *)0x0;
                            }
                            else {
                              pbVar9 = (byte *)0x0;
                              do {
                                pbStack_b0 = pbStack_b0 + 1;
                                if (((9 < *pbStack_b0 - 0x30) ||
                                    (lVar13 = (long)pbVar9 * 10,
                                    SUB168(SEXT816((long)pbVar9) * SEXT816(10),8) != lVar13 >> 0x3f)
                                    ) || (uVar1 = (ulong)(byte)(*pbStack_b0 - 0x30),
                                         pbVar9 = (byte *)(lVar13 - uVar1), SBORROW8(lVar13,uVar1)))
                                goto LAB_101e8f240;
                                uStack_dc = 0;
                                lVar12 = lVar12 + -1;
                              } while (lVar12 != 0);
                            }
                          }
                          else {
                            if (ppbVar6 == (byte **)0x0) goto LAB_101e8f240;
                            pbVar9 = (byte *)0x0;
                            if (pbStack_b0 == (byte *)0x0) {
                              uStack_dc = 0;
                            }
                            else {
                              do {
                                if (((9 < *pbStack_b0 - 0x30) ||
                                    (lVar12 = (long)pbVar9 * 10,
                                    SUB168(SEXT816((long)pbVar9) * SEXT816(10),8) != lVar12 >> 0x3f)
                                    ) || (uVar1 = (ulong)(byte)(*pbStack_b0 - 0x30),
                                         pbVar9 = (byte *)(lVar12 + uVar1), SCARRY8(lVar12,uVar1)))
                                goto LAB_101e8f240;
                                uStack_dc = 0;
                                ppbVar6 = (byte **)((long)ppbVar6 + -1);
                                pbStack_b0 = pbStack_b0 + 1;
                              } while (ppbVar6 != (byte **)0x0);
                            }
                          }
                        }
                        else {
                          pbStack_80 = pbStack_b0;
                          ppbStack_78 = (byte **)((ulong)ppbStack_a8 & 0xffffffffffffff);
                          uVar17 = (uint)pbStack_b0 & 0xff;
                          if (uVar17 == 0x2b) {
                            if (ppbVar8 == (byte **)0x0) {
                    /* WARNING: Does not return */
                              pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f380);
                              (*pcVar2)();
                            }
                            lVar12 = (long)ppbVar8 + -1;
                            if (lVar12 == 0) goto LAB_101e8f240;
                            pbVar9 = (byte *)0x0;
                            pbVar11 = (byte *)((ulong)&pbStack_80 | 1);
                            do {
                              if (((9 < *pbVar11 - 0x30) ||
                                  (lVar13 = (long)pbVar9 * 10,
                                  SUB168(SEXT816((long)pbVar9) * SEXT816(10),8) != lVar13 >> 0x3f))
                                 || (uVar1 = (ulong)(byte)(*pbVar11 - 0x30),
                                    pbVar9 = (byte *)(lVar13 + uVar1), SCARRY8(lVar13,uVar1)))
                              goto LAB_101e8f240;
                              uStack_dc = 0;
                              lVar12 = lVar12 + -1;
                              pbVar11 = pbVar11 + 1;
                            } while (lVar12 != 0);
                          }
                          else if (uVar17 == 0x2d) {
                            if (ppbVar8 == (byte **)0x0) {
                    /* WARNING: Does not return */
                              pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8f378);
                              (*pcVar2)();
                            }
                            lVar12 = (long)ppbVar8 + -1;
                            if (lVar12 == 0) goto LAB_101e8f240;
                            pbVar9 = (byte *)0x0;
                            pbVar11 = (byte *)((ulong)&pbStack_80 | 1);
                            do {
                              if (((9 < *pbVar11 - 0x30) ||
                                  (lVar13 = (long)pbVar9 * 10,
                                  SUB168(SEXT816((long)pbVar9) * SEXT816(10),8) != lVar13 >> 0x3f))
                                 || (uVar1 = (ulong)(byte)(*pbVar11 - 0x30),
                                    pbVar9 = (byte *)(lVar13 - uVar1), SBORROW8(lVar13,uVar1)))
                              goto LAB_101e8f240;
                              uStack_dc = 0;
                              lVar12 = lVar12 + -1;
                              pbVar11 = pbVar11 + 1;
                            } while (lVar12 != 0);
                          }
                          else {
                            if (ppbVar8 == (byte **)0x0) goto LAB_101e8f240;
                            pbVar9 = (byte *)0x0;
                            ppbVar15 = &pbStack_80;
                            do {
                              if (((9 < *(byte *)ppbVar15 - 0x30) ||
                                  (lVar12 = (long)pbVar9 * 10,
                                  SUB168(SEXT816((long)pbVar9) * SEXT816(10),8) != lVar12 >> 0x3f))
                                 || (uVar1 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
                                    pbVar9 = (byte *)(lVar12 + uVar1), SCARRY8(lVar12,uVar1)))
                              goto LAB_101e8f240;
                              uStack_dc = 0;
                              ppbVar8 = (byte **)((long)ppbVar8 + -1);
                              ppbVar15 = (byte **)((long)ppbVar15 + 1);
                            } while (ppbVar8 != (byte **)0x0);
                          }
                        }
                      }
                      else {
                        ppbVar6 = ppbStack_a8;
                        func_0x000100edba6c(pbStack_b0,ppbStack_a8,10);
                        uStack_dc = (uint)ppbVar6;
                        pbVar9 = pbStack_b0;
                      }
                      func_0x000107c6142c(ppbStack_a8);
                      if ((uStack_dc & 0xff) != 1) {
                        func_0x000107c61170(param_3);
                        uVar5 = 0;
                        func_0x000101e96188(0);
                        func_0x000107c613fc();
                        FUN_101e92aa4(uVar5,pbVar3,ppbVar4,pbVar14,ppbVar16,pbVar18,pbStack_d8,
                                      pbVar9,param_4 & 1,param_5,param_6 & 1);
                        return;
                      }
                      func_0x000107c6142c(ppbVar4);
                      ppbStack_a8 = ppbVar16;
                    }
                  }
                }
                func_0x000107c6142c(ppbStack_a8);
              }
              pbVar14 = (byte *)0xd;
              pbVar3 = (byte *)0xd;
            }
          }
        }
        FUN_101e8fe80();
        pbStack_80 = pbVar3;
        ppbStack_78 = ppbVar6;
        func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
        func_0x000107c5fb78(param_1,param_2);
        ppbVar15 = ppbStack_78;
        func_0x000107c6142c();
        FUN_101e8f380();
        func_0x000107c613f8(&UNK_110491da8,ppbVar15,0,0);
        *ppbVar15 = pbVar14;
        goto LAB_101e8e65c;
      }
      func_0x000107c6142c();
    }
  }
  pbStack_80 = (byte *)0xd000000000000022;
  ppbStack_78 = (byte **)0x800000010f016fe0;
  func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
  func_0x000107c5fb78(param_1,param_2);
  ppbVar15 = ppbStack_78;
  func_0x000107c6142c();
  FUN_101e8f380();
  func_0x000107c613f8(&UNK_110491da8,ppbVar15,0,0);
  *ppbVar15 = (byte *)0x9;
LAB_101e8e65c:
  func_0x000107c61654();
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 101e8f380; end: 101e8f3bf;  */

void FUN_101e8f380(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1e568;
  func_0x000107c61520(&UNK_10da1e568,&UNK_110491da8);
  puRam0000000112e35000 = puVar1;
  return;
}



/* Entry: 101e8f3c0; end: 101e8f3fb;  */

void FUN_101e8f3c0(long param_1)

{
  if (param_1 - 1U < 0xd) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 101e8f3fc; end: 101e8f427;  */

void FUN_101e8f3fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e8f428; end: 101e8f43b;  */

void FUN_101e8f428(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar5 = param_1;
  func_0x0001000f11b0();
  if (!SBORROW8(lVar5,lVar1)) {
    func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61648();
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x20);
      func_0x000107c6157c(uVar7);
      func_0x000107c61574(lVar6);
      FUN_101e90860(uVar2,param_1,(lVar5 - lVar1) / 1000);
      func_0x000107c61574(uVar7);
    }
    *(bool *)*(undefined8 *)(*(long *)(lVar3 + 0x40) + 0x28) = param_1 == 0;
    func_0x000107c6144c(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101e8def8);
  (*pcVar4)();
}



/* Entry: 101e8f43c; end: 101e8f4c3;  */

long FUN_101e8f43c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = 0x58;
  func_0x000107c613fc();
  uVar4 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x18) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
  uVar4 = param_1[4];
  *(undefined8 *)(unaff_x20 + 0x38) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_1[6];
  puVar1 = PTR_PTR_1126c3450;
  func_0x000107c61168();
  func_0x000107c4b588();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5faec();
  func_0x000107c61170(puVar1);
  *(undefined **)(unaff_x20 + 0x48) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  return unaff_x20;
}



/* Entry: 101e8f4c4; end: 101e8f5a3;  */

/* WARNING: Removing unreachable block (ram,0x000101e8f700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e8f4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 unaff_x20;
  undefined8 uVar27;
  undefined8 uVar28;
  long unaff_x22;
  undefined8 uVar29;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(unaff_x22 + 0x30) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x71) = param_8;
  *(undefined1 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  lVar14 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar13 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar13;
  lVar14 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x48) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar14;
  uVar13 = *(long *)(lVar14 + 0x40) + 0xf;
  uVar15 = uVar13 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar15;
  uVar15 = uVar13 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar15;
  uVar13 = uVar13 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101e8f5a4,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar27 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar14 = *(long *)(unaff_x22 + 0x50);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c5edd0(uVar26,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar14 + 0x30))(uVar26,1,uVar27);
  if ((int)uVar26 == 1) {
    puVar16 = *(undefined8 **)(unaff_x22 + 0x40);
    func_0x0001000293e4();
    FUN_101e8f380();
    func_0x000107c613f8(&UNK_110491da8,puVar16,0,0);
    *puVar16 = 0;
    func_0x000107c61654();
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x40),
               *(undefined8 *)(unaff_x22 + 0x48));
    puVar17 = PTR__OBJC_CLASS___MLModel_1126ddfb0;
    func_0x000107c61168();
    puVar18 = puVar17;
    func_0x000107c5ed90();
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    func_0x000107c3fed8();
    func_0x000107c61180();
    func_0x000107c61170(puVar18);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x10);
    if (puVar17 != (undefined *)0x0) {
      uVar26 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x48);
      lVar14 = *(long *)(unaff_x22 + 0x50);
      func_0x000107c5edb4(uVar23,puVar17);
      func_0x000107c61174(uVar27);
      func_0x000107c61170(puVar17);
      FUN_101e8f9d4(0);
      (**(code **)(lVar14 + 0x10))(uVar26,uVar23,uVar29);
      FUN_101e8fa18();
      uVar27 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
      lVar1 = *(long *)(unaff_x22 + 0x50);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar10 = *(undefined1 *)(unaff_x22 + 0x71);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x30);
      lVar14 = *(long *)(unaff_x22 + 0x38);
      uVar11 = *(undefined1 *)(unaff_x22 + 0x70);
      plVar25 = *(long **)(unaff_x22 + 0x18);
      puVar17 = PTR_PTR_1126a96b0;
      func_0x000107c61168();
      func_0x000107c5e8d4();
      func_0x000107c61180();
      uVar20 = *(undefined8 *)(lVar14 + 0x10);
      uVar7 = *(undefined8 *)(lVar14 + 0x18);
      uVar2 = *(undefined8 *)(lVar14 + 0x20);
      uVar8 = *(undefined8 *)(lVar14 + 0x28);
      uVar3 = *(undefined8 *)(lVar14 + 0x30);
      uVar9 = *(undefined8 *)(lVar14 + 0x38);
      uVar28 = *(undefined8 *)(lVar14 + 0x40);
      uVar19 = 0;
      func_0x000101e96188(0);
      func_0x000107c613fc();
      FUN_101e92aa4(uVar19,uVar20,uVar7,uVar2,uVar8,uVar3,uVar9,uVar28,uVar11,uVar23,uVar10);
      lVar21 = 0;
      FUN_101e91d64();
      lVar22 = lVar21;
      func_0x000107c613fc();
      uVar23 = 0;
      func_0x00010006a340();
      *(undefined8 *)(lVar22 + 0x28) = 0;
      *(undefined8 *)(lVar22 + 0x20) = 0;
      *(undefined8 *)(lVar22 + 0x38) = 0;
      *(undefined8 *)(lVar22 + 0x30) = 0;
      *(undefined8 *)(lVar22 + 0x40) = 0;
      func_0x000107c613fc();
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar8);
      puVar18 = puVar17;
      func_0x000107c615f0();
      func_0x00010006a360();
      *(undefined **)(lVar22 + 0x48) = puVar18;
      *(undefined8 *)(lVar22 + 0x58) = 0;
      *(undefined8 *)(lVar22 + 0x50) = 0;
      *(undefined8 *)(lVar22 + 0x68) = 0;
      *(undefined8 *)(lVar22 + 0x60) = 0;
      *(undefined8 *)(lVar22 + 0x70) = 0;
      func_0x000107c613fc(uVar23,0x18,7);
      func_0x00010006a360();
      *(undefined8 *)(lVar22 + 0x78) = uVar23;
      lVar12 = _DAT_112e35280;
      lVar14 = 0x112e34ff8;
      func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
      (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar22 + lVar12,1,1,lVar14);
      *(undefined **)(lVar22 + 0x10) = puVar17;
      *(undefined8 *)(lVar22 + 0x18) = uVar20;
      plVar25[3] = lVar21;
      plVar25[4] = (long)&PTR_DAT_110491e80;
      func_0x000107c61170(uVar26);
      func_0x000107c615e8(puVar17);
      *plVar25 = lVar22;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar27,uVar6);
      (*UNRECOVERED_JUMPTABLE)(uVar4,uVar6);
      func_0x000107c615c0(uVar4);
      func_0x000107c615c0(uVar27);
      func_0x000107c615c0(uVar5);
      func_0x000107c615c0(uVar29);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      goto joined_r0x000101e8f9c4;
    }
    uVar23 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar14 = *(long *)(unaff_x22 + 0x50);
    uVar29 = uVar27;
    func_0x000107c61174(uVar27);
    func_0x000107c5ed30(uVar27);
    func_0x000107c61170(uVar29);
    func_0x000107c61654();
    (**(code **)(lVar14 + 8))(uVar23,uVar26);
  }
  uVar27 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar27);
  func_0x000107c615c0(uVar26);
  func_0x000107c615c0(uVar29);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
joined_r0x000101e8f9c4:
  if (lVar14 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x000101e8f7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  if (puRam0000000112e35130 == (undefined *)0x0) {
    puVar17 = PTR__OBJC_CLASS___MLModel_1126ddfb0;
    func_0x000107c61168();
    func_0x000107c614ec();
    puRam0000000112e35130 = puVar17;
    return;
  }
  return;
}



/* Entry: 101e8f5a4; end: 101e8f9d3;  */

/* WARNING: Removing unreachable block (ram,0x000101e8f700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e8f5a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long unaff_x22;
  undefined8 uVar27;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar25 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar23 = *(long *)(unaff_x22 + 0x50);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c5edd0(uVar24,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar23 + 0x30))(uVar24,1,uVar25);
  if ((int)uVar24 == 1) {
    puVar13 = *(undefined8 **)(unaff_x22 + 0x40);
    func_0x0001000293e4();
    FUN_101e8f380();
    func_0x000107c613f8(&UNK_110491da8,puVar13,0,0);
    *puVar13 = 0;
    func_0x000107c61654();
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x40),
               *(undefined8 *)(unaff_x22 + 0x48));
    puVar14 = PTR__OBJC_CLASS___MLModel_1126ddfb0;
    func_0x000107c61168();
    puVar15 = puVar14;
    func_0x000107c5ed90();
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    func_0x000107c3fed8();
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x10);
    if (puVar14 != (undefined *)0x0) {
      uVar24 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x48);
      lVar23 = *(long *)(unaff_x22 + 0x50);
      func_0x000107c5edb4(uVar20,puVar14);
      func_0x000107c61174(uVar25);
      func_0x000107c61170(puVar14);
      FUN_101e8f9d4(0);
      (**(code **)(lVar23 + 0x10))(uVar24,uVar20,uVar27);
      FUN_101e8fa18();
      uVar25 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
      lVar1 = *(long *)(unaff_x22 + 0x50);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar10 = *(undefined1 *)(unaff_x22 + 0x71);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x30);
      lVar23 = *(long *)(unaff_x22 + 0x38);
      uVar11 = *(undefined1 *)(unaff_x22 + 0x70);
      plVar22 = *(long **)(unaff_x22 + 0x18);
      puVar14 = PTR_PTR_1126a96b0;
      func_0x000107c61168();
      func_0x000107c5e8d4();
      func_0x000107c61180();
      uVar17 = *(undefined8 *)(lVar23 + 0x10);
      uVar7 = *(undefined8 *)(lVar23 + 0x18);
      uVar2 = *(undefined8 *)(lVar23 + 0x20);
      uVar8 = *(undefined8 *)(lVar23 + 0x28);
      uVar3 = *(undefined8 *)(lVar23 + 0x30);
      uVar9 = *(undefined8 *)(lVar23 + 0x38);
      uVar26 = *(undefined8 *)(lVar23 + 0x40);
      uVar16 = 0;
      func_0x000101e96188(0);
      func_0x000107c613fc();
      FUN_101e92aa4(uVar16,uVar17,uVar7,uVar2,uVar8,uVar3,uVar9,uVar26,uVar11,uVar20,uVar10);
      lVar18 = 0;
      FUN_101e91d64();
      lVar19 = lVar18;
      func_0x000107c613fc();
      uVar20 = 0;
      func_0x00010006a340();
      *(undefined8 *)(lVar19 + 0x28) = 0;
      *(undefined8 *)(lVar19 + 0x20) = 0;
      *(undefined8 *)(lVar19 + 0x38) = 0;
      *(undefined8 *)(lVar19 + 0x30) = 0;
      *(undefined8 *)(lVar19 + 0x40) = 0;
      func_0x000107c613fc();
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar8);
      puVar15 = puVar14;
      func_0x000107c615f0();
      func_0x00010006a360();
      *(undefined **)(lVar19 + 0x48) = puVar15;
      *(undefined8 *)(lVar19 + 0x58) = 0;
      *(undefined8 *)(lVar19 + 0x50) = 0;
      *(undefined8 *)(lVar19 + 0x68) = 0;
      *(undefined8 *)(lVar19 + 0x60) = 0;
      *(undefined8 *)(lVar19 + 0x70) = 0;
      func_0x000107c613fc(uVar20,0x18,7);
      func_0x00010006a360();
      *(undefined8 *)(lVar19 + 0x78) = uVar20;
      lVar12 = _DAT_112e35280;
      lVar23 = 0x112e34ff8;
      func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
      (**(code **)(*(long *)(lVar23 + -8) + 0x38))(lVar19 + lVar12,1,1,lVar23);
      *(undefined **)(lVar19 + 0x10) = puVar14;
      *(undefined8 *)(lVar19 + 0x18) = uVar17;
      plVar22[3] = lVar18;
      plVar22[4] = (long)&PTR_DAT_110491e80;
      func_0x000107c61170(uVar24);
      func_0x000107c615e8(puVar14);
      *plVar22 = lVar19;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar25,uVar6);
      (*UNRECOVERED_JUMPTABLE)(uVar4,uVar6);
      func_0x000107c615c0(uVar4);
      func_0x000107c615c0(uVar25);
      func_0x000107c615c0(uVar5);
      func_0x000107c615c0(uVar27);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
      goto joined_r0x000101e8f9c4;
    }
    uVar20 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar23 = *(long *)(unaff_x22 + 0x50);
    uVar27 = uVar25;
    func_0x000107c61174(uVar25);
    func_0x000107c5ed30(uVar25);
    func_0x000107c61170(uVar27);
    func_0x000107c61654();
    (**(code **)(lVar23 + 8))(uVar20,uVar24);
  }
  uVar25 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar25);
  func_0x000107c615c0(uVar24);
  func_0x000107c615c0(uVar27);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
joined_r0x000101e8f9c4:
  if (lVar23 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x000101e8f7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  if (puRam0000000112e35130 == (undefined *)0x0) {
    puVar14 = PTR__OBJC_CLASS___MLModel_1126ddfb0;
    func_0x000107c61168();
    func_0x000107c614ec();
    puRam0000000112e35130 = puVar14;
    return;
  }
  return;
}



/* Entry: 101e8f9d4; end: 101e8fa17;  */

void FUN_101e8f9d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35130 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___MLModel_1126ddfb0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e35130 = puVar1;
  return;
}



/* Entry: 101e8fa18; end: 101e8fb33;  */

long FUN_101e8fa18(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000107c5ed90();
  func_0x000107c614e8();
  func_0x000107c4d098();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  uVar3 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174(0);
    func_0x000107c5ed30();
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  }
  else {
    lVar1 = 0;
    func_0x000107c5ede0();
    pcVar4 = *(code **)(*(long *)(lVar1 + -8) + 8);
    func_0x000107c61174(0);
    (*pcVar4)(param_1,lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x58,7);
  return param_1;
}



/* Entry: 101e8fb34; end: 101e8fb73;  */

void FUN_101e8fb34(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e8fb74; end: 101e8fc07;  */

/* WARNING: Removing unreachable block (ram,0x000101e8f700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e8fb74(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 param_6,long param_7,undefined1 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long *unaff_x20;
  long lVar28;
  long unaff_x22;
  
  lVar28 = *unaff_x20;
  plVar21 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar21;
  *plVar21 = unaff_x22;
  plVar21[1] = (long)FUN_101e8fc08;
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21[6] = param_7;
  plVar21[7] = lVar28;
  *(undefined1 *)((long)plVar21 + 0x71) = param_8;
  *(undefined1 *)(plVar21 + 0xe) = param_6;
  plVar21[4] = param_2;
  plVar21[5] = param_3;
  plVar21[3] = param_1;
  lVar28 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar10 = *(long *)(*(long *)(lVar28 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar21[8] = uVar10;
  lVar28 = 0;
  func_0x000107c5ede0();
  plVar21[9] = lVar28;
  lVar28 = *(long *)(lVar28 + -8);
  plVar21[10] = lVar28;
  uVar10 = *(long *)(lVar28 + 0x40) + 0xf;
  uVar11 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar21[0xb] = uVar11;
  uVar11 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar21[0xc] = uVar11;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar21[0xd] = uVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101e8f5a4,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar28 = plVar21[9];
  lVar22 = plVar21[10];
  lVar25 = plVar21[8];
  func_0x000107c5edd0(lVar25,plVar21[4],plVar21[5]);
  (**(code **)(lVar22 + 0x30))(lVar25,1,lVar28);
  if ((int)lVar25 == 1) {
    puVar12 = (undefined8 *)plVar21[8];
    func_0x0001000293e4();
    FUN_101e8f380();
    func_0x000107c613f8(&UNK_110491da8,puVar12,0,0);
    *puVar12 = 0;
    func_0x000107c61654();
  }
  else {
    (**(code **)(plVar21[10] + 0x20))(plVar21[0xd],plVar21[8],plVar21[9]);
    puVar13 = PTR__OBJC_CLASS___MLModel_1126ddfb0;
    func_0x000107c61168();
    puVar14 = puVar13;
    func_0x000107c5ed90();
    plVar21[2] = 0;
    func_0x000107c3fed8();
    func_0x000107c61180();
    func_0x000107c61170(puVar14);
    lVar28 = plVar21[2];
    if (puVar13 != (undefined *)0x0) {
      lVar22 = plVar21[0xb];
      lVar15 = plVar21[0xc];
      lVar25 = plVar21[9];
      lVar26 = plVar21[10];
      func_0x000107c5edb4(lVar15,puVar13);
      func_0x000107c61174(lVar28);
      func_0x000107c61170(puVar13);
      FUN_101e8f9d4(0);
      (**(code **)(lVar26 + 0x10))(lVar22,lVar15,lVar25);
      FUN_101e8fa18();
      lVar25 = plVar21[0xc];
      lVar2 = plVar21[0xd];
      lVar15 = plVar21[10];
      lVar3 = plVar21[0xb];
      lVar26 = plVar21[8];
      lVar4 = plVar21[9];
      uVar9 = *(undefined1 *)((long)plVar21 + 0x71);
      lVar28 = plVar21[6];
      lVar5 = plVar21[7];
      lVar19 = plVar21[0xe];
      plVar24 = (long *)plVar21[3];
      puVar13 = PTR_PTR_1126a96b0;
      func_0x000107c61168();
      func_0x000107c5e8d4();
      func_0x000107c61180();
      uVar17 = *(undefined8 *)(lVar5 + 0x10);
      uVar6 = *(undefined8 *)(lVar5 + 0x18);
      uVar20 = *(undefined8 *)(lVar5 + 0x20);
      uVar7 = *(undefined8 *)(lVar5 + 0x28);
      uVar1 = *(undefined8 *)(lVar5 + 0x30);
      uVar8 = *(undefined8 *)(lVar5 + 0x38);
      uVar27 = *(undefined8 *)(lVar5 + 0x40);
      uVar16 = 0;
      func_0x000101e96188(0);
      func_0x000107c613fc();
      FUN_101e92aa4(uVar16,uVar17,uVar6,uVar20,uVar7,uVar1,uVar8,uVar27,(char)lVar19,lVar28,uVar9);
      lVar18 = 0;
      FUN_101e91d64();
      lVar19 = lVar18;
      func_0x000107c613fc();
      uVar20 = 0;
      func_0x00010006a340();
      *(undefined8 *)(lVar19 + 0x28) = 0;
      *(undefined8 *)(lVar19 + 0x20) = 0;
      *(undefined8 *)(lVar19 + 0x38) = 0;
      *(undefined8 *)(lVar19 + 0x30) = 0;
      *(undefined8 *)(lVar19 + 0x40) = 0;
      func_0x000107c613fc();
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar7);
      puVar14 = puVar13;
      func_0x000107c615f0();
      func_0x00010006a360();
      *(undefined **)(lVar19 + 0x48) = puVar14;
      *(undefined8 *)(lVar19 + 0x58) = 0;
      *(undefined8 *)(lVar19 + 0x50) = 0;
      *(undefined8 *)(lVar19 + 0x68) = 0;
      *(undefined8 *)(lVar19 + 0x60) = 0;
      *(undefined8 *)(lVar19 + 0x70) = 0;
      func_0x000107c613fc(uVar20,0x18,7);
      func_0x00010006a360();
      *(undefined8 *)(lVar19 + 0x78) = uVar20;
      lVar5 = _DAT_112e35280;
      lVar28 = 0x112e34ff8;
      func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
      (**(code **)(*(long *)(lVar28 + -8) + 0x38))(lVar19 + lVar5,1,1,lVar28);
      *(undefined **)(lVar19 + 0x10) = puVar13;
      *(undefined8 *)(lVar19 + 0x18) = uVar17;
      plVar24[3] = lVar18;
      plVar24[4] = (long)&PTR_DAT_110491e80;
      func_0x000107c61170(lVar22);
      func_0x000107c615e8(puVar13);
      *plVar24 = lVar19;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
      (*UNRECOVERED_JUMPTABLE)(lVar25,lVar4);
      (*UNRECOVERED_JUMPTABLE)(lVar2,lVar4);
      func_0x000107c615c0(lVar2);
      func_0x000107c615c0(lVar25);
      func_0x000107c615c0(lVar3);
      func_0x000107c615c0(lVar26);
      UNRECOVERED_JUMPTABLE = (code *)plVar21[1];
      lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      goto joined_r0x000101e8f9c4;
    }
    lVar26 = plVar21[0xd];
    lVar22 = plVar21[9];
    lVar25 = plVar21[10];
    lVar15 = lVar28;
    func_0x000107c61174(lVar28);
    func_0x000107c5ed30(lVar28);
    func_0x000107c61170(lVar15);
    func_0x000107c61654();
    (**(code **)(lVar25 + 8))(lVar26,lVar22);
  }
  lVar28 = plVar21[0xc];
  lVar22 = plVar21[0xb];
  lVar25 = plVar21[8];
  func_0x000107c615c0(plVar21[0xd]);
  func_0x000107c615c0(lVar28);
  func_0x000107c615c0(lVar22);
  func_0x000107c615c0(lVar25);
  UNRECOVERED_JUMPTABLE = (code *)plVar21[1];
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
joined_r0x000101e8f9c4:
  if (lVar28 == lVar23) {
                    /* WARNING: Could not recover jumptable at 0x000101e8f7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  if (puRam0000000112e35130 == (undefined *)0x0) {
    puVar13 = PTR__OBJC_CLASS___MLModel_1126ddfb0;
    func_0x000107c61168();
    func_0x000107c614ec();
    puRam0000000112e35130 = puVar13;
    return;
  }
  return;
}



/* Entry: 101e8fc08; end: 101e8fc63;  */

void FUN_101e8fc08(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e8fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e8fc64; end: 101e8fd03;  */

long FUN_101e8fc64(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101e8fd04; end: 101e8fd87;  */

undefined8 * FUN_101e8fd04(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 101e8fd88; end: 101e8fddb;  */

undefined8 * FUN_101e8fd88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 101e8fddc; end: 101e8fe7f;  */

int FUN_101e8fddc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101e8fe80; end: 101e900bb;  */

undefined1  [16] FUN_101e8fe80(long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = 0xef726f7463616620;
  uVar2 = 0x656c616373206f4e;
  switch(param_1) {
  case 1:
    pcVar4 = "No content delivery services available";
    goto code_r0x000101e8ff80;
  case 2:
    pcVar4 = "No on-device model file path available";
code_r0x000101e8ff80:
    auVar8._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar8._0_8_ = 0xd000000000000026;
    return auVar8;
  case 3:
    pcVar4 = "No content object for model handle";
    break;
  case 4:
    auVar6._8_8_ = 0x800000010f016f20;
    auVar6._0_8_ = 0xd000000000000015;
    return auVar6;
  case 5:
    pcVar4 = "COF message not convertible to data";
    goto code_r0x000101e9003c;
  case 6:
    pcVar4 = "COF data not convertible to model configuration";
    uVar2 = 0xd;
    goto code_r0x000101e90024;
  case 7:
    auVar7._8_8_ = 0x800000010f017050;
    auVar7._0_8_ = 0xd000000000000019;
    return auVar7;
  case 8:
    auVar11._8_8_ = 0x800000010f016fc0;
    auVar11._0_8_ = 0xd000000000000016;
    return auVar11;
  case 9:
    pcVar4 = "No input feature name in user data";
    break;
  case 10:
    pcVar4 = "No output feature name in user data";
code_r0x000101e9003c:
    auVar10._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar10._0_8_ = 0xd000000000000023;
    return auVar10;
  case 0xb:
    goto code_r0x000101e90030;
  case 0xc:
    pcVar4 = "Scale factor is not a valid Double";
    break;
  case 0xd:
    pcVar4 = "Must specify the input shape that the model accepts";
    uVar2 = 0x11;
code_r0x000101e90024:
    uVar3 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    uVar2 = uVar2 | 0xd000000000000022;
code_r0x000101e90030:
    auVar9._8_8_ = uVar3;
    auVar9._0_8_ = uVar2;
    return auVar9;
  default:
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    func_0x000107c602fc(0x18);
    func_0x000107c6142c(uStack_28);
    uStack_30 = 0xd000000000000016;
    uStack_28 = 0x800000010f016eb0;
    if (param_1 == 0) {
      uStack_40 = 0xed0000726f727265;
    }
    else {
      func_0x000107c614cc(param_1,auStack_38,auStack_50);
      func_0x000107c60640(uStack_48,uStack_40);
    }
    func_0x000107c5fb78();
    func_0x000107c6142c(uStack_40);
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = uStack_30;
    return auVar1;
  }
  auVar5._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar5._0_8_ = 0xd000000000000022;
  return auVar5;
}



/* Entry: 101e900bc; end: 101e900d3;  */

void FUN_101e900bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101e900d4; end: 101e90103;  */

void FUN_101e900d4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101e90104; end: 101e90127;  */

void FUN_101e90104(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e90128; end: 101e90227;  */

void FUN_101e90128(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar2 = uVar1;
  func_0x00010011d734();
  uVar3 = 0x202c;
  uVar4 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar1,uVar2);
  func_0x000107c602fc(0x1f);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f017100);
  func_0x000107c5fb78(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(puVar5);
  return;
}



/* Entry: 101e90228; end: 101e90603;  */

void FUN_101e90228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  undefined *puStack_70;
  
  puStack_a0 = (undefined *)0x0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x23);
  func_0x000107c6142c(uStack_98);
  puStack_a0 = (undefined *)0xd000000000000021;
  uStack_98 = 0x800000010f017070;
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c6142c(uStack_98);
  puStack_a0 = (undefined *)0x0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x29);
  func_0x000107c6142c(uStack_98);
  puStack_a0 = (undefined *)0xd000000000000027;
  uStack_98 = 0x800000010f0170a0;
  func_0x000107c5fb78(param_3,param_4);
  func_0x000107c6142c(uStack_98);
  if (param_5 != 0) {
    lVar15 = *(long *)(param_5 + 0x10);
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar15 != 0) {
      puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100403514(0,lVar15,0);
      puVar16 = puStack_70;
      uVar1 = param_5 + 0x40;
      uVar14 = uVar1;
      func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f)));
      lVar18 = 0;
      iVar3 = *(int *)(param_5 + 0x24);
      uVar9 = (ulong)*(byte *)(param_5 + 0x20);
      do {
        if (uVar14 >> (uVar9 & 0x3f) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e905f4);
          (*pcVar4)();
        }
        uVar19 = uVar14 >> 6;
        uVar17 = 1L << (uVar14 & 0x3f);
        if ((*(ulong *)(uVar1 + uVar19 * 8) & uVar17) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e905f8);
          (*pcVar4)();
        }
        puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + uVar14 * 0x10);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        func_0x0001000bb420(*(long *)(param_5 + 0x38) + uVar14 * 0x20,auStack_90);
        uStack_d0 = uVar5;
        uStack_c8 = uVar6;
        func_0x000100102924(auStack_90,auStack_c0);
        uStack_e0 = 0;
        uStack_d8 = 0xe000000000000000;
        func_0x000107c61434(uVar6);
        func_0x000107c5fb78(uVar5,uVar6);
        func_0x000107c5fb78(0x203a,0xe200000000000000);
        func_0x000107c603d0(auStack_c0,&uStack_e0,PTR___sypN_11034f1a8 + 8,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        uVar6 = uStack_d8;
        uVar5 = uStack_e0;
        FUN_101e90ec8(&uStack_d0);
        uVar9 = *(ulong *)(puVar16 + 0x10);
        puStack_70 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar9) {
          func_0x000100403514(1 < *(ulong *)(puVar16 + 0x18),uVar9 + 1,1);
        }
        *(ulong *)(puStack_70 + 0x10) = uVar9 + 1;
        *(undefined8 *)(puStack_70 + uVar9 * 0x10 + 0x20) = uVar5;
        *(undefined8 *)(puStack_70 + uVar9 * 0x10 + 0x28) = uVar6;
        uVar9 = (ulong)*(byte *)(param_5 + 0x20);
        uVar10 = 1L << (uVar9 & 0x3f);
        if (uVar10 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e905fc);
          (*pcVar4)();
        }
        uVar11 = *(ulong *)(uVar1 + uVar19 * 8);
        if ((uVar11 & uVar17) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e90600);
          (*pcVar4)();
        }
        if (iVar3 != *(int *)(param_5 + 0x24)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e90604);
          (*pcVar4)();
        }
        uVar11 = uVar11 & -2L << (uVar14 & 0x3f);
        if (uVar11 == 0) {
          lVar12 = uVar19 << 6;
          puVar13 = (ulong *)(param_5 + 0x48 + uVar19 * 8);
          do {
            uVar19 = uVar19 + 1;
            if (uVar10 + 0x3f >> 6 <= uVar19) goto LAB_101e9037c;
            uVar14 = *puVar13;
            lVar12 = lVar12 + 0x40;
            puVar13 = puVar13 + 1;
          } while (uVar14 == 0);
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + lVar12;
        }
        else {
          uVar19 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | uVar14 & 0x7fffffffffffffc0;
        }
LAB_101e9037c:
        lVar18 = lVar18 + 1;
        puVar16 = puStack_70;
        uVar14 = uVar10;
      } while (lVar18 != lVar15);
    }
    uVar5 = 0x112d38270;
    puStack_a0 = puVar16;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar6 = uVar5;
    func_0x00010011d734();
    uVar7 = 0x202c;
    uVar8 = 0xe200000000000000;
    func_0x000107c5fa80(0x202c,0xe200000000000000,uVar5,uVar6);
    func_0x000107c6142c(puVar16);
    puStack_a0 = (undefined *)0x0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x26);
    func_0x000107c6142c(uStack_98);
    puStack_a0 = (undefined *)0xd000000000000023;
    uStack_98 = 0x800000010f0170d0;
    func_0x000107c5fb78(uVar7,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c5fb78(0x7d,0xe100000000000000);
    func_0x000107c6142c(uStack_98);
  }
  return;
}



/* Entry: 101e90604; end: 101e9085f;  */

void FUN_101e90604(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c602fc(0x28);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x206e6920,0xe400000000000000);
  puVar1 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar1);
  func_0x000107c5fb78(0x736d,0xe200000000000000);
  func_0x000107c6142c(0x800000010f0171e0);
  return;
}



/* Entry: 101e90860; end: 101e909c7;  */

void FUN_101e90860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x3f);
  uVar2 = 0x800000010f0171b0;
  func_0x000107c5fb78(0xd000000000000025,0x800000010f0171b0);
  func_0x000107c417f0(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0x7473206874697720,0xee00203a73757461);
  uVar1 = 0;
  uStack_58 = param_2;
  func_0x000100f99cd0(0);
  func_0x000107c603d0(&uStack_58,&uStack_50,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206e6920,0xe400000000000000);
  puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  uStack_58 = param_3;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x736d,0xe200000000000000);
  func_0x000107c6142c(uStack_48);
  return;
}



/* Entry: 101e909c8; end: 101e90acf;  */

void FUN_101e909c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c602fc(0x35);
  uVar2 = 0x800000010f017120;
  func_0x000107c5fb78(0xd00000000000002b,0x800000010f017120);
  func_0x000107c417f0(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0x206e6920,0xe400000000000000);
  puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x736d,0xe200000000000000);
  func_0x000107c6142c(0xe000000000000000);
  return;
}



/* Entry: 101e90ad0; end: 101e90c3f;  */

void FUN_101e90ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x45);
  uVar2 = 0x800000010f017150;
  func_0x000107c5fb78(0xd000000000000028,0x800000010f017150);
  func_0x000107c417f0(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0x7473206874697720,0xee00203a73757461);
  uVar1 = 0;
  uStack_58 = param_2;
  func_0x000100f99cd0(0);
  func_0x000107c603d0(&uStack_58,&uStack_50,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x20726574666120,0xe700000000000000);
  puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  uStack_58 = param_3;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x736d,0xe200000000000000);
  func_0x000107c6142c(uStack_48);
  return;
}



/* Entry: 101e90c40; end: 101e90c5f;  */

void FUN_101e90c40(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 101e90c60; end: 101e90ca3;  */

void FUN_101e90c60(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    func_0x000107c614b0(uVar2);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 101e90ca4; end: 101e90d37;  */

ulong * FUN_101e90ca4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  if (0xfffffffe < uVar4) {
    uVar1 = 0xffffffff;
  }
  uVar5 = *param_2;
  uVar2 = uVar5;
  if (0xfffffffe < uVar5) {
    uVar2 = 0xffffffff;
  }
  iVar3 = (int)uVar2 + -1;
  if ((int)uVar1 + -1 < 0) {
    if (iVar3 < 0) {
      func_0x000107c614b0(uVar5);
      *param_1 = uVar5;
      func_0x000107c614ac(uVar4);
    }
    else {
      func_0x000107c614ac(uVar4);
      *param_1 = *param_2;
    }
  }
  else {
    if (iVar3 < 0) {
      func_0x000107c614b0(uVar5);
    }
    *param_1 = uVar5;
  }
  return param_1;
}



/* Entry: 101e90d38; end: 101e90db3;  */

ulong * FUN_101e90d38(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  uVar3 = *param_2;
  if ((int)uVar1 + -1 < 0) {
    uVar1 = uVar3;
    if (0xfffffffe < uVar3) {
      uVar1 = 0xffffffff;
    }
    if ((int)uVar1 + -1 < 0) {
      *param_1 = uVar3;
      func_0x000107c614ac(uVar2);
    }
    else {
      func_0x000107c614ac(uVar2);
      *param_1 = uVar3;
    }
  }
  else {
    *param_1 = uVar3;
  }
  return param_1;
}



/* Entry: 101e90db4; end: 101e90ec7;  */

int FUN_101e90db4(ulong *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff1 < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffff2;
  }
  uVar3 = *param_1;
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (0xd < uVar2 + 1) {
    iVar1 = uVar2 - 0xc;
  }
  return iVar1;
}



/* Entry: 101e90ec8; end: 101e90f0f;  */

undefined8 FUN_101e90ec8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112da9f08;
  func_0x0001000285a8(0x112da9f08,&UNK_10da55920);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101e90f10; end: 101e90f17;  */

void FUN_101e90f10(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    func_0x000107c614b0(uVar2);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 101e90f18; end: 101e91197;  */

void FUN_101e90f18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_90,0,0);
  FUN_101e92864(unaff_x20 + 0x20,auStack_b8,0x112e353f8,&UNK_10da1ed90);
  if (lStack_a0 == 0) {
    func_0x000101e928ac(auStack_b8,0x112e353f8,&UNK_10da1ed90);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = 0;
    func_0x000101e961a8();
    func_0x000107c613fc();
    func_0x000107c615f0(uVar3);
    func_0x000107c6157c(uVar1);
    func_0x000101e93168(uVar3,uVar1);
    param_1[3] = uVar2;
    param_1[4] = &PTR_DAT_110491fe0;
    *param_1 = uVar3;
    FUN_101e926a0(param_1,auStack_78);
    func_0x000107c61428(unaff_x20 + 0x20,auStack_b8,0x21,0);
    func_0x000101e928ec(auStack_78,unaff_x20 + 0x20,0x112e353f8,&UNK_10da1ed90);
    func_0x000107c614a8(auStack_b8);
  }
  else {
    FUN_101960034(auStack_b8,auStack_78);
    FUN_101960034(auStack_78,param_1);
  }
  return;
}



/* Entry: 101e91198; end: 101e916bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e91198(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar7;
  long extraout_x12;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_160 [8];
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x00010006c804();
  lVar4 = 0x112e34ff8;
  func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_160 + -extraout_x8;
  lVar10 = 0x112e353d8;
  func_0x0001000285a8(0x112e353d8,&UNK_10da1e698);
  lStack_120 = *(long *)(*(long *)(lVar10 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_120 + 0xfU & 0xfffffffffffffff0);
  lVar10 = _DAT_112e35280;
  lVar14 = (long)puVar8 - extraout_x8_00;
  func_0x000107c61428(unaff_x20 + _DAT_112e35280,auStack_b8,0,0);
  lStack_118 = lVar10;
  FUN_101e92864(unaff_x20 + lVar10,lVar14,0x112e353d8,&UNK_10da1e698);
  lVar10 = lVar14;
  (**(code **)(lVar19 + 0x30))(lVar14,1,lVar4);
  if ((int)lVar10 == 1) {
    uStack_128 = uVar11;
    uStack_110 = param_1;
    func_0x000101e928ac(lVar14,0x112e353d8,&UNK_10da1e698);
    func_0x000101e91058(auStack_e0);
    lVar10 = 0x112e353e0;
    func_0x0001000285a8(0x112e353e0,&UNK_10da1e6a0);
    lVar17 = *(long *)(lVar10 + -8);
    lVar12 = *(long *)(lVar17 + 0x40);
    lStack_138 = lVar10;
    lStack_130 = lVar14;
    (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
    lVar14 = lVar14 - extraout_x8_01;
    lVar10 = 0x112e353e8;
    func_0x0001000285a8(0x112e353e8,&UNK_10da1e6a8);
    lVar15 = *(long *)(lVar10 + -8);
    uStack_140 = lVar14;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar18 = lVar14 - extraout_x8_02;
    (**(code **)(lVar15 + 0x68))
              (lVar18,*(undefined4 *)
                       PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20
               ,lVar10);
    iVar3 = 2;
    func_0x000100029b9c(2,0x11,0,0);
    if (iVar3 == 0) {
      FUN_101e92480(lVar14,uStack_110,lVar18);
    }
    else {
      func_0x000107c5fd10(lVar14,uStack_110,&UNK_110491e58,lVar18,&UNK_110491e58);
    }
    (**(code **)(lVar15 + 8))(lVar18,lVar10);
    uVar2 = uStack_140;
    func_0x00010488fc10(&uStack_a0);
    if (lStack_80 == 0) {
      uStack_148 = 0;
      uStack_140 = CONCAT44(uStack_140._4_4_,0x40);
      uStack_150 = 3;
    }
    else {
      uStack_140 = CONCAT44(uStack_140._4_4_,(uint)bStack_90);
      uStack_150 = uStack_98;
      uStack_148 = uStack_a0;
      uStack_78 = uStack_88;
      lStack_70 = lStack_80;
      func_0x000100bcb1dc(&uStack_78);
    }
    lStack_158 = lVar14;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar10 = lStack_138;
    lVar14 = uVar2 - (lVar12 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar17 + 0x10))(lVar14);
    FUN_101e926a0(auStack_e0,auStack_108);
    uVar7 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar16 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
    uVar9 = lVar12 + uVar16 + 7 & 0xfffffffffffffff8;
    puVar5 = &UNK_110491ea8;
    func_0x000107c613fc(&UNK_110491ea8,uVar9 + 0x28,uVar7 | 7);
    (**(code **)(lVar17 + 0x20))(puVar5 + uVar16,lVar14,lVar10);
    FUN_101960034(auStack_108,puVar5 + uVar9);
    *(undefined **)(uVar2 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar1 = uStack_148;
    uVar11 = uStack_150;
    uVar7 = uStack_140 & 0xffffffff;
    uVar6 = uStack_148;
    func_0x0001001ca524(uStack_148,uStack_150,uVar7,4,0,0,&UNK_10da1e6b8,puVar5);
    func_0x000107c61574(puVar5);
    func_0x00010007d980(uVar1,uVar11,uVar7);
    uVar11 = uStack_110;
    func_0x000107c5fd1c(FUN_101e927b4,uVar6,lVar4);
    (**(code **)(lVar17 + 8))(lStack_158,lVar10);
    func_0x0001000834e4(auStack_e0);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar10 = uVar2 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar19 + 0x10))(lVar10,uVar11,lVar4);
    (**(code **)(lVar19 + 0x38))(lVar10,0,1,lVar4);
    lVar4 = lStack_118;
    func_0x000107c61428(unaff_x20 + lStack_118,auStack_108,0x21,0);
    func_0x000101e928ec(lVar10,unaff_x20 + lVar4,0x112e353d8,&UNK_10da1e698);
    func_0x000107c614a8(auStack_108);
  }
  else {
    pcVar13 = *(code **)(lVar19 + 0x20);
    (*pcVar13)(puVar8,lVar14,lVar4);
    (*pcVar13)(param_1,puVar8,lVar4);
  }
  func_0x000100070bfc();
  return;
}



/* Entry: 101e916bc; end: 101e91727;  */

void FUN_101e916bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  lVar2 = 0x112e353f0;
  func_0x0001000285a8(0x112e353f0,&UNK_10da1e6c0);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e91728,0,0);
  return;
}



/* Entry: 101e91728; end: 101e917a3;  */

void FUN_101e91728(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x0001000285a8(0x112e353e0,&UNK_10da1e6a0);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e917a4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 101e917a4; end: 101e917eb;  */

void FUN_101e917a4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e917ec,0,0);
  return;
}



/* Entry: 101e917ec; end: 101e918df;  */

void FUN_101e917ec(ulong param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x10);
  if (lVar7 == 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
              (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
    *(long *)(unaff_x22 + 0x78) = lVar7;
    func_0x000107c5fd5c();
    if ((param_1 & 1) == 0) {
      lVar3 = *(long *)(unaff_x22 + 0x48);
      uVar6 = *(undefined8 *)(lVar3 + 0x18);
      lVar2 = *(long *)(lVar3 + 0x20);
      func_0x0001000a8868(lVar3,uVar6);
      piVar5 = *(int **)(lVar2 + 0x10);
      iVar1 = *piVar5;
      plVar4 = (long *)(ulong)(uint)piVar5[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x80) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101e918e0;
                    /* WARNING: Could not recover jumptable at 0x000101e918dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar5))(lVar7,uVar6,lVar2);
      return;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
              (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
    func_0x000107c61170(lVar7);
    func_0x000107c61574(uVar6);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101e91874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e918e0; end: 101e9194b;  */

void FUN_101e918e0(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x90) = param_1;
    pcVar1 = FUN_101e9194c;
  }
  else {
    pcVar1 = FUN_101e919f0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e9194c; end: 101e919ef;  */

void FUN_101e9194c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  *(undefined1 *)(unaff_x22 + 0x38) = 0;
  func_0x000107c61174();
  func_0x00010488e5d4((undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar3);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101e91a98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar4,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 101e919f0; end: 101e91a97;  */

void FUN_101e919f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x28) = 1;
  func_0x000107c614b0(uVar4);
  func_0x00010488e5d4((undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c614ac(uVar4);
  func_0x000107c614ac(uVar4);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e91a98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar3,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 101e91a98; end: 101e91adf;  */

void FUN_101e91a98(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e91ae0,0,0);
  return;
}



/* Entry: 101e91ae0; end: 101e91bd3;  */

void FUN_101e91ae0(ulong param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x10);
  if (lVar7 == 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
              (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
    *(long *)(unaff_x22 + 0x78) = lVar7;
    func_0x000107c5fd5c();
    if ((param_1 & 1) == 0) {
      lVar3 = *(long *)(unaff_x22 + 0x48);
      uVar6 = *(undefined8 *)(lVar3 + 0x18);
      lVar2 = *(long *)(lVar3 + 0x20);
      func_0x0001000a8868(lVar3,uVar6);
      piVar5 = *(int **)(lVar2 + 0x10);
      iVar1 = *piVar5;
      plVar4 = (long *)(ulong)(uint)piVar5[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x80) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101e918e0;
                    /* WARNING: Could not recover jumptable at 0x000101e91bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar5))(lVar7,uVar6,lVar2);
      return;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
              (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
    func_0x000107c61170(lVar7);
    func_0x000107c61574(uVar6);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101e91b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e91bd4; end: 101e91d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e91bd4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0x112e34ff8;
  func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x000107c6157c(uVar4);
  func_0x00010006c804();
  func_0x000107c61574(uVar4);
  lVar1 = _DAT_112e35280;
  func_0x000107c61428(unaff_x20 + _DAT_112e35280,auStack_58,0,0);
  lVar3 = unaff_x20 + lVar1;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))(auStack_60 + -extraout_x8,unaff_x20 + lVar1,lVar2);
    func_0x000107c5fd2c(lVar2);
    (**(code **)(lVar5 + 8))(auStack_60 + -extraout_x8,lVar2);
  }
  func_0x000100070bfc();
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000101e928ac(unaff_x20 + 0x20,0x112e353f8,&UNK_10da1ed90);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000101e928ac(unaff_x20 + 0x50,0x112e353f8,&UNK_10da1ed90);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000101e928ac(unaff_x20 + lVar1,0x112e353d8,&UNK_10da1e698);
  return;
}



/* Entry: 101e91d38; end: 101e91d5b;  */

void FUN_101e91d38(void)

{
  FUN_101e91bd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e91d5c; end: 101e91d63;  */

void FUN_101e91d5c(void)

{
  if (lRam0000000112e352b0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e695618);
  return;
}



/* Entry: 101e91d64; end: 101e91d9b;  */

void FUN_101e91d64(undefined8 param_1)

{
  if (lRam0000000112e352b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e695618);
  return;
}



/* Entry: 101e91d9c; end: 101e91eb7;  */

void FUN_101e91d9c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_50 = PTR___sBoWV_11034d678 + 0x40;
  puStack_58 = &UNK_10da1e610;
  puStack_48 = &UNK_10da1e628;
  puStack_38 = &UNK_10da1e628;
  lVar1 = 0x13f;
  puStack_40 = puStack_50;
  puStack_30 = puStack_50;
  func_0x000101e91e30();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,7,&puStack_58,param_1 + 0x50);
  }
  return;
}



/* Entry: 101e91eb8; end: 101e91f13;  */

undefined8 * FUN_101e91eb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101e91f14; end: 101e91f4f;  */

undefined8 * FUN_101e91f14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101e91f50; end: 101e91fe3;  */

int FUN_101e91f50(ulong *param_1,int param_2)

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



/* Entry: 101e91fe4; end: 101e92083;  */

void FUN_101e91fe4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  lVar2 = 0x112e34ff8;
  func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar1;
  lVar2 = 0x112e353c0;
  func_0x0001000285a8(0x112e353c0,&UNK_10da1e688);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e92084,0,0);
  return;
}



/* Entry: 101e92084; end: 101e921a3;  */

void FUN_101e92084(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  int *piVar14;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar8 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = 0;
  func_0x000101343ae0();
  func_0x00010488bd80();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  FUN_101e91198(uVar10);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(uVar2);
  func_0x000107c5fd28(uVar3,(undefined8 *)(unaff_x22 + 0x10),uVar9);
  (**(code **)(lVar8 + 8))(uVar10,uVar9);
  (**(code **)(lVar7 + 8))(uVar3,uVar4);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar6;
  lVar7 = 0x112e353c8;
  func_0x0001000285a8(0x112e353c8,&UNK_10da1e690);
  lVar8 = lVar7;
  FUN_101e92430();
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101e921a4;
  plVar6[3] = unaff_x22 + 0x28;
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar8,lVar7,&UNK_10e821f58,&UNK_10e821f60);
  uVar10 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar11 = 0;
  __ss6ResultOMa(0,uVar9,uVar10,PTR___ss5ErrorWS_11034ee10);
  plVar6[4] = lVar11;
  uVar12 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[5] = uVar12;
  piVar14 = *(int **)(lVar8 + 0x10);
  iVar1 = *piVar14;
  plVar13 = (long *)(ulong)(uint)piVar14[1];
  _swift_task_alloc();
  plVar6[6] = (long)plVar13;
  *plVar13 = (long)plVar6;
  plVar13[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar14))(plVar13,uVar12,lVar7,lVar8);
  return;
}



/* Entry: 101e921a4; end: 101e921ff;  */

void FUN_101e921a4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e92200;
  }
  else {
    pcVar1 = FUN_101e92264;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e92200; end: 101e92263;  */

void FUN_101e92200(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e92260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 101e92264; end: 101e922bf;  */

void FUN_101e92264(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61574(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e922bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e922c0; end: 101e92373;  */

void FUN_101e922c0(undefined8 param_1)

{
  long unaff_x21;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x00010006c804();
  FUN_101e90f18(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(param_1,uStack_50,lStack_48);
  if (unaff_x21 == 0) {
    func_0x0001000834e4(auStack_68);
    func_0x000100070bfc();
  }
  else {
    func_0x0001000834e4(auStack_68);
    func_0x000100070bfc();
  }
  return;
}



/* Entry: 101e92374; end: 101e923c3;  */

void FUN_101e92374(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e923c4;
  plVar2[6] = param_1;
  plVar2[7] = lVar3;
  lVar3 = 0x112e34ff8;
  func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
  plVar2[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[9] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[10] = uVar1;
  lVar3 = 0x112e353c0;
  func_0x0001000285a8(0x112e353c0,&UNK_10da1e688);
  plVar2[0xb] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0xc] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xd] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e92084,0,0);
  return;
}



/* Entry: 101e923c4; end: 101e9240b;  */

void FUN_101e923c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e92408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e9240c; end: 101e9242f;  */

void FUN_101e9240c(void)

{
  func_0x000101e92b04();
  return;
}



/* Entry: 101e92430; end: 101e9247f;  */

void FUN_101e92430(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e353d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e353c8;
  func_0x00010002969c(0x112e353c8,&UNK_10da1e690);
  puVar2 = &DAT_10dd3cdf8;
  func_0x000107c61520(&DAT_10dd3cdf8,uVar1);
  puRam0000000112e353d0 = puVar2;
  return;
}



/* Entry: 101e92480; end: 101e9269f;  */

void FUN_101e92480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar2 = 0x112e353e8;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112e353e8,&UNK_10da1e6a8);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar3 = 0x112e353e0;
  func_0x0001000285a8(0x112e353e0,&UNK_10da1e6a0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar11 - extraout_x8_00;
  lVar4 = 0x112e353d8;
  func_0x0001000285a8(0x112e353d8,&UNK_10da1e698);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0x112e34ff8;
  func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,lVar4);
  (**(code **)(lVar6 + 0x10))(puVar11,uStack_90,lVar2);
  lStack_70 = lVar9;
  func_0x000107c5fd48(lVar7,&UNK_110491e58,puVar11,FUN_101e9285c,auStack_80,&UNK_110491e58);
  (**(code **)(lVar5 + 0x10))(uStack_88,lVar7,lVar3);
  FUN_101e92864(lVar9,lVar8,0x112e353d8,&UNK_10da1e698);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar3);
    (**(code **)(lVar10 + 0x20))(uStack_98,lVar8,lVar4);
    func_0x000101e928ac(lVar9,0x112e353d8,&UNK_10da1e698);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e926a0);
  (*pcVar1)();
}



/* Entry: 101e926a0; end: 101e926e3;  */

long FUN_101e926a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101e926e4; end: 101e92777;  */

void FUN_101e926e4(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0x112e353e0;
  func_0x0001000285a8(0x112e353e0,&UNK_10da1e6a0);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e92778;
  plVar1[8] = unaff_x20 + uVar3;
  plVar1[9] = unaff_x20 + (lVar2 + uVar3 + 7 & 0xfffffffffffffff8);
  lVar2 = 0x112e353f0;
  func_0x0001000285a8(0x112e353f0,&UNK_10da1e6c0);
  plVar1[10] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e91728,0,0);
  return;
}



/* Entry: 101e92778; end: 101e927b3;  */

void FUN_101e92778(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e927b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e927b4; end: 101e927d7;  */

void FUN_101e927b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 101e927d8; end: 101e9285b;  */

void FUN_101e927d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000101e928ac(param_2,0x112e353d8,&UNK_10da1e698);
  lVar1 = 0x112e34ff8;
  func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e92858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,lVar1);
  return;
}



/* Entry: 101e9285c; end: 101e92863;  */

void FUN_101e9285c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000101e928ac(uVar2,0x112e353d8,&UNK_10da1e698);
  lVar1 = 0x112e34ff8;
  func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x10))(uVar2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e92858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(uVar2,0,1,lVar1);
  return;
}



/* Entry: 101e92864; end: 101e92933;  */

undefined8 FUN_101e92864(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101e92934; end: 101e9293b;  */

undefined8 * FUN_101e92934(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 101e9293c; end: 101e92983; -[_TtC27LSPerceptualGenerativeModel37LSPerceptualGenerativeFeatureProvider featureNames] */

void FUN_101e9293c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fe08();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e92984; end: 101e929bb; -[_TtC27LSPerceptualGenerativeModel37LSPerceptualGenerativeFeatureProvider featureValueForName:] */

void FUN_101e92984(void)

{
  func_0x000107c61168(PTR__OBJC_CLASS___MLFeatureValue_1126bcac0);
  func_0x000107c42ecc();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101e929bc; end: 101e929e7;  */

void FUN_101e929bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e929e8; end: 101e92aa3;  */

void FUN_101e929e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,byte param_8,undefined8 param_9,
                  byte param_10)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(long *)(unaff_x20 + 0x30) = param_5;
  *(long *)(unaff_x20 + 0x50) = param_6;
  *(long *)(unaff_x20 + 0x58) = param_7;
  if (SUB168(SEXT816(param_6) * SEXT816(param_5),8) != param_6 * param_5 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e92aa0);
    (*pcVar1)();
  }
  if (SUB168(SEXT816(param_7) * SEXT816(param_5),8) == param_7 * param_5 >> 0x3f) {
    *(long *)(unaff_x20 + 0x60) = param_6 * param_5;
    *(long *)(unaff_x20 + 0x68) = param_7 * param_5;
    *(byte *)(unaff_x20 + 0x38) = param_8 & 1;
    *(undefined8 *)(unaff_x20 + 0x40) = param_9;
    *(byte *)(unaff_x20 + 0x48) = param_10 & 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e92aa4);
  (*pcVar1)();
}



/* Entry: 101e92aa4; end: 101e92b0b;  */

void FUN_101e92aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,byte param_8,undefined8 param_9,
                  byte param_10)

{
  code *pcVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(long *)(unaff_x20 + 0x30) = param_5;
  *(long *)(unaff_x20 + 0x50) = param_6;
  *(long *)(unaff_x20 + 0x58) = param_7;
  if (SUB168(SEXT816(param_6) * SEXT816(param_5),8) != param_6 * param_5 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e92b00);
    (*pcVar1)();
  }
  if (SUB168(SEXT816(param_7) * SEXT816(param_5),8) == param_7 * param_5 >> 0x3f) {
    *(long *)(unaff_x20 + 0x60) = param_6 * param_5;
    *(long *)(unaff_x20 + 0x68) = param_7 * param_5;
    *(byte *)(unaff_x20 + 0x38) = param_8 & 1;
    *(undefined8 *)(unaff_x20 + 0x40) = param_9;
    *(byte *)(unaff_x20 + 0x48) = param_10 & 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e92b04);
  (*pcVar1)();
}



/* Entry: 101e92b0c; end: 101e92b37;  */

void FUN_101e92b0c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e92b38; end: 101e92f03;  */

void FUN_101e92b38(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uStack_170;
  undefined1 auStack_168 [64];
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_68;
  
  puVar2 = PTR___sSbN_11034dd40;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar13 = *(undefined8 *)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
  uStack_120 = 1;
  uVar14 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
  puStack_108 = PTR___sSbN_11034dd40;
  uStack_f8 = 1;
  uVar15 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  puStack_e0 = PTR___sSbN_11034dd40;
  uVar4 = 0x112da99a0;
  uStack_128 = uVar13;
  uStack_100 = uVar14;
  uStack_d8 = uVar15;
  func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
  puStack_d0 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar16 = *(undefined8 *)PTR__kCVPixelBufferMetalCompatibilityKey_11034a398;
  uStack_a8 = 1;
  uVar17 = *(undefined8 *)PTR__kCVPixelBufferBytesPerRowAlignmentKey_11034a370;
  puStack_90 = puVar2;
  puStack_68 = PTR___sSiN_11034deb0;
  uStack_80 = 0x40;
  uStack_b8 = uVar4;
  uStack_b0 = uVar16;
  uStack_88 = uVar17;
  func_0x0001000285a8(0x112da90b8,&UNK_10dcb9280);
  lVar5 = 5;
  func_0x000107c60498();
  func_0x000101e964d0(&uStack_128,&uStack_170,0x112da90b0,&UNK_10d950510);
  uVar7 = uStack_170;
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar17);
  func_0x000107c6157c(lVar5);
  uVar6 = uVar7;
  func_0x0001014c0ae8();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e92ee0);
    (*pcVar3)();
  }
  lVar1 = lVar5 + 0x40;
  uVar10 = uVar6 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar6 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar7;
  func_0x000100102924(auStack_168,*(long *)(lVar5 + 0x38) + uVar6 * 0x20);
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e92ee4);
    (*pcVar3)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  func_0x000101e964d0(&uStack_100,&uStack_170,0x112da90b0,&UNK_10d950510);
  uVar10 = uStack_170;
  uVar7 = uStack_170;
  func_0x0001014c0ae8();
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e92ee8);
    (*pcVar3)();
  }
  uVar11 = uVar7 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar7 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar7 * 8) = uVar10;
  func_0x000100102924(auStack_168,*(long *)(lVar5 + 0x38) + uVar7 * 0x20);
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e92eec);
    (*pcVar3)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  func_0x000101e964d0(&uStack_d8,&uStack_170,0x112da90b0,&UNK_10d950510);
  uVar10 = uStack_170;
  uVar11 = uStack_170;
  func_0x0001014c0ae8();
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e92ef0);
    (*pcVar3)();
  }
  uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar12) = *(ulong *)(lVar1 + uVar12) | 1L << (uVar11 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar11 * 8) = uVar10;
  func_0x000100102924(auStack_168,*(long *)(lVar5 + 0x38) + uVar11 * 0x20);
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e92ef4);
    (*pcVar3)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  func_0x000101e964d0(&uStack_b0,&uStack_170,0x112da90b0,&UNK_10d950510);
  uVar10 = uStack_170;
  uVar11 = uStack_170;
  func_0x0001014c0ae8();
  if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e92ef8);
    (*pcVar3)();
  }
  uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar12) = *(ulong *)(lVar1 + uVar12) | 1L << (uVar11 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar11 * 8) = uVar10;
  func_0x000100102924(auStack_168,*(long *)(lVar5 + 0x38) + uVar11 * 0x20);
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    func_0x000101e964d0(&uStack_88,&uStack_170,0x112da90b0,&UNK_10d950510);
    uVar10 = uStack_170;
    func_0x0001014c0ae8();
    if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e92f00);
      (*pcVar3)();
    }
    uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar10 & 0x3f);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar10 * 8) = uStack_170;
    func_0x000100102924(auStack_168,*(long *)(lVar5 + 0x38) + uVar10 * 0x20);
    func_0x000107c61574(lVar5);
    uVar4 = 0x112da90b0;
    func_0x0001000285a8(0x112da90b0,&UNK_10d950510);
    func_0x000107c61408(&uStack_128,5,uVar4);
    if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
      *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
      lRam0000000113804558 = lVar5;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e92f04);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101e92efc);
  (*pcVar3)();
}



/* Entry: 101e92f04; end: 101e9311b;  */

void FUN_101e92f04(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  char cStack_b0;
  undefined1 auStack_a8 [24];
  long alStack_90 [8];
  
  func_0x000107c61428(unaff_x20 + 0x38,auStack_a8,0,0);
  func_0x000101e964d0(unaff_x20 + 0x38,&lStack_e0,0x112e35400,&UNK_10da1e6d0);
  if (cStack_b0 == -1) {
    func_0x000101e96490(&lStack_e0,0x112e35400,&UNK_10da1e6d0);
    alStack_90[0] = 0;
    uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x60);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x68);
    if (lRam000000011349fee0 != -1) {
      func_0x000107c61568(0x11349fee0,FUN_101e92b38);
    }
    uVar5 = uRam0000000113804558;
    uVar3 = 0;
    func_0x0001014bede8(0);
    uVar4 = 0x112da8f90;
    FUN_101e96234(0x112da8f90,&SUB_1014bede8,&UNK_10dcb8d78);
    func_0x000107c5f9dc(uVar5,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
    func_0x000107c60aa0(uVar6,uVar1,uVar2,0x4c303038,uVar5,alStack_90);
    func_0x000107c61170(uVar5);
    if ((int)uVar6 == 0) {
      if (alStack_90[0] == 0) {
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[1] = 0;
        *(undefined1 *)param_1 = 6;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      else {
        *param_1 = alStack_90[0];
        *(undefined1 *)(param_1 + 6) = 0;
      }
    }
    else {
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      *(undefined1 *)param_1 = 6;
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x000107c61170();
    }
    func_0x000101e964d0(param_1,alStack_90,0x112e356a0,&UNK_10da1e958);
    func_0x000107c61428(unaff_x20 + 0x38,&lStack_e0,0x21,0);
    func_0x000101e96518(alStack_90,unaff_x20 + 0x38);
    func_0x000107c614a8(&lStack_e0);
  }
  else {
    param_1[1] = lStack_d8;
    *param_1 = lStack_e0;
    param_1[3] = lStack_c8;
    param_1[2] = lStack_d0;
    param_1[5] = lStack_b8;
    param_1[4] = lStack_c0;
    *(char *)(param_1 + 6) = cStack_b0;
  }
  return;
}



/* Entry: 101e9311c; end: 101e931e7;  */

undefined8 FUN_101e9311c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000101e93168(param_1,param_2);
  return unaff_x20;
}



/* Entry: 101e931e8; end: 101e93287;  */

void FUN_101e931e8(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  func_0x000107c6157c(uVar1);
  func_0x00010006c804();
  func_0x000107c61574(uVar1);
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    func_0x000107c61170();
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c61590(*(long *)(unaff_x20 + 0x30),0xffffffffffffffff,0xffffffffffffffff);
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
  }
  func_0x000100070bfc();
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_101e96490(unaff_x20 + 0x38,0x112e35400,&UNK_10da1e6d0);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 101e93288; end: 101e932a7;  */

void FUN_101e93288(void)

{
  FUN_101e931e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e932a8; end: 101e933ab;  */

void FUN_101e932a8(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  func_0x000107c60acc(param_1,0);
  func_0x000107c60abc(param_1,0);
  func_0x000107c60ac0();
  iVar1 = (int)param_1;
  if ((iVar1 != 0x34323066) && (iVar1 != 0x34343466)) {
    func_0x000101e96628();
    puVar2 = param_1;
    FUN_101e95c20();
    func_0x000107c613f8(&UNK_1106e9230,puVar2,0,0);
    *puVar2 = 5;
    *(int *)(puVar2 + 8) = iVar1;
    *(undefined **)(puVar2 + 0x20) = &UNK_1106e9310;
    *(undefined1 **)(puVar2 + 0x28) = param_1;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 101e933ac; end: 101e936bf;  */

undefined8 * FUN_101e933ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x20;
  undefined *unaff_x21;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long lVar13;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  char cStack_158;
  undefined8 *puStack_110;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 *apuStack_98 [6];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  puVar1 = (undefined8 *)*puVar3;
  func_0x000107c61174();
  uVar2 = 0xd000000000000021;
  func_0x000100029b28(0xd000000000000021,0x800000010f017450);
  func_0x000107c61170(puVar1);
  func_0x000107c60ad0(param_1,1);
  puVar12 = param_1;
  func_0x000107c60aac(param_1,0);
  if (puVar12 == (undefined8 *)0x0) {
    FUN_101e95c20();
    unaff_x21 = &UNK_1106e9230;
    func_0x000107c613f8(&UNK_1106e9230,puVar12,0,0);
    *(undefined1 *)puVar12 = 7;
    puVar12[2] = 0;
    puVar12[1] = 0;
    puVar12[4] = 0;
    puVar12[3] = 0;
    puVar12[5] = 0;
LAB_101e93568:
    func_0x000107c61654();
    puVar12 = unaff_x26;
  }
  else {
    puVar1 = param_1;
    func_0x000107c60ab4(param_1,0);
    if (((ulong)puVar1 & 0x3f) != 0) {
      unaff_x20 = puVar1;
      func_0x000101e965a8();
      puVar5 = unaff_x20;
      FUN_101e95c20();
      unaff_x21 = &UNK_1106e9230;
      func_0x000107c613f8(&UNK_1106e9230,puVar5,0,0);
      *(undefined1 *)puVar5 = 10;
      puVar5[1] = puVar1;
      puVar7 = &UNK_1106e9388;
LAB_101e93564:
      puVar5[4] = puVar7;
      puVar5[5] = unaff_x20;
      unaff_x26 = puVar12;
      goto LAB_101e93568;
    }
    unaff_x27 = param_1;
    func_0x000107c60acc(param_1,0);
    unaff_x28 = param_1;
    func_0x000107c60abc(param_1,0);
    if ((*(long *)(unaff_x20[3] + 0x50) < (long)unaff_x27) ||
       (*(long *)(unaff_x20[3] + 0x58) < (long)unaff_x28)) {
      unaff_x20 = unaff_x28;
      func_0x000101e965e8();
      puVar5 = unaff_x20;
      FUN_101e95c20();
      unaff_x21 = &UNK_1106e9230;
      func_0x000107c613f8(&UNK_1106e9230,puVar5,0,0);
      *(undefined1 *)puVar5 = 0xc;
      puVar5[1] = unaff_x27;
      puVar5[2] = unaff_x28;
      puVar7 = &UNK_1106e9408;
      goto LAB_101e93564;
    }
    apuStack_98[0] = (undefined8 *)0x0;
    puVar4 = *(undefined1 **)PTR__kCFAllocatorDefault_11034ab78;
    ppuStack_a8 = apuStack_98;
    uStack_b0 = 0;
    func_0x000107c60aa4();
    unaff_x20 = apuStack_98[0];
    if ((apuStack_98[0] != (undefined8 *)0x0) && ((int)puVar4 == 0)) {
      func_0x000107c60ae0(param_1,1);
      func_0x000107c61428(puVar3,apuStack_98,0,0);
      puVar3 = (undefined8 *)*puVar3;
      func_0x000107c61174();
      func_0x000100069b5c(uVar2);
      puVar5 = puVar3;
      func_0x000107c61170();
      goto LAB_101e935b0;
    }
    FUN_101e95c20();
    unaff_x21 = &UNK_1106e9230;
    func_0x000107c613f8(&UNK_1106e9230,puVar4,0,0);
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined8 *)(puVar4 + 0x20) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(undefined8 *)(puVar4 + 0x28) = 0;
    func_0x000107c61654();
    func_0x000107c61170(apuStack_98[0]);
  }
  func_0x000107c60ae0(param_1,1);
  func_0x000107c61428(puVar3,apuStack_98,0,0);
  puVar3 = (undefined8 *)*puVar3;
  func_0x000107c61174();
  func_0x000100069b5c(uVar2);
  puVar5 = puVar3;
  func_0x000107c61170();
LAB_101e935b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  pcStack_b8 = FUN_101e936c0;
  lVar13 = puVar3[3];
  uVar2 = *(undefined8 *)(lVar13 + 0x10);
  uVar9 = *(undefined8 *)(lVar13 + 0x18);
  puVar6 = puVar5;
  puStack_110 = unaff_x28;
  puStack_100 = unaff_x27;
  puStack_f8 = puVar12;
  puStack_f0 = puVar1;
  puStack_e8 = unaff_x20;
  puStack_e0 = param_1;
  puStack_d8 = unaff_x21;
  puStack_d0 = puVar3;
  puStack_c8 = puVar3;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_101e96168();
  func_0x000107c613fc();
  puVar6[2] = puVar5;
  puVar12 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar12[3] = 2;
  puVar12[2] = 1;
  puVar12[4] = uVar2;
  puVar12[5] = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c61174(puVar5);
  puVar1 = puVar12;
  func_0x000100403a6c();
  func_0x000107c61588(puVar12);
  func_0x000100bcb1dc(puVar12 + 4);
  puVar6[3] = puVar1;
  puVar7 = PTR__OBJC_CLASS___MLPredictionOptions_1126ddfc8;
  func_0x000107c610f8(PTR__OBJC_CLASS___MLPredictionOptions_1126ddfc8);
  func_0x000107c453e4();
  uVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)uVar2 != 0) {
    FUN_101e92f04(&lStack_188);
    if (cStack_158 == '\x01') {
      uStack_1b8 = uStack_180;
      lStack_1c0 = lStack_188;
      uStack_1a8 = uStack_170;
      uStack_1b0 = uStack_178;
      uStack_198 = uStack_160;
      uStack_1a0 = uStack_168;
      FUN_101e95c20();
      func_0x000107c613f8(&UNK_1106e9230,uVar2,0,0);
      FUN_101e7001c(&lStack_1c0);
      func_0x000107c61654();
      func_0x000107c61574(puVar6);
      func_0x000107c61170(puVar7);
      FUN_10195d72c(&lStack_1c0);
      return puVar12;
    }
    lVar8 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    uVar2 = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar13 + 0x20);
    *(undefined8 *)(lVar8 + 0x28) = uVar2;
    uVar9 = 0;
    func_0x000101343ae0();
    *(undefined8 *)(lVar8 + 0x48) = uVar9;
    *(long *)(lVar8 + 0x30) = lStack_188;
    func_0x000107c61434(uVar2);
    lVar10 = lStack_188;
    func_0x000107c61174(lStack_188);
    lVar11 = lVar8;
    func_0x000100214a84(lVar8);
    func_0x000107c61588(lVar8);
    FUN_101e96490((undefined8 *)(lVar8 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    lVar8 = lVar11;
    func_0x000107c5f9dc(lVar11,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar11);
    func_0x000107c5711c(puVar7);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar8);
  }
  puVar12 = puVar6;
  func_0x000107c6157c();
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar12;
  func_0x000107c61174(uVar2);
  uVar9 = 0xd000000000000024;
  func_0x000100029b28(0xd000000000000024,0x800000010f017420);
  func_0x000107c61170(uVar2);
  puVar3 = (undefined8 *)puVar3[2];
  lStack_1c0 = 0;
  func_0x000107c4ec70();
  func_0x000107c61180();
  lVar8 = lStack_1c0;
  if (lStack_1c0 == 0) {
    func_0x000107c61428(puVar12,&lStack_1c0,0,0);
    puVar12 = (undefined8 *)*puVar12;
    func_0x000107c61174(puVar12);
    func_0x000100069b5c(uVar9);
    func_0x000107c61170(puVar12);
  }
  else {
    puVar1 = puVar3;
    func_0x000101e96568();
    puVar5 = puVar1;
    FUN_101e95c20();
    unaff_x21 = &UNK_1106e9230;
    func_0x000107c613f8(&UNK_1106e9230,puVar5,0,0);
    *(undefined1 *)puVar5 = 3;
    puVar5[1] = lVar8;
    puVar5[4] = &UNK_1106e92e8;
    puVar5[5] = puVar1;
    func_0x000107c61654();
    func_0x000107c61174(lVar8);
    func_0x000107c615e8(puVar3);
    func_0x000107c61428(puVar12,&lStack_1c0,0,0);
    puVar3 = (undefined8 *)*puVar12;
    func_0x000107c61174();
    func_0x000100069b5c(uVar9);
    func_0x000107c61170(puVar3);
  }
  if (unaff_x21 == (undefined *)0x0) {
    func_0x000107c61574(puVar6);
    puVar12 = *(undefined8 **)(lVar13 + 0x20);
    uVar2 = *(undefined8 *)(lVar13 + 0x28);
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(puVar12,uVar2);
    func_0x000107c6142c(uVar2);
    puVar1 = puVar3;
    func_0x000107c42ec4();
    func_0x000107c61180();
    puVar5 = puVar12;
    func_0x000107c61170();
    if (puVar1 == (undefined8 *)0x0) {
      FUN_101e95c20();
      func_0x000107c613f8(&UNK_1106e9230,puVar5,0,0);
      *(undefined1 *)puVar5 = 1;
      puVar5[2] = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      puVar5[3] = 0;
      puVar5[5] = 0;
      func_0x000107c61654();
      func_0x000107c61574(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c615e8(puVar3);
    }
    else {
      puVar5 = puVar1;
      func_0x000107c4503c();
      func_0x000107c61180();
      if (puVar5 == (undefined8 *)0x0) {
        FUN_101e95c20();
        func_0x000107c613f8(&UNK_1106e9230,puVar5,0,0);
        *(undefined1 *)puVar5 = 2;
        puVar5[2] = 0;
        puVar5[1] = 0;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[5] = 0;
        func_0x000107c61654();
        func_0x000107c61574(puVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c615e8(puVar3);
        func_0x000107c61170(puVar1);
      }
      else {
        func_0x000107c61574(puVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c615e8(puVar3);
        func_0x000107c61170(puVar1);
        puVar12 = puVar5;
      }
    }
  }
  else {
    func_0x000107c61170(puVar7);
    func_0x000107c61578(puVar6,2);
  }
  return puVar12;
}



/* Entry: 101e936c0; end: 101e93bc7;  */

undefined8 * FUN_101e936c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x20;
  undefined *unaff_x21;
  long lVar12;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  
  lVar12 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(lVar12 + 0x10);
  uVar5 = *(undefined8 *)(lVar12 + 0x18);
  puVar1 = param_1;
  FUN_101e96168();
  func_0x000107c613fc();
  puVar1[2] = param_1;
  puVar11 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar11[3] = 2;
  puVar11[2] = 1;
  puVar11[4] = uVar3;
  puVar11[5] = uVar5;
  func_0x000107c61434(uVar5);
  func_0x000107c61174(param_1);
  puVar8 = puVar11;
  func_0x000100403a6c();
  func_0x000107c61588(puVar11);
  func_0x000100bcb1dc(puVar11 + 4);
  puVar1[3] = puVar8;
  puVar2 = PTR__OBJC_CLASS___MLPredictionOptions_1126ddfc8;
  func_0x000107c610f8(PTR__OBJC_CLASS___MLPredictionOptions_1126ddfc8);
  func_0x000107c453e4();
  uVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)uVar3 != 0) {
    FUN_101e92f04(&lStack_d8);
    if (cStack_a8 == '\x01') {
      uStack_108 = uStack_d0;
      lStack_110 = lStack_d8;
      uStack_f8 = uStack_c0;
      uStack_100 = uStack_c8;
      uStack_e8 = uStack_b0;
      uStack_f0 = uStack_b8;
      FUN_101e95c20();
      func_0x000107c613f8(&UNK_1106e9230,uVar3,0,0);
      FUN_101e7001c(&lStack_110);
      func_0x000107c61654();
      func_0x000107c61574(puVar1);
      func_0x000107c61170(puVar2);
      FUN_10195d72c(&lStack_110);
      return puVar11;
    }
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar3 = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar12 + 0x20);
    *(undefined8 *)(lVar4 + 0x28) = uVar3;
    uVar5 = 0;
    func_0x000101343ae0();
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
    *(long *)(lVar4 + 0x30) = lStack_d8;
    func_0x000107c61434(uVar3);
    lVar6 = lStack_d8;
    func_0x000107c61174(lStack_d8);
    lVar7 = lVar4;
    func_0x000100214a84(lVar4);
    func_0x000107c61588(lVar4);
    FUN_101e96490((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    lVar4 = lVar7;
    func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                       );
    func_0x000107c6142c(lVar7);
    func_0x000107c5711c(puVar2);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar4);
  }
  puVar11 = puVar1;
  func_0x000107c6157c();
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar11;
  func_0x000107c61174(uVar3);
  uVar5 = 0xd000000000000024;
  func_0x000100029b28(0xd000000000000024,0x800000010f017420);
  func_0x000107c61170(uVar3);
  puVar8 = *(undefined8 **)(unaff_x20 + 0x10);
  lStack_110 = 0;
  func_0x000107c4ec70();
  func_0x000107c61180();
  lVar4 = lStack_110;
  if (lStack_110 == 0) {
    func_0x000107c61428(puVar11,&lStack_110,0,0);
    puVar11 = (undefined8 *)*puVar11;
    func_0x000107c61174(puVar11);
    func_0x000100069b5c(uVar5);
    func_0x000107c61170(puVar11);
  }
  else {
    puVar9 = puVar8;
    FUN_101e96568();
    puVar10 = puVar9;
    FUN_101e95c20();
    unaff_x21 = &UNK_1106e9230;
    func_0x000107c613f8(&UNK_1106e9230,puVar10,0,0);
    *(undefined1 *)puVar10 = 3;
    puVar10[1] = lVar4;
    puVar10[4] = &UNK_1106e92e8;
    puVar10[5] = puVar9;
    func_0x000107c61654();
    func_0x000107c61174(lVar4);
    func_0x000107c615e8(puVar8);
    func_0x000107c61428(puVar11,&lStack_110,0,0);
    puVar8 = (undefined8 *)*puVar11;
    func_0x000107c61174();
    func_0x000100069b5c(uVar5);
    func_0x000107c61170(puVar8);
  }
  if (unaff_x21 == (undefined *)0x0) {
    func_0x000107c61574(puVar1);
    puVar11 = *(undefined8 **)(lVar12 + 0x20);
    uVar3 = *(undefined8 *)(lVar12 + 0x28);
    func_0x000107c61434(uVar3);
    func_0x000107c5fadc(puVar11,uVar3);
    func_0x000107c6142c(uVar3);
    puVar9 = puVar8;
    func_0x000107c42ec4();
    func_0x000107c61180();
    puVar10 = puVar11;
    func_0x000107c61170();
    if (puVar9 == (undefined8 *)0x0) {
      FUN_101e95c20();
      func_0x000107c613f8(&UNK_1106e9230,puVar10,0,0);
      *(undefined1 *)puVar10 = 1;
      puVar10[2] = 0;
      puVar10[1] = 0;
      puVar10[4] = 0;
      puVar10[3] = 0;
      puVar10[5] = 0;
      func_0x000107c61654();
      func_0x000107c61574(puVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(puVar8);
    }
    else {
      puVar10 = puVar9;
      func_0x000107c4503c();
      func_0x000107c61180();
      if (puVar10 == (undefined8 *)0x0) {
        FUN_101e95c20();
        func_0x000107c613f8(&UNK_1106e9230,puVar10,0,0);
        *(undefined1 *)puVar10 = 2;
        puVar10[2] = 0;
        puVar10[1] = 0;
        puVar10[4] = 0;
        puVar10[3] = 0;
        puVar10[5] = 0;
        func_0x000107c61654();
        func_0x000107c61574(puVar1);
        func_0x000107c61170(puVar2);
        func_0x000107c615e8(puVar8);
        func_0x000107c61170(puVar9);
      }
      else {
        func_0x000107c61574(puVar1);
        func_0x000107c61170(puVar2);
        func_0x000107c615e8(puVar8);
        func_0x000107c61170(puVar9);
        puVar11 = puVar10;
      }
    }
  }
  else {
    func_0x000107c61170(puVar2);
    func_0x000107c61578(puVar1,2);
  }
  return puVar11;
}



/* Entry: 101e93bc8; end: 101e93f4b;  */

/* WARNING: Removing unreachable block (ram,0x000101e93eac) */
/* WARNING: Removing unreachable block (ram,0x000101e93da0) */

undefined8 * FUN_101e93bc8(undefined8 *param_1,undefined8 *param_2,uint param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x21;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  puVar4 = (undefined8 *)0xd000000000000023;
  func_0x000100029b28(0xd000000000000023,0x800000010f0173c0);
  func_0x000107c61170(uVar3);
  func_0x000107c60ad0(param_1,1);
  func_0x000107c60ad0(param_2,1);
  puVar5 = param_1;
  func_0x000107c60ac0();
  if ((int)puVar5 == 0x4c303038) {
    puVar5 = param_2;
    FUN_101e949e8(param_2,param_3 & 1);
    if (unaff_x21 == 0) {
      puVar6 = puVar5;
      func_0x000107c60ad0();
      if ((param_4 & 1) == 0) {
        func_0x0001000298f0();
        func_0x000107c61428();
        uVar7 = *puVar6;
        func_0x000107c61174(uVar7);
        uVar3 = 0xd000000000000029;
        func_0x000100029b28(0xd000000000000029,0x800000010f0173f0);
        func_0x000107c61170(uVar7);
        puVar8 = param_2;
        func_0x000107c60aac(param_2,1);
        puVar9 = puVar5;
        func_0x000107c60aac(puVar5,1);
        puVar10 = param_2;
        func_0x000107c60ab4(param_2,1);
        puVar11 = param_2;
        func_0x000107c60abc(param_2,1);
        if (SUB168(SEXT816((long)puVar10) * SEXT816((long)puVar11),8) !=
            (long)puVar10 * (long)puVar11 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e93f4c);
          (*pcVar1)();
        }
        func_0x000107c610b4(puVar9,puVar8);
        func_0x000107c61428(puVar6,auStack_90,0,0);
        uVar7 = *puVar6;
        func_0x000107c61174(uVar7);
        func_0x000100069b5c(uVar3);
        func_0x000107c61170(uVar7);
      }
      else {
        FUN_101e952a8(param_2,puVar5,param_3 & 1);
      }
      FUN_101e95ecc(param_1,puVar5);
      FUN_101e9606c(param_2,puVar5);
      func_0x000107c60ae0(puVar5,0);
      func_0x000107c60ae0(param_2,1);
      func_0x000107c60ae0(param_1,1);
      func_0x000107c61428(puVar2,auStack_c0,0,0);
      uVar3 = *puVar2;
      func_0x000107c61174(uVar3);
      func_0x000100069b5c(puVar4);
      func_0x000107c61170(uVar3);
      return puVar5;
    }
    func_0x000107c60ae0(param_2,1);
    func_0x000107c60ae0(param_1,1);
  }
  else {
    FUN_101e95c20();
    func_0x000107c613f8(&UNK_1106e9230,puVar5,0,0);
    *(undefined1 *)puVar5 = 4;
    puVar5[2] = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    puVar5[3] = 0;
    puVar5[5] = 0;
    func_0x000107c61654();
    func_0x000107c60ae0(param_2,1);
    func_0x000107c60ae0(param_1,1);
  }
  func_0x000107c61428(puVar2,auStack_78,0,0);
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(puVar4);
  func_0x000107c61170(uVar3);
  return puVar4;
}



/* Entry: 101e93f4c; end: 101e93f63;  */

void FUN_101e93f4c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1a0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e93f64,0,0);
  return;
}



/* Entry: 101e93f64; end: 101e943f7;  */

/* WARNING: Removing unreachable block (ram,0x000101e940a4) */
/* WARNING: Removing unreachable block (ram,0x000101e940ac) */
/* WARNING: Removing unreachable block (ram,0x000101e940b4) */

void FUN_101e93f64(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  code *pcVar15;
  long unaff_x22;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x198);
  FUN_101e932a8();
  iVar4 = 2;
  func_0x000100029b9c(2,0xf,4,0);
  if ((iVar4 == 0) ||
     (*(char *)(*(long *)(*(long *)(unaff_x22 + 0x1a0) + 0x18) + 0x48) != '\x01' ||
      (uVar5 & 0x100) == 0)) {
    FUN_101e932a8(*(undefined8 *)(unaff_x22 + 0x198));
    uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
    FUN_101e933ac(uVar9);
    uVar7 = uVar9;
    FUN_101e936c0();
    uVar6 = uVar7;
    FUN_101e93bc8();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101e94050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar6);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
  FUN_101e933ac();
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar7;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
  puVar8 = &UNK_110491f78;
  func_0x000107c613fc(&UNK_110491f78,0x18,7);
  *(undefined **)(unaff_x22 + 0x1b0) = puVar8;
  *(undefined8 *)(puVar8 + 0x10) = 0;
  uVar1 = (uint)uVar5 & 1;
  FUN_101e949e8(uVar9,uVar1);
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar3 = (undefined1)uVar1;
  *(undefined1 *)(unaff_x22 + 0x138) = uVar3;
  *(undefined1 *)(unaff_x22 + 0x139) = 1;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar7;
  *(undefined **)(unaff_x22 + 0x148) = puVar8;
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    plVar10 = (long *)(ulong)*(uint *)(
                                      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                      + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1c0) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_101e943f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )();
    return;
  }
  uVar5 = unaff_x22 + 0x10;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  func_0x000107c615ac(uVar5,PTR___sytN_11034f1b0 + 8);
  *(ulong *)(unaff_x22 + 400) = uVar5;
  lVar12 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar14 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xf;
  uVar11 = uVar14 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar11);
  lVar12 = 0;
  func_0x000107c5fd0c();
  pcVar15 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
  (*pcVar15)(uVar11,1,1,lVar12);
  puVar13 = &UNK_110491fa0;
  func_0x000107c613fc(&UNK_110491fa0,0x3a,7);
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined8 *)(puVar13 + 0x18) = 0;
  *(undefined8 *)(puVar13 + 0x20) = uVar6;
  *(undefined8 *)(puVar13 + 0x28) = uVar9;
  *(undefined8 *)(puVar13 + 0x30) = uVar2;
  puVar13[0x38] = uVar3;
  puVar13[0x39] = 1;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar2);
  FUN_101e9558c(uVar11,&UNK_10da1e700,puVar13);
  FUN_101e96490(uVar11,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar11);
  uVar14 = uVar14 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar14);
  (*pcVar15)();
  puVar13 = &UNK_110491fc8;
  func_0x000107c613fc(&UNK_110491fc8,0x38,7);
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined8 *)(puVar13 + 0x18) = 0;
  *(undefined **)(puVar13 + 0x20) = puVar8;
  *(undefined8 *)(puVar13 + 0x28) = uVar2;
  *(undefined8 *)(puVar13 + 0x30) = uVar7;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar8);
  func_0x000107c61174(uVar7);
  FUN_101e9558c(uVar14,&UNK_10da1e710,puVar13);
  FUN_101e96490(uVar14,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar14);
  uVar9 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar9;
  uVar14 = uVar5;
  func_0x000107c5fd8c(uVar5,PTR___sytN_11034f1b0 + 8,uVar9,PTR___ss5ErrorWS_11034ee10);
  if ((uVar14 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
              (unaff_x22 + 0x210,uVar5,FUN_101e944e4,unaff_x22 + 0x150);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
  plVar10 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d8) = plVar10;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101e94458;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101e943f8; end: 101e94457;  */

void FUN_101e943f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1c0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x200) = 0;
    pcVar1 = FUN_101e94814;
  }
  else {
    *(long *)(lVar2 + 0x208) = unaff_x20;
    pcVar1 = FUN_101e949a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e94458; end: 101e944e3;  */

void FUN_101e94458(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101e944a0,0,0);
  return;
}



/* Entry: 101e944e4; end: 101e94513;  */

void FUN_101e944e4(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x1e8) = unaff_x20;
  if (unaff_x20 == 0) {
    *(undefined1 *)(unaff_x22 + 0x211) = *(undefined1 *)(unaff_x22 + 0x210);
    pcVar1 = FUN_101e94514;
  }
  else {
    pcVar1 = FUN_101e946e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e94514; end: 101e94643;  */

void FUN_101e94514(void)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x211) == '\x01') {
    lVar1 = *(long *)(unaff_x22 + 0x1e0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1e8);
    *(long *)(unaff_x22 + 0x1f0) = lVar1;
    puVar2 = PTR___sytN_11034f1b0;
    uVar3 = unaff_x22 + 0x10;
    func_0x000107c5fd8c(uVar3,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x1c8),
                        PTR___ss5ErrorWS_11034ee10);
    if ((uVar3 & 1) != 0) {
      if (lVar1 == 0) {
        *(undefined8 *)(unaff_x22 + 0x1d0) = uVar6;
        plVar4 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x1d8) = plVar4;
        func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
        pcVar5 = FUN_101e94458;
      }
      else {
        uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
        func_0x000107c61654();
        func_0x000107c5fd94(unaff_x22 + 0x10,puVar2 + 8,uVar6,PTR___ss5ErrorWS_11034ee10);
        plVar4 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x1f8) = plVar4;
        func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
        pcVar5 = FUN_101e94644;
      }
      *plVar4 = unaff_x22;
      plVar4[1] = (long)pcVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
      return;
    }
    *(long *)(unaff_x22 + 0x1e0) = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x210,unaff_x22 + 0x10,FUN_101e944e4,unaff_x22 + 0x150);
  return;
}



/* Entry: 101e94644; end: 101e9468b;  */

void FUN_101e94644(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e9468c,0,0);
  return;
}



/* Entry: 101e9468c; end: 101e946df;  */

void FUN_101e9468c(void)

{
  long unaff_x22;
  
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x1f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e949a0,0,0);
  return;
}


