/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10117871c; end: 101178787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117871c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + _DAT_112d61cf8) = param_1;
    func_0x000107c61170();
  }
  func_0x000107c61450(param_3);
  return;
}



/* Entry: 101178788; end: 10117896f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101178788(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d61ca0);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar1 = _DAT_112d61ce8;
  if (lVar3 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112d61ce8) != 0) {
      func_0x000107c5d320();
    }
    uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d61c98) + _DAT_112ff48b8);
    FUN_101179e90(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar9 + 0x68))
              (lVar8,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,lVar2);
    func_0x000107c615f0(uVar7);
    lVar4 = lVar8;
    func_0x000107c5fff0(lVar8);
    (**(code **)(lVar9 + 8))(lVar8,lVar2);
    puVar5 = &UNK_11038a1b8;
    func_0x000107c613fc(&UNK_11038a1b8,0x18,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    pcStack_70 = FUN_101179db8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_101178bac;
    puStack_78 = &UNK_11038a1d0;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    lVar2 = lVar3;
    func_0x000107c4da2c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(uVar7);
    func_0x000107c61170(lVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615e8(uVar7);
  }
  return;
}



/* Entry: 101178970; end: 101178a97;  */

void FUN_101178970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    uVar1 = 0x112d511e8;
    func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
    puVar2 = &uStack_58;
    func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      puVar3 = &UNK_11038a140;
      func_0x000107c613fc(&UNK_11038a140,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_3);
      puVar4 = &UNK_11038a208;
      func_0x000107c613fc(&UNK_11038a208,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = uStack_58;
      func_0x000107c615f0(uStack_58);
      uVar1 = 0x112d518a8;
      func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
      uVar5 = 0xa3;
      func_0x0001001ca524(0xa3,0,0x48,4,0,0,&UNK_10d927ce0,puVar4,uVar1);
      func_0x000107c615e8(uStack_58);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar5);
    }
  }
  return;
}



/* Entry: 101178a98; end: 101178ab3;  */

void FUN_101178a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101178ab4,0,0);
  return;
}



/* Entry: 101178ab4; end: 101178b9b;  */

void FUN_101178ab4(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x40) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x100;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x101178b4c;
    plVar1[0x19] = *(long *)(unaff_x22 + 0x38);
    plVar1[0x1a] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101178c6c,0,0);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x000101178b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101178b9c; end: 101178bab;  */

void FUN_101178b9c(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x000101178ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101178bac; end: 101178c53;  */

void FUN_101178bac(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long alStack_50 [4];
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    lVar3 = 0;
    alStack_50[1] = 0;
    alStack_50[2] = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c614f0();
  }
  alStack_50[0] = param_2;
  alStack_50[3] = lVar3;
  if (param_3 != 0) {
    func_0x000107c5fe10(param_3,PTR___ss11AnyHashableVN_11034e448,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)(alStack_50,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(param_3);
  func_0x00010006e7f4(alStack_50);
  return;
}



/* Entry: 101178c54; end: 101178c6b;  */

void FUN_101178c54(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101178c6c,0,0);
  return;
}



/* Entry: 101178c6c; end: 101178f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101178c6c(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long unaff_x22;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  
  uVar4 = *(ulong *)(*(long *)(unaff_x22 + 0xd0) + _DAT_112d61ca0);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(ulong *)(unaff_x22 + 0xd8) = uVar4;
  if (uVar4 != 0) {
    uVar12 = uVar4;
    func_0x000107c430f8();
    func_0x000107c61180();
    if (uVar12 != 0) {
      uVar4 = *(ulong *)(unaff_x22 + 200);
      lVar1 = *(long *)(unaff_x22 + 0xd0);
      uVar5 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      uVar6 = uVar12;
      func_0x000107c5fc54(uVar12,uVar5);
      func_0x000107c61170(uVar12);
      func_0x0001058b552c(uVar4,*(undefined8 *)(lVar1 + _DAT_112d61ca8),
                          *(undefined8 *)(lVar1 + _DAT_112d61cb0));
      *(ulong *)(unaff_x22 + 0xe0) = uVar4;
      uVar12 = uVar6 & 0xffffffffffffff8;
      if (uVar6 >> 0x3e == 0) {
        uVar9 = *(ulong *)(uVar12 + 0x10);
        puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar9 = uVar12;
        if (0x7fffffffffffffff < uVar6) {
          uVar9 = uVar6;
        }
        func_0x000107c60480();
        puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
      if (uVar9 != 0) {
        uVar11 = 0;
        do {
          while( true ) {
            if ((uVar6 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101178e6c);
                (*pcVar3)();
              }
              uVar10 = *(ulong *)(uVar6 + uVar11 * 8 + 0x20);
              func_0x000107c615f0(uVar10);
            }
            else {
              uVar10 = uVar11;
              FUN_100fb0ba0(uVar11,uVar6);
            }
            if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101178e68);
              (*pcVar3)();
            }
            uVar13 = uVar11 + 1;
            uVar7 = uVar10;
            func_0x000107c3fbb0();
            if ((int)uVar7 == 0) break;
            puVar8 = puVar2;
            func_0x000107c61558();
            if (((ulong)puVar8 & 1) == 0) {
              func_0x000100fa7f24(0,*(long *)(puVar2 + 0x10) + 1,1);
            }
            uVar11 = *(ulong *)(puVar2 + 0x10);
            if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar11) {
              func_0x000100fa7f24(1 < *(ulong *)(puVar2 + 0x18),uVar11 + 1,1);
            }
            *(ulong *)(puVar2 + 0x10) = uVar11 + 1;
            *(ulong *)(puVar2 + uVar11 * 8 + 0x20) = uVar10;
            uVar11 = uVar13;
            if (uVar13 == uVar9) goto LAB_101178e88;
          }
          func_0x000107c615e8(uVar10);
          uVar11 = uVar11 + 1;
        } while (uVar13 != uVar9);
      }
LAB_101178e88:
      func_0x000107c6142c(uVar6);
      if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
        puVar8 = puVar2;
        func_0x000107c60480();
      }
      else {
        puVar8 = *(undefined **)(puVar2 + 0x10);
      }
      *(undefined **)(unaff_x22 + 0xe8) = puVar8;
      func_0x000107c61574(puVar2);
      if (uVar4 == 0) {
        dVar14 = 0.0;
      }
      else {
        dVar14 = (double)(long)puVar8 / (double)uVar4;
      }
      *(double *)(unaff_x22 + 0xf0) = dVar14;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_101178f24;
      func_0x000107c61448(unaff_x22 + 0x10,0);
      FUN_1011784f0(dVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c615e8(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000101178e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101178f24; end: 101178f63;  */

void FUN_101178f24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101178f64,0,0);
  return;
}



