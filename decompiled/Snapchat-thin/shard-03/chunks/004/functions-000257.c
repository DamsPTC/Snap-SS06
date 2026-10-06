/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027ef78c; end: 1027ef7d7;  */

undefined8 FUN_1027ef78c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c40258(param_2);
  func_0x000107c61180();
  func_0x0001070b30c4(uVar1,param_2);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 1027ef7d8; end: 1027ef84f;  */

void FUN_1027ef7d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  FUN_1027f09dc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c453dc();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x0001070b31f8();
  func_0x000107c61170(uVar2);
  func_0x000107c6010c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1027ef850; end: 1027ef8c3; -[TextAdMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1027ef850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1027f00ec(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027ef8c4; end: 1027ef8eb; -[TextAdMessagePlugin pluginDidRegister] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ef8c4(long param_1)

{
  if (*(char *)(param_1 + _DAT_112ec2440) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c09a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112ec2438),PTR_s_listenToConversationEvents_112604310)
    ;
    return;
  }
  return;
}



/* Entry: 1027ef8ec; end: 1027ef903; -[TextAdMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001027ef900) */

void FUN_1027ef8ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1027ef904; end: 1027ef90b; -[TextAdMessagePlugin pluginType] */

undefined8 FUN_1027ef904(void)

{
  return 0;
}



/* Entry: 1027ef90c; end: 1027ef98f; -[TextAdMessagePlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x0001027ef948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ef964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027ef94c) */
/* WARNING: Removing unreachable block (ram,0x0001027ef968) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ef90c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027ef990; end: 1027ef9df;  */

void FUN_1027ef990(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1027ef9e0; end: 1027efa3f; -[TextAdMessagePlugin init] */

void FUN_1027ef9e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdMessagePluginsSwift.TextAdMessagePlugin",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027efa0c);
  (*pcVar1)();
}



/* Entry: 1027efa40; end: 1027efae7; -[TextAdMessagePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027efa40(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2400));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2408));
  func_0x000100e3b598(param_1 + _DAT_112ec2410);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2418));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2420));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2428));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2430));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2438));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec2448));
  return;
}



/* Entry: 1027efae8; end: 1027efbc3; -[TextAdMessagePlugin webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001027efb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027efb88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027efbac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027efb8c) */
/* WARNING: Removing unreachable block (ram,0x0001027efb70) */
/* WARNING: Removing unreachable block (ram,0x0001027efbb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027efae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_112ec2440) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112ec2438);
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c435d0(uVar1);
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_1);
  }
  lVar2 = *(long *)(param_1 + _DAT_112ec2428);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1027efbc4; end: 1027efd6b;  */

undefined8 FUN_1027efbc4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  lVar2 = *(long *)(param_3 + 0x18);
  if (lVar2 == 0) {
    puVar1 = (undefined1 *)0x0;
    lVar2 = *(long *)(param_4 + 0x18);
  }
  else {
    func_0x0001006732c8(param_3,lVar2);
    lVar5 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar3);
    puVar1 = puVar3;
    func_0x000107c605b0(puVar3,lVar2);
    (**(code **)(lVar5 + 8))(puVar3,lVar2);
    func_0x000100183ab8(param_3);
    lVar2 = *(long *)(param_4 + 0x18);
  }
  if (lVar2 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(param_4,lVar2);
    lVar5 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lVar2);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
    func_0x000100183ab8(param_4);
  }
  func_0x000107c45f08();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar1);
  func_0x000107c615e8(puVar3);
  return unaff_x20;
}



/* Entry: 1027efd6c; end: 1027efdf3;  */

void FUN_1027efd6c(void)

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
    FUN_1027f09dc(0,0x112ec2478,&PTR_PTR_1126c6830);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ec24a8;
  plVar5 = (long *)&UNK_10dae0910;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1027efdf4; end: 1027eff27;  */

undefined * FUN_1027efdf4(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027eff28);
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
    puVar3 = param_1;
    FUN_1027efd6c();
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
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1027f09dc(0,0x112ec2478,&PTR_PTR_1126c6830);
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



/* Entry: 1027eff28; end: 1027f00eb;  */

ulong FUN_1027eff28(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f000c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f0010);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ab070;
    func_0x000107c61168(PTR_PTR_1126ab070);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ab070;
    func_0x000107c61168(PTR_PTR_1126ab070);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1027f09dc(0,0x112ec24a0,&PTR_PTR_1126ab070);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f00ec);
  (*pcVar2)();
}



/* Entry: 1027f00ec; end: 1027f098b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027f00ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long unaff_x20;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *apuStack_d8 [3];
  undefined8 uStack_c0;
  undefined *apuStack_b8 [3];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec2448);
  func_0x000107c4ce08(lVar3,param_2,param_1);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c404a8();
    if ((int)lVar5 == 5) {
      lVar5 = lVar4;
      func_0x000107c5a934();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x000107c5a960();
        if ((int)lVar6 == 0x17) {
          lVar6 = lVar5;
          func_0x000107c5c830();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar19 = lVar6;
            func_0x000107c3ec9c();
            lVar7 = lVar6;
            func_0x000107c4a7d8();
            func_0x000107c61180();
            puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
            puVar18 = puVar10;
            if (lVar7 != 0) {
              puStack_a0 = (undefined *)0x0;
              uVar8 = 0;
              FUN_1027f09dc(0,0x112ec24a0,&PTR_PTR_1126ab070);
              func_0x000107c5fc50(lVar7,&puStack_a0,uVar8);
              func_0x000107c61170(lVar7);
              if (puStack_a0 != (undefined *)0x0) {
                puVar18 = puStack_a0;
              }
            }
            if ((ulong)puVar18 >> 0x3e == 0) {
              puVar21 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar21 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar18) {
                puVar21 = puVar18;
              }
              func_0x000107c60480();
            }
            if (puVar21 == (undefined *)0x0) {
              func_0x000107c6142c(puVar18);
              puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            else {
              puStack_a0 = puVar10;
              func_0x0001027efdd8(0,(ulong)puVar21 & ((long)puVar21 >> 0x3f ^ 0xffffffffffffffffU),0
                                 );
              if ((long)puVar21 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f0944);
                (*pcVar2)();
              }
              puVar20 = (undefined *)0x0;
              do {
                puVar10 = puStack_a0;
                if (((ulong)puVar18 & 0xc000000000000001) == 0) {
                  if (*(long *)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10) <= (long)puVar20) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f08e8);
                    (*pcVar2)();
                  }
                  puVar9 = *(undefined **)(puVar18 + (long)puVar20 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  puVar9 = puVar20;
                  FUN_1027eff28(puVar20,puVar18);
                }
                apuStack_b8[0] = puVar9;
                FUN_1027eee44(apuStack_d8,apuStack_b8);
                func_0x000107c61170(puVar9);
                puVar9 = apuStack_d8[0];
                uVar1 = *(ulong *)(puVar10 + 0x10);
                puStack_a0 = puVar10;
                if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
                  func_0x0001027efdd8(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
                }
                puVar10 = puStack_a0;
                puVar20 = puVar20 + 1;
                *(ulong *)(puStack_a0 + 0x10) = uVar1 + 1;
                *(undefined **)(puStack_a0 + uVar1 * 8 + 0x20) = puVar9;
              } while (puVar21 != puVar20);
              func_0x000107c6142c(puVar18);
            }
            if ((ulong)puVar10 >> 0x3e == 0) {
              puVar18 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
              puVar21 = PTR_PTR_1126c6838;
            }
            else {
              puVar18 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar10) {
                puVar18 = puVar10;
              }
              func_0x000107c60480();
              puVar21 = PTR_PTR_1126c6838;
            }
            PTR_PTR_1126c6838 = puVar21;
            if (puVar18 == (undefined *)0x0) {
              func_0x000107c6142c(puVar10);
              func_0x000107c615e8(lVar3);
              func_0x000107c61170(lVar6);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar4);
              return 0;
            }
            func_0x000107c610f8();
            uVar8 = 0;
            FUN_1027f09dc(0,0x112ec2478,&PTR_PTR_1126c6830);
            puVar18 = puVar10;
            func_0x000107c5fc48(puVar10,uVar8);
            func_0x000107c6142c(puVar10);
            func_0x000107c4700c();
            func_0x000107c61170(puVar18);
            lVar7 = lVar6;
            func_0x000107c42150(lVar6);
            func_0x000107c61180();
            func_0x000107c54240(puVar21);
            func_0x000107c61170(lVar7);
            lVar7 = lVar6;
            func_0x000107c4e3b8(lVar6);
            func_0x000107c61180();
            func_0x000107c57244(puVar21);
            func_0x000107c61170(lVar7);
            lVar7 = lVar6;
            func_0x000107c4e3c0(lVar6);
            func_0x000107c61180();
            func_0x000107c57248(puVar21);
            func_0x000107c61170(lVar7);
            puVar20 = PTR_PTR_1126c6840;
            func_0x000107c610f8();
            func_0x000107c453e4();
            puVar10 = &UNK_1105506a0;
            func_0x000107c613fc(&UNK_1105506a0,0x18,7);
            func_0x000107c61614(puVar10 + 0x10,unaff_x20);
            puVar18 = &UNK_1105506c8;
            func_0x000107c613fc(&UNK_1105506c8,0x20,7);
            *(int *)(puVar18 + 0x10) = (int)lVar19;
            *(undefined **)(puVar18 + 0x18) = puVar10;
            pcStack_80 = FUN_1027f09ac;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_100c75f50;
            puStack_88 = &UNK_1105506e0;
            ppuVar11 = &puStack_a0;
            puStack_78 = puVar18;
            func_0x000107c60bc4(ppuVar11);
            func_0x000107c61574(puStack_78);
            func_0x000107c56f0c(puVar20);
            func_0x000107c60bd0(ppuVar11);
            uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec2420);
            func_0x000107c5c734(uVar8);
            func_0x000107c61180();
            func_0x000107c52d78(puVar20);
            func_0x000107c615e8(uVar8);
            lVar19 = _DAT_112ec2418;
            func_0x000107c61428(unaff_x20 + _DAT_112ec2418,apuStack_b8,0,0);
            lVar19 = *(long *)(unaff_x20 + lVar19);
            if (lVar19 == 0) {
              uVar8 = 0;
              uVar12 = 0;
            }
            else {
              func_0x0001000285a8(0x112ec2498,&UNK_10dae3650);
              func_0x000107c61174(lVar19);
              lVar7 = lVar19;
              func_0x0001000b637c();
              func_0x000107c61170(lVar19);
              puVar10 = &UNK_110550718;
              func_0x000107c613fc(&UNK_110550718,0x18,7);
              *(long *)(puVar10 + 0x10) = lVar3;
              func_0x000107c615f0(lVar3);
              uVar8 = 0x1027f09d4;
              func_0x0001000c0ebc(0x1027f09d4,puVar10);
              func_0x000107c61574(lVar7);
              func_0x000107c61574(puVar10);
              uVar12 = 0;
              FUN_1027f09dc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              pcVar2 = FUN_1027ef7d8;
              func_0x0001000bfde0(FUN_1027ef7d8,0,uVar12);
              func_0x000107c61574(uVar8);
              func_0x0001004575f0();
              func_0x000107c61574(pcVar2);
              uVar13 = uVar8;
              func_0x000107c421ac(uVar8);
              func_0x000107c61180();
              uVar12 = uVar13;
              func_0x000107c5cb24();
              func_0x000107c61180();
              func_0x000107c61170(uVar13);
            }
            func_0x000107c5a5f0(puVar20);
            func_0x000107c61170(uVar12);
            uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ec2430);
            func_0x000107c5c734(uVar12);
            func_0x000107c61180();
            func_0x000107c56a84(puVar20);
            func_0x000107c615e8(uVar12);
            lVar19 = lVar6;
            func_0x000107c44a3c();
            if ((int)lVar19 != 0) {
              lVar19 = lVar6;
              func_0x000107c4ebe0();
              func_0x000107c61180();
              if (lVar19 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f0948);
                (*pcVar2)();
              }
              lVar7 = lVar19;
              func_0x000107c5dfb8();
              func_0x000107c61180();
              func_0x000107c61170(lVar19);
              if (lVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f094c);
                (*pcVar2)();
              }
              lVar19 = lVar6;
              func_0x000107c4ebe0();
              func_0x000107c61180();
              if (lVar19 == 0) {
                func_0x000107c61170(lVar7);
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f0958);
                (*pcVar2)();
              }
              lVar14 = lVar19;
              func_0x000107c4e28c();
              func_0x000107c61180();
              func_0x000107c61170(lVar19);
              if (lVar14 == 0) {
                func_0x000107c61170(lVar7);
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f0964);
                (*pcVar2)();
              }
              lVar19 = lVar6;
              func_0x000107c4ebe0();
              func_0x000107c61180();
              if (lVar19 == 0) {
                func_0x000107c61170(lVar7);
                func_0x000107c61170(lVar14);
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f0978);
                (*pcVar2)();
              }
              lVar15 = lVar19;
              func_0x000107c4e74c();
              func_0x000107c61180();
              func_0x000107c61170(lVar19);
              if (lVar15 == 0) {
                func_0x000107c61170(lVar7);
                func_0x000107c61170(lVar14);
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f098c);
                (*pcVar2)();
              }
              puVar10 = PTR_PTR_1126c67d0;
              func_0x000107c610f8(PTR_PTR_1126c67d0);
              func_0x000107c49548();
              func_0x000107c61170(lVar7);
              func_0x000107c61170(lVar14);
              func_0x000107c61170(lVar15);
              func_0x000107c523e4(puVar20);
              func_0x000107c61170(puVar10);
            }
            if (*(char *)(unaff_x20 + _DAT_112ec2440) == '\x01') {
              uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ec2438);
              func_0x000107c42398(uVar12);
              func_0x000107c61180();
              func_0x000107c54384(puVar20);
              func_0x000107c61170(uVar12);
            }
            uVar12 = 0x112ec2480;
            uVar16 = 0;
            FUN_1027f09dc(0,0x112ec2480,&PTR_PTR_1126c6848);
            func_0x000107c614e8();
            func_0x000107c3ff48();
            func_0x000107c61180();
            uVar13 = uVar16;
            func_0x000107c5faec();
            func_0x000107c61170(uVar16);
            uVar16 = 0;
            FUN_1027f09dc(0,0x112ec2488,&PTR_PTR_1126c6838);
            uVar17 = 0;
            puStack_a0 = puVar21;
            puStack_88 = (undefined *)uVar16;
            FUN_1027f09dc(0,0x112ec2490,&PTR_PTR_1126c6840);
            apuStack_d8[0] = puVar20;
            uStack_c0 = uVar17;
            func_0x000107c610f8(PTR_PTR_1126c67d8);
            func_0x000107c61174(puVar21);
            func_0x000107c61174(puVar20);
            FUN_1027efbc4(uVar13,uVar12,&puStack_a0,apuStack_d8);
            func_0x000107c615e8(lVar3);
            func_0x000107c61170(puVar20);
            func_0x000107c61170(puVar21);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar4);
            return uVar13;
          }
        }
        func_0x000107c61170(lVar4);
        lVar4 = lVar5;
      }
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c615e8(lVar3);
  return 0;
}



/* Entry: 1027f098c; end: 1027f09ab;  */

