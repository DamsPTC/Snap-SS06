/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102981f70; end: 102981fdb;  */

void FUN_102981f70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102981fdc,uVar1,uVar2);
  return;
}



/* Entry: 102981fdc; end: 10298204f;  */

void FUN_102981fdc(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102981994(*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010298204c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 102982050; end: 102982093;  */

void FUN_102982050(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000102982090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 102982094; end: 1029820ff;  */

void FUN_102982094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102982100,uVar1,uVar2);
  return;
}



/* Entry: 102982100; end: 1029821ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102982100(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x90,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if ((lVar2 != 0) &&
       (lVar2 = *(long *)(lVar2 + _DAT_112ed10a0), func_0x000107c61170(), lVar2 == 0)) {
      uVar3 = *(undefined8 *)(unaff_x22 + 200);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xf8;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102982200;
      lVar2 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar2,0);
      uVar1 = 0x112df01c0;
      func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_1029823c8;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110575d78;
      *(long *)(unaff_x22 + 0x70) = lVar2;
      func_0x000107c49cc0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010298216c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102982200; end: 10298223b;  */

void FUN_102982200(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10298223c,*(undefined8 *)(*unaff_x22 + 0xd8),*(undefined8 *)(*unaff_x22 + 0xe0));
  return;
}



/* Entry: 10298223c; end: 102982303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298223c(ulong param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0xf8);
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    lVar4 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0xa8,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0xe8) = lVar4;
    if (lVar4 != 0) {
      if ((cVar1 != *(char *)(lVar4 + _DAT_112ed10a8)) &&
         (*(char *)(lVar4 + _DAT_112ed10a8) = cVar1, cVar1 != '\0')) {
        plVar2 = (long *)0xc0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xf0) = plVar2;
        *plVar2 = unaff_x22;
        plVar2[1] = (long)FUN_102982304;
        plVar2[0x13] = lVar4;
        lVar3 = 0;
        func_0x000107c5fcec();
        lVar4 = lVar3;
        func_0x000107c5fce8();
        plVar2[0x14] = lVar4;
        func_0x000100eea164();
        func_0x000107c5fca8();
        plVar2[0x15] = lVar3;
        plVar2[0x16] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_10298246c,lVar3,lVar4);
        return;
      }
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
      func_0x000107c61170(lVar4);
      goto LAB_1029822f0;
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
LAB_1029822f0:
                    /* WARNING: Could not recover jumptable at 0x000102982300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102982304; end: 102982347;  */

void FUN_102982304(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102982348,*(undefined8 *)(lVar1 + 0xd8),*(undefined8 *)(lVar1 + 0xe0));
  return;
}



/* Entry: 102982348; end: 1029823c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102982348(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0xd0);
  func_0x000107c61574();
  func_0x000107c5fd5c();
  lVar2 = *(long *)(unaff_x22 + 0xe8);
  if ((uVar1 & 1) == 0) {
    lVar3 = lVar2 + _DAT_112ed10c8;
    func_0x000107c61618();
    lVar2 = *(long *)(unaff_x22 + 0xe8);
    if (lVar3 != 0) {
      func_0x000107c5dbc4();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar3);
      goto LAB_1029823b4;
    }
  }
  func_0x000107c61170(lVar2);
LAB_1029823b4:
                    /* WARNING: Could not recover jumptable at 0x0001029823c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029823c8; end: 1029823ff;  */

void FUN_1029823c8(long param_1,undefined1 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  **(undefined1 **)(*(long *)(*plVar1 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 102982400; end: 10298246b;  */

void FUN_102982400(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10298246c,uVar1,uVar2);
  return;
}



/* Entry: 10298246c; end: 10298251b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298246c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x98) + _DAT_112ed1070);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10298251c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar2 = 0x112ed1108;
  func_0x0001000285a8(0x112ed1108,&UNK_10daf7f50);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_102982b54;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110575d50;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c3ef64(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10298251c; end: 102982557;  */

void FUN_10298251c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102982558,*(undefined8 *)(*unaff_x22 + 0xa8),*(undefined8 *)(*unaff_x22 + 0xb0));
  return;
}



/* Entry: 102982558; end: 1029825fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102982558(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x22;
  long lVar6;
  
  uVar2 = *(ulong *)(unaff_x22 + 0xa0);
  func_0x000107c61574();
  uVar5 = *(ulong *)(unaff_x22 + 0x90);
  func_0x000107c5fd5c();
  lVar1 = _DAT_112ed1098;
  uVar3 = uVar5;
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(unaff_x22 + 0x98);
    uVar4 = *(undefined8 *)(lVar6 + _DAT_112ed1098);
    func_0x000107c61434(uVar4);
    uVar2 = uVar5;
    FUN_102982bb4(uVar5,uVar4,0x112dc3fe0,&PTR_PTR_1126a7a80);
    func_0x000107c6142c(uVar4);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(ulong *)(lVar6 + lVar1);
      *(ulong *)(lVar6 + lVar1) = uVar5;
    }
  }
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001029825f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029825fc; end: 102982667;  */

void FUN_1029825fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102982668,uVar1,uVar2);
  return;
}



/* Entry: 102982668; end: 102982787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102982668(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010298269c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x90,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3 + _DAT_112ed10c8;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c5dbc4();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(lVar3);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xf8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102982788;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,0);
  uVar2 = 0x112df01c0;
  func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_1029823c8;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110575d28;
  *(long *)(unaff_x22 + 0x70) = lVar3;
  func_0x000107c49cc0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102982788; end: 10298289b;  */

void FUN_102982788(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1029827c4,*(undefined8 *)(*unaff_x22 + 0xd8),*(undefined8 *)(*unaff_x22 + 0xe0));
  return;
}



/* Entry: 10298289c; end: 10298295f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298289c(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0xd0);
  func_0x000107c61574();
  func_0x000107c5fd5c();
  lVar2 = *(long *)(unaff_x22 + 0xe8);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(lVar2 + _DAT_112ed1098);
    if (uVar1 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
      lVar2 = *(long *)(unaff_x22 + 0xe8);
    }
    else {
      uVar4 = uVar1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar1) {
        uVar4 = uVar1;
      }
      func_0x000107c60480();
      lVar2 = *(long *)(unaff_x22 + 0xe8);
    }
    if (uVar4 != 0) {
      lVar3 = lVar2 + _DAT_112ed10c8;
      func_0x000107c61618();
      lVar2 = *(long *)(unaff_x22 + 0xe8);
      if (lVar3 != 0) {
        func_0x000107c5dbc4();
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(lVar3);
        goto LAB_10298292c;
      }
    }
  }
  func_0x000107c61170(lVar2);
LAB_10298292c:
                    /* WARNING: Could not recover jumptable at 0x00010298293c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102982960; end: 102982987; -[_TtC47MyProfileSubscriberFanPassSectionImplementation56MyProfileSubscriberFanPassSectionComposerContextProvider setUp] */