/* Entry: 101178f64; end: 101179027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101178f64(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c61614(unaff_x22 + 0xb0,*(undefined8 *)(lVar4 + _DAT_112d61ce0));
  func_0x000107c61614(unaff_x22 + 0xb8,*(undefined8 *)(lVar4 + _DAT_112d61c98));
  func_0x000107c61614(unaff_x22 + 0xc0,lVar4);
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101179d78(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101179028,uVar2,uVar3);
  return;
}



/* Entry: 101179028; end: 10117920f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101179028(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c61428(unaff_x22 + 0xb0,unaff_x22 + 0x50,0,0);
  puVar1 = (ulong *)(unaff_x22 + 0xb0);
  func_0x000107c61618();
  if (puVar1 != (ulong *)0x0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x188))
              (*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000107c61170(puVar1);
  }
  if ((-1 < *(long *)(unaff_x22 + 0xe8)) &&
     (*(long *)(unaff_x22 + 0xe8) == *(long *)(unaff_x22 + 0xe0))) {
    func_0x000107c61428(unaff_x22 + 0xc0,unaff_x22 + 0x68,0,0);
    lVar2 = unaff_x22 + 0xc0;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar5 = *(long *)(lVar2 + _DAT_112d61ca0);
      func_0x000107c61174();
      func_0x000107c61170(lVar2);
      lVar2 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar2 != 0) {
        func_0x000107c4fd80(lVar2);
        func_0x000107c615e8(lVar2);
      }
    }
    lVar2 = unaff_x22 + 0xc0;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_101179240();
      func_0x000107c61170(lVar2);
    }
    if (*(long *)(unaff_x22 + 0xe0) != 0) {
      uVar3 = *(ulong *)(unaff_x22 + 200);
      func_0x000107c49eac();
      if ((uVar3 & 1) == 0) {
        func_0x000107c61428(unaff_x22 + 0xb8,unaff_x22 + 0x80,0,0);
        lVar2 = unaff_x22 + 0xb8;
        func_0x000107c61618();
        lVar5 = _DAT_112ff48d0;
        if (lVar2 != 0) {
          func_0x000107c61428(lVar2 + _DAT_112ff48d0,unaff_x22 + 0x98,0,0);
          lVar5 = lVar2 + lVar5;
          func_0x000107c61618();
          func_0x000107c61170(lVar2);
          if (lVar5 != 0) {
            func_0x000107c5bfe8(lVar5);
            func_0x000107c615e8(lVar5);
            func_0x000107c61610(unaff_x22 + 0xc0);
            func_0x000107c61610(unaff_x22 + 0xb8);
            func_0x000107c61610(unaff_x22 + 0xb0);
            pcVar4 = (code *)0x101179f98;
            goto LAB_1011791f8;
          }
        }
      }
    }
  }
  func_0x000107c61610(unaff_x22 + 0xc0);
  func_0x000107c61610(unaff_x22 + 0xb8);
  func_0x000107c61610(unaff_x22 + 0xb0);
  pcVar4 = FUN_101179210;
LAB_1011791f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 101179210; end: 10117923f;  */

