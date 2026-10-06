/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001d5f0c; end: 001d696f;  */

void FUN_001d5f0c(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  uVar4 = param_2;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = *unaff_x20;
  uVar3 = param_2;
  FUN_001b9988(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar4 & 1;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1d603c);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < (long)(lVar5 + uVar6)) {
    param_3 = param_3 & 1;
    func_0x001d632c();
    uVar3 = param_2;
    FUN_001b9988(param_2);
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1d60a0);
      (*pcVar1)();
    }
    lVar5 = *unaff_x20;
  }
  else if ((param_3 & 1) == 0) {
    func_0x001d60a0();
    lVar5 = *unaff_x20;
  }
  else {
    lVar5 = *unaff_x20;
  }
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    lVar2 = 0xaf3bc8;
    func_0x000115a8(0xaf3bc8,&UNK_007e4920);
                    /* WARNING: Could not recover jumptable at 0x001d6034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * uVar3,param_1,lVar2);
    return;
  }
  (**(code **)(lVar8 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_001d5d04(uVar3,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
               lVar5);
  return;
}



/* Entry: 001d6970; end: 001d69b3;  */

long FUN_001d6970(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 001d69b4; end: 001d69f3;  */

void FUN_001d69b4(void)

{
  _objc_opt_self(&PTR_PTR_00af3c18);
  return;
}



/* Entry: 001d69f4; end: 001d6ad3;  */

undefined * FUN_001d69f4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 auStack_88 [72];
  
  puVar5 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_0099b900;
  if (puVar5 != (undefined *)0x0) {
    func_0x000115a8(0xaf3d98,&UNK_007e4a08);
    puVar2 = puVar5;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    do {
      __ss6HasherV5_seedABSi_tcfC(auStack_88,*(undefined8 *)(puVar2 + 0x28));
      uVar3 = 0;
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar3 = uVar3 & (-1L << ((ulong)(byte)puVar2[0x20] & 0x3f) ^ 0xffffffffffffffffU);
      uVar4 = uVar3 >> 6;
      uVar3 = 1L << (uVar3 & 0x3f);
      if ((uVar3 & *(ulong *)(puVar2 + uVar4 * 8 + 0x38)) == 0) {
        *(ulong *)(puVar2 + uVar4 * 8 + 0x38) = uVar3 | *(ulong *)(puVar2 + uVar4 * 8 + 0x38);
        if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1d6ad4);
          (*pcVar1)();
        }
        *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      }
      puVar5 = puVar5 + -1;
    } while (puVar5 != (undefined *)0x0);
  }
  return puVar2;
}



/* Entry: 001d6ad4; end: 001d6adf;  */

void FUN_001d6ad4(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0xaf3d88;
  func_0x000115a8(0xaf3d88,&UNK_007e49e0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar13 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar14 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  uVar15 = *(undefined8 *)(lVar1 + 0x10);
  func_0x00788640(uVar15);
  if ((*(byte *)(lVar1 + 0x40) & 1) == 0) {
    pcStack_90 = *(code **)(lVar10 + 0x10);
    (*pcStack_90)(lVar12,uStack_80,lVar3);
    lVar4 = 0xaf3bc8;
    func_0x000115a8(0xaf3bc8,&UNK_007e4920);
    lVar8 = *(long *)(lVar4 + -8);
    puStack_98 = auStack_a0 + -extraout_x8;
    (**(code **)(lVar8 + 0x10))(lVar14,param_1,lVar4);
    (**(code **)(lVar8 + 0x38))(lVar14,0,1,lVar4);
    _swift_beginAccess(lVar1 + 0x48,auStack_78,0x21,0);
    FUN_001d56c8(lVar14,lVar12);
    _swift_endAccess(auStack_78);
    func_0x00793000(uVar15);
    lVar14 = 0;
    __sScPMa();
    puVar2 = puStack_98;
    (**(code **)(*(long *)(lVar14 + -8) + 0x38))(puStack_98,1,1,lVar14);
    puVar5 = &UNK_009b8120;
    _swift_allocObject(&UNK_009b8120,0x18,7);
    _swift_weakInit(puVar5 + 0x10,lVar1);
    (*pcStack_90)(lVar12,uStack_80,lVar3);
    uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar9 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
    uVar11 = lVar13 + uVar9 + 7 & 0xfffffffffffffff8;
    puVar6 = &UNK_009b8148;
    _swift_allocObject(&UNK_009b8148,uVar11 + 8,uVar7 | 7);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined **)(puVar6 + 0x20) = puVar5;
    (**(code **)(lVar10 + 0x20))(puVar6 + uVar9,lVar12,lVar3);
    *(undefined8 *)(puVar6 + uVar11) = uStack_88;
    FUN_001ce770(0,0,puVar2,&UNK_007e49f0,puVar6);
    _swift_release();
  }
  else {
    func_0x00793000(uVar15);
    auStack_78[0] = 1;
    uVar15 = 0xaf3bc8;
    func_0x000115a8(0xaf3bc8,&UNK_007e4920);
    __sScC6resume9returningyxn_tF(auStack_78,uVar15);
  }
  return;
}



/* Entry: 001d6ae0; end: 001d6b03;  */

void FUN_001d6ae0(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d6b04; end: 001d6b83;  */

void FUN_001d6b04(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d6b84; end: 001d6bf3;  */

void FUN_001d6b84(void)

{
  long lVar1;
  qword *pqVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  qword unaff_x22;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  pqVar2 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar2;
  *pqVar2 = unaff_x22;
  pqVar2[1] = (qword)FUN_001d6bf4;
  pqVar2[5] = uVar4;
  pqVar2[6] = unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d58a0,0,0);
  return;
}



/* Entry: 001d6bf4; end: 001d6c2f;  */

void FUN_001d6bf4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001d6c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d6c30; end: 001d6d47;  */

undefined8 FUN_001d6c30(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 001d6d48; end: 001d6d57;  */

void FUN_001d6d48(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_001d59b4(*(undefined8 *)(unaff_x22 + 0x30));
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x001d59b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001d6d58; end: 001d6d97;  */

void FUN_001d6d58(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3da0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4a10;
  _swift_getWitnessTable(&UNK_007e4a10,&UNK_009b8268);
  puRam0000000000af3da0 = puVar1;
  return;
}



/* Entry: 001d6d98; end: 001d6e37;  */

void FUN_001d6d98(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001d6e38; end: 001d6f3f;  */

void FUN_001d6e38(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 001d6f40; end: 001d73ef;  */

void FUN_001d6f40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_d0 [104];
  ulong uStack_68;
  
  func_0x000115a8(0xaf3fa0,&UNK_007e4b10);
  uVar7 = 0x13;
  __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
  lVar16 = 0;
  lVar9 = uVar7 + 0x38;
  do {
    lVar5 = lVar16 * 0x18;
    uVar1 = *(undefined8 *)(lVar5 + 0xaf3dd8);
    uVar2 = *(undefined8 *)(lVar5 + 0xaf3de0);
    uVar3 = *(undefined1 *)(lVar5 + 0xaf3de8);
    __ss6HasherV5_seedABSi_tcfC(auStack_d0,*(undefined8 *)(uVar7 + 0x28));
    func_0x00089a2c(uVar1,uVar2,uVar3);
    puVar8 = auStack_d0;
    FUN_001de260(puVar8,uVar1,uVar2,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar15 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar17 = (ulong)puVar8 & (uVar15 ^ 0xffffffffffffffff);
    uVar10 = uVar17 >> 6;
    uVar13 = *(ulong *)(lVar9 + uVar10 * 8);
    uVar14 = 1L << (uVar17 & 0x3f);
    if ((uVar14 & uVar13) != 0) {
      do {
        puVar11 = (ulong *)(*(long *)(uVar7 + 0x30) + uVar17 * 0x18);
        uVar10 = *puVar11;
        uVar13 = puVar11[1];
        uVar4 = (undefined1)puVar11[2];
        func_0x00089a2c(uVar10,uVar13,uVar4);
        uVar14 = uVar10;
        FUN_001de25c(uVar10,uVar13,uVar4,uVar1,uVar2,uVar3);
        FUN_00089cec(uVar10,uVar13,uVar4);
        if ((uVar14 & 1) != 0) {
          FUN_00089cec(uVar1,uVar2,uVar3);
          goto LAB_001d6fac;
        }
        uVar17 = uVar17 + 1 & ~uVar15;
        uVar10 = uVar17 >> 6;
        uVar13 = *(ulong *)(lVar9 + uVar10 * 8);
        uVar14 = 1L << (uVar17 & 0x3f);
      } while ((uVar14 & uVar13) != 0);
    }
    *(ulong *)(lVar9 + uVar10 * 8) = uVar14 | uVar13;
    puVar12 = (undefined8 *)(*(long *)(uVar7 + 0x30) + uVar17 * 0x18);
    *puVar12 = uVar1;
    puVar12[1] = uVar2;
    *(undefined1 *)(puVar12 + 2) = uVar3;
    if (SCARRY8(*(long *)(uVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1d71c0);
      (*pcVar6)();
    }
    *(long *)(uVar7 + 0x10) = *(long *)(uVar7 + 0x10) + 1;
LAB_001d6fac:
    lVar16 = lVar16 + 1;
    if (lVar16 == 0x13) {
      _swift_arrayDestroy(0xaf3dd8,0x13,&UNK_009b8bd0);
      uVar10 = 0;
      uStack_68 = uVar7;
      func_0x000115a8(0xaf3fa8);
      lVar9 = 1;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      _swift_retain();
      uVar13 = uVar7;
      _swift_retain();
      FUN_001d73f0();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1d71c4);
        (*pcVar6)();
      }
      lVar16 = lVar9 + (uVar13 >> 6) * 8;
      *(ulong *)(lVar16 + 0x40) = *(ulong *)(lVar16 + 0x40) | 1L << (uVar13 & 0x3f);
      *(ulong *)(*(long *)(lVar9 + 0x38) + uVar13 * 8) = uVar7;
      _swift_release(lVar9);
      FUN_001d7460(&uStack_68);
      if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1d71c8);
        (*pcVar6)();
      }
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
      lRam0000000000b65cb0 = lVar9;
      return;
    }
  } while( true );
}



/* Entry: 001d73f0; end: 001d7433;  */

void FUN_001d73f0(void)

{
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,*(undefined8 *)(unaff_x20 + 0x28));
  __ss6HasherV8_combineyySuF();
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001d7434; end: 001d745f;  */

void FUN_001d7434(void)

{
  return;
}



/* Entry: 001d7460; end: 001d74eb;  */

undefined8 FUN_001d7460(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xaf3fb0;
  func_0x000115a8(0xaf3fb0,&UNK_007e4b20);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 001d74ec; end: 001d757b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_001d74ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  _objc_allocWithZone();
  func_0x001d74a8(param_1,unaff_x20 + _DAT_00af3fb8);
  func_0x001d74a8(param_2,unaff_x20 + _DAT_00af3fc0);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  FUN_00011670(param_2);
  FUN_00011670(param_1);
  return puVar1;
}



/* Entry: 001d757c; end: 001d75db; -[_TtC21WorkSchedulerServices21WorkSchedulerServices init] */

void FUN_001d757c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WorkSchedulerServices.WorkSchedulerServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1d75a8);
  (*pcVar1)();
}



/* Entry: 001d75dc; end: 001d7613; -[_TtC21WorkSchedulerServices21WorkSchedulerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d75dc(long param_1)

{
  long lVar1;
  
  FUN_00011670(param_1 + _DAT_00af3fb8);
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_00af3fc0))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00011684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + _DAT_00af3fc0));
  return;
}



/* Entry: 001d7614; end: 001d7633;  */

void FUN_001d7614(void)

{
  _objc_opt_self(&PTR_PTR_00acb1b8);
  return;
}



/* Entry: 001d7634; end: 001d7693;  */