void FUN_102982960(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102981610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102982988; end: 102982a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102982988(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112ed10c0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ed10c0);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c6157c(lVar3);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61574(uVar2);
  lVar1 = _DAT_112ed10b8;
  if (*(long *)(unaff_x20 + _DAT_112ed10b8) != 0) {
    func_0x000107c4218c();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102982a28; end: 102982a4f; -[_TtC47MyProfileSubscriberFanPassSectionImplementation56MyProfileSubscriberFanPassSectionComposerContextProvider tearDown] */

void FUN_102982a28(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102982988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102982a50; end: 102982a73;  */

void FUN_102982a50(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long alStack_70 [2];
  long lStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  undefined *puVar5;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    alStack_70[0] = 0;
    uVar4 = 0;
    func_0x000103fd7dd8(0);
    func_0x000107c5f9e4(param_1,alStack_70,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
    lVar1 = alStack_70[0];
    if (alStack_70[0] != 0) {
      puVar5 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x000107c61168();
      iVar2 = (int)puVar5;
      func_0x000107c4a02c();
      if (iVar2 == 0) {
        puVar5 = &UNK_110575c98;
        func_0x000107c613fc(&UNK_110575c98,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,lVar3);
        puVar6 = &UNK_110575db0;
        func_0x000107c613fc(&UNK_110575db0,0x20,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(long *)(puVar6 + 0x18) = lVar1;
        puVar5 = &UNK_110575dd8;
        func_0x000107c613fc(&UNK_110575dd8,0x20,7);
        *(undefined **)(puVar5 + 0x10) = &UNK_10daf7f60;
        *(undefined **)(puVar5 + 0x18) = puVar6;
        uVar4 = 0x112d518a8;
        func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
        uVar7 = 1;
        func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daf7f70,puVar5,uVar4);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(uVar7);
      }
      else {
        func_0x000107c5fcec(0);
        lStack_58 = lVar1;
        lStack_60 = lVar3;
        func_0x000100f7a598(FUN_1029832a0,alStack_70,
                            "MyProfileSubscriberFanPassSectionImplementation/MyProfileSubscriberFanPassSectionComposerContextProvider.swift"
                            ,0x6e,2,0xb5);
        func_0x000107c6142c(lVar1);
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102982a74; end: 102982ad7;  */

void FUN_102982a74(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10298401c;
  plVar3[0x18] = lVar2;
  plVar3[0x19] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x1a] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x1b] = lVar1;
  plVar3[0x1c] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102982100,lVar1,lVar2);
  return;
}



/* Entry: 102982ad8; end: 102982b3b;  */

void FUN_102982ad8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102984014;
  plVar3[0x18] = lVar2;
  plVar3[0x19] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x1a] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x1b] = lVar1;
  plVar3[0x1c] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102982668,lVar1,lVar2);
  return;
}



/* Entry: 102982b3c; end: 102982b53;  */

long FUN_102982b3c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102982b54; end: 102982bb3;  */

void FUN_102982b54(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  uVar2 = 0;
  FUN_102983da0(0,0x112dc3fe0,&PTR_PTR_1126a7a80);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 102982bb4; end: 102982e0b;  */

uint FUN_102982bb4(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar12 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar12 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar12 == uVar2) {
    if (uVar12 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102982e0c);
          (*pcVar1)();
        }
        FUN_102983da0(0,param_3,param_4);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar8 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar9 = (ulong *)(param_1 + 0x20);
          puVar10 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar12 = uVar12 - 1;
            if (lVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102982dac);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102982db0);
              (*pcVar1)();
            }
            uVar5 = *puVar9;
            uVar7 = *puVar10;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar11 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          } while (uVar12 != 0);
        }
        else {
          lVar8 = 4;
          do {
            uVar2 = lVar8 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102982db4);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar8 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_102982cd4;
LAB_102982ca0:
              FUN_102982fa8(uVar2,param_2,param_4,param_3);
            }
            else {
              uVar3 = uVar2;
              FUN_102982fa8(uVar2,param_1,param_4,param_3);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_102982ca0;
LAB_102982cd4:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102982db8);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar8 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar11 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) &&
                  (lVar13 = (1 - uVar12) + lVar8, lVar8 = lVar8 + 1, lVar13 != 4));
        }
        goto LAB_102982de4;
      }
    }
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
LAB_102982de4:
  return uVar11 & 1;
}



/* Entry: 102982e0c; end: 102982fa7;  */

ulong FUN_102982e0c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102982edc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102982ee0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103fd7dd8(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103fd7dd8(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f0d0dd0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102982fa8);
  (*pcVar2)();
}



/* Entry: 102982fa8; end: 102983163;  */

ulong FUN_102982fa8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10298308c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102983090);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102983da0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102983164);
  (*pcVar2)();
}



/* Entry: 102983164; end: 10298319b;  */

void FUN_102983164(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10298319c; end: 1029831eb;  */

void FUN_10298319c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1029831ec;
  plVar3[5] = lVar2;
  plVar3[6] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102981fdc,lVar1,lVar2);
  return;
}



/* Entry: 1029831ec; end: 10298322f;  */

void FUN_1029831ec(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010298322c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102983230; end: 10298329f;  */

void FUN_102983230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102984018;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1029832a0; end: 1029832cb;  */

void FUN_1029832a0(void)

{
  long unaff_x20;
  
  FUN_102981994(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1029832cc; end: 102983327;  */

void FUN_1029832cc(void)

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
    func_0x000103fd7dd8();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ed1110;
  plVar5 = (long *)&UNK_10daf7f80;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102983328; end: 10298345b;  */

void FUN_102983328(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar5 = uVar11;
  func_0x000107c61558();
  if ((uVar5 & 1) == 0) {
    FUN_102983d7c();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  uVar5 = uVar12;
  plStack_50 = plVar1;
  uStack_48 = uVar12;
  func_0x000107c60574();
  if ((long)uVar5 < (long)uVar12) {
    puVar13 = (undefined *)(uVar12 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar12) {
      puVar3 = puVar13;
      func_0x000107c60380(puVar13,PTR___ss5Int64VN_11034ee50);
      *(undefined **)(puVar3 + 0x10) = puVar13;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar13;
    FUN_10298345c(&puStack_68,auStack_58,&plStack_50,uVar5);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if ((uVar12 != 0) && (uVar12 != 1)) {
    lVar4 = -1;
    uVar5 = 1;
    plVar6 = plVar1;
    do {
      lVar7 = plVar1[uVar5];
      lVar8 = lVar4;
      plVar9 = plVar6;
      do {
        lVar10 = *plVar9;
        if (lVar10 <= lVar7) break;
        *plVar9 = lVar7;
        plVar9[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar5 != uVar12);
  }
  *param_1 = uVar11;
  return;
}



/* Entry: 10298345c; end: 1029837c3;  */

void FUN_10298345c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long unaff_x21;
  ulong *puVar20;
  ulong uVar21;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = puStack_58;
      lVar18 = lVar9 + 1;
      if (lVar18 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(lVar10 + lVar18 * 8);
        lVar15 = *(long *)(lVar10 + lVar9 * 8);
        lVar13 = lVar9 + 2;
        lVar8 = lVar12;
        do {
          lVar17 = lVar13;
          lVar18 = lVar7;
          if (lVar7 == lVar17) break;
          lVar18 = *(long *)(lVar10 + lVar17 * 8);
          bVar3 = lVar8 <= lVar18;
          lVar13 = lVar17 + 1;
          lVar8 = lVar18;
          lVar18 = lVar17;
        } while (lVar12 < lVar15 != bVar3);
        if (lVar12 < lVar15) {
          if (lVar18 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102983798);
            (*pcVar2)();
          }
          lVar13 = lVar9;
          lVar8 = lVar18;
          if (lVar9 < lVar18) {
            do {
              lVar8 = lVar8 + -1;
              if (lVar13 != lVar8) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029837b8);
                  (*pcVar2)();
                }
                uVar16 = *(undefined8 *)(lVar10 + lVar13 * 8);
                *(undefined8 *)(lVar10 + lVar13 * 8) = *(undefined8 *)(lVar10 + lVar8 * 8);
                *(undefined8 *)(lVar10 + lVar8 * 8) = uVar16;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar8);
            lVar7 = param_3[1];
          }
        }
      }
      lVar13 = lVar18;
      if (lVar18 < lVar7) {
        if (SBORROW8(lVar18,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102983794);
          (*pcVar2)();
        }
        if (lVar18 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10298379c);
            (*pcVar2)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar8 = lVar7;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1029837a0);
            (*pcVar2)();
          }
          if (lVar18 != lVar8) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar18 * 8 + -8);
            lVar10 = lVar9 - lVar18;
            do {
              lVar12 = *(long *)(lVar7 + lVar18 * 8);
              lVar13 = lVar10;
              plVar19 = plVar14;
              do {
                lVar15 = *plVar19;
                if (lVar15 <= lVar12) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029837a4);
                  (*pcVar2)();
                }
                *plVar19 = lVar12;
                plVar19[1] = lVar15;
                bVar3 = lVar13 != -1;
                lVar13 = lVar13 + 1;
                plVar19 = plVar19 + -1;
              } while (bVar3);
              lVar18 = lVar18 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar13 = lVar8;
            } while (lVar18 != lVar8);
          }
        }
      }
      if (lVar13 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102983784);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar21 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar21) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar21 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar21 + 1;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x28) = lVar13;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1029837bc);
        (*pcVar2)();
      }
      FUN_1029837c4(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102983754;
      lVar7 = param_3[1];
      lVar9 = lVar13;
    } while (lVar13 < lVar7);
  }
  puVar6 = puStack_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1029837c4);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar20 = (ulong *)(puVar6 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029837c0);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar21 * 0x10);
    lVar18 = *plVar14;
    puVar1 = puVar20 + uVar21 * 2;
    uVar11 = puVar1[1];
    FUN_102983a34(lVar9 + lVar18 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102983788);
      (*pcVar2)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10298378c);
      (*pcVar2)();
    }
    *plVar14 = lVar18;
    plVar14[1] = uVar11;
    uVar11 = *puVar20;
    lVar9 = uVar11 - uVar21;
    if (uVar11 < uVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102983790);
      (*pcVar2)();
    }
    uVar21 = uVar11 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar20 = uVar21;
  }