void FUN_101179210(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010117923c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101179240; end: 101179393;  */

/* WARNING: Possible PIC construction at 0x0001011792e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101179378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011792e8) */
/* WARNING: Removing unreachable block (ram,0x00010117937c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101179240(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  FUN_101179888();
  func_0x000107c41864(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d61c98) + _DAT_112ff48a8));
  puVar1 = &UNK_11038a0c8;
  func_0x000107c613fc(&UNK_11038a0c8,0x18,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  func_0x000107c61174();
  func_0x0001001ca524(0xa3,0,0x48,4,0,0,&UNK_10d927ca0,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101179394; end: 1011793ab;  */

void FUN_101179394(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011793ac,0,0);
  return;
}



/* Entry: 1011793ac; end: 101179443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011793ac(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  FUN_101179ad8(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101179444;
                    /* WARNING: Could not recover jumptable at 0x000101179440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(0,0,uVar2,lVar3);
  return;
}



/* Entry: 101179444; end: 1011794bb;  */

void FUN_101179444(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10117948c,0,0);
  return;
}



/* Entry: 1011794bc; end: 1011794d3;  */

void FUN_1011794bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011794d4,0,0);
  return;
}



/* Entry: 1011794d4; end: 1011795b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011794d4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x98) + _DAT_112d61cb8);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1011795b4;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,1);
    uVar3 = 0x112d61d38;
    func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_10117968c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11038a108;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    func_0x000107c504d0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x90) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001011795b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011795b4; end: 101179647;  */

void FUN_1011795b4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xa8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = (code *)0x10117960c;
  }
  else {
    pcVar1 = FUN_101179648;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101179648; end: 10117968b;  */

void FUN_101179648(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61654();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101179688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10117968c; end: 101179717;  */

void FUN_10117968c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  FUN_101179ad8(puVar1,*(undefined8 *)(param_1 + 0x38));
  uVar4 = *puVar1;
  if (param_2 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar4,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(uVar4);
  return;
}



/* Entry: 101179718; end: 10117974b;  */

void FUN_101179718(void)

{
  FUN_101179888();
  FUN_101179968();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10117974c; end: 10117978f; -[_TtC43MemoriesClientGenStoryLoadingScreenWorkflow43MemoriesClientGenStoryLoadingScreenWorkflow dealloc] */

void FUN_10117974c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101179888();
  FUN_101179968();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101179790; end: 101179887; -[_TtC43MemoriesClientGenStoryLoadingScreenWorkflow43MemoriesClientGenStoryLoadingScreenWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010117981c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101179820) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101179790(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d61c98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d61ca0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d61ca8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d61cb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d61cb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d61cc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d61cc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d61cd0));
  return;
}



/* Entry: 101179888; end: 10117990f;  */

/* WARNING: Possible PIC construction at 0x0001011798e8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101179888(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112d61ce8;
  if (*(long *)(unaff_x20 + _DAT_112d61ce8) != 0) {
    func_0x000107c5d320();
  }
  lVar2 = _DAT_112d61d08;
  lVar4 = *(long *)(unaff_x20 + _DAT_112d61d08);
  if (lVar4 == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c615e8(uVar3);
    lVar4 = *(long *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
  }
  else {
    func_0x000107c6157c(lVar4);
    func_0x000107c5fd50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar4);
  return;
}



/* Entry: 101179910; end: 10117993b; -[_TtC43MemoriesClientGenStoryLoadingScreenWorkflow43MemoriesClientGenStoryLoadingScreenWorkflow init] */

void FUN_101179910(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesClientGenStoryLoadingScreenWorkflow.MemoriesClientGenStoryLoadingScreenWorkflow"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10117993c);
  (*pcVar1)();
}



/* Entry: 10117993c; end: 101179963; -[_TtC43MemoriesClientGenStoryLoadingScreenWorkflow43MemoriesClientGenStoryLoadingScreenWorkflow didTapCancel] */

void FUN_10117993c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101179240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101179964; end: 101179967; -[_TtC43MemoriesClientGenStoryLoadingScreenWorkflow43MemoriesClientGenStoryLoadingScreenWorkflow didTapRetry] */

void FUN_101179964(void)

{
  return;
}



/* Entry: 101179968; end: 101179987;  */

void FUN_101179968(void)

{
  func_0x000107c61168(&PTR_PTR_1127b2d10);
  return;
}



/* Entry: 101179988; end: 1011799df;  */

void FUN_101179988(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1011799e0;
  plVar1[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011793ac,0,0);
  return;
}



/* Entry: 1011799e0; end: 101179a1b;  */

void FUN_1011799e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101179a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101179a1c; end: 101179a73;  */

void FUN_101179a1c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101179a74;
  plVar1[0x12] = param_1;
  plVar1[0x13] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011794d4,0,0);
  return;
}



/* Entry: 101179a74; end: 101179aaf;  */