void FUN_1027f098c(void)

{
  func_0x000107c61168(&PTR_PTR_112864250);
  return;
}



/* Entry: 1027f09ac; end: 1027f09db;  */

void FUN_1027f09ac(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_70;
  pcVar2 = "valdiContextParams(for:conversationParticipants:)";
  func_0x0001000c10c0("valdiContextParams(for:conversationParticipants:)");
  func_0x000107c61180();
  puVar3 = &UNK_110550740;
  func_0x000107c613fc(&UNK_110550740,0x30,7);
  *(undefined4 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  pcStack_50 = FUN_1027f0a1c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110550758;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(uVar5);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1027f09dc; end: 1027f0a1b;  */

void FUN_1027f09dc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1027f0a1c; end: 1027f0a2b;  */

void FUN_1027f0a1c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*(int *)(unaff_x20 + 0x10) == 1) {
    func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    FUN_1027ef2e8(uVar1,uVar3);
  }
  else {
    func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    FUN_1027f0a2c(uVar1,uVar3);
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1027f0a2c; end: 1027f0c13;  */

void FUN_1027f0a2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar10,param_1,param_2);
  puVar2 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar10);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar1);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    puVar4 = puVar3;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5ed90();
    puVar6 = puVar4;
    func_0x000107c3f3f4();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    if ((int)puVar6 != 0) {
      func_0x000107c5a9c4(puVar3);
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c5ed90();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar7 = 0;
      func_0x000100dfa6ec(0);
      uVar8 = uVar7;
      func_0x000100f33384();
      puVar6 = puVar5;
      func_0x000107c5f9dc(puVar5,uVar7,PTR___sypN_11034f1a8 + 8,uVar8);
      func_0x000107c6142c(puVar5);
      func_0x000107c4de70(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar6);
    }
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
  }
  return;
}



/* Entry: 1027f0c14; end: 1027f0c5f;  */

