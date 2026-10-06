/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1017041a8; end: 101704203; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017041a8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dc34e8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc34e0));
  return;
}



/* Entry: 101704204; end: 10170421f;  */

void FUN_101704204(long param_1,long param_2)

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



/* Entry: 101704220; end: 101704297;  */

void FUN_101704220(void)

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
    func_0x000102d86f34();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dc3530;
  plVar5 = (long *)&UNK_10d980b78;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101704298; end: 1017043bb;  */

undefined * FUN_101704298(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1017043bc);
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
    FUN_101704220();
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
    func_0x000102d86f34(0);
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



/* Entry: 1017043bc; end: 10170457f;  */

ulong FUN_1017043bc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1017044a0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1017044a4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b8528;
    func_0x000107c61168(PTR_PTR_1126b8528);
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
    puVar4 = PTR_PTR_1126b8528;
    func_0x000107c61168(PTR_PTR_1126b8528);
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
  FUN_10170460c(0,0x112dc3528,&PTR_PTR_1126b8528);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101704580);
  (*pcVar2)();
}



/* Entry: 101704580; end: 1017045cb;  */

void FUN_101704580(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001053d69c8(param_1,uVar1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1017045cc; end: 10170460b;  */

void FUN_1017045cc(void)

{
  func_0x000107c61168(&PTR_PTR_1127e83a8);
  return;
}



/* Entry: 10170460c; end: 10170464b;  */

void FUN_10170460c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10170464c; end: 1017046a3;  */

void FUN_10170464c(long param_1,long param_2)

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



/* Entry: 1017046a4; end: 10170474f;  */

void FUN_1017046a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x98) + 0x10);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101704750;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar2 = 0x112dc35d8;
  func_0x0001000285a8(0x112dc35d8,&UNK_10d980bd8);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101704a40;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1103fcf80;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c4401c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101704750; end: 10170478f;  */

void FUN_101704750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101704790,0,0);
  return;
}



/* Entry: 101704790; end: 101704a3f;  */

void FUN_101704790(void)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long unaff_x22;
  long lVar15;
  undefined *puStack_60;
  
  uVar12 = *(ulong *)(unaff_x22 + 0x90);
  uVar11 = uVar12 & 0xffffffffffffff8;
  if (uVar12 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar11 + 0x10);
    puVar9 = PTR___ss11AnyHashableVSHsWP_11034e450;
  }
  else {
    uVar14 = uVar11;
    if (0x7fffffffffffffff < uVar12) {
      uVar14 = uVar12;
    }
    func_0x000107c60480();
    puVar9 = PTR___ss11AnyHashableVSHsWP_11034e450;
  }
  PTR___ss11AnyHashableVSHsWP_11034e450 = puVar9;
  puStack_60 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        if ((uVar12 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar11 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10170499c);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(uVar12 + uVar7 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar7;
          FUN_101704afc(uVar7,uVar12);
        }
        uVar2 = uVar7 + 1;
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101704998);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000107c50300();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c40414();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        uVar5 = uVar6;
        func_0x000107c5d9a4();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        uVar6 = uVar5;
        puVar10 = PTR___ss11AnyHashableVN_11034e448;
        func_0x000107c5f9e8(uVar5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,puVar9)
        ;
        func_0x000107c61170(uVar5);
        uVar5 = uVar6;
        FUN_101704cc0();
        func_0x000107c6142c(uVar6);
        if ((uVar5 & 1) != 0) break;
        func_0x000107c61170(uVar4);
        uVar7 = uVar7 + 1;
        if (uVar2 == uVar14) goto LAB_1017049c0;
      }
      uVar7 = uVar4;
      func_0x000107c50300();
      func_0x000107c61180();
      uVar5 = uVar7;
      func_0x000107c44fdc();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      uVar7 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      puVar8 = puStack_60;
      func_0x000107c61558();
      if (((ulong)puVar8 & 1) == 0) {
        plVar1 = (long *)(puStack_60 + 0x10);
        puStack_60 = (undefined *)0x0;
        func_0x0001000d182c(0,*plVar1 + 1,1);
      }
      uVar4 = *(ulong *)(puStack_60 + 0x10);
      if (*(ulong *)(puStack_60 + 0x18) >> 1 <= uVar4) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_60 + 0x18));
        func_0x0001000d182c(puVar8,uVar4 + 1,1,puStack_60);
        puStack_60 = puVar8;
      }
      *(ulong *)(puStack_60 + 0x10) = uVar4 + 1;
      *(ulong *)(puStack_60 + uVar4 * 0x10 + 0x20) = uVar7;
      *(undefined **)(puStack_60 + uVar4 * 0x10 + 0x28) = puVar10;
      uVar7 = uVar2;
    } while (uVar2 != uVar14);
  }
