/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028ea014; end: 1028ea09b;  */

void FUN_1028ea014(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_4 + 0x50);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1028ea0b0;
                    /* WARNING: Could not recover jumptable at 0x0001028ea098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,0,param_3,param_4);
  return;
}



/* Entry: 1028ea09c; end: 1028ea0b3;  */

void FUN_1028ea09c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028e9f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028ea0b4; end: 1028ea11f;  */

void FUN_1028ea0b4(void)

{
  func_0x0001000285a8(0x112ea0e28,&UNK_10dab2e60);
  func_0x0001000823a8(0x1028ea0f4,0);
  return;
}



/* Entry: 1028ea120; end: 1028ea17b; -[_TtC25SoundShareReportingPlugin25SoundShareReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_1028ea120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028ea514(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028ea17c; end: 1028ea193; -[_TtC25SoundShareReportingPlugin25SoundShareReportingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028ea190) */

void FUN_1028ea17c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028ea194; end: 1028ea1ff; -[_TtC25SoundShareReportingPlugin25SoundShareReportingPlugin isReportableForMessage:] */

bool FUN_1028ea194(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1028ea33c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
  }
  return param_2 != 0;
}



/* Entry: 1028ea200; end: 1028ea23b; -[_TtC25SoundShareReportingPlugin25SoundShareReportingPlugin init] */

void FUN_1028ea200(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028ea23c; end: 1028ea26f;  */

void FUN_1028ea23c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028ea270; end: 1028ea277;  */

undefined8 FUN_1028ea270(void)

{
  return 1;
}



/* Entry: 1028ea278; end: 1028ea317;  */

void FUN_1028ea278(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1028ea318; end: 1028ea33b;  */

void FUN_1028ea318(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1028ea33c; end: 1028ea513;  */

/* WARNING: Removing unreachable block (ram,0x0001028ea3d8) */

void FUN_1028ea33c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x000107c4cda8();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar2 = param_1;
    func_0x000107c40414();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar3 = uVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar2);
    func_0x000107c610f8(PTR_PTR_1126ba668);
    func_0x00010006c00c(uVar3,param_2);
    uVar2 = uVar3;
    FUN_102856a08(uVar3,param_2);
    uVar6 = param_2;
    func_0x00010006c090(uVar3);
    if (uVar2 != 0) {
      uVar4 = uVar2;
      func_0x000107c404a8();
      if ((int)uVar4 == 5) {
        uVar4 = uVar2;
        func_0x000107c5a934();
        func_0x000107c61180();
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ea50c);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c5a960();
        func_0x000107c61170(uVar4);
        if ((int)uVar5 == 0x28) {
          uVar4 = uVar2;
          func_0x000107c5a934();
          func_0x000107c61180();
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ea510);
            (*pcVar1)();
          }
          uVar5 = uVar4;
          func_0x000107c5b61c();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          if (uVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ea514);
            (*pcVar1)();
          }
          uVar4 = uVar5;
          func_0x000107c5b5f4();
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          if (uVar4 != 0) {
            uVar5 = uVar4;
            func_0x000107c5faec();
            func_0x000107c61170(uVar2);
            func_0x00010006c090(uVar3,param_2);
            func_0x000107c61170(uVar4);
            uVar2 = uVar5 & 0xffffffffffff;
            if ((uVar6 & 0x2000000000000000) != 0) {
              uVar2 = uVar6 >> 0x38 & 0xf;
            }
            if (uVar2 != 0) {
              return;
            }
            func_0x000107c6142c(uVar6);
            return;
          }
        }
      }
      func_0x000107c61170(uVar2);
    }
    func_0x00010006c090(uVar3,param_2);
  }
  return;
}



/* Entry: 1028ea514; end: 1028ea623;  */

undefined * FUN_1028ea514(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_1028ea33c();
  if (param_2 == 0) {
    puVar1 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar2 = puVar1;
    func_0x0001028ea67c();
    puVar3 = &UNK_110566fa0;
    func_0x000107c613f8(&UNK_110566fa0,puVar2,0,0);
    puVar2 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    func_0x000107c451ac(puVar1);
  }
  else {
    puVar2 = PTR_PTR_1126b2b98;
    func_0x000107c610f8(PTR_PTR_1126b2b98);
    func_0x000107c453e4();
    puVar3 = PTR_PTR_1126ab800;
    func_0x000107c610f8(PTR_PTR_1126ab800);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c48e14(puVar3);
    func_0x000107c61170(param_1);
    func_0x000107c5954c(puVar2);
    func_0x000107c61170(puVar3);
    puVar1 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1028ea624; end: 1028ea65b;  */

undefined ** FUN_1028ea624(void)

{
  return &PTR_DAT_112f2d890;
}



/* Entry: 1028ea65c; end: 1028ea6bb;  */

void FUN_1028ea65c(void)

{
  func_0x000107c61168(&PTR_PTR_11286d640);
  return;
}



/* Entry: 1028ea6bc; end: 1028ea7ab;  */

uint FUN_1028ea6bc(uint *param_1,int param_2)

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



/* Entry: 1028ea7ac; end: 1028ea7eb;  */

void FUN_1028ea7ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eca888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daed8e8;
  func_0x000107c61520(&UNK_10daed8e8,&UNK_110566fa0);
  puRam0000000112eca888 = puVar1;
  return;
}



/* Entry: 1028ea7ec; end: 1028ea87b;  */

void FUN_1028ea7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long alStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_38;
  
  lStack_38 = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  plStack_48 = &lStack_38;
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_1028eab40,alStack_70,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  lVar1 = lStack_38;
  if (lStack_38 != 0) {
    alStack_70[0] = lStack_38;
    func_0x0001007d6d78(alStack_70);
    func_0x000107c6142c(lVar1);
  }
  return;
}



/* Entry: 1028ea87c; end: 1028ea96b;  */

void FUN_1028ea87c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  lVar1 = 0x112ec7e20;
  func_0x0001000285a8(0x112ec7e20,&UNK_10daea290);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  func_0x0001028bfd8c(param_4,puVar3);
  lVar1 = 0;
  func_0x00010391d8b8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,0,1,lVar1);
  func_0x000107c61434(param_3);
  FUN_1028ea96c(puVar3,param_2,param_3);
  uVar2 = *param_5;
  *param_5 = *param_1;
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1028ea96c; end: 1028eaae7;  */

void FUN_1028ea96c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0x112ec7e20;
  func_0x0001000285a8(0x112ec7e20,&UNK_10daea290);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  func_0x00010391d8b8();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1028eab5c(param_1,lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001028eabac(lVar5);
    FUN_1028eac7c(puVar4,param_2,param_3);
    func_0x000107c6142c(param_3);
    func_0x0001028eabac(puVar4);
  }
  else {
    func_0x0001028bfd0c(lVar5,lVar6);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_68 = *unaff_x20;
    func_0x0001028ead94(lVar6,param_2,param_3,uVar3);
    func_0x000107c6142c(param_3);
    *unaff_x20 = uStack_68;
  }
  return;
}



/* Entry: 1028eaae8; end: 1028eab33;  */

void FUN_1028eaae8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028eab34; end: 1028eab3f;  */

void FUN_1028eab34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long alStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_38;
  
  lStack_38 = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  plStack_48 = &lStack_38;
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_1028eab40,alStack_70,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  lVar1 = lStack_38;
  if (lStack_38 != 0) {
    alStack_70[0] = lStack_38;
    func_0x0001007d6d78(alStack_70);
    func_0x000107c6142c(lVar1);
  }
  return;
}



/* Entry: 1028eab40; end: 1028eab5b;  */

void FUN_1028eab40(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1028ea87c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1028eab5c; end: 1028eabf3;  */

undefined8 FUN_1028eab5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ec7e20;
  func_0x0001000285a8(0x112ec7e20,&UNK_10daea290);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1028eabf4; end: 1028eac7b;  */

void FUN_1028eabf4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0;
  func_0x00010391d8b8();
  func_0x0001028bfd0c(param_4,lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028eac7c);
  (*pcVar2)();
}



/* Entry: 1028eac7c; end: 1028eaebf;  */

void FUN_1028eac7c(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    func_0x00010391d8b8();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1028eaec0();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    func_0x00010391d8b8();
    lVar6 = *(long *)(lVar4 + -8);
    func_0x0001028bfd0c(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1);
    FUN_1028eb404(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001028ead80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 1028eaec0; end: 1028eb3bf;  */

void FUN_1028eaec0(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar6 = 0;
  func_0x00010391d8b8();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x0001000285a8(0x112eca938,&UNK_10daed9d8);
  lVar13 = *unaff_x20;
  lVar6 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) == 0) {
    func_0x000107c61574(lVar13);
LAB_1028eb090:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar13 + 0x40;
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar6 != lVar13) || (lVar1 + uVar8 * 8 <= lVar6 + 0x40U)) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
  }
  lVar14 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar13 + 0x40);
  if (uVar8 == 0) goto LAB_1028eafec;
  do {
    uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar8 = uVar8 - 1 & uVar8;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
      lVar11 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar12 = *(long *)(lVar7 + 0x48) * uVar10;
      func_0x0001028bfd8c(*(long *)(lVar13 + 0x38) + lVar12,
                          &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x0001028bfd0c(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          *(long *)(lVar6 + 0x38) + lVar12);
      func_0x000107c61434(uVar4);
      if (uVar8 != 0) break;
LAB_1028eafec:
      do {
        lVar11 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1028eb0b8);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          func_0x000107c61574(lVar13);
          goto LAB_1028eb090;
        }
        uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar8 == 0);
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar14 = lVar11;
    }
  } while( true );
}