void FUN_1027f0c14(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0(param_1,0,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1027f0c60; end: 1027f0c6f;  */

void FUN_1027f0c60(long param_1,long param_2)

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



/* Entry: 1027f0c70; end: 1027f0c7f; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f0c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec24b0));
  return;
}



/* Entry: 1027f0c80; end: 1027f0cb3; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f0c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec24b0);
  *(undefined8 *)(param_1 + _DAT_112ec24b0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1027f0cb4; end: 1027f0cd3; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f0cb4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec24b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027f0cd4; end: 1027f0ce7; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f0cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec24b8,param_3);
  return;
}



/* Entry: 1027f0ce8; end: 1027f0cf7; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f0ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec24c0));
  return;
}



/* Entry: 1027f0cf8; end: 1027f0d37; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin setActiveConversationIdObservable:] */

void FUN_1027f0cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1027f0d38(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027f0d38; end: 1027f0e77;  */

/* WARNING: Possible PIC construction at 0x0001027f0d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027f0e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027f0e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027f0e20) */
/* WARNING: Removing unreachable block (ram,0x0001027f0d70) */
/* WARNING: Removing unreachable block (ram,0x0001027f0e5c) */
/* WARNING: Removing unreachable block (ram,0x0001027f0d78) */
/* WARNING: Removing unreachable block (ram,0x0001027f0e3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f0d38(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec24c0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec24c0) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1027f0e78; end: 1027f0f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f0e78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ec2528);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    func_0x000100075034(FUN_1027f0f0c,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1027f0f0c; end: 1027f0f3b;  */

void FUN_1027f0f0c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 1027f0f3c; end: 1027f0f43; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin pluginType] */

undefined8 FUN_1027f0f3c(void)

{
  return 0;
}



/* Entry: 1027f0f44; end: 1027f0f5b; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001027f0f58) */

void FUN_1027f0f44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1027f0f5c; end: 1027f15cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027f0f5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec2518);
  func_0x000107c4ce08(lVar1,param_2,param_1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ab088;
  func_0x000107c610f8(PTR_PTR_1126ab088);
  func_0x000107c453e4();
  lVar9 = lVar1;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar9 != 0) {
    lVar3 = lVar9;
    func_0x000107c5a934();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar3 != 0) {
      lVar9 = lVar3;
      func_0x000107c5b818();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar9 != 0) {
        lVar3 = lVar9;
        func_0x000107c446f0();
        if ((int)lVar3 != 0) {
          lVar3 = lVar9;
          func_0x000107c3d458();
          func_0x000107c61180();
          if (lVar3 != 0) {
            func_0x0001000d224c(&puStack_90);
            puVar4 = puStack_90;
            func_0x000107c4e370();
            func_0x000107c61180();
            func_0x000107c615e8(puStack_90);
            if (puVar4 != (undefined *)0x0) {
              uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ec2528);
              puStack_80 = puVar4;
              func_0x000107c6157c(uVar14);
              func_0x000100075034(FUN_1027f5288,&puStack_90,PTR___sytN_11034f1b0 + 8);
              func_0x000107c61574(uVar14);
              if (((*(long *)(puVar4 + _DAT_1138152f0) == 0) ||
                  (*(char *)(*(long *)(puVar4 + _DAT_1138152f0) + _DAT_11308ef18) != '\x01')) ||
                 (lVar5 = *(long *)(unaff_x20 + _DAT_112ec24b0), lVar5 == 0)) {
                func_0x0001000285a8(0x112ec2580,&UNK_10dae0978);
                puVar13 = puVar4;
                func_0x000107c61174(puVar4);
                FUN_1027f18e8(puVar4,0xf);
                func_0x000107c61170(puVar13);
                ppuVar12 = &puStack_90;
                puStack_90 = puVar4;
                func_0x000100854cb0(ppuVar12);
                func_0x000107c61170(puVar4);
                func_0x0001004575f0();
                func_0x000107c61574(ppuVar12);
                puVar10 = puVar4;
                func_0x000107c5cb24(puVar4);
                func_0x000107c61180();
                func_0x000107c61170(puVar4);
                func_0x000107c52270(puVar2);
              }
              else {
                func_0x000107c61174();
                func_0x0001000d224c(&uStack_70);
                uVar14 = uStack_70;
                func_0x000107c614f0(uStack_70);
                puStack_90 = (undefined *)0xd000000000000027;
                uStack_88 = 0x800000010efbd1b0;
                puStack_80 = (undefined *)((ulong)puStack_80 & 0xffffffffffffff00);
                puVar13 = &UNK_1107383c8;
                (**(code **)(lStack_68 + 8))
                          (&uStack_71,&puStack_90,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar14,lStack_68
                          );
                func_0x000107c615e8(uStack_70);
                lVar6 = lVar1;
                func_0x000107c40674();
                func_0x000107c61180();
                lVar7 = lVar6;
                func_0x000107c5faec();
                func_0x000107c61170(lVar6);
                func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
                lVar6 = lVar5;
                func_0x0001000b637c(lVar5);
                puVar10 = &UNK_110550888;
                func_0x000107c613fc(&UNK_110550888,0x18,7);
                func_0x000107c61614(puVar10 + 0x10);
                puVar8 = &UNK_1105508d8;
                func_0x000107c613fc(&UNK_1105508d8,0x38,7);
                *(long *)(puVar8 + 0x10) = lVar7;
                *(undefined **)(puVar8 + 0x18) = puVar13;
                puVar8[0x20] = uStack_71;
                *(undefined **)(puVar8 + 0x28) = puVar4;
                *(undefined **)(puVar8 + 0x30) = puVar10;
                uVar14 = 0;
                FUN_1027f53cc(0,0x112ec2588,&PTR_PTR_1126ab090);
                func_0x000107c61174(puVar4);
                pcVar11 = FUN_1027f52cc;
                func_0x0001000bfde0(FUN_1027f52cc,puVar8,uVar14);
                func_0x000107c61574(lVar6);
                func_0x000107c61574(puVar8);
                func_0x0001004575f0();
                func_0x000107c61574(pcVar11);
                puVar10 = puVar8;
                func_0x000107c5cb24(puVar8);
                func_0x000107c61180();
                func_0x000107c61170(puVar8);
                func_0x000107c52270(puVar2);
                func_0x000107c61170(lVar5);
                puVar13 = puVar4;
              }
              func_0x000107c61170(puVar10);
              func_0x000107c615e8(lVar1);
              func_0x000107c61170(puVar13);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar9);
              return puVar2;
            }
            func_0x000107c61170(lVar9);
            lVar9 = lVar3;
          }
        }
        func_0x000107c61170(lVar9);
      }
    }
  }
  func_0x0001000d224c(&uStack_70);
  uVar14 = uStack_70;
  func_0x000107c614f0(uStack_70);
  puStack_90 = (undefined *)0xd000000000000027;
  uStack_88 = 0x800000010efbd1b0;
  puStack_80 = (undefined *)((ulong)puStack_80 & 0xffffffffffffff00);
  puVar4 = &UNK_1107383c8;
  (**(code **)(lStack_68 + 8))
            (&uStack_71,&puStack_90,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar14,lStack_68);
  func_0x000107c615e8(uStack_70);
  lVar9 = *(long *)(unaff_x20 + _DAT_112ec24b0);
  if (lVar9 == 0) {
    func_0x0001000285a8(0x112ec2580,&UNK_10dae0978);
    puVar4 = PTR_PTR_1126ab090;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar12 = &puStack_90;
    puStack_90 = puVar4;
    func_0x000100854cb0(ppuVar12);
    func_0x000107c61170(puVar4);
    func_0x0001004575f0();
    func_0x000107c61574(ppuVar12);
    puVar13 = puVar4;
    func_0x000107c5cb24(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c52270(puVar2);
  }
  else {
    func_0x000107c61174();
    lVar3 = lVar1;
    func_0x000107c40674();
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar3 = lVar9;
    func_0x0001000b637c(lVar9);
    puVar13 = &UNK_110550888;
    func_0x000107c613fc(&UNK_110550888,0x18,7);
    func_0x000107c61614(puVar13 + 0x10);
    puVar10 = &UNK_1105508b0;
    func_0x000107c613fc(&UNK_1105508b0,0x30,7);
    *(long *)(puVar10 + 0x10) = lVar5;
    *(undefined **)(puVar10 + 0x18) = puVar4;
    puVar10[0x20] = uStack_71;
    *(undefined **)(puVar10 + 0x28) = puVar13;
    uVar14 = 0;
    FUN_1027f53cc(0,0x112ec2588,&PTR_PTR_1126ab090);
    pcVar11 = FUN_1027f5278;
    func_0x0001000bfde0(FUN_1027f5278,puVar10,uVar14);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(puVar10);
    func_0x0001004575f0();
    func_0x000107c61574(pcVar11);
    puVar13 = puVar10;
    func_0x000107c5cb24(puVar10);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c52270(puVar2);
    func_0x000107c61170(lVar9);
  }
  func_0x000107c61170(puVar13);
  func_0x000107c615e8(lVar1);
  return puVar2;
}