LAB_1017049c0:
  lVar15 = *(long *)(puStack_60 + 0x10);
  func_0x000107c6142c(uVar12);
  if (lVar15 == 0) {
    func_0x000107c6142c(puStack_60);
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    puVar9 = puStack_60;
    func_0x000107c5fc48(puStack_60,PTR___sSSN_11034da80);
    func_0x000107c6142c(puStack_60);
    func_0x000107c4fefc(uVar13);
    func_0x000107c61170(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x000101704a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101704a40; end: 101704a9f;  */

void FUN_101704a40(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  uVar2 = 0;
  func_0x000101704e5c(0,0x112dc35e0,&PTR__OBJC_CLASS___UNNotification_1126a7a60);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101704aa0; end: 101704ae3;  */

void FUN_101704aa0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101704ae4; end: 101704afb;  */

long FUN_101704ae4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101704afc; end: 101704cbf;  */

ulong FUN_101704afc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101704be0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101704be4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___UNNotification_1126a7a60;
    func_0x000107c61168(PTR__OBJC_CLASS___UNNotification_1126a7a60);
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
    puVar4 = PTR__OBJC_CLASS___UNNotification_1126a7a60;
    func_0x000107c61168(PTR__OBJC_CLASS___UNNotification_1126a7a60);
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
  func_0x000101704e5c(0,0x112dc35e0,&PTR__OBJC_CLASS___UNNotification_1126a7a60);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101704cc0);
  (*pcVar2)();
}



/* Entry: 101704cc0; end: 101704ed7;  */

undefined8 FUN_101704cc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined8 auStack_68 [3];
  long lStack_50;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = 0;
  uVar5 = 0;
  puVar1 = param_1;
  func_0x000104852820();
  uStack_40 = *puVar1;
  puVar1 = (undefined8 *)puVar1[1];
  puStack_38 = puVar1;
  func_0x000107c61438(puVar1,2);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_68,&uStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_1[2] == 0) {
LAB_101704d4c:
    puStack_38 = (undefined8 *)0x0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    func_0x000107c61434(param_1);
    puVar2 = auStack_68;
    func_0x000100df95d0(puVar2);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(param_1);
      goto LAB_101704d4c;
    }
    func_0x0001000bb420(param_1[7] + (long)puVar2 * 0x20,&uStack_40);
    func_0x000107c6142c(puVar1);
    puVar1 = param_1;
  }
  func_0x000107c6142c(puVar1);
  func_0x0001007bbff0(auStack_68);
  func_0x000100672b50(&uStack_40,auStack_68);
  puVar6 = PTR___sypN_11034f1a8;
  if (lStack_50 == 0) {
    func_0x00010006e7f4(auStack_68);
LAB_101704dc0:
    func_0x000100672b50(&uStack_40,auStack_68);
    if (lStack_50 == 0) {
      func_0x00010006e7f4(&uStack_40);
      puVar1 = auStack_68;
    }
    else {
      uVar3 = 0;
      func_0x000101704e5c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c6147c(&uStack_70,auStack_68,puVar6 + 8,uVar3,6);
      if ((uVar5 & 1) != 0) goto LAB_101704e08;
      puVar1 = &uStack_40;
    }
    func_0x00010006e7f4(puVar1);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    func_0x000101704e5c(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c6147c(&uStack_70,auStack_68,puVar6 + 8,uVar3,6);
    if ((uVar4 & 1) == 0) goto LAB_101704dc0;
LAB_101704e08:
    uVar3 = uStack_70;
    func_0x000107c3ebcc(uStack_70);
    func_0x000107c61170(uStack_70);
    func_0x00010006e7f4(&uStack_40);
  }
  return uVar3;
}



/* Entry: 101704ed8; end: 101704eeb;  */

void FUN_101704ed8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101704eec,0,0);
  return;
}



/* Entry: 101704eec; end: 101704f6f;  */

void FUN_101704eec(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x000107c61168();
  func_0x000107c40f90();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x28) = puVar1;
  lVar2 = 0;
  func_0x000101704ac4();
  func_0x000107c61534();
  *(long *)(unaff_x22 + 0x30) = lVar2;
  *(undefined **)(lVar2 + 0x10) = puVar1;
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101704f70;
  plVar3[0x13] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017046a4,0,0);
  return;
}



/* Entry: 101704f70; end: 101704fb7;  */

void FUN_101704f70(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x28);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x38));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101704fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101704fb8; end: 101704fff;  */

void FUN_101704fb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101705000; end: 10170506b;  */

undefined8 FUN_101705000(undefined8 param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  func_0x000107c613fc();
  func_0x000100083b20(&uStack_38);
  func_0x000107c4fa90(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61574(param_1);
  return unaff_x20;
}



/* Entry: 10170506c; end: 1017050b3;  */

void FUN_10170506c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1017050b4; end: 10170515b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017050b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112dc37a0;
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112dc37a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dc37b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dc37b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dc37c0) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10170515c; end: 10170518f;  */

void FUN_10170515c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101705190; end: 10170519f;  */

undefined1  [16] FUN_101705190(void)

{
  return ZEXT816(0x1103fd1e0);
}



/* Entry: 1017051a0; end: 1017051f7; -[_TtC41SCAppThemeBootstrapServicesImplementation25SCAppThemeBootstrapEngine .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017051a0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dc37b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dc37b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dc37c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc37a0));
  return;
}



/* Entry: 1017051f8; end: 10170521b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017051f8(void)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined *puStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000100083b20(&puStack_68);
  puVar4 = puStack_68;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(puStack_68);
  puVar5 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = puVar5;
    func_0x000107c3dd64();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      puVar6 = PTR_PTR_1126b8598;
      func_0x000107c61168();
      func_0x000107c5bcb0();
      func_0x000107c61180();
      puVar10 = puVar5;
      if (puVar6 != (undefined *)0x0) {
        lVar7 = 0x6d6574737973;
        func_0x000107c5fadc(0x6d6574737973,0xe600000000000000);
        lVar8 = lVar7;
        func_0x00010099c714();
        uVar11 = 0x6e776f6e6b6e75;
        if (lVar8 == 2) {
          uVar11 = 0x746867696c;
        }
        uVar13 = 0xe700000000000000;
        if (lVar8 == 2) {
          uVar13 = 0xe500000000000000;
        }
        uVar1 = 0x6b726164;
        if (lVar8 != 3) {
          uVar1 = uVar11;
        }
        uVar11 = 0xe400000000000000;
        if (lVar8 != 3) {
          uVar11 = uVar13;
        }
        uVar13 = 0xeb00000000646574;
        uVar9 = 0x726f707075736e75;
        if (lVar8 != 1) {
          uVar13 = uVar11;
          uVar9 = uVar1;
        }
        func_0x000107c5fadc(uVar9,uVar13);
        func_0x000107c6142c(uVar13);
        puVar10 = puVar6;
        func_0x000107c5e508(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(uVar9);
        uVar11 = 0x707061;
        func_0x000107c5fadc(0x707061,0xe300000000000000);
        lVar7 = 0x6e776f6e6b6e75;
        if (lVar2 == 1) {
          lVar7 = 0x746867696c;
        }
        uVar13 = 0xe700000000000000;
        if (lVar2 == 1) {
          uVar13 = 0xe500000000000000;
        }
        lVar8 = 0x6b726164;
        if (lVar2 != 2) {
          lVar8 = lVar7;
        }
        uVar1 = 0xe400000000000000;
        if (lVar2 != 2) {
          uVar1 = uVar13;
        }
        lVar7 = 0x6d6574737973;
        if (lVar2 != 0) {
          lVar7 = lVar8;
        }
        uVar13 = 0xe600000000000000;
        if (lVar2 != 0) {
          uVar13 = uVar1;
        }
        func_0x000107c5fadc(lVar7,uVar13);
        func_0x000107c6142c(uVar13);
        puVar12 = puVar10;
        func_0x000107c5e508(puVar10);
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(lVar7);
        uVar13 = 0x64656c62616e65;
        func_0x000107c5fadc(0x64656c62616e65,0xe700000000000000);
        uVar11 = uVar13;
        func_0x00010099c7cc();
        bVar3 = (int)uVar11 == 0;
        uVar11 = 0x65757274;
        if (bVar3) {
          uVar11 = 0x65736c6166;
        }
        uVar1 = 0xe400000000000000;
        if (bVar3) {
          uVar1 = 0xe500000000000000;
        }
        func_0x000107c5fadc(uVar11,uVar1);
        func_0x000107c6142c(uVar1);
        puVar14 = puVar12;
        func_0x000107c5e508(puVar12);
        func_0x000107c61180();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(uVar11);
        func_0x000107c45314(puVar4);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        puVar10 = puVar6;
        puVar4 = puVar14;
      }
      puVar5 = puVar4;
      func_0x000107c61170(puVar10);
    }
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 10170521c; end: 101705317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170521c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_11307d3e0);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x000100083b20(&uStack_40);
  puVar1 = PTR_PTR_1126a7a78;
  func_0x000107c610f8();
  func_0x000107c46e00();
  func_0x000107c615e8(uStack_40);
  func_0x000107c615e8(uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101705318; end: 101705347;  */

