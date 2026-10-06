/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101dc8df0; end: 101dc8eeb;  */

undefined * FUN_101dc8df0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  lVar1 = lStack_38;
  if (lStack_38 != 0) {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      lVar2 = lStack_38;
      func_0x000107c4cc44(lStack_38);
      func_0x000107c61180();
      func_0x000107c615e8(lStack_38);
      puVar3 = PTR_PTR_1126af4c0;
      func_0x000107c61168();
      func_0x000107c432ec();
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar3);
        puVar3 = puVar4;
        FUN_101dc8eec();
        func_0x000107c6142c(puVar4);
        if (puVar3 != (undefined *)0x0) {
          func_0x000107c61170(lVar1);
          func_0x000107c615e8(lVar2);
          return puVar3;
        }
      }
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 101dc8eec; end: 101dc8fff;  */

undefined * FUN_101dc8eec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101dca7d4(0,lVar5,0);
  puVar2 = PTR___sypN_11034f1a8;
  puVar1 = puStack_58;
  while( true ) {
    if (lVar5 == 0) {
      return puVar1;
    }
    param_1 = param_1 + 0x20;
    puStack_58 = puVar1;
    func_0x0001000bb420(param_1,auStack_78);
    func_0x000100102924(auStack_78,auStack_98);
    uVar3 = 0;
    FUN_101dc9000(0);
    uVar4 = 0;
    func_0x000107c6147c(&uStack_a0,auStack_98,puVar2 + 8,uVar3,6);
    uVar3 = uStack_a0;
    if ((uVar4 & 1) == 0) break;
    uVar4 = *(ulong *)(puVar1 + 0x10);
    puStack_58 = puVar1;
    if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
      FUN_101dca7d4(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
    }
    *(ulong *)(puStack_58 + 0x10) = uVar4 + 1;
    *(undefined8 *)(puStack_58 + uVar4 * 8 + 0x20) = uVar3;
    lVar5 = lVar5 + -1;
    puVar1 = puStack_58;
  }
  func_0x000107c61574(puVar1);
  return (undefined *)0x0;
}



/* Entry: 101dc9000; end: 101dc9043;  */

void FUN_101dc9000(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2d558 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126af4c0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e2d558 = puVar1;
  return;
}



/* Entry: 101dc9044; end: 101dc905b;  */

void FUN_101dc9044(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc905c,0,0);
  return;
}



/* Entry: 101dc905c; end: 101dc9237;  */

void FUN_101dc905c(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x22;
  ulong uVar13;
  ulong uVar14;
  
  uVar12 = *(ulong *)(unaff_x22 + 0x50);
  uVar14 = uVar12 & 0xffffffffffffff8;
  if (uVar12 >> 0x3e == 0) {
    uVar11 = *(ulong *)(uVar14 + 0x10);
    uVar10 = uVar12;
  }
  else {
    uVar11 = uVar14;
    if (0x7fffffffffffffff < uVar12) {
      uVar11 = uVar12;
    }
    func_0x000107c60480();
    uVar10 = *(ulong *)(unaff_x22 + 0x50);
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x22 + 0x60) = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    uVar5 = 0;
    do {
      while( true ) {
        if ((uVar12 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar14 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc9220);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar10 + 0x20 + uVar5 * 8);
          func_0x000107c61174();
          lVar9 = param_2;
        }
        else {
          lVar9 = *(long *)(unaff_x22 + 0x50);
          uVar3 = uVar5;
          func_0x000101dc9840();
        }
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc921c);
          (*pcVar2)();
        }
        uVar13 = uVar5 + 1;
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c42950();
        func_0x000107c61180();
        if (uVar4 == 0) break;
        uVar5 = uVar4;
        func_0x000107c5faec();
        param_2 = lVar9;
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar3);
        puVar6 = puVar8;
        func_0x000107c61558();
        puVar7 = puVar8;
        if (((ulong)puVar6 & 1) == 0) {
          param_2 = *(long *)(puVar8 + 0x10) + 1;
          puVar7 = (undefined *)0x0;
          func_0x0001000d182c(0,param_2,1,puVar8);
        }
        uVar3 = *(ulong *)(puVar7 + 0x10);
        lVar1 = uVar3 + 1;
        puVar8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          param_2 = lVar1;
          func_0x0001000d182c(puVar8,lVar1,1,puVar7);
        }
        *(long *)(puVar8 + 0x10) = lVar1;
        *(ulong *)(puVar8 + uVar3 * 0x10 + 0x20) = uVar5;
        *(long *)(puVar8 + uVar3 * 0x10 + 0x28) = lVar9;
        *(undefined **)(unaff_x22 + 0x60) = puVar8;
        uVar5 = uVar13;
        if (uVar13 == uVar11) goto LAB_101dc91cc;
      }
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      param_2 = lVar9;
      uVar5 = uVar5 + 1;
    } while (uVar13 != uVar11);
  }
LAB_101dc91cc:
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101dc9238;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101dc9348();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101dc9238; end: 101dc929b;  */

void FUN_101dc9238(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x68) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101dc929c;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x101dc92d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dc929c; end: 101dc9347;  */

void FUN_101dc929c(void)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101dc92cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc9348; end: 101dc9557;  */

void FUN_101dc9348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&puStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&puStack_a0);
  puVar5 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    func_0x000107c61450(param_1);
  }
  else {
    puVar3 = &UNK_1104858c0;
    func_0x000107c613fc(&UNK_1104858c0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined **)(puVar3 + 0x18) = puStack_a0;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_101dc9a04;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1104858d8;
    ppuVar4 = &puStack_a0;
    puStack_78 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_78;
    func_0x000107c61434(param_3);
    func_0x000107c61174(puVar5);
    func_0x000107c61574(puVar3);
    FUN_101dc9a70(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar9 + 0x68))
              (lVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar2);
    lVar6 = lVar8;
    func_0x000107c5fff0(lVar8);
    (**(code **)(lVar9 + 8))(lVar8,lVar2);
    puVar3 = &UNK_110485910;
    func_0x000107c613fc(&UNK_110485910,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    pcStack_80 = (code *)0x101dc9a28;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1013b7310;
    puStack_88 = &UNK_110485928;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar3;
    func_0x000107c60bc4(ppuVar7);
    puVar3 = puStack_78;
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar3);
    func_0x000107c4e560(puVar5);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 101dc9558; end: 101dc95df;  */

/* WARNING: Possible PIC construction at 0x000101dc95b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dc95b8) */