void FUN_001d7634(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001d7694; end: 001d76c7;  */

void FUN_001d7694(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = unaff_x20[2];
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __ss6HasherV8_combineyySuF(uVar1);
  return;
}



/* Entry: 001d76c8; end: 001d7723;  */

void FUN_001d76c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001d7724; end: 001d773f;  */

bool FUN_001d7724(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  uVar3 = param_2[2];
  if (((uVar1 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar1,param_1[1],*param_2,param_2[1],0), (uVar1 & 1) == 0)) {
    return false;
  }
  return (int)uVar2 == (int)uVar3;
}



/* Entry: 001d7740; end: 001d7793;  */

bool FUN_001d7740(ulong param_1,long param_2,int param_3,ulong param_4,long param_5,int param_6)

{
  if (((param_1 != param_4) || (param_2 != param_5)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
    return false;
  }
  return param_3 == param_6;
}



/* Entry: 001d7794; end: 001d7797;  */

void FUN_001d7794(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3ff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4ba0;
  _swift_getWitnessTable(&UNK_007e4ba0,&UNK_009b83b8);
  puRam0000000000af3ff0 = puVar1;
  return;
}



/* Entry: 001d7798; end: 001d77d7;  */

void FUN_001d7798(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3ff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4ba0;
  _swift_getWitnessTable(&UNK_007e4ba0,&UNK_009b83b8);
  puRam0000000000af3ff0 = puVar1;
  return;
}



/* Entry: 001d77d8; end: 001d77e3;  */

undefined8 * FUN_001d77d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 001d77e4; end: 001d7817;  */

undefined8 * FUN_001d77e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 001d7818; end: 001d786b;  */

undefined8 * FUN_001d7818(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 001d786c; end: 001d78a7;  */

undefined8 * FUN_001d786c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 001d78a8; end: 001d7947;  */

int FUN_001d78a8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 001d7948; end: 001d94cf;  */

undefined1  [16] FUN_001d7948(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined8 uStack_18;
  
  uVar2 = 0xe000000000000000;
  switch(param_1) {
  case 0:
    goto code_r0x001d949c;
  case 1:
    pcVar4 = "ACTION_SHEET/DUMMY";
    goto code_r0x001d9488;
  case 2:
    auVar36._8_8_ = 0xef5245544e45435f;
    auVar36._0_8_ = 0x5954495649544341;
    return auVar36;
  case 3:
    uVar3 = 0x5954495649544341;
    goto code_r0x001d8a6c;
  case 4:
    pcVar4 = "ACTIVITY_FEED_PAGE";
    goto code_r0x001d9488;
  case 5:
    auVar43._8_8_ = 0xe200000000000000;
    auVar43._0_8_ = &UNK_00004441;
    return auVar43;
  case 6:
    pcVar4 = "AdOpera/Settings";
    goto code_r0x001d9110;
  case 7:
    auVar24._8_8_ = 0xea00000000006465;
    auVar24._0_8_ = 0x6546746168436441;
    return auVar24;
  case 8:
    auVar117._8_8_ = 0xeb0000000053444e;
    auVar117._0_8_ = 0x454952465f444441;
    return auVar117;
  case 9:
    pcVar4 = "ADD_FRIENDS/RECENT_ADD";
    goto code_r0x001d9310;
  case 10:
    pcVar4 = "ADD_FRIENDS/RECENT_IGNORE";
    goto code_r0x001d92d4;
  case 0xb:
    pcVar4 = "ADD_FRIENDS/RECENT_HIDE";
    break;
  case 0xc:
    pcVar4 = "add_paid_partnership_composer_page";
    goto code_r0x001d93b4;
  case 0xd:
    auVar120._8_8_ = 0xec00000045474150;
    auVar120._0_8_ = 0x5f4f464e495f4441;
    return auVar120;
  case 0xe:
    pcVar4 = "AD_INFO_PREFERENCES";
    goto code_r0x001d92fc;
  case 0xf:
    pcVar4 = "AdPlayback/Settings";
    goto code_r0x001d92fc;
  case 0x10:
    pcVar4 = "ANIMATED_STICKERS";
    goto code_r0x001d9428;
  case 0x11:
    auVar103._8_8_ = 0xec00000065766974;
    auVar103._0_8_ = 0x63616e695f707061;
    return auVar103;
  case 0x12:
    auVar28._8_8_ = 0xec00000070755f74;
    auVar28._0_8_ = 0x726174735f707061;
    return auVar28;
  case 0x13:
    pcVar4 = "AURA_ASTROLOGICAL_SIGN";
    goto code_r0x001d9310;
  case 0x14:
    auVar137._8_8_ = 0xea00000000004d52;
    auVar137._0_8_ = 0x4148435f41525541;
    return auVar137;
  case 0x15:
    pcVar4 = "AURA_CONTEXT_CARD";
    goto code_r0x001d9428;
  case 0x16:
    auVar113._8_8_ = 0xee004b4e494c5f50;
    auVar113._0_8_ = 0x4545445f41525541;
    return auVar113;
  case 0x17:
    auVar124._8_8_ = 0xe800000000000000;
    auVar124._0_8_ = 0x5941444854524942;
    return auVar124;
  case 0x18:
    auVar123._8_8_ = 0xed0000454741505f;
    auVar123._0_8_ = 0x5941444854524942;
    return auVar123;
  case 0x19:
    pcVar4 = "BIRTHDAY_SETTINGS";
    goto code_r0x001d9428;
  case 0x1a:
    auVar31._8_8_ = 0xee0044454b4e494c;
    auVar31._0_8_ = 0x2f494a4f4d544942;
    return auVar31;
  case 0x1b:
    pcVar4 = "BITMOJI/UNLINKED";
    goto code_r0x001d9110;
  case 0x1c:
    auVar134._8_8_ = 0xee0050414e535f54;
    auVar134._0_8_ = 0x53414344414f5242;
    return auVar134;
  case 0x1d:
    pcVar4 = "CALIFORNIA_PRIVACY_CHOICES";
    goto code_r0x001d91b8;
  case 0x1e:
    auVar6._8_8_ = 0xe800000000000000;
    auVar6._0_8_ = 0x54494b5f4c4c4143;
    return auVar6;
  case 0x1f:
    pcVar4 = "CAMERA/VIEW_FINDER";
    goto code_r0x001d9488;
  case 0x20:
    pcVar4 = "CAMERA_VIEWFINDER";
    goto code_r0x001d9428;
  case 0x21:
    uVar2 = 0x4e4143;
    goto code_r0x001d8c1c;
  case 0x22:
    pcVar4 = "CAMEOS_ONBOARDING";
    goto code_r0x001d9428;
  case 0x23:
    pcVar4 = "CAMEOS_ONBOARDING/LENSES";
    goto code_r0x001d9044;
  case 0x24:
    pcVar4 = "CAMEOS_ONBOARDING/CHANGE_TARGET";
    goto code_r0x001d8c68;
  case 0x25:
    auVar14._8_8_ = 0x80000000008bb4c0;
    auVar14._0_8_ = 0xd000000000000026;
    return auVar14;
  case 0x26:
    pcVar4 = "CHANNEL_VERIFICATION";
    goto code_r0x001d9370;
  case 0x27:
    uVar2 = 0x544148432f47;
    goto code_r0x001d9278;
  case 0x28:
    auVar19._8_8_ = 0xeb00000000524547;
    auVar19._0_8_ = 0x5255425f54414843;
    return auVar19;
  case 0x29:
    pcVar4 = "MESSAGING/COUNTDOWNS_PAGE";
    goto code_r0x001d92d4;
  case 0x2a:
    uVar2 = 0x54414843;
    goto code_r0x001d82e4;
  case 0x2b:
    auVar10._8_8_ = 0xe400000000000000;
    auVar10._0_8_ = 0x54414843;
    return auVar10;
  case 0x2c:
    pcVar4 = "CHOOSE_NEW_PASSWORD";
    goto code_r0x001d92fc;
  case 0x2d:
    uVar2 = 0x41454c43;
    goto code_r0x001d839c;
  case 0x2e:
    pcVar4 = "CODE_VERIFICATION";
    goto code_r0x001d9428;
  case 0x2f:
    pcVar4 = "COMMERCE/COMPOSER_PAGE";
    goto code_r0x001d9310;
  case 0x30:
    auVar79._8_8_ = 0x80000000008bb3b0;
    auVar79._0_8_ = 0xd000000000000025;
    return auVar79;
  case 0x31:
    pcVar4 = "COMMERCE/NATIVE_PAGE";
    goto code_r0x001d9370;
  case 0x32:
    pcVar4 = "COMMERCE/NAVIGATION";
    goto code_r0x001d92fc;
  case 0x33:
    pcVar4 = "COMMERCE/PRODUCT";
    goto code_r0x001d9110;
  case 0x34:
    pcVar4 = "COMMERCE_SHOWCASE_STORE";
    break;
  case 0x35:
    pcVar4 = "COMMERCE/TOPIC_PAGE";
    goto code_r0x001d92fc;
  case 0x36:
    auVar83._8_8_ = 0xeb00000000534549;
    auVar83._0_8_ = 0x54494e554d4d4f43;
    return auVar83;
  case 0x37:
    pcVar4 = "COMMUNITIES_PROFILE";
    goto code_r0x001d92fc;
  case 0x38:
    pcVar4 = "COMMUNITY_ONBOARDING_COMPLETE";
    goto code_r0x001d9000;
  case 0x39:
    pcVar4 = "CONTENT_COMMENTS_TRAY";
    goto code_r0x001d9350;
  case 0x3a:
    pcVar4 = "CONSOLIDATED_SHOPPING_BAG";
    goto code_r0x001d92d4;
  case 0x3b:
    pcVar4 = "Content_Understanding_details";
    goto code_r0x001d9000;
  case 0x3c:
    auVar133._8_8_ = 0xed00005344524143;
    auVar133._0_8_ = 0x5f545845544e4f43;
    return auVar133;
  case 0x3d:
    pcVar4 = "CONTEXT_CARD/SWIPE_UP";
    goto code_r0x001d9350;
  case 0x3e:
    pcVar4 = "CONTEXT_CARD/TAPPABLE_ELEMENTS";
    goto code_r0x001d9330;
  case 0x3f:
    auVar5._8_8_ = 0xec000000554e454d;
    auVar5._0_8_ = 0x5f545845544e4f43;
    return auVar5;
  case 0x40:
    pcVar4 = "COS_EMAIL_REGISTRATION";
    goto code_r0x001d9310;
  case 0x41:
    pcVar4 = "COS_PHONE_REGISTRATION";
    goto code_r0x001d9310;
  case 0x42:
    pcVar4 = "COS_PHONE_VERIFICATION";
    goto code_r0x001d9310;
  case 0x43:
    auVar131._8_8_ = 0xee0052454b434950;
    auVar131._0_8_ = 0x5f5952544e554f43;
    return auVar131;
  case 0x44:
    pcVar4 = "CREATIVE_KIT/SEND_TO";
    goto code_r0x001d9370;
  case 0x45:
    auVar33._8_8_ = 0xeb00000000425548;
    auVar33._0_8_ = 0x5f524f5441455243;
    return auVar33;
  case 0x46:
    pcVar4 = "CREATOR_MY_SUB_MANAGEMENT";
    goto code_r0x001d92d4;
  case 0x47:
    pcVar4 = "CREDIT_CARD_EDIT_VIEW";
    goto code_r0x001d9350;
  case 0x48:
    pcVar4 = "DATA_UNAVAILABLE";
    goto code_r0x001d9110;
  case 0x49:
    auVar38._8_8_ = 0xef45524148532f4b;
    auVar38._0_8_ = 0x4e494c5f50454544;
    return auVar38;
  case 0x4a:
    auVar17._8_8_ = 0xeb00000000544e45;
    auVar17._0_8_ = 0x4d504f4c45564544;
    return auVar17;
  case 0x4b:
    auVar30._8_8_ = 0xef524f5443455249;
    auVar30._0_8_ = 0x442f4152454d4143;
    return auVar30;
  case 0x4c:
    uVar3 = 0x5245564f43534944;
code_r0x001d8a6c:
    auVar78._8_8_ = 0xed0000444545465f;
    auVar78._0_8_ = uVar3;
    return auVar78;
  case 0x4d:
    pcVar4 = "DISCOVER_FEED/BADGE";
    goto code_r0x001d92fc;
  case 0x4e:
    pcVar4 = "DISCOVER_FEED/DEEPLINK_WRAPPER";
    goto code_r0x001d9330;
  case 0x4f:
    pcVar4 = "DISCOVER_FEED/MANAGEMENT_SETTINGS";
    goto code_r0x001d87b0;
  case 0x50:
    pcVar4 = "DISCOVER_FEED/RECOMMENDED_ACCOUNTS";
    goto code_r0x001d93b4;
  case 0x51:
    pcVar4 = "DISCOVER_FEED/SUBSCRIPTIONS";
    goto code_r0x001d8d9c;
  case 0x52:
    pcVar4 = "DISCOVER_MANAGEMENT";
    goto code_r0x001d92fc;
  case 0x53:
    pcVar4 = "DISCOVER_STORIES_PLAYBACK";
    goto code_r0x001d92d4;
  case 0x54:
    auVar51._8_8_ = 0xec000000454d414e;
    auVar51._0_8_ = 0x5f59414c50534944;
    return auVar51;
  case 0x55:
    pcVar4 = "DOWNLOAD_MY_DATA";
    goto code_r0x001d9110;
  case 0x56:
    auVar67._8_8_ = 0xe600000000000000;
    auVar67._0_8_ = 0x534d41455244;
    return auVar67;
  case 0x57:
    pcVar4 = "DREAMS_COMPOSER_PAGE";
    goto code_r0x001d9370;
  case 0x58:
    pcVar4 = "dreams_composer_page";
    goto code_r0x001d9370;
  case 0x59:
    uVar2 = 0x5f4c49414d45;
    goto code_r0x001d81c8;
  case 0x5a:
    auVar9._8_8_ = 0xee0053474e495454;
    auVar9._0_8_ = 0x45535f4c49414d45;
    return auVar9;
  case 0x5b:
    pcVar4 = "EMAIL_SETTINGS_PASSWORD";
    break;
  case 0x5c:
    pcVar4 = "EMAIL_VERIFICATION";
    goto code_r0x001d9488;
  case 0x5d:
    pcVar4 = "EXPANDED_STORY_FEED";
    goto code_r0x001d92fc;
  case 0x5e:
    auVar114._8_8_ = 0xe800000000000000;
    auVar114._0_8_ = 0x4c414e5245545845;
    return auVar114;
  case 0x5f:
    auVar119._8_8_ = 0xed00005245544e45;
    auVar119._0_8_ = 0x435f594c494d4146;
    return auVar119;
  case 0x60:
    pcVar4 = "FAMILY_CENTER_MANAGE_PAGE";
    goto code_r0x001d92d4;
  case 0x61:
    pcVar4 = "FAMILY_CENTER_SETUP_PAGE";
    goto code_r0x001d9044;
  case 0x62:
    pcVar4 = "FAMILY_CENTER_VIEW_FRIENDS";
    goto code_r0x001d91b8;
  case 99:
    pcVar4 = "FAVORITES_CATALOG";
    goto code_r0x001d9428;
  case 100:
    auVar7._8_8_ = 0xe800000000000000;
    auVar7._0_8_ = 0x4b43414244454546;
    return auVar7;
  case 0x65:
    pcVar4 = "FLORIDA_PRIVACY_CHOICES";
    break;
  case 0x66:
    uVar2 = 0x444e45495246;
    goto code_r0x001d8108;
  case 0x67:
    uVar2 = 0x444545462f47;
code_r0x001d9278:
    auVar122._8_8_ = uVar2 | 0xee00000000000000;
    auVar122._0_8_ = 0x4e4947415353454d;
    return auVar122;
  case 0x68:
    uVar3 = 0x2f53444e45495246;
    goto code_r0x001d894c;
  case 0x69:
    auVar106._8_8_ = 0xed00004552414853;
    auVar106._0_8_ = 0x2f53444e45495246;
    return auVar106;
  case 0x6a:
    auVar8._8_8_ = 0x80000000008baec0;
    auVar8._0_8_ = 0xd00000000000002c;
    return auVar8;
  case 0x6b:
    pcVar4 = "GALLERY/ADD_TO_STORY";
    goto code_r0x001d9370;
  case 0x6c:
    uVar2 = 0x5f4c4c41;
    goto code_r0x001d8848;
  case 0x6d:
    uVar2 = 0xec00000053424154;
    goto code_r0x001d9258;
  case 0x6e:
    uVar2 = 0x50554b434142;
    goto code_r0x001d9254;
  case 0x6f:
    uVar2 = 0x4553574f5242;
code_r0x001d9254:
    uVar2 = uVar2 | 0xee00000000000000;
    goto code_r0x001d9258;
  case 0x70:
    pcVar4 = "GALLERY/CAMERA_ROLL_TAB";
    break;
  case 0x71:
    pcVar4 = "GALLERY/FRIENDS_TAB";
    goto code_r0x001d92fc;
  case 0x72:
    pcVar4 = "GALLERY/CONSOLIDATED_AUTO_SAVED_STORIES";
    goto code_r0x001d8808;
  case 0x73:
    pcVar4 = "GALLERY/DIRECTOR_MODE_DRAFTS";
    goto code_r0x001d8e4c;
  case 0x74:
    pcVar4 = "GALLERY/EDIT_STORY";
    goto code_r0x001d9488;
  case 0x75:
    pcVar4 = "GALLERY/FAVORITE_SNAPS_STORY";
    goto code_r0x001d8e4c;
  case 0x76:
    auVar21._8_8_ = 0xee0052454b434950;
    auVar21._0_8_ = 0x5f5952454c4c4147;
    return auVar21;
  case 0x77:
    pcVar4 = "GALLERY/SNAPS_PROTOTYPE";
    break;
  case 0x78:
    pcVar4 = "GALLERY/FULL_SEARCH_VIEW";
    goto code_r0x001d9044;
  case 0x79:
    pcVar4 = "GALLERY/IMPORT_CAMERA_ROLL";
    goto code_r0x001d91b8;
  case 0x7a:
    pcVar4 = "GALLERY_LINK_MANAGEMENT";
    break;
  case 0x7b:
    pcVar4 = "GALLERY/LOCKED_SNAPS";
    goto code_r0x001d9370;
  case 0x7c:
    pcVar4 = "GALLERY/MEO_FLOW";
    goto code_r0x001d9110;
  case 0x7d:
    uVar2 = 0x5f4f454d;
code_r0x001d8848:
    uVar2 = uVar2 | 0xef42415400000000;
code_r0x001d9258:
    auVar121._8_8_ = uVar2;
    auVar121._0_8_ = 0x2f5952454c4c4147;
    return auVar121;
  case 0x7e:
    pcVar4 = "GALLERY_MYSTORY_SAVE_SETTINGS";
    goto code_r0x001d9000;
  case 0x7f:
    uVar2 = 0xef57454956455250;
    goto code_r0x001d9258;
  case 0x80:
    pcVar4 = "GALLERY_SAVE_TO_SETTINGS";
    goto code_r0x001d9044;
  case 0x81:
    pcVar4 = "GALLERY/SCREENSHOP_TAB";
    goto code_r0x001d9310;
  case 0x82:
    pcVar4 = "GALLERY_SETTINGS";
    goto code_r0x001d9110;
  case 0x83:
    pcVar4 = "GALLERY/STORIES_TAB";
    goto code_r0x001d92fc;
  case 0x84:
    pcVar4 = "GALLERY/WEB_VIEW";
    goto code_r0x001d9110;
  case 0x85:
    auVar91._8_8_ = 0xed0000454c49464f;
    auVar91._0_8_ = 0x52505f50554f5247;
    return auVar91;
  case 0x86:
    pcVar4 = "CAMERA/IMPORT_TRIMMER";
    goto code_r0x001d9350;
  case 0x87:
    auVar50._8_8_ = 0xe600000000000000;
    auVar50._0_8_ = 0x616c61706d69;
    return auVar50;
  case 0x88:
    pcVar4 = "IMPALA/PUBLIC_PROFILE";
    goto code_r0x001d9350;
  case 0x89:
    pcVar4 = "IMPALA/PUBLISHER_PROFILE";
    goto code_r0x001d9044;
  case 0x8a:
    auVar93._8_8_ = 0xef5245564f454b41;
    auVar93._0_8_ = 0x545f5050415f4e49;
    return auVar93;
  case 0x8b:
    pcVar4 = "IN_LENS_CREATION_TRENDING_LIST";
code_r0x001d9330:
    auVar128._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar128._0_8_ = 0xd00000000000001e;
    return auVar128;
  case 0x8c:
    pcVar4 = "LEGAL_COMPLIANCE_TAKEOVER";
    goto code_r0x001d92d4;
  case 0x8d:
    auVar82._8_8_ = 0xed00005345534e45;
    auVar82._0_8_ = 0x4c2f4152454d4143;
    return auVar82;
  case 0x8e:
    auVar55._8_8_ = 0xed00005245524f4c;
    auVar55._0_8_ = 0x5058455f534e454c;
    return auVar55;
  case 0x8f:
    pcVar4 = "LOCATION_SHARING_SETTINGS";
    goto code_r0x001d92d4;
  case 0x90:
    auVar97._8_8_ = 0xee00524554534947;
    auVar97._0_8_ = 0x45525f4e49474f4c;
    return auVar97;
  case 0x91:
    auVar13._8_8_ = 0xea00000000004544;
    auVar13._0_8_ = 0x4f435f434947414d;
    return auVar13;
  case 0x92:
    pcVar4 = "PREVIEW_SETTINGS";
    goto code_r0x001d9110;
  case 0x93:
    auVar102._8_8_ = 0xe300000000000000;
    auVar102._0_8_ = 0x50414d;
    return auVar102;
  case 0x94:
    pcVar4 = "MapPlacesValdiVideoView";
    break;
  case 0x95:
    pcVar4 = "MAP/SECONDARY_LOCATION_DEVICE";
    goto code_r0x001d9000;
  case 0x96:
    pcVar4 = "MESSAGING/CONTEXT";
    goto code_r0x001d9428;
  case 0x97:
    auVar105._8_8_ = 0xea00000000007961;
    auVar105._0_8_ = 0x72542f73696e694d;
    return auVar105;
  case 0x98:
    auVar107._8_8_ = 0xef53474e49545445;
    auVar107._0_8_ = 0x535f454c49424f4d;
    return auVar107;
  case 0x99:
    auVar25._8_8_ = 0xe400000000000000;
    auVar25._0_8_ = 0x4b434f4d;
    return auVar25;
  case 0x9a:
    auVar53._8_8_ = 0xea00000000005441;
    auVar53._0_8_ = 0x48435f4c41444f4d;
    return auVar53;
  case 0x9b:
    auVar20._8_8_ = 0xec0000004c4c4143;
    auVar20._0_8_ = 0x5f52414c55444f4d;
    return auVar20;
  case 0x9c:
    pcVar4 = "SCPageNameMultiProfileSwitcherTray";
code_r0x001d93b4:
    auVar132._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar132._0_8_ = 0xd000000000000022;
    return auVar132;
  case 0x9d:
    pcVar4 = "MUSIC/MUSIC PICKER";
    goto code_r0x001d9488;
  case 0x9e:
    pcVar4 = "MUSIC/MUSIC PICKER LIST";
    break;
  case 0x9f:
    auVar11._8_8_ = 0xee0053444e454952;
    auVar11._0_8_ = 0x465f4c415554554d;
    return auVar11;
  case 0xa0:
    auVar22._8_8_ = 0xea00000000005344;
    auVar22._0_8_ = 0x4e454952465f594d;
    return auVar22;
  case 0xa1:
    auVar104._8_8_ = 0xe900000000000073;
    auVar104._0_8_ = 0x74726f706552794d;
    return auVar104;
  case 0xa2:
    pcVar4 = "COMMERCE/MY_SHOPPING_BAG";
    goto code_r0x001d9044;
  case 0xa3:
    pcVar4 = "BUSINESS/AD_NATIVE_CREATION_PAGE";
    goto code_r0x001d8ce4;
  case 0xa4:
    auVar15._8_8_ = 0x80000000008baa20;
    auVar15._0_8_ = 0xd00000000000002b;
    return auVar15;
  case 0xa5:
    pcVar4 = "NEARBY_FRIENDS_PAGE";
    goto code_r0x001d92fc;
  case 0xa6:
    pcVar4 = "NON_VERIFIED_COMMUNITIES_PROFILE";
    goto code_r0x001d8ce4;
  case 0xa7:
    uVar3 = 0x4143494649544f4e;
    goto code_r0x001d8e80;
  case 0xa8:
    auVar68._8_8_ = 0xec000000474e4944;
    auVar68._0_8_ = 0x4e414c5f564c444f;
    return auVar68;
  case 0xa9:
    auVar42._8_8_ = 0xeb00000000594649;
    auVar42._0_8_ = 0x5245565f564c444f;
    return auVar42;
  case 0xaa:
    auVar26._8_8_ = 0xed00004e49474f4c;
    auVar26._0_8_ = 0x5f5041545f454e4f;
    return auVar26;
  case 0xab:
    auVar35._8_8_ = 0xe900000000000053;
    auVar35._0_8_ = 0x44412f415245504f;
    return auVar35;
  case 0xac:
    auVar27._8_8_ = 0xe900000000000061;
    auVar27._0_8_ = 0x7265704f61727541;
    return auVar27;
  case 0xad:
    auVar12._8_8_ = 0xee00617265704f73;
    auVar12._0_8_ = 0x65736e654c626557;
    return auVar12;
  case 0xae:
    auVar116._8_8_ = 0xe700000000000000;
    auVar116._0_8_ = 0x544355444f5250;
    return auVar116;
  case 0xaf:
    auVar111._8_8_ = 0xe500000000000000;
    auVar111._0_8_ = 0x45524f5453;
    return auVar111;
  case 0xb0:
    pcVar4 = "DISCOVER/EDITION";
    goto code_r0x001d9110;
  case 0xb1:
    pcVar4 = "OPERA/FILTER_ATTACHMENT";
    break;
  case 0xb2:
    auVar41._8_8_ = 0xed00005952454c4c;
    auVar41._0_8_ = 0x41472f415245504f;
    return auVar41;
  case 0xb3:
    pcVar4 = "OPERA/LENS_STORIES";
    goto code_r0x001d9488;
  case 0xb4:
    pcVar4 = "OPERA/MAP_SCREENSHOT";
    goto code_r0x001d9370;
  case 0xb5:
    auVar112._8_8_ = 0xed000053544e454d;
    auVar112._0_8_ = 0x4f4d2f415245504f;
    return auVar112;
  case 0xb6:
    auVar18._8_8_ = 0xef414944454d5f4c;
    auVar18._0_8_ = 0x52552f415245504f;
    return auVar18;
  case 0xb7:
    auVar32._8_8_ = 0xea00000000005041;
    auVar32._0_8_ = 0x4e532f415245504f;
    return auVar32;
  case 0xb8:
    auVar34._8_8_ = 0xea00000000005245;
    auVar34._0_8_ = 0x53552f59524f5453;
    return auVar34;
  case 0xb9:
    pcVar4 = "OTP_TWO_FACTOR_CODE_CONFIRMATION";
    goto code_r0x001d8ce4;
  case 0xba:
    pcVar4 = "SCPageNamePartnershipAdCode";
    goto code_r0x001d8d9c;
  case 0xbb:
    auVar37._8_8_ = 0xe800000000000000;
    auVar37._0_8_ = 0x44524f5753534150;
    return auVar37;
  case 0xbc:
    pcVar4 = "PASSWORD_RESET_SUCCESS";
    goto code_r0x001d9310;
  case 0xbd:
    pcVar4 = "PASSWORD_SETTINGS";
    goto code_r0x001d9428;
  case 0xbe:
    pcVar4 = "PASSWORD_SETTINGS_REAUTH";
    goto code_r0x001d9044;
  case 0xbf:
    pcVar4 = "Add Shipping Address";
    goto code_r0x001d9370;
  case 0xc0:
    auVar23._8_8_ = 0xef736c6961746544;
    auVar23._0_8_ = 0x20746361746e6f43;
    return auVar23;
  case 0xc1:
    auVar98._8_8_ = 0xee00646f6874654d;
    auVar98._0_8_ = 0x20746e656d796150;
    return auVar98;
  case 0xc2:
    pcVar4 = "PAYMENT_METHODS_LIST_VIEW";
    goto code_r0x001d92d4;
  case 0xc3:
    auVar69._8_8_ = 0xea00000000004544;
    auVar69._0_8_ = 0x4f435f454e4f4850;
    return auVar69;
  case 0xc4:
    uVar2 = 0x5f454e4f4850;
code_r0x001d81c8:
    auVar44._0_8_ = uVar2 | 0x4e45000000000000;
    auVar44._8_8_ = 0xeb00000000595254;
    return auVar44;
  case 0xc5:
    pcVar4 = "PHONE_VERIFICATION";
    goto code_r0x001d9488;
  case 0xc6:
    auVar96._8_8_ = 0xec000000474e4954;
    auVar96._0_8_ = 0x4649472f53554c50;
    return auVar96;
  case 199:
    auVar109._8_8_ = 0xef544e454d454741;
    auVar109._0_8_ = 0x4e414d2f53554c50;
    return auVar109;
  case 200:
    auVar47._8_8_ = 0xea00000000004f49;
    auVar47._0_8_ = 0x422f4e494c52454d;
    return auVar47;
  case 0xc9:
    pcVar4 = "PLUS/STREAK_RESTORE";
    goto code_r0x001d92fc;
  case 0xca:
    pcVar4 = "PLUS/STREAK_RESTORE_SUPPORT";
    goto code_r0x001d8d9c;
  case 0xcb:
    auVar80._8_8_ = 0xee00454249524353;
    auVar80._0_8_ = 0x4255532f53554c50;
    return auVar80;
  case 0xcc:
    auVar49._8_8_ = 0x80000000008ba7d0;
    auVar49._0_8_ = 0xd000000000000028;
    return auVar49;
  case 0xcd:
    auVar94._8_8_ = 0x80000000008ba7a0;
    auVar94._0_8_ = 0xd00000000000002d;
    return auVar94;
  case 0xce:
    auVar101._8_8_ = 0xee00574549564552;
    auVar101._0_8_ = 0x502f4152454d4143;
    return auVar101;
  case 0xcf:
    pcVar4 = "PREVIEW_CAPTION_EDITOR";
    goto code_r0x001d9310;
  case 0xd0:
    pcVar4 = "PREVIEW_DRAWING_EDITOR";
    goto code_r0x001d9310;
  case 0xd1:
    pcVar4 = "PREVIEW_MUSIC_PICKER";
    goto code_r0x001d9370;
  case 0xd2:
    pcVar4 = "PREVIEW_SNAP_EDITOR";
    goto code_r0x001d92fc;
  case 0xd3:
    pcVar4 = "PREVIEW_STICKER_EDITOR";
    goto code_r0x001d9310;
  case 0xd4:
    pcVar4 = "PREVIEW_STICKER_PICKER";
    goto code_r0x001d9310;
  case 0xd5:
    pcVar4 = "PREVIEW_TIMER_PAGE";
    goto code_r0x001d9488;
  case 0xd6:
    pcVar4 = "SETTINGS/CLEAR_DATA";
    goto code_r0x001d92fc;
  case 0xd7:
    auVar84._8_8_ = 0xee005943494c4f50;
    auVar84._0_8_ = 0x5f59434156495250;
    return auVar84;
  case 0xd8:
    auVar16._8_8_ = 0xe700000000000000;
    auVar16._0_8_ = 0x454c49464f5250;
    return auVar16;
  case 0xd9:
    pcVar4 = "PROFILE/ADDED_ME";
    goto code_r0x001d9110;
  case 0xda:
    pcVar4 = "PROFILE/ADD_FRIENDS";
    goto code_r0x001d92fc;
  case 0xdb:
    pcVar4 = "PROFILE/ADD_FROM_CONTACTS";
    goto code_r0x001d92d4;
  case 0xdc:
    uVar2 = 0x534d52414843;
    goto code_r0x001d8934;
  case 0xdd:
    auVar72._8_8_ = 0x80000000008ba600;
    auVar72._0_8_ = 0xd00000000000001e;
    return auVar72;
  case 0xde:
    pcVar4 = "PROFILE/COUNTDOWNS_PAGE";
    break;
  case 0xdf:
    pcVar4 = "PROFILE/GROUP_CHAT";
    goto code_r0x001d9488;
  case 0xe0:
    uVar2 = 0x414c41504d49;
code_r0x001d8934:
    uVar2 = uVar2 | 0xee00000000000000;
code_r0x001d8c40:
    auVar88._8_8_ = uVar2;
    auVar88._0_8_ = 0x2f454c49464f5250;
    return auVar88;
  case 0xe1:
    pcVar4 = "PROFILE/IMPALA_PUBLIC";
    goto code_r0x001d9350;
  case 0xe2:
    pcVar4 = "PROFILE/IMPALA_SNAP_INSIGHTS";
    goto code_r0x001d8e4c;
  case 0xe3:
    uVar3 = 0x2f454c49464f5250;
code_r0x001d894c:
    auVar71._8_8_ = 0xea0000000000594d;
    auVar71._0_8_ = uVar3;
    return auVar71;
  case 0xe4:
    pcVar4 = "PROFILE/MY_FRIENDS_AND_CONTACTS";
    goto code_r0x001d8c68;
  case 0xe5:
    pcVar4 = "PROFILE_SAVED_MEDIA";
code_r0x001d92fc:
    auVar126._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar126._0_8_ = 0xd000000000000013;
    return auVar126;
  case 0xe6:
    pcVar4 = "PROFILE/SETTINGS";
    goto code_r0x001d9110;
  case 0xe7:
    uVar2 = 0xef474e4952414853;
    goto code_r0x001d8c40;
  case 0xe8:
    pcVar4 = "PROFILE/STORY_MANAGEMENT";
    goto code_r0x001d9044;
  case 0xe9:
    uVar2 = 0x53504954;
    goto code_r0x001d8c3c;
  case 0xea:
    uVar2 = 0xef4e574f4e4b4e55;
    goto code_r0x001d8c40;
  case 0xeb:
    uVar2 = 0x52455355;
code_r0x001d8c3c:
    uVar2 = uVar2 | 0xec00000000000000;
    goto code_r0x001d8c40;
  case 0xec:
    pcVar4 = "SCPageNamePromotionInsightsTray";
    goto code_r0x001d8c68;
  case 0xed:
    uVar2 = 0x43494c425550;
code_r0x001d8108:
    auVar40._0_8_ = uVar2 | 0x505f000000000000;
    auVar40._8_8_ = 0xee00454c49464f52;
    return auVar40;
  case 0xee:
    pcVar4 = "PUBLIC_PROFILE_MANAGEMENT";
    goto code_r0x001d92d4;
  case 0xef:
    pcVar4 = "QUICKADD_PRIVACY_SETTINGS";
    goto code_r0x001d92d4;
  case 0xf0:
    pcVar4 = "RECENTLY_VIEWED_CATALOG";
    break;
  case 0xf1:
    pcVar4 = "RECIPIENT_PICKER";
    goto code_r0x001d9110;
  case 0xf2:
    pcVar4 = "RECOVER_PASSWORD_PHONE_ENTRY";
    goto code_r0x001d8e4c;
  case 0xf3:
    pcVar4 = "RECOVER_PASSWORD_USER_CHALLENGE";
    goto code_r0x001d8c68;
  case 0xf4:
    pcVar4 = "RECOVERY_CODE_PASSWORD";
    goto code_r0x001d9310;
  case 0xf5:
    uVar3 = 0x4152545349474552;
code_r0x001d8e80:
    auVar100._8_8_ = 0xec0000004e4f4954;
    auVar100._0_8_ = uVar3;
    return auVar100;
  case 0xf6:
    pcVar4 = "REGISTRATION/INVITE_CONTACTS";
code_r0x001d8e4c:
    auVar99._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar99._0_8_ = 0xd00000000000001c;
    return auVar99;
  case 0xf7:
    pcVar4 = "SCRootContainerViewController";
    goto code_r0x001d9000;
  case 0xf8:
    auVar29._8_8_ = 0xe400000000000000;
    auVar29._0_8_ = 0x4e414353;
    return auVar29;
  case 0xf9:
    pcVar4 = "SCScanResultsViewController";
    goto code_r0x001d8d9c;
  case 0xfa:
    pcVar4 = "SCREENSHOP_CATALOG";
    goto code_r0x001d9488;
  case 0xfb:
    auVar39._8_8_ = 0xe600000000000000;
    auVar39._0_8_ = 0x484352414553;
    return auVar39;
  case 0xfc:
    uVar2 = 0x2f534441;
    goto code_r0x001d8c08;
  case 0xfd:
    uVar2 = 0xed00004843524145;
    goto code_r0x001d8c20;
  case 0xfe:
    uVar2 = 0x54414843;
    goto code_r0x001d88e0;
  case 0xff:
    uVar3 = 0x5245564f43534944;
    goto code_r0x001d8218;
  case 0x100:
    uVar2 = 0x44454546;
code_r0x001d88e0:
    auVar70._0_8_ = uVar2 | 0x4145532f00000000;
    auVar70._8_8_ = 0xeb00000000484352;
    return auVar70;
  case 0x101:
    pcVar4 = "LENS_EXPLORER/SEARCH";
    goto code_r0x001d9370;
  case 0x102:
    uVar2 = 0x2f50414d;
    goto code_r0x001d8c08;
  case 0x103:
    uVar3 = 0x534549524f4d454d;
code_r0x001d8218:
    auVar45._8_8_ = 0xef4843524145532f;
    auVar45._0_8_ = uVar3;
    return auVar45;
  case 0x104:
    uVar2 = 0x2f415245504f;
    goto code_r0x001d8c8c;
  case 0x105:
    uVar2 = 0x2f59524f5453;
code_r0x001d8c8c:
    auVar90._0_8_ = uVar2 | 0x4553000000000000;
    auVar90._8_8_ = 0xec00000048435241;
    return auVar90;
  case 0x106:
    pcVar4 = "SEARCH/STORY_SHARE";
    goto code_r0x001d9488;
  case 0x107:
    pcVar4 = "WEB_ATTACHMENT/SEARCH";
    goto code_r0x001d9350;
  case 0x108:
    uVar2 = 0x2f424557;
code_r0x001d8c08:
    auVar86._0_8_ = uVar2 | 0x5241455300000000;
    auVar86._8_8_ = 0xea00000000004843;
    return auVar86;
  case 0x109:
    uVar2 = 0x444e45;
code_r0x001d8c1c:
    uVar2 = uVar2 | 0xeb00000000000000;
code_r0x001d8c20:
    auVar87._8_8_ = uVar2;
    auVar87._0_8_ = 0x532f4152454d4143;
    return auVar87;
  case 0x10a:
    pcVar4 = "SEND_TO/SHARE_FRIEND_BASE";
    goto code_r0x001d92d4;
  case 0x10b:
    auVar81._8_8_ = 0xe800000000000000;
    auVar81._0_8_ = 0x53474e4954544553;
    return auVar81;
  case 0x10c:
    pcVar4 = "SETTINGS/ACCOUNT_STATUS";
    break;
  case 0x10d:
    pcVar4 = "SETTINGS/AD_OVERRIDES";
    goto code_r0x001d9350;
  case 0x10e:
    pcVar4 = "SETTINGS/APP_APPEARANCE";
    break;
  case 0x10f:
    pcVar4 = "SETTINGS/BLOCKED_USERS";
    goto code_r0x001d9310;
  case 0x110:
    pcVar4 = "SETTINGS/CONNECTED_APPS";
    break;
  case 0x111:
    pcVar4 = "SETTINGS/CONTACT_ME";
    goto code_r0x001d89fc;
  case 0x112:
    pcVar4 = "SETTINGS/CUSTOM_STORY";
    goto code_r0x001d9350;
  case 0x113:
    pcVar4 = "SETTINGS/DELETE_ACCOUNT";
    break;
  case 0x114:
    pcVar4 = "SETTINGS/DYNAMIC_DELIVERY";
    goto code_r0x001d92d4;
  case 0x115:
    pcVar4 = "SETTINGS/LOG_OUT";
    goto code_r0x001d9110;
  case 0x116:
    pcVar4 = "SETTINGS/MUSIC_NOW_PLAYING";
    goto code_r0x001d91b8;
  case 0x117:
    pcVar4 = "SETTINGS/MY_ACCOUNT";
    goto code_r0x001d89fc;
  case 0x118:
    uVar3 = 0xef5050415f594d2f;
    goto code_r0x001d8bbc;
  case 0x119:
    pcVar4 = "SETTINGS/NOTIFICATIONS";
    goto code_r0x001d9310;
  case 0x11a:
    pcVar4 = "SETTINGS/OTHER_LEGAL";
code_r0x001d9370:
    auVar130._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar130._0_8_ = 0xd000000000000014;
    return auVar130;
  case 0x11b:
    pcVar4 = "SETTINGS/OUR_STORY";
    goto code_r0x001d9488;
  case 0x11c:
    pcVar4 = "SC_SETTINGS_PASSWORD_REAUTH";
    goto code_r0x001d8d9c;
  case 0x11d:
    pcVar4 = "SETTINGS/PRIVACY_AND_DATA";
    goto code_r0x001d92d4;
  case 0x11e:
    pcVar4 = "SETTINGS/PUBLIC_PROFILE";
    break;
  case 0x11f:
    uVar3 = 0xef4d415a4148532f;
code_r0x001d8bbc:
    auVar85._8_8_ = uVar3;
    auVar85._0_8_ = 0x53474e4954544553;
    return auVar85;
  case 0x120:
    pcVar4 = "SETTINGS/SUPPORT_AND_SAFETY";
    goto code_r0x001d8d9c;
  case 0x121:
    pcVar4 = "SETTINGS_TWO_FA_AUTH_APP_CHOICE";
code_r0x001d8c68:
    auVar89._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar89._0_8_ = 0xd00000000000001f;
    return auVar89;
  case 0x122:
    pcVar4 = "SETTINGS_TWO_FA_DISABLED_V2";
code_r0x001d8d9c:
    auVar95._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar95._0_8_ = 0xd00000000000001b;
    return auVar95;
  case 0x123:
    pcVar4 = "SETTINGS_TWO_FA_ENABLED_V2";
    goto code_r0x001d91b8;
  case 0x124:
    pcVar4 = "SETTINGS_TFA_LOAD_PAGE";
    goto code_r0x001d9310;
  case 0x125:
    pcVar4 = "SETTINGS_TWO_FA_OTP_PROMPT";
    goto code_r0x001d91b8;
  case 0x126:
    pcVar4 = "SETTINGS_TWO_FA_RECOVERY_CODE";
    goto code_r0x001d9000;
  case 0x127:
    pcVar4 = "SETTINGS_TWO_FA_RECOVERY_CODE_GENERATED";
code_r0x001d8808:
    auVar66._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar66._0_8_ = 0xd000000000000027;
    return auVar66;
  case 0x128:
    pcVar4 = "SETTINGS_TWO_FA_SETUP_SECOND_AUTH";
    goto code_r0x001d87b0;
  case 0x129:
    pcVar4 = "SETTINGS_TWO_FA_SETUP_TPA";
    goto code_r0x001d92d4;
  case 0x12a:
    pcVar4 = "SETTINGS_TWO_FA_SMS_PROMPT";
    goto code_r0x001d91b8;
  case 299:
    pcVar4 = "SETTINGS_TWO_FA_TPA_MANUAL_SETUP";
code_r0x001d8ce4:
    auVar92._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar92._0_8_ = 0xd000000000000020;
    return auVar92;
  case 300:
    pcVar4 = "SETTINGS_TWO_FA_WARNING";
    break;
  case 0x12d:
    auVar77._8_8_ = 0xec00000054524f50;
    auVar77._0_8_ = 0x455232454b414853;
    return auVar77;
  case 0x12e:
    pcVar4 = "SHOWCASE_CATALOG";
code_r0x001d9110:
    auVar115._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar115._0_8_ = 0xd000000000000010;
    return auVar115;
  case 0x12f:
    uVar2 = 0x574f4853;
code_r0x001d82e4:
    auVar48._0_8_ = uVar2 | 0x4545465f00000000;
    auVar48._8_8_ = 0xe900000000000044;
    return auVar48;
  case 0x130:
    auVar46._8_8_ = 0xef52454b4349505f;
    auVar46._0_8_ = 0x45444f4350414e53;
    return auVar46;
  case 0x131:
    pcVar4 = "SNAPCODE_PICKER_FROM_SETTINGS";
code_r0x001d9000:
    auVar108._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar108._0_8_ = 0xd00000000000001d;
    return auVar108;
  case 0x132:
    pcVar4 = "SNAPCODE_SETTINGS";
    goto code_r0x001d9428;
  case 0x133:
    auVar65._8_8_ = 0xed00007374686769;
    auVar65._0_8_ = 0x736e695f70616e73;
    return auVar65;
  case 0x134:
    auVar58._8_8_ = 0xea0000000000524f;
    auVar58._0_8_ = 0x5449444550414e53;
    return auVar58;
  case 0x135:
    pcVar4 = "SNAP_RECEIVE_NOTIFS_FROM_SETTINGS";
code_r0x001d87b0:
    auVar64._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar64._0_8_ = 0xd000000000000021;
    return auVar64;
  case 0x136:
    auVar76._8_8_ = 0x80000000008b9ec0;
    auVar76._0_8_ = 0xd000000000000023;
    return auVar76;
  case 0x137:
    pcVar4 = "SPECTACLES/SETTINGS";
    goto code_r0x001d89fc;
  case 0x138:
    uVar3 = 0xee00444545465f54;
    goto code_r0x001d89e0;
  case 0x139:
    pcVar4 = "SPOTLIGHT_CONTEXT";
    goto code_r0x001d9428;
  case 0x13a:
    pcVar4 = "SPOTLIGHT_MANAGEMENT_PAGE";
code_r0x001d92d4:
    auVar125._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar125._0_8_ = 0xd000000000000019;
    return auVar125;
  case 0x13b:
    pcVar4 = "PUBLIC_STORY_MODAL_VC";
code_r0x001d9350:
    auVar129._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar129._0_8_ = 0xd000000000000015;
    return auVar129;
  case 0x13c:
    uVar3 = 0xed00004241545f54;
code_r0x001d89e0:
    auVar74._8_8_ = uVar3;
    auVar74._0_8_ = 0x4847494c544f5053;
    return auVar74;
  case 0x13d:
    pcVar4 = "STORIES_EVERYWHERE";
    goto code_r0x001d9488;
  case 0x13e:
    auVar61._8_8_ = 0xe500000000000000;
    auVar61._0_8_ = 0x59524f5453;
    return auVar61;
  case 0x13f:
    uVar2 = 0x5f59524f5453;
    goto code_r0x001d86e8;
  case 0x140:
    auVar73._8_8_ = 0xec00000045544956;
    auVar73._0_8_ = 0x4e492f59524f5453;
    return auVar73;
  case 0x141:
    pcVar4 = "STORY_PRIVACY_SETTINGS";
code_r0x001d9310:
    auVar127._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar127._0_8_ = 0xd000000000000016;
    return auVar127;
  case 0x142:
    pcVar4 = "STORY_VIEWERS_LIST";
    goto code_r0x001d9488;
  case 0x143:
    pcVar4 = "SUGGESTED_USERNAME";
    goto code_r0x001d9488;
  case 0x144:
    pcVar4 = "SUGGESTION_TAKEOVER";
code_r0x001d89fc:
    auVar75._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar75._0_8_ = 0xd000000000000013;
    return auVar75;
  case 0x145:
    uVar2 = 0x45505553;
code_r0x001d839c:
    uVar2 = uVar2 | 0x5f5200000000;
code_r0x001d86e8:
    auVar59._0_8_ = uVar2 | 0x4546000000000000;
    auVar59._8_8_ = 0xea00000000004445;
    return auVar59;
  case 0x146:
    auVar62._8_8_ = 0xe700000000000000;
    auVar62._0_8_ = 0x54524f50505553;
    return auVar62;
  case 0x147:
    auVar52._8_8_ = 0xec0000004553555f;
    auVar52._0_8_ = 0x464f5f534d524554;
    return auVar52;
  case 0x148:
    pcVar4 = "THIRD_PARTY_LOGIN";
    goto code_r0x001d9428;
  case 0x149:
    auVar63._8_8_ = 0xea00000000004547;
    auVar63._0_8_ = 0x41505f4349504f54;
    return auVar63;
  case 0x14a:
    auVar54._8_8_ = 0xef534349504f545f;
    auVar54._0_8_ = 0x474e49444e455254;
    return auVar54;
  case 0x14b:
    pcVar4 = "TWO_FA_CODE_VERIFICATION";
code_r0x001d9044:
    auVar110._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar110._0_8_ = 0xd000000000000018;
    return auVar110;
  case 0x14c:
    pcVar4 = "TWO_FA_OTP_VERIFICATION";
    break;
  case 0x14d:
    pcVar4 = "TWO_FA_ENABLED_SETTINGS_V2";
code_r0x001d91b8:
    auVar118._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar118._0_8_ = 0xd00000000000001a;
    return auVar118;
  case 0x14e:
    auVar60._8_8_ = 0xe800000000000000;
    auVar60._0_8_ = 0x454d414e52455355;
    return auVar60;
  case 0x14f:
    pcVar4 = "USERNAME_CHALLENGE";
code_r0x001d9488:
    uVar2 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    param_1 = 0xd000000000000012;
code_r0x001d949c:
    auVar138._8_8_ = uVar2;
    auVar138._0_8_ = param_1;
    return auVar138;
  case 0x150:
    pcVar4 = "USERNAME_SETTINGS";
    goto code_r0x001d9428;
  case 0x151:
    pcVar4 = "USERNAME_PASSWORD";
code_r0x001d9428:
    auVar135._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar135._0_8_ = 0xd000000000000011;
    return auVar135;
  case 0x152:
    auVar56._8_8_ = 0xef3131565f524553;
    auVar56._0_8_ = 0x574f52425f424557;
    return auVar56;
  case 0x153:
    auVar57._8_8_ = 0xe900000000000054;
    auVar57._0_8_ = 0x55435f4b43495551;
    return auVar57;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_009b8418,&uStack_18,&UNK_009b8418,PTR___sSiN_0099b2c0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1d94d0);
    (*pcVar1)();
  }
  auVar136._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar136._0_8_ = 0xd000000000000017;
  return auVar136;
}



/* Entry: 001d94d0; end: 001d94e3;  */

bool FUN_001d94d0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001d94e4; end: 001d95bb;  */

void FUN_001d94e4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001d95bc; end: 001d95cb;  */

void FUN_001d95bc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 001d95cc; end: 001d9603; +[_TtC15SnapAttribution24AttributedPageObjCHelper getPageNameFrom:] */

void FUN_001d95cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001d7948(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 001d9604; end: 001d963f; -[_TtC15SnapAttribution24AttributedPageObjCHelper init] */

void FUN_001d9604(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_001d96b4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 001d9640; end: 001d966f;  */

void FUN_001d9640(void)

{
  FUN_001d96b4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 001d9670; end: 001d96b3;  */

undefined1  [16] FUN_001d9670(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = param_1 & 0xffffffffffffffc0;
  bVar3 = param_1 - 0x154 < 0xffffffffffffffec;
  uVar1 = 0;
  if (!bVar3) {
    uVar1 = param_1;
  }
  uVar2 = param_1;
  if (((uVar4 != 0x80 && uVar4 != 0xc0) && 0x7f < param_1) && uVar4 != 0x100) {
    uVar2 = uVar1;
  }
  uVar5 = 0;
  if (((uVar4 != 0x80 && uVar4 != 0xc0) && 0x7f < param_1) && uVar4 != 0x100) {
    uVar5 = (uint)bVar3;
  }
  auVar6._8_4_ = uVar5;
  auVar6._0_8_ = uVar2;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Entry: 001d96b4; end: 001d96d3;  */

void FUN_001d96b4(void)

{
  _objc_opt_self(&PTR_PTR_00acb280);
  return;
}



/* Entry: 001d96d4; end: 001d96d7;  */

void FUN_001d96d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4ea8;
  _swift_getWitnessTable(&UNK_007e4ea8,&UNK_009b8418);
  puRam0000000000af3ff8 = puVar1;
  return;
}



/* Entry: 001d96d8; end: 001d9717;  */

void FUN_001d96d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4ea8;
  _swift_getWitnessTable(&UNK_007e4ea8,&UNK_009b8418);
  puRam0000000000af3ff8 = puVar1;
  return;
}



/* Entry: 001d9718; end: 001d9727;  */

undefined1  [16] FUN_001d9718(void)

{
  return ZEXT816(0x9b8418);
}



/* Entry: 001d9728; end: 001da00f;  */

undefined1  [16] FUN_001d9728(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined8 uStack_18;
  
  uVar2 = 0x505041;
  uVar3 = 0xe300000000000000;
  switch(param_1) {
  case 0:
    auVar27._8_8_ = 0xe700000000000000;
    auVar27._0_8_ = 0x6e776f6e6b6e55;
    return auVar27;
  case 1:
    auVar28._8_8_ = 0xe500000000000000;
    auVar28._0_8_ = 0x5649544341;
    return auVar28;
  case 2:
    auVar23._8_8_ = 0xe400000000000000;
    auVar23._0_8_ = 0x4c434441;
    return auVar23;
  case 3:
    auVar25._8_8_ = 0xe600000000000000;
    auVar25._0_8_ = 0x534e49505041;
    return auVar25;
  case 4:
    goto code_r0x001d99bc;
  case 5:
    auVar32._8_8_ = 0xe500000000000000;
    auVar32._0_8_ = 0x5452415453;
    return auVar32;
  case 6:
    auVar34._8_8_ = 0xe200000000000000;
    auVar34._0_8_ = &UNK_00004d42;
    return auVar34;
  case 7:
    auVar26._8_8_ = 0xe500000000000000;
    auVar26._0_8_ = 0x4f454d4143;
    return auVar26;
  case 8:
    uVar3 = 0xe600000000000000;
    uVar2 = 0x4152454d4143;
code_r0x001d99bc:
    auVar37._8_8_ = uVar3;
    auVar37._0_8_ = uVar2;
    return auVar37;
  case 9:
    auVar20._8_8_ = 0xe900000000000053;
    auVar20._0_8_ = 0x4552544e45494c43;
    return auVar20;
  case 10:
    auVar36._8_8_ = 0xe300000000000000;
    auVar36._0_8_ = 0x464f43;
    return auVar36;
  case 0xb:
    auVar17._8_8_ = 0xe300000000000000;
    auVar17._0_8_ = 0x4d4f43;
    return auVar17;
  case 0xc:
    auVar19._8_8_ = 0xe800000000000000;
    auVar19._0_8_ = 0x5245534f504d4f43;
    return auVar19;
  case 0xd:
    auVar33._8_8_ = 0xe200000000000000;
    auVar33._0_8_ = &UNK_00005043;
    return auVar33;
  case 0xe:
    auVar14._8_8_ = 0xe700000000000000;
    auVar14._0_8_ = 0x545845544e4f43;
    return auVar14;
  case 0xf:
    auVar24._8_8_ = 0xe500000000000000;
    auVar24._0_8_ = 0x4f564e4f43;
    return auVar24;
  case 0x10:
    auVar12._8_8_ = 0xe600000000000000;
    auVar12._0_8_ = 0x455441455243;
    return auVar12;
  case 0x11:
    auVar30._8_8_ = 0xe800000000000000;
    auVar30._0_8_ = 0x53524f5441455243;
    return auVar30;
  case 0x12:
    auVar35._8_8_ = 0xe400000000000000;
    auVar35._0_8_ = 0x50544144;
    return auVar35;
  case 0x13:
    auVar43._8_8_ = 0xe400000000000000;
    auVar43._0_8_ = 0x444e5246;
    return auVar43;
  case 0x14:
  case 0x1b:
    auVar4._8_8_ = 0xe300000000000000;
    auVar4._0_8_ = 0x4d454d;
    return auVar4;
  case 0x15:
    auVar41._8_8_ = 0xe600000000000000;
    auVar41._0_8_ = 0x43495254454d;
    return auVar41;
  case 0x16:
    auVar45._8_8_ = 0xe600000000000000;
    auVar45._0_8_ = 0x414c41504d49;
    return auVar45;
  case 0x17:
    auVar22._8_8_ = 0xe400000000000000;
    auVar22._0_8_ = 0x534e454c;
    return auVar22;
  case 0x18:
    auVar21._8_8_ = 0xe300000000000000;
    auVar21._0_8_ = 0x50414d;
    return auVar21;
  case 0x19:
    auVar49._8_8_ = 0xe300000000000000;
    auVar49._0_8_ = 0x50444d;
    return auVar49;
  case 0x1a:
    auVar10._8_8_ = 0xe200000000000000;
    auVar10._0_8_ = &UNK_0000454d;
    return auVar10;
  case 0x1c:
    auVar46._8_8_ = 0xe300000000000000;
    auVar46._0_8_ = 0x48434d;
    return auVar46;
  case 0x1d:
    auVar47._8_8_ = 0xe500000000000000;
    auVar47._0_8_ = 0x434953554d;
    return auVar47;
  case 0x1e:
    auVar38._8_8_ = 0xe500000000000000;
    auVar38._0_8_ = 0x415245504f;
    return auVar38;
  case 0x1f:
    auVar29._8_8_ = 0xe400000000000000;
    auVar29._0_8_ = 0x43524550;
    return auVar29;
  case 0x20:
    auVar39._8_8_ = 0xe700000000000000;
    auVar39._0_8_ = 0x57454956455250;
    return auVar39;
  case 0x21:
    auVar15._8_8_ = 0xe700000000000000;
    auVar15._0_8_ = 0x454c49464f5250;
    return auVar15;
  case 0x22:
    auVar11._8_8_ = 0xe400000000000000;
    auVar11._0_8_ = 0x48535550;
    return auVar11;
  case 0x23:
    auVar8._8_8_ = 0xe600000000000000;
    auVar8._0_8_ = 0x484352414553;
    return auVar8;
  case 0x24:
    auVar9._8_8_ = 0xe400000000000000;
    auVar9._0_8_ = 0x434d4553;
    return auVar9;
  case 0x25:
    auVar6._8_8_ = 0xe300000000000000;
    auVar6._0_8_ = 0x554853;
    return auVar6;
  case 0x26:
    auVar48._8_8_ = 0xe700000000000000;
    auVar48._0_8_ = 0x474e4952414853;
    return auVar48;
  case 0x27:
    auVar42._8_8_ = 0xe300000000000000;
    auVar42._0_8_ = 0x534441;
    return auVar42;
  case 0x28:
    auVar18._8_8_ = 0xe300000000000000;
    auVar18._0_8_ = 0x474953;
    return auVar18;
  case 0x29:
    auVar31._8_8_ = 0xe400000000000000;
    auVar31._0_8_ = 0x53554c50;
    return auVar31;
  case 0x2a:
    auVar44._8_8_ = 0xe700000000000000;
    auVar44._0_8_ = 0x54494b50414e53;
    return auVar44;
  case 0x2b:
    auVar5._8_8_ = 0xe700000000000000;
    auVar5._0_8_ = 0x474e4543455053;
    return auVar5;
  case 0x2c:
    auVar13._8_8_ = 0xe400000000000000;
    auVar13._0_8_ = 0x544f5053;
    return auVar13;
  case 0x2d:
    auVar40._8_8_ = 0xe300000000000000;
    auVar40._0_8_ = 0x525453;
    return auVar40;
  case 0x2e:
    auVar50._8_8_ = 0xe300000000000000;
    auVar50._0_8_ = 0x4c4441;
    return auVar50;
  case 0x2f:
    auVar7._8_8_ = 0xe600000000000000;
    auVar7._0_8_ = 0x444548435357;
    return auVar7;
  case 0x30:
    auVar16._8_8_ = 0xe600000000000000;
    auVar16._0_8_ = 0x54494b4d4143;
    return auVar16;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_009b8490,&uStack_18,&UNK_009b8490,PTR___sSiN_0099b2c0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1d9ad0);
    (*pcVar1)();
  }
}



/* Entry: 001da010; end: 001da023;  */

bool FUN_001da010(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001da024; end: 001da0fb;  */

void FUN_001da024(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001da0fc; end: 001da10b;  */

void FUN_001da0fc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 001da10c; end: 001da11b; +[_TtC15SnapAttribution21JiraProjectObjCHelper getProjectNameFrom:] */

void FUN_001da10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001d9728(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 001da11c; end: 001da127; +[_TtC15SnapAttribution21JiraProjectObjCHelper getLabelFrom:] */

void FUN_001da11c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1d9ad0)(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 001da128; end: 001da15f;  */

void FUN_001da128(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  (*param_4)(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 001da160; end: 001da17f;  */

undefined8 FUN_001da160(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_001da210();
  uVar1 = 0;
  if ((param_2 & 0xff) != 1) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Entry: 001da180; end: 001da1a3; +[_TtC15SnapAttribution21JiraProjectObjCHelper getEnumFrom:] */

undefined8 FUN_001da180(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_001da210(param_3);
  uVar1 = 0;
  if ((param_2 & 0xff) != 1) {
    uVar1 = param_3;
  }
  return uVar1;
}



/* Entry: 001da1a4; end: 001da1df; -[_TtC15SnapAttribution21JiraProjectObjCHelper init] */

void FUN_001da1a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_001da220();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 001da1e0; end: 001da20f;  */

void FUN_001da1e0(void)

{
  FUN_001da220();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 001da210; end: 001da21f;  */

undefined1  [16] FUN_001da210(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x31) {
    uVar1 = param_1;
  }
  auVar2[8] = 0x30 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 001da220; end: 001da23f;  */

void FUN_001da220(void)

{
  _objc_opt_self(&PTR_PTR_00acb338);
  return;
}



/* Entry: 001da240; end: 001da243;  */

void FUN_001da240(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5014;
  _swift_getWitnessTable(&UNK_007e5014,&UNK_009b8490);
  puRam0000000000af4028 = puVar1;
  return;
}



/* Entry: 001da244; end: 001da283;  */

void FUN_001da244(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5014;
  _swift_getWitnessTable(&UNK_007e5014,&UNK_009b8490);
  puRam0000000000af4028 = puVar1;
  return;
}



/* Entry: 001da284; end: 001da293;  */

undefined1  [16] FUN_001da284(void)

{
  return ZEXT816(0x9b8490);
}



/* Entry: 001da294; end: 001da4d7;  */

undefined1  [16] FUN_001da294(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (((uint)param_2 & 0xff) == 1) {
    uVar3 = 0xeb0000000072656b;
    uVar2 = 0x6e61526567646142;
                    /* WARNING: Could not recover jumptable at 0x001da2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_007e50f0)[param_1] * 4 + 0x1da2e8))
              (0x6e61526567646142,0xeb0000000072656b);
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  }
  __ss11_StringGutsV4growyySiF(0x10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_001d7948(param_1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_2);
  auVar1._8_8_ = 0xee00237265764f65;
  auVar1._0_8_ = 0x6b61547070416e49;
  return auVar1;
}



/* Entry: 001da4d8; end: 001da58b;  */

void FUN_001da4d8(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  if ((char)unaff_x20[1] == '\x01') {
    if (lVar2 == 2) {
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      _swift_initStaticObject();
      FUN_001da650();
    }
  }
  else {
    lVar1 = 0xaf4058;
    func_0x000115a8(0xaf4058,&UNK_007e5230);
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = lVar2;
    FUN_001da650();
    _swift_setDeallocating(lVar1);
  }
  return;
}



/* Entry: 001da58c; end: 001da597;  */

undefined1  [16] FUN_001da58c(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x20;
  undefined1 auVar6 [16];
  
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(byte *)(unaff_x20 + 1);
  if (*(byte *)(unaff_x20 + 1) == 1) {
    uVar4 = 0xeb0000000072656b;
    uVar2 = 0x6e61526567646142;
                    /* WARNING: Could not recover jumptable at 0x001da2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_007e50f0)[lVar3] * 4 + 0x1da2e8))
              (0x6e61526567646142,0xeb0000000072656b);
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = uVar2;
    return auVar6;
  }
  __ss11_StringGutsV4growyySiF(0x10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_001d7948(lVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  auVar1._8_8_ = 0xee00237265764f65;
  auVar1._0_8_ = 0x6b61547070416e49;
  return auVar1;
}



/* Entry: 001da598; end: 001da5e3;  */

void FUN_001da598(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x001da48c(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001da5e4; end: 001da5ef;  */

void FUN_001da5e4(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if ((char)unaff_x20[1] == '\x01') {
    lVar1 = *(long *)(&UNK_007e51d0 + lVar1 * 8);
  }
  else {
    __ss6HasherV8_combineyySuF(2);
  }
  __ss6HasherV8_combineyySuF(lVar1);
  return;
}



/* Entry: 001da5f0; end: 001da637;  */

void FUN_001da5f0(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001da48c(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001da638; end: 001da64f;  */

ulong FUN_001da638(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((char)param_1[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x001da7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_007e50fb)[uVar1] * 4 + 0x1da7ac))();
    return uVar1;
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    return 0;
  }
  return (ulong)((int)uVar1 == (int)*param_2);
}



/* Entry: 001da650; end: 001da787;  */

undefined * FUN_001da650(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_a8 [72];
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_0099b900;
  if (puVar9 != (undefined *)0x0) {
    func_0x000115a8(0xaf40c8,&UNK_007e51c0);
    puVar2 = puVar9;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar11 = (undefined *)0x0;
    do {
      uVar10 = *(ulong *)(param_1 + 0x20 + (long)puVar11 * 8);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar3 = uVar10;
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar8 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar3 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar3 >> 6;
      uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar3 & 0x3f);
      lVar4 = *(long *)(puVar2 + 0x30);
      if ((uVar7 & uVar6) != 0) {
        do {
          if ((int)*(undefined8 *)(lVar4 + uVar3 * 8) == (int)uVar10) goto LAB_001da6d4;
          uVar3 = uVar3 + 1 & ~uVar8;
          uVar5 = uVar3 >> 6;
          uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar3 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar2 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(ulong *)(lVar4 + uVar3 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1da788);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_001da6d4:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar2;
}



/* Entry: 001da788; end: 001da8fb;  */

ulong FUN_001da788(ulong param_1,char param_2,int param_3,char param_4)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x001da7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_007e50fb)[param_1] * 4 + 0x1da7ac))();
    return param_1;
  }
  if (param_4 == '\x01') {
    return 0;
  }
  return (ulong)((int)param_1 == param_3);
}



/* Entry: 001da8fc; end: 001da91f;  */

void FUN_001da8fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001da920();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001da920; end: 001da95f;  */

void FUN_001da920(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af40b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e512c;
  _swift_getWitnessTable(&UNK_007e512c,&UNK_009b8598);
  puRam0000000000af40b8 = puVar1;
  return;
}



/* Entry: 001da960; end: 001da963;  */

void FUN_001da960(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af40c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e516c;
  _swift_getWitnessTable(&UNK_007e516c,&UNK_009b8598);
  puRam0000000000af40c0 = puVar1;
  return;
}



/* Entry: 001da964; end: 001da9a3;  */

void FUN_001da964(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af40c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e516c;
  _swift_getWitnessTable(&UNK_007e516c,&UNK_009b8598);
  puRam0000000000af40c0 = puVar1;
  return;
}



/* Entry: 001da9a4; end: 001daaaf;  */

int FUN_001da9a4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 001daab0; end: 001dab5b;  */

void FUN_001daab0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001dab5c; end: 001daba7;  */

undefined8 FUN_001dab5c(void)

{
  undefined8 uVar1;
  byte *unaff_x20;
  
  if (*unaff_x20 < 3) {
    return 0;
  }
  uVar1 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  FUN_001da650();
  return uVar1;
}



/* Entry: 001daba8; end: 001dabb3;  */

undefined1  [16] FUN_001daba8(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  pcVar1 = "WarmupBillboardReporter";
  uVar3 = 0xd000000000000014;
  if (*unaff_x20 != 0) {
    pcVar1 = "ActivityCenterFHPCampaigns";
    uVar3 = 0xd000000000000017;
  }
  pcVar2 = "ChangeLanguageInSettingsPrompt";
  uVar4 = 0xd00000000000001a;
  if (1 < *unaff_x20 - 2) {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  auVar5._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 001dabb4; end: 001dabf3;  */

void FUN_001dabb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af40d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5238;
  _swift_getWitnessTable(&UNK_007e5238,&UNK_009b8688);
  puRam0000000000af40d0 = puVar1;
  return;
}



/* Entry: 001dabf4; end: 001dac17;  */

void FUN_001dabf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001dac18();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001dac18; end: 001dac57;  */

void FUN_001dac18(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af40d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5260;
  _swift_getWitnessTable(&UNK_007e5260,&UNK_009b8688);
  puRam0000000000af40d8 = puVar1;
  return;
}



/* Entry: 001dac58; end: 001dadc3;  */

int FUN_001dac58(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001dacd4;
        goto LAB_001dacb8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001dacb8:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_001dacd4:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001dadc4; end: 001dae63;  */

void FUN_001dadc4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001dae64; end: 001dae93;  */

undefined * FUN_001dae64(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 auStack_a8 [72];
  
  lVar3 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  puVar10 = *(undefined **)(lVar3 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_0099b900;
  if (puVar10 != (undefined *)0x0) {
    func_0x000115a8(0xaf40c8,&UNK_007e51c0);
    puVar2 = puVar10;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar12 = (undefined *)0x0;
    do {
      uVar11 = *(ulong *)(lVar3 + 0x20 + (long)puVar12 * 8);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar4 = uVar11;
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar9 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      lVar5 = *(long *)(puVar2 + 0x30);
      if ((uVar8 & uVar7) != 0) {
        do {
          if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar11) goto LAB_001da6d4;
          uVar4 = uVar4 + 1 & ~uVar9;
          uVar6 = uVar4 >> 6;
          uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar4 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar2 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(ulong *)(lVar5 + uVar4 * 8) = uVar11;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1da788);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_001da6d4:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  return puVar2;
}



/* Entry: 001dae94; end: 001daeb3;  */

undefined1  [16] FUN_001dae94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x80000000008bba20;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Entry: 001daeb4; end: 001daef3;  */

void FUN_001daeb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e52e8;
  _swift_getWitnessTable(&UNK_007e52e8,&UNK_009b8778);
  puRam0000000000af4110 = puVar1;
  return;
}



/* Entry: 001daef4; end: 001daf17;  */

void FUN_001daef4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001daf18();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001daf18; end: 001daf57;  */

void FUN_001daf18(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5310;
  _swift_getWitnessTable(&UNK_007e5310,&UNK_009b8778);
  puRam0000000000af4118 = puVar1;
  return;
}



/* Entry: 001daf58; end: 001db203;  */

uint FUN_001daf58(uint *param_1,int param_2)

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



/* Entry: 001db204; end: 001db34b;  */

void FUN_001db204(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001db34c; end: 001db357;  */

undefined1  [16] FUN_001db34c(void)

{
  byte bVar1;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  char *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_70 [80];
  char *pcVar5;
  
  bVar1 = *unaff_x20;
  pcVar5 = (char *)(ulong)bVar1;
  uVar2 = (uint)bVar1;
  pcVar6 = (char *)0xed00006e6f697373;
  pcVar3 = (char *)0x6572706d49707041;
  puVar9 = &UNK_007e5390;
  uVar8 = (uint)bVar1;
  switch(bVar1) {
  case 0:
    goto code_r0x001db0f4;
  default:
    pcVar5 = "ASSWORD";
  case 0x28:
  case 0x36:
  case 0x76:
  case 0x92:
  case 0xd0:
  case 0xde:
  case 0xe8:
    pcVar5 = pcVar5 + 0xb80;
  case 0x8e:
    pcVar5 = pcVar5 + -0x20;
  case 0x26:
  case 0x4e:
  case 0xce:
  case 0xf6:
    pcVar6 = (char *)((ulong)pcVar5 | 0x8000000000000000);
  case 0x50:
  case 0x90:
  case 0xf8:
    pcVar5 = (char *)0xd000000000000011;
code_r0x001db09c:
    auVar10._8_8_ = pcVar6;
    auVar10._0_8_ = pcVar5 + 9;
    return auVar10;
  case 2:
    auVar15._8_8_ = 0x80000000008bbb40;
    auVar15._0_8_ = 0xd000000000000016;
    return auVar15;
  case 3:
    pcVar5 = "ryptedDataUpdater";
  case 0x30:
    pcVar6 = (char *)((ulong)pcVar5 | 0x8000000000000000);
    pcVar5 = (char *)0xd000000000000011;
  case 0x89:
    pcVar3 = pcVar5 + 7;
code_r0x001db154:
    auVar16._8_8_ = pcVar6;
    auVar16._0_8_ = pcVar3;
    return auVar16;
  case 4:
    pcVar6 = (char *)0x80000000008bbaf0;
    pcVar5 = (char *)0xd000000000000011;
  case 0x60:
    auVar12._8_8_ = pcVar6;
    auVar12._0_8_ = pcVar5 + 0x10;
    return auVar12;
  case 5:
    pcVar6 = (char *)0x80000000008bbad0;
  case 0xa0:
  case 0xaa:
    pcVar5 = "";
    puVar9 = (undefined *)0x11;
code_r0x001db190:
    auVar18._0_8_ = (ulong)puVar9 | 0xd000000000000000 | (ulong)pcVar5;
    auVar18._8_8_ = pcVar6;
    return auVar18;
  case 6:
    auVar19._8_8_ = 0xe400000000000000;
    auVar19._0_8_ = 0x49556441;
    return auVar19;
  case 7:
  case 0xc1:
  case 0xd5:
  case 0xe9:
    pcVar5 = "ASSWORD";
  case 0x3e:
  case 0x7e:
  case 0x9a:
  case 0xe6:
    auVar17._8_8_ = (ulong)(pcVar5 + 0xaa0) | 0x8000000000000000;
    auVar17._0_8_ = 0xd000000000000020;
    return auVar17;
  case 8:
    pcVar5 = "ASSWORD";
  case 0xb2:
    auVar21._8_8_ = (ulong)(pcVar5 + 0xa80) | 0x8000000000000000;
    auVar21._0_8_ = 0xd000000000000017;
    return auVar21;
  case 9:
  case 0x1a:
  case 0x2e:
  case 0x42:
  case 0x56:
  case 0x5e:
  case 0x66:
  case 0x6e:
  case 0x82:
  case 0x8a:
  case 0xc2:
  case 0xd6:
  case 0xea:
  case 0xfe:
    pcVar6 = (char *)0x80000000008bba60;
    pcVar3 = (char *)0xd000000000000015;
  case 0xec:
    auVar14._8_8_ = pcVar6;
    auVar14._0_8_ = pcVar3;
    return auVar14;
  case 10:
    pcVar6 = (char *)0x61437364;
  case 0xc4:
    pcVar6 = (char *)((ulong)pcVar6 & 0xffffffff | 0xef65686300000000);
    pcVar3 = (char *)0x77657250;
code_r0x001db1c4:
    auVar20._0_8_ = (ulong)pcVar3 & 0xffffffff | 0x416d726100000000;
    auVar20._8_8_ = pcVar6;
    return auVar20;
  case 0xb:
    pcVar6 = (char *)0xe800000000000000;
    pcVar3 = (char *)0x7472657373416441;
  case 0xd4:
    auVar11._8_8_ = pcVar6;
    auVar11._0_8_ = pcVar3;
    return auVar11;
  case 0xc:
    pcVar3 = (char *)0xd000000000000011;
  case 0x1d:
  case 0x45:
  case 0x85:
  case 0xc5:
  case 0xed:
    pcVar5 = "ASSWORD";
  case 0xc0:
    pcVar6 = (char *)((ulong)(pcVar5 + 0xa40) | 0x8000000000000000);
code_r0x001db0f4:
    auVar13._8_8_ = pcVar6;
    auVar13._0_8_ = pcVar3;
    return auVar13;
  case 0x18:
    auVar28._8_8_ = 0xed00006e6f697373;
    auVar28._0_8_ = 0x6572706d49707041;
    return auVar28;
  case 0x19:
  case 0x2d:
  case 0x41:
  case 0x55:
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0x7c:
  case 0x81:
  case 0xfd:
    goto code_r0x001db154;
  case 0x1c:
    _swift_getWitnessTable();
    pcRam0000000000af4238 = pcVar3;
    auVar29._8_8_ = pcVar6;
    auVar29._0_8_ = pcVar3;
    return auVar29;
  case 0x1e:
  case 0x46:
  case 0x86:
  case 0xc6:
  case 0xee:
    goto code_r0x001db09c;
  case 0x2c:
    FUN_001db3bc();
    pcRam6572706d49707049 = pcVar3;
  case 0xe4:
    auVar27._8_8_ = pcVar6;
    auVar27._0_8_ = pcVar3;
    return auVar27;
  case 0x31:
  case 0x61:
  case 0x69:
  case 0x71:
    pcVar3 = (char *)(ulong)in_ZR;
  case 0x95:
    auVar22._8_8_ = 0xed00006e6f697373;
    auVar22._0_8_ = pcVar3;
    return auVar22;
  case 0x32:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x96:
  case 0xda:
    goto code_r0x001db300;
  case 0x33:
  case 0x5b:
  case 99:
  case 0x6b:
  case 0x73:
  case 0x97:
  case 0xdb:
    goto code_r0x001db480;
  case 0x3c:
    uVar2 = uRam6572706d49707042;
  case 0xfc:
    if (uVar2 != 0) {
      uVar2 = (uint)bRam6572706d49707041 | uVar2 << 8;
code_r0x001db464:
      auVar30._4_4_ = 0;
      auVar30._0_4_ = uVar2 - 0xc;
      auVar30._8_8_ = 0xed00006e6f697373;
      return auVar30;
    }
LAB_001db478:
    in_CY = 0xc < bRam6572706d49707041;
    uVar2 = bRam6572706d49707041 - 0xd;
code_r0x001db480:
    if (!(bool)in_CY) {
      uVar2 = 0xffffffff;
    }
    auVar31._4_4_ = 0;
    auVar31._0_4_ = uVar2 + 1;
    auVar31._8_8_ = 0xed00006e6f697373;
    return auVar31;
  case 0x3d:
    goto code_r0x001db2f4;
  case 0x40:
    puVar9 = &UNK_007e53a8;
    puVar7 = &UNK_009b8868;
    _swift_getWitnessTable(&UNK_007e53a8,&UNK_009b8868);
    puRam0000000000af4230 = puVar9;
    auVar26._8_8_ = puVar7;
    auVar26._0_8_ = puVar9;
    return auVar26;
  case 0x44:
  case 0x88:
    break;
  case 0x54:
  case 0x5c:
  case 100:
  case 0x6c:
    goto code_r0x001db338;
  case 0x58:
    if (!in_ZR && in_NG == in_OV) {
      unaff_x19 = (char *)0xaf41c0;
      uVar2 = 1 << (ulong)(uVar8 & 0x1f);
      pcVar5 = (char *)(ulong)uVar2;
      in_ZR = (uVar2 & 0x380) == 0;
      goto code_r0x001db2e0;
    }
code_r0x001db2f4:
    puVar9 = (undefined *)(ulong)(uVar8 - 1);
code_r0x001db2f8:
    if (2 < (uint)puVar9) {
code_r0x001db300:
      in_CY = 1 < uVar8 - 4;
code_r0x001db308:
      if ((bool)in_CY) {
code_r0x001db318:
        unaff_x19 = (char *)0xaf4158;
      }
      else {
        unaff_x19 = (char *)0xaf4208;
      }
code_r0x001db320:
      pcVar6 = unaff_x19;
      pcVar3 = (char *)0xaf4058;
      func_0x000115a8(0xaf4058,&UNK_007e5230);
code_r0x001db338:
      _swift_initStaticObject();
      FUN_001da650();
    }
    break;
  case 0x59:
code_r0x001db2e0:
    if (in_ZR) goto code_r0x001db2e4;
    goto code_r0x001db320;
  case 0x5a:
    goto LAB_001db478;
  case 0x68:
    goto code_r0x001db1c4;
  case 0x70:
  case 0x84:
    goto code_r0x001db244;
  case 0x7d:
  case 0x99:
  case 0xe5:
    goto code_r0x001db2f8;
  case 0x80:
    goto code_r0x001db308;
  case 0x94:
  case 0xa1:
  case 0xa2:
  case 0xa7:
  case 0xb1:
    goto code_r0x001db254;
  case 0x98:
code_r0x001db2e4:
    if (((ulong)pcVar5 & 0x1440) == 0) break;
    goto code_r0x001db318;
  case 0xa3:
  case 0xb4:
code_r0x001db254:
    pcVar5 = pcVar3;
code_r0x001db258:
    uVar4 = (ulong)*unaff_x20;
    __ss6HasherV8_combineyySuF(pcVar5,uVar4);
    auVar24._8_8_ = pcVar6;
    auVar24._0_8_ = uVar4;
    return auVar24;
  case 0xa4:
  case 0xae:
    goto code_r0x001db228;
  case 0xa5:
    goto code_r0x001db20c;
  case 0xa6:
    goto code_r0x001db258;
  case 0xa8:
  case 0xaf:
    goto code_r0x001db218;
  case 0xa9:
  case 0xab:
    goto code_r0x001db214;
  case 0xac:
    goto code_r0x001db190;
  case 0xad:
    goto code_r0x001db234;
  case 0xb0:
    goto code_r0x001db23c;
  case 0xb5:
    goto code_r0x001db230;
  case 0xd8:
    goto code_r0x001db464;
  case 0xd9:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0xb3:
    *(byte **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(char **)((long)register0x00000008 + 0x58) = unaff_x19;
code_r0x001db20c:
    *(undefined8 *)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
code_r0x001db214:
    unaff_x19 = (char *)(ulong)*unaff_x20;
code_r0x001db218:
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8),0,0xed00006e6f697373);
code_r0x001db228:
    pcVar3 = unaff_x19;
    __ss6HasherV8_combineyySuF(pcVar3);
code_r0x001db230:
code_r0x001db234:
    __ss6HasherV9_finalizeSiyF();
code_r0x001db23c:
code_r0x001db244:
    auVar23._8_8_ = pcVar6;
    auVar23._0_8_ = pcVar3;
    return auVar23;
  }
  auVar25._8_8_ = pcVar6;
  auVar25._0_8_ = pcVar3;
  return auVar25;
}



/* Entry: 001db358; end: 001db397;  */

void FUN_001db358(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e53a8;
  _swift_getWitnessTable(&UNK_007e53a8,&UNK_009b8868);
  puRam0000000000af4230 = puVar1;
  return;
}



/* Entry: 001db398; end: 001db3bb;  */

void FUN_001db398(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001db3bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001db3bc; end: 001db3fb;  */

void FUN_001db3bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e53d0;
  _swift_getWitnessTable(&UNK_007e53d0,&UNK_009b8868);
  puRam0000000000af4238 = puVar1;
  return;
}



/* Entry: 001db3fc; end: 001db573;  */

int FUN_001db3fc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc) {
      iVar2 = 4;
    }
    if (param_2 + 0xc >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001db478;
        goto LAB_001db45c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001db45c:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_001db478:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001db574; end: 001db61f;  */

void FUN_001db574(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001db620; end: 001db623;  */

void FUN_001db620(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5450;
  _swift_getWitnessTable(&UNK_007e5450,&UNK_009b8958);
  puRam0000000000af4240 = puVar1;
  return;
}



/* Entry: 001db624; end: 001db663;  */

void FUN_001db624(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5450;
  _swift_getWitnessTable(&UNK_007e5450,&UNK_009b8958);
  puRam0000000000af4240 = puVar1;
  return;
}



/* Entry: 001db664; end: 001db6b7;  */

undefined8 FUN_001db664(void)

{
  return 0;
}