void FUN_101179a74(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101179aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101179ab0; end: 101179abf;  */

long FUN_101179ab0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101179ac0; end: 101179ad7;  */

void FUN_101179ac0(long param_1)

{
  func_0x000101179afc(param_1 + 0x20);
  return;
}



/* Entry: 101179ad8; end: 101179b1b;  */

long * FUN_101179ad8(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 101179b1c; end: 101179b87;  */

void FUN_101179b1c(void)

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
    FUN_101179e90(0,0x112d61d40,&PTR_PTR_1126bf9a8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d61d48;
  plVar5 = (long *)&UNK_10d9dac00;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101179b88; end: 101179d4b;  */

ulong FUN_101179b88(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101179c6c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101179c70);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126cdd68;
    func_0x000107c61168(PTR_PTR_1126cdd68);
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
    puVar4 = PTR_PTR_1126cdd68;
    func_0x000107c61168(PTR_PTR_1126cdd68);
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
  FUN_101179e90(0,0x112d61d50,&PTR_PTR_1126cdd68);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101179d4c);
  (*pcVar2)();
}



/* Entry: 101179d4c; end: 101179d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101179d4c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + _DAT_112d61cf8) = uVar3;
    func_0x000107c61170();
  }
  func_0x000107c61450(uVar2);
  return;
}



/* Entry: 101179d78; end: 101179db7;  */

void FUN_101179d78(long *param_1,code *param_2,long param_3)

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



/* Entry: 101179db8; end: 101179dbf;  */

void FUN_101179db8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    uVar4 = 0x112d511e8;
    func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
    puVar1 = &uStack_58;
    func_0x000107c6147c(puVar1,auStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar1 & 1) != 0) {
      puVar2 = &UNK_11038a140;
      func_0x000107c613fc(&UNK_11038a140,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,uVar5);
      puVar3 = &UNK_11038a208;
      func_0x000107c613fc(&UNK_11038a208,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined8 *)(puVar3 + 0x18) = uStack_58;
      func_0x000107c615f0(uStack_58);
      uVar5 = 0x112d518a8;
      func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
      uVar4 = 0xa3;
      func_0x0001001ca524(0xa3,0,0x48,4,0,0,&UNK_10d927ce0,puVar3,uVar5);
      func_0x000107c615e8(uStack_58);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar4);
    }
  }
  return;
}



/* Entry: 101179dc0; end: 101179e23;  */

void FUN_101179dc0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101179f9c;
  plVar3[6] = lVar1;
  plVar3[7] = lVar2;
  plVar3[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101178ab4,0,0);
  return;
}



/* Entry: 101179e24; end: 101179e87;  */

void FUN_101179e24(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101179fa0;
  plVar4[0x16] = lVar2;
  plVar4[0x17] = lVar1;
  lVar2 = 0;
  func_0x000107c5f7fc();
  plVar4[0x18] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0x19] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1a] = uVar3;
  lVar2 = 0;
  func_0x000107c5f824();
  plVar4[0x1b] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0x1c] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1d] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101177ed8,0,0);
  return;
}



/* Entry: 101179e88; end: 101179e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101179e88(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d61cf8);
    func_0x000107c61170();
  }
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = uVar3;
  func_0x000107c6144c(lVar1);
  return;
}



/* Entry: 101179e90; end: 101179ecf;  */

void FUN_101179e90(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101179ed0; end: 101179f27;  */

void FUN_101179ed0(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101179fa4;
  plVar1[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101177af8,0,0);
  return;
}



/* Entry: 101179f28; end: 101179f7f;  */

void FUN_101179f28(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101179fa8;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10117767c,0,0);
  return;
}