void FUN_101dc9558(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af4c0;
  func_0x000107c61168(PTR_PTR_1126af4c0);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  func_0x000107c430d4(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101dc95e0; end: 101dc9673;  */

void FUN_101dc95e0(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((((ulong)param_1 & 1) != 0) && (param_2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_4);
    return;
  }
  FUN_101dc9a30();
  puVar1 = &UNK_1104859e0;
  func_0x000107c613f8(&UNK_1104859e0,param_1,0,0);
  *param_1 = 3;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_4,uVar2);
  return;
}



/* Entry: 101dc9674; end: 101dc97a3;  */

undefined * FUN_101dc9674(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc97a4);
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
    puVar3 = (undefined *)0x112e2d608;
    func_0x0001000285a8(0x112e2d608,&UNK_10da16518);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e29f80;
    func_0x0001000285a8(0x112e29f80,&UNK_10da12330);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101dc97a4; end: 101dc97c7;  */

void FUN_101dc97a4(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112e2d610;
  plVar5 = (long *)&UNK_10da16528;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101dc9a70(0,0x112e2d558,&PTR_PTR_1126af4c0);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101dc97c8; end: 101dc9a03;  */

void FUN_101dc97c8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101dc9a70(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101dc9a04; end: 101dc9a2f;  */

/* WARNING: Possible PIC construction at 0x000101dc95b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dc95b8) */

void FUN_101dc9a04(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x000107c61168(PTR_PTR_1126af4c0);
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  func_0x000107c430d4(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101dc9a30; end: 101dc9a6f;  */

void FUN_101dc9a30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2d600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da165d0;
  func_0x000107c61520(&UNK_10da165d0,&UNK_1104859e0);
  puRam0000000112e2d600 = puVar1;
  return;
}



/* Entry: 101dc9a70; end: 101dc9aaf;  */

void FUN_101dc9a70(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101dc9ab0; end: 101dc9acb;  */

void FUN_101dc9ab0(long param_1,long param_2)

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



/* Entry: 101dc9acc; end: 101dc9cd3;  */

void FUN_101dc9acc(void)

{
  char *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar5 = 0xd000000000000012;
  bVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0xd000000000000011;
  pcVar4 = "iesRemotelyThenLocally()";
  if (bVar2 == 2) {
    uVar5 = 0xd000000000000013;
    pcVar4 = "local_purge_failed";
  }
  pcVar1 = "sync_check_timeout";
  if (bVar2 != 0) {
    uVar3 = 0xd000000000000012;
    pcVar1 = "remote_purge_failed";
  }
  if (bVar2 < 2) {
    pcVar4 = pcVar1;
    uVar5 = uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar5,(ulong)pcVar4 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar4 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101dc9cd4; end: 101dc9d53;  */

void FUN_101dc9cd4(undefined8 *param_1)

{
  char *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte *unaff_x20;
  
  uVar3 = 0xd000000000000012;
  bVar2 = *unaff_x20;
  uVar4 = 0xd000000000000011;
  pcVar5 = "iesRemotelyThenLocally()";
  if (bVar2 == 2) {
    uVar3 = 0xd000000000000013;
    pcVar5 = "local_purge_failed";
  }
  pcVar1 = "sync_check_timeout";
  if (bVar2 != 0) {
    uVar4 = 0xd000000000000012;
    pcVar1 = "remote_purge_failed";
  }
  if (bVar2 < 2) {
    pcVar5 = pcVar1;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = (ulong)pcVar5 | 0x8000000000000000;
  return;
}



/* Entry: 101dc9d54; end: 101dc9db7;  */

ulong FUN_101dc9d54(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 101dc9db8; end: 101dc9dbb;  */

void FUN_101dc9db8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2d618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da16530;
  func_0x000107c61520(&UNK_10da16530,&UNK_1104859e0);
  puRam0000000112e2d618 = puVar1;
  return;
}



/* Entry: 101dc9dbc; end: 101dc9dfb;  */

void FUN_101dc9dbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2d618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da16530;
  func_0x000107c61520(&UNK_10da16530,&UNK_1104859e0);
  puRam0000000112e2d618 = puVar1;
  return;
}



/* Entry: 101dc9dfc; end: 101dc9f77;  */

int FUN_101dc9dfc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101dc9e78;
        goto LAB_101dc9e5c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101dc9e5c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_101dc9e78:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101dc9f78; end: 101dca4d3;  */

void FUN_101dc9f78(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long unaff_x22;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  
  uVar9 = *(ulong *)(unaff_x22 + 0x50);
  if (uVar9 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar17 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar17 = uVar9;
    }
    func_0x000107c60480();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if ((long)uVar17 < 1) {
                    /* WARNING: Could not recover jumptable at 0x000101dca4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar11 = uVar17;
  func_0x0001011bf650(0,uVar17,0);
  uVar9 = uVar9 & 0xc000000000000001;
  if (uVar9 == 0) {
    uVar15 = uVar17;
    plVar16 = (long *)(*(long *)(unaff_x22 + 0x50) + 0x20);
    do {
      lVar6 = *plVar16;
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar6;
      func_0x000107c42950();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar6);
        lVar13 = 0;
        uVar12 = 0;
        uVar14 = uVar11;
      }
      else {
        lVar13 = lVar5;
        func_0x000107c5faec();
        uVar14 = uVar11;
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar6);
        uVar12 = uVar11;
      }
      uVar11 = uVar14;
      uVar1 = *(ulong *)(puVar2 + 0x10);
      uVar14 = uVar1 + 1;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        uVar11 = uVar14;
        func_0x0001011bf650(1 < *(ulong *)(puVar2 + 0x18),uVar14,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar14;
      *(long *)(puVar2 + uVar1 * 0x10 + 0x20) = lVar13;
      *(ulong *)(puVar2 + uVar1 * 0x10 + 0x28) = uVar12;
      uVar15 = uVar15 - 1;
      plVar16 = plVar16 + 1;
    } while (uVar15 != 0);
  }
  else {
    uVar11 = 0;
    do {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar15 = uVar11;
      func_0x000101dc9840();
      uVar14 = uVar15;
      func_0x000107c615f0();
      func_0x000107c42950();
      func_0x000107c61180();
      if (uVar14 == 0) {
        func_0x000107c615ec(uVar15,2);
        uVar12 = 0;
        uVar8 = 0;
      }
      else {
        uVar12 = uVar14;
        func_0x000107c5faec();
        func_0x000107c61170(uVar14);
        func_0x000107c615ec(uVar15,2);
      }
      uVar15 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar15) {
        func_0x0001011bf650(1 < *(ulong *)(puVar2 + 0x18),uVar15 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar15 + 1;
      *(ulong *)(puVar2 + uVar15 * 0x10 + 0x20) = uVar12;
      *(undefined8 *)(puVar2 + uVar15 * 0x10 + 0x28) = uVar8;
    } while (uVar17 != uVar11);
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101dca7f0(0,uVar17,0);
  if (uVar9 == 0) {
    puVar10 = (undefined8 *)(*(long *)(unaff_x22 + 0x50) + 0x20);
    uVar11 = uVar17;
    do {
      uVar8 = *puVar10;
      func_0x000107c4caac();
      func_0x000107c61180();
      uVar15 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar15) {
        func_0x000101dca7f0(1 < *(ulong *)(puVar3 + 0x18),uVar15 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar15 + 1;
      *(undefined8 *)(puVar3 + uVar15 * 8 + 0x20) = uVar8;
      uVar11 = uVar11 - 1;
      puVar10 = puVar10 + 1;
    } while (uVar11 != 0);
  }
  else {
    uVar11 = 0;
    do {
      uVar15 = uVar11;
      func_0x000101dc9840(uVar11,*(undefined8 *)(unaff_x22 + 0x50));
      uVar14 = uVar15;
      func_0x000107c4caac();
      func_0x000107c61180();
      func_0x000107c615e8(uVar15);
      uVar15 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar15) {
        func_0x000101dca7f0(1 < *(ulong *)(puVar3 + 0x18),uVar15 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar3 + 0x10) = uVar15 + 1;
      *(ulong *)(puVar3 + uVar15 * 8 + 0x20) = uVar14;
    } while (uVar17 != uVar11);
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = uVar17;
  func_0x0001011bf650(0,uVar17,0);
  if (uVar9 == 0) {
    plVar16 = (long *)(*(long *)(unaff_x22 + 0x50) + 0x20);
    do {
      lVar6 = *plVar16;
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar6;
      func_0x000107c42c98();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar6);
        lVar13 = 0;
        uVar15 = 0;
        uVar9 = uVar11;
      }
      else {
        lVar13 = lVar5;
        func_0x000107c5faec();
        uVar9 = uVar11;
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar6);
        uVar15 = uVar11;
      }
      uVar11 = uVar9;
      uVar14 = *(ulong *)(puVar4 + 0x10);
      uVar9 = uVar14 + 1;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar14) {
        uVar11 = uVar9;
        func_0x0001011bf650(1 < *(ulong *)(puVar4 + 0x18),uVar9,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar9;
      *(long *)(puVar4 + uVar14 * 0x10 + 0x20) = lVar13;
      *(ulong *)(puVar4 + uVar14 * 0x10 + 0x28) = uVar15;
      uVar17 = uVar17 - 1;
      plVar16 = plVar16 + 1;
    } while (uVar17 != 0);
  }
  else {
    uVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar11 = uVar9;
      func_0x000101dc9840();
      uVar15 = uVar11;
      func_0x000107c615f0();
      func_0x000107c42c98();
      func_0x000107c61180();
      if (uVar15 == 0) {
        func_0x000107c615ec(uVar11,2);
        uVar14 = 0;
        uVar8 = 0;
      }
      else {
        uVar14 = uVar15;
        func_0x000107c5faec();
        func_0x000107c61170(uVar15);
        func_0x000107c615ec(uVar11,2);
      }
      uVar11 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar11) {
        func_0x0001011bf650(1 < *(ulong *)(puVar4 + 0x18),uVar11 + 1,1);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(puVar4 + 0x10) = uVar11 + 1;
      *(ulong *)(puVar4 + uVar11 * 0x10 + 0x20) = uVar14;
      *(undefined8 *)(puVar4 + uVar11 * 0x10 + 0x28) = uVar8;
    } while (uVar17 != uVar9);
  }
  puVar7 = puVar2;
  FUN_101dcaa70(puVar2,puVar3,puVar4);
  *(undefined **)(unaff_x22 + 0x60) = puVar7;
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(puVar3);
  func_0x000107c6142c(puVar2);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101dca4d4;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101dca5ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101dca4d4; end: 101dca537;  */

void FUN_101dca4d4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x68) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101dca538;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x101dca56c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dca538; end: 101dca5eb;  */

void FUN_101dca538(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101dca568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dca5ec; end: 101dca73b;  */

void FUN_101dca5ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = *(ulong *)(param_2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x0001000a8868(param_2 + 0x10,uVar1);
  (**(code **)(lVar4 + 0x18))(uVar1,lVar4);
  if ((uVar1 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61538();
    lVar4 = lVar2;
    func_0x0001001830b8();
    func_0x000100ab5dc4(lVar2 + 0x20);
  }
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 8))
            (param_3,&UNK_110485f08,lVar4,&UNK_110485f08,&PTR_DAT_112e2dba8,uStack_60,lStack_58);
  puVar3 = &UNK_110485a90;
  func_0x000107c613fc(&UNK_110485a90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x00010075a04c(0,1,FUN_101dcae74,puVar3);
  func_0x000107c61574(param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(lVar4);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 101dca73c; end: 101dca7d3;  */

void FUN_101dca73c(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1[8] == '\x01') {
    FUN_101dc9a30();
    puVar1 = &UNK_1104859e0;
    func_0x000107c613f8(&UNK_1104859e0,param_1,0,0);
    *param_1 = 2;
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_2,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_2);
  return;
}



/* Entry: 101dca7d4; end: 101dca80b;  */

void FUN_101dca7d4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101dca80c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101dca80c; end: 101dcaa6f;  */

undefined * FUN_101dca80c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dca940);
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
    FUN_101dc97a4();
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
    FUN_101dcae7c(0,0x112e2d558,&PTR_PTR_1126af4c0);
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



/* Entry: 101dcaa70; end: 101dcae73;  */

undefined * FUN_101dcaa70(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar16 = 0;
  uVar17 = *(ulong *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    uVar1 = uVar16;
    if (uVar16 <= uVar17) {
      uVar1 = uVar17;
    }
    plVar2 = (long *)(param_1 + 0x28 + uVar16 * 0x10);
    plVar3 = (long *)(param_3 + 0x18 + uVar16 * 0x10);
    do {
      uVar10 = uVar16;
      plVar12 = plVar3;
      plVar11 = plVar2;
      if (uVar17 == uVar10) {
        uVar16 = 0;
        uVar17 = *(ulong *)(puVar6 + 0x10);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (uVar17 != uVar16) {
          if (*(ulong *)(puVar6 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101dcae54);
            (*pcVar4)();
          }
          lVar13 = *(long *)(puVar6 + uVar16 * 8 + 0x20);
          uVar16 = uVar16 + 1;
          if (lVar13 != 0) {
            func_0x000107c61174();
            puVar7 = puVar8;
            func_0x000107c61550();
            if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
               (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar8 >> 0x3e == 0) {
                puVar5 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar8) {
                  puVar5 = puVar8;
                }
                func_0x000107c60480(puVar5);
              }
              puVar7 = (undefined *)0x0;
              FUN_101d72504(0,puVar5 + 1,1,puVar8);
            }
            uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar10 + 0x10);
            puVar8 = puVar7;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
              FUN_101d72504(puVar8,uVar1 + 1,1,puVar7);
              uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
            *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar13;
          }
        }
        func_0x000107c6142c(puVar6);
        puVar6 = PTR_PTR_1126d84c0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar9 = 0;
        FUN_101dcae7c(0,0x112e29160,&PTR_PTR_1126e0da8);
        puVar7 = puVar8;
        func_0x000107c5fc48(puVar8,uVar9);
        func_0x000107c6142c(puVar8);
        puVar8 = puVar6;
        func_0x000107c545dc();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar7);
        if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101dcae60);
          (*pcVar4)();
        }
        puVar6 = puVar8;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        if (puVar6 != (undefined *)0x0) {
          return puVar6;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101dcae64);
        (*pcVar4)();
      }
      if (uVar1 == uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101dcae50);
        (*pcVar4)();
      }
      lVar13 = *plVar11;
      uVar16 = uVar10 + 1;
      plVar3 = plVar12 + 2;
      plVar2 = plVar11 + 2;
    } while (lVar13 == 0);
    lVar14 = plVar11[-1];
    puVar8 = PTR_PTR_1126d8280;
    func_0x000107c610f8();
    func_0x000107c61434(lVar13);
    func_0x000107c453e4();
    func_0x000107c5fadc(lVar14,lVar13);
    puVar7 = puVar8;
    func_0x000107c545ec();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar14);
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101dcae6c);
      (*pcVar4)();
    }
    puVar8 = puVar7;
    func_0x000107c58f60();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101dcae68);
      (*pcVar4)();
    }
    if (*(long *)(param_2 + 0x10) <= (long)uVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101dcae58);
      (*pcVar4)();
    }
    puVar7 = puVar8;
    func_0x000107c564c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101dcae74);
      (*pcVar4)();
    }
    if (*(long *)(param_3 + 0x10) <= (long)uVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101dcae5c);
      (*pcVar4)();
    }
    lVar14 = *plVar3;
    if (lVar14 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = plVar12[1];
      func_0x000107c61434(lVar14);
      func_0x000107c5fadc(lVar15,lVar14);
      func_0x000107c6142c(lVar14);
    }
    puVar8 = puVar7;
    func_0x000107c547f8();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar15);
    if (puVar8 == (undefined *)0x0) break;
    puVar7 = puVar8;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    func_0x000107c6142c(lVar13);
    func_0x000107c61170(puVar8);
    puVar8 = puVar6;
    func_0x000107c61558();
    puVar5 = puVar6;
    if (((ulong)puVar8 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      FUN_101dc9674(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_101dc9674(puVar6,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(undefined **)(puVar6 + uVar1 * 8 + 0x20) = puVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101dcae70);
  (*pcVar4)();
}



/* Entry: 101dcae74; end: 101dcae7b;  */

void FUN_101dcae74(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1[8] == '\x01') {
    FUN_101dc9a30();
    puVar2 = &UNK_1104859e0;
    func_0x000107c613f8(&UNK_1104859e0,param_1,0,0);
    *param_1 = 2;
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar1,uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)
            (uVar1,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101dcae7c; end: 101dcaebb;  */

void FUN_101dcae7c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101dcaebc; end: 101dcaf6f;  */

void FUN_101dcaebc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dcaf70; end: 101dcb0bb;  */

void FUN_101dcaf70(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x22;
  ulong uVar11;
  ulong uVar12;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  lVar4 = *(long *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c5eea0(uVar3);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101dcb0bc;
  lVar7 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar7,1);
  func_0x0001000d224c(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar6 = *(long *)(unaff_x22 + 0x70);
  func_0x0001000a8868(unaff_x22 + 0x50,uVar8);
  (**(code **)(lVar6 + 8))(0x4024000000000000,uVar8,lVar6);
  (**(code **)(lVar2 + 0x10))(uVar1,uVar3,uVar5);
  uVar10 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar11 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  uVar12 = lVar4 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar9 = &UNK_110485ad8;
  func_0x000107c613fc(&UNK_110485ad8,uVar12 + 0x10,uVar10 | 7);
  (**(code **)(lVar2 + 0x20))(puVar9 + uVar11,uVar1,uVar5);
  *(long *)(puVar9 + uVar12) = lVar7;
  *(undefined8 *)(puVar9 + uVar12 + 8) = 0x4024000000000000;
  func_0x00010075a04c(0,1,FUN_101dcb2f0,puVar9);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar8);
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101dcb0bc; end: 101dcb11f;  */

void FUN_101dcb0bc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xa8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101dcb120;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101dcb170;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dcb120; end: 101dcb16f;  */

void FUN_101dcb120(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101dcb16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dcb170; end: 101dcb1bf;  */

void FUN_101dcb170(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101dcb1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dcb1c0; end: 101dcb2ef;  */

void FUN_101dcb1c0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long lVar7;
  double dVar8;
  
  lVar2 = 0;
  dVar8 = param_1;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  cVar1 = *(char *)(param_2 + 8);
  func_0x000107c5eea0(puVar3);
  func_0x000107c5ee68(param_3);
  (**(code **)(lVar7 + 8))(puVar3,lVar2);
  if (cVar1 == '\x01') {
    FUN_101dc9a30();
    puVar4 = &UNK_1104859e0;
    func_0x000107c613f8(&UNK_1104859e0,puVar3,0,0);
    if (param_1 <= dVar8) {
      *puVar3 = 1;
    }
    else {
      *puVar3 = 0;
    }
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar6 = puVar4;
    func_0x000107c61454(param_4,uVar5);
  }
  else {
    func_0x000107c61450(param_4);
  }
  return;
}



/* Entry: 101dcb2f0; end: 101dcb34b;  */

void FUN_101dcb2f0(long param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  double dVar11;
  double dVar12;
  
  lVar5 = 0;
  func_0x000107c5eea4();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar9 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  uVar7 = *(undefined8 *)(unaff_x20 + uVar8);
  dVar12 = *(double *)(unaff_x20 + (uVar8 + 0xf & 0xffffffffffffff8));
  lVar5 = 0;
  dVar11 = dVar12;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  cVar1 = *(char *)(param_1 + 8);
  func_0x000107c5eea0(puVar2);
  func_0x000107c5ee68(unaff_x20 + uVar9);
  (**(code **)(lVar10 + 8))(puVar2,lVar5);
  if (cVar1 == '\x01') {
    FUN_101dc9a30();
    puVar3 = &UNK_1104859e0;
    func_0x000107c613f8(&UNK_1104859e0,puVar2,0,0);
    if (dVar12 <= dVar11) {
      *puVar2 = 1;
    }
    else {
      *puVar2 = 0;
    }
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar6 = puVar3;
    func_0x000107c61454(uVar7,uVar4);
  }
  else {
    func_0x000107c61450(uVar7);
  }
  return;
}



/* Entry: 101dcb34c; end: 101dcb397;  */

void FUN_101dcb34c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dcb398; end: 101dcb5a7;  */

undefined8 FUN_101dcb398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_58;
  
  if (((uint)param_3 & 0xff) == 1) {
    func_0x0001000d224c(&uStack_58);
    uVar2 = uStack_58;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar3 = &UNK_110485c00;
    func_0x000107c613fc(&UNK_110485c00,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar4;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    func_0x0001000285a8(0x112d51380,&UNK_10d918030);
    func_0x000101dcbee8(param_1,param_2,1);
    func_0x000107c6157c(uVar4);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar1 = uVar2;
    func_0x0001048893f8(uVar2,1,0x101dcbedc,puVar3,uVar4,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(puVar3);
    func_0x0001000d224c(&uStack_58);
    uVar2 = 0x112d51310;
    func_0x0001000285a8(0x112d51310,&UNK_10d917fc0);
    uVar4 = uStack_58;
    func_0x000100775264(uStack_58,1,FUN_101dcb5a8,0,uVar2);
    func_0x000107c61574(uVar1);
    func_0x000107c61170(uStack_58);
  }
  else {
    func_0x0001000285a8(0x112e2d918,&UNK_10da16758);
    func_0x0001000d224c(&uStack_58);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar3 = &UNK_110485c28;
    func_0x000107c613fc(&UNK_110485c28,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar4;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    func_0x000107c6157c(uVar4);
    func_0x000101dcbee8(param_1,param_2,param_3);
    FUN_101dcbb7c();
    uVar4 = uStack_58;
    func_0x0001048893f8(uStack_58,1,FUN_101dcbf1c,puVar3,&UNK_1106c3898,param_1);
    func_0x000107c61170(uStack_58);
    func_0x000107c61574(puVar3);
  }
  return uVar4;
}



/* Entry: 101dcb5a8; end: 101dcb623;  */

void FUN_101dcb5a8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_2;
  plVar1 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    func_0x000100fb0a4c();
    func_0x000107c613fc();
    param_2[3] = 3;
    param_2[2] = 1;
    param_2[4] = lVar2;
    plVar1 = param_2;
  }
  *param_1 = plVar1;
  func_0x000107c615f0(lVar2);
  return;
}



/* Entry: 101dcb624; end: 101dcb767;  */

undefined8 FUN_101dcb624(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar4 = uStack_48;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112e2d908,&UNK_10da16738);
  func_0x000107c6157c(uVar5);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar2 = uVar4;
  func_0x0001048893f8(uVar4,1,0x101dcbf28,uVar5,uVar1,PTR___ss5ErrorWS_11034ee10);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar5);
  func_0x0001000d224c(&uStack_48);
  puVar3 = &UNK_110485bd8;
  func_0x000107c613fc(&UNK_110485bd8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  uVar1 = 0x112d511e8;
  func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
  uVar4 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101dcbc8c,puVar3,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar3);
  return uVar4;
}



/* Entry: 101dcb768; end: 101dcb7f7;  */

void FUN_101dcb768(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af4c0;
  func_0x000107c61168();
  func_0x000107c4325c();
  func_0x000107c61180();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_101dcbb7c();
    func_0x000107c613f8(&UNK_1106c3898,puVar1,0,0);
    *puVar1 = 2;
    func_0x000107c61654();
  }
  else {
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 101dcb7f8; end: 101dcba2b;  */

undefined8 FUN_101dcb7f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar4 = uStack_48;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112e2d908,&UNK_10da16738);
  func_0x000107c6157c(uVar5);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar2 = uVar4;
  func_0x0001048893f8(uVar4,1,FUN_101dcbc28,uVar5,uVar1,PTR___ss5ErrorWS_11034ee10);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar5);
  func_0x0001000d224c(&uStack_48);
  puVar3 = &UNK_110485bb0;
  func_0x000107c613fc(&UNK_110485bb0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  uVar1 = 0x112e2d910;
  func_0x0001000285a8(0x112e2d910,&UNK_10da16748);
  uVar4 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101dcbc30,puVar3,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar3);
  return uVar4;
}



/* Entry: 101dcba2c; end: 101dcba8b;  */

void FUN_101dcba2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  if (puVar1 == (undefined1 *)0x0) {
    FUN_101dcbb7c();
    func_0x000107c613f8(&UNK_1106c3898,puVar1,0,0);
    *puVar1 = 3;
    func_0x000107c61654();
  }
  else {
    *param_1 = puVar1;
    func_0x000107c615f0();
  }
  return;
}