/* Entry: 1028eb3c0; end: 1028eb403;  */

undefined8 FUN_1028eb3c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010391d8b8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1028eb404; end: 1028eb5d3;  */

void FUN_1028eb404(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar14 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    uVar15 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar8);
    uVar15 = uVar15 + 1 & uVar8;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
      uVar16 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar16,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar9 = (ulong)puVar6 & uVar8;
      if ((long)param_1 < (long)uVar15) {
        if (uVar9 < uVar15) {
LAB_1028eb4f8:
          if ((long)param_1 < (long)uVar9) goto LAB_1028eb480;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
        if ((param_1 != uVar14) || (puVar3 + 2 <= puVar2)) {
          uVar16 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar16;
        }
        lVar13 = *(long *)(param_2 + 0x38);
        lVar7 = 0;
        func_0x00010391d8b8();
        lVar12 = *(long *)(*(long *)(lVar7 + -8) + 0x48);
        lVar10 = lVar12 * param_1;
        uVar9 = lVar13 + lVar10;
        lVar11 = lVar12 * uVar14;
        lVar13 = lVar13 + lVar11;
        param_1 = uVar14;
        if (lVar10 < lVar11 || (ulong)(lVar13 + lVar12) <= uVar9) {
          func_0x000107c61414(uVar9,lVar13,1,lVar7);
        }
        else if (lVar10 - lVar11 != 0) {
          func_0x000107c61410(uVar9,lVar13,1);
        }
      }
      else if (uVar15 <= uVar9) goto LAB_1028eb4f8;
LAB_1028eb480:
      uVar14 = uVar14 + 1 & uVar8;
    } while ((*(ulong *)(lVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
  }
  uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1028eb5d4);
  (*pcVar5)();
}



/* Entry: 1028eb5d4; end: 1028eb6cb;  */

void FUN_1028eb5d4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_38;
  
  lVar1 = 0;
  func_0x0001028eab14();
  func_0x000107c613fc();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1028eb6dc();
  puStack_38 = puVar2;
  func_0x0001000285a8(0x112eca948,&UNK_10daeda20);
  func_0x000107c613fc();
  ppuVar3 = &puStack_38;
  func_0x00010006c248();
  *(undefined ***)(lVar1 + 0x10) = ppuVar3;
  FUN_1028eb6dc();
  puStack_38 = puVar4;
  func_0x0001000285a8(0x112eca950,&UNK_10daeda28);
  func_0x000107c613fc();
  ppuVar3 = &puStack_38;
  func_0x00010042e6a0();
  *(undefined ***)(lVar1 + 0x18) = ppuVar3;
  func_0x000100326ec0(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x00010391d970();
  *param_1 = lVar1;
  return;
}



/* Entry: 1028eb6cc; end: 1028eb6db;  */

undefined1  [16] FUN_1028eb6cc(void)

{
  return ZEXT816(0x1105670e8);
}



/* Entry: 1028eb6dc; end: 1028eb84f;  */

undefined * FUN_1028eb6dc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = 0x112eca958;
  func_0x0001000285a8(0x112eca958,&UNK_10daeda30);
  lVar11 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112eca938,&UNK_10daed9d8);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar13 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar13 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      FUN_1028eb850(param_1,puVar9);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1028eb84c);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar12 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      func_0x00010391d8b8();
      func_0x0001028bfd0c((long)puVar9 + (long)iVar4,
                          lVar12 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1028eb850);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar13;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 1028eb850; end: 1028eb89f;  */