LAB_102983754:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1029837c4; end: 102983a33;  */

undefined8 FUN_1029837c4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_10298389c;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102983a14);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1029838fc:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102983a04);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102983a0c);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1029839ec);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1029839f0);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1029839f8);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102983a00);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_10298389c:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1029839f4);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1029839fc);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102983a08);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102983a10);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1029838fc;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102983a18);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1029839dc);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102983a34);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_102983a34(lVar8 + lVar11 * 8,lVar8 + *plVar3 * 8,lVar8 + lVar9 * 8,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1029839e0);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1029839e4);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1029839e8);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 102983a34; end: 102983c3b;  */

undefined8 FUN_102983a34(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (lVar2 < *param_4) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*plVar5 < *plVar7) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_102983be0;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_102983be0:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 102983c3c; end: 102983c57;  */

void FUN_102983c3c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102983c58();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102983c58; end: 102983d7b;  */

undefined * FUN_102983c58(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102983d7c);
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
    FUN_1029832cc();
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
    func_0x000103fd7dd8(0);
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



/* Entry: 102983d7c; end: 102983d9f;  */

/* WARNING: Removing unreachable block (ram,0x00010173f3c0) */
/* WARNING: Removing unreachable block (ram,0x00010173f3d0) */
/* WARNING: Removing unreachable block (ram,0x00010173f4a0) */
/* WARNING: Removing unreachable block (ram,0x00010173f3dc) */
/* WARNING: Removing unreachable block (ram,0x00010173f3e4) */
/* WARNING: Removing unreachable block (ram,0x00010173f45c) */
/* WARNING: Removing unreachable block (ram,0x00010173f464) */
/* WARNING: Removing unreachable block (ram,0x00010173f468) */
/* WARNING: Removing unreachable block (ram,0x00010173f46c) */
/* WARNING: Removing unreachable block (ram,0x00010173f474) */

undefined * FUN_102983d7c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112dc5810;
    func_0x0001000285a8(0x112dc5810,&UNK_10d9853c8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 3) << 1;
  }
  func_0x000107c610b4(puVar3 + 0x20,param_1 + 0x20,lVar5 << 3);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 102983da0; end: 102983ddf;  */

void FUN_102983da0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102983de0; end: 102983e3f;  */

void FUN_102983de0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102983e40;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029811c8,lVar1,lVar2);
  return;
}



/* Entry: 102983e40; end: 102983e7b;  */

void FUN_102983e40(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102983e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102983e7c; end: 102983eeb;  */

void FUN_102983e7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102984020;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102983eec; end: 102983f1f;  */

void FUN_102983eec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102983f20; end: 102983f7f;  */

void FUN_102983f20(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102984024;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102984000,lVar1,lVar2);
  return;
}



/* Entry: 102983f80; end: 102983fef;  */

void FUN_102983f80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102984028;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102983ff0; end: 10298402b;  */

void FUN_102983ff0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10298402c; end: 1029840f7;  */

undefined1  [16] FUN_10298402c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffdd;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0d0e60);
  uVar3 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f0d0e90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029840f8);
  (*pcVar1)();
}



/* Entry: 1029840f8; end: 102984433;  */

void FUN_1029840f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed1120,&UNK_10daf7fd0);
  puVar1 = &UNK_110575f78;
  func_0x000107c613fc(&UNK_110575f78,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x0001000823a8(FUN_102984434,puVar1);
  return;
}



/* Entry: 102984434; end: 102984477;  */

void FUN_102984434(void)

{
  long unaff_x20;
  
  func_0x000102984294(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102984478; end: 102984baf;  */

void FUN_102984478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  *(undefined8 *)(unaff_x20 + 0x78) = param_6;
  *(undefined8 *)(unaff_x20 + 0x80) = param_10;
  *(undefined8 *)(unaff_x20 + 0x88) = param_12;
  *(undefined8 *)(unaff_x20 + 0x48) = param_14;
  *(undefined8 *)(unaff_x20 + 0x40) = param_13;
  *(undefined8 *)(unaff_x20 + 0x90) = param_9;
  *(undefined8 *)(unaff_x20 + 0x98) = param_15;
  *(undefined8 *)(unaff_x20 + 0x50) = param_16;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x30) = param_17;
  *(undefined8 *)(unaff_x20 + 0x38) = param_11;
  *(undefined8 *)(unaff_x20 + 0x60) = param_7;
  *(undefined8 *)(unaff_x20 + 0x68) = param_18;
  return;
}



/* Entry: 102984bb0; end: 102984c5f;  */

void FUN_102984bb0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  
  puVar1 = PTR_PTR_1126abab8;
  func_0x000107c610f8();
  func_0x000107c5fadc(in_x3,in_x4);
  func_0x000107c48b34();
  func_0x000107c61170(in_x3);
  *param_1 = puVar1;
  return;
}



/* Entry: 102984c60; end: 10298510b;  */