undefined1  [16] FUN_101705318(void)

{
  return ZEXT816(0x1103fd320);
}



/* Entry: 101705348; end: 1017054cb;  */

undefined * FUN_101705348(long param_1)

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
  
  lVar12 = 0x112dc3818;
  func_0x0001000285a8(0x112dc3818,&UNK_10d980f30);
  lVar11 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dc3820,&UNK_10d980f38);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar12 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      func_0x000101705610(param_1,puVar9,0x112dc3818,&UNK_10d980f30);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1017054c8);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      func_0x000101709088();
      func_0x0001017055cc((long)puVar9 + (long)iVar4,
                          lVar13 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1017054cc);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 1017054cc; end: 1017055cb;  */

undefined * FUN_1017054cc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dc3828,&UNK_10d980f40);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1017055c8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1017055cc);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1017055cc; end: 1017056a7;  */

undefined8 FUN_1017055cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000101709088();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1017056a8; end: 101705713;  */

void FUN_1017056a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000107c61428(param_1 + 0x10,auStack_48,1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 101705714; end: 1017057fb;  */

void FUN_101705714(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,1,0);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61438(uVar2,2);
  uVar1 = uVar2;
  FUN_1017058dc();
  func_0x000107c61434(param_3);
  func_0x000101705a10();
  func_0x000107c61434(param_3);
  FUN_101705d48(uVar1,uVar2,param_3);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(param_3);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_2 + 0x18) = 1;
  *param_1 = uVar1;
  return;
}



/* Entry: 1017057fc; end: 1017058af;  */

void FUN_1017057fc(undefined1 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0x20,0);
  lVar1 = *(long *)(param_2 + 0x10);
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x000107c61434(lVar1);
    func_0x000100029284();
    if ((param_4 & 1) != 0) {
      uVar2 = *(undefined1 *)(*(long *)(lVar1 + 0x38) + param_3);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar1);
      goto LAB_101705890;
    }
    func_0x000107c6142c(lVar1);
  }
  func_0x000107c614a8(auStack_58);
  uVar2 = 0;
LAB_101705890:
  *param_1 = uVar2;
  return;
}



/* Entry: 1017058b0; end: 1017058db;  */

void FUN_1017058b0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1017058dc; end: 101705b1b;  */

undefined8 FUN_1017058dc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fe14(uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  uStack_68 = uVar7;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      func_0x000107c61434(uVar3);
      func_0x000100403b00(auStack_78,uVar7,uVar3);
      func_0x000107c6142c(uStack_70);
      lVar9 = lVar1;
    }
    bVar6 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      FUN_101705fe4(param_1,puVar8,~uVar10,lVar9,0);
      return uStack_68;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101705a10);
  (*pcVar5)();
}



/* Entry: 101705b1c; end: 101705d47;  */

void FUN_101705b1c(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  char cVar12;
  long lVar13;
  ulong uVar14;
  char cVar15;
  long lStack_78;
  
  lStack_78 = 0;
  uVar9 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_3 + 0x38);
  lVar7 = 0;
LAB_101705b90:
  do {
    if (uVar14 == 0) {
      do {
        lVar4 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101705d48);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar4) {
          func_0x000107c6157c(param_3);
          func_0x0001010aeef0(param_1,param_2,lStack_78,param_3);
          return;
        }
        uVar14 = ((ulong *)(param_3 + 0x38))[lVar4];
        lVar7 = lVar7 + 1;
      } while (uVar14 == 0);
      uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar4 * 0x40;
    }
    else {
      uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 << 6;
      lVar4 = lVar7;
    }
    plVar1 = (long *)(*(long *)(param_3 + 0x30) + uVar10 * 0x10);
    lVar5 = *plVar1;
    uVar8 = plVar1[1];
    lVar13 = *(long *)(param_4 + 0x10);
    func_0x000107c61434(uVar8);
    lVar7 = lVar4;
    if (lVar13 == 0) {
LAB_101705c54:
      cVar15 = '\x02';
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_101705cac;
LAB_101705c60:
      func_0x000107c61434(param_5);
      uVar6 = uVar8;
      func_0x000100029284();
      if ((uVar6 & 1) == 0) {
        func_0x000107c6142c(uVar8);
        uVar8 = param_5;
        goto LAB_101705cac;
      }
      cVar12 = *(char *)(*(long *)(param_5 + 0x38) + lVar5);
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(param_5);
      cVar11 = cVar12;
      if (cVar15 != '\x02') goto LAB_101705cbc;
LAB_101705b88:
      if (cVar11 == '\x02') goto LAB_101705b90;
    }
    else {
      func_0x000107c61434(param_4);
      lVar4 = lVar5;
      uVar6 = uVar8;
      func_0x000100029284();
      if ((uVar6 & 1) == 0) {
        func_0x000107c6142c(param_4);
        goto LAB_101705c54;
      }
      cVar15 = *(char *)(*(long *)(param_4 + 0x38) + lVar4);
      func_0x000107c6142c(param_4);
      if (*(long *)(param_5 + 0x10) != 0) goto LAB_101705c60;
LAB_101705cac:
      func_0x000107c6142c(uVar8);
      cVar12 = '\x02';
      cVar11 = '\x02';
      if (cVar15 == '\x02') goto LAB_101705b88;
LAB_101705cbc:
      if ((cVar12 != '\x02') && (cVar15 == cVar12)) goto LAB_101705b90;
    }
    uVar8 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar10 & 0x3f);
    bVar3 = SCARRY8(lStack_78,1);
    lStack_78 = lStack_78 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101705d04);
      (*pcVar2)();
    }
  } while( true );
}