undefined8 FUN_1028eb850(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112eca958;
  func_0x0001000285a8(0x112eca958,&UNK_10daeda30);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1028eb8a0; end: 1028ebbeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028eb8a0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_1c0 [80];
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112eca960);
  lVar3 = lVar8;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112eca980))[1];
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112eca980));
    (**(code **)(lVar3 + 8))(&uStack_d0);
    if (lStack_c8 != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eca998);
      uVar6 = *puVar1;
      uVar9 = puVar1[1];
      *puVar1 = param_2;
      puVar1[1] = param_3;
      func_0x000100b64c10(param_2,param_3);
      func_0x00010058d43c(uVar6,uVar9);
      uStack_170 = uStack_d0;
      lStack_168 = lStack_c8;
      uStack_158 = uStack_b8;
      uStack_160 = uStack_c0;
      uStack_148 = uStack_a8;
      uStack_150 = uStack_b0;
      uStack_138 = uStack_98;
      uStack_140 = uStack_a0;
      uStack_12f = (undefined7)uStack_8f;
      uStack_128 = (undefined1)((ulong)uStack_8f >> 0x38);
      uStack_137 = uStack_97;
      uStack_130 = uStack_90;
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eca990);
      uStack_f8 = puVar1[5];
      uStack_100 = puVar1[4];
      uStack_f0 = puVar1[6];
      uStack_e8 = (undefined1)puVar1[7];
      uStack_df = *(undefined8 *)((long)puVar1 + 0x41);
      uStack_e7 = (undefined7)*(undefined8 *)((long)puVar1 + 0x39);
      uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x39) >> 0x38);
      uStack_118 = puVar1[1];
      uStack_120 = *puVar1;
      uStack_108 = puVar1[3];
      uStack_110 = puVar1[2];
      puVar1[5] = uStack_a8;
      puVar1[4] = uStack_b0;
      puVar1[7] = CONCAT71(uStack_97,uStack_98);
      puVar1[6] = uStack_a0;
      *(undefined8 *)((long)puVar1 + 0x41) = uStack_8f;
      *(ulong *)((long)puVar1 + 0x39) = CONCAT17(uStack_90,uStack_97);
      puVar1[1] = lStack_c8;
      *puVar1 = uStack_d0;
      puVar1[3] = uStack_b8;
      puVar1[2] = uStack_c0;
      FUN_1028bfbe4(&uStack_170,auStack_1c0);
      uVar6 = 0x112eca9c8;
      FUN_1028ec760(&uStack_120,0x112eca9c8,&UNK_10daedaa8);
      puVar4 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112eca988);
      *(undefined **)(unaff_x20 + _DAT_112eca988) = puVar4;
      func_0x000107c61174();
      func_0x000107c61170();
      func_0x00010011df08();
      func_0x000107c61180();
      uVar5 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      lVar2 = lStack_168;
      uVar10 = uStack_170;
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      uVar9 = CONCAT71(uStack_12f,uStack_130);
      *(ulong *)(lVar3 + 0x20) = CONCAT71(uStack_137,uStack_138);
      *(undefined8 *)(lVar3 + 0x28) = uVar9;
      func_0x000103f5e1a4(0);
      func_0x000107c610f8();
      func_0x000107c61434(lVar2);
      func_0x000107c61434(uVar9);
      func_0x000103f5cdfc(uVar5,uVar6,2,0xffffffffffffffff,0,0x27,0,0,0,0,0,0,uVar10,lVar2,lVar3,0);
      FUN_1028ec760(&uStack_d0,0x112d69430,&UNK_10d92ceb0);
      func_0x000103f5a410(0);
      func_0x000107c610f8();
      uVar6 = 0;
      func_0x000103f5a2cc(0,0);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112eca968);
      uVar9 = 0;
      func_0x0001012db084(0);
      func_0x000107c61174(puVar4);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar9);
      func_0x000107c3edb0(uVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar7);
      func_0x000107c42c1c(lVar8);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar10);
      return;
    }
  }
  else {
    func_0x000107c61170();
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1028ebbec; end: 1028ebdcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ebbec(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  ppuVar6 = &puStack_c0;
  lVar8 = *(long *)(unaff_x20 + _DAT_112eca988);
  *(undefined8 *)(unaff_x20 + _DAT_112eca988) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eca990);
  uStack_68 = puVar1[5];
  uStack_70 = puVar1[4];
  uStack_60 = puVar1[6];
  uStack_58 = (undefined1)puVar1[7];
  uStack_4f = *(undefined8 *)((long)puVar1 + 0x41);
  uStack_57 = (undefined7)*(undefined8 *)((long)puVar1 + 0x39);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x39) >> 0x38);
  uStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((long)puVar1 + 0x41) = 0;
  *(undefined8 *)((long)puVar1 + 0x39) = 0;
  FUN_1028ec760(&uStack_90,0x112eca9c8,&UNK_10daedaa8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eca998);
  pcVar2 = (code *)*puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (lVar8 == 0) {
    lVar7 = *(long *)(unaff_x20 + _DAT_112eca960);
    lVar8 = lVar7;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar8 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar7);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    if (pcVar2 != (code *)0x0) {
      func_0x000107c6157c(uVar3);
      (*pcVar2)();
      func_0x00010058d43c(pcVar2,uVar3);
      func_0x00010058d43c(pcVar2,uVar3);
    }
  }
  else {
    puVar4 = &UNK_1105671c0;
    func_0x000107c613fc(&UNK_1105671c0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1105671e8;
    func_0x000107c613fc(&UNK_1105671e8,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(code **)(puVar5 + 0x18) = pcVar2;
    *(undefined8 *)(puVar5 + 0x20) = uVar3;
    pcStack_a0 = FUN_1028ec7a0;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000b0c7c;
    puStack_a8 = &UNK_110567200;
    puStack_98 = puVar5;
    func_0x000107c60bc4(&puStack_c0);
    puVar4 = puStack_98;
    func_0x000107c61174(lVar8);
    func_0x000100b64c10(pcVar2,uVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c41864(lVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar8);
    func_0x00010058d43c(pcVar2,uVar3);
    func_0x000107c61170(lVar8);
  }
  return;
}



/* Entry: 1028ebdd0; end: 1028ebe83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ebdd0(long param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112eca960;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112eca960);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c61170();
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      func_0x000107c4ffe8(uVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c615e8(uVar3);
    }
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1028ebe84; end: 1028ebee3; -[_TtC39MyAIInteractiveShareStoreImplementation32MyAIInteractiveSendToCoordinator init] */

void FUN_1028ebe84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyAIInteractiveShareStoreImplementation.MyAIInteractiveSendToCoordinator",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ebeb0);
  (*pcVar1)();
}



/* Entry: 1028ebee4; end: 1028ebfa7; -[_TtC39MyAIInteractiveShareStoreImplementation32MyAIInteractiveSendToCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ebee4(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eca960));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eca968));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eca970));
  func_0x0001000834e4(param_1 + _DAT_112eca978);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eca980));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eca988));
  puVar1 = (undefined8 *)(param_1 + _DAT_112eca990);
  FUN_1028ec818(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                puVar1[8],*(undefined1 *)(puVar1 + 9));
  if (*(long *)(param_1 + _DAT_112eca998) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112eca998))[1]);
    return;
  }
  return;
}



/* Entry: 1028ebfa8; end: 1028ebfab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ebfa8(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_1c0 [80];
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112eca960);
  lVar3 = lVar8;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112eca980))[1];
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112eca980));
    (**(code **)(lVar3 + 8))(&uStack_d0);
    if (lStack_c8 != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eca998);
      uVar6 = *puVar1;
      uVar9 = puVar1[1];
      *puVar1 = param_2;
      puVar1[1] = param_3;
      func_0x000100b64c10(param_2,param_3);
      func_0x00010058d43c(uVar6,uVar9);
      uStack_170 = uStack_d0;
      lStack_168 = lStack_c8;
      uStack_158 = uStack_b8;
      uStack_160 = uStack_c0;
      uStack_148 = uStack_a8;
      uStack_150 = uStack_b0;
      uStack_138 = uStack_98;
      uStack_140 = uStack_a0;
      uStack_12f = (undefined7)uStack_8f;
      uStack_128 = (undefined1)((ulong)uStack_8f >> 0x38);
      uStack_137 = uStack_97;
      uStack_130 = uStack_90;
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eca990);
      uStack_f8 = puVar1[5];
      uStack_100 = puVar1[4];
      uStack_f0 = puVar1[6];
      uStack_e8 = (undefined1)puVar1[7];
      uStack_df = *(undefined8 *)((long)puVar1 + 0x41);
      uStack_e7 = (undefined7)*(undefined8 *)((long)puVar1 + 0x39);
      uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x39) >> 0x38);
      uStack_118 = puVar1[1];
      uStack_120 = *puVar1;
      uStack_108 = puVar1[3];
      uStack_110 = puVar1[2];
      puVar1[5] = uStack_a8;
      puVar1[4] = uStack_b0;
      puVar1[7] = CONCAT71(uStack_97,uStack_98);
      puVar1[6] = uStack_a0;
      *(undefined8 *)((long)puVar1 + 0x41) = uStack_8f;
      *(ulong *)((long)puVar1 + 0x39) = CONCAT17(uStack_90,uStack_97);
      puVar1[1] = lStack_c8;
      *puVar1 = uStack_d0;
      puVar1[3] = uStack_b8;
      puVar1[2] = uStack_c0;
      FUN_1028bfbe4(&uStack_170,auStack_1c0);
      uVar6 = 0x112eca9c8;
      FUN_1028ec760(&uStack_120,0x112eca9c8,&UNK_10daedaa8);
      puVar4 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112eca988);
      *(undefined **)(unaff_x20 + _DAT_112eca988) = puVar4;
      func_0x000107c61174();
      func_0x000107c61170();
      func_0x00010011df08();
      func_0x000107c61180();
      uVar5 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      lVar2 = lStack_168;
      uVar10 = uStack_170;
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      uVar9 = CONCAT71(uStack_12f,uStack_130);
      *(ulong *)(lVar3 + 0x20) = CONCAT71(uStack_137,uStack_138);
      *(undefined8 *)(lVar3 + 0x28) = uVar9;
      func_0x000103f5e1a4(0);
      func_0x000107c610f8();
      func_0x000107c61434(lVar2);
      func_0x000107c61434(uVar9);
      func_0x000103f5cdfc(uVar5,uVar6,2,0xffffffffffffffff,0,0x27,0,0,0,0,0,0,uVar10,lVar2,lVar3,0);
      FUN_1028ec760(&uStack_d0,0x112d69430,&UNK_10d92ceb0);
      func_0x000103f5a410(0);
      func_0x000107c610f8();
      uVar6 = 0;
      func_0x000103f5a2cc(0,0);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112eca968);
      uVar9 = 0;
      func_0x0001012db084(0);
      func_0x000107c61174(puVar4);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar9);
      func_0x000107c3edb0(uVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar7);
      func_0x000107c42c1c(lVar8);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar10);
      return;
    }
  }
  else {
    func_0x000107c61170();
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1028ebfac; end: 1028ec5cb;  */

/* WARNING: Removing unreachable block (ram,0x0001028ec5c8) */
/* WARNING: Removing unreachable block (ram,0x0001028ec5c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ebfac(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  long unaff_x20;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  ulong uStack_1c8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eca990);
  lStack_b8 = puVar1[1];
  puStack_c0 = (undefined *)*puVar1;
  puStack_a8 = (undefined *)puVar1[3];
  puStack_b0 = (undefined *)puVar1[2];
  puStack_98 = (undefined *)puVar1[5];
  pcStack_a0 = (code *)puVar1[4];
  uStack_90 = puVar1[6];
  uStack_88 = (undefined1)puVar1[7];
  uStack_7f = (undefined7)*(undefined8 *)((long)puVar1 + 0x41);
  uStack_78 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x41) >> 0x38);
  uStack_87 = (undefined7)*(undefined8 *)((long)puVar1 + 0x39);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x39) >> 0x38);
  if (lStack_b8 == 0) {
    ppuVar23 = &puStack_c0;
    lVar11 = *(long *)(unaff_x20 + _DAT_112eca988);
    *(undefined8 *)(unaff_x20 + _DAT_112eca988) = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eca990);
    uStack_68 = puVar1[5];
    uStack_70 = puVar1[4];
    uStack_90 = *puVar1;
    uStack_88 = (undefined1)puVar1[1];
    uStack_87 = (undefined7)((ulong)puVar1[1] >> 8);
    uStack_78 = (undefined1)puVar1[3];
    uStack_77 = (undefined7)((ulong)puVar1[3] >> 8);
    uStack_80 = (undefined1)puVar1[2];
    uStack_7f = (undefined7)((ulong)puVar1[2] >> 8);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    *(undefined8 *)((long)puVar1 + 0x41) = 0;
    *(undefined8 *)((long)puVar1 + 0x39) = 0;
    FUN_1028ec760(&uStack_90,0x112eca9c8,&UNK_10daedaa8);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eca998);
    pcVar3 = (code *)*puVar1;
    uVar12 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    if (lVar11 == 0) {
      lVar21 = *(long *)(unaff_x20 + _DAT_112eca960);
      lVar11 = lVar21;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar11 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar21);
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      if (pcVar3 != (code *)0x0) {
        func_0x000107c6157c(uVar12);
        (*pcVar3)();
        func_0x00010058d43c(pcVar3,uVar12);
        func_0x00010058d43c(pcVar3,uVar12);
      }
    }
    else {
      puVar20 = &UNK_1105671c0;
      func_0x000107c613fc(&UNK_1105671c0,0x18,7);
      func_0x000107c61614(puVar20 + 0x10,unaff_x20);
      puVar4 = &UNK_1105671e8;
      func_0x000107c613fc(&UNK_1105671e8,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar20;
      *(code **)(puVar4 + 0x18) = pcVar3;
      *(undefined8 *)(puVar4 + 0x20) = uVar12;
      pcStack_a0 = FUN_1028ec7a0;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000b0c7c;
      puStack_a8 = &UNK_110567200;
      puStack_98 = puVar4;
      func_0x000107c60bc4(&puStack_c0);
      puVar20 = puStack_98;
      func_0x000107c61174(lVar11);
      func_0x000100b64c10(pcVar3,uVar12);
      func_0x000107c61574(puVar20);
      func_0x000107c41864(lVar11);
      func_0x000107c60bd0(ppuVar23);
      func_0x000107c61170(lVar11);
      func_0x00010058d43c(pcVar3,uVar12);
      func_0x000107c61170(lVar11);
    }
    return;
  }
  uStack_e8 = puVar1[5];
  uStack_f0 = puVar1[4];
  uStack_e0 = puVar1[6];
  uStack_d8 = (undefined1)puVar1[7];
  uStack_cf = *(undefined8 *)((long)puVar1 + 0x41);
  uStack_d7 = (undefined7)*(undefined8 *)((long)puVar1 + 0x39);
  uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x39) >> 0x38);
  uStack_108 = puVar1[1];
  uStack_110 = *puVar1;
  uStack_f8 = puVar1[3];
  uStack_100 = puVar1[2];
  ppuVar23 = *(undefined ***)(param_1 + _DAT_113034f28);
  if ((ulong)ppuVar23 >> 0x3e == 0) {
    ppuVar24 = *(undefined ***)(((ulong)ppuVar23 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppuVar24 = (undefined **)((ulong)ppuVar23 & 0xffffffffffffff8);
    if ((undefined **)0x7fffffffffffffff < ppuVar23) {
      ppuVar24 = ppuVar23;
    }
    func_0x000107c60480();
  }
  uStack_1c8 = (ulong)ppuVar23 & 0xffffffffffffff8;
  uStack_138 = puStack_98;
  uStack_140 = pcStack_a0;
  uStack_128 = uStack_88;
  uStack_130 = uStack_90;
  uStack_11f = CONCAT17(uStack_78,uStack_7f);
  uStack_127 = uStack_87;
  uStack_120 = uStack_80;
  lStack_158 = lStack_b8;
  puStack_160 = puStack_c0;
  uStack_148 = puStack_a8;
  uStack_150 = puStack_b0;
  ppuVar6 = &puStack_1b0;
  FUN_1028bfbe4(&puStack_160);
  if (ppuVar24 == (undefined **)0x0) {
    puStack_1f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuStack_1e8 = &PTR____CFConstantStringClassReference_110f52c98;
    puStack_1f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar22 = (undefined **)0x0;
    do {
      while( true ) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110f52c78;
        if (((ulong)ppuVar23 & 0xc000000000000001) == 0) {
          if (*(undefined ***)(uStack_1c8 + 0x10) <= ppuVar22) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1028ec544);
            (*pcVar3)();
          }
          ppuVar5 = (undefined **)ppuVar23[(long)((long)ppuVar22 + 4)];
          func_0x000107c61174();
          ppuVar17 = ppuVar6;
        }
        else {
          ppuVar5 = ppuVar22;
          ppuVar17 = ppuVar23;
          func_0x0001011f491c();
        }
        if (SCARRY8((long)ppuVar22,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1028ec540);
          (*pcVar3)();
        }
        ppuVar18 = (undefined **)((long)ppuVar22 + 1);
        ppuVar6 = ppuVar5;
        func_0x000107c4fa44();
        func_0x000107c61180();
        ppuVar7 = ppuVar6;
        func_0x000107c44fdc();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar6);
        ppuVar6 = ppuVar7;
        func_0x000107c51cec();
        func_0x000107c61180();
        ppuVar8 = ppuVar6;
        func_0x000107c5faec();
        ppuVar14 = ppuVar17;
        func_0x000107c61170(ppuVar6);
        ppuVar6 = ppuVar7;
        func_0x000107c4fa4c();
        func_0x000107c61180();
        ppuVar9 = ppuVar6;
        func_0x000107c5faec();
        ppuVar15 = ppuVar14;
        func_0x000107c61170(ppuVar6);
        ppuVar6 = ppuVar10;
        func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c78);
        func_0x000107c5faec();
        func_0x000107c61170(ppuVar6);
        if ((ppuVar8 != ppuVar10) || (ppuVar17 != ppuVar15)) break;
        func_0x000107c6142c(ppuVar17);
        ppuVar17 = ppuVar15;
LAB_1028ec244:
        func_0x000107c6142c(ppuVar17);
        func_0x000104522c9c(0);
        ppuVar6 = ppuVar14;
        func_0x00010452281c();
LAB_1028ec2a0:
        func_0x000107c6142c(ppuVar14);
        func_0x000107c61170(ppuVar7);
        func_0x000107c61170(ppuVar5);
        puVar20 = puStack_1f0;
        func_0x000107c61550();
        if ((((int)puVar20 == 0) || ((long)puStack_1f0 < 0)) ||
           (puVar20 = puStack_1f0, ((ulong)puStack_1f0 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_1f0 >> 0x3e == 0) {
            puVar20 = *(undefined **)(((ulong)puStack_1f0 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar20 = (undefined *)((ulong)puStack_1f0 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_1f0) {
              puVar20 = puStack_1f0;
            }
            func_0x000107c60480();
          }
          ppuVar6 = (undefined **)(puVar20 + 1);
          puVar20 = (undefined *)0x0;
          func_0x0001011f467c(0,ppuVar6,1,puStack_1f0);
        }
        uVar19 = (ulong)puVar20 & 0xffffffffffffff8;
        uVar2 = *(ulong *)(uVar19 + 0x10);
        ppuVar22 = (undefined **)(uVar2 + 1);
        puStack_1f0 = puVar20;
        if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar2) {
          puStack_1f0 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
          ppuVar6 = ppuVar22;
          func_0x0001011f467c(puStack_1f0,ppuVar22,1,puVar20);
          uVar19 = (ulong)puStack_1f0 & 0xffffffffffffff8;
        }
        *(undefined ***)(uVar19 + 0x10) = ppuVar22;
        *(undefined ***)(uVar19 + uVar2 * 8 + 0x20) = ppuVar9;
        ppuVar22 = ppuVar18;
        if (ppuVar18 == ppuVar24) goto LAB_1028ec3ac;
      }
      ppuVar6 = ppuVar8;
      ppuVar16 = ppuVar17;
      func_0x000107c605b8(ppuVar8,ppuVar17,ppuVar10,ppuVar15,0);
      func_0x000107c6142c(ppuVar15);
      if (((ulong)ppuVar6 & 1) != 0) goto LAB_1028ec244;
      ppuVar6 = ppuStack_1e8;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c98);
      ppuVar10 = ppuStack_1e8;
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar6);
      if ((ppuVar8 == ppuVar10) && (ppuVar17 == ppuVar16)) {
        func_0x000107c6142c(ppuVar17);
        ppuVar17 = ppuVar16;
LAB_1028ec27c:
        func_0x000107c6142c(ppuVar17);
        func_0x000104522c9c(0);
        ppuVar6 = ppuVar14;
        func_0x00010452292c();
        goto LAB_1028ec2a0;
      }
      ppuVar6 = ppuVar17;
      func_0x000107c605b8(ppuVar8,ppuVar17,ppuVar10,ppuVar16,0);
      func_0x000107c6142c(ppuVar16);
      if (((ulong)ppuVar8 & 1) != 0) goto LAB_1028ec27c;
      func_0x000107c61170(ppuVar5);
      func_0x000107c61170(ppuVar7);
      func_0x000107c6142c(ppuVar17);
      func_0x000107c6142c(ppuVar14);
      ppuVar22 = (undefined **)((long)ppuVar22 + 1);
    } while (ppuVar18 != ppuVar24);
  }
LAB_1028ec3ac:
  if ((ulong)puStack_1f0 >> 0x3e == 0) {
    puVar20 = *(undefined **)(((ulong)puStack_1f0 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar20 = (undefined *)((ulong)puStack_1f0 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_1f0) {
      puVar20 = puStack_1f0;
    }
    func_0x000107c60480();
  }
  if (puVar20 != (undefined *)0x0) {
    lVar11 = *(long *)(unaff_x20 + _DAT_112eca970);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 != 0) {
      uVar12 = 0;
      func_0x000104522c9c(0);
      puVar20 = puStack_1f0;
      func_0x000107c5fc48(puStack_1f0,uVar12);
      func_0x000107c6142c(puStack_1f0);
      lVar21 = lVar11;
      func_0x000107c5b59c(lVar11);
      func_0x000107c61180();
      func_0x000107c61170(puVar20);
      puVar20 = &UNK_1105671c0;
      func_0x000107c613fc(&UNK_1105671c0,0x18,7);
      func_0x000107c61614(puVar20 + 0x10,unaff_x20);
      puVar4 = &UNK_110567238;
      func_0x000107c613fc(&UNK_110567238,0x61,7);
      *(undefined8 *)(puVar4 + 0x30) = uStack_f8;
      *(undefined8 *)(puVar4 + 0x28) = uStack_100;
      *(undefined8 *)(puVar4 + 0x40) = uStack_e8;
      *(undefined8 *)(puVar4 + 0x38) = uStack_f0;
      *(ulong *)(puVar4 + 0x50) = CONCAT71(uStack_d7,uStack_d8);
      *(undefined8 *)(puVar4 + 0x48) = uStack_e0;
      *(undefined8 *)(puVar4 + 0x59) = uStack_cf;
      *(ulong *)(puVar4 + 0x51) = CONCAT17(uStack_d0,uStack_d7);
      *(undefined **)(puVar4 + 0x10) = puVar20;
      *(undefined8 *)(puVar4 + 0x20) = uStack_108;
      *(undefined8 *)(puVar4 + 0x18) = uStack_110;
      uStack_190 = 0x1028ec7c8;
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a8 = 0x42000000;
      puStack_1a0 = &UNK_1011f2f24;
      puStack_198 = &UNK_110567250;
      ppuVar23 = &puStack_1b0;
      puStack_188 = puVar4;
      func_0x000107c60bc4(ppuVar23);
      func_0x000107c61574(puStack_188);
      pcVar13 = "didSend(with:)";
      func_0x0001000c10c0("didSend(with:)");
      func_0x000107c61180();
      func_0x000107c5dc64(lVar21);
      func_0x000107c615e8(pcVar13);
      func_0x000107c60bd0(ppuVar23);
      func_0x000107c61170(lVar21);
      FUN_1028ebbec();
      func_0x000107c615e8(lVar11);
      return;
    }
  }
  func_0x000107c6142c(puStack_1f0);
  FUN_1028ec760(&puStack_c0,0x112eca9c8,&UNK_10daedaa8);
  FUN_1028ebbec();
  return;
}



/* Entry: 1028ec5cc; end: 1028ec6c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ec5cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      FUN_1028ec7d4(param_3 + _DAT_112eca978,auStack_90);
      func_0x000107c61174();
      func_0x000107c61170(param_3);
      func_0x0001000a8868(auStack_90,uStack_78);
      uVar1 = *(undefined8 *)(param_1 + _DAT_11307fc78);
      pcVar2 = *(code **)(lStack_70 + 8);
      func_0x000107c61434(uVar1);
      (*pcVar2)(param_4,uVar1,0,0,0,uStack_78,lStack_70);
      func_0x000107c6142c(uVar1);
      func_0x000107c61170(param_1);
      func_0x0001000834e4(auStack_90);
    }
  }
  return;
}



/* Entry: 1028ec6c8; end: 1028ec717; -[_TtC39MyAIInteractiveShareStoreImplementation32MyAIInteractiveSendToCoordinator didSendWithSelectionState:] */

/* WARNING: Possible PIC construction at 0x0001028ec700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ec704) */

void FUN_1028ec6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1028ebfac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1028ec718; end: 1028ec73f; -[_TtC39MyAIInteractiveShareStoreImplementation32MyAIInteractiveSendToCoordinator didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_1028ec718(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028ebbec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028ec740; end: 1028ec75f;  */

void FUN_1028ec740(void)

{
  func_0x000107c61168(&PTR_PTR_11286d6f0);
  return;
}



/* Entry: 1028ec760; end: 1028ec79f;  */

undefined8 FUN_1028ec760(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1028ec7a0; end: 1028ec7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ec7a0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112eca960;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112eca960);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      func_0x000107c61170();
      uVar5 = *(undefined8 *)(lVar3 + lVar2);
      func_0x000107c4ffe8(uVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(uVar5);
    }
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 1028ec7d4; end: 1028ec817;  */

long FUN_1028ec7d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1028ec818; end: 1028ec87f;  */

/* WARNING: Possible PIC construction at 0x0001028ec848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ec84c) */

void FUN_1028ec818(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1028ec880; end: 1028ec887;  */

void FUN_1028ec880(long param_1,long param_2)

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



/* Entry: 1028ec888; end: 1028ec8ff;  */

long FUN_1028ec888(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_80;
  func_0x000107c613fc();
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  func_0x0001000285a8(0x112eca9d0,&UNK_10daedab0);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 1028ec900; end: 1028ec9cf;  */

void FUN_1028ec900(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_1c8 [104];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_90 = &uStack_160;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_1028ec9d0,&uStack_a0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  uStack_d8 = uStack_138;
  uStack_e0 = uStack_140;
  uStack_c8 = uStack_128;
  uStack_d0 = uStack_130;
  uStack_b8 = uStack_118;
  uStack_c0 = uStack_120;
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  uStack_f8 = uStack_158;
  uStack_100 = uStack_160;
  uStack_e8 = uStack_148;
  uStack_f0 = uStack_150;
  uStack_78 = uStack_138;
  uStack_80 = uStack_140;
  uStack_68 = uStack_128;
  uStack_70 = uStack_130;
  uStack_58 = uStack_118;
  uStack_60 = uStack_120;
  uStack_48 = uStack_108;
  uStack_50 = uStack_110;
  uStack_98 = uStack_158;
  uStack_a0 = uStack_160;
  uStack_88 = uStack_148;
  puStack_90 = (undefined8 *)uStack_150;
  FUN_1028eca5c(&uStack_100,auStack_1c8);
  func_0x0001028ecaac(&uStack_a0);
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = uStack_b8;
  param_1[8] = uStack_c0;
  param_1[0xb] = uStack_a8;
  param_1[10] = uStack_b0;
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Entry: 1028ec9d0; end: 1028eca5b;  */

void FUN_1028ec9d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
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
  undefined1 auStack_140 [96];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uVar9 = param_1[5];
  uVar8 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uVar7 = param_1[7];
  uVar6 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uVar10 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uVar12 = param_1[1];
  uVar11 = *param_1;
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  uStack_68 = puVar1[3];
  uStack_70 = puVar1[2];
  uStack_38 = puVar1[9];
  uStack_40 = puVar1[8];
  uStack_28 = puVar1[0xb];
  uStack_30 = puVar1[10];
  uStack_58 = puVar1[5];
  uStack_60 = puVar1[4];
  uStack_48 = puVar1[7];
  uStack_50 = puVar1[6];
  uVar3 = param_1[0xb];
  uVar2 = param_1[10];
  puVar1[9] = param_1[9];
  puVar1[8] = uVar10;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
  puVar1[5] = uVar9;
  puVar1[4] = uVar8;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  puVar1[1] = uVar12;
  *puVar1 = uVar11;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  FUN_1028eca5c(&uStack_e0,auStack_140);
  func_0x0001028ecaac(&uStack_80);
  return;
}



/* Entry: 1028eca5c; end: 1028ecaf3;  */

undefined8 FUN_1028eca5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d69430;
  func_0x0001000285a8(0x112d69430,&UNK_10d92ceb0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1028ecaf4; end: 1028ecbd3;  */

void FUN_1028ecaf4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_100 [96];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uVar3 = param_1[1];
  uVar2 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_a0 = uVar2;
  uStack_98 = uVar3;
  if (uVar3 != 0) {
    if (((uVar2 == *param_2) && (uVar3 == param_2[1])) ||
       (uVar1 = uVar2, func_0x000107c605b8(uVar2,uVar3,*param_2,param_2[1],0), (uVar1 & 1) != 0)) {
      func_0x0001028ecaac(&uStack_a0);
    }
    else {
      func_0x000107c61434(uVar3);
      func_0x0001028ecaac(&uStack_a0);
      uVar1 = param_3[1];
      *param_3 = uVar2;
      param_3[1] = uVar3;
      func_0x000107c6142c(uVar1);
    }
  }
  uVar2 = param_2[4];
  uVar1 = param_2[7];
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar1;
  param_1[6] = uVar3;
  uVar2 = param_2[8];
  uVar1 = param_2[0xb];
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[0xb] = uVar1;
  param_1[10] = uVar3;
  uVar2 = *param_2;
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar1;
  param_1[2] = uVar3;
  FUN_1028ecdc4(param_2,auStack_100);
  return;
}



/* Entry: 1028ecbd4; end: 1028ecbeb;  */

void FUN_1028ecbd4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1028ecaf4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1028ecbec; end: 1028ecc53;  */

void FUN_1028ecbec(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((param_1[1] != 0) &&
     ((uVar1 = *param_1, uVar1 == param_2 && param_3 == param_1[1] ||
      (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    func_0x0001028ecaac(param_1);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
  }
  return;
}



/* Entry: 1028ecc54; end: 1028ecc8f;  */

void FUN_1028ecc54(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1028ecbec(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1028ecc90; end: 1028eccd3;  */

void FUN_1028ecc90(undefined8 *param_1)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1028ec900(&uStack_80);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[9] = uStack_38;
  param_1[8] = uStack_40;
  param_1[0xb] = uStack_28;
  param_1[10] = uStack_30;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1028eccd4; end: 1028ecda3;  */

void FUN_1028eccd4(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puStack_48 = &uStack_40;
  uStack_50 = param_1;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(0x1028ece14,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 1028ecda4; end: 1028ecdc3;  */

void FUN_1028ecda4(void)

{
  func_0x000107c61168(&PTR_PTR_112ecaa18);
  return;
}



/* Entry: 1028ecdc4; end: 1028ecdff;  */

undefined8 FUN_1028ecdc4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10391e1ec)(param_2,param_1);
  return param_2;
}



/* Entry: 1028ece00; end: 1028ece27;  */

void FUN_1028ece00(void)

{
  FUN_1028ecc54();
  return;
}



/* Entry: 1028ece28; end: 1028ed133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ece28(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  FUN_1028ecda4();
  func_0x000107c613fc();
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  ppuStack_a0 = (undefined **)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  func_0x0001000285a8(0x112eca9d0,&UNK_10daedab0);
  func_0x000107c613fc();
  puVar3 = &uStack_c0;
  func_0x00010006c248();
  *(undefined8 **)(lVar2 + 0x10) = puVar3;
  func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
  func_0x000100083b20(&uStack_c0);
  uVar8 = uStack_c0;
  uVar4 = uStack_c0;
  func_0x000107c407c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  uVar5 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  uVar6 = 0;
  FUN_1028ede28();
  uVar8 = uVar6;
  func_0x000107c613fc();
  FUN_1028ed320(uVar5,uVar8);
  func_0x000100083b20(&uStack_c0);
  uVar8 = uStack_c0;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar4 = uVar8;
  func_0x000107c6157c(uVar8);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar8);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&lStack_d0);
  uVar8 = *(undefined8 *)(lStack_d0 + _DAT_11307fc48);
  func_0x000107c61174();
  func_0x000107c61170(lStack_d0);
  ppuStack_a0 = &PTR_DAT_110567420;
  lVar9 = 0;
  uStack_c0 = uVar5;
  uStack_a8 = uVar6;
  FUN_1028ec740();
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112eca988) = 0;
  puVar3 = (undefined8 *)(lVar10 + _DAT_112eca990);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined8 *)((long)puVar3 + 0x41) = 0;
  *(undefined8 *)((long)puVar3 + 0x39) = 0;
  puVar3 = (undefined8 *)(lVar10 + _DAT_112eca998);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined **)(lVar10 + _DAT_112eca960) = puVar7;
  *(undefined8 *)(lVar10 + _DAT_112eca968) = uStack_c8;
  *(undefined8 *)(lVar10 + _DAT_112eca970) = uVar8;
  FUN_1028ec7d4(&uStack_c0,lVar10 + _DAT_112eca978);
  plVar1 = (long *)(lVar10 + _DAT_112eca980);
  *plVar1 = lVar2;
  plVar1[1] = (long)&PTR_DAT_110567280;
  puVar7 = PTR_s_init_1125d9248;
  lStack_e0 = lVar10;
  lStack_d8 = lVar9;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(lVar2);
  func_0x000107c61154(&lStack_e0,puVar7);
  func_0x0001000834e4(&uStack_c0);
  ppuStack_a0 = &PTR_DAT_110567430;
  uStack_c0 = uVar5;
  uStack_a8 = uVar6;
  func_0x0001003638d4(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x00010391e018();
  *param_1 = lVar2;
  return;
}



/* Entry: 1028ed134; end: 1028ed14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ed134(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  FUN_1028ecda4(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c613fc();
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  ppuStack_a0 = (undefined **)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  func_0x0001000285a8(0x112eca9d0,&UNK_10daedab0);
  func_0x000107c613fc();
  puVar3 = &uStack_c0;
  func_0x00010006c248();
  *(undefined8 **)(lVar2 + 0x10) = puVar3;
  func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
  func_0x000100083b20(&uStack_c0);
  uVar8 = uStack_c0;
  uVar4 = uStack_c0;
  func_0x000107c407c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  uVar5 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  uVar6 = 0;
  FUN_1028ede28();
  uVar8 = uVar6;
  func_0x000107c613fc();
  FUN_1028ed320(uVar5,uVar8);
  func_0x000100083b20(&uStack_c0);
  uVar8 = uStack_c0;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar4 = uVar8;
  func_0x000107c6157c(uVar8);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar8);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&lStack_d0);
  uVar8 = *(undefined8 *)(lStack_d0 + _DAT_11307fc48);
  func_0x000107c61174();
  func_0x000107c61170(lStack_d0);
  ppuStack_a0 = &PTR_DAT_110567420;
  lVar9 = 0;
  uStack_c0 = uVar5;
  uStack_a8 = uVar6;
  FUN_1028ec740();
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112eca988) = 0;
  puVar3 = (undefined8 *)(lVar10 + _DAT_112eca990);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined8 *)((long)puVar3 + 0x41) = 0;
  *(undefined8 *)((long)puVar3 + 0x39) = 0;
  puVar3 = (undefined8 *)(lVar10 + _DAT_112eca998);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined **)(lVar10 + _DAT_112eca960) = puVar7;
  *(undefined8 *)(lVar10 + _DAT_112eca968) = uStack_c8;
  *(undefined8 *)(lVar10 + _DAT_112eca970) = uVar8;
  FUN_1028ec7d4(&uStack_c0,lVar10 + _DAT_112eca978);
  plVar1 = (long *)(lVar10 + _DAT_112eca980);
  *plVar1 = lVar2;
  plVar1[1] = (long)&PTR_DAT_110567280;
  puVar7 = PTR_s_init_1125d9248;
  lStack_e0 = lVar10;
  lStack_d8 = lVar9;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(lVar2);
  func_0x000107c61154(&lStack_e0,puVar7);
  func_0x0001000834e4(&uStack_c0);
  ppuStack_a0 = &PTR_DAT_110567430;
  uStack_c0 = uVar5;
  uStack_a8 = uVar6;
  func_0x0001003638d4(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x00010391e018();
  *param_1 = lVar2;
  return;
}



/* Entry: 1028ed150; end: 1028ed2ef;  */

undefined * FUN_1028ed150(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  
  func_0x000100bc2654(0);
  lVar1 = *unaff_x20;
  lVar6 = unaff_x20[1];
  func_0x000107c61434(lVar6);
  func_0x000103c1912c(lVar1,lVar6);
  if (lVar1 == 0) {
    return (undefined *)0x0;
  }
  puVar2 = PTR_PTR_1126bc778;
  func_0x000107c610f8(PTR_PTR_1126bc778);
  func_0x000107c453e4();
  lVar3 = lVar1;
  func_0x000107c44fc8(lVar1);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  func_0x000107c5ee20(lVar4,lVar6);
  func_0x00010006c090(lVar4,lVar6);
  func_0x000107c55218(puVar2);
  func_0x000107c61170(lVar3);
  puVar5 = PTR_PTR_1126dd908;
  func_0x000107c610f8(PTR_PTR_1126dd908);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  lVar6 = unaff_x20[2];
  func_0x000107c5fadc(lVar6,unaff_x20[3]);
  func_0x000107c59e18(puVar5);
  func_0x000107c61170(lVar6);
  lVar6 = unaff_x20[4];
  if ((char)unaff_x20[6] == '\x01') {
    func_0x000107c5fadc(lVar6,unaff_x20[5]);
    func_0x000107c5984c(puVar5);
  }
  else {
    if ((char)unaff_x20[6] == -1) goto LAB_1028ed29c;
    func_0x000107c5fadc(lVar6,unaff_x20[5]);
    func_0x000107c5446c(puVar5);
  }
  func_0x000107c61170(lVar6);
LAB_1028ed29c:
  lVar6 = unaff_x20[7];
  func_0x000107c5fadc(lVar6,unaff_x20[8]);
  func_0x000107c55d70(puVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c53820(puVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar2);
  return puVar5;
}



/* Entry: 1028ed2f0; end: 1028ed31f;  */

void FUN_1028ed2f0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1028ed320; end: 1028ed32b;  */

void FUN_1028ed320(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1028ed32c; end: 1028ed5cf;  */

/* WARNING: Possible PIC construction at 0x0001028ed3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ed3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ed4d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ed4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ed5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ed558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ed52c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ed55c) */
/* WARNING: Removing unreachable block (ram,0x0001028ed5a4) */
/* WARNING: Removing unreachable block (ram,0x0001028ed4fc) */
/* WARNING: Removing unreachable block (ram,0x0001028ed5a8) */
/* WARNING: Removing unreachable block (ram,0x0001028ed4dc) */
/* WARNING: Removing unreachable block (ram,0x0001028ed3dc) */
/* WARNING: Removing unreachable block (ram,0x0001028ed538) */
/* WARNING: Removing unreachable block (ram,0x0001028ed53c) */
/* WARNING: Removing unreachable block (ram,0x0001028ed548) */
/* WARNING: Removing unreachable block (ram,0x0001028ed3e4) */
/* WARNING: Removing unreachable block (ram,0x0001028ed580) */
/* WARNING: Removing unreachable block (ram,0x0001028ed584) */
/* WARNING: Removing unreachable block (ram,0x0001028ed590) */
/* WARNING: Removing unreachable block (ram,0x0001028ed3f8) */
/* WARNING: Removing unreachable block (ram,0x0001028ed3ac) */
/* WARNING: Removing unreachable block (ram,0x0001028ed518) */
/* WARNING: Removing unreachable block (ram,0x0001028ed51c) */
/* WARNING: Removing unreachable block (ram,0x0001028ed528) */
/* WARNING: Removing unreachable block (ram,0x0001028ed3c0) */
/* WARNING: Removing unreachable block (ram,0x0001028ed530) */
/* WARNING: Removing unreachable block (ram,0x0001028ed560) */

void FUN_1028ed32c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  
  FUN_1028ed150();
  if (param_1 == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(0);
    }
    return;
  }
  puVar2 = PTR_PTR_1126ba668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a934();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c56934();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ed5d0);
  (*pcVar1)();
}



/* Entry: 1028ed5d0; end: 1028ed797;  */

/* WARNING: Possible PIC construction at 0x0001028ed710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ed728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ed714) */
/* WARNING: Removing unreachable block (ram,0x0001028ed72c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ed5d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar4 = *(long *)(param_3 + _DAT_11307fc78);
  uVar5 = *unaff_x20;
  uVar2 = *(undefined8 *)(param_3 + _DAT_11307fc80);
  FUN_1029c67d8(uVar2,param_4);
  if (*(long *)(lVar4 + 0x10) == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)(0);
    }
  }
  else {
    func_0x0001000d224c(&puStack_80);
    puVar1 = puStack_80;
    if (puStack_80 == (undefined *)0x0) {
      if (param_5 != (code *)0x0) {
        (*param_5)(0);
      }
      func_0x000107c61170(uVar2);
      return;
    }
    FUN_1028ed9e4(param_1,param_2,*(undefined8 *)(lVar4 + 0x10),1,uVar2);
    func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
    puVar3 = &UNK_1105673e0;
    func_0x000107c613fc(&UNK_1105673e0,0x28,7);
    *(code **)(puVar3 + 0x10) = param_5;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    *(undefined8 *)(puVar3 + 0x20) = uVar5;
    uStack_60 = 0x1028ede50;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100f5c588;
    puStack_68 = &UNK_1105673f8;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000101237340(param_5,param_6);
    func_0x000107c61574(puVar3);
    func_0x000107c51e10(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1028ed798; end: 1028ed7bb;  */

void FUN_1028ed798(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028ed7bc; end: 1028ed7fb;  */

void FUN_1028ed7bc(void)

{
  FUN_1028ed32c();
  return;
}



/* Entry: 1028ed7fc; end: 1028ed9e3;  */

undefined * FUN_1028ed7fc(ulong param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  
  lVar1 = 0;
  lVar6 = param_2;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar2 = PTR_PTR_1126b1a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar6);
  }
  puVar4 = puVar2;
  func_0x000107c5e870(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  if ((param_1 & 1) != 0) {
    puVar2 = puVar4;
    func_0x000107c5e5cc(puVar4);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5e7ec();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = puVar3;
    func_0x000107c5e4a4(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee70();
    (**(code **)(lVar7 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    puVar5 = puVar2;
    func_0x000107c5e5b0(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
  }
  if (param_2 != 0) {
    func_0x000107c61174(param_2);
    func_0x000107c61174();
    puVar2 = puVar4;
    func_0x000107c5e500(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar2);
  }
  puVar2 = puVar4;
  func_0x000107c3ecc8(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 1028ed9e4; end: 1028eddab;  */

undefined *
FUN_1028ed9e4(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 >> 0x1f != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028edda8);
    (*pcVar1)();
  }
  puVar2 = PTR_PTR_1126dabd8;
  func_0x000107c610f8();
  uVar3 = 0x55515f49415f594d;
  func_0x000107c5fadc(0x55515f49415f594d,0xea00000000005a49);
  func_0x000107c488c4();
  func_0x000107c61170(uVar3);
  puVar4 = (undefined *)(ulong)(param_4 & 1);
  FUN_1028ed7fc(puVar4,param_5);
  puVar5 = PTR_PTR_1126da7b8;
  func_0x000107c610f8();
  func_0x000107c477f4();
  func_0x000100bc2654(0);
  puVar14 = puVar4;
  func_0x000107c5db64();
  func_0x000107c61180();
  puVar6 = puVar14;
  func_0x000107c5faec();
  func_0x000107c61170(puVar14);
  func_0x000103c1912c(puVar6,param_5);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126b0cd8;
    func_0x000107c61168(PTR_PTR_1126b0cd8);
    func_0x000107c3abc0();
    func_0x000107c61180();
  }
  func_0x000107c529a4(puVar5);
  func_0x000107c61170(puVar6);
  puVar14 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x000107c61168();
  func_0x000107c3e100();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x000107c61174(0);
  if (puVar14 == (undefined *)0x0) {
    uVar7 = uVar3;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    func_0x000107c614ac(uVar7);
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar14;
    func_0x000107c5ee30(puVar14);
    func_0x000107c61170(puVar14);
    puVar14 = puVar6;
    func_0x000107c5ee20(puVar6,param_5);
    func_0x00010006c090(puVar6,param_5);
  }
  func_0x000107c537f0(puVar5);
  func_0x000107c61170(puVar14);
  func_0x000107c58eb8(puVar5);
  puVar14 = PTR_PTR_1126be6d0;
  func_0x000107c610f8(PTR_PTR_1126be6d0);
  func_0x000107c61174();
  func_0x000107c5ee20(param_1);
  func_0x000107c46080(puVar14);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  puVar6 = PTR_PTR_1126be758;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar12 = PTR_PTR_1126dd910;
  func_0x000107c610f8(PTR_PTR_1126dd910);
  func_0x000107c453e4();
  func_0x000107c5515c();
  func_0x000107c56af8(puVar6);
  puVar8 = puVar6;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    puVar9 = puVar8;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar8);
    lVar10 = 0x112d4c088;
    func_0x0001000285a8(0x112d4c088,&UNK_10d913a10);
    func_0x000107c613fc();
    *(undefined8 *)(lVar10 + 0x18) = 2;
    *(undefined8 *)(lVar10 + 0x10) = 1;
    *(undefined **)(lVar10 + 0x20) = puVar9;
    *(undefined8 *)(lVar10 + 0x28) = param_2;
    func_0x00010006c00c(puVar9,param_2);
    lVar11 = lVar10;
    func_0x000107c5fc48(lVar10,PTR___s10Foundation4DataVN_110350ae0);
    func_0x000107c61574(lVar10);
    puVar8 = puVar14;
    func_0x000107c5e5ac(puVar14);
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar8);
    func_0x00010006c090(puVar9,param_2);
  }
  puVar8 = puVar14;
  func_0x000107c3ecc8(puVar14);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar8;
  }
  func_0x000107c60e78();
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    puVar12 = (undefined *)(ulong)(puVar12 == (undefined *)0x0);
    (**(code **)(puVar5 + 0x10))(puVar12);
  }
  return puVar12;
}



/* Entry: 1028eddac; end: 1028eddcb;  */

void FUN_1028eddac(long param_1)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(param_1 == 0);
  }
  return;
}



/* Entry: 1028eddcc; end: 1028eddf7;  */

void FUN_1028eddcc(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028eddf8; end: 1028ede27;  */

void FUN_1028eddf8(long param_1)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(param_1 == 0);
  }
  return;
}



/* Entry: 1028ede28; end: 1028ede47;  */

void FUN_1028ede28(void)

{
  func_0x000107c61168(&PTR_PTR_112ecaac0);
  return;
}



/* Entry: 1028ede48; end: 1028ede53;  */

void FUN_1028ede48(long param_1,long param_2)

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



/* Entry: 1028ede54; end: 1028ede83;  */

void FUN_1028ede54(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1028ede84; end: 1028edea7;  */

void FUN_1028ede84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028edea8; end: 1028edf0f;  */

void FUN_1028edea8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(param_2,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 1028edf10; end: 1028edf3b;  */

void FUN_1028edf10(void)

{
  return;
}



/* Entry: 1028edf3c; end: 1028edf5b;  */

void FUN_1028edf3c(void)

{
  func_0x000107c61168(&PTR_PTR_112ecab60);
  return;
}



/* Entry: 1028edf5c; end: 1028edfa7;  */

long FUN_1028edf5c(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001028ee74c();
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Entry: 1028edfa8; end: 1028ee533;  */

/* WARNING: Removing unreachable block (ram,0x0001028ee52c) */
/* WARNING: Removing unreachable block (ram,0x0001028ee530) */
/* WARNING: Removing unreachable block (ram,0x0001028ee528) */

bool FUN_1028edfa8(long param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  ulong uStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  undefined1 auStack_e0 [80];
  ulong uStack_90;
  undefined8 auStack_88 [5];
  
  lVar1 = 0x112d36580;
  puVar12 = (undefined8 *)0x0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&uStack_100 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    return true;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar16 = *(long *)PTR__UIApplicationLaunchOptionsRemoteNotificationKey_110345a48;
    func_0x000107c61434(param_1);
    FUN_1028ee5d4(lVar16);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar16 * 0x20,auStack_88);
      func_0x000107c6142c(param_1);
      uVar6 = 0x112da99a0;
      func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
      puVar5 = PTR___sypN_11034f1a8;
      puVar2 = &uStack_90;
      puVar12 = auStack_88;
      func_0x000107c6147c(puVar2,puVar12,PTR___sypN_11034f1a8 + 8,uVar6,6);
      uVar7 = uStack_90;
      if (((ulong)puVar2 & 1) != 0) {
        puVar3 = PTR_PTR_1126b1370;
        func_0x000107c610f8();
        uVar4 = uVar7;
        puVar12 = (undefined8 *)PTR___ss11AnyHashableVN_11034e448;
        func_0x000107c5f9dc(uVar7,PTR___ss11AnyHashableVN_11034e448,puVar5 + 8,
                            PTR___ss11AnyHashableVSHsWP_11034e450);
        func_0x000107c6142c(uVar7);
        func_0x000107c47b2c();
        func_0x000107c61170(uVar4);
        if (puVar3 != (undefined *)0x0) {
          puVar5 = puVar3;
          func_0x000107c5c74c();
          func_0x000107c61170(puVar3);
          if ((undefined *)0x1 < puVar5) {
            return false;
          }
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar16 = *(long *)PTR__UIApplicationLaunchOptionsShortcutItemKey_110345a50;
    func_0x000107c61434(param_1);
    FUN_1028ee5d4(lVar16);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar16 * 0x20,auStack_88);
      func_0x000107c6142c(param_1);
      uVar6 = 0;
      func_0x0001028ee880(0);
      puVar2 = &uStack_90;
      puVar12 = auStack_88;
      func_0x000107c6147c(puVar2,puVar12,PTR___sypN_11034f1a8 + 8,uVar6,6);
      if (((ulong)puVar2 & 1) != 0) {
        uStack_f0 = uStack_90;
        func_0x000107c5d0f0();
        uVar7 = uStack_90;
        func_0x000107c61180();
        uVar4 = uVar7;
        func_0x000107c5faec();
        uStack_100 = uVar4;
        puStack_f8 = puVar12;
        func_0x000107c61170(uVar7);
        lVar16 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        puVar10 = auStack_e0;
        func_0x000107c61534();
        *(undefined8 *)(lVar16 + 0x18) = 6;
        *(undefined8 *)(lVar16 + 0x10) = 3;
        ppuVar17 = &PTR____CFConstantStringClassReference_110f5ba38;
        func_0x000107c5faec();
        puVar11 = puVar10;
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110f5ba38);
        *(undefined8 *)(lVar16 + 0x20) = ppuVar17;
        *(undefined1 **)(lVar16 + 0x28) = puVar10;
        ppuVar17 = &PTR____CFConstantStringClassReference_110f5b9f8;
        func_0x000107c5faec();
        puVar10 = puVar11;
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110f5b9f8);
        *(undefined ***)(lVar16 + 0x30) = ppuVar17;
        *(undefined1 **)(lVar16 + 0x38) = puVar11;
        ppuVar17 = &PTR____CFConstantStringClassReference_110f5ba18;
        func_0x000107c5faec();
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110f5ba18);
        puVar12 = puStack_f8;
        *(undefined ***)(lVar16 + 0x40) = ppuVar17;
        *(undefined1 **)(lVar16 + 0x48) = puVar10;
        uVar7 = uStack_100;
        func_0x000100077018(uStack_100,puStack_f8,lVar16);
        func_0x000107c6142c(puVar12);
        func_0x000107c61170(uStack_f0);
        func_0x000107c61588(lVar16);
        puVar12 = (undefined8 *)0x3;
        func_0x000107c61408((undefined8 *)(lVar16 + 0x20),3,PTR___sSSN_11034da80);
        if ((uVar7 & 1) != 0) {
          return false;
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_1028ee450:
    (**(code **)(lVar14 + 0x38))(lVar13,1,1,lVar1);
  }
  else {
    lVar16 = *(long *)PTR__UIApplicationLaunchOptionsURLKey_110345a60;
    func_0x000107c61434(param_1);
    FUN_1028ee5d4(lVar16);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(param_1);
      goto LAB_1028ee450;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar16 * 0x20,auStack_88);
    func_0x000107c6142c(param_1);
    lVar16 = lVar13;
    func_0x000107c6147c(lVar13,auStack_88,PTR___sypN_11034f1a8 + 8,lVar1,6);
    (**(code **)(lVar14 + 0x38))(lVar13,(uint)lVar16 ^ 1,1,lVar1);
    lVar16 = lVar13;
    (**(code **)(lVar14 + 0x30))(lVar13,1,lVar1);
    if ((int)lVar16 != 1) {
      (**(code **)(lVar14 + 0x20))(lVar15,lVar13,lVar1);
      ppuVar17 = (undefined **)PTR_PTR_1126b1068;
      func_0x000107c610f8();
      ppuVar9 = ppuVar17;
      func_0x000107c5ed90();
      func_0x000107c48fe4();
      func_0x000107c61170(ppuVar9);
      ppuVar9 = ppuVar17;
      func_0x000107c42e38();
      func_0x000107c61180();
      if (ppuVar9 == (undefined **)0x0) {
        (**(code **)(lVar14 + 8))(lVar15,lVar1);
        func_0x000107c61170(ppuVar17);
      }
      else {
        ppuVar8 = ppuVar9;
        func_0x000107c5faec();
        lVar16 = lVar13;
        func_0x000107c61170(ppuVar9);
        ppuVar9 = &PTR____CFConstantStringClassReference_110dad4b8;
        func_0x000107c5faec();
        if ((ppuVar8 == ppuVar9) && (lVar13 == lVar16)) {
          func_0x000107c6142c(lVar13);
          func_0x000107c6142c(lVar16);
          func_0x000107c61170(ppuVar17);
          (**(code **)(lVar14 + 8))(lVar15,lVar1);
        }
        else {
          func_0x000107c605b8(ppuVar8,lVar13,ppuVar9,lVar16,0);
          func_0x000107c6142c(lVar13);
          func_0x000107c6142c(lVar16);
          func_0x000107c61170(ppuVar17);
          (**(code **)(lVar14 + 8))(lVar15,lVar1);
          if (((ulong)ppuVar8 & 1) == 0) {
            return false;
          }
        }
      }
      goto LAB_1028ee470;
    }
  }
  func_0x0001000293e4(lVar13);
LAB_1028ee470:
  func_0x000100083b20(auStack_88);
  uVar6 = auStack_88[0];
  func_0x000107c4162c();
  func_0x000107c615e8(auStack_88[0]);
  return (int)uVar6 == 3 || (int)uVar6 == 0;
}



/* Entry: 1028ee534; end: 1028ee55f;  */

void FUN_1028ee534(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028ee560; end: 1028ee56b;  */

undefined1 FUN_1028ee560(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + 0x20);
}



/* Entry: 1028ee56c; end: 1028ee5d3;  */

void FUN_1028ee56c(undefined *param_1)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  puVar1 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001028ee74c();
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined **)(lVar2 + 0x18) = puVar1;
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar3);
  FUN_1028edfa8();
  *(byte *)(lVar2 + 0x20) = (byte)param_1 & 1;
  return;
}



/* Entry: 1028ee5d4; end: 1028ee653;  */

undefined1  [16] FUN_1028ee5d4(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [56];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar8);
  puVar1 = auStack_88;
  func_0x000107c5fb58(puVar1,uVar6,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      func_0x000107c5faec();
      uVar3 = param_1;
      puVar4 = puVar1;
      func_0x000107c5faec();
      if (uVar2 == uVar3 && puVar1 == puVar4) break;
      puVar5 = puVar1;
      func_0x000107c605b8(uVar2,puVar1,uVar3,puVar4,0);
      uVar9 = (uint)uVar2;
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar4);
      if (((uVar2 & 1) != 0) ||
         (uVar7 = uVar7 + 1 & ~uVar6, puVar1 = puVar5,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0))
      goto LAB_1028ee72c;
    }
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar4);
    uVar9 = 1;
  }