/* WARNING: Removing unreachable block (ram,0x0001029850d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102984c60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined1 auStack_d0 [80];
  long lStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  func_0x0001000d224c(alStack_70);
  if (alStack_70[0] != 0) {
    lVar3 = alStack_70[0];
    func_0x000107c5d17c();
    func_0x000107c61180();
    func_0x000107c61170(alStack_70[0]);
    if (lVar3 != 0) {
      func_0x000107c5dbd4();
      func_0x000107c61180();
      func_0x000107c3fa04();
      func_0x000107c61180();
      func_0x000107c444a4();
      func_0x000107c61180();
      func_0x000107c42eac();
      func_0x000107c61180();
      if (param_15 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10298510c);
        (*pcVar2)();
      }
      lVar4 = 0;
      FUN_10298735c();
      lVar5 = lVar4;
      func_0x000107c610f8();
      lVar7 = _DAT_112ed12d8;
      puVar13 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar3);
      func_0x000107c453e4();
      *(undefined **)(lVar5 + lVar7) = puVar13;
      *(undefined8 *)(lVar5 + _DAT_112ed12e0) = 0;
      *(undefined8 *)(lVar5 + _DAT_112ed12e8) = 0;
      *(undefined1 *)(lVar5 + _DAT_112ed12f0) = 0;
      func_0x000107c61614(lVar5 + _DAT_112ed12f8,0);
      *(undefined8 *)(lVar5 + _DAT_112ed1300) = 0;
      *(undefined8 *)(lVar5 + _DAT_112ed1308) = 0;
      *(undefined8 *)(lVar5 + _DAT_112ed1258) = param_3;
      *(long *)(lVar5 + _DAT_112ed1260) = lVar3;
      puVar1 = (undefined8 *)(lVar5 + _DAT_112ed1268);
      *puVar1 = param_4;
      puVar1[1] = param_5;
      *(undefined8 *)(lVar5 + _DAT_112ed1270) = param_6;
      *(undefined8 *)(lVar5 + _DAT_112ed1278) = param_7;
      *(undefined8 *)(lVar5 + _DAT_112ed1280) = param_8;
      *(undefined8 *)(lVar5 + _DAT_112ed1288) = param_9;
      *(undefined8 *)(lVar5 + _DAT_112ed1290) = param_10;
      *(undefined8 *)(lVar5 + _DAT_112ed1298) = param_11;
      *(undefined8 *)(lVar5 + _DAT_112ed12a0) = param_12;
      *(undefined8 *)(lVar5 + _DAT_112ed12a8) = param_13;
      *(undefined8 *)(lVar5 + _DAT_112ed12b0) = param_14;
      *(long *)(lVar5 + _DAT_112ed12b8) = param_15;
      *(undefined8 *)(lVar5 + _DAT_112ed12c0) = param_16;
      *(undefined8 *)(lVar5 + _DAT_112ed12c8) = param_17;
      *(undefined8 *)(lVar5 + _DAT_112ed12d0) = param_18;
      puVar13 = PTR_s_init_1125d9248;
      lStack_80 = lVar5;
      lStack_78 = lVar4;
      func_0x000107c61434();
      func_0x000107c61174(param_8);
      func_0x000107c61174(param_9);
      func_0x000107c61174(param_10);
      func_0x000107c61174(param_11);
      func_0x000107c61174(param_12);
      func_0x000107c61174(param_13);
      func_0x000107c61174(param_14);
      func_0x000107c61174(param_16);
      func_0x000107c61174(param_17);
      func_0x000107c61174(param_18);
      plVar6 = &lStack_80;
      func_0x000107c61154(plVar6,puVar13);
      ppuVar12 = &PTR____CFConstantStringClassReference_110f12338;
      func_0x000107c61174();
      lVar7 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar11 = auStack_d0;
      func_0x000107c61534();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      ppuVar8 = &PTR____CFConstantStringClassReference_110eb4ff8;
      func_0x000107c5faec();
      *(undefined8 *)(lVar7 + 0x20) = ppuVar8;
      *(undefined1 **)(lVar7 + 0x28) = puVar11;
      uVar9 = 0;
      func_0x0001000e2834();
      *(undefined8 *)(lVar7 + 0x48) = uVar9;
      *(undefined ***)(lVar7 + 0x30) = ppuVar12;
      func_0x000107c61174(ppuVar12);
      lVar5 = lVar7;
      func_0x000100214a84(lVar7);
      func_0x000107c61588(lVar7);
      func_0x000100f15a0c((undefined8 *)(lVar7 + 0x20));
      func_0x000107c61174(plVar6);
      lVar7 = lVar5;
      func_0x00010018cc3c(lVar5);
      func_0x000107c6142c(lVar5);
      puVar13 = PTR_PTR_1126b2b48;
      func_0x000107c610f8();
      func_0x000107c615f0(param_19);
      lVar5 = lVar7;
      func_0x000107c5f9dc(lVar7,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      func_0x000107c6142c(lVar7);
      func_0x000107c45f0c();
      func_0x000107c61170(plVar6);
      func_0x000107c615e8(param_19);
      func_0x000107c61170(lVar5);
      if (puVar13 != (undefined *)0x0) {
        puVar10 = puVar13;
        func_0x000107c61174(puVar13);
        func_0x000107c5a1fc();
        func_0x000107c61170(puVar10);
      }
      func_0x000107c61170(ppuVar12);
      func_0x000107c61170(plVar6);
      func_0x000107c615e8(lVar3);
      goto LAB_1029850e4;
    }
  }
  puVar13 = (undefined *)0x0;
LAB_1029850e4:
  *param_1 = puVar13;
  return;
}



/* Entry: 10298510c; end: 1029851cf;  */

void FUN_10298510c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 1029851d0; end: 1029851df;  */

undefined1  [16] FUN_1029851d0(void)

{
  return ZEXT816(0x110575fa0);
}



/* Entry: 1029851e0; end: 1029851ff;  */

void FUN_1029851e0(void)

{
  func_0x000107c61168(&PTR_PTR_112ed1168);
  return;
}



/* Entry: 102985200; end: 10298520f;  */