/* Entry: 101dcba8c; end: 101dcbb7b;  */

void FUN_101dcba8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  func_0x000107c4e150();
  func_0x000107c61180();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_101dcbb7c();
    func_0x000107c613f8(&UNK_1106c3898,puVar1,0,0);
    *puVar1 = 4;
    func_0x000107c61654();
  }
  else {
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 101dcbb7c; end: 101dcbbbb;  */

void FUN_101dcbb7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2d900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc431d8;
  func_0x000107c61520(&UNK_10dc431d8,&UNK_1106c3898);
  puRam0000000112e2d900 = puVar1;
  return;
}



/* Entry: 101dcbbbc; end: 101dcbc27;  */

void FUN_101dcbbbc(undefined8 *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puStack_28;
  
  func_0x0001000d224c(&puStack_28);
  bVar1 = puStack_28 == (undefined1 *)0x0;
  if (bVar1) {
    FUN_101dcbb7c();
    puVar2 = &UNK_1106c3898;
    func_0x000107c613f8(&UNK_1106c3898,puStack_28,0,0);
    *puStack_28 = 0;
    puStack_28 = puVar2;
  }
  *param_1 = puStack_28;
  *(bool *)(param_1 + 1) = bVar1;
  return;
}



/* Entry: 101dcbc28; end: 101dcbc2f;  */