LAB_1028ee72c:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 1028ee654; end: 1028ee84f;  */

undefined1  [16] FUN_1028ee654(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_1028ee72c;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_1028ee72c:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 1028ee850; end: 1028ee85f;  */

undefined1  [16] FUN_1028ee850(void)

{
  return ZEXT816(0x1105675a8);
}



/* Entry: 1028ee860; end: 1028ee8c3;  */

void FUN_1028ee860(void)

{
  func_0x000107c61168(&PTR_PTR_112ecac00);
  return;
}



/* Entry: 1028ee8c4; end: 1028ee953;  */

undefined8 FUN_1028ee8c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ecac80;
  func_0x0001000285a8(0x112ecac80,&UNK_10daedd88);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1028ee954; end: 1028ee973;  */

void FUN_1028ee954(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1028ee974; end: 1028ee98f;  */

void FUN_1028ee974(void)

{
  func_0x000107c610f8(PTR_PTR_1126ce4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1028ee990; end: 1028ee99f;  */

undefined1  [16] FUN_1028ee990(void)

{
  return ZEXT816(0x1105676e0);
}



/* Entry: 1028ee9a0; end: 1028ee9bf;  */

void FUN_1028ee9a0(void)

{
  func_0x000107c61168(&PTR_PTR_112ecacd0);
  return;
}



/* Entry: 1028ee9c0; end: 1028eea03;  */

undefined1  [16] FUN_1028ee9c0(void)

{
  return ZEXT816(0x1105677d8);
}



/* Entry: 1028eea04; end: 1028eea47;  */

void FUN_1028eea04(long param_1,long *param_2,long param_3)

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



/* Entry: 1028eea48; end: 1028eea57;  */

undefined1  [16] FUN_1028eea48(void)

{
  return ZEXT816(0x110567880);
}