/* Entry: 101705d48; end: 101705fc7;  */

undefined1 * FUN_101705d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *unaff_x21;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined1 *apuStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar7 = uVar6 * 8;
  uStack_70 = param_2;
  uStack_68 = param_3;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_3);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_3);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) || (uVar5 = uVar7, func_0x000107c61594(uVar7,8), (uVar5 & 1) == 0)) {
      func_0x000107c6158c(uVar7,0xffffffffffffffff);
      func_0x0001010af89c(apuStack_90);
      puVar3 = apuStack_90[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar3 = puStack_98;
      }
      func_0x000107c61590(uVar7,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x000101705f6c;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = auStack_a0 + -(uVar7 + 0xf & 0x1ffffffffffffff0);
  func_0x000107c60ee4(puVar3,uVar7);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  FUN_101705b1c(puVar3,uVar6,param_1,param_2,param_3);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar3 = unaff_x21;
  }
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(param_2);
joined_r0x000101705f6c:
  if (unaff_x21 == (undefined1 *)0x0) {
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(param_2);
    func_0x000107c61574(param_1);
    uVar2 = (uint)param_1;
  }
  else {
    iVar1 = 2;
    puStack_98 = puVar3;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_98,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(param_2);
    uVar2 = (uint)param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    FUN_10170ea50();
    return (undefined1 *)(ulong)(uVar2 & 1);
  }
  return puVar3;
}



/* Entry: 101705fc8; end: 101705fe3;  */

uint FUN_101705fc8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10170ea50(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return (uint)param_1 & 1;
}



/* Entry: 101705fe4; end: 101705feb;  */

void FUN_101705fe4(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101705fec; end: 10170601b;  */

void FUN_101705fec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10170601c; end: 101706093;  */

void FUN_10170601c(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x00010044d5e8(0);
  func_0x000107c613fc();
  FUN_10171a388(uStack_38,uStack_40);
  *param_1 = uStack_38;
  return;
}



/* Entry: 101706094; end: 10170623f;  */

/* WARNING: Removing unreachable block (ram,0x0001017061e4) */

void FUN_101706094(undefined1 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c8 [16];
  long alStack_b8 [4];
  undefined1 auStack_98 [32];
  undefined1 uStack_78;
  undefined7 uStack_77;
  
  func_0x000100083b20(&uStack_78);
  lVar4 = CONCAT71(uStack_77,uStack_78);
  lVar2 = lVar4;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10170623c);
    (*pcVar1)();
  }
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efb9060);
  lVar4 = lVar2;
  func_0x000107c3ebd4();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar3);
  if ((int)lVar4 != 0) {
    func_0x000100083b20(alStack_b8);
    lVar4 = alStack_b8[0];
    func_0x000107c42eac();
    func_0x000107c61180();
    func_0x000107c61170(alStack_b8[0]);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101706240);
      (*pcVar1)();
    }
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c5dc1c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c60234(&uStack_78);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar2);
        func_0x000100102924(&uStack_78,auStack_98);
        func_0x0001000bb420(auStack_98,alStack_b8);
        FUN_10171747c(&uStack_78,alStack_b8,auStack_c8);
        func_0x000100183ab8(auStack_98);
        FUN_10170740c(&uStack_78);
        *param_1 = uStack_78;
        return;
      }
      func_0x000107c61170(lVar2);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 101706240; end: 101706303;  */