/* Entry: 1027f15d0; end: 1027f1643; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1027f15d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1027f5098(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027f1644; end: 1027f18e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f1644(undefined8 *param_1,ulong *param_2,ulong param_3,ulong param_4,ulong param_5,
                  undefined *param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  
  uVar6 = *param_2;
  uVar1 = uVar6;
  uVar3 = param_3;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar5 = uVar1;
    func_0x000107c40674();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uVar2 = uVar5;
    func_0x000107c5faec();
    uVar1 = uVar3;
    func_0x000107c61170(uVar5);
    if (param_3 == uVar2 && param_4 == uVar3) {
      func_0x000107c6142c(uVar3);
    }
    else {
      func_0x000107c605b8(param_3,param_4,uVar2,uVar3,0);
      func_0x000107c6142c(uVar3);
      uVar1 = param_4;
      if ((param_3 & 1) == 0) goto LAB_1027f1818;
    }
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (uVar6 != 0) {
      uVar3 = uVar6;
      func_0x000107c406e0();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      if (uVar3 != 0) {
        uVar6 = uVar3;
        func_0x000107c3f334();
        func_0x000107c61180();
        if (uVar6 != 0) {
          if ((param_5 & 1) == 0) {
            uVar5 = uVar6;
            func_0x000107c3d458();
            func_0x000107c61180();
            if (uVar5 != 0) {
              uVar2 = *(ulong *)(uVar5 + _DAT_11308f140);
              uVar1 = ((ulong *)(uVar5 + _DAT_11308f140))[1];
              func_0x000107c61434(uVar1);
              func_0x000107c61170(uVar5);
              if (uVar1 != 0) goto LAB_1027f17c0;
            }
          }
          else {
            uVar5 = uVar6;
            func_0x000107c51f70();
            func_0x000107c61180();
            if (uVar5 != 0) {
              uVar2 = uVar5;
              func_0x000107c5faec();
              func_0x000107c61170(uVar5);
LAB_1027f17c0:
              uVar5 = *(ulong *)((long)(param_6 + _DAT_11308f140) + 8);
              if (uVar5 != 0) {
                uVar4 = *(ulong *)(param_6 + _DAT_11308f140);
                if ((uVar2 == uVar4) && (uVar5 == uVar1)) {
                  func_0x000107c6142c(uVar1);
                  func_0x000107c61170(uVar3);
                  func_0x000107c61170(uVar6);
                }
                else {
                  func_0x000107c605b8(uVar2,uVar1,uVar4,uVar5,0);
                  func_0x000107c6142c(uVar1);
                  func_0x000107c61170(uVar3);
                  func_0x000107c61170(uVar6);
                  if ((uVar2 & 1) == 0) goto LAB_1027f1818;
                }
                uVar7 = 0xf;
                goto LAB_1027f181c;
              }
              func_0x000107c6142c(uVar1);
              func_0x000107c61170(uVar3);
              uVar3 = uVar6;
              goto LAB_1027f1814;
            }
          }
          func_0x000107c61170(uVar6);
        }
LAB_1027f1814:
        func_0x000107c61170(uVar3);
      }
    }
  }
LAB_1027f1818:
  uVar7 = 0x1f;
LAB_1027f181c:
  func_0x000107c61428(param_7 + 0x10,auStack_78,0,0);
  param_7 = param_7 + 0x10;
  func_0x000107c61618();
  if (param_7 == 0) {
    param_6 = PTR_PTR_1126ab090;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    FUN_1027f18e8(param_6,uVar7);
    func_0x000107c61170(param_7);
  }
  *param_1 = param_6;
  return;
}



/* Entry: 1027f18e8; end: 1027f1a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027f18e8(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_1126ab090;
  uVar4 = param_2;
  func_0x000107c610f8(PTR_PTR_1126ab090);
  uVar3 = (uint)uVar4;
  func_0x000107c453e4();
  if (param_1 == 0) {
    return puVar1;
  }
  uVar5 = *(ulong *)(param_1 + _DAT_113815200);
  func_0x000107c61174();
  FUN_1027f1f2c();
  if ((uVar5 & 1) == 0) goto LAB_1027f1a58;
  uVar5 = param_1;
  FUN_1027f20ac();
  if ((uVar3 & 0xff) != 1) {
    uVar2 = param_1;
    if ((long)uVar5 < 6) {
      if (uVar5 == 1) {
        func_0x0001027f2284(param_1,param_2);
        func_0x000107c52784(puVar1);
      }
      else {
        if (uVar5 != 3) goto LAB_1027f1a2c;
        func_0x0001027f2360(param_1,param_2);
        func_0x000107c5a6bc(puVar1);
      }
    }
    else if (uVar5 == 6) {
      func_0x0001027f243c(param_1,param_2);
      func_0x000107c53ef0(puVar1);
    }
    else if (uVar5 == 10) {
      func_0x0001027f2874(param_1,param_2);
      func_0x000107c53580(puVar1);
    }
    else {
      if (uVar5 != 0x10) goto LAB_1027f1a2c;
      FUN_1027f2518(param_1,param_2);
      func_0x000107c55b5c(puVar1);
    }
    func_0x000107c61170(uVar2);
  }
LAB_1027f1a2c:
  uVar5 = param_1;
  FUN_1027f2bec();
  if ((uVar5 & 1) != 0) {
    uVar5 = param_1;
    FUN_1027f2d24(param_1);
    func_0x000107c542b8(puVar1);
    func_0x000107c61170(uVar5);
  }
LAB_1027f1a58:
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1027f1a78; end: 1027f1f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f1a78(undefined8 *param_1,undefined8 *param_2,undefined *param_3,undefined *param_4,
                  uint param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined auStack_f0 [8];
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  uint uStack_c4;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [16];
  undefined **ppuStack_90;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_c4 = param_5;
  func_0x000100b91d00();
  lVar11 = *(long *)(lVar2 + -8);
  lStack_d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puStack_e8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar2 = 0x112dbe418;
  puVar5 = &UNK_10d990420;
  lStack_e0 = lVar8;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_d0 = lVar8 - extraout_x12_00;
  puVar9 = (undefined *)*param_2;
  puStack_68 = (undefined *)0x0;
  puVar3 = puVar9;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x000107c40674();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar4;
    func_0x000107c5faec();
    puVar7 = puVar5;
    func_0x000107c61170(puVar4);
    if ((param_3 == puVar3) && (param_4 == puVar5)) {
      func_0x000107c6142c(puVar5);
      param_4 = puVar7;
    }
    else {
      func_0x000107c605b8(param_3,param_4,puVar3,puVar5,0);
      func_0x000107c6142c(puVar5);
      if (((ulong)param_3 & 1) == 0) goto LAB_1027f1e3c;
    }
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (puVar9 != (undefined *)0x0) {
      puVar5 = puVar9;
      func_0x000107c406e0();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      if (puVar5 != (undefined *)0x0) {
        puVar3 = puVar5;
        func_0x000107c3f334();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        if (puVar3 != (undefined *)0x0) {
          puVar5 = puVar3;
          func_0x000107c51f70();
          func_0x000107c61180();
          if (puVar5 == (undefined *)0x0) {
            puVar9 = (undefined *)0x0;
            param_4 = (undefined *)0x0;
          }
          else {
            puVar9 = puVar5;
            func_0x000107c5faec();
            func_0x000107c61170(puVar5);
          }
          if ((uStack_c4 & 1) == 0) {
            func_0x000107c6142c(param_4);
            puVar5 = puVar3;
            func_0x000107c3d458();
            func_0x000107c61180();
            func_0x000107c61170(puVar3);
            puStack_68 = puVar5;
          }
          else {
            func_0x000107c61428(param_6 + 0x10,auStack_c0,0,0);
            lVar2 = param_6 + 0x10;
            func_0x000107c61618();
            if (lVar2 == 0) {
              func_0x000107c61170(puVar3);
              func_0x000107c6142c(param_4);
              puStack_68 = (undefined *)0x0;
            }
            else {
              uVar10 = *(undefined8 *)(lVar2 + _DAT_112ec2510);
              func_0x000107c6157c(uVar10);
              func_0x000107c61170(lVar2);
              func_0x0001000d224c(&uStack_80);
              func_0x000107c61574(uVar10);
              uVar10 = uStack_80;
              func_0x000107c614f0(uStack_80);
              lVar1 = lStack_d0;
              (**(code **)(lStack_78 + 0x28))(lStack_d0,puVar9,param_4,uVar10,lStack_78);
              func_0x000107c615e8(uStack_80);
              func_0x000107c6142c(param_4);
              func_0x000101685588(lVar1,lVar8);
              lVar6 = lVar8;
              (**(code **)(lVar11 + 0x30))(lVar8,1,lStack_d8);
              lVar2 = lStack_e0;
              if ((int)lVar6 == 1) {
                FUN_1027f5414(lVar1,0x112dbe418,&UNK_10d990420);
                func_0x000107c61170(puVar3);
                puStack_68 = (undefined *)0x0;
              }
              else {
                func_0x0001027f5498(lVar8,lStack_e0,&SUB_100b91d00);
                puVar5 = puStack_e8;
                func_0x0001027f5454(lVar2,puStack_e8,&SUB_100b91d00);
                func_0x0001047c0984(0);
                func_0x000107c610f8();
                func_0x0001047b952c();
                func_0x000107c61170(puVar3);
                FUN_1027f5520(lVar2,&SUB_100b91d00);
                FUN_1027f5414(lVar1,0x112dbe418,&UNK_10d990420);
                puStack_68 = puVar5;
              }
            }
          }
        }
      }
    }
  }
LAB_1027f1e3c:
  func_0x000107c61428(param_6 + 0x10,&uStack_80,0,0);
  lVar2 = param_6 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar10 = *(undefined8 *)(lVar2 + _DAT_112ec2528);
    func_0x000107c6157c(uVar10);
    func_0x000107c61170(lVar2);
    ppuStack_90 = &puStack_68;
    func_0x000100075034(FUN_1027f52dc,auStack_a0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar10);
  }
  func_0x000107c61428(param_6 + 0x10,auStack_a0,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 == 0) {
    puVar5 = PTR_PTR_1126ab090;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    puVar5 = puStack_68;
    FUN_1027f18e8(puStack_68,0xf);
    func_0x000107c61170(param_6);
  }
  *param_1 = puVar5;
  func_0x000107c61170(puStack_68);
  return;
}



/* Entry: 1027f1f2c; end: 1027f20ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1027f1f2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_31;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 < 6) {
    if (param_1 == 1) {
      return 1;
    }
    if (param_1 == 3) {
      return 1;
    }
    if (param_1 == 5) {
      return 1;
    }
LAB_1027f1fdc:
    uStack_31 = 0;
  }
  else {
    if (param_1 < 0x10) {
      if (param_1 != 6) {
        if (param_1 == 10) {
          return 1;
        }
        goto LAB_1027f1fdc;
      }
      func_0x0001000d224c(&uStack_30,1);
      uVar1 = uStack_30;
      func_0x000107c614f0(uStack_30);
      uStack_40 = 0x800000010f0c1de0;
      uStack_48 = 0xd000000000000040;
    }
    else if (param_1 == 0x10) {
      func_0x0001000d224c(&uStack_30,1);
      uVar1 = uStack_30;
      func_0x000107c614f0(uStack_30);
      uStack_40 = 0x800000010f0c1d90;
      uStack_48 = 0xd000000000000047;
    }
    else {
      if (param_1 != 0x16) goto LAB_1027f1fdc;
      func_0x0001000d224c(&uStack_30,1);
      uVar1 = uStack_30;
      func_0x000107c614f0(uStack_30);
      uStack_40 = 0x800000010f0c1d40;
      uStack_48 = 0xd000000000000045;
    }
    uStack_38 = 0;
    (**(code **)(lStack_28 + 8))
              (&uStack_31,&uStack_48,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar1,lStack_28);
    func_0x000107c615e8(uStack_30);
  }
  return uStack_31;
}



/* Entry: 1027f20ac; end: 1027f2517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f20ac(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  byte bStack_31;
  
  if (*(long *)(param_1 + _DAT_113815200) == 0x16) {
    func_0x0001000d224c(&uStack_58);
    uVar3 = uStack_58;
    func_0x000107c614f0(uStack_58);
    uStack_48 = 0xd000000000000045;
    uStack_40 = 0x800000010efb4800;
    uStack_38 = 0;
    (**(code **)(lStack_50 + 8))
              (&bStack_31,&uStack_48,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar3,lStack_50);
    uVar6 = (ulong)bStack_31;
    func_0x000107c615e8(uStack_58);
    uVar5 = *(ulong *)(param_1 + _DAT_113815208);
    if (uVar5 == 0) {
      return;
    }
    uVar2 = uVar5 & 0xffffffffffffff8;
    if (uVar5 >> 0x3e == 0) {
      uVar4 = *(ulong *)(uVar2 + 0x10);
    }
    else {
      uVar4 = uVar5;
      if (-1 < (long)uVar5) {
        uVar4 = uVar2;
      }
      func_0x000107c60480();
    }
    if ((long)uVar4 <= (long)uVar6) {
      return;
    }
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (uVar6 < *(ulong *)(uVar2 + 0x10)) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027f2284);
      (*pcVar1)();
    }
  }
  else {
    if (*(long *)(param_1 + _DAT_113815200) != 5) {
      return;
    }
    uVar5 = *(ulong *)(param_1 + _DAT_113815208);
    if (uVar5 == 0) {
      return;
    }
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (uVar5 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      uVar2 = uVar5;
      if (-1 < (long)uVar5) {
        uVar2 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar2 == 0) {
      return;
    }
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar6 + 0x10) != 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027f2244);
      (*pcVar1)();
    }
    uVar6 = 0;
  }
  func_0x000100e471e4(uVar6,uVar5);
  func_0x000107c615e8();
  return;
}



/* Entry: 1027f2518; end: 1027f2beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027f2518(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar11 = *(ulong *)(param_1 + _DAT_113815208);
  if (uVar11 == 0) {
    return (undefined *)0x0;
  }
  if (uVar11 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar11 & 0xffffffffffffff8;
    if ((uVar11 & 0x8000000000000000) != 0) {
      uVar9 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar9 == 0) {
    return (undefined *)0x0;
  }
  if ((uVar11 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f2860);
      (*pcVar2)();
    }
    lVar3 = *(long *)(uVar11 + 0x20);
    func_0x000107c61174();
  }
  else {
    lVar3 = 0;
    func_0x000100e471e4(0,uVar11);
  }
  puVar4 = PTR_PTR_1126ab0c0;
  func_0x000107c610f8(PTR_PTR_1126ab0c0);
  func_0x000107c453e4();
  FUN_1027f30b0(param_1,param_2);
  func_0x000107c535e4(puVar4);
  func_0x000107c61170(param_1);
  if (uVar11 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar11 & 0xffffffffffffff8;
    if ((uVar11 & 0x8000000000000000) != 0) {
      uVar9 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    if ((uVar11 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f2874);
        (*pcVar2)();
      }
      lVar5 = *(long *)(uVar11 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar5 = 0;
      func_0x000100e471e4(0,uVar11);
    }
    lVar6 = lVar5;
    func_0x000107c3ec40();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      lVar12 = *(long *)(lVar6 + _DAT_113091000);
      lVar5 = lVar12;
      func_0x000107c61174();
      func_0x000107c61170(lVar6);
      if ((lVar12 != 0) && (*(long *)(lVar5 + _DAT_113090298) != 0)) {
        puVar1 = (undefined8 *)(*(long *)(lVar5 + _DAT_113090298) + _DAT_113090408);
        lVar5 = puVar1[1];
        if (lVar5 != 0) {
          uVar10 = *puVar1;
          func_0x000107c61434(lVar5);
          func_0x000107c5fadc(uVar10,lVar5);
          func_0x000107c6142c(lVar5);
          goto LAB_1027f26e8;
        }
      }
      uVar10 = 0;
      goto LAB_1027f26e8;
    }
  }
  uVar10 = 0;
  lVar12 = 0;
LAB_1027f26e8:
  func_0x000107c578c8(puVar4);
  func_0x000107c61170(uVar10);
  lVar5 = ((undefined8 *)(lVar3 + _DAT_11308f200))[1];
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar3 + _DAT_11308f200);
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar10,lVar5);
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c550a8(puVar4);
  func_0x000107c61170(uVar10);
  lVar5 = lVar3;
  func_0x000107c5cc0c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar11 = *(ulong *)(lVar5 + _DAT_113090610);
    uVar9 = ((ulong *)(lVar5 + _DAT_113090610))[1];
    func_0x000107c61434(uVar9);
    func_0x000107c61170(lVar5);
    if (uVar9 != 0) {
      uVar8 = uVar11 & 0xffffffffffff;
      if ((uVar9 & 0x2000000000000000) != 0) {
        uVar8 = uVar9 >> 0x38 & 0xf;
      }
      if (uVar8 == 0) {
        func_0x000107c6142c(uVar9);
      }
      else {
        uVar10 = 0;
        func_0x000103bfb8b0(0);
        uVar8 = uVar9;
        func_0x000103bfaab8(uVar11,uVar9,uVar10);
        func_0x000107c6142c(uVar9);
        func_0x000100e8b654();
        puVar7 = PTR___sSSN_11034da80;
        func_0x000107c601f8(PTR___sSSN_11034da80,uVar9);
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar8);
        func_0x000107c6142c(uVar9);
        func_0x000107c53ba0(puVar4);
        func_0x000107c61170(puVar7);
      }
    }
  }
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar12);
  return puVar4;
}



/* Entry: 1027f2bec; end: 1027f2d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f2bec(ulong param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_41;
  undefined8 uStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + _DAT_113815200) == 10) {
    return;
  }
  if (*(long *)(param_1 + _DAT_113815200) == 0x16) {
    func_0x0001000d224c(&uStack_40);
    uVar3 = uStack_40;
    func_0x000107c614f0(uStack_40);
    pcVar1 = "ads_ios_enable_sponsored_snap_indexed_story_in_chat_attachment_tiles";
    uStack_58 = 0xd000000000000044;
    uVar4 = uStack_40;
  }
  else {
    FUN_1027f2f5c();
    if (param_1 == 0) {
      return;
    }
    uVar2 = param_1;
    FUN_1027f3010();
    func_0x000107c61170(param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    func_0x0001000d224c(&uStack_40);
    uVar3 = uStack_40;
    func_0x000107c614f0(uStack_40);
    pcVar1 = "ads_ios_enable_sponsored_snap_dpa_in_chat_attachment_tiles";
    uStack_58 = 0xd00000000000003a;
    uVar4 = uStack_40;
  }
  uStack_50 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  uStack_48 = 0;
  (**(code **)(lStack_38 + 8))
            (&uStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar3,lStack_38);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 1027f2d24; end: 1027f2f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027f2d24(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  lVar2 = param_1;
  FUN_1027f2f5c();
  if (lVar2 == 0) {
    return (undefined *)0x0;
  }
  puVar3 = PTR_PTR_1126ab0d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = puVar3;
  FUN_1027f3010();
  if (((ulong)puVar4 & 1) == 0) goto LAB_1027f2dd4;
  if ((*(long *)(lVar2 + _DAT_11308f208) == 0) ||
     (lVar7 = *(long *)(*(long *)(lVar2 + _DAT_11308f208) + _DAT_113091068), lVar7 == 0)) {
LAB_1027f2dbc:
    uVar9 = 0;
  }
  else {
    puVar1 = (undefined8 *)(lVar7 + _DAT_113090620);
    uVar8 = puVar1[1];
    if (0xe < uVar8 >> 0x3c) goto LAB_1027f2dbc;
    uVar10 = *puVar1;
    func_0x000100de78a0(uVar10,uVar8);
    uVar9 = uVar10;
    func_0x000107c5ee20(uVar10,uVar8);
    func_0x0001000b44c0(uVar10,uVar8);
  }
  func_0x000107c536f4(puVar3);
  func_0x000107c61170(uVar9);
LAB_1027f2dd4:
  if ((*(long *)(lVar2 + _DAT_11308f208) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar2 + _DAT_11308f208) + _DAT_113091070), lVar7 != 0)) {
    puVar1 = (undefined8 *)(lVar7 + _DAT_113091038);
    uVar8 = puVar1[1];
    if (uVar8 >> 0x3c < 0xf) {
      uVar10 = *puVar1;
      func_0x000100de78a0(uVar10,uVar8);
      uVar9 = uVar10;
      func_0x000107c5ee20(uVar10,uVar8);
      func_0x000107c52e2c(puVar3);
      func_0x000107c61170(uVar9);
      func_0x0001000b44c0(uVar10,uVar8);
    }
  }
  puVar4 = &UNK_110550888;
  func_0x000107c613fc(&UNK_110550888,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_110550b08;
  func_0x000107c613fc(&UNK_110550b08,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = param_1;
  pcStack_60 = FUN_1027f5594;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1027f43c4;
  puStack_68 = &UNK_110550b20;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar4);
  func_0x000107c56d24(puVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar2);
  return puVar3;
}



/* Entry: 1027f2f5c; end: 1027f300f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f2f5c(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = (ulong)(*(int *)(unaff_x20 + _DAT_113815200) == 0x16);
  uVar4 = *(ulong *)(unaff_x20 + _DAT_113815208);
  if (uVar4 != 0) {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (uVar4 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      uVar2 = uVar4;
      if (-1 < (long)uVar4) {
        uVar2 = uVar5;
      }
      func_0x000107c60480();
    }
    if ((long)uVar3 < (long)uVar2) {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar5 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1027f3010);
          (*pcVar1)();
        }
        func_0x000107c61174(*(undefined8 *)(uVar4 + uVar3 * 8 + 0x20));
      }
      else {
        func_0x000100e471e4(uVar3,uVar4);
      }
    }
  }
  return;
}



/* Entry: 1027f3010; end: 1027f30af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027f3010(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  if ((*(long *)(unaff_x20 + _DAT_11308f208) == 0) ||
     (lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_11308f208) + _DAT_113091068), lVar3 == 0)) {
    uVar4 = 0;
    uVar2 = 0xf000000000000000;
  }
  else {
    puVar1 = (undefined8 *)(lVar3 + _DAT_113090620);
    uVar4 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000100de78a0(uVar4,uVar2);
    if (uVar2 >> 0x3c < 0xf) {
      func_0x0001000b44c0(uVar4,uVar2);
      func_0x0001000b44c0(0,0xf000000000000000);
      return 1;
    }
  }
  func_0x0001000b44c0(uVar4,uVar2);
  return 0;
}



/* Entry: 1027f30b0; end: 1027f31d7;  */