void FUN_101dcbc28(undefined8 *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puStack_28;
  
  func_0x0001000d224c(&puStack_28);
  bVar1 = puStack_28 == (undefined1 *)0x0;
  if (bVar1) {
    FUN_101dcbb7c();
    puVar2 = &UNK_1106c3898;
    func_0x000107c613f8(&UNK_1106c3898,puStack_28,0,0);
    *puStack_28 = 0;
    puStack_28 = puVar2;
  }
  *param_1 = puStack_28;
  *(bool *)(param_1 + 1) = bVar1;
  return;
}



/* Entry: 101dcbc30; end: 101dcbc8b;  */

void FUN_101dcbc30(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc7b8;
  func_0x000107c61168();
  func_0x000107c430f0();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 101dcbc8c; end: 101dcbca3;  */

void FUN_101dcbc8c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dcb768(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101dcbca4; end: 101dcbedb;  */

void FUN_101dcbca4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    puVar1 = PTR_PTR_1126af4d0;
    func_0x000107c61168();
    lVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = param_3;
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    func_0x000107c61434(param_4);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar2);
    func_0x000107c43108();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c61170(lStack_48);
      *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else {
      puVar4 = puVar1;
      func_0x000107c5fc54(puVar1,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61170(puVar1);
      puVar1 = puVar4;
      func_0x000100fb083c();
      func_0x000107c6142c(puVar4);
      func_0x000107c61170(lStack_48);
      if (puVar1 == (undefined *)0x0) {
        *param_1 = 1;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        *param_1 = puVar1;
        *(undefined1 *)(param_1 + 1) = 0;
      }
    }
  }
  return;
}