void FUN_101706240(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  char cStack_21;
  
  func_0x000100083b20(&cStack_21);
  if ((cStack_21 == '\x01') && ((*(byte *)(unaff_x20 + 0x30) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + 0x30) = 1;
    puVar1 = &UNK_1103fd428;
    func_0x000107c613fc(&UNK_1103fd428,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uVar2 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    uVar3 = 1;
    func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10d981010,puVar1,uVar2);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 101706304; end: 10170632b; -[_TtC42CreatorSubscriptionsServicesImplementation19CreatorInfoProvider warmUp] */

void FUN_101706304(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_101706240();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10170632c; end: 10170636b; -[_TtC42CreatorSubscriptionsServicesImplementation19CreatorInfoProvider creatorSubscriptionsEnabled] */

undefined1 FUN_10170632c(undefined8 param_1)

{
  undefined1 uStack_21;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_21);
  func_0x000107c61574(param_1);
  return uStack_21;
}



/* Entry: 10170636c; end: 1017063d3; -[_TtC42CreatorSubscriptionsServicesImplementation19CreatorInfoProvider creatorSubscriptionInternalDeeplinkURL] */

void FUN_10170636c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1017063d4();
  func_0x000107c61574(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1017063d4; end: 1017065a3;  */

undefined1  [16] FUN_1017063d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000100083b20(&lStack_50);
  lVar3 = lStack_50;
  func_0x000107c5db24();
  func_0x000107c61180();
  func_0x000107c61170(lStack_50);
  lVar5 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar5 != 0) {
    lVar3 = lVar5;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar3 != 0) {
      lStack_50 = 0;
      lStack_48 = 0;
      func_0x000107c5fae8(lVar3,&lStack_50);
      func_0x000107c61170(lVar3);
      lVar5 = lStack_48;
      lVar3 = lStack_50;
      if (lStack_48 != 0) {
        func_0x000100083b20(&lStack_50);
        lVar2 = lStack_50;
        lVar1 = lStack_50;
        func_0x000107c5d984();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        lVar2 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        lStack_50 = -0x2fffffffffffffde;
        lStack_48 = 0x800000010efb9030;
        func_0x000107c5fb78(lVar3,lVar5);
        func_0x000107c6142c(lVar5);
        lVar5 = lStack_48;
        lVar3 = lStack_50;
        lVar1 = lVar2;
        func_0x000107c5fb5c(lVar2,plVar4);
        if (lVar1 < 1) {
          func_0x000107c6142c(plVar4);
        }
        else {
          lStack_50 = 0x3d6449726573753f;
          lStack_48 = 0xe800000000000000;
          func_0x000107c5fb78(lVar2,plVar4);
          func_0x000107c6142c(plVar4);
          lVar1 = lStack_48;
          lVar2 = lStack_50;
          lStack_50 = lVar3;
          lStack_48 = lVar5;
          func_0x000107c61434(lVar5);
          func_0x000107c5fb78(lVar2,lVar1);
          func_0x000107c6142c(lVar5);
          func_0x000107c6142c(lVar1);
          lVar3 = lStack_50;
          lVar5 = lStack_48;
        }
        goto LAB_101706578;
      }
    }
  }
  lVar3 = 0;
  lVar5 = 0;
LAB_101706578:
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 1017065a4; end: 1017066f7; -[_TtC42CreatorSubscriptionsServicesImplementation19CreatorInfoProvider subscriptionProductDisplayName] */

void FUN_1017065a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001017065fc();
  func_0x000107c61574(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1017066f8; end: 101706733; -[_TtC42CreatorSubscriptionsServicesImplementation19CreatorInfoProvider subscriptionProductDisplayNameObservable] */

void FUN_1017066f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101707078();
  func_0x000107c61180();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101706734; end: 101706813;  */

/* WARNING: Possible PIC construction at 0x0001017067d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017067d8) */
/* WARNING: Removing unreachable block (ram,0x0001017067dc) */
/* WARNING: Removing unreachable block (ram,0x0001017067e8) */

void FUN_101706734(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) &&
     (param_1 = uRam0000000112dc39a0, param_2 = uRam0000000112dc39a8, lRam0000000112dc3998 != -1)) {
    func_0x000107c61568(0x112dc3998,&UNK_10044d850);
    param_1 = uRam0000000112dc39a0;
    param_2 = uRam0000000112dc39a8;
  }
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5dc0c(uVar2);
  func_0x000107c61180();
  func_0x0001000e2834(0);
  func_0x000107c60118(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101706814; end: 101706867; -[_TtC42CreatorSubscriptionsServicesImplementation19CreatorInfoProvider updateSubscriptionProductDisplayName:] */

void FUN_101706814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_101706734(param_3,param_2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101706868; end: 10170687f;  */

void FUN_101706868(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101706880,0,0);
  return;
}



/* Entry: 101706880; end: 10170695f;  */

void FUN_101706880(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x38) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0xc0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x101706910;
    plVar1[0x10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101706a30,0,0);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010170690c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101706960; end: 10170696f;  */

void FUN_101706960(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010170696c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101706970; end: 1017069c3;  */

void FUN_101706970(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101707440;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101706880,0,0);
  return;
}



/* Entry: 1017069c4; end: 101706a17;  */

void FUN_1017069c4(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101707444;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101706880,0,0);
  return;
}



/* Entry: 101706a18; end: 101706a2f;  */

void FUN_101706a18(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101706a30,0,0);
  return;
}



/* Entry: 101706a30; end: 101706b4b;  */

void FUN_101706a30(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x70);
  uVar4 = *(ulong *)(unaff_x22 + 0x70);
  uVar2 = uVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(param_2);
  uVar2 = uVar4 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    func_0x000100083b20(unaff_x22 + 0x78);
    *(long *)(unaff_x22 + 0x88) = *(long *)(unaff_x22 + 0x78);
    plVar5 = *(long **)(*(long *)(unaff_x22 + 0x78) + 0x10);
    if (plVar5 != (long *)0x0) {
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *(undefined8 *)(unaff_x22 + 0x50) = 0;
      *(undefined8 *)(unaff_x22 + 0x68) = 0;
      *(undefined8 *)(unaff_x22 + 0x60) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(undefined8 *)(unaff_x22 + 0x10) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      piVar3 = *(int **)(*plVar5 + 0x230);
      iVar1 = *piVar3;
      plVar5 = (long *)(ulong)(uint)piVar3[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x90) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_101706b4c;
                    /* WARNING: Could not recover jumptable at 0x000101706b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar3))(0,0xc000000000000000,unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61574();
  }
                    /* WARNING: Could not recover jumptable at 0x000101706b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101706b4c; end: 101706beb;  */

void FUN_101706b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x98) = param_1;
  *(undefined8 *)(lVar2 + 0xa0) = param_2;
  *(undefined8 *)(lVar2 + 0xa8) = param_3;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101706bec;
  }
  else {
    pcVar1 = (code *)0x101706bb0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101706bec; end: 101706cd7;  */

void FUN_101706bec(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  if (*(long *)(lVar5 + 0x10) == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x98));
  }
  else {
    lVar5 = *(long *)(unaff_x22 + 0x98);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar3 = *(ulong *)(lVar5 + 0x30);
    uVar2 = *(ulong *)(lVar5 + 0x38);
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    if (uVar1 != 0) {
      uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x80) + 0x28);
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar3,uVar2);
      func_0x000107c4d664(uVar7);
      func_0x000107c6142c(lVar5);
      func_0x00010006c090(uVar4,uVar6);
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(uVar2);
      goto LAB_101706cbc;
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x00010006c090(uVar4,uVar6);
LAB_101706cbc:
                    /* WARNING: Could not recover jumptable at 0x000101706cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101706cd8; end: 101706cef;  */

void FUN_101706cd8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101706cf0,0,0);
  return;
}



/* Entry: 101706cf0; end: 101706d53;  */