/* Entry: 101179f80; end: 101179fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101179f80(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  
  uVar7 = *(long *)(unaff_x22 + 0xb8) + 0x10;
  func_0x000107c61618();
  *(ulong *)(unaff_x22 + 0x108) = uVar7;
  if (uVar7 != 0) {
    uVar8 = uVar7;
    func_0x000107c5fd5c();
    if ((uVar8 & 1) == 0) {
      lVar1 = *(long *)(unaff_x22 + 0xe0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
      lVar6 = *(long *)(unaff_x22 + 200);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10117823c;
      lVar9 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar9,0);
      puVar10 = &UNK_11038a140;
      func_0x000107c613fc(&UNK_11038a140,0x18,7);
      func_0x000107c61614(puVar10 + 0x10,uVar7);
      puVar11 = &UNK_11038a258;
      func_0x000107c613fc(&UNK_11038a258,0x20,7);
      *(long *)(puVar11 + 0x10) = lVar9;
      *(undefined **)(puVar11 + 0x18) = puVar10;
      *(code **)(unaff_x22 + 0x70) = FUN_101179e88;
      *(undefined **)(unaff_x22 + 0x78) = puVar11;
      puVar12 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar12 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_1000b0c7c;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11038a270;
      func_0x000107c60bc4();
      func_0x000107c6157c(puVar10);
      func_0x000107c5f808(uVar4);
      *(undefined8 *)(unaff_x22 + 0xa0) = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar15 = 0x112d4af88;
      FUN_101179d78(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      uVar13 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar14 = uVar13;
      func_0x0001001c7f30();
      func_0x000107c60264(uVar2,(undefined8 *)(unaff_x22 + 0xa0),uVar13,uVar14,uVar3,uVar15);
      func_0x000107c5ffe8(0,uVar4,uVar2,puVar12);
      func_0x000107c60bd0(puVar12);
      (**(code **)(lVar6 + 8))(uVar2,uVar3);
      (**(code **)(lVar1 + 8))(uVar4,uVar5);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c61574(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61170(uVar7);
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615c0(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000101178080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101179fac; end: 10117a437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101179fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10)

{
  long lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  undefined8 uVar11;
  long unaff_x20;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *apuStack_70 [2];
  
  lVar4 = 0;
  uStack_90 = param_3;
  func_0x000107c5ffd8();
  lStack_b8 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar4 = 0;
  puStack_b0 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ffc4();
  lStack_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar10 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_c8 = lVar10;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  lStack_a0 = unaff_x20;
  func_0x000107c61174();
  uStack_98 = param_2;
  func_0x000107c4cd6c();
  func_0x000107c61180();
  uStack_d0 = param_2;
  lStack_88 = param_4;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lStack_d8 = param_4;
  if (param_4 != 0) {
    uStack_e8 = param_10;
    lStack_e0 = param_9;
    uVar11 = param_5;
    func_0x000107c444a4();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_6 + _DAT_112ff4b38);
    uStack_f0 = uVar11;
    func_0x000107c61174();
    uVar11 = param_7;
    uStack_100 = uVar5;
    func_0x000107c421c8();
    func_0x000107c61180();
    uVar5 = param_8;
    uStack_108 = uVar11;
    func_0x000107c4cbdc();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(param_9 + _DAT_112fd9430);
    uStack_120 = uVar11;
    uStack_110 = uVar5;
    func_0x0001000285a8(0x112d61d58,&UNK_10d927d20);
    func_0x000107c6157c(uVar11);
    func_0x000107c3fc48();
    func_0x000107c61180();
    uVar11 = param_10;
    uStack_f8 = param_5;
    func_0x0001000bda74();
    uStack_138 = uVar11;
    func_0x000107c61170(param_10);
    lVar6 = 0;
    FUN_101179968();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar7 + _DAT_112d61ce0) = 0;
    *(undefined8 *)(lVar7 + _DAT_112d61ce8) = 0;
    *(undefined8 *)(lVar7 + _DAT_112d61cf0) = 0;
    *(undefined8 *)(lVar7 + _DAT_112d61cf8) = 0;
    lVar4 = _DAT_112d61d00;
    uStack_118 = param_7;
    func_0x0001000295c4(0);
    lStack_128 = param_6;
    func_0x000107c61174();
    uVar5 = param_1;
    func_0x000107c5f808(lVar10);
    apuStack_70[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100029608();
    uVar11 = 0x112d4ac70;
    uStack_130 = param_8;
    func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
    uVar8 = uVar11;
    func_0x00010002964c();
    lVar1 = lStack_c8;
    func_0x000107c60264(lStack_c8,apuStack_70,uVar11,uVar8,lStack_c0,uVar5);
    puVar2 = puStack_b0;
    (**(code **)(lStack_b8 + 0x68))
              (puStack_b0,
               *(undefined4 *)
                PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
               ,lStack_a8);
    uVar11 = 0xd000000000000024;
    func_0x000107c5ffec(0xd000000000000024,0x800000010ef292e0,lVar10,lVar1,puVar2,0);
    *(undefined8 *)(lVar7 + lVar4) = uVar11;
    *(undefined8 *)(lVar7 + _DAT_112d61d08) = 0;
    *(undefined8 *)(lVar7 + _DAT_112d61c98) = param_1;
    *(undefined8 *)(lVar7 + _DAT_112d61ca0) = uStack_d0;
    *(long *)(lVar7 + _DAT_112d61ca8) = lStack_d8;
    *(undefined8 *)(lVar7 + _DAT_112d61cb0) = uStack_f0;
    *(undefined8 *)(lVar7 + _DAT_112d61cb8) = uStack_100;
    *(undefined8 *)(lVar7 + _DAT_112d61cc0) = uStack_108;
    *(undefined8 *)(lVar7 + _DAT_112d61cc8) = uStack_110;
    *(undefined8 *)(lVar7 + _DAT_112d61cd0) = uStack_120;
    *(undefined8 *)(lVar7 + _DAT_112d61cd8) = uStack_138;
    plVar9 = &lStack_80;
    lStack_80 = lVar7;
    lStack_78 = lVar6;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
    *(long **)(lStack_a0 + 0x18) = plVar9;
    func_0x000107c61174();
    FUN_101177260();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uStack_98);
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(lStack_88);
    func_0x000107c61170(uStack_f8);
    func_0x000107c61170(lStack_128);
    func_0x000107c61170(uStack_118);
    func_0x000107c61170(uStack_130);
    func_0x000107c61170(lStack_e0);
    func_0x000107c61170(uStack_e8);
    func_0x000107c61170(plVar9);
    return lStack_a0;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10117a438);
  (*pcVar3)();
}



/* Entry: 10117a438; end: 10117a463;  */