/* Entry: 101dcbedc; end: 101dcbeef;  */

void FUN_101dcbedc(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_48;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    FUN_101dcbb7c();
    puVar3 = &UNK_1106c3898;
    func_0x000107c613f8(&UNK_1106c3898,puVar1,0,0);
    *puVar1 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126af4d0;
    func_0x000107c61168();
    func_0x000107c5fadc(uVar2,uVar4);
    func_0x000107c430f4();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lStack_48);
  }
  *param_1 = puVar3;
  *(bool *)(param_1 + 1) = lStack_48 == 0;
  return;
}



/* Entry: 101dcbef0; end: 101dcbf1b;  */

void FUN_101dcbef0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101dcbf1c; end: 101dcbf2b;  */

void FUN_101dcbf1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10));
  if (lStack_48 == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    puVar2 = PTR_PTR_1126af4d0;
    func_0x000107c61168();
    lVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = uVar1;
    *(undefined8 *)(lVar3 + 0x28) = uVar6;
    func_0x000107c61434(uVar6);
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar3);
    func_0x000107c43108();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c61170(lStack_48);
      *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else {
      puVar5 = puVar2;
      func_0x000107c5fc54(puVar2,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61170(puVar2);
      puVar2 = puVar5;
      func_0x000100fb083c();
      func_0x000107c6142c(puVar5);
      func_0x000107c61170(lStack_48);
      if (puVar2 == (undefined *)0x0) {
        *param_1 = 1;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        *param_1 = puVar2;
        *(undefined1 *)(param_1 + 1) = 0;
      }
    }
  }
  return;
}