undefined * FUN_1027f30b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar1 = PTR_PTR_1126ab0a0;
  func_0x000107c610f8(PTR_PTR_1126ab0a0);
  func_0x000107c453e4();
  uVar2 = param_1;
  func_0x000107c3ec78(param_1);
  func_0x000107c61180();
  func_0x000107c52e48(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = &UNK_110550888;
  func_0x000107c613fc(&UNK_110550888,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110550900;
  func_0x000107c613fc(&UNK_110550900,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  pcStack_50 = FUN_1027f5320;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110550918;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar5);
  return puVar1;
}



/* Entry: 1027f31d8; end: 1027f324b;  */

void FUN_1027f31d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1027f324c(param_2,0,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1027f324c; end: 1027f3747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f324c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  char *pcVar11;
  undefined *puVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  if (*(int *)(param_1 + _DAT_113815200) == 0x16) {
    if ((int)param_3 == 0x1a) {
      uVar13 = 1;
    }
    else {
      func_0x0001000d224c(&uStack_b8);
      uVar14 = uStack_b8;
      uVar13 = uStack_b8;
      func_0x000107c614f0(uStack_b8);
      puStack_a8 = (undefined *)0xd000000000000045;
      uStack_a0 = 0x800000010efb4800;
      puStack_98 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff00);
      (**(code **)(lStack_b0 + 8))
                (&uStack_78,&puStack_a8,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar13,lStack_b0);
      uVar13 = uStack_78 & 0xff;
      func_0x000107c615e8(uVar14);
    }
  }
  else {
    uVar13 = 0;
  }
  uVar14 = *(ulong *)(param_1 + _DAT_113815208);
  if (uVar14 != 0) {
    uVar15 = uVar14 & 0xffffffffffffff8;
    if (uVar14 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar2 = uVar14;
      if (-1 < (long)uVar14) {
        uVar2 = uVar15;
      }
      func_0x000107c60480();
    }
    if ((long)uVar13 < (long)uVar2) {
      if ((uVar14 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar15 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1027f3748);
          (*pcVar1)();
        }
        uVar13 = *(ulong *)(uVar14 + uVar13 * 8 + 0x20);
        func_0x000107c61174(uVar13);
      }
      else {
        func_0x000100e471e4(uVar13,uVar14);
      }
      lVar3 = unaff_x20 + _DAT_112ec24b8;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x0001000d224c(&puStack_a8);
        puVar5 = puStack_a8;
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec24f8);
        func_0x000107c5c734(uVar4);
        func_0x000107c61180();
        func_0x0001000d224c(&uStack_b8);
        uVar14 = uVar13;
        func_0x000107c3e2ec(uVar13);
        func_0x000107c61180();
        func_0x000107c615e8(puVar5);
        func_0x000107c615e8(uVar4);
        func_0x000107c61170(uStack_b8);
        uStack_b8 = 0;
        uStack_78 = 0;
        puVar5 = &UNK_110550950;
        func_0x000107c613fc(&UNK_110550950,0x18,7);
        *(ulong **)(puVar5 + 0x10) = &uStack_b8;
        puVar6 = &UNK_110550978;
        func_0x000107c613fc(&UNK_110550978,0x20,7);
        *(code **)(puVar6 + 0x10) = FUN_1027f5348;
        *(undefined **)(puVar6 + 0x18) = puVar5;
        puVar12 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_88 = (code *)0x1027f5374;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_102062118;
        puStack_90 = &UNK_110550990;
        ppuVar7 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_80);
        puVar6 = &UNK_1105509c8;
        func_0x000107c613fc(&UNK_1105509c8,0x18,7);
        *(ulong **)(puVar6 + 0x10) = &uStack_78;
        puVar8 = &UNK_1105509f0;
        func_0x000107c613fc(&UNK_1105509f0,0x20,7);
        *(undefined8 *)(puVar8 + 0x10) = 0x1027f5394;
        *(undefined **)(puVar8 + 0x18) = puVar6;
        pcStack_88 = (code *)0x1027f55dc;
        puStack_a8 = puVar12;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100e27b38;
        puStack_90 = &UNK_110550a08;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c61574(puStack_80);
        func_0x000107c4c754(uVar14);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c60bd0(ppuVar7);
        if (uStack_b8 == 0) {
          func_0x000107c61170(uVar14);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(uVar13);
        }
        else {
          lVar16 = *(long *)(unaff_x20 + _DAT_112ec24d0);
          uVar15 = uStack_b8;
          func_0x000107c61174();
          lVar10 = lVar16;
          func_0x000107c5194c();
          func_0x000107c61180();
          if (lVar10 != 0) {
            func_0x000107c61170();
            func_0x000107c4ffe8(lVar16);
            func_0x000107c61180();
            func_0x000107c615e8();
          }
          pcVar11 = "onAdCTAMessageTap(adResponse:itemIndex:tapSource:)";
          func_0x0001000c10c0("onAdCTAMessageTap(adResponse:itemIndex:tapSource:)");
          func_0x000107c61180();
          puVar8 = &UNK_110550888;
          func_0x000107c613fc(&UNK_110550888,0x18,7);
          func_0x000107c61614(puVar8 + 0x10);
          puVar12 = &UNK_110550a40;
          func_0x000107c613fc(&UNK_110550a40,0x30,7);
          *(undefined **)(puVar12 + 0x10) = puVar8;
          *(ulong *)(puVar12 + 0x18) = uVar15;
          *(long *)(puVar12 + 0x20) = lVar3;
          *(undefined8 *)(puVar12 + 0x28) = param_3;
          pcStack_88 = FUN_1027f53c0;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_110550a58;
          ppuVar7 = &puStack_a8;
          puStack_80 = puVar12;
          func_0x000107c60bc4(ppuVar7);
          puVar8 = puStack_80;
          func_0x000107c61174(uVar15);
          func_0x000107c615f0(lVar3);
          func_0x000107c61574(puVar8);
          func_0x000107c4e590(pcVar11);
          func_0x000107c61170(uVar14);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(uVar13);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61170(uVar15);
          func_0x000107c615e8(pcVar11);
        }
        func_0x000107c614ac(uStack_78);
        uVar13 = uStack_b8;
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar5);
      }
      func_0x000107c61170(uVar13);
    }
  }
  return;
}