void FUN_10117a438(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10117a464; end: 10117a46f;  */

void FUN_10117a464(void)

{
  return;
}



/* Entry: 10117a470; end: 10117a48f;  */

void FUN_10117a470(void)

{
  func_0x000107c61168(&PTR_PTR_112d61da0);
  return;
}



/* Entry: 10117a490; end: 10117a49b; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a490(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61e08;
  func_0x000107c61428(param_1 + _DAT_112d61e08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117a49c; end: 10117a4a7; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a49c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61e08;
  func_0x000107c61428(param_1 + _DAT_112d61e08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117a4a8; end: 10117a4b3; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint memoriesMergedDataSourceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a4a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61e10;
  func_0x000107c61428(param_1 + _DAT_112d61e10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117a4b4; end: 10117a4bf; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint setMemoriesMergedDataSourceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61e10;
  func_0x000107c61428(param_1 + _DAT_112d61e10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117a4c0; end: 10117a4cb; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint applicationStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a4c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61e18;
  func_0x000107c61428(param_1 + _DAT_112d61e18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117a4cc; end: 10117a4d7; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint setApplicationStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a4cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61e18;
  func_0x000107c61428(param_1 + _DAT_112d61e18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117a4d8; end: 10117a4e3; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a4d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61e20;
  func_0x000107c61428(param_1 + _DAT_112d61e20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117a4e4; end: 10117a4ef; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a4e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61e20;
  func_0x000107c61428(param_1 + _DAT_112d61e20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117a4f0; end: 10117a4fb; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a4f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61e28;
  func_0x000107c61428(param_1 + _DAT_112d61e28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117a4fc; end: 10117a507; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61e28;
  func_0x000107c61428(param_1 + _DAT_112d61e28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117a508; end: 10117a513; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint featuredStorySnapGenerationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a508(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61e30;
  func_0x000107c61428(param_1 + _DAT_112d61e30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117a514; end: 10117a51f; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint setFeaturedStorySnapGenerationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a514(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61e30;
  func_0x000107c61428(param_1 + _DAT_112d61e30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117a520; end: 10117a52b; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint userStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a520(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61e38;
  func_0x000107c61428(param_1 + _DAT_112d61e38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117a52c; end: 10117a537; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint setUserStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a52c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61e38;
  func_0x000107c61428(param_1 + _DAT_112d61e38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117a538; end: 10117a543; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint legacyClientGenWorkflowServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a538(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61e40;
  func_0x000107c61428(param_1 + _DAT_112d61e40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117a544; end: 10117a54f; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint setLegacyClientGenWorkflowServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a544(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61e40;
  func_0x000107c61428(param_1 + _DAT_112d61e40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117a550; end: 10117a55b; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint memoriesClientGenTaskCoordinatorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a550(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61e48;
  func_0x000107c61428(param_1 + _DAT_112d61e48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117a55c; end: 10117a567; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint setMemoriesClientGenTaskCoordinatorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a55c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61e48;
  func_0x000107c61428(param_1 + _DAT_112d61e48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117a568; end: 10117a573; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint cloudSyncServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a568(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61e50;
  func_0x000107c61428(param_1 + _DAT_112d61e50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117a574; end: 10117a5b7;  */

void FUN_10117a574(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117a5b8; end: 10117a5c3; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint setCloudSyncServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61e50;
  func_0x000107c61428(param_1 + _DAT_112d61e50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117a5c4; end: 10117a617;  */

void FUN_10117a5c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117a618; end: 10117acf7;  */

/* WARNING: Possible PIC construction at 0x00010117a8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117aae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117aaf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ab08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ab18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ab28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ab38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ac94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117aca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117acb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117acc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ac54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ac64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ac74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ac84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ac24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ac34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ac44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117abf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ac04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117abc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117abd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117aba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117abb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117ab94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010117abb8) */
/* WARNING: Removing unreachable block (ram,0x00010117aba8) */
/* WARNING: Removing unreachable block (ram,0x00010117abd8) */
/* WARNING: Removing unreachable block (ram,0x00010117abc8) */
/* WARNING: Removing unreachable block (ram,0x00010117ac08) */
/* WARNING: Removing unreachable block (ram,0x00010117abf8) */
/* WARNING: Removing unreachable block (ram,0x00010117ac48) */
/* WARNING: Removing unreachable block (ram,0x00010117ac38) */
/* WARNING: Removing unreachable block (ram,0x00010117ac28) */
/* WARNING: Removing unreachable block (ram,0x00010117ac88) */
/* WARNING: Removing unreachable block (ram,0x00010117ac78) */
/* WARNING: Removing unreachable block (ram,0x00010117ac68) */
/* WARNING: Removing unreachable block (ram,0x00010117ac58) */
/* WARNING: Removing unreachable block (ram,0x00010117acc8) */
/* WARNING: Removing unreachable block (ram,0x00010117acb8) */
/* WARNING: Removing unreachable block (ram,0x00010117aca8) */
/* WARNING: Removing unreachable block (ram,0x00010117ac98) */
/* WARNING: Removing unreachable block (ram,0x00010117ab3c) */
/* WARNING: Removing unreachable block (ram,0x00010117ab2c) */
/* WARNING: Removing unreachable block (ram,0x00010117ab1c) */
/* WARNING: Removing unreachable block (ram,0x00010117ab0c) */
/* WARNING: Removing unreachable block (ram,0x00010117aafc) */
/* WARNING: Removing unreachable block (ram,0x00010117aaec) */
/* WARNING: Removing unreachable block (ram,0x00010117a8dc) */
/* WARNING: Removing unreachable block (ram,0x00010117ab98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117a618(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar2 = 0;
  func_0x000107c5ffd8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4cbe0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c3dfc8();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
    }
    else {
      lVar4 = unaff_x20;
      func_0x000107c3fa0c();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c444a8();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar5 = unaff_x20;
          func_0x000107c42ee4();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c5daa0();
            func_0x000107c61180();
            if (lVar5 == 0) {
              func_0x000107c61170(lVar2);
              lVar2 = lVar3;
            }
            else {
              lVar5 = unaff_x20;
              func_0x000107c4ad18();
              func_0x000107c61180();
              if (lVar5 == 0) {
                func_0x000107c61170(lVar2);
                lVar2 = lVar3;
              }
              else {
                lVar3 = unaff_x20;
                func_0x000107c4cb50();
                func_0x000107c61180();
                if (lVar3 != 0) {
                  func_0x000107c3fc60();
                  func_0x000107c61180();
                  if (unaff_x20 != 0) {
                    lVar5 = 0;
                    FUN_10117a470();
                    func_0x000107c613fc();
                    *(long *)(lVar5 + 0x10) = lVar2;
                    func_0x000107c61174();
                    func_0x000107c4cd6c();
                    func_0x000107c61180();
                    func_0x000107c3fa04();
                    func_0x000107c61180();
                    if (lVar4 == 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x10117acf8);
                      (*pcVar1)();
                    }
                    func_0x000107c444a4();
                    func_0x000107c61180();
                    func_0x000107c61174();
                    func_0x000107c421c8();
                    func_0x000107c61180();
                    func_0x000107c4cbdc();
                    func_0x000107c61180();
                    uVar6 = *(undefined8 *)(lVar3 + _DAT_112fd9430);
                    func_0x0001000285a8(0x112d61d58,&UNK_10d927d20);
                    func_0x000107c6157c(uVar6);
                    func_0x000107c3fc48();
                    func_0x000107c61180();
                    func_0x0001000bda74();
                    lVar2 = unaff_x20;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10117acf8; end: 10117ad1f; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint begin] */

void FUN_10117acf8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10117a618();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10117ad20; end: 10117ad63; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint end] */

void FUN_10117ad20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117ad64; end: 10117b23b;  */

void FUN_10117ad64(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e2080)) ||
       (func_0x000107c605b8(0xd000000000000020,0x800000010ef1df80,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c56578();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ef1f0)) ||
         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef10e10,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52858();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10e3fc0)) ||
               (func_0x000107c605b8(0xd000000000000010,0x800000010ef1c040,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c54f40();
            }
            else {
              uVar2 = 0xd000000000000023;
              if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef10d6cf0)) ||
                 (func_0x000107c605b8(0xd000000000000023,0x800000010ef29310,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c54944();
              }
              else {
                if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10edce0)) {
                  uVar2 = 0xd000000000000013;
                  func_0x000107c605b8(0xd000000000000013,0x800000010ef12320,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0xd00000000000001f;
                    if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef10d6cc0)) ||
                       (func_0x000107c605b8(0xd00000000000001f,0x800000010ef29340,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55b8c();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 == -0x2fffffffffffffd8) && (param_3 == -0x7ffffffef10d6ca0)) ||
                         (func_0x000107c605b8(0xd000000000000028,0x800000010ef29360,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c56528();
                      }
                      else {
                        uVar2 = 0xd000000000000011;
                        if (((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10d6c70))
                           && (func_0x000107c605b8(0xd000000000000011,0x800000010ef29390,param_2,
                                                   param_3,0), (uVar2 & 1) == 0)) {
                          func_0x000107c602fc(0x15);
                          func_0x000107c6142c(0xe000000000000000);
                          func_0x000107c5fb78(param_2,param_3);
                          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                              0x800000010ef0fc20,
                                              "MemoriesClientGenStoryLoadingScreenWorkflow/SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint.swift"
                                              ,0x69,2,0x4f,0);
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x10117b23c);
                          (*pcVar1)();
                        }
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c534d8();
                      }
                    }
                    goto LAB_10117adf0;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5a408();
              }
            }
            goto LAB_10117adf0;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53414();
      }
    }
  }