void FUN_102985200(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar1 = PTR_PTR_1126abab8;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c48b34();
  func_0x000107c61170(uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102985210; end: 102985253;  */

void FUN_102985210(void)

{
  long unaff_x20;
  
  FUN_102984c60(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102985254; end: 102985287;  */

void FUN_102985254(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102985288; end: 1029852a7; -[_TtC36SCPlusMyProfileSectionPluginProvider45SCPlusMyProfileSectionComposerContextProvider contextProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102985288(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ed12f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029852a8; end: 1029852bb; -[_TtC36SCPlusMyProfileSectionPluginProvider45SCPlusMyProfileSectionComposerContextProvider setContextProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029852a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ed12f8,param_3);
  return;
}



/* Entry: 1029852bc; end: 1029852db; -[_TtC36SCPlusMyProfileSectionPluginProvider45SCPlusMyProfileSectionComposerContextProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029852bc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed1300));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029852dc; end: 1029852e7; -[_TtC36SCPlusMyProfileSectionPluginProvider45SCPlusMyProfileSectionComposerContextProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029852dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed1300);
  *(undefined8 *)(param_1 + _DAT_112ed1300) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1029852e8; end: 102985307; -[_TtC36SCPlusMyProfileSectionPluginProvider45SCPlusMyProfileSectionComposerContextProvider actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029852e8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed1308));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102985308; end: 102985313; -[_TtC36SCPlusMyProfileSectionPluginProvider45SCPlusMyProfileSectionComposerContextProvider setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102985308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed1308);
  *(undefined8 *)(param_1 + _DAT_112ed1308) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102985314; end: 102985343;  */

void FUN_102985314(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102985344; end: 102985673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102985344(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_48;
  
  func_0x000106c6a5fc();
  func_0x000107c61180();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126abb90;
    func_0x000107c610f8(PTR_PTR_1126abb90);
    func_0x000107c48b3c();
    lVar4 = *(long *)(unaff_x20 + _DAT_112ed1270);
    if (lVar4 != 0) {
      uVar1 = 0xd000000000000031;
      func_0x000107c5fadc(0xd000000000000031,0x800000010f0d0ff0);
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar1);
      if ((int)lVar4 != 0) {
        FUN_102987c34(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar1 = 1;
        func_0x000107c6010c(1);
        func_0x000107c57c20(puVar5);
        func_0x000107c61170(uVar1);
      }
    }
    FUN_102987c34(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar1 = 1;
    func_0x000107c6010c(1);
    func_0x000107c572a8(puVar5);
    func_0x000107c61170(uVar1);
    if (param_2 != 0) {
      func_0x000107c61174(param_2);
      lVar4 = param_2;
      func_0x000107c42e38();
      func_0x000107c311e0();
      func_0x000107c61180();
      func_0x000107c548e4(puVar5);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar4);
    }
    lVar4 = _DAT_1130366d0;
    lVar7 = *(long *)(unaff_x20 + _DAT_112ed1290);
    uVar1 = *(undefined8 *)(lVar7 + _DAT_1130366d0);
    func_0x000107c6157c(uVar1);
    func_0x0001000d224c(&lStack_48);
    func_0x000107c61574(uVar1);
    lVar3 = lStack_48;
    lVar2 = lStack_48;
    func_0x000107c43008();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 == 0) {
      uVar1 = *(undefined8 *)(lVar7 + lVar4);
      func_0x000107c6157c(uVar1);
      func_0x0001000d224c(&lStack_48);
      func_0x000107c61574(uVar1);
      lVar4 = lStack_48;
      func_0x000107c432e4(lStack_48);
      func_0x000107c61180();
      func_0x000107c615e8(lStack_48);
    }
    else {
      if ((*(long *)(lVar2 + _DAT_113036760) == 0) ||
         (*(char *)(*(long *)(lVar2 + _DAT_113036760) + _DAT_113036a90) != '\x01')) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar2;
        func_0x000106c6c0c0(lVar2);
        func_0x000107c61180();
      }
      func_0x000107c578bc(puVar5);
      func_0x000107c61170(lVar4);
      uVar6 = *(undefined8 *)(lVar2 + _DAT_113036770);
      uVar1 = uVar6;
      func_0x000107c61434(uVar6);
      func_0x000107c5fc48();
      func_0x000107c6142c(uVar6);
      func_0x000107c58f90(puVar5);
      func_0x000107c61170(uVar1);
      lVar4 = *(long *)(lVar2 + _DAT_113036748);
      func_0x000103f76008(0);
      lVar3 = lVar4;
      func_0x000107c61434(lVar4);
      func_0x000107c5fc48();
      func_0x000107c6142c(lVar4);
      lVar4 = lVar3;
      func_0x000106c6c27c(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c5617c(puVar5);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar4);
    func_0x000107c61170(param_1);
  }
  return puVar5;
}



/* Entry: 102985674; end: 102985f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_102985674(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
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
  
  puVar5 = &UNK_110576010;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_110576010,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110576038;
  func_0x000107c613fc(&UNK_110576038,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar4 = puVar5;
  func_0x000107c613fc(&UNK_110576010,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  func_0x000107c613fc(&UNK_110576010,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar2 = &UNK_110576060;
  func_0x000107c613fc(&UNK_110576060,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar5;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c610f8(PTR_PTR_1126abb88);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  pcVar6 = FUN_102987944;
  FUN_10298795c(FUN_102987944,puVar3,0x10298794c,puVar4,0x102987954,puVar2);
  lVar14 = *(long *)(unaff_x20 + _DAT_112ed1288);
  lVar7 = lVar14;
  func_0x000107c42e40();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar8 == 0) {
    lStack_148 = 0;
  }
  else {
    lVar7 = lVar8;
    func_0x000107c4f3c8();
    func_0x000107c61180();
    pcStack_f0 = FUN_1029868ac;
    puStack_e8 = (undefined *)0x0;
    puStack_110 = puVar5;
    uStack_108 = 0x42000000;
    pcStack_100 = FUN_1029868f0;
    puStack_f8 = &UNK_110576118;
    ppuVar9 = &puStack_110;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_e8);
    lStack_148 = lVar7;
    func_0x000107c4c280();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar7);
    if (lStack_148 != 0) {
      lVar7 = lStack_148;
      func_0x000107c61174(lStack_148);
      lVar11 = lVar7;
      func_0x000107c5cb24();
      func_0x000107c61180();
      puVar3 = &UNK_110576150;
      func_0x000107c613fc(&UNK_110576150,0x18,7);
      *(long *)(puVar3 + 0x10) = lVar8;
      puVar2 = PTR_PTR_1126d1ce0;
      func_0x000107c610f8(PTR_PTR_1126d1ce0);
      pcStack_f0 = FUN_102987b40;
      puStack_110 = puVar5;
      uStack_108 = 0x42000000;
      pcStack_100 = (code *)&UNK_1000f6b44;
      puStack_f8 = &UNK_110576168;
      ppuVar9 = &puStack_110;
      puStack_e8 = puVar3;
      func_0x000107c60bc4(ppuVar9);
      func_0x000107c615f0(lVar8);
      func_0x000107c489a0(puVar2);
      func_0x000107c61170(lVar11);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(puStack_e8);
      func_0x000107c52b8c(pcVar6);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c3faf0(lVar8);
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ed1268);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed1268))[1];
  uVar12 = uVar13;
  func_0x000107c5fadc(uVar13,uVar1);
  func_0x000107c57904(pcVar6);
  func_0x000107c61170(uVar12);
  pcStack_f0 = FUN_102986974;
  puStack_e8 = (undefined *)0x0;
  puStack_110 = puVar5;
  uStack_108 = 0x42000000;
  pcStack_100 = (code *)&UNK_100c75f50;
  puStack_f8 = &UNK_110576078;
  ppuVar9 = &puStack_110;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c56fe0(pcVar6);
  func_0x000107c60bd0(ppuVar9);
  puVar3 = &UNK_110576010;
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_110576010,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_f0 = (code *)0x102987aa8;
  puStack_110 = puVar5;
  uStack_108 = 0x42000000;
  pcStack_100 = (code *)0x102987cec;
  puStack_f8 = &UNK_1105760a0;
  ppuVar9 = &puStack_110;
  puStack_e8 = puVar2;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_e8);
  func_0x000107c57718(pcVar6);
  func_0x000107c60bd0(ppuVar9);
  func_0x000106c78efc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5a2a8(pcVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c613fc(&UNK_110576010,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar2 = PTR_PTR_1126b3690;
  func_0x000107c610f8(PTR_PTR_1126b3690);
  pcStack_f0 = (code *)0x102987ab0;
  puStack_110 = puVar5;
  uStack_108 = 0x42000000;
  pcStack_100 = FUN_10290743c;
  puStack_f8 = &UNK_1105760c8;
  ppuVar9 = &puStack_110;
  puStack_e8 = puVar3;
  func_0x000107c60bc4(ppuVar9);
  pcStack_120 = FUN_1029870d4;
  uStack_118 = 0;
  puStack_140 = puVar5;
  uStack_138 = 0x42000000;
  pcStack_130 = FUN_1029074c8;
  puStack_128 = &UNK_1105760f0;
  ppuVar10 = &puStack_140;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c46b54(puVar2);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(uStack_118);
  func_0x000107c61574(puStack_e8);
  func_0x000107c52e60(pcVar6);
  func_0x000107c61170(puVar2);
  lVar11 = *(long *)(unaff_x20 + _DAT_112ed12a0);
  func_0x000107c3dae4();
  func_0x000107c61180();
  lVar7 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar7;
    func_0x000107c4c1e0(lVar7);
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
  }
  func_0x000107c52604(pcVar6);
  func_0x000107c615e8(lVar11);
  puVar5 = PTR_PTR_1126b34d8;
  func_0x000107c610f8(PTR_PTR_1126b34d8);
  func_0x000107c47f90();
  func_0x000107c59a7c(pcVar6);
  func_0x000107c61170(puVar5);
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ed12b0) + _DAT_113093a98);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ed12a8);
  func_0x000106c77d90(uVar12,uVar15);
  func_0x000107c61180();
  func_0x000107c59a78(pcVar6);
  func_0x000107c615e8(uVar12);
  func_0x000107c4d604(uVar15);
  func_0x000107c61180();
  uVar12 = uVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c56a84(pcVar6);
  func_0x000107c615e8(uVar12);
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ed1280) + _DAT_113083898);
  func_0x000107c5c734(uVar12);
  func_0x000107c61180();
  func_0x000107c52d78(pcVar6);
  func_0x000107c615e8(uVar12);
  lVar7 = lVar14;
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar11 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar11 != 0) {
    func_0x000107c42e40();
    func_0x000107c61180();
    lVar7 = lVar14;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    if (lVar7 == 0) {
      func_0x000107c615e8(lVar11);
    }
    else {
      lVar14 = lVar11;
      func_0x000106c6927c(lVar11,lVar7);
      func_0x000107c61180();
      func_0x000107c548f0(pcVar6);
      func_0x000107c615e8(lVar11);
      func_0x000107c615e8(lVar7);
      func_0x000107c61170(lVar14);
    }
  }
  puVar5 = PTR_PTR_1126b34f8;
  func_0x000107c610f8(PTR_PTR_1126b34f8);
  func_0x000107c45974();
  func_0x000107c52c64(pcVar6);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126b34f0;
  func_0x000107c610f8(PTR_PTR_1126b34f0);
  func_0x000107c46444();
  func_0x000107c53f40(pcVar6);
  func_0x000107c61170(puVar5);
  puStack_110 = (undefined *)0x9;
  puStack_f8 = (undefined *)0x80;
  pcStack_f0 = (code *)0x0;
  puStack_e8 = (undefined *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0xffffffffffffffff;
  uStack_d0 = 1;
  uStack_108 = uVar13;
  pcStack_100 = (code *)uVar1;
  func_0x00010439c014(0);
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  func_0x000107c610f8();
  func_0x000107c61434(uVar1);
  ppuVar9 = &puStack_110;
  func_0x00010439bbec(ppuVar9);
  uVar13 = 0;
  func_0x00010375ea5c(0);
  func_0x00010375e8c0();
  puVar5 = PTR_PTR_1126c3510;
  func_0x000107c610f8(PTR_PTR_1126c3510);
  func_0x000107c48f50();
  func_0x000107c61170(uVar13);
  func_0x000107c54eec(pcVar6);
  func_0x000107c615e8(lVar8);
  func_0x000107c61170(lStack_148);
  func_0x000107c61170(ppuVar9);
  func_0x000107c61170(puVar5);
  return pcVar6;
}



/* Entry: 102985f08; end: 10298630b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102985f08(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 == 0) {
    return;
  }
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
  }
  lVar1 = param_1;
  func_0x000107c311e4();
  func_0x000107c61170(param_1);
  if (lVar1 == -1) {
    lVar1 = 0;
    if (param_3 == 0) goto LAB_1029860f8;
    lVar1 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    puVar10 = (undefined8 *)(lVar1 + 0x20);
    *puVar10 = 0xd00000000000002f;
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x28) = 0x800000010f0d0fc0;
    uVar3 = 0;
    FUN_102987c34(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(lVar1 + 0x48) = uVar3;
    *(long *)(lVar1 + 0x30) = param_3;
    func_0x000107c61174(param_3);
  }
  else {
    lVar1 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    puVar10 = (undefined8 *)(lVar1 + 0x20);
    *puVar10 = 0xd00000000000002b;
    *(undefined8 *)(lVar1 + 0x28) = 0x800000010f0d0f90;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    uVar3 = 0;
    FUN_102987c34(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(lVar1 + 0x48) = uVar3;
    *(undefined **)(lVar1 + 0x30) = puVar2;
  }
  lVar9 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  FUN_102987b94(puVar10,0x112d4b5f0,&UNK_10d9127d0);
  lVar1 = lVar9;
  func_0x000107c5f9dc(lVar9,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar9);
LAB_1029860f8:
  puVar2 = PTR_PTR_1126afdb8;
  func_0x000107c610f8(PTR_PTR_1126afdb8);
  func_0x000107c45510();
  func_0x000107c615e8(lVar1);
  puVar4 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  uVar3 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0d0f10);
  func_0x000107c46d50();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c61174();
    pcVar6 = "handleAction(_:)";
    func_0x0001000c10c0("handleAction(_:)");
    func_0x000107c61180();
    puVar2 = &UNK_110576010;
    func_0x000107c613fc(&UNK_110576010,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_4);
    puVar7 = &UNK_110576380;
    func_0x000107c613fc(&UNK_110576380,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar2;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    uStack_d8 = 0x102987ce8;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0x42000000;
    puStack_e8 = &UNK_1000f6b44;
    puStack_e0 = &UNK_110576398;
    ppuVar8 = &puStack_f8;
    puStack_d0 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar2 = puStack_d0;
    func_0x000107c61174(puVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c4e590(pcVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(pcVar6);
  }
  if ((param_2 != 0) && (param_5 != 0)) {
    lVar9 = *(long *)(param_4 + _DAT_112ed1288);
    func_0x000107c5d7b4();
    func_0x000107c61180();
    lVar1 = lVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar1 != 0) {
      lVar9 = lVar1;
      func_0x000107c4d364();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      lVar1 = lVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      if (lVar1 != 0) {
        func_0x000107c4dc3c(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 10298630c; end: 1029864d3;  */

void FUN_10298630c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126afdb8;
    func_0x000107c610f8(PTR_PTR_1126afdb8);
    func_0x000107c45510();
    puVar2 = PTR_PTR_1126b02a8;
    func_0x000107c610f8();
    uVar3 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010f0d0f60);
    func_0x000107c46d50();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar3);
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c61174();
      pcVar4 = "handleAction(_:)";
      func_0x0001000c10c0("handleAction(_:)");
      func_0x000107c61180();
      puVar1 = &UNK_110576010;
      func_0x000107c613fc(&UNK_110576010,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_1);
      puVar5 = &UNK_110576330;
      func_0x000107c613fc(&UNK_110576330,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar1;
      *(undefined **)(puVar5 + 0x18) = puVar2;
      uStack_68 = 0x102987ce4;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110576348;
      ppuVar6 = &puStack_88;
      puStack_60 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar1 = puStack_60;
      func_0x000107c61174(puVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c4e590(pcVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(pcVar4);
    }
  }
  return;
}



/* Entry: 1029864d4; end: 10298654b;  */

void FUN_1029864d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_10298654c(param_1,param_2,param_4);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10298654c; end: 1029866d7;  */

/* WARNING: Possible PIC construction at 0x000102986590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029865dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102986618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102986664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010298661c) */
/* WARNING: Removing unreachable block (ram,0x000102986620) */
/* WARNING: Removing unreachable block (ram,0x0001029865e0) */
/* WARNING: Removing unreachable block (ram,0x000102986630) */
/* WARNING: Removing unreachable block (ram,0x0001029865e4) */
/* WARNING: Removing unreachable block (ram,0x000102986594) */
/* WARNING: Removing unreachable block (ram,0x00010298659c) */
/* WARNING: Removing unreachable block (ram,0x0001029865a0) */
/* WARNING: Removing unreachable block (ram,0x000102986638) */
/* WARNING: Removing unreachable block (ram,0x0001029865b0) */
/* WARNING: Removing unreachable block (ram,0x000102986668) */
/* WARNING: Removing unreachable block (ram,0x00010298666c) */
/* WARNING: Removing unreachable block (ram,0x000102986688) */
/* WARNING: Removing unreachable block (ram,0x0001029866c4) */
/* WARNING: Removing unreachable block (ram,0x0001029866a4) */

void FUN_10298654c(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
  }
  func_0x000107c311e4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029866d8; end: 1029868ab;  */

undefined * FUN_1029866d8(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_51;
  
  cStack_51 = '\0';
  uStack_68 = 0;
  uStack_60 = 0;
  puVar3 = &UNK_1105761a0;
  func_0x000107c613fc(&UNK_1105761a0,0x28,7);
  *(char **)(puVar3 + 0x10) = &cStack_51;
  *(undefined8 **)(puVar3 + 0x18) = &uStack_60;
  *(undefined8 **)(puVar3 + 0x20) = &uStack_68;
  puVar4 = &UNK_1105761c8;
  func_0x000107c613fc(&UNK_1105761c8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x102987b50;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_78 = FUN_102987b6c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_101e77884;
  puStack_80 = &UNK_1105761e0;
  ppuVar5 = &puStack_98;
  puStack_70 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_70;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c6b4(param_1);
  func_0x000107c60bd0(ppuVar5);
  puVar6 = PTR_PTR_1126d1cf8;
  func_0x000107c610f8(PTR_PTR_1126d1cf8);
  func_0x000107c486c4();
  uVar1 = uStack_68;
  if (cStack_51 == '\x01') {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar1);
    func_0x000107c55a1c(puVar6);
    func_0x000107c61170(puVar7);
    uVar1 = uStack_60;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar1);
    func_0x000107c53dc0(puVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(puVar7);
  }
  else {
    func_0x000107c61574(puVar3);
  }
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x7e,0xd6,0x2c,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029868ac);
  (*pcVar2)();
}



/* Entry: 1029868ac; end: 1029868ef;  */

void FUN_1029868ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1029866d8();
  uVar1 = 0;
  FUN_102987c34(0,0x112ed1340,&PTR_PTR_1126d1cf8);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 1029868f0; end: 102986973;  */

void FUN_1029868f0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 102986974; end: 102986b77;  */

void FUN_102986974(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&puStack_80 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  func_0x000107c5edd0(lVar10,param_1,param_2);
  lVar1 = lVar10;
  (**(code **)(lVar13 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_102987b94(lVar10,0x112d36580,&UNK_10d9016d0);
  }
  else {
    pcVar11 = *(code **)(lVar13 + 0x20);
    (*pcVar11)(lVar7,lVar10,lVar2);
    pcVar3 = "createComponentContext(_:)";
    func_0x0001000c10c0("createComponentContext(_:)");
    func_0x000107c61180();
    (**(code **)(lVar13 + 0x10))(lVar8,lVar7,lVar2);
    uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar12 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
    puVar4 = &UNK_110576268;
    func_0x000107c613fc(&UNK_110576268,uVar12 + lVar9,uVar6 | 7);
    (*pcVar11)(puVar4 + uVar12,lVar8,lVar2);
    pcStack_60 = FUN_102987bd4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110576280;
    ppuVar5 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_58);
    func_0x000107c4e590(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar3);
    (**(code **)(lVar13 + 8))(lVar7,lVar2);
  }
  return;
}



/* Entry: 102986b78; end: 102986f33;  */

/* WARNING: Possible PIC construction at 0x000102986bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102986c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102986bd0) */
/* WARNING: Removing unreachable block (ram,0x000102986c7c) */
/* WARNING: Removing unreachable block (ram,0x000102986bdc) */
/* WARNING: Removing unreachable block (ram,0x000102986c5c) */

void FUN_102986b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c3f3f4(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102986f34; end: 1029870d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102986f34(double param_1,code *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    lVar3 = param_4;
    func_0x000106c78ef4();
    if ((int)lVar3 == 0) {
      lVar2 = *(long *)(param_4 + _DAT_112ed12b8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c4eabc();
        func_0x000107c61170(lVar2);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d4();
    }
    else {
      func_0x000107c5eea0(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      (**(code **)(lVar5 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029870cc);
        (*pcVar1)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029870d0);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029870d4);
        (*pcVar1)();
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c47580();
    }
    (*param_2)();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 1029870d4; end: 1029870f3;  */

void FUN_1029870d4(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 1029870f4; end: 10298717f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029870f4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112ed1308);
    if (lVar1 != 0) {
      func_0x000107c615f0(lVar1);
      func_0x000107c445ac();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102987180; end: 1029871df; -[_TtC36SCPlusMyProfileSectionPluginProvider45SCPlusMyProfileSectionComposerContextProvider init] */

void FUN_102987180(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusMyProfileSectionPluginProvider.SCPlusMyProfileSectionComposerContextProvider"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029871ac);
  (*pcVar1)();
}



/* Entry: 1029871e0; end: 10298735b; -[_TtC36SCPlusMyProfileSectionPluginProvider45SCPlusMyProfileSectionComposerContextProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010298720c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102987230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102987320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102987340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102987324) */
/* WARNING: Removing unreachable block (ram,0x000102987234) */
/* WARNING: Removing unreachable block (ram,0x000102987210) */
/* WARNING: Removing unreachable block (ram,0x000102987344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029871e0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed1258));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed1260));
  return;
}



/* Entry: 10298735c; end: 10298737b;  */

void FUN_10298735c(void)

{
  func_0x000107c61168(&PTR_PTR_112874ff0);
  return;
}



/* Entry: 10298737c; end: 102987517;  */

/* WARNING: Possible PIC construction at 0x0001029874d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029874d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298737c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar4 = *(long *)(unaff_x20 + _DAT_112ed1300);
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112ed1288);
    func_0x000107c615f0(lVar4);
    func_0x000107c5c360();
    func_0x000107c61180();
    lVar1 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar1 != 0) {
      lVar5 = lVar1;
      func_0x000107c5d6fc();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar5 != 0) {
        func_0x000107c4da88(lVar5);
        func_0x000107c61180();
        puVar2 = &UNK_110576010;
        func_0x000107c613fc(&UNK_110576010,0x18,7);
        func_0x000107c61614(puVar2 + 0x10);
        pcStack_50 = FUN_102987c2c;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        puStack_60 = &UNK_1021e83b0;
        puStack_58 = &UNK_1105763c0;
        puStack_48 = puVar2;
        func_0x000107c60bc4(&puStack_70);
        func_0x000107c61574(puStack_48);
        lVar1 = lVar5;
        func_0x000107c5c320(lVar5);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c61170(lVar5);
        func_0x000107c3e924(lVar1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
    return;
  }
  return;
}



/* Entry: 102987518; end: 102987643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102987518(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ed12e0;
  if (param_2 == 0) {
    return;
  }
  uVar4 = *(ulong *)(param_2 + _DAT_112ed12e0);
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_102987c34(0,0x112ed1350,&PTR_PTR_1126d19c0);
    func_0x000107c61174();
    uVar2 = param_1;
    func_0x000107c61174(param_1);
    uVar1 = uVar4;
    func_0x000107c60118(uVar4,uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    if ((uVar1 & 1) != 0) goto LAB_102987620;
    uVar2 = *(undefined8 *)(param_2 + lVar3);
  }
  *(undefined8 *)(param_2 + lVar3) = param_1;
  func_0x000107c61170(uVar2);
  lVar3 = param_2 + _DAT_112ed12f8;
  func_0x000107c61618();
  func_0x000107c61174(param_1);
  if (lVar3 != 0) {
    func_0x000107c5dbc4(lVar3);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(lVar3);
    return;
  }
LAB_102987620:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102987644; end: 10298768f;  */

void FUN_102987644(long param_1,undefined8 param_2)

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



/* Entry: 102987690; end: 1029876b7; -[_TtC36SCPlusMyProfileSectionPluginProvider45SCPlusMyProfileSectionComposerContextProvider setUp] */

void FUN_102987690(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10298737c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029876b8; end: 1029876c7; -[_TtC36SCPlusMyProfileSectionPluginProvider45SCPlusMyProfileSectionComposerContextProvider tearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029876b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ed12d8),PTR_s_disposeAll_1125bf508);
  return;
}



/* Entry: 1029876c8; end: 10298790f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029876c8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112ed12e0);
  if (uVar1 == 0) {
    return;
  }
  func_0x000107c61174();
  uVar5 = uVar1;
  func_0x000107c4a564();
  if ((uVar5 & 1) == 0) {
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112ed1288);
    func_0x000107c5d7b4();
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar5 != 0) {
      uVar2 = uVar5;
      func_0x000107c4d364();
      func_0x000107c61180();
      func_0x000107c615e8(uVar5);
      uVar6 = uVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (uVar6 == 0) goto LAB_102987700;
      uVar5 = uVar6;
      func_0x000107c4dc88(uVar6);
      func_0x000107c61180();
      func_0x000107c615e8(uVar6);
    }
  }
  else {
LAB_102987700:
    uVar5 = 0;
  }
  uVar2 = uVar1;
  FUN_102985344(uVar1,uVar5);
  if (uVar2 == 0) {
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar5);
    puVar7 = (ulong *)(unaff_x20 + _DAT_112ed12e8);
    goto LAB_1029878f0;
  }
  puVar7 = (ulong *)(unaff_x20 + _DAT_112ed12e8);
  uVar6 = *puVar7;
  if (uVar6 == 0) {
LAB_1029877d8:
    uVar6 = uVar5;
    FUN_102985674(uVar5);
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112ed1258);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(uVar3);
      if (uVar4 != 0) {
        FUN_102987c34(0,0x112ed1338,&PTR_PTR_1126abb80);
        func_0x000107c614e8();
        uVar3 = uVar4;
        func_0x000107c40994();
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar6);
        func_0x000107c615e8(uVar4);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(uVar5);
        uVar1 = *puVar7;
        *puVar7 = uVar3;
        func_0x000107c615e8(uVar1);
        goto LAB_1029878f0;
      }
    }
    func_0x000107c61170(uVar2);
    uVar2 = uVar6;
  }
  else {
    uVar3 = uVar6;
    func_0x000107c615f0();
    func_0x000107c41854();
    if ((uVar3 & 1) != 0) {
      func_0x000107c615e8(uVar6);
      goto LAB_1029877d8;
    }
    func_0x000107c5a588(uVar6);
    func_0x000107c615e8(uVar6);
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
LAB_1029878f0:
  func_0x000107c615f0(*puVar7);
  return;
}



/* Entry: 102987910; end: 102987943; -[_TtC36SCPlusMyProfileSectionPluginProvider45SCPlusMyProfileSectionComposerContextProvider valdiContext] */

void FUN_102987910(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029876c8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102987944; end: 10298795b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102987944(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 *puVar12;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
  }
  lVar10 = param_1;
  func_0x000107c311e4();
  func_0x000107c61170(param_1);
  if (lVar10 == -1) {
    lVar10 = 0;
    if (param_3 == 0) goto LAB_1029860f8;
    lVar10 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    puVar12 = (undefined8 *)(lVar10 + 0x20);
    *puVar12 = 0xd00000000000002f;
    *(undefined8 *)(lVar10 + 0x18) = 2;
    *(undefined8 *)(lVar10 + 0x10) = 1;
    *(undefined8 *)(lVar10 + 0x28) = 0x800000010f0d0fc0;
    uVar3 = 0;
    FUN_102987c34(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(lVar10 + 0x48) = uVar3;
    *(long *)(lVar10 + 0x30) = param_3;
    func_0x000107c61174(param_3);
  }
  else {
    lVar10 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar10 + 0x18) = 2;
    *(undefined8 *)(lVar10 + 0x10) = 1;
    puVar12 = (undefined8 *)(lVar10 + 0x20);
    *puVar12 = 0xd00000000000002b;
    *(undefined8 *)(lVar10 + 0x28) = 0x800000010f0d0f90;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    uVar3 = 0;
    FUN_102987c34(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(lVar10 + 0x48) = uVar3;
    *(undefined **)(lVar10 + 0x30) = puVar2;
  }
  lVar4 = lVar10;
  func_0x000100214a84(lVar10);
  func_0x000107c61588(lVar10);
  FUN_102987b94(puVar12,0x112d4b5f0,&UNK_10d9127d0);
  lVar10 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
LAB_1029860f8:
  puVar2 = PTR_PTR_1126afdb8;
  func_0x000107c610f8(PTR_PTR_1126afdb8);
  func_0x000107c45510();
  func_0x000107c615e8(lVar10);
  puVar5 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  uVar3 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0d0f10);
  func_0x000107c46d50();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x000107c61174();
    pcVar7 = "handleAction(_:)";
    func_0x0001000c10c0("handleAction(_:)");
    func_0x000107c61180();
    puVar2 = &UNK_110576010;
    func_0x000107c613fc(&UNK_110576010,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    puVar8 = &UNK_110576380;
    func_0x000107c613fc(&UNK_110576380,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar2;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    uStack_d8 = 0x102987ce8;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0x42000000;
    puStack_e8 = &UNK_1000f6b44;
    puStack_e0 = &UNK_110576398;
    ppuVar9 = &puStack_f8;
    puStack_d0 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar2 = puStack_d0;
    func_0x000107c61174(puVar6);
    func_0x000107c61574(puVar2);
    func_0x000107c4e590(pcVar7);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c615e8(pcVar7);
  }
  if ((param_2 != 0) && (lVar11 != 0)) {
    lVar10 = *(long *)(lVar1 + _DAT_112ed1288);
    func_0x000107c5d7b4();
    func_0x000107c61180();
    lVar11 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    if (lVar11 != 0) {
      lVar10 = lVar11;
      func_0x000107c4d364();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
      lVar11 = lVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar11 != 0) {
        func_0x000107c4dc3c(lVar11);
        func_0x000107c615e8(lVar11);
      }
    }
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 10298795c; end: 102987a8b;  */

undefined8
FUN_10298795c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_102987ab8;
  puStack_78 = &UNK_1105762a8;
  ppuVar2 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1105762d0;
  ppuVar3 = &puStack_c0;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  func_0x000107c60bc4(ppuVar3);
  puStack_f0 = puVar1;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_100f11160;
  puStack_d8 = &UNK_1105762f8;
  uStack_d0 = param_5;
  uStack_c8 = param_6;
  func_0x000107c60bc4(&puStack_f0);
  func_0x000107c48040();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_68);
  return unaff_x20;
}



/* Entry: 102987a8c; end: 102987ab7;  */

void FUN_102987a8c(long param_1,long param_2)

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



/* Entry: 102987ab8; end: 102987b3f;  */

void FUN_102987ab8(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    func_0x000107c5faec(param_2);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,lVar4,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
  return;
}



/* Entry: 102987b40; end: 102987b6b;  */

void FUN_102987b40(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3bd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + 0x10),PTR_s_clearProfileSection_1125ac908);
    return;
  }
  return;
}



/* Entry: 102987b6c; end: 102987b8b;  */

void FUN_102987b6c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102987b8c; end: 102987b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102987b8c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ed1308);
    if (lVar2 != 0) {
      func_0x000107c615f0(lVar2);
      func_0x000107c445ac();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}