/* Entry: 1027f3748; end: 1027f3af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027f3748(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  char cStack_61;
  
  puVar2 = PTR_PTR_1126ab0a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c535e4();
  if (param_1 == 0) {
    func_0x000107c578c8(puVar2);
LAB_1027f380c:
    uVar3 = 0;
  }
  else {
    if (((undefined8 *)(param_1 + _DAT_113091390))[1] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_113091390);
      func_0x000107c5fadc(uVar3);
    }
    func_0x000107c578c8(puVar2);
    func_0x000107c61170(uVar3);
    if (((undefined8 *)(param_1 + _DAT_113091388))[1] == 0) goto LAB_1027f380c;
    uVar3 = *(undefined8 *)(param_1 + _DAT_113091388);
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c5a6c4(puVar2);
  func_0x000107c61170(uVar3);
  func_0x0001000d224c(&uStack_78);
  uVar3 = uStack_78;
  func_0x000107c614f0(uStack_78);
  puStack_a8 = (undefined *)0xd000000000000025;
  uStack_a0 = 0x800000010f0c1c80;
  pcStack_98 = (code *)((ulong)pcStack_98 & 0xffffffffffffff00);
  (**(code **)(lStack_70 + 8))
            (&cStack_61,&puStack_a8,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar3,lStack_70);
  func_0x000107c615e8(uStack_78);
  if (param_1 == 0) {
    return puVar2;
  }
  if (cStack_61 == '\0') {
    return puVar2;
  }
  uVar8 = *(ulong *)(param_1 + _DAT_1130913f8);
  if (uVar8 == 0) {
    return puVar2;
  }
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    if (uVar9 == 0) {
      return puVar2;
    }
  }
  else {
    uVar9 = uVar8;
    if (-1 < (long)uVar8) {
      uVar9 = uVar8 & 0xffffffffffffff8;
    }
    uVar10 = uVar9;
    func_0x000107c60480();
    if (uVar10 == 0) {
      return puVar2;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar9 == 0) goto LAB_1027f3a04;
  }
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001027f4a98(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027f3af8);
    (*pcVar1)();
  }
  uVar10 = 0;
  do {
    puVar6 = puStack_a8;
    if ((uVar8 & 0xc000000000000001) == 0) {
      uVar4 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar10;
      FUN_1027f6ce8(uVar10,uVar8);
    }
    puVar5 = PTR_PTR_1126ab0b0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5419c((double)*(long *)(uVar4 + _DAT_113091430));
    uVar3 = *(undefined8 *)(uVar4 + _DAT_113091438);
    func_0x000107c5fadc(uVar3,((undefined8 *)(uVar4 + _DAT_113091438))[1]);
    func_0x000107c5a26c(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    uVar4 = *(ulong *)(puVar6 + 0x10);
    puStack_a8 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar4) {
      func_0x0001027f4a98(1 < *(ulong *)(puVar6 + 0x18),uVar4 + 1,1);
    }
    uVar10 = uVar10 + 1;
    *(ulong *)(puStack_a8 + 0x10) = uVar4 + 1;
    *(undefined **)(puStack_a8 + uVar4 * 8 + 0x20) = puVar5;
    puVar6 = puStack_a8;
  } while (uVar9 != uVar10);
LAB_1027f3a04:
  uVar3 = 0;
  FUN_1027f53cc(0,0x112ec2590,&PTR_PTR_1126ab0b0);
  puVar5 = puVar6;
  func_0x000107c5fc48(puVar6,uVar3);
  func_0x000107c6142c(puVar6);
  func_0x000107c57348(puVar2);
  func_0x000107c61170(puVar5);
  puVar6 = &UNK_110550888;
  func_0x000107c613fc(&UNK_110550888,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,unaff_x20);
  pcStack_88 = FUN_1027f540c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1027f3f8c;
  puStack_90 = &UNK_110550a80;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_80);
  func_0x000107c56e00(puVar2);
  func_0x000107c60bd0(ppuVar7);
  return puVar2;
}



/* Entry: 1027f3af8; end: 1027f3b67;  */

void FUN_1027f3af8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1027f3b68(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1027f3b68; end: 1027f3f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f3b68(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  long extraout_x12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  char *apcStack_b0 [2];
  long alStack_a0 [2];
  undefined *apuStack_90 [2];
  undefined *puStack_80;
  undefined1 auStack_7f [7];
  undefined1 auStack_78 [8];
  code *apcStack_70 [2];
  
  lVar3 = 0;
  func_0x000100b915bc();
  alStack_a0[0] = *(long *)(lVar3 + -8);
  lVar18 = *(long *)(alStack_a0[0] + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)apcStack_b0 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  alStack_a0[1] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar13 - extraout_x8;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(lVar20,param_1,param_2);
  lVar4 = lVar20;
  (**(code **)(lVar16 + 0x30))(lVar20,1,lVar5);
  if ((int)lVar4 == 1) {
    FUN_1027f5414(lVar20,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar16 + 0x20))(lVar15,lVar20,lVar5);
    lVar4 = unaff_x20 + _DAT_112ec24b8;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar19 = *(long *)(unaff_x20 + _DAT_112ec24d0);
      lVar20 = lVar19;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar20 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar19);
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      (**(code **)(lVar16 + 0x10))(lVar13,lVar15,lVar5);
      puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar3 + 0x20));
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 10;
      puVar1[6] = 0x17;
      puVar1[8] = 0xd000000000000011;
      puVar1[9] = 0x800000010f0c1c10;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      *(undefined1 *)(puVar1 + 0xc) = 1;
      puVar1[0xd] = 0;
      *(undefined8 *)(lVar13 + *(int *)(lVar3 + 0x14)) = 0;
      puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar3 + 0x18));
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 1;
      puVar1[4] = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[5] = 0;
      *(undefined8 *)((long)puVar1 + 0x39) = 0;
      *(undefined8 *)((long)puVar1 + 0x31) = 0;
      *(undefined8 *)(lVar13 + *(int *)(lVar3 + 0x1c)) = 0;
      puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar3 + 0x24));
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar3 + 0x28));
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(lVar13 + *(int *)(lVar3 + 0x2c)) = 0;
      puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar3 + 0x30));
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(lVar13 + *(int *)(lVar3 + 0x34)) = 0;
      pcVar6 = "openPharmaDisclaimer(urlString:)";
      func_0x0001000c10c0();
      func_0x000107c61180();
      puVar7 = &UNK_110550888;
      apcStack_b0[1] = pcVar6;
      func_0x000107c613fc(&UNK_110550888,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      lVar3 = alStack_a0[1];
      func_0x0001027f5454(lVar13,alStack_a0[1],&SUB_100b915bc);
      uVar12 = (ulong)*(byte *)(alStack_a0[0] + 0x50);
      uVar17 = uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff);
      uVar21 = lVar18 + uVar17 + 7 & 0xfffffffffffffff8;
      puVar8 = &UNK_110550ab8;
      func_0x000107c613fc(&UNK_110550ab8,uVar21 + 8,uVar12 | 7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      func_0x0001027f5498(lVar3,puVar8 + uVar17,&SUB_100b915bc);
      *(long *)(puVar8 + uVar21) = lVar4;
      apcStack_70[0] = FUN_1027f54dc;
      apuStack_90[0] = PTR___NSConcreteStackBlock_11034bd00;
      apuStack_90[1] = (undefined *)0x42000000;
      puStack_80 = &UNK_1000f6b44;
      auStack_78 = (undefined1  [8])&UNK_110550ad0;
      ppuVar9 = apuStack_90;
      apcStack_70[1] = (code *)puVar8;
      func_0x000107c60bc4(ppuVar9);
      pcVar2 = apcStack_70[1];
      func_0x000107c615f0(lVar4);
      func_0x000107c61574(pcVar2);
      pcVar6 = apcStack_b0[1];
      func_0x000107c4e590(apcStack_b0[1]);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(pcVar6);
      FUN_1027f5520(lVar13,&SUB_100b915bc);
      (**(code **)(lVar16 + 8))(lVar15,lVar5);
      return;
    }
    (**(code **)(lVar16 + 8))(lVar15,lVar5);
  }
  plVar10 = (long *)(unaff_x20 + _DAT_112ec2520);
  func_0x0001000a8868(plVar10,plVar10[3]);
  uVar14 = *(undefined8 *)(*plVar10 + 0x10);
  uVar11 = 0x6c696166;
  func_0x000107c5fadc(0x6c696166,0xe400000000000000);
  func_0x000105f7a44c(uVar14,uVar11,1);
  func_0x000107c61170(uVar11);
  return;
}



/* Entry: 1027f3f8c; end: 1027f3fef;  */

void FUN_1027f3f8c(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = param_3;
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_3,uVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1027f3ff0; end: 1027f4163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f3ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112ec24d8);
    func_0x000107c614f0(uVar4);
    func_0x0001027f5454(param_2,puVar3,&SUB_100b915bc);
    func_0x000107c6159c(puVar3,lVar1,0);
    lVar1 = param_1;
    func_0x000107c61174();
    puVar2 = puVar3;
    func_0x00010418bbf4(puVar3,param_3,0xd000000000000015,0x800000010f0c1c60,param_1,0,0,uVar4);
    func_0x000107c61170(lVar1);
    FUN_1027f5520(puVar3,&SUB_100b91584);
    func_0x000107c61604(lVar1 + _DAT_112ec2538,puVar2);
    func_0x000107c42c1c(*(undefined8 *)(lVar1 + _DAT_112ec24d0));
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1027f4164; end: 1027f424b;  */