LAB_10117adf0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10117b23c; end: 10117b2e7; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint setValue:forIvarName:] */

void FUN_10117b23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10117ad64(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10117b2e8; end: 10117b3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117b2e8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d61e08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61e10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61e18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61e20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61e28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61e30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61e38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61e40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61e48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61e50,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d61e58) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10117b3fc; end: 10117b41b; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint init] */

void FUN_10117b3fc(void)

{
  FUN_10117b2e8();
  return;
}



/* Entry: 10117b41c; end: 10117b44f;  */

void FUN_10117b41c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10117b450; end: 10117b517; -[SCMemoriesClientGenStoryLoadingScreenWorkflowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117b450(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d61e08);
  func_0x000107c61610(param_1 + _DAT_112d61e10);
  func_0x000107c61610(param_1 + _DAT_112d61e18);
  func_0x000107c61610(param_1 + _DAT_112d61e20);
  func_0x000107c61610(param_1 + _DAT_112d61e28);
  func_0x000107c61610(param_1 + _DAT_112d61e30);
  func_0x000107c61610(param_1 + _DAT_112d61e38);
  func_0x000107c61610(param_1 + _DAT_112d61e40);
  func_0x000107c61610(param_1 + _DAT_112d61e48);
  func_0x000107c61610(param_1 + _DAT_112d61e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d61e58));
  return;
}