void FUN_101706cf0(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  plVar1 = (long *)0x180;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101706d54;
  plVar1[0x21] = unaff_x22 + 0x10;
  plVar1[0x22] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101719104,0,0);
  return;
}



/* Entry: 101706d54; end: 101706db7;  */

void FUN_101706d54(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x68);
  *(long *)(lVar3 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x70));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101706db8;
  }
  else {
    pcVar2 = FUN_101706e20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101706db8; end: 101706e1f;  */

void FUN_101706db8(void)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x38) == 0) {
    uVar3 = 6;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
    cVar2 = *(char *)(unaff_x22 + 0x20);
    uVar1 = *(uint *)(unaff_x22 + 0x10);
    FUN_101707148(unaff_x22 + 0x10);
    if (cVar2 != '\x01') {
      uVar4 = 6;
    }
    uVar3 = 0;
    if ((uVar1 & 1) == 0) {
      uVar3 = uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101706e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 101706e20; end: 101706e53;  */

void FUN_101706e20(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000101706e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(6);
  return;
}



/* Entry: 101706e54; end: 101706f7f; -[_TtC42CreatorSubscriptionsServicesImplementation19CreatorInfoProvider checkCreatorOnboardingEligibilityWithCompletionHandler:] */

void FUN_101706e54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fd470;
  func_0x000107c613fc(&UNK_1103fd470,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fd498;
  func_0x000107c613fc(&UNK_1103fd498,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9810b8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fd4c0;
  func_0x000107c613fc(&UNK_1103fd4c0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9810c0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d9810c8,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101706f80; end: 101706fd7;  */

void FUN_101706f80(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x80;
  func_0x000107c6157c(param_2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101706fd8;
  plVar1[0xc] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101706cf0,0,0);
  return;
}



/* Entry: 101706fd8; end: 10170703b;  */

void FUN_101706fd8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x10);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  func_0x000107c61574(uVar1);
  (**(code **)(lVar3 + 0x10))(lVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x000101707038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 10170703c; end: 101707077;  */

void FUN_10170703c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101707078; end: 101707147;  */

undefined8 FUN_101707078(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  char cStack_31;
  
  func_0x000100083b20(&cStack_31);
  if ((cStack_31 == '\x01') && ((*(byte *)(unaff_x20 + 0x30) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + 0x30) = 1;
    puVar1 = &UNK_1103fd428;
    func_0x000107c613fc(&UNK_1103fd428,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uVar2 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    uVar3 = 1;
    func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10d9810d0,puVar1,uVar2);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar3);
  }
  return *(undefined8 *)(unaff_x20 + 0x28);
}



/* Entry: 101707148; end: 10170718f;  */

undefined8 FUN_101707148(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dc39b0;
  func_0x0001000285a8(0x112dc39b0,&UNK_10d981030);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101707190; end: 10170719f;  */

undefined1  [16] FUN_101707190(void)

{
  return ZEXT816(0x1103fd450);
}



/* Entry: 1017071a0; end: 101707203;  */

void FUN_1017071a0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101707204;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  plVar4 = (long *)0x80;
  func_0x000107c6157c(lVar2);
  func_0x000107c615b8();
  plVar3[4] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_101706fd8;
  plVar4[0xc] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101706cf0,0,0);
  return;
}



/* Entry: 101707204; end: 10170723f;  */

void FUN_101707204(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010170723c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101707240; end: 1017072b7;  */

void FUN_101707240(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101707448;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1017072b8; end: 1017072e3;  */

void FUN_1017072b8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1017072e4; end: 101707367;  */

void FUN_1017072e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10170744c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101707368; end: 1017073bb;  */

void FUN_101707368(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101707450;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101706880,0,0);
  return;
}



/* Entry: 1017073bc; end: 1017073c3;  */

void FUN_1017073bc(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  func_0x00010044d5e8(0);
  func_0x000107c613fc();
  FUN_10171a388(uStack_38,uStack_40);
  *param_1 = uStack_38;
  return;
}



/* Entry: 1017073c4; end: 1017073f3;  */

void FUN_1017073c4(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1017073f4; end: 10170740b;  */

/* WARNING: Removing unreachable block (ram,0x0001017061e4) */

void FUN_1017073f4(undefined1 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_c8 [16];
  long alStack_b8 [4];
  undefined1 auStack_98 [32];
  undefined1 uStack_78;
  undefined7 uStack_77;
  
  func_0x000100083b20(&uStack_78,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar4 = CONCAT71(uStack_77,uStack_78);
  lVar2 = lVar4;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10170623c);
    (*pcVar1)();
  }
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efb9060);
  lVar4 = lVar2;
  func_0x000107c3ebd4();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar3);
  if ((int)lVar4 != 0) {
    func_0x000100083b20(alStack_b8);
    lVar4 = alStack_b8[0];
    func_0x000107c42eac();
    func_0x000107c61180();
    func_0x000107c61170(alStack_b8[0]);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101706240);
      (*pcVar1)();
    }
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c5dc1c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c60234(&uStack_78);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar2);
        func_0x000100102924(&uStack_78,auStack_98);
        func_0x0001000bb420(auStack_98,alStack_b8);
        FUN_10171747c(&uStack_78,alStack_b8,auStack_c8);
        func_0x000100183ab8(auStack_98);
        FUN_10170740c(&uStack_78);
        *param_1 = uStack_78;
        return;
      }
      func_0x000107c61170(lVar2);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10170740c; end: 10170743f;  */

undefined8 FUN_10170740c(undefined8 param_1)

{
  (*(code *)(undefined *)0x10171b1a8)();
  return param_1;
}



/* Entry: 101707440; end: 101707453;  */

void FUN_101707440(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010170723c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101707454; end: 101707497;  */

void FUN_101707454(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101707498; end: 1017074f7; -[_TtCC42CreatorSubscriptionsServicesImplementation35CreatorSubscriptionProductNameCacheP33_AE75969D87F1D6AD6F6ED45AD96F843910CacheEntry init] */

void FUN_101707498(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorSubscriptionsServicesImplementation.CacheEntry",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017074c4);
  (*pcVar1)();
}



/* Entry: 1017074f8; end: 101707547; -[_TtCC42CreatorSubscriptionsServicesImplementation35CreatorSubscriptionProductNameCacheP33_AE75969D87F1D6AD6F6ED45AD96F843910CacheEntry .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017074f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112dc3be8 + 8));
  lVar1 = _DAT_112dc3bf0;
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000101707544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 101707548; end: 101707abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101707548(double param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b0;
  long alStack_a0 [3];
  undefined8 uStack_88;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar9 - extraout_x12;
  func_0x000107c5eea0(lVar12);
  lVar15 = *(long *)(unaff_x20 + 0x58);
  uVar11 = param_2;
  func_0x000107c5fadc(param_2,param_3);
  lVar8 = lVar15;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  if (lVar8 != 0) {
    func_0x000107c5ee68(lVar8 + _DAT_112dc3bf0);
    if (param_1 < 86400.0) {
      (**(code **)(lVar13 + 8))(lVar12,lVar3);
      lVar15 = *(long *)(lVar8 + _DAT_112dc3be8);
      param_3 = ((long *)(lVar8 + _DAT_112dc3be8))[1];
      func_0x000107c61434(param_3);
      func_0x000107c61170(lVar8);
      goto LAB_101707a98;
    }
    uVar11 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c4ff88(lVar15);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(uVar11);
  }
  func_0x000101709618(unaff_x20 + 0x10,&uStack_c8,0x112dc3cc0,&UNK_10d9811e8);
  if (lStack_b0 == 0) {
    (**(code **)(lVar13 + 8))(lVar12,lVar3);
    func_0x0001017095d8(&uStack_c8,0x112dc3cc0,&UNK_10d9811e8);
  }
  else {
    lStack_e8 = lVar9;
    FUN_101709660(&uStack_c8,alStack_a0);
    uStack_c8 = 0xd00000000000001b;
    puStack_c0 = (undefined *)0x800000010efb90d0;
    func_0x000107c5fb78(param_2,param_3);
    puVar1 = puStack_c0;
    uVar11 = uStack_c8;
    uStack_c8 = 0xd00000000000001e;
    puStack_c0 = (undefined *)0x800000010efb90f0;
    func_0x000107c5fb78(param_2,param_3);
    puVar2 = puStack_c0;
    lStack_e0 = uStack_c8;
    plVar4 = alStack_a0;
    func_0x0001000a8868(plVar4,uStack_88);
    lVar8 = *(long *)(*plVar4 + 0x10);
    uStack_f0 = uVar11;
    func_0x000107c5fadc(uVar11,puVar1);
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    if (lVar8 == 0) {
      (**(code **)(lVar13 + 8))(lVar12,lVar3);
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar2);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSString_1126ae4d0);
      lVar9 = lVar8;
      func_0x000107c6148c(lVar8,puVar5);
      if (lVar9 == 0) {
        func_0x000107c6142c(puVar1);
        func_0x000107c6142c(puVar2);
        func_0x000107c615e8(lVar8);
        (**(code **)(lVar13 + 8))(lVar12,lVar3);
      }
      else {
        plVar4 = alStack_a0;
        lStack_100 = lVar9;
        lStack_f8 = lVar8;
        func_0x0001000a8868(plVar4,uStack_88);
        lVar9 = *(long *)(*plVar4 + 0x10);
        lVar8 = lStack_e0;
        puVar5 = puVar2;
        func_0x000107c5fadc(lStack_e0);
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        if (lVar9 == 0) {
          param_1 = 0.0;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c61168();
          lVar8 = lVar9;
          func_0x000107c6148c();
          if (lVar8 == 0) {
            param_1 = 0.0;
          }
          else {
            func_0x000107c4223c();
          }
          func_0x000107c615e8(lVar9);
        }
        lVar8 = lStack_e8;
        func_0x000107c5ee88(lStack_e8);
        func_0x000107c5ee68(lVar8);
        if (param_1 < 86400.0) {
          func_0x000107c6142c(puVar1);
          func_0x000107c6142c(puVar2);
          lVar9 = lStack_100;
          func_0x000107c5faec();
          lVar6 = 0;
          lStack_e0 = lVar9;
          func_0x000101708d8c();
          lVar7 = lVar6;
          func_0x000107c610f8();
          plVar4 = (long *)(lVar7 + _DAT_112dc3be8);
          *plVar4 = lStack_e0;
          plVar4[1] = (long)puVar5;
          (**(code **)(lVar13 + 0x10))(lVar7 + _DAT_112dc3bf0,lVar8,lVar3);
          lVar9 = lStack_f8;
          puVar1 = PTR_s_init_1125d9248;
          lStack_d8 = lVar7;
          lStack_d0 = lVar6;
          func_0x000107c615f0(lStack_f8);
          plVar4 = &lStack_d8;
          func_0x000107c61154(plVar4,puVar1);
          func_0x000107c5fadc(param_2,param_3);
          func_0x000107c56bcc(lVar15);
          func_0x000107c61170(plVar4);
          func_0x000107c61170(param_2);
          lVar15 = lStack_100;
          func_0x000107c5faec(lStack_100);
          func_0x000107c615ec(lVar9,2);
          pcVar14 = *(code **)(lVar13 + 8);
          (*pcVar14)(lVar8,lVar3);
          (*pcVar14)(lVar12,lVar3);
          func_0x0001000834e4(alStack_a0);
          goto LAB_101707a98;
        }
        plVar4 = alStack_a0;
        func_0x0001000a8868(plVar4,uStack_88);
        uVar10 = *(undefined8 *)(*plVar4 + 0x10);
        uVar11 = uStack_f0;
        func_0x000107c5fadc(uStack_f0,puVar1);
        func_0x000107c56bd8(uVar10);
        func_0x000107c6142c(puVar1);
        func_0x000107c61170(uVar11);
        plVar4 = alStack_a0;
        func_0x0001000a8868(plVar4,uStack_88);
        uVar11 = *(undefined8 *)(*plVar4 + 0x10);
        lVar15 = lStack_e0;
        func_0x000107c5fadc(lStack_e0,puVar2);
        func_0x000107c56bd8(uVar11);
        func_0x000107c615e8(lStack_f8);
        func_0x000107c61170(lVar15);
        func_0x000107c6142c(puVar2);
        pcVar14 = *(code **)(lVar13 + 8);
        (*pcVar14)(lVar8,lVar3);
        (*pcVar14)(lVar12,lVar3);
      }
    }
    func_0x0001000834e4(alStack_a0);
  }
  lVar15 = 0;
  param_3 = 0;
LAB_101707a98:
  auVar16._8_8_ = param_3;
  auVar16._0_8_ = lVar15;
  return auVar16;
}



/* Entry: 101707abc; end: 101707b1f;  */

void FUN_101707abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  lVar1 = 0;
  func_0x000101709088();
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101707b20,0,0);
  return;
}



/* Entry: 101707b20; end: 101707c2f;  */

void FUN_101707b20(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 200) = lVar5;
  if (lVar5 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0xb8);
    lVar2 = *(long *)(unaff_x22 + 0xc0);
    *(long *)(unaff_x22 + 0x50) = lVar5;
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000100087bd4(lVar2,0x101709480,unaff_x22 + 0x40,lVar1);
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
    uVar6 = *(undefined8 *)(lVar2 + *(int *)(lVar1 + 0x14));
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd8) = plVar3;
    uVar4 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101707c30;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(unaff_x22 + 0x80,uVar6,uVar4);
    return;
  }
  (**(code **)(unaff_x22 + 0x98))();
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x000101707c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101707c30; end: 101707c77;  */