/* Entry: 101dcbf2c; end: 101dcc023;  */

long FUN_101dcbf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110485c58;
  func_0x000107c613fc(&UNK_110485c58,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x0001000285a8(0x112e2d920,&UNK_10da16760);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  pcVar2 = FUN_101dcc214;
  func_0x0001000bdd8c(FUN_101dcc214,puVar1);
  uVar3 = 0;
  func_0x00010028b09c(0);
  func_0x000107c610f8();
  func_0x000103a6e0b0(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101dcc024; end: 101dcc113;  */

void FUN_101dcc024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_110485c80;
  func_0x000107c613fc(&UNK_110485c80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x0001000285a8(0x112e2d920,&UNK_10da16760);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar2 = 0x101dcc2d8;
  func_0x0001000bdd8c(0x101dcc2d8,puVar1);
  uVar3 = 0;
  func_0x00010028b09c(0);
  func_0x000107c610f8();
  func_0x000103a6e0b0(uVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  return;
}



/* Entry: 101dcc114; end: 101dcc213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dcc114(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112d51878,&UNK_10d9186c0);
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  func_0x0001000d224c(auStack_68);
  puVar2 = auStack_68;
  func_0x0001000a8868(puVar2,uStack_50);
  uVar3 = 2;
  func_0x00010043c5c0(2,0xf,1,uStack_50,uStack_48,puVar2);
  lVar4 = 0;
  func_0x000101dcb378();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  func_0x0001000834e4(auStack_68);
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110485b78;
  *param_1 = lVar5;
  return;
}



/* Entry: 101dcc214; end: 101dcc22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dcc214(long *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112d51878,&UNK_10d9186c0);
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000d224c(auStack_68);
  puVar2 = auStack_68;
  func_0x0001000a8868(puVar2,uStack_50);
  uVar3 = 2;
  func_0x00010043c5c0(2,0xf,1,uStack_50,uStack_48,puVar2);
  lVar4 = 0;
  func_0x000101dcb378();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  func_0x0001000834e4(auStack_68);
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110485b78;
  *param_1 = lVar5;
  return;
}



/* Entry: 101dcc22c; end: 101dcc2cb;  */

void FUN_101dcc22c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dcc2cc; end: 101dcc2db;  */

void FUN_101dcc2cc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101dcc2dc; end: 101dcc6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dcc2dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  uVar9 = *(undefined8 *)(param_2 + _DAT_112e2dbf0);
  func_0x0001000285a8(0x112e29758,&UNK_10da11d00);
  func_0x000107c6157c(uVar9);
  uVar1 = param_3;
  func_0x000107c41260();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112e28960,&UNK_10da10ca0);
  uVar1 = param_3;
  func_0x000107c41258();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000d224c(auStack_88);
  puVar4 = auStack_88;
  func_0x0001000a8868(puVar4,uStack_70);
  uVar5 = 3;
  func_0x00010043c5c0(3,0xd,0,uStack_70,uStack_68,puVar4);
  func_0x0001000834e4(auStack_88);
  func_0x0001000285a8(0x112e2d9f8,&UNK_10da167a0);
  uVar1 = param_5;
  func_0x000107c5b300();
  func_0x000107c61180();
  uVar6 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  puVar7 = &UNK_110485d40;
  func_0x000107c613fc(&UNK_110485d40,0x38,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar6;
  *(undefined8 *)(puVar7 + 0x18) = uVar9;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = uVar3;
  *(undefined8 *)(puVar7 + 0x30) = uVar5;
  func_0x0001000285a8(0x112e2da00,&UNK_10da167a8);
  func_0x000107c613fc();
  pcVar8 = FUN_101dcc790;
  func_0x0001000bdd8c(FUN_101dcc790,puVar7);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  *(code **)(unaff_x20 + 0x10) = pcVar8;
  return;
}



/* Entry: 101dcc6f0; end: 101dcc78f;  */

/* WARNING: Possible PIC construction at 0x000101dcc758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dcc768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dcc75c) */
/* WARNING: Removing unreachable block (ram,0x000101dcc76c) */

void FUN_101dcc6f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000101dcc95c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110485d98;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101dcc790; end: 101dcc793;  */

/* WARNING: Possible PIC construction at 0x000101dcc758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dcc768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dcc75c) */
/* WARNING: Removing unreachable block (ram,0x000101dcc76c) */

void FUN_101dcc790(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = 0;
  func_0x000101dcc95c();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  *(undefined8 *)(lVar6 + 0x30) = uVar7;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_110485d98;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101dcc794; end: 101dcc7d7;  */

void FUN_101dcc794(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101dcc7d8; end: 101dcc7e7;  */

/* WARNING: Possible PIC construction at 0x000101dcc758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dcc768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dcc75c) */
/* WARNING: Removing unreachable block (ram,0x000101dcc76c) */

void FUN_101dcc7d8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = 0;
  func_0x000101dcc95c();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  *(undefined8 *)(lVar6 + 0x30) = uVar7;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_110485d98;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101dcc7e8; end: 101dcc81f;  */

void FUN_101dcc7e8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001002c1cbc(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000103a6e1b8();
  return;
}



/* Entry: 101dcc820; end: 101dcc827;  */

void FUN_101dcc820(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101dcc828; end: 101dcc8c7;  */

void FUN_101dcc828(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dcc8c8; end: 101dcc913;  */

void FUN_101dcc8c8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001002c1cbc(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103a6e1b8();
  *param_1 = uVar1;
  return;
}



/* Entry: 101dcc914; end: 101dcc917;  */

/* WARNING: Possible PIC construction at 0x000101dcc758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dcc768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dcc75c) */
/* WARNING: Removing unreachable block (ram,0x000101dcc76c) */

void FUN_101dcc914(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = 0;
  func_0x000101dcc95c();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  *(undefined8 *)(lVar6 + 0x30) = uVar7;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_110485d98;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101dcc918; end: 101dcc97b;  */

void FUN_101dcc918(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dcc97c; end: 101dccb53;  */

undefined8 FUN_101dcc97c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112e2db98,&UNK_10da16858);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar2 = &UNK_110485db8;
  func_0x000107c613fc(&UNK_110485db8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(long *)(puVar2 + 0x18) = lVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  uVar3 = 0;
  FUN_101dcce6c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(FUN_101dcce48,puVar2,uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(puVar2);
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(lVar1);
  func_0x0001000d224c(&uStack_68);
  puVar2 = &UNK_110485de0;
  func_0x000107c613fc(&UNK_110485de0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar4 = &UNK_110485e08;
  func_0x000107c613fc(&UNK_110485e08,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  uVar3 = 0;
  FUN_101dcce6c(0,0x112e28b08,&PTR_PTR_1126bc7d8);
  func_0x000107c61174(param_3);
  uVar5 = uStack_68;
  func_0x0001048898b8(uStack_68,1,FUN_101dcce54,puVar4,uVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar4);
  return uVar5;
}



/* Entry: 101dccb54; end: 101dccbdb;  */

undefined8 FUN_101dccb54(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_101dccbdc(uVar1,param_3);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 101dccbdc; end: 101dccd0b;  */

undefined8 FUN_101dccbdc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e2db98,&UNK_10da16858);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000d224c(&uStack_58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_110485e30;
  func_0x000107c613fc(&UNK_110485e30,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(long *)(puVar2 + 0x18) = lVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  uVar3 = 0;
  FUN_101dcce6c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(lVar1);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(uVar4);
  func_0x00010090569c(FUN_101dcd028,puVar2,uVar3);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(lVar1);
  return uVar3;
}



/* Entry: 101dccd0c; end: 101dccd2b;  */

void FUN_101dccd0c(void)

{
  FUN_101dcc97c();
  return;
}



/* Entry: 101dccd2c; end: 101dcce47;  */

void FUN_101dccd2c(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    FUN_101dcd038();
    puVar2 = &UNK_1106c3a08;
    func_0x000107c613f8(&UNK_1106c3a08,param_1,0,0);
    *param_1 = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar2);
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
    lVar1 = lStack_48;
    func_0x000107c431c0();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 == 0) {
      FUN_101dcd038();
      puVar2 = &UNK_1106c3a08;
      func_0x000107c613f8(&UNK_1106c3a08,param_3,0,0);
      *param_3 = 2;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar2);
    }
    else {
      func_0x000100b60084(&lStack_48);
      func_0x000107c61170(lVar1);
    }
    func_0x000107c615e8(lStack_48);
  }
  return;
}



/* Entry: 101dcce48; end: 101dcce53;  */

void FUN_101dcce48(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lStack_48;
  
  puVar2 = *(undefined1 **)(unaff_x20 + 0x10);
  puVar3 = *(undefined1 **)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(&lStack_48,puVar2,*(undefined8 *)(unaff_x20 + 0x18));
  if (lStack_48 == 0) {
    FUN_101dcd038();
    puVar5 = &UNK_1106c3a08;
    func_0x000107c613f8(&UNK_1106c3a08,puVar2,0,0);
    *puVar2 = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar5);
  }
  else {
    func_0x000107c5fadc(puVar3,uVar1);
    lVar4 = lStack_48;
    func_0x000107c431c0();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar4 == 0) {
      FUN_101dcd038();
      puVar5 = &UNK_1106c3a08;
      func_0x000107c613f8(&UNK_1106c3a08,puVar3,0,0);
      *puVar3 = 2;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar5);
    }
    else {
      func_0x000100b60084(&lStack_48);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c615e8(lStack_48);
  }
  return;
}



/* Entry: 101dcce54; end: 101dcce6b;  */

void FUN_101dcce54(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dccb54(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101dcce6c; end: 101dcceab;  */

void FUN_101dcce6c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101dcceac; end: 101dcd027;  */

void FUN_101dcceac(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&puStack_88);
  puVar4 = puStack_88;
  if (puStack_88 == (undefined *)0x0) {
    FUN_101dcd038();
    puVar4 = &UNK_1106c3a08;
    func_0x000107c613f8(&UNK_1106c3a08,param_1,0,0);
    *param_1 = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar4);
  }
  else {
    func_0x000107c43c78(param_3);
    func_0x000107c61180();
    func_0x0001000d224c(&uStack_58);
    uVar2 = 0;
    FUN_101dcce6c(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000100bcb214();
    func_0x000107c61170(uStack_58);
    pcStack_68 = FUN_101dcd148;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_101dcd150;
    puStack_70 = &UNK_110485e48;
    ppuVar3 = &puStack_88;
    uStack_60 = param_2;
    func_0x000107c60bc4(ppuVar3);
    uVar1 = uStack_60;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
    func_0x000107c432b0(puVar4);
    func_0x000107c615e8(puVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(param_3);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101dcd028; end: 101dcd037;  */

void FUN_101dcd028(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = *(undefined1 **)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(&puStack_88);
  puVar7 = puStack_88;
  if (puStack_88 == (undefined *)0x0) {
    FUN_101dcd038();
    puVar7 = &UNK_1106c3a08;
    func_0x000107c613f8(&UNK_1106c3a08,puVar3,0,0);
    *puVar3 = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar7);
  }
  else {
    func_0x000107c43c78(uVar4);
    func_0x000107c61180();
    func_0x0001000d224c(&uStack_58);
    uVar5 = 0;
    FUN_101dcce6c(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000100bcb214();
    func_0x000107c61170(uStack_58);
    pcStack_68 = FUN_101dcd148;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_101dcd150;
    puStack_70 = &UNK_110485e48;
    ppuVar6 = &puStack_88;
    uStack_60 = uVar1;
    func_0x000107c60bc4(ppuVar6);
    uVar2 = uStack_60;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c432b0(puVar7);
    func_0x000107c615e8(puVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 101dcd038; end: 101dcd077;  */

void FUN_101dcd038(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2dba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc432f8;
  func_0x000107c61520(&UNK_10dc432f8,&UNK_1106c3a08);
  puRam0000000112e2dba0 = puVar1;
  return;
}



/* Entry: 101dcd078; end: 101dcd147;  */

void FUN_101dcd078(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  if (param_1 == (undefined *)0x0) {
    if (param_2 != 0) {
      puVar1 = PTR_PTR_1126bc7d8;
      func_0x000107c610f8();
      func_0x000107c615f0(param_2);
      func_0x000107c46ae0();
      puStack_38 = puVar1;
      func_0x000100b60084(&puStack_38);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(param_2);
      return;
    }
    FUN_101dcd038();
    puVar1 = &UNK_1106c3a08;
    func_0x000107c613f8(&UNK_1106c3a08,param_1,0,0);
    *param_1 = 3;
  }
  else {
    func_0x000107c614b0();
    puVar1 = param_1;
  }
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101dcd148; end: 101dcd14f;  */

void FUN_101dcd148(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  if (param_1 == (undefined *)0x0) {
    if (param_2 != 0) {
      puVar1 = PTR_PTR_1126bc7d8;
      func_0x000107c610f8();
      func_0x000107c615f0(param_2);
      func_0x000107c46ae0();
      puStack_38 = puVar1;
      func_0x000100b60084(&puStack_38);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(param_2);
      return;
    }
    FUN_101dcd038();
    puVar1 = &UNK_1106c3a08;
    func_0x000107c613f8(&UNK_1106c3a08,param_1,0,0);
    *param_1 = 3;
  }
  else {
    func_0x000107c614b0();
    puVar1 = param_1;
  }
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101dcd150; end: 101dcd1c3;  */

void FUN_101dcd150(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 101dcd1c4; end: 101dcd24b;  */

void FUN_101dcd1c4(long param_1,long param_2)

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



/* Entry: 101dcd24c; end: 101dcd2f7;  */

void FUN_101dcd24c(void)

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



/* Entry: 101dcd2f8; end: 101dcd2fb;  */

void FUN_101dcd2f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2dbe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da16940;
  func_0x000107c61520(&UNK_10da16940,&UNK_110485fc8);
  puRam0000000112e2dbe8 = puVar1;
  return;
}



/* Entry: 101dcd2fc; end: 101dcd33b;  */

void FUN_101dcd2fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2dbe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da16940;
  func_0x000107c61520(&UNK_10da16940,&UNK_110485fc8);
  puRam0000000112e2dbe8 = puVar1;
  return;
}



/* Entry: 101dcd33c; end: 101dcd4af;  */

void FUN_101dcd33c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101dcd4b0; end: 101dcd547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dcd4b0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e2dbf0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101dcd548; end: 101dcd5a7; -[_TtC26MemoriesNetworkingServices26MemoriesNetworkingServices init] */

void FUN_101dcd548(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesNetworkingServices.MemoriesNetworkingServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dcd574);
  (*pcVar1)();
}



/* Entry: 101dcd5a8; end: 101dcd5b7; -[_TtC26MemoriesNetworkingServices26MemoriesNetworkingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dcd5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2dbf0));
  return;
}



/* Entry: 101dcd5b8; end: 101dcd7a3;  */

void FUN_101dcd5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c4d600();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uVar3 = param_4;
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar4 = param_5;
  func_0x000107c51600();
  func_0x000107c61180();
  puVar5 = &UNK_1104860d0;
  func_0x000107c613fc(&UNK_1104860d0,0x40,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar3;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  func_0x0001000285a8(0x112e2d9f8,&UNK_10da167a0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  pcVar6 = FUN_101dcd85c;
  func_0x0001000bdd8c(FUN_101dcd85c,puVar5);
  uVar7 = 0;
  func_0x0001002aedf8(0);
  func_0x000107c610f8();
  func_0x0001006f68c4(pcVar6,uVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(code **)(unaff_x20 + 0x10) = pcVar6;
  return;
}



/* Entry: 101dcd7a4; end: 101dcd85b;  */

void FUN_101dcd7a4(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long in_x4;
  undefined8 in_x5;
  
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (in_x4 != 0) {
    func_0x000107c4d80c(in_x5);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126a9590;
    func_0x000107c610f8();
    func_0x000107c47a9c();
    func_0x000107c615e8(in_x4);
    func_0x000107c61170(in_x5);
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dcd85c);
  (*pcVar1)();
}



/* Entry: 101dcd85c; end: 101dcd85f;  */

void FUN_101dcd85c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4d80c(uVar3);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126a9590;
    func_0x000107c610f8();
    func_0x000107c47a9c();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dcd85c);
  (*pcVar1)();
}



/* Entry: 101dcd860; end: 101dcd8ab;  */

void FUN_101dcd860(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