/* Entry: 10117b518; end: 10117b537;  */

void FUN_10117b518(void)

{
  func_0x000107c61168(&PTR_PTR_1127b2f10);
  return;
}



/* Entry: 10117b538; end: 10117b547; -[SCMemoriesChatMediaPlaybackScope parentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117b538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d61e88));
  return;
}



/* Entry: 10117b548; end: 10117b557; -[SCMemoriesChatMediaPlaybackScope baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117b548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d61e90));
  return;
}



/* Entry: 10117b558; end: 10117b59f; -[SCMemoriesChatMediaPlaybackScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117b558(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61e98;
  func_0x000107c61428(param_1 + _DAT_112d61e98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117b5a0; end: 10117b5f7; -[SCMemoriesChatMediaPlaybackScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117b5a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61e98;
  func_0x000107c61428(param_1 + _DAT_112d61e98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117b5f8; end: 10117b647; -[SCMemoriesChatMediaPlaybackScope friendshipFlashbackDataModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117b5f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d61ea0);
  func_0x00010117bac8(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10117b648; end: 10117b657; -[SCMemoriesChatMediaPlaybackScope chatIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117b648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d61ea8));
  return;
}



/* Entry: 10117b658; end: 10117b6b3; -[SCMemoriesChatMediaPlaybackScope profileSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117b658(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d61eb0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d61eb0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10117b6b4; end: 10117b7df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10117b6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112d61e98;
  func_0x000107c61614(unaff_x20 + _DAT_112d61e98,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d61e88) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d61e90) = param_2;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112d61ea0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d61ea8) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d61eb0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar4;
}



/* Entry: 10117b7e0; end: 10117b8cf; -[SCMemoriesChatMediaPlaybackScope initWithParentViewController:baseView:delegate:friendshipFlashbackDataModels:chatIdentifier:profileSessionId:] */

undefined8
FUN_10117b7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  func_0x00010117bac8(0);
  func_0x000107c5fc54(param_6,uVar1);
  if (param_8 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_8);
  }
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_7);
  uVar3 = param_3;
  FUN_10117b980(param_3,param_4,param_5,param_6,param_7,param_8,uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_5);
  return uVar3;
}



/* Entry: 10117b8d0; end: 10117b903;  */

void FUN_10117b8d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10117b904; end: 10117b97f; -[SCMemoriesChatMediaPlaybackScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010117b950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010117b954) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117b904(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d61e88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d61e90));
  FUN_10117ba84(param_1 + _DAT_112d61e98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d61ea0));
  return;
}



/* Entry: 10117b980; end: 10117ba83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117b980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112d61e98;
  func_0x000107c61614(unaff_x20 + _DAT_112d61e98,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d61e88) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d61e90) = param_2;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112d61ea0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d61ea8) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d61eb0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 10117ba84; end: 10117baa7;  */

undefined8 FUN_10117ba84(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10117baa8; end: 10117bb0b;  */

void FUN_10117baa8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3018);
  return;
}



/* Entry: 10117bb0c; end: 10117bc5f;  */

void FUN_10117bb0c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0xd000000000000042;
    func_0x000107c5fadc(0xd000000000000042,0x800000010ef294b0);
    lVar2 = lStack_38;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(uVar1);
  }
  *param_1 = lVar2;
  return;
}