void FUN_101707c30(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101707c78,0,0);
  return;
}



/* Entry: 101707c78; end: 101707d2b;  */

void FUN_101707c78(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  pcVar2 = *(code **)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
  func_0x000100087bd4(0x10170949c,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  (*pcVar2)(uVar3,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c6142c(uVar4);
  FUN_1017094b8(uVar5);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x000101707d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101707d2c; end: 101707fbf;  */

void FUN_101707d2c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112dc3cc8;
  func_0x0001000285a8(0x112dc3cc8,&UNK_10d9811f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_90 + -extraout_x8;
  lVar1 = 0;
  func_0x000101709088();
  lStack_80 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar7 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar7 - extraout_x12;
  func_0x000107c61428(param_2 + 0x68,auStack_78,0x20,0);
  lVar8 = *(long *)(param_2 + 0x68);
  if (*(long *)(lVar8 + 0x10) != 0) {
    lStack_88 = param_1;
    func_0x000107c61434(lVar8);
    lVar2 = param_3;
    uVar6 = param_4;
    func_0x000100029284(param_3);
    if ((uVar6 & 1) != 0) {
      func_0x0001017094f4(*(long *)(lVar8 + 0x38) + *(long *)(lStack_80 + 0x48) * lVar2,lVar7);
      FUN_1017055cc(lVar7,lVar10);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar8);
      FUN_1017055cc(lVar10,lStack_88);
      return;
    }
    func_0x000107c6142c(lVar8);
    param_1 = lStack_88;
  }
  func_0x000107c614a8(auStack_78);
  func_0x000107c5eec4(param_1);
  puVar3 = &UNK_1103fd580;
  func_0x000107c613fc(&UNK_1103fd580,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_2);
  puVar4 = &UNK_1103fd5d0;
  func_0x000107c613fc(&UNK_1103fd5d0,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(long *)(puVar4 + 0x18) = param_3;
  *(ulong *)(puVar4 + 0x20) = param_4;
  func_0x000107c61434(param_4);
  uVar5 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  *(undefined8 *)(lVar10 + -0x10) = uVar5;
  uVar5 = 1;
  func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10d981208,puVar4);
  func_0x000107c61574(puVar4);
  *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x14)) = uVar5;
  func_0x0001017094f4(param_1,puVar9);
  (**(code **)(lStack_80 + 0x38))(puVar9,0,1,lVar1);
  func_0x000107c61428(param_2 + 0x68,auStack_78,0x21,0);
  func_0x000107c61434(param_4);
  FUN_101709a58(puVar9,param_3,param_4);
  func_0x000107c614a8(auStack_78);
  return;
}



