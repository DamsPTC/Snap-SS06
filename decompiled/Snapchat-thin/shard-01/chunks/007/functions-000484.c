/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014038a4; end: 101403913;  */

void FUN_1014038a4(undefined8 param_1)

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
  plVar3[1] = (long)FUN_101403914;
  FUN_100ffbb74(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101403914; end: 10140397b;  */

void FUN_101403914(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010140394c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10140397c; end: 1014039d7;  */

void FUN_10140397c(long param_1,long param_2)

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



/* Entry: 1014039d8; end: 101403a37;  */

undefined8 FUN_1014039d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c613fc();
  FUN_101404de8(param_1,param_2,param_3);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 101403a38; end: 101403b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101403a38(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  if (uStack_48 == 0) {
LAB_101403b04:
    lVar4 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c3f784();
      func_0x000107c615e8(lVar4);
    }
    return;
  }
  uVar1 = uStack_48;
  func_0x000107c40534();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  if (uVar1 == 0) goto LAB_101403b04;
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x000104863368();
  if ((uVar2 & 0xff) == 0) {
LAB_101403b60:
    lVar4 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c3f784();
      func_0x000107c615e8(lVar4);
    }
  }
  else {
    func_0x0001000d224c(&uStack_48);
    if (uStack_48 == 0) {
LAB_101403b24:
      uVar3 = uVar1;
      func_0x000107c61174();
      func_0x000104863368();
      if (((uint)uVar3 & 0xff) != 3) goto LAB_101403b60;
    }
    else {
      uVar2 = uStack_48;
      func_0x000107c5072c();
      func_0x000107c61180();
      func_0x000107c615e8(uStack_48);
      if (uVar2 == 0) goto LAB_101403b24;
      uVar5 = *(ulong *)(uVar2 + _DAT_113093358);
      uVar3 = uVar5;
      func_0x000107c61174(uVar5);
      func_0x000107c61170(uVar2);
      if (uVar5 == 0) goto LAB_101403b24;
      func_0x000107c61170(uVar3);
    }
    FUN_101403b9c();
    func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + 0x18),param_2,uVar3);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101403b9c; end: 101403e6b;  */

undefined * FUN_101403b9c(long param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar2 = &puStack_a0;
  ppuVar5 = &puStack_a0;
  func_0x0001052198a0();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101403e68);
    (*pcVar1)();
  }
  puVar7 = &UNK_1103b3290;
  func_0x000107c613fc(&UNK_1103b3290,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101404f44;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de205c;
  puStack_88 = &UNK_1103b32a8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c6157c(puVar7);
  puVar4 = puVar3;
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  puVar9 = puStack_78;
  func_0x000107c61574(puVar7);
  func_0x000107c61574();
  func_0x0001052198b8();
  func_0x000107c61180();
  if (puVar9 != (undefined *)0x0) {
    puVar7 = &UNK_1103b3290;
    func_0x000107c613fc(&UNK_1103b3290,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    pcStack_80 = (code *)0x101404f68;
    puStack_a0 = puVar6;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100de205c;
    puStack_88 = &UNK_1103b32d0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c6157c(puVar7);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar9);
    puVar6 = puStack_78;
    func_0x000107c61574(puVar7);
    func_0x000107c61574();
    func_0x000105219870();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      uVar8 = 0;
      uVar10 = unaff_x20;
    }
    else {
      puVar7 = puVar6;
      func_0x000107c5faec();
      uVar10 = unaff_x20;
      func_0x000107c61170();
      uVar8 = unaff_x20;
    }
    func_0x000105219888();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      uVar10 = 0;
    }
    else {
      puVar9 = puVar6;
      func_0x000107c5faec();
      func_0x000107c61170();
    }
    FUN_100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(puVar6 + 0x18) = 5;
    *(undefined8 *)(puVar6 + 0x10) = 2;
    *(undefined **)(puVar6 + 0x20) = puVar4;
    *(undefined **)(puVar6 + 0x28) = puVar3;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c61174(puVar4);
    func_0x000107c61174(puVar3);
    FUN_100fe8774(puVar7,uVar8,puVar9,uVar10,puVar6);
    func_0x000107c59bc8();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101403e6c);
  (*pcVar1)();
}



/* Entry: 101403e6c; end: 1014040c7;  */

void FUN_101403e6c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c420a8(param_1);
  }
  else {
    func_0x000107c55ff0(param_1);
    puVar1 = &UNK_1103b3290;
    func_0x000107c613fc(&UNK_1103b3290,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_2);
    puVar2 = &UNK_1103b3330;
    func_0x000107c613fc(&UNK_1103b3330,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    puVar3 = &UNK_1103b3358;
    func_0x000107c613fc(&UNK_1103b3358,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar1;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    uVar4 = 3;
    func_0x0001001ca524(3,0,0x5c,4,0,0,&UNK_10d93b7b0,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 1014040c8; end: 1014040df;  */

void FUN_1014040c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014040e0,0,0);
  return;
}



/* Entry: 1014040e0; end: 1014042ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014040e0(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  lVar7 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x70,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0xd0) = lVar7;
  if (lVar7 != 0) {
    func_0x0001000d224c(unaff_x22 + 0xb8);
    lVar8 = *(long *)(unaff_x22 + 0xb8);
    if (lVar8 != 0) {
      lVar2 = lVar8;
      func_0x000107c5072c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      if (lVar2 != 0) {
        lVar9 = *(long *)(lVar2 + _DAT_113093358);
        *(long *)(unaff_x22 + 0xd8) = lVar9;
        lVar8 = lVar9;
        func_0x000107c61174();
        uVar1 = (uint)lVar8;
        func_0x000107c61170(lVar2);
        if (lVar9 != 0) {
          func_0x000107c61174();
          func_0x00010486f2a0();
          if ((uVar1 & 0xff) == 9) {
            plVar3 = (long *)0x90;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0xf0) = plVar3;
            *plVar3 = unaff_x22;
            plVar3[1] = 0x1014043e4;
            plVar3[0xd] = lVar7;
            pcVar4 = FUN_101404610;
            uVar5 = 0;
            uVar6 = 0;
          }
          else {
            lVar7 = *(long *)(unaff_x22 + 200);
            func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0xa0,0,0);
            lVar7 = lVar7 + 0x10;
            func_0x000107c61618();
            *(long *)(unaff_x22 + 0xf8) = lVar7;
            if (lVar7 == 0) {
              uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
              func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
              func_0x000107c61170(uVar6);
              goto LAB_10140425c;
            }
            uVar5 = 0;
            func_0x000107c5fcec();
            uVar6 = uVar5;
            func_0x000107c5fce8();
            *(undefined8 *)(unaff_x22 + 0x100) = uVar6;
            func_0x000100eea164();
            func_0x000107c5fca8(uVar5,uVar6);
            pcVar4 = FUN_1014044e0;
          }
          goto LAB_107c615e0;
        }
      }
    }
    lVar8 = *(long *)(unaff_x22 + 200);
    func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x88,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0xe0) = lVar8;
    if (lVar8 != 0) {
      uVar5 = 0;
      func_0x000107c5fcec();
      uVar6 = uVar5;
      func_0x000107c5fce8();
      *(undefined8 *)(unaff_x22 + 0xe8) = uVar6;
      func_0x000100eea164();
      func_0x000107c5fca8(uVar5,uVar6);
      pcVar4 = FUN_1014042f0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar4,uVar5,uVar6);
      return;
    }
    func_0x000107c61574(lVar7);
  }
LAB_10140425c:
                    /* WARNING: Could not recover jumptable at 0x000101404270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014042f0; end: 1014043a7;  */

void FUN_1014042f0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  *(undefined8 *)(unaff_x22 + 0x30) = 0x1014050a0;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  puVar2 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1103b3370;
  func_0x000107c60bc4();
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c420a8(uVar1);
  func_0x000107c60bd0(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014043a8,0,0);
  return;
}



/* Entry: 1014043a8; end: 10140442b;  */

void FUN_1014043a8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001014043e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10140442c; end: 1014044df;  */

void FUN_10140442c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 200);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0xa0,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xf8) = lVar3;
  if (lVar3 != 0) {
    uVar1 = 0;
    func_0x000107c5fcec();
    uVar2 = uVar1;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1014044e0,uVar1,uVar2);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001014044dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014044e0; end: 1014045b3;  */

void FUN_1014044e0(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(unaff_x22 + 0xf8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c49aa0();
  if ((uVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x60) = 0x101405010;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
    puVar2 = (undefined8 *)(unaff_x22 + 0x40);
    *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x50) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x58) = &UNK_1103b3398;
    func_0x000107c60bc4();
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(uVar6);
    func_0x000107c420a8(uVar5);
    func_0x000107c60bd0(puVar2);
    pcVar3 = FUN_1014045b4;
  }
  else {
    pcVar3 = (code *)0x101405098;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 1014045b4; end: 1014045f7;  */

void FUN_1014045b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001014045f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014045f8; end: 10140460f;  */

void FUN_1014045f8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101404610,0,0);
  return;
}



/* Entry: 101404610; end: 1014046c3;  */