/* WARNING: Possible PIC construction at 0x0001027f4198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027f419c) */
/* WARNING: Removing unreachable block (ram,0x0001027f41b8) */
/* WARNING: Removing unreachable block (ram,0x0001027f4200) */
/* WARNING: Removing unreachable block (ram,0x0001027f420c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f4164(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112ec2538;
  func_0x000107c61618();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 1027f424c; end: 1027f42bb;  */

void FUN_1027f424c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1027f42bc(param_3,param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1027f42bc; end: 1027f43c3;  */

/* WARNING: Possible PIC construction at 0x0001027f4324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027f4370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027f43b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027f4374) */
/* WARNING: Removing unreachable block (ram,0x0001027f4328) */
/* WARNING: Removing unreachable block (ram,0x0001027f43bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f42bc(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c51c74();
  func_0x000107c61180();
  if (param_2 == 0) {
    return;
  }
  uVar2 = param_2;
  FUN_1027f2f5c();
  if (uVar2 != 0) {
    if (*(int *)(uVar2 + _DAT_11308f1e0) == 10) {
      uVar3 = uVar2;
      FUN_1027f3010();
      if ((uVar3 & 1) == 0) {
        func_0x000107c49820();
        if (SCARRY8(param_2,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1027f43c4);
          (*pcVar1)();
        }
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ed0();
      }
      goto code_r0x000107c61170;
    }
    func_0x000107c61170(uVar2);
  }
  FUN_1027f324c(param_1,0,0x1a);
  uVar2 = param_2;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1027f43c4; end: 1027f440f;  */

void FUN_1027f43c4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1027f4410; end: 1027f4537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f4410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar4,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112ec24d8);
    uVar1 = uVar5;
    func_0x000107c614f0(uVar5);
    func_0x000107c615f0(uVar5);
    func_0x000103c011c4(param_4);
    uVar2 = 0;
    func_0x0001041bb580(0);
    func_0x000107c610f8();
    func_0x0001041bb40c(param_4,puVar4,uVar2);
    lVar3 = param_1;
    func_0x000107c61174();
    func_0x00010418bb88(param_2,param_3,param_4,param_1,uVar1);
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(lVar3);
    func_0x000107c42c1c(*(undefined8 *)(lVar3 + _DAT_112ec24d0));
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1027f4538; end: 1027f45bb; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x0001027f4574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027f4590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027f4578) */
/* WARNING: Removing unreachable block (ram,0x0001027f4594) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f4538(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027f45bc; end: 1027f461b; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin init] */

void FUN_1027f45bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapMessagePlugin.SponsoredSnapAttachmentCTAMessagePlugin",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027f45e8);
  (*pcVar1)();
}



/* Entry: 1027f461c; end: 1027f4753; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f461c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec24b0));
  func_0x000100e3b598(param_1 + _DAT_112ec24b8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec24c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec24c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec24d0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec24d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec24e0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec24e8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec24f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec24f8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec2500));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2508));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec2510));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec2518));
  func_0x0001000834e4(param_1 + _DAT_112ec2520);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec2528));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2530));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ec2538);
  return;
}



/* Entry: 1027f4754; end: 1027f4773;  */

void FUN_1027f4754(void)

{
  func_0x000107c61168(&PTR_PTR_112864358);
  return;
}



/* Entry: 1027f4774; end: 1027f4777; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin adAttachmentHandlerViewWillFullyAppear:] */

void FUN_1027f4774(void)

{
  return;
}



/* Entry: 1027f4778; end: 1027f477b; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin adAttachmentHandlerViewDidFullyAppear:] */

void FUN_1027f4778(void)

{
  return;
}



/* Entry: 1027f477c; end: 1027f477f; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_1027f477c(void)

{
  return;
}



/* Entry: 1027f4780; end: 1027f4783; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_1027f4780(void)

{
  return;
}



/* Entry: 1027f4784; end: 1027f4833;  */

/* WARNING: Possible PIC construction at 0x0001027f47b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027f47b4) */
/* WARNING: Removing unreachable block (ram,0x0001027f47cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f4784(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112ec2538;
  func_0x000107c61618();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 1027f4834; end: 1027f4883; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin adAttachmentHandlerDidPresent:] */

/* WARNING: Possible PIC construction at 0x0001027f486c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027f4870) */

void FUN_1027f4834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1027f4784(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1027f4884; end: 1027f4923; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x0001027f48d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027f48f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027f4908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027f48f8) */
/* WARNING: Removing unreachable block (ram,0x0001027f48dc) */
/* WARNING: Removing unreachable block (ram,0x0001027f490c) */
/* WARNING: Removing unreachable block (ram,0x0001027f4910) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f4884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  FUN_1027f4164(param_3,1);
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027f4924; end: 1027f497b; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin shouldDisplayContextualHeaderForMessage:] */

uint FUN_1027f4924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_1027f51d8();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1027f497c; end: 1027f4a2b; -[_TtC26SponsoredSnapMessagePlugin39SponsoredSnapAttachmentCTAMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_1027f497c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107080f54();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c68c0;
    func_0x000107c610f8(PTR_PTR_1126c68c0);
    func_0x000107c48c9c();
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027f4a2c);
  (*pcVar1)();
}



/* Entry: 1027f4a2c; end: 1027f4ab3;  */

void FUN_1027f4a2c(void)

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
    FUN_1027f53cc(0,0x112ec2590,&PTR_PTR_1126ab0b0);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ec2598;
  plVar5 = (long *)&UNK_10dae0980;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1027f4ab4; end: 1027f4d17;  */

undefined * FUN_1027f4ab4(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027f4be8);
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
    puVar3 = param_1;
    FUN_1027f4a2c();
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
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1027f53cc(0,0x112ec2590,&PTR_PTR_1126ab0b0);
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



/* Entry: 1027f4d18; end: 1027f5097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027f4d18(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126ab098;
  func_0x000107c610f8(PTR_PTR_1126ab098);
  func_0x000107c453e4();
  func_0x000107c535e4();
  if (param_1 == 0) {
    func_0x000107c527a4(puVar2);
LAB_1027f4dec:
    uVar5 = 0;
    lVar3 = 1;
    func_0x0001027f4be8(0);
    if (lVar3 == 0) goto LAB_1027f4de4;
LAB_1027f4dfc:
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar3);
  }
  else {
    if (*(long *)(param_1 + _DAT_11308fac0) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + _DAT_11308fac0) + _DAT_11308fa20);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(uVar5);
    }
    func_0x000107c527a4(puVar2);
    func_0x000107c61170(puVar4);
    if (*(long *)(param_1 + _DAT_11308fac0) == 0) goto LAB_1027f4dec;
    lVar3 = 0;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + _DAT_11308fac0) + _DAT_11308fa30);
    func_0x0001027f4be8(uVar5);
    if (lVar3 != 0) goto LAB_1027f4dfc;
LAB_1027f4de4:
    uVar5 = 0;
  }
  func_0x000107c56bac(puVar2);
  func_0x000107c61170(uVar5);
  uVar5 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_11308fab8) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_11308fab8) + _DAT_113090408);
      lVar3 = puVar1[1];
      if (lVar3 != 0) {
        uVar5 = *puVar1;
        func_0x000107c61434(lVar3);
        func_0x000107c5fadc(uVar5,lVar3);
        func_0x000107c6142c(lVar3);
        goto LAB_1027f4e80;
      }
    }
    uVar5 = 0;
  }
LAB_1027f4e80:
  func_0x000107c52778(puVar2);
  func_0x000107c61170(uVar5);
  return puVar2;
}



/* Entry: 1027f5098; end: 1027f51d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f5098(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *apuStack_90 [3];
  undefined8 uStack_78;
  undefined8 auStack_70 [3];
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126ab078;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ec2508) + _DAT_112fbabe0);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c53548(puVar1);
  func_0x000107c615e8(uVar2);
  uVar2 = 0x112ec2568;
  uVar3 = 0;
  FUN_1027f53cc(0,0x112ec2568,&PTR_PTR_1126ab080);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  FUN_1027f0f5c();
  uVar3 = 0;
  FUN_1027f53cc(0,0x112ec2570,&PTR_PTR_1126ab088);
  uVar5 = 0;
  auStack_70[0] = param_1;
  uStack_58 = uVar3;
  FUN_1027f53cc(0,0x112ec2578,&PTR_PTR_1126ab078);
  apuStack_90[0] = puVar1;
  uStack_78 = uVar5;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar4,uVar2,auStack_70,apuStack_90);
  return;
}



/* Entry: 1027f51d8; end: 1027f5277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1027f51d8(void)

{
  long lVar1;
  undefined1 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ec2528);
  func_0x000107c6157c(uVar3);
  func_0x0001000c74f0(&lStack_38);
  func_0x000107c61574(uVar3);
  uVar2 = 0;
  if (lStack_38 != 0) {
    lVar4 = *(long *)(lStack_38 + _DAT_1138152f0);
    lVar1 = lVar4;
    func_0x000107c61174();
    func_0x000107c61170(lStack_38);
    if (lVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)(lVar1 + _DAT_11308ef18);
      func_0x000107c61170(lVar1);
    }
  }
  return uVar2;
}



/* Entry: 1027f5278; end: 1027f5287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f5278(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined *puVar14;
  undefined auStack_f0 [8];
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  uint uStack_c4;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [16];
  undefined **ppuStack_90;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_68;
  
  puVar4 = *(undefined **)(unaff_x20 + 0x10);
  puVar14 = *(undefined **)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uStack_c4 = (uint)*(byte *)(unaff_x20 + 0x20);
  lVar2 = 0;
  func_0x000100b91d00();
  lVar13 = *(long *)(lVar2 + -8);
  lStack_d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puStack_e8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar2 = 0x112dbe418;
  puVar5 = &UNK_10d990420;
  lStack_e0 = lVar9;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_d0 = lVar9 - extraout_x12_00;
  puVar10 = (undefined *)*param_2;
  puStack_68 = (undefined *)0x0;
  puVar11 = puVar10;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (puVar11 != (undefined *)0x0) {
    puVar3 = puVar11;
    func_0x000107c40674();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar11 = puVar3;
    func_0x000107c5faec();
    puVar7 = puVar5;
    func_0x000107c61170(puVar3);
    if ((puVar4 == puVar11) && (puVar14 == puVar5)) {
      func_0x000107c6142c(puVar5);
      puVar14 = puVar7;
    }
    else {
      func_0x000107c605b8(puVar4,puVar14,puVar11,puVar5,0);
      func_0x000107c6142c(puVar5);
      if (((ulong)puVar4 & 1) == 0) goto LAB_1027f1e3c;
    }
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (puVar10 != (undefined *)0x0) {
      puVar5 = puVar10;
      func_0x000107c406e0();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      if (puVar5 != (undefined *)0x0) {
        puVar4 = puVar5;
        func_0x000107c3f334();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        if (puVar4 != (undefined *)0x0) {
          puVar5 = puVar4;
          func_0x000107c51f70();
          func_0x000107c61180();
          if (puVar5 == (undefined *)0x0) {
            puVar11 = (undefined *)0x0;
            puVar14 = (undefined *)0x0;
          }
          else {
            puVar11 = puVar5;
            func_0x000107c5faec();
            func_0x000107c61170(puVar5);
          }
          if ((uStack_c4 & 1) == 0) {
            func_0x000107c6142c(puVar14);
            puVar5 = puVar4;
            func_0x000107c3d458();
            func_0x000107c61180();
            func_0x000107c61170(puVar4);
            puStack_68 = puVar5;
          }
          else {
            func_0x000107c61428(lVar8 + 0x10,auStack_c0,0,0);
            lVar2 = lVar8 + 0x10;
            func_0x000107c61618();
            if (lVar2 == 0) {
              func_0x000107c61170(puVar4);
              func_0x000107c6142c(puVar14);
              puStack_68 = (undefined *)0x0;
            }
            else {
              uVar12 = *(undefined8 *)(lVar2 + _DAT_112ec2510);
              func_0x000107c6157c(uVar12);
              func_0x000107c61170(lVar2);
              func_0x0001000d224c(&uStack_80);
              func_0x000107c61574(uVar12);
              uVar12 = uStack_80;
              func_0x000107c614f0(uStack_80);
              lVar1 = lStack_d0;
              (**(code **)(lStack_78 + 0x28))(lStack_d0,puVar11,puVar14,uVar12,lStack_78);
              func_0x000107c615e8(uStack_80);
              func_0x000107c6142c(puVar14);
              func_0x000101685588(lVar1,lVar9);
              lVar6 = lVar9;
              (**(code **)(lVar13 + 0x30))(lVar9,1,lStack_d8);
              lVar2 = lStack_e0;
              if ((int)lVar6 == 1) {
                FUN_1027f5414(lVar1,0x112dbe418,&UNK_10d990420);
                func_0x000107c61170(puVar4);
                puStack_68 = (undefined *)0x0;
              }
              else {
                func_0x0001027f5498(lVar9,lStack_e0,&SUB_100b91d00);
                puVar5 = puStack_e8;
                func_0x0001027f5454(lVar2,puStack_e8,&SUB_100b91d00);
                func_0x0001047c0984(0);
                func_0x000107c610f8();
                func_0x0001047b952c();
                func_0x000107c61170(puVar4);
                FUN_1027f5520(lVar2,&SUB_100b91d00);
                FUN_1027f5414(lVar1,0x112dbe418,&UNK_10d990420);
                puStack_68 = puVar5;
              }
            }
          }
        }
      }
    }
  }
LAB_1027f1e3c:
  func_0x000107c61428(lVar8 + 0x10,&uStack_80,0,0);
  lVar2 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar12 = *(undefined8 *)(lVar2 + _DAT_112ec2528);
    func_0x000107c6157c(uVar12);
    func_0x000107c61170(lVar2);
    ppuStack_90 = &puStack_68;
    func_0x000100075034(FUN_1027f52dc,auStack_a0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar12);
  }
  func_0x000107c61428(lVar8 + 0x10,auStack_a0,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    puVar5 = PTR_PTR_1126ab090;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    puVar5 = puStack_68;
    FUN_1027f18e8(puStack_68,0xf);
    func_0x000107c61170(lVar8);
  }
  *param_1 = puVar5;
  func_0x000107c61170(puStack_68);
  return;
}



/* Entry: 1027f5288; end: 1027f52cb;  */