/* Entry: 101707fc0; end: 101707fdb;  */

void FUN_101707fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101707fdc,0,0);
  return;
}



/* Entry: 101707fdc; end: 1017080fb;  */

void FUN_101707fdc(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x48) = lVar4;
  if (lVar4 != 0) {
    plVar2 = (long *)0x160;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x101708070;
    lVar1 = *(long *)(unaff_x22 + 0x38);
    plVar2[0x25] = *(long *)(unaff_x22 + 0x40);
    plVar2[0x26] = lVar4;
    plVar2[0x24] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101708118,0,0);
    return;
  }
  puVar3 = *(undefined8 **)(unaff_x22 + 0x28);
  *puVar3 = 0;
  puVar3[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010170806c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1017080fc; end: 101708117;  */

void FUN_1017080fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_2;
  *(undefined8 *)(unaff_x22 + 0x130) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x120) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101708118,0,0);
  return;
}



/* Entry: 101708118; end: 1017081c7;  */

void FUN_101708118(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  piVar2 = *(int **)(*(long *)(unaff_x22 + 0x130) + 0x48);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101708178;
                    /* WARNING: Could not recover jumptable at 0x000101708174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x128));
  return;
}



/* Entry: 1017081c8; end: 1017082a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017081c8(void)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x140) != 0) {
    puVar1 = (ulong *)(*(long *)(unaff_x22 + 0x140) + _DAT_113041e90);
    uVar4 = *puVar1;
    uVar6 = puVar1[1];
    *(ulong *)(unaff_x22 + 0x148) = uVar6;
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar2 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      piVar5 = *(int **)(*(long *)(unaff_x22 + 0x130) + 0x38);
      iVar3 = *piVar5;
      plVar7 = (long *)(ulong)(uint)piVar5[1];
      func_0x000107c61434(uVar6);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x150) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_1017082a4;
                    /* WARNING: Could not recover jumptable at 0x000101708278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar3 + (long)piVar5))(plVar7,unaff_x22 + 0x70,uVar4,uVar6);
      return;
    }
    func_0x000107c61170();
  }
                    /* WARNING: Could not recover jumptable at 0x0001017082a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}