void FUN_101404610(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x20);
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c5072c();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x78) = lVar1;
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1014046c4;
      func_0x000107c61448(unaff_x22 + 0x10,1);
      FUN_101404958();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001014046c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014046c4; end: 10140472f;  */

void FUN_1014046c4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_101404730;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101404814;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101404730; end: 101404813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101404730(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + _DAT_113093350);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + _DAT_113093358);
  func_0x000104864a24(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000104863d8c(uVar2,uVar4,uVar1);
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  if (lVar3 != 0) {
    func_0x000107c57ea4(lVar3);
    func_0x000107c615e8(lVar3);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101404810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101404814; end: 10140491b;  */

void FUN_101404814(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar1 = 0;
  FUN_101405028(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
  uVar2 = unaff_x22 + 0x58;
  func_0x000107c6147c(uVar2,(undefined8 *)(unaff_x22 + 0x50),uVar3,uVar1,0);
  if ((uVar2 & 1) != 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
    func_0x0001000d224c(unaff_x22 + 0x60);
    lVar4 = *(long *)(unaff_x22 + 0x60);
    if (lVar4 != 0) {
      func_0x000107c57ea4(lVar4);
      func_0x000107c615e8(lVar4);
    }
    func_0x0001000d224c(unaff_x22 + 0x60);
    lVar4 = *(long *)(unaff_x22 + 0x60);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    if (lVar4 == 0) {
      func_0x000107c61170(uVar3);
    }
    else {
      func_0x000107c57eb0(lVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101404918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  return;
}



/* Entry: 10140491c; end: 101404957;  */

void FUN_10140491c(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3f784();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 101404958; end: 101404beb;  */

/* WARNING: Possible PIC construction at 0x000101404b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101404b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101404958(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar1 = *(long *)(param_2 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar5 = 0xd000000000000057;
    func_0x000107c5fadc(0xd000000000000057,0x800000010ef3d770);
    func_0x000107c466bc();
    func_0x000107c61170(uVar5);
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar6 = puVar4;
  }
  else {
    func_0x0001000d224c(&puStack_70);
    if (puStack_70 != (undefined *)0x0) {
      puVar4 = puStack_70;
      func_0x000107c5072c();
      func_0x000107c61180();
      func_0x000107c615e8(puStack_70);
      if (puVar4 != (undefined *)0x0) {
        lVar7 = *(long *)(puVar4 + _DAT_113093360);
        lVar2 = lVar7;
        func_0x000107c61174(lVar7);
        func_0x000107c61170(puVar4);
        if (lVar7 != 0) {
          lVar7 = lVar1;
          func_0x000107c44264(lVar1);
          func_0x000107c61180();
          puVar4 = &UNK_1103b33d0;
          func_0x000107c613fc(&UNK_1103b33d0,0x18,7);
          *(undefined8 *)(puVar4 + 0x10) = param_1;
          pcStack_50 = FUN_101405068;
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0x42000000;
          pcStack_60 = FUN_101404d0c;
          puStack_58 = &UNK_1103b33e8;
          puStack_48 = puVar4;
          func_0x000107c60bc4(&puStack_70);
          func_0x000107c61574(puStack_48);
          func_0x000107c5dc64(lVar7);
          func_0x000107c60bd0(ppuVar3);
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar7);
          return;
        }
      }
    }
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar5 = 0xd000000000000062;
    func_0x000107c5fadc(0xd000000000000062,0x800000010ef3d7d0);
    func_0x000107c466bc();
    func_0x000107c61170(uVar5);
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar6 = puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_1,uVar5);
  return;
}



/* Entry: 101404bec; end: 101404d0b;  */

void FUN_101404bec(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if (param_2 == 0) {
    if (param_1 != 0) {
      **(long **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
      func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
      return;
    }
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar2 = 0xd000000000000058;
    func_0x000107c5fadc(0xd000000000000058,0x800000010ef3d840);
    func_0x000107c466bc();
    func_0x000107c61170(uVar2);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = puVar1;
  }
  else {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_2;
    func_0x000107c614b0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar2);
  return;
}



/* Entry: 101404d0c; end: 101404d83;  */

/* WARNING: Possible PIC construction at 0x000101404d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101404d6c) */

void FUN_101404d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101404d84; end: 101404dbf;  */

void FUN_101404d84(void)

{
  long unaff_x20;
  
  FUN_101404f00(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101404dc0; end: 101404ddf;  */

void FUN_101404dc0(void)

{
  FUN_101403a38();
  return;
}



/* Entry: 101404de0; end: 101404de7;  */

undefined8 FUN_101404de0(void)

{
  return 0;
}



/* Entry: 101404de8; end: 101404eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101404de8(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61614(lVar1,0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x60))();
  func_0x000107c61604(unaff_x20 + 0x10,lVar1);
  func_0x000107c615e8(lVar1);
  uVar2 = *(undefined8 *)((long)param_1 + _DAT_112d7d610);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  func_0x0001000285a8(0x112d7cb90,&UNK_10d93b7c8);
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130932e8);
  func_0x000107c615f0(uVar2);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(param_3 + _DAT_112f60ef0);
  func_0x000107c61174();
  return;
}



/* Entry: 101404f00; end: 101404f23;  */

undefined8 FUN_101404f00(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101404f24; end: 101404f43;  */

void FUN_101404f24(void)

{
  func_0x000107c61168(&PTR_PTR_112d7cb18);
  return;
}



/* Entry: 101404f44; end: 101404f6f;  */

void FUN_101404f44(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    func_0x000107c420a8(param_1);
  }
  else {
    func_0x000107c55ff0(param_1);
    puVar2 = &UNK_1103b3290;
    func_0x000107c613fc(&UNK_1103b3290,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,lVar1);
    puVar3 = &UNK_1103b3330;
    func_0x000107c613fc(&UNK_1103b3330,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    puVar4 = &UNK_1103b3358;
    func_0x000107c613fc(&UNK_1103b3358,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    uVar5 = 3;
    func_0x0001001ca524(3,0,0x5c,4,0,0,&UNK_10d93b7b0,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 101404f70; end: 101404fd3;  */

void FUN_101404f70(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101404fd4;
  plVar3[0x18] = lVar1;
  plVar3[0x19] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014040e0,0,0);
  return;
}



/* Entry: 101404fd4; end: 101405027;  */

void FUN_101404fd4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010140500c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101405028; end: 101405067;  */

void FUN_101405028(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101405068; end: 1014050a3;  */

void FUN_101405068(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (param_1 != 0) {
      **(long **)(*(long *)(lVar5 + 0x40) + 0x28) = param_1;
      func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar5);
      return;
    }
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar2 = 0xd000000000000058;
    func_0x000107c5fadc(0xd000000000000058,0x800000010ef3d840);
    func_0x000107c466bc();
    func_0x000107c61170(uVar2);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = puVar1;
  }
  else {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_2;
    func_0x000107c614b0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar5,uVar2);
  return;
}



/* Entry: 1014050a4; end: 1014051e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014050a4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lStack_40;
  long lStack_38;
  
  plVar7 = &lStack_40;
  lVar8 = *(long *)(param_1 + 0x10);
  lVar3 = lVar8;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar8);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x000107c61170(uVar4);
  lVar5 = 0;
  FUN_101406428();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar3 = lVar6 + _DAT_112d7cca0;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  *(undefined8 *)(lVar6 + _DAT_112d7cca8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7ccb0) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d7ccb8) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d7ccc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d7ccc8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar6 + _DAT_112d7cc98) = lVar8;
  *(undefined ***)(lVar3 + 8) = &PTR_DAT_1103b3418;
  func_0x000107c61604();
  puVar2 = PTR_s_initWithFrame__1125e2948;
  lStack_40 = lVar6;
  lStack_38 = lVar5;
  func_0x000107c61174(lVar8);
  func_0x000107c61154(0,0,0,0,&lStack_40,puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar7;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  return (undefined1 *)plVar7;
}



/* Entry: 1014051e8; end: 101405483;  */

void FUN_1014051e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_90;
    ppuVar4 = &puStack_90;
    ppuVar5 = &puStack_90;
    ppuVar6 = &puStack_90;
    ppuVar8 = &puStack_90;
    ppuVar9 = &puStack_90;
    func_0x000107c615f0();
    uVar2 = 0x726577736e416e6f;
    func_0x000107c5fadc(0x726577736e416e6f,0xef6c656e6e616843);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_101405484;
    uStack_68 = 0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x10140e4c4;
    puStack_78 = &UNK_1103b3430;
    func_0x000107c60bc4(&puStack_90);
    pcStack_70 = (code *)0x101405490;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    uStack_80 = 0x10127a6c0;
    puStack_78 = &UNK_1103b3458;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6978457061546e6f;
    func_0x000107c5fadc(0x6978457061546e6f,0xe900000000000074);
    pcStack_70 = (code *)0x101405494;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    uStack_80 = 0x10140e4c4;
    puStack_78 = &UNK_1103b3480;
    func_0x000107c60bc4(&puStack_90);
    pcStack_70 = FUN_101405520;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    uStack_80 = 0x10127a6c0;
    puStack_78 = &UNK_1103b34a8;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar2);
    uVar7 = 0x6972747441736f63;
    func_0x000107c5fadc(0x6972747441736f63,0xed00007365747562);
    pcStack_70 = (code *)0x101406464;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    uStack_80 = 0x1013e6cc8;
    puStack_78 = &UNK_1103b34d0;
    uStack_68 = param_2;
    func_0x000107c60bc4(&puStack_90);
    uVar2 = uStack_68;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar2);
    pcStack_70 = FUN_1014059a4;
    uStack_68 = 0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    uStack_80 = 0x101138058;
    puStack_78 = &UNK_1103b34f8;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c3e904(param_1);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 101405484; end: 10140549f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101405484(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_101406428(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112d7ccb0);
    *(undefined8 *)(lVar2 + _DAT_112d7ccb0) = param_2;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1014054a0; end: 10140551f;  */

void FUN_1014054a0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_101406428(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + *param_3);
    *(undefined8 *)(lVar2 + *param_3) = param_2;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 101405520; end: 101405523;  */

void FUN_101405520(void)

{
  return;
}



/* Entry: 101405524; end: 10140594b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101405524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar4;
  
  uVar11 = 0;
  iVar3 = (int)&uStack_90;
  iVar4 = (int)&uStack_90;
  uVar5 = 0;
  FUN_101406428(0);
  lVar6 = param_1;
  func_0x000107c61480(param_1,uVar5);
  if (lVar6 == 0) {
    return;
  }
  func_0x000100672b50(param_2,&uStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_80);
    return;
  }
  func_0x000107c61174(param_1);
  uVar5 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puVar9 = PTR___sypN_11034f1a8;
  func_0x000107c6147c(&uStack_90,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar5,6);
  uVar12 = uStack_90;
  if ((uVar11 & 1) == 0) {
    func_0x000107c61170(param_1);
    return;
  }
  lVar14 = 0x746163737566626f;
  if (*(long *)(uStack_90 + 0x10) == 0) {
LAB_10140567c:
    uVar11 = 0;
    uVar13 = 0;
    if (*(long *)(uVar12 + 0x10) == 0) goto LAB_101405708;
LAB_10140568c:
    func_0x000107c61434(uVar12);
    uVar16 = 0xef656e6f68506465;
    func_0x000100029284(0x746163737566626f);
    if ((uVar16 & 1) == 0) {
      func_0x000107c6142c(uVar12);
      goto LAB_101405708;
    }
    func_0x0001000bb420(*(long *)(uVar12 + 0x38) + lVar14 * 0x20,&uStack_80);
    func_0x000107c6142c(uVar12);
    func_0x000107c6147c(&uStack_90,&uStack_80,puVar9 + 8,PTR___sSSN_11034da80,6);
    uVar16 = uStack_90;
    if (iVar4 == 0) {
      uVar16 = 0;
      uStack_88 = 0;
    }
    uVar15 = uStack_88;
    if (*(long *)(uVar12 + 0x10) != 0) goto LAB_101405718;
LAB_101405764:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
    uVar15 = uStack_88;
  }
  else {
    func_0x000107c61434(uStack_90);
    uVar11 = 0xef6c69616d456465;
    lVar7 = lVar14;
    func_0x000100029284(0x746163737566626f);
    if ((uVar11 & 1) == 0) {
      func_0x000107c6142c(uVar12);
      goto LAB_10140567c;
    }
    func_0x0001000bb420(*(long *)(uVar12 + 0x38) + lVar7 * 0x20,&uStack_80);
    func_0x000107c6142c(uVar12);
    func_0x000107c6147c(&uStack_90,&uStack_80,puVar9 + 8,PTR___sSSN_11034da80,6);
    uVar13 = uStack_88;
    uVar11 = uStack_90;
    if (iVar3 == 0) {
      uVar11 = 0;
      uVar13 = 0;
    }
    if (*(long *)(uVar12 + 0x10) != 0) goto LAB_10140568c;
LAB_101405708:
    uVar16 = 0;
    uVar15 = 0;
    uStack_88 = 0;
    if (*(long *)(uVar12 + 0x10) == 0) goto LAB_101405764;
LAB_101405718:
    func_0x000107c61434(uVar12);
    uVar8 = 0;
    lVar14 = -0x2fffffffffffffef;
    func_0x000100029284(0xd000000000000011);
    if ((uVar8 & 1) == 0) {
      func_0x000107c6142c(uVar12);
      uStack_88 = uVar15;
      goto LAB_101405764;
    }
    func_0x0001000bb420(*(long *)(uVar12 + 0x38) + lVar14 * 0x20,&uStack_80);
    func_0x000107c6142c(uVar12);
  }
  func_0x000107c6142c(uVar12);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    func_0x000107c6147c(&uStack_90,&uStack_80,puVar9 + 8,PTR___sSbN_11034dd40,6);
  }
  puVar1 = (ulong *)(lVar6 + _DAT_112d7ccc0);
  uVar12 = puVar1[1];
  if (uVar12 == 0) {
    if (uVar13 == 0) goto LAB_1014057e8;
LAB_1014057f4:
    *puVar1 = uVar11;
    puVar1[1] = uVar13;
    func_0x000107c61434(uVar13);
    func_0x000107c6142c(uVar12);
    bVar2 = true;
  }
  else {
    if ((uVar13 == 0) ||
       (((uVar8 = *puVar1, uVar8 != uVar11 || (uVar12 != uVar13)) &&
        (func_0x000107c605b8(uVar8,uVar12,uVar11,uVar13,0), (uVar8 & 1) == 0)))) goto LAB_1014057f4;
LAB_1014057e8:
    bVar2 = false;
  }
  puVar1 = (ulong *)(lVar6 + _DAT_112d7ccc8);
  uVar11 = puVar1[1];
  if (uVar11 == 0) {
    func_0x000107c6142c(uVar13);
    if (uVar15 == 0) goto joined_r0x000101405854;
LAB_10140589c:
    uVar11 = puVar1[1];
    *puVar1 = uVar16;
    puVar1[1] = uVar15;
    func_0x000107c6142c(uVar11);
  }
  else {
    if (uVar15 == 0) {
      func_0x000107c6142c(uVar13);
      goto LAB_10140589c;
    }
    uVar12 = *puVar1;
    if ((uVar12 == uVar16) && (uVar11 == uVar15)) {
      func_0x000107c6142c(uVar15);
      uVar15 = uVar13;
    }
    else {
      func_0x000107c605b8(uVar12,uVar11,uVar16,uVar15,0);
      func_0x000107c6142c(uVar13);
      if ((uVar12 & 1) == 0) goto LAB_10140589c;
    }
    func_0x000107c6142c(uVar15);
joined_r0x000101405854:
    if (!bVar2) goto LAB_101405924;
  }
  puVar9 = &UNK_1103b3530;
  func_0x000107c613fc(&UNK_1103b3530,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,param_4);
  puVar10 = &UNK_1103b3558;
  func_0x000107c613fc(&UNK_1103b3558,0x20,7);
  *(undefined **)(puVar10 + 0x10) = puVar9;
  *(long *)(puVar10 + 0x18) = lVar6;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar9);
  FUN_1013f20ec(0x10140646c,puVar10);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar10);
LAB_101405924:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10140594c; end: 1014059a3;  */

void FUN_10140594c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_101405a38();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1014059a4; end: 1014059a7;  */

void FUN_1014059a4(void)

{
  return;
}



/* Entry: 1014059a8; end: 101405a03;  */

void FUN_1014059a8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100cb0d40(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101405a04; end: 101405a37; -[_TtC15COSServicesImplP33_A5E43E7DE0E91AA330979B93AD25E6C333COSSelectCommunicationChannelView initWithCoder:] */

undefined8 FUN_101405a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1014064c4();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 101405a38; end: 101405caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101405a38(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_c0;
  lVar9 = *(long *)(unaff_x20 + _DAT_112d7cc98);
  lVar3 = lVar9;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar9);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d7ccc8);
  lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d7ccc8))[1];
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d7ccc0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d7ccc0))[1];
  puVar4 = PTR_PTR_1126d0cb8;
  func_0x000107c61168(PTR_PTR_1126d0cb8);
  func_0x000107c61434(lVar1);
  func_0x000107c61434(lVar3);
  func_0x000107c407e8(puVar4);
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar11 = 0;
  }
  else {
    func_0x000107c5fadc(uVar11,lVar3);
    func_0x000107c6142c(lVar3);
  }
  if (lVar1 == 0) {
    uVar10 = 0;
  }
  else {
    func_0x000107c5fadc(uVar10,lVar1);
    func_0x000107c6142c(lVar1);
  }
  puVar5 = PTR_PTR_1126d0cc0;
  func_0x000107c610f8(PTR_PTR_1126d0cc0);
  func_0x000107c47b4c();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  puVar4 = &UNK_1103b3620;
  func_0x000107c613fc(&UNK_1103b3620,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1014064ac;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x100e1779c;
  puStack_78 = &UNK_1103b3638;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar7);
  pcStack_a0 = FUN_101405f14;
  uStack_98 = 0;
  puStack_c0 = puVar2;
  uStack_b8 = 0x42000000;
  uStack_b0 = 0x100e17304;
  puStack_a8 = &UNK_1103b3660;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c61174();
  func_0x000107c47be0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(puStack_68);
  puVar4 = PTR_PTR_1126af300;
  func_0x000107c610f8(PTR_PTR_1126af300);
  func_0x000107c464e4();
  func_0x000107c42c1c(lVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101405cb0; end: 101405f13;  */

/* WARNING: Possible PIC construction at 0x000101405d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101405da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101405df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101405e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101405e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101405edc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101405ea0) */
/* WARNING: Removing unreachable block (ram,0x000101405e4c) */
/* WARNING: Removing unreachable block (ram,0x000101405df8) */
/* WARNING: Removing unreachable block (ram,0x000101405da4) */
/* WARNING: Removing unreachable block (ram,0x000101405d04) */
/* WARNING: Removing unreachable block (ram,0x000101405ee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101405cb0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112d7cca8);
    *(long *)(param_2 + _DAT_112d7cca8) = param_1;
    func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 101405f14; end: 101405f37;  */

void FUN_101405f14(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 101405f38; end: 101405f53;  */

/* WARNING: Possible PIC construction at 0x0001014062bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014062d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014062c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101405f38(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &UNK_1103b35d0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7ccb8);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7cc98);
  func_0x000107c615f0(lVar2);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c613fc(&UNK_1103b35d0,0x18,7);
    *(long *)(puVar1 + 0x10) = lVar2;
    uStack_50 = 0x101406948;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_1103b35e8;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c615f0(lVar2);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c5e2a4(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 101405f54; end: 101405f7b; -[_TtC15COSServicesImplP33_A5E43E7DE0E91AA330979B93AD25E6C333COSSelectCommunicationChannelView odlvCOSLandingDismissErrorAlert] */

void FUN_101405f54(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101405f38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101405f7c; end: 101406033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101405f7c(long param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d7cc98;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d7cc98);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c61170();
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      func_0x000107c61174(uVar3);
      uVar4 = uVar3;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(uVar4);
    }
    (*param_2)();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101406034; end: 101406103;  */

void FUN_101406034(long param_1,undefined1 *param_2,long param_3,code *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [24];
  
  puVar2 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar2,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    puVar3 = param_2;
    if (param_2 == (undefined1 *)0x0) {
      lVar1 = param_3;
      func_0x0001052198e8();
      func_0x000107c61180();
      if (lVar1 == 0) {
        param_1 = 0;
        puVar3 = (undefined1 *)0x0;
      }
      else {
        param_1 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        puVar3 = puVar2;
      }
    }
    func_0x000107c61434(param_2);
    (*param_4)(param_1,puVar3);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(puVar3);
  }
  return;
}



/* Entry: 101406104; end: 1014061cb; -[_TtC15COSServicesImplP33_A5E43E7DE0E91AA330979B93AD25E6C333COSSelectCommunicationChannelView odlvCOSLandingSubmitWithOtpType:obfuscatedContact:success:failure:] */

/* WARNING: Possible PIC construction at 0x0001014061b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014061b4) */

void FUN_101406104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1103b3698;
  func_0x000107c613fc(&UNK_1103b3698,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_1103b36c0;
  func_0x000107c613fc(&UNK_1103b36c0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  func_0x000107c61174(param_1);
  FUN_101406578(param_3,0x1014064b4,puVar1,0x1014064bc,puVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1014061cc; end: 1014061e7;  */

/* WARNING: Possible PIC construction at 0x0001014062bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014062d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014062c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014061cc(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &UNK_1103b3580;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7ccb8);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7cc98);
  func_0x000107c615f0(lVar2);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c613fc(&UNK_1103b3580,0x18,7);
    *(long *)(puVar1 + 0x10) = lVar2;
    uStack_50 = 0x101406474;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_1103b3598;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c615f0(lVar2);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c5e2a4(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1014061e8; end: 10140630b;  */

/* WARNING: Possible PIC construction at 0x0001014062bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014062d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014062c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014061e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7ccb8);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7cc98);
  func_0x000107c615f0(lVar2);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c613fc(param_1,0x18,7);
    *(long *)(param_1 + 0x10) = lVar2;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    uStack_58 = param_3;
    uStack_50 = param_2;
    lStack_48 = param_1;
    func_0x000107c60bc4(&puStack_70);
    lVar1 = lStack_48;
    func_0x000107c615f0(lVar2);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c5e2a4(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 10140630c; end: 101406333; -[_TtC15COSServicesImplP33_A5E43E7DE0E91AA330979B93AD25E6C333COSSelectCommunicationChannelView odlvExited] */

void FUN_10140630c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1014061cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101406334; end: 101406337; -[_TtC15COSServicesImplP33_A5E43E7DE0E91AA330979B93AD25E6C333COSSelectCommunicationChannelView odlvFinishedWithLoginSuccess:] */

void FUN_101406334(void)

{
  return;
}



/* Entry: 101406338; end: 101406397; -[_TtC15COSServicesImplP33_A5E43E7DE0E91AA330979B93AD25E6C333COSSelectCommunicationChannelView initWithFrame:] */

void FUN_101406338(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSSelectCommunicationChannelView",0x31,"init(frame:)",0xc,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101406364);
  (*pcVar1)();
}



/* Entry: 101406398; end: 101406427; -[_TtC15COSServicesImplP33_A5E43E7DE0E91AA330979B93AD25E6C333COSSelectCommunicationChannelView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101406408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010140640c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101406398(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7cc98));
  FUN_100cb0d40(param_1 + _DAT_112d7cca0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7cca8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7ccb0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7ccb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7ccc0 + 8))
  ;
  return;
}



/* Entry: 101406428; end: 101406447;  */

void FUN_101406428(void)

{
  func_0x000107c61168(&PTR_PTR_1127d2ad8);
  return;
}



/* Entry: 101406448; end: 101406477;  */

void FUN_101406448(long param_1,long param_2)

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



/* Entry: 101406478; end: 1014064ab;  */

void FUN_101406478(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c30ef0();
  func_0x000107c4e5ec(uVar1);
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b97f468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 1014064ac; end: 1014064c3;  */

/* WARNING: Possible PIC construction at 0x000101405d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101405da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101405df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101405e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101405e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101405edc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101405ea0) */
/* WARNING: Removing unreachable block (ram,0x000101405e4c) */
/* WARNING: Removing unreachable block (ram,0x000101405df8) */
/* WARNING: Removing unreachable block (ram,0x000101405da4) */
/* WARNING: Removing unreachable block (ram,0x000101405d04) */
/* WARNING: Removing unreachable block (ram,0x000101405ee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014064ac(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d7cca8);
    *(long *)(lVar2 + _DAT_112d7cca8) = param_1;
    func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1014064c4; end: 101406577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014064c4(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d7cca0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7cca8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7ccb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7ccb8) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7ccc0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7ccc8);
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "COSServicesImpl/COSSelectCommunicationChannelView.swift",0x37,2,0xaa,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101406578);
  (*pcVar3)();
}



/* Entry: 101406578; end: 1014068bb;  */

/* WARNING: Possible PIC construction at 0x00010140672c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014067b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101406860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101406768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101406864) */
/* WARNING: Removing unreachable block (ram,0x000101406730) */
/* WARNING: Removing unreachable block (ram,0x00010140676c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101406578(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112d7ccb0);
  if (lVar5 == 0) {
    return;
  }
  if (param_1 == 0) {
LAB_101406630:
    lVar1 = lVar5;
    func_0x000107c615f0(lVar5);
    func_0x000107c30ef0();
    func_0x000107c30f10();
    func_0x000107c4e5ec(lVar5);
    func_0x000107c30ef4(lVar1);
    lVar6 = _DAT_112d7cca0;
    lVar1 = unaff_x20 + _DAT_112d7cca0;
    func_0x000107c61618();
    if (lVar1 == 0) {
      lVar6 = unaff_x20 + lVar6;
      func_0x000107c61618();
      if (lVar6 != 0) {
        puVar2 = &UNK_1103b36e8;
        func_0x000107c613fc(&UNK_1103b36e8,0x18,7);
        func_0x000107c61614(puVar2 + 0x10);
        puVar3 = &UNK_1103b3738;
        func_0x000107c613fc(&UNK_1103b3738,0x28,7);
        *(undefined **)(puVar3 + 0x10) = puVar2;
        *(code **)(puVar3 + 0x18) = param_4;
        *(undefined8 *)(puVar3 + 0x20) = param_5;
        lVar1 = lVar6 + 0x20;
        func_0x000107c61618();
        if (lVar1 == 0) {
          func_0x000107c6157c(puVar2);
          func_0x000107c6157c(param_5);
          func_0x000107c61574(puVar2);
          func_0x000107c615e8(lVar5);
          func_0x000107c61574(puVar3);
          lVar5 = lVar6;
        }
        else {
          lVar6 = *(long *)(lVar6 + 0x28);
          lVar5 = lVar1;
          func_0x000107c614f0();
          pcVar4 = *(code **)(lVar6 + 8);
          func_0x000107c6157c(puVar2);
          func_0x000107c6157c(param_5);
          (*pcVar4)(FUN_1014068f4,puVar3,lVar5,lVar6);
          func_0x000107c61574(puVar2);
          lVar5 = lVar1;
        }
      }
    }
    else {
      puVar2 = &UNK_1103b36e8;
      func_0x000107c613fc(&UNK_1103b36e8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar3 = &UNK_1103b3710;
      func_0x000107c613fc(&UNK_1103b3710,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined8 *)(puVar3 + 0x18) = param_2;
      *(undefined8 *)(puVar3 + 0x20) = param_3;
      lVar5 = lVar1 + 0x20;
      func_0x000107c61618();
      if (lVar5 == 0) {
        func_0x000107c6157c(puVar2);
        func_0x000107c6157c(param_3);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(puVar3);
        lVar5 = lVar1;
      }
      else {
        lVar6 = *(long *)(lVar1 + 0x28);
        lVar1 = lVar5;
        func_0x000107c614f0();
        pcVar4 = *(code **)(lVar6 + 0x20);
        func_0x000107c6157c(puVar2);
        func_0x000107c6157c(param_3);
        (*pcVar4)(FUN_1014068bc,puVar3,lVar1,lVar6);
        func_0x000107c61574(puVar2);
      }
    }
    goto code_r0x000107c615e8;
  }
  lVar1 = lVar5;
  if (param_1 == 2) {
    func_0x000107c615f0();
    func_0x0001052198e8();
    func_0x000107c61180();
    if (lVar1 == 0) goto LAB_10140674c;
LAB_10140660c:
    lVar6 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  else {
    if (param_1 == 1) goto LAB_101406630;
    func_0x000107c615f0();
    func_0x0001052198e8();
    func_0x000107c61180();
    if (lVar1 != 0) goto LAB_10140660c;
LAB_10140674c:
    lVar6 = 0;
    param_2 = 0;
  }
  (*param_4)(lVar6,param_2);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
  return;
}



/* Entry: 1014068bc; end: 1014068c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014068bc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112d7cc98;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112d7cc98);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c61170();
      uVar5 = *(undefined8 *)(lVar3 + lVar2);
      func_0x000107c61174(uVar5);
      uVar6 = uVar5;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar6);
    }
    (*pcVar1)();
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1014068c8; end: 1014068f3;  */

void FUN_1014068c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014068f4; end: 10140694b;  */

void FUN_1014068f4(long param_1,undefined1 *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 *puVar5;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  puVar4 = auStack_68;
  func_0x000107c61428(lVar2 + 0x10,puVar4,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar5 = param_2;
    if (param_2 == (undefined1 *)0x0) {
      lVar3 = lVar2;
      func_0x0001052198e8();
      func_0x000107c61180();
      if (lVar3 == 0) {
        param_1 = 0;
        puVar5 = (undefined1 *)0x0;
      }
      else {
        param_1 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        puVar5 = puVar4;
      }
    }
    func_0x000107c61434(param_2);
    (*pcVar1)(param_1,puVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(puVar5);
  }
  return;
}



/* Entry: 10140694c; end: 101406a4b;  */

void FUN_10140694c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x78) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  *(undefined8 *)(unaff_x20 + 0x88) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_13;
  *(undefined8 *)(unaff_x20 + 0x98) = param_16;
  *(undefined8 *)(unaff_x20 + 0x90) = param_15;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_20;
  *(undefined8 *)(unaff_x20 + 0x30) = param_21;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_22;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_23;
  *(undefined8 *)(unaff_x20 + 200) = param_24;
  return;
}



/* Entry: 101406a4c; end: 101406b6b;  */

void FUN_101406a4c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  uVar1 = 0x112d7ccf8;
  func_0x0001000285a8(0x112d7ccf8,&UNK_10d93b890);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar2 = FUN_101407348;
  func_0x0001000bdd8c(FUN_101407348);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar2);
  func_0x000107c613fc(uVar1,0x18,7);
  func_0x000107c6157c();
  uVar4 = 0x101407350;
  func_0x0001000bdd8c(0x101407350);
  uVar5 = uVar4;
  func_0x0001003a5b88();
  func_0x000107c61574(uVar4);
  func_0x000107c613fc(uVar1,0x18,7);
  func_0x000107c6157c();
  pcVar2 = FUN_101407b24;
  func_0x0001000bdd8c(FUN_101407b24);
  pcVar6 = pcVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar2);
  func_0x0001033aae7c(0);
  func_0x000107c610f8();
  func_0x0001033aad60(pcVar3,uVar5,pcVar6);
  return;
}



/* Entry: 101406b6c; end: 101407347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101406b6c(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x0001000285a8(0x112d7ce90,&UNK_10d93b990);
  func_0x000107c613fc();
  pcVar1 = FUN_101407780;
  func_0x0001000bdd8c(FUN_101407780,0);
  func_0x0001000285a8(0x112d7ce98,&UNK_10d93b998);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar3 = 0x1014089c0;
  func_0x0001000bdd8c(0x1014089c0,param_2);
  func_0x0001000285a8(0x112d7cea0,&UNK_10d93b9a0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar4 = 0x1014089c4;
  func_0x0001000bdd8c(0x1014089c4,param_2);
  func_0x0001000285a8(0x112d7cea8,&UNK_10d93b9a8);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar5 = 0x1014089c8;
  func_0x0001000bdd8c(0x1014089c8,param_2);
  func_0x0001000285a8(0x112d7ceb0,&UNK_10d93b9b0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar6 = 0x1014089cc;
  func_0x0001000bdd8c(0x1014089cc,param_2);
  func_0x0001000285a8(0x112d7ceb8,&UNK_10d93b9b8);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar7 = 0x1014089d0;
  func_0x0001000bdd8c(0x1014089d0,param_2);
  func_0x0001000285a8(0x112d7cec0,&UNK_10d93b9c0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar8 = 0x1014089d4;
  func_0x0001000bdd8c(0x1014089d4,param_2);
  func_0x0001000285a8(0x112d7cec8,&UNK_10d93b9c8);
  func_0x000107c613fc();
  uVar9 = 0x1014089d8;
  func_0x0001000bdd8c(0x1014089d8,uVar8);
  func_0x0001000285a8(0x112d7ced0,&UNK_10d93b9d0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar10 = FUN_101408978;
  func_0x0001000bdd8c(FUN_101408978,param_2);
  func_0x0001000285a8(0x112d7ced8,&UNK_10d93b9d8);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar8 = 0x1014089dc;
  func_0x0001000bdd8c(0x1014089dc,param_2);
  uVar11 = *(undefined8 *)(param_2 + 0x78);
  uVar12 = *(undefined8 *)(param_2 + 0xb8);
  uVar14 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + _DAT_112d7d648);
  lVar15 = *(long *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar15 != 0) {
    lVar13 = 0;
    func_0x0001013ef64c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar13 + 0x88) = 0;
    *(undefined8 *)(lVar13 + 0x90) = 0;
    *(undefined8 *)(lVar13 + 0x10) = uVar2;
    *(code **)(lVar13 + 0x18) = pcVar1;
    *(undefined8 *)(lVar13 + 0x20) = uVar3;
    *(undefined8 *)(lVar13 + 0x28) = uVar4;
    *(undefined8 *)(lVar13 + 0x30) = uVar5;
    *(undefined8 *)(lVar13 + 0x38) = uVar6;
    *(undefined8 *)(lVar13 + 0x40) = uVar7;
    *(undefined8 *)(lVar13 + 0x48) = uVar9;
    *(code **)(lVar13 + 0x50) = pcVar10;
    *(undefined8 *)(lVar13 + 0x58) = uVar8;
    *(undefined8 *)(lVar13 + 0x60) = uVar11;
    *(undefined8 *)(lVar13 + 0x68) = uVar12;
    *(undefined8 *)(lVar13 + 0x70) = uVar14;
    *(long *)(lVar13 + 0x78) = lVar15;
    *(undefined8 *)(lVar13 + 0x80) = 0;
    *param_1 = lVar13;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101406ed8);
  (*pcVar1)();
}



/* Entry: 101407348; end: 101407357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101407348(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined8 auStack_110 [4];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined8 auStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  plStack_c0 = param_1;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uStack_c8 = uVar2;
  func_0x0001000285a8(0x112d7ce90,&UNK_10d93b990);
  func_0x000107c613fc();
  pcVar1 = FUN_101407780;
  func_0x0001000bdd8c(FUN_101407780,0);
  pcStack_d0 = pcVar1;
  func_0x0001000285a8(0x112d7ce98,&UNK_10d93b998);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar2 = 0x1014089e0;
  func_0x0001000bdd8c();
  uStack_d8 = uVar2;
  func_0x0001000285a8(0x112d7cea0,&UNK_10d93b9a0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar2 = 0x1014089e4;
  func_0x0001000bdd8c();
  uStack_e0 = uVar2;
  func_0x0001000285a8(0x112d7ceb0,&UNK_10d93b9b0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar2 = 0x1014089e8;
  func_0x0001000bdd8c();
  uStack_e8 = uVar2;
  func_0x0001000285a8(0x112d7ceb8,&UNK_10d93b9b8);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar2 = 0x1014089ec;
  func_0x0001000bdd8c();
  uStack_f0 = uVar2;
  func_0x0001000285a8(0x112d7cec0,&UNK_10d93b9c0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar2 = 0x1014089f0;
  func_0x0001000bdd8c(0x1014089f0);
  func_0x0001000285a8(0x112d7cec8,&UNK_10d93b9c8);
  func_0x000107c613fc();
  uVar3 = 0x1014089f4;
  func_0x0001000bdd8c(0x1014089f4,uVar2);
  uVar2 = 0x112d7ced0;
  auStack_110[3] = uVar3;
  func_0x0001000285a8(0x112d7ced0,&UNK_10d93b9d0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar3 = 0x101408994;
  func_0x0001000bdd8c();
  uVar9 = 0x112d7ced8;
  auStack_110[2] = uVar3;
  func_0x0001000285a8(0x112d7ced8,&UNK_10d93b9d8);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar3 = 0x10140899c;
  func_0x0001000bdd8c();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0xc0) + _DAT_112d7d648);
  lVar11 = *(long *)(unaff_x20 + 0x48);
  auStack_110[1] = uVar3;
  func_0x000107c61174();
  auStack_110[0] = uVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar11 != 0) {
    func_0x000107c613fc(uVar2,0x18,7);
    func_0x000107c6157c();
    uVar2 = 0x1014089f8;
    func_0x0001000bdd8c();
    func_0x000107c613fc(uVar9,0x18,7);
    func_0x000107c6157c();
    uVar3 = 0x1014089fc;
    func_0x0001000bdd8c(0x1014089fc);
    uVar9 = uVar2;
    FUN_101407b2c(uVar2,uVar3,0);
    lVar6 = 0;
    func_0x0001014006d4();
    ppuStack_70 = &PTR_DAT_1103b2a30;
    lVar7 = 0;
    auStack_90[0] = uVar9;
    lStack_78 = lVar6;
    func_0x0001013ff1fc();
    func_0x000107c613fc();
    func_0x0001000c6518(auStack_90,lVar6);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    puVar8 = (undefined8 *)((long)auStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar8);
    uVar9 = *puVar8;
    ppuStack_98 = &PTR_DAT_1103b2a30;
    lStack_a0 = lVar6;
    func_0x000107c61574(uVar2);
    func_0x000107c61574(uVar3);
    auStack_b8[0] = uVar9;
    func_0x0001014089a4(auStack_b8,lVar7 + 0x10);
    func_0x0001000834e4(auStack_90);
    lVar6 = 0;
    func_0x0001013ef64c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x90) = 0;
    *(undefined8 *)(lVar6 + 0x10) = uStack_c8;
    *(code **)(lVar6 + 0x18) = pcStack_d0;
    *(undefined8 *)(lVar6 + 0x20) = uStack_d8;
    *(undefined8 *)(lVar6 + 0x28) = uStack_e0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x38) = uStack_e8;
    *(undefined8 *)(lVar6 + 0x40) = uStack_f0;
    *(undefined8 *)(lVar6 + 0x48) = auStack_110[3];
    *(undefined8 *)(lVar6 + 0x50) = auStack_110[2];
    *(undefined8 *)(lVar6 + 0x58) = auStack_110[1];
    *(undefined8 *)(lVar6 + 0x60) = auStack_110[0];
    *(undefined8 *)(lVar6 + 0x68) = uVar5;
    *(undefined8 *)(lVar6 + 0x70) = uVar10;
    *(long *)(lVar6 + 0x78) = lVar11;
    *(long *)(lVar6 + 0x80) = lVar7;
    *(undefined8 *)(lVar6 + 0x88) = 0;
    *plStack_c0 = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101407348);
  (*pcVar1)();
}



/* Entry: 101407358; end: 1014076af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101407358(long *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lStack_70;
  long lStack_68;
  
  func_0x0001000285a8(0x112d7cef0,&UNK_10d93b9f0);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_113083770);
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112d7cf18,&UNK_10d93ba20);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c4fd04();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112d7cf00,&UNK_10d93ba00);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c44fe4();
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  func_0x0001000285a8(0x112d7cf08,&UNK_10d93ba08);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c3e474();
  func_0x000107c61180();
  uVar6 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  lVar8 = *(long *)(param_2 + 0x48);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar8 != 0) {
    uVar15 = *(undefined8 *)(param_2 + 0x50);
    func_0x0001000285a8(0x112d7cf10,&UNK_10d93ba10);
    uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x58) + _DAT_11305b178);
    func_0x000107c61174();
    uVar7 = uVar9;
    func_0x0001000bda74();
    func_0x000107c61170(uVar9);
    puVar14 = &UNK_10d93ba28;
    func_0x0001000285a8(0x112d7cf20);
    uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x68) + _DAT_113080ae0);
    func_0x000107c61174();
    uVar9 = uVar10;
    func_0x0001000bda74();
    func_0x000107c61170(uVar10);
    lVar11 = 0;
    FUN_1013ebee8();
    lVar12 = lVar11;
    func_0x000107c610f8();
    *(undefined8 *)(lVar12 + _DAT_112d7bd88) = uVar4;
    *(undefined8 *)(lVar12 + _DAT_112d7bd90) = uVar3;
    *(undefined8 *)(lVar12 + _DAT_112d7bd98) = 0;
    *(undefined8 *)(lVar12 + _DAT_112d7bda0) = uVar5;
    *(undefined8 *)(lVar12 + _DAT_112d7bda8) = uVar6;
    *(long *)(lVar12 + _DAT_112d7bdb0) = lVar8;
    *(undefined8 *)(lVar12 + _DAT_112d7bdb8) = uVar15;
    *(undefined8 *)(lVar12 + _DAT_112d7bdc0) = uVar7;
    *(undefined8 *)(lVar12 + _DAT_112d7bdc8) = uVar9;
    *(undefined4 *)(lVar12 + _DAT_112d7bdd0) = 0;
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(uVar6);
    func_0x000107c615f0(lVar8);
    func_0x000107c615f0(uVar15);
    func_0x000107c6157c(uVar7);
    uVar10 = uVar9;
    func_0x000107c6157c();
    func_0x00010011df08();
    func_0x000107c61180();
    uVar15 = uVar10;
    func_0x000107c5faec();
    func_0x000107c61170(uVar10);
    puVar1 = (undefined8 *)(lVar12 + _DAT_112d7bdd8);
    *puVar1 = uVar15;
    puVar1[1] = puVar14;
    plVar13 = &lStack_70;
    lStack_70 = lVar12;
    lStack_68 = lVar11;
    func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(uVar6);
    func_0x000107c615e8(lVar8);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(uVar9);
    *param_1 = (long)plVar13;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014076b0);
  (*pcVar2)();
}



/* Entry: 1014076b0; end: 10140777f;  */

void FUN_1014076b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c4d1c4(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126af348;
  func_0x000107c610f8();
  func_0x000107c4917c();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 101407780; end: 1014077b7;  */

void FUN_101407780(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010140d9f8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1014077b8; end: 101407b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014077b8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x0001000285a8(0x112d7ce90,&UNK_10d93b990);
  func_0x000107c613fc();
  pcVar1 = FUN_101407780;
  func_0x0001000bdd8c(FUN_101407780,0);
  func_0x0001000285a8(0x112d7ce98,&UNK_10d93b998);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar3 = FUN_1014088fc;
  func_0x0001000bdd8c(FUN_1014088fc,param_2);
  func_0x0001000285a8(0x112d7cea0,&UNK_10d93b9a0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar4 = 0x101408904;
  func_0x0001000bdd8c(0x101408904,param_2);
  func_0x0001000285a8(0x112d7cea8,&UNK_10d93b9a8);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar5 = 0x10140890c;
  func_0x0001000bdd8c(0x10140890c,param_2);
  func_0x0001000285a8(0x112d7ceb0,&UNK_10d93b9b0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar6 = 0x101408914;
  func_0x0001000bdd8c(0x101408914,param_2);
  func_0x0001000285a8(0x112d7ceb8,&UNK_10d93b9b8);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar7 = 0x10140891c;
  func_0x0001000bdd8c(0x10140891c,param_2);
  func_0x0001000285a8(0x112d7cec0,&UNK_10d93b9c0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar8 = 0x101408924;
  func_0x0001000bdd8c(0x101408924,param_2);
  func_0x0001000285a8(0x112d7cec8,&UNK_10d93b9c8);
  func_0x000107c613fc();
  uVar9 = 0x10140892c;
  func_0x0001000bdd8c(0x10140892c,uVar8);
  func_0x0001000285a8(0x112d7ced0,&UNK_10d93b9d0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar10 = FUN_101408934;
  func_0x0001000bdd8c(FUN_101408934,param_2);
  func_0x0001000285a8(0x112d7ced8,&UNK_10d93b9d8);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar11 = FUN_101408950;
  func_0x0001000bdd8c(FUN_101408950,param_2);
  uVar12 = *(undefined8 *)(param_2 + 0x78);
  uVar8 = *(undefined8 *)(param_2 + 0xb8);
  uVar14 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + _DAT_112d7d648);
  lVar15 = *(long *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar15 != 0) {
    lVar13 = 0;
    func_0x0001013ef64c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar13 + 0x88) = 0;
    *(undefined8 *)(lVar13 + 0x90) = 0;
    *(undefined8 *)(lVar13 + 0x10) = uVar2;
    *(code **)(lVar13 + 0x18) = pcVar1;
    *(code **)(lVar13 + 0x20) = pcVar3;
    *(undefined8 *)(lVar13 + 0x28) = uVar4;
    *(undefined8 *)(lVar13 + 0x30) = uVar5;
    *(undefined8 *)(lVar13 + 0x38) = uVar6;
    *(undefined8 *)(lVar13 + 0x40) = uVar7;
    *(undefined8 *)(lVar13 + 0x48) = uVar9;
    *(code **)(lVar13 + 0x50) = pcVar10;
    *(code **)(lVar13 + 0x58) = pcVar11;
    *(undefined8 *)(lVar13 + 0x60) = uVar12;
    *(undefined8 *)(lVar13 + 0x68) = uVar8;
    *(undefined8 *)(lVar13 + 0x70) = uVar14;
    *(long *)(lVar13 + 0x78) = lVar15;
    *(undefined8 *)(lVar13 + 0x80) = 0;
    *param_1 = lVar13;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101407b24);
  (*pcVar1)();
}



/* Entry: 101407b24; end: 101407b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101407b24(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x0001000285a8(0x112d7ce90,&UNK_10d93b990);
  func_0x000107c613fc();
  pcVar1 = FUN_101407780;
  func_0x0001000bdd8c(FUN_101407780,0);
  func_0x0001000285a8(0x112d7ce98,&UNK_10d93b998);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar3 = FUN_1014088fc;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d7cea0,&UNK_10d93b9a0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar4 = 0x101408904;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d7cea8,&UNK_10d93b9a8);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar5 = 0x10140890c;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d7ceb0,&UNK_10d93b9b0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar6 = 0x101408914;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d7ceb8,&UNK_10d93b9b8);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar7 = 0x10140891c;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d7cec0,&UNK_10d93b9c0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar8 = 0x101408924;
  func_0x0001000bdd8c(0x101408924);
  func_0x0001000285a8(0x112d7cec8,&UNK_10d93b9c8);
  func_0x000107c613fc();
  uVar9 = 0x10140892c;
  func_0x0001000bdd8c(0x10140892c,uVar8);
  func_0x0001000285a8(0x112d7ced0,&UNK_10d93b9d0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar10 = FUN_101408934;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d7ced8,&UNK_10d93b9d8);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar11 = FUN_101408950;
  func_0x0001000bdd8c();
  uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0xc0) + _DAT_112d7d648);
  lVar15 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar15 != 0) {
    lVar13 = 0;
    func_0x0001013ef64c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar13 + 0x88) = 0;
    *(undefined8 *)(lVar13 + 0x90) = 0;
    *(undefined8 *)(lVar13 + 0x10) = uVar2;
    *(code **)(lVar13 + 0x18) = pcVar1;
    *(code **)(lVar13 + 0x20) = pcVar3;
    *(undefined8 *)(lVar13 + 0x28) = uVar4;
    *(undefined8 *)(lVar13 + 0x30) = uVar5;
    *(undefined8 *)(lVar13 + 0x38) = uVar6;
    *(undefined8 *)(lVar13 + 0x40) = uVar7;
    *(undefined8 *)(lVar13 + 0x48) = uVar9;
    *(code **)(lVar13 + 0x50) = pcVar10;
    *(code **)(lVar13 + 0x58) = pcVar11;
    *(undefined8 *)(lVar13 + 0x60) = uVar12;
    *(undefined8 *)(lVar13 + 0x68) = uVar8;
    *(undefined8 *)(lVar13 + 0x70) = uVar14;
    *(long *)(lVar13 + 0x78) = lVar15;
    *(undefined8 *)(lVar13 + 0x80) = 0;
    *param_1 = lVar13;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101407b24);
  (*pcVar1)();
}



/* Entry: 101407b2c; end: 101408117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101407b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x0001000285a8(0x112d7ce90,&UNK_10d93b990);
  func_0x000107c613fc();
  pcVar1 = FUN_101407780;
  func_0x0001000bdd8c(FUN_101407780,0);
  func_0x0001000285a8(0x112d7ce98,&UNK_10d93b998);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar2 = 0x101408a00;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d7ceb0,&UNK_10d93b9b0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar3 = 0x101408a04;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d7ceb8,&UNK_10d93b9b8);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar4 = 0x101408a08;
  func_0x0001000bdd8c();
  func_0x0001000285a8(0x112d7cec0,&UNK_10d93b9c0);
  func_0x000107c613fc();
  func_0x000107c6157c();
  uVar5 = 0x101408a0c;
  func_0x0001000bdd8c(0x101408a0c);
  uVar6 = 0x112d7cec8;
  func_0x0001000285a8(0x112d7cec8,&UNK_10d93b9c8);
  func_0x000107c613fc();
  uVar7 = 0x101408a10;
  func_0x0001000bdd8c(0x101408a10,uVar5,uVar6);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x88);
  puVar8 = &UNK_1103b3788;
  func_0x000107c613fc(&UNK_1103b3788,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar13;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x98);
  func_0x0001000285a8(0x112d7cb90,&UNK_10d93b7c8);
  uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0xb0) + _DAT_1130932e8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = uVar14;
  func_0x0001000bda74();
  func_0x000107c61170(uVar14);
  lVar11 = 0;
  func_0x0001014006d4();
  func_0x000107c613fc();
  *(code **)(lVar11 + 0x10) = pcVar1;
  *(undefined8 *)(lVar11 + 0x18) = uVar2;
  *(undefined8 *)(lVar11 + 0x20) = param_3;
  *(undefined8 *)(lVar11 + 0x28) = uVar3;
  *(undefined8 *)(lVar11 + 0x30) = uVar4;
  *(undefined8 *)(lVar11 + 0x38) = uVar7;
  *(undefined8 *)(lVar11 + 0x40) = param_1;
  *(undefined8 *)(lVar11 + 0x48) = param_2;
  *(undefined8 *)(lVar11 + 0x50) = uVar5;
  *(undefined8 *)(lVar11 + 0x58) = uVar12;
  *(undefined8 *)(lVar11 + 0x60) = uVar9;
  *(undefined8 *)(lVar11 + 0x68) = 0x1014089bc;
  *(undefined **)(lVar11 + 0x70) = puVar8;
  *(undefined8 *)(lVar11 + 0x78) = uVar6;
  *(undefined8 *)(lVar11 + 0x80) = uVar10;
  *(undefined8 *)(lVar11 + 0x88) = uVar13;
  func_0x000107c6157c();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  return lVar11;
}



/* Entry: 101408118; end: 10140846f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101408118(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  func_0x0001000285a8(0x112d7cee0,&UNK_10d93b9e0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c4c028();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d7cee8,&UNK_10d93b9e8);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c418c0();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  lVar4 = 0;
  FUN_1013effa4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d7bf48) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112d7bf50) = uVar1;
  *(undefined1 *)(lVar5 + _DAT_112d7bf58) = 1;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 101408470; end: 101408667;  */

void FUN_101408470(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  lVar1 = 0;
  func_0x000101409608();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  func_0x000107c61614(lVar1 + 0x20,0);
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  func_0x0001000295c4(0);
  func_0x000107c61174();
  func_0x000107c5ffdc();
  lVar2 = 0;
  func_0x0001013f2340();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x3fb999999999999a;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(long *)(lVar1 + 0x30) = lVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 101408668; end: 1014088d7;  */

/* WARNING: Possible PIC construction at 0x000101408674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101408684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101408694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014086a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014086bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014086cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014086dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014086ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014086fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010140870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010140871c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101408710) */
/* WARNING: Removing unreachable block (ram,0x000101408700) */
/* WARNING: Removing unreachable block (ram,0x0001014086f0) */
/* WARNING: Removing unreachable block (ram,0x0001014086e0) */
/* WARNING: Removing unreachable block (ram,0x0001014086d0) */
/* WARNING: Removing unreachable block (ram,0x0001014086c0) */
/* WARNING: Removing unreachable block (ram,0x0001014086a8) */
/* WARNING: Removing unreachable block (ram,0x000101408698) */
/* WARNING: Removing unreachable block (ram,0x000101408688) */
/* WARNING: Removing unreachable block (ram,0x000101408678) */
/* WARNING: Removing unreachable block (ram,0x000101408720) */

void FUN_101408668(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1014088d8; end: 1014088fb;  */

void FUN_1014088d8(undefined8 *param_1,undefined8 param_2)

{
  FUN_101406a4c();
  *param_1 = param_2;
  return;
}



/* Entry: 1014088fc; end: 101408933;  */

void FUN_1014088fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  puVar2 = &UNK_1103b3760;
  func_0x000107c613fc(&UNK_1103b3760,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  func_0x0001013f7cc0(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  FUN_1013f6b18(uVar3,FUN_101408958,puVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 101408934; end: 10140894f;  */

void FUN_101408934(void)

{
  func_0x000101407e14();
  return;
}



/* Entry: 101408950; end: 101408957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101408950(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  func_0x0001000285a8(0x112d7cee0,&UNK_10d93b9e0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4c028();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d7cee8,&UNK_10d93b9e8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c418c0();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  lVar4 = 0;
  FUN_1013effa4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d7bf48) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112d7bf50) = uVar1;
  *(undefined1 *)(lVar5 + _DAT_112d7bf58) = 1;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 101408958; end: 101408977;  */

void FUN_101408958(void)

{
  func_0x00010430e07c();
  return;
}



/* Entry: 101408978; end: 101408993;  */

void FUN_101408978(void)

{
  func_0x000101407e14();
  return;
}



/* Entry: 101408994; end: 101408a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101408994(long *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lStack_70;
  long lStack_68;
  
  func_0x0001000285a8(0x112d7cef0,&UNK_10d93b9f0);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083770);
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112d7cf18,&UNK_10d93ba20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c4fd04();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112d7cf00,&UNK_10d93ba00);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c44fe4();
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  func_0x0001000285a8(0x112d7cf08,&UNK_10d93ba08);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c3e474();
  func_0x000107c61180();
  uVar6 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar8 != 0) {
    uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x0001000285a8(0x112d7cf10,&UNK_10d93ba10);
    uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + _DAT_11305b178);
    func_0x000107c61174();
    uVar7 = uVar9;
    func_0x0001000bda74();
    func_0x000107c61170(uVar9);
    puVar14 = &UNK_10d93ba28;
    func_0x0001000285a8(0x112d7cf20);
    uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + _DAT_113080ae0);
    func_0x000107c61174();
    uVar9 = uVar10;
    func_0x0001000bda74();
    func_0x000107c61170(uVar10);
    lVar11 = 0;
    FUN_1013ebee8();
    lVar12 = lVar11;
    func_0x000107c610f8();
    *(undefined8 *)(lVar12 + _DAT_112d7bd88) = uVar4;
    *(undefined8 *)(lVar12 + _DAT_112d7bd90) = uVar3;
    *(undefined8 *)(lVar12 + _DAT_112d7bd98) = 0;
    *(undefined8 *)(lVar12 + _DAT_112d7bda0) = uVar5;
    *(undefined8 *)(lVar12 + _DAT_112d7bda8) = uVar6;
    *(long *)(lVar12 + _DAT_112d7bdb0) = lVar8;
    *(undefined8 *)(lVar12 + _DAT_112d7bdb8) = uVar15;
    *(undefined8 *)(lVar12 + _DAT_112d7bdc0) = uVar7;
    *(undefined8 *)(lVar12 + _DAT_112d7bdc8) = uVar9;
    *(undefined4 *)(lVar12 + _DAT_112d7bdd0) = 0;
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(uVar6);
    func_0x000107c615f0(lVar8);
    func_0x000107c615f0(uVar15);
    func_0x000107c6157c(uVar7);
    uVar10 = uVar9;
    func_0x000107c6157c();
    func_0x00010011df08();
    func_0x000107c61180();
    uVar15 = uVar10;
    func_0x000107c5faec();
    func_0x000107c61170(uVar10);
    puVar1 = (undefined8 *)(lVar12 + _DAT_112d7bdd8);
    *puVar1 = uVar15;
    puVar1[1] = puVar14;
    plVar13 = &lStack_70;
    lStack_70 = lVar12;
    lStack_68 = lVar11;
    func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(uVar6);
    func_0x000107c615e8(lVar8);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(uVar9);
    *param_1 = (long)plVar13;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014076b0);
  (*pcVar2)();
}



/* Entry: 101408a38; end: 101408ae3;  */

void FUN_101408a38(void)

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



/* Entry: 101408ae4; end: 101408b07;  */

void FUN_101408ae4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 101408b08; end: 101408be7;  */

long FUN_101408b08(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2;
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    lVar3 = *(long *)(param_1 + 0x10);
    FUN_10140a4c4(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c6157c(param_1);
    lVar1 = lVar3;
    FUN_10140a6fc(uVar4,uVar5,uVar6,uVar7,lVar3,param_1,&PTR_DAT_1103b3868);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 101408be8; end: 10140928b;  */

void FUN_101408be8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_a0;
    ppuVar4 = &puStack_a0;
    ppuVar5 = &puStack_a0;
    ppuVar6 = &puStack_a0;
    ppuVar7 = &puStack_a0;
    ppuVar8 = &puStack_a0;
    ppuVar9 = &puStack_a0;
    ppuVar10 = &puStack_a0;
    ppuVar11 = &puStack_a0;
    ppuVar12 = &puStack_a0;
    ppuVar14 = &puStack_a0;
    ppuVar15 = &puStack_a0;
    ppuVar16 = &puStack_a0;
    ppuVar17 = &puStack_a0;
    ppuVar18 = &puStack_a0;
    ppuVar19 = &puStack_a0;
    ppuVar20 = &puStack_a0;
    ppuVar21 = &puStack_a0;
    func_0x000107c615f0();
    uVar2 = 0x7365527061546e6f;
    func_0x000107c5fadc(0x7365527061546e6f,0xef65646f43646e65);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_10140928c;
    uStack_78 = 0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b3880;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x101409298;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b38a8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010ef3d950);
    pcStack_80 = (code *)0x10140929c;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b38d0;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1014092a8;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b38f8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010ef3d970);
    pcStack_80 = (code *)0x1014092ac;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b3920;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1014092b8;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b3948;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6977537061546e6f;
    func_0x000107c5fadc(0x6977537061546e6f,0xeb00000000686374);
    pcStack_80 = (code *)0x1014092bc;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b3970;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1014092c8;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b3998;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6978457061546e6f;
    func_0x000107c5fadc(0x6978457061546e6f,0xe900000000000074);
    pcStack_80 = (code *)0x1014092cc;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b39c0;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = FUN_101409358;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b39e8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(uVar2);
    uVar13 = 0x6948726577736e61;
    func_0x000107c5fadc(0x6948726577736e61,0xea0000000000746e);
    pcStack_80 = (code *)0x10140a6a8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101137fac;
    puStack_88 = &UNK_1103b3a10;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar2 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar2);
    pcStack_80 = FUN_101409470;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b3a38;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(uVar13);
    uVar13 = 0x70795441466f7774;
    func_0x000107c5fadc(0x70795441466f7774,0xe900000000000065);
    pcStack_80 = (code *)0x10140a6b0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10137c584;
    puStack_88 = &UNK_1103b3a60;
    uStack_78 = param_2;
    func_0x000107c60bc4();
    uVar2 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar2);
    pcStack_80 = FUN_1014095b0;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b3a88;
    func_0x000107c60bc4();
    func_0x000107c3e8fc(param_1);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c61170(uVar13);
    uVar2 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010ef3cc70);
    pcStack_80 = (code *)0x1014095b4;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10137c584;
    puStack_88 = &UNK_1103b3ab0;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1014095bc;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b3ad8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e8fc(param_1);
    func_0x000107c60bd0(ppuVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010ef3d060);
    pcStack_80 = (code *)0x1014095c0;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10137c584;
    puStack_88 = &UNK_1103b3b00;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1014095c8;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b3b28;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e8fc(param_1);
    func_0x000107c60bd0(ppuVar21);
    func_0x000107c60bd0(ppuVar20);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10140928c; end: 1014092d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140928c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_10140a4c4(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112d7d0d8);
    *(undefined8 *)(lVar2 + _DAT_112d7d0d8) = param_2;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1014092d8; end: 101409357;  */

void FUN_1014092d8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_10140a4c4(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + *param_3);
    *(undefined8 *)(lVar2 + *param_3) = param_2;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 101409358; end: 10140935b;  */

void FUN_101409358(void)

{
  return;
}



/* Entry: 10140935c; end: 10140946f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10140935c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar2 = 0;
  FUN_10140a4c4(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d7d100);
    uVar2 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    func_0x000107c61174(param_1);
    func_0x000107c61434(param_3);
    func_0x000107c6142c(uVar2);
    puVar4 = &UNK_1103b3b60;
    func_0x000107c613fc(&UNK_1103b3b60,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,param_5);
    puVar5 = &UNK_1103b3bb0;
    func_0x000107c613fc(&UNK_1103b3bb0,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(long *)(puVar5 + 0x18) = lVar3;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar4);
    FUN_1013f20ec(0x10140a6e4,puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(param_1);
  }
  return lVar3 != 0;
}



/* Entry: 101409470; end: 101409473;  */

void FUN_101409470(void)

{
  return;
}



/* Entry: 101409474; end: 101409557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101409474(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = 0;
  FUN_10140a4c4(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    if (2 < param_2) {
      param_2 = 3;
    }
    *(char *)(lVar2 + _DAT_112d7d108) = (char)param_2;
    puVar3 = &UNK_1103b3b60;
    func_0x000107c613fc(&UNK_1103b3b60,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,param_4);
    puVar4 = &UNK_1103b3b88;
    func_0x000107c613fc(&UNK_1103b3b88,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = lVar2;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar3);
    FUN_1013f20ec(0x10140b000,puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
  }
  return lVar2 != 0;
}



/* Entry: 101409558; end: 1014095af;  */

void FUN_101409558(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10140965c();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1014095b0; end: 1014095cb;  */

void FUN_1014095b0(void)

{
  return;
}



/* Entry: 1014095cc; end: 101409627;  */

void FUN_1014095cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100cb0e78(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