void FUN_1027f5288(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 1027f52cc; end: 1027f52db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f52cc(long *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [24];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  bVar1 = *(byte *)(unaff_x20 + 0x20);
  puVar7 = *(undefined **)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  uVar10 = *param_2;
  uVar2 = uVar10;
  uVar9 = uVar4;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar8 = uVar2;
    func_0x000107c40674();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar3 = uVar8;
    func_0x000107c5faec();
    uVar2 = uVar9;
    func_0x000107c61170(uVar8);
    if (uVar4 == uVar3 && uVar5 == uVar9) {
      func_0x000107c6142c(uVar9);
    }
    else {
      func_0x000107c605b8(uVar4,uVar5,uVar3,uVar9,0);
      func_0x000107c6142c(uVar9);
      uVar2 = uVar5;
      if ((uVar4 & 1) == 0) goto LAB_1027f1818;
    }
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (uVar10 != 0) {
      uVar4 = uVar10;
      func_0x000107c406e0();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c3f334();
        func_0x000107c61180();
        if (uVar5 != 0) {
          if ((bVar1 & 1) == 0) {
            uVar9 = uVar5;
            func_0x000107c3d458();
            func_0x000107c61180();
            if (uVar9 != 0) {
              uVar10 = *(ulong *)(uVar9 + _DAT_11308f140);
              uVar2 = ((ulong *)(uVar9 + _DAT_11308f140))[1];
              func_0x000107c61434(uVar2);
              func_0x000107c61170(uVar9);
              if (uVar2 != 0) goto LAB_1027f17c0;
            }
          }
          else {
            uVar9 = uVar5;
            func_0x000107c51f70();
            func_0x000107c61180();
            if (uVar9 != 0) {
              uVar10 = uVar9;
              func_0x000107c5faec();
              func_0x000107c61170(uVar9);
LAB_1027f17c0:
              uVar9 = *(ulong *)((long)(puVar7 + _DAT_11308f140) + 8);
              if (uVar9 != 0) {
                uVar8 = *(ulong *)(puVar7 + _DAT_11308f140);
                if ((uVar10 == uVar8) && (uVar9 == uVar2)) {
                  func_0x000107c6142c(uVar2);
                  func_0x000107c61170(uVar4);
                  func_0x000107c61170(uVar5);
                }
                else {
                  func_0x000107c605b8(uVar10,uVar2,uVar8,uVar9,0);
                  func_0x000107c6142c(uVar2);
                  func_0x000107c61170(uVar4);
                  func_0x000107c61170(uVar5);
                  if ((uVar10 & 1) == 0) goto LAB_1027f1818;
                }
                uVar11 = 0xf;
                goto LAB_1027f181c;
              }
              func_0x000107c6142c(uVar2);
              func_0x000107c61170(uVar4);
              uVar4 = uVar5;
              goto LAB_1027f1814;
            }
          }
          func_0x000107c61170(uVar5);
        }
LAB_1027f1814:
        func_0x000107c61170(uVar4);
      }
    }
  }
LAB_1027f1818:
  uVar11 = 0x1f;
LAB_1027f181c:
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    puVar7 = PTR_PTR_1126ab090;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    FUN_1027f18e8(puVar7,uVar11);
    func_0x000107c61170(lVar6);
  }
  *param_1 = (long)puVar7;
  return;
}



/* Entry: 1027f52dc; end: 1027f531f;  */

void FUN_1027f52dc(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = *puVar1;
  func_0x000107c61174();
  return;
}



/* Entry: 1027f5320; end: 1027f5347;  */

void FUN_1027f5320(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1027f324c(uVar1,0,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1027f5348; end: 1027f53bf;  */

void FUN_1027f5348(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1027f53c0; end: 1027f53cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f53c0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar8 = auStack_68;
  func_0x000107c61428(lVar2 + 0x10,puVar8,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar9 = *(undefined8 *)(lVar2 + _DAT_112ec24d8);
    uVar3 = uVar9;
    func_0x000107c614f0(uVar9);
    func_0x000107c615f0(uVar9);
    func_0x000103c011c4(uVar4);
    uVar5 = 0;
    func_0x0001041bb580(0);
    func_0x000107c610f8();
    func_0x0001041bb40c(uVar4,puVar8,uVar5);
    lVar6 = lVar2;
    func_0x000107c61174();
    func_0x00010418bb88(uVar7,uVar1,uVar4,lVar2,uVar3);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c42c1c(*(undefined8 *)(lVar6 + _DAT_112ec24d0));
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 1027f53cc; end: 1027f540b;  */

void FUN_1027f53cc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1027f540c; end: 1027f5413;  */

void FUN_1027f540c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1027f3b68(param_1,param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1027f5414; end: 1027f54db;  */

undefined8 FUN_1027f5414(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1027f54dc; end: 1027f551f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f54dc(void)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  long unaff_x20;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  func_0x000100b915bc();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar5 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar5 + 7 & 0xffffffffffffff8));
  lVar2 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + _DAT_112ec24d8);
    func_0x000107c614f0(uVar7);
    func_0x0001027f5454(unaff_x20 + uVar5,puVar6,&SUB_100b915bc);
    func_0x000107c6159c(puVar6,lVar2,0);
    lVar2 = lVar3;
    func_0x000107c61174();
    puVar1 = puVar6;
    func_0x00010418bbf4(puVar6,uVar4,0xd000000000000015,0x800000010f0c1c60,lVar3,0,0,uVar7);
    func_0x000107c61170(lVar2);
    FUN_1027f5520(puVar6,&SUB_100b91584);
    func_0x000107c61604(lVar2 + _DAT_112ec2538,puVar1);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112ec24d0));
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1027f5520; end: 1027f5593;  */

undefined8 FUN_1027f5520(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1027f5594; end: 1027f55df;  */

void FUN_1027f5594(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1027f42bc(uVar1,param_1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1027f55e0; end: 1027f5c0b;  */

void FUN_1027f55e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110550b80;
  func_0x000107c613fc(&UNK_110550b80,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_9;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_1027f5c0c,puVar1);
  return;
}



/* Entry: 1027f5c0c; end: 1027f5c3f;  */

void FUN_1027f5c0c(void)

{
  long unaff_x20;
  
  func_0x0001027f56f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1027f5c40; end: 1027f5c4f;  */

undefined1  [16] FUN_1027f5c40(void)

{
  return ZEXT816(0x110550ba8);
}



/* Entry: 1027f5c50; end: 1027f5c93;  */

long FUN_1027f5c50(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1027f5c94; end: 1027f5cd7;  */

void FUN_1027f5c94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027f5cd8; end: 1027f5cf7; -[_TtC26SponsoredSnapMessagePlugin26SponsoredSnapMessagePlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f5cd8(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec2648);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027f5cf8; end: 1027f5d0b; -[_TtC26SponsoredSnapMessagePlugin26SponsoredSnapMessagePlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f5cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec2648,param_3);
  return;
}



/* Entry: 1027f5d0c; end: 1027f5d2b; -[_TtC26SponsoredSnapMessagePlugin26SponsoredSnapMessagePlugin operaPresenterDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f5d0c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec2650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027f5d2c; end: 1027f5d3f; -[_TtC26SponsoredSnapMessagePlugin26SponsoredSnapMessagePlugin setOperaPresenterDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f5d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec2650,param_3);
  return;
}



/* Entry: 1027f5d40; end: 1027f5d5f; -[_TtC26SponsoredSnapMessagePlugin26SponsoredSnapMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027f5d40(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec2658);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


