/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100631520; end: 10063152b;  */

void FUN_100631520(void)

{
  return;
}



/* Entry: 10063152c; end: 100631573;  */

void FUN_10063152c(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *param_4;
  return;
}



/* Entry: 100631574; end: 1006315cb;  */

void FUN_100631574(void)

{
  return;
}



/* Entry: 1006315cc; end: 1006315e7;  */

void FUN_1006315cc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  if (param_2 == 0) {
    FUN_1006316b4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_1006315cc(plVar6);
    FUN_1006316b4(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x000107c359a8();
      func_0x000107c359a4();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x000107c35980();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1006315e8; end: 1006316b3;  */

void FUN_1006315e8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1006316b4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_1006315cc(plVar6);
    FUN_1006316b4(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x000107c359a8();
      func_0x000107c359a4();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x000107c35980();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1006316b4; end: 1006316ef;  */

void FUN_1006316b4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006316f0; end: 10063170f;  */

void FUN_1006316f0(void)

{
  func_0x00010060f270();
  FUN_100631710();
  return;
}



/* Entry: 100631710; end: 100631727;  */

void FUN_100631710(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100631728; end: 10063175b;  */

long FUN_100631728(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_10063175c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10063175c; end: 10063178b;  */

undefined8 FUN_10063175c(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  FUN_1000682a4(param_1 + 0x30);
  FUN_10006805c(param_1 + 0x18);
  func_0x00010006804c(param_1);
  if (in_NG == in_OV) {
    FUN_1002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 10063178c; end: 100631793;  */

void FUN_10063178c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100631794; end: 1006317e7;  */

void FUN_100631794(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006317e8; end: 100631807;  */

void FUN_1006317e8(void)

{
  return;
}



/* Entry: 100631808; end: 100631c7f;  */

void FUN_100631808(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1002d10d8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a96d0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar9 = 0x536e496b63656863;
  func_0x000107c5fadc(0x536e496b63656863,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f017660);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0x69767265536f6375;
  func_0x000107c5fadc(0x69767265536f6375,0xeb00000000736563);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100631c80; end: 100631c8b;  */

void FUN_100631c80(void)

{
  return;
}



/* Entry: 100631c8c; end: 100631cc7;  */

void FUN_100631c8c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1005f591c();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10061fb2c(param_1 + 3,param_2 + 3);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  return;
}



/* Entry: 100631cc8; end: 100631ce3;  */

void FUN_100631cc8(long param_1)

{
  FUN_100631c8c();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 100631ce4; end: 100631df7;  */

void FUN_100631ce4(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_a8 [72];
  byte bStack_60;
  undefined1 auStack_58 [24];
  
  FUN_1005e7a1c();
  auStack_a8[0] = 0;
  bStack_60 = 0;
  if (*(char *)(param_2 + 0x58) != '\0') {
    FUN_100631cc8(auStack_a8,unaff_x20 + 0x10);
    FUN_100631df8(unaff_x20 + 0x10);
  }
  lVar2 = *(long *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = 0;
  FUN_100631e2c(bStack_60);
  if ((extraout_x8 & 1) == 0) {
    func_0x0001005ed13c();
    FUN_100631e3c();
  }
  else {
    func_0x0001005ed13c();
    FUN_100631e3c();
    if (lVar2 != 0) {
      if ((bStack_60 & 1) == 0) {
        func_0x000107c344bc(auStack_58);
        func_0x000107c34438();
        func_0x000107c342b4();
        FUN_100678270();
        func_0x000107c34460();
      }
      FUN_100631c8c();
      uVar1 = 1;
      goto LAB_100631db0;
    }
  }
  func_0x000107c34608();
  uVar1 = extraout_w8;
LAB_100631db0:
  *(undefined1 *)(unaff_x19 + 0x48) = uVar1;
  FUN_100631e3c(auStack_a8);
  return;
}



/* Entry: 100631df8; end: 100631e2b;  */

void FUN_100631df8(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_1005fce88(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 100631e2c; end: 100631e3b;  */

void FUN_100631e2c(void)

{
  return;
}



/* Entry: 100631e3c; end: 100631e6b;  */

long FUN_100631e3c(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_1005fce88(param_1 + 0x18);
  }
  return param_1;
}



/* Entry: 100631e6c; end: 100631e7b;  */

void FUN_100631e6c(void)

{
  return;
}



/* Entry: 100631e7c; end: 100631edf;  */

void FUN_100631e7c(long param_1)

{
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x0001005ed184();
  FUN_100631e2c();
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(char *)(param_1 + 0x58) != '\0') {
    FUN_100631df8(unaff_x19 + 0x10);
  }
  FUN_100631e3c(unaff_x20 | 8);
  FUN_1005ed1e8();
  FUN_10054cac4();
  FUN_100631e3c(unaff_x19 + 0x10);
  return;
}



/* Entry: 100631ee0; end: 100631ee7;  */

void FUN_100631ee0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100631ee8; end: 100631f3b;  */

void FUN_100631ee8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100631f3c; end: 100631f4f;  */

void FUN_100631f3c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1002354ec();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126a86c0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar10 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6e90);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  uVar10 = uVar11;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100631f50; end: 1006323bf;  */

void FUN_100631f50(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1002354ec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a86c0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar9 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6e90);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 1006323c0; end: 1006323db;  */

void FUN_1006323c0(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1006323dc; end: 1006323e7;  */

long FUN_1006323dc(void)

{
  long lVar1;
  long unaff_x20;
  long unaff_x29;
  
  lVar1 = unaff_x20 + 0xa8;
  func_0x00010061fe3c(lVar1,unaff_x29 + -0x34);
  FUN_100632408();
  return lVar1 + 0x18;
}



/* Entry: 1006323e8; end: 100632407;  */

long FUN_1006323e8(long param_1)

{
  func_0x00010061fe3c();
  FUN_100632408();
  return param_1 + 0x18;
}



/* Entry: 100632408; end: 1006326df;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001006324e4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_100632408(undefined8 param_1,undefined8 param_2,long *param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar10;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long extraout_x9_04;
  ulong extraout_x9_05;
  long *extraout_x10;
  long *plVar11;
  long *extraout_x10_00;
  ulong extraout_x11;
  ulong uVar12;
  ulong extraout_x11_00;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  long lStack_58;
  
  iVar1 = *param_4;
  uVar15 = (ulong)iVar1;
  uVar16 = param_3[1];
  if (uVar16 != 0) {
    func_0x0001006201d0();
    if ((bool)in_ZR) {
      unaff_x24 = extraout_x8 & uVar15;
    }
    else {
      in_NG = (long)(uVar16 - uVar15) < 0;
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar7 = 0;
        if (uVar16 != 0) {
          uVar7 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar7 * uVar16;
      }
    }
    plVar14 = *(long **)(*param_3 + unaff_x24 * 8);
    uVar7 = extraout_x8;
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_1006324ac;
          uVar10 = plVar14[1];
          if (uVar10 != uVar15) break;
          in_NG = *(int *)(plVar14 + 2) - iVar1 < 0;
          if (*(int *)(plVar14 + 2) == iVar1) {
            uVar9 = 0;
            lStack_58 = (long)plVar14;
            goto LAB_1006326c0;
          }
        }
        if ((uVar16 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar16 <= uVar10) {
          func_0x000107c3477c();
          uVar7 = extraout_x8_00;
          uVar10 = extraout_x9;
        }
        in_NG = (long)(uVar10 - unaff_x24) < 0;
      } while (uVar10 == unaff_x24);
    }
  }
LAB_1006324ac:
  uVar7 = 0x60;
  func_0x000107c60e20();
  func_0x000100620150();
  *(undefined8 *)(uVar7 + 0x58) = 0;
  *(undefined8 *)(uVar7 + 0x50) = 0;
  *(undefined8 *)(uVar7 + 0x48) = 0;
  *(undefined8 *)(uVar7 + 0x40) = 0;
  *(undefined8 *)(uVar7 + 0x38) = 0;
  *(undefined8 *)(uVar7 + 0x30) = 0;
  *(undefined8 *)(uVar7 + 0x28) = 0;
  *(undefined8 *)(uVar7 + 0x20) = 0;
  *(undefined8 *)(uVar7 + 0x18) = 0;
  func_0x00010062016c();
  if ((uVar16 != 0) && (FUN_1006912bc(param_1,param_2,(float)uVar16), !(bool)in_NG))
  goto LAB_10063266c;
  func_0x000100620180();
  bVar4 = 2 < uVar16;
  bVar5 = uVar16 == 3;
  func_0x000100620198();
  uVar10 = extraout_x8_01;
  if (!bVar4 || bVar5) {
    uVar10 = extraout_x9_00;
  }
  if (uVar10 - 1 == 0) {
    uVar10 = 2;
  }
  else if ((uVar10 & uVar10 - 1) != 0) {
    func_0x000107c60c44();
    uVar16 = param_3[1];
    uVar7 = uVar10;
  }
  uVar6 = uVar10 == uVar16;
  if (uVar16 < uVar10) {
LAB_100632530:
    if (uVar10 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006326d4);
      (*pcVar3)();
    }
    lVar8 = uVar10 << 3;
    func_0x000107c60e20(lVar8);
    FUN_1006326e0(param_3,lVar8);
    uVar16 = 0;
    param_3[1] = uVar10;
    while (uVar6 = uVar10 == uVar16, !(bool)uVar6) {
      func_0x0001006201c4();
      uVar16 = extraout_x9_01;
    }
    uVar16 = uVar10;
    if (param_3[2] != 0) {
      func_0x000107c3474c();
      func_0x000107c34748();
      lVar8 = extraout_x8_02;
      uVar7 = extraout_x9_02;
      plVar14 = extraout_x10;
      uVar12 = extraout_x11;
      while (plVar11 = plVar14, plVar14 = (long *)*plVar11, plVar14 != (long *)0x0) {
        uVar13 = plVar14[1];
        if ((uVar10 & uVar7) == 0) {
          uVar13 = uVar13 & uVar7;
        }
        else if (uVar10 <= uVar13) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar13 / uVar10;
          }
          uVar13 = uVar13 - uVar2 * uVar10;
        }
        uVar6 = uVar13 == uVar12;
        if (!(bool)uVar6) {
          if (*(long *)(lVar8 + uVar13 * 8) == 0) {
            *(long **)(lVar8 + uVar13 * 8) = plVar11;
            uVar12 = uVar13;
          }
          else {
            *plVar11 = *plVar14;
            func_0x000107c3432c();
            lVar8 = extraout_x8_03;
            uVar7 = extraout_x9_03;
            plVar14 = extraout_x10_00;
            uVar12 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (uVar10 < uVar16) {
    func_0x000107c34524();
    if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else {
      func_0x000107c342e0();
    }
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    uVar6 = uVar10 == uVar16;
    if (uVar10 < uVar16) {
      if (uVar10 != 0) goto LAB_100632530;
      FUN_1006326e0(param_3,0);
      param_3[1] = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = param_3[1];
    }
  }
  func_0x0001006201d0();
  if ((bool)uVar6) {
    unaff_x24 = extraout_x8_04 & uVar15;
  }
  else {
    unaff_x24 = uVar15;
    if (uVar16 <= uVar15) {
      uVar7 = 0;
      if (uVar16 != 0) {
        uVar7 = uVar15 / uVar16;
      }
      unaff_x24 = uVar15 - uVar7 * uVar16;
    }
  }
LAB_10063266c:
  if (*(long *)(*param_3 + unaff_x24 * 8) == 0) {
    func_0x0001006201dc();
    if (extraout_x9_04 != 0) {
      uVar15 = *(ulong *)(extraout_x9_04 + 8);
      lVar8 = extraout_x8_05;
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar15 = uVar15 & uVar16 - 1;
      }
      else if (uVar16 <= uVar15) {
        func_0x000107c3477c();
        lVar8 = extraout_x8_06;
        uVar15 = extraout_x9_05;
      }
      *(long *)(lVar8 + uVar15 * 8) = lStack_58;
    }
  }
  else {
    func_0x000107c34510();
  }
  func_0x0001006201f4();
  FUN_1006326f8();
  uVar9 = 1;
LAB_1006326c0:
  auVar17._8_8_ = uVar9;
  auVar17._0_8_ = lStack_58;
  return auVar17;
}



/* Entry: 1006326e0; end: 1006326f7;  */

void FUN_1006326e0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006326f8; end: 100632717;  */

void FUN_1006326f8(void)

{
  func_0x0001005ec580();
  FUN_100632718();
  return;
}



/* Entry: 100632718; end: 10063273f;  */

void FUN_100632718(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c279dc(lVar1 + 0x30);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 100632740; end: 100632767;  */

void FUN_100632740(long param_1)

{
  FUN_10061fb20();
  *(undefined1 *)(param_1 + 0x80) = 0;
  FUN_100632908();
  return;
}



/* Entry: 100632768; end: 100632843;  */

undefined2 *
FUN_100632768(undefined2 *param_1,undefined2 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0xc) = param_4[1];
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  *(undefined8 *)(param_1 + 0x1c) = param_5[2];
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  FUN_100632740(param_1 + 0x20,param_6);
  return param_1;
}



/* Entry: 100632844; end: 100632907;  */

void FUN_100632844(long param_1,int param_2,ushort param_3)

{
  undefined1 auStack_c8 [120];
  ushort uStack_50;
  byte bStack_4e;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001006327cc(param_1,&uStack_48);
  func_0x0001005fb56c(&uStack_48);
  *(int *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 8) = 1;
  if (param_2 == 3) {
    FUN_100632964(auStack_c8);
    if ((bStack_4e & 1) == 0) {
      bStack_4e = 1;
    }
    uStack_50 = param_3 | 0x100;
    func_0x0001006329ec(param_1 + 0x40,auStack_c8);
    func_0x0001006329bc(auStack_c8);
  }
  return;
}



/* Entry: 100632908; end: 10063291b;  */

void FUN_100632908(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_100633238();
    *(undefined1 *)(param_1 + 0x80) = 1;
    return;
  }
  return;
}



/* Entry: 10063291c; end: 10063293b;  */

void FUN_10063291c(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_1006329bc();
  }
  return;
}



/* Entry: 10063293c; end: 100632963;  */

void FUN_10063293c(long param_1)

{
  FUN_10061fb20();
  *(undefined1 *)(param_1 + 0x70) = 0;
  FUN_1006329a8();
  return;
}



/* Entry: 100632964; end: 1006329a7;  */

long FUN_100632964(long param_1)

{
  long lVar1;
  undefined1 auStack_98 [112];
  undefined1 uStack_28;
  
  auStack_98[0] = 0;
  uStack_28 = 0;
  lVar1 = param_1;
  FUN_10063293c(param_1,auStack_98);
  *(undefined4 *)(lVar1 + 0x78) = 0;
  FUN_1006329bc(auStack_98);
  return param_1;
}



/* Entry: 1006329a8; end: 1006329bb;  */

void FUN_1006329a8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_10086cf34();
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  return;
}



/* Entry: 1006329bc; end: 100632a1f;  */

long FUN_1006329bc(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_10086cf88(param_1 + 8);
  }
  return param_1;
}



/* Entry: 100632a20; end: 100632a2b;  */

void FUN_100632a20(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 100632a2c; end: 100632a5b;  */

void FUN_100632a2c(long param_1)

{
  FUN_100632a20();
  *(undefined1 *)(param_1 + 0x70) = 0;
  FUN_100632a9c();
  return;
}



/* Entry: 100632a5c; end: 100632a7f;  */

void FUN_100632a5c(long param_1,long param_2)

{
  FUN_100632a2c();
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  return;
}



/* Entry: 100632a80; end: 100632a9b;  */

void FUN_100632a80(long param_1)

{
  FUN_100632a5c();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 100632a9c; end: 100632abb;  */

void FUN_100632a9c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_10086d054();
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  return;
}



/* Entry: 100632abc; end: 100632b17;  */

void FUN_100632abc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000100632ab0();
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  func_0x0001005fad5c(param_1 + 2,param_2 + 2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  FUN_100632b34();
  FUN_100632b40();
  return;
}



/* Entry: 100632b18; end: 100632b33;  */

void FUN_100632b18(long param_1)

{
  FUN_100632abc();
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



/* Entry: 100632b34; end: 100632b3f;  */

undefined1  [16] FUN_100632b34(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = unaff_x19 + 0x40;
  return auVar1;
}



/* Entry: 100632b40; end: 100632b6f;  */

void FUN_100632b40(long param_1)

{
  FUN_100632a20();
  *(undefined1 *)(param_1 + 0x80) = 0;
  FUN_100632b70();
  return;
}



/* Entry: 100632b70; end: 100632b83;  */

void FUN_100632b70(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_100632a5c();
    *(undefined1 *)(param_1 + 0x80) = 1;
    return;
  }
  return;
}



/* Entry: 100632b84; end: 100632b9f;  */

void FUN_100632b84(long param_1)

{
  FUN_100632a5c();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 100632ba0; end: 100632ba7;  */

void FUN_100632ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x19;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [208];
  
  FUN_1005fa1bc(param_1 + -0x18);
  FUN_1005fa4a0();
  FUN_100632cbc();
  FUN_100632cf0(auStack_180,param_2);
  FUN_100632dc0(auStack_168,param_4);
  func_0x000100632e60(auStack_150,param_3);
  func_0x000100632ef8(auStack_138,param_5);
  FUN_100632f9c(auStack_120,param_6);
  FUN_1005fa4a0(unaff_x19 + 0xe0,5);
  FUN_1005facd8();
  FUN_1005fae10();
  FUN_100632ffc(unaff_x19 + 0x1b8,auStack_180);
  FUN_100633374(auStack_180);
  return;
}



/* Entry: 100632ba8; end: 100632cbb;  */

void FUN_100632ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x19;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [208];
  
  FUN_1005fa1bc();
  FUN_1005fa4a0();
  FUN_100632cbc();
  FUN_100632cf0(auStack_180,param_2);
  FUN_100632dc0(auStack_168,param_4);
  func_0x000100632e60(auStack_150,param_3);
  func_0x000100632ef8(auStack_138,param_5);
  FUN_100632f9c(auStack_120,param_6);
  FUN_1005fa4a0(unaff_x19 + 0xe0,5);
  FUN_1005facd8();
  FUN_1005fae10();
  FUN_100632ffc(unaff_x19 + 0x1b8,auStack_180);
  FUN_100633374(auStack_180);
  return;
}



/* Entry: 100632cbc; end: 100632cef;  */

void FUN_100632cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100632cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))(*(long **)(param_1 + 0xa0),param_1 + 0x78,1);
  return;
}



/* Entry: 100632cf0; end: 100632d17;  */

void FUN_100632cf0(void)

{
  func_0x000100632cd8();
  FUN_100632d18();
  FUN_100632d30();
  return;
}



/* Entry: 100632d18; end: 100632d2f;  */

void FUN_100632d18(void)

{
  return;
}



/* Entry: 100632d30; end: 100632d77;  */

void FUN_100632d30(void)

{
  long in_x3;
  
  func_0x000100632d24();
  if (in_x3 != 0) {
    FUN_1006a005c();
    FUN_1006a29d0();
    func_0x0001006a00c4();
    FUN_1006a2a14();
  }
  FUN_100632d78();
  FUN_100632d88();
  return;
}



/* Entry: 100632d78; end: 100632d87;  */

void FUN_100632d78(void)

{
  return;
}



/* Entry: 100632d88; end: 100632daf;  */

void FUN_100632d88(void)

{
  uint extraout_w8;
  
  func_0x0001005fad28();
  if ((extraout_w8 & 1) == 0) {
    FUN_1006334d4();
  }
  return;
}



/* Entry: 100632db0; end: 100632dbf;  */

void FUN_100632db0(void)

{
  return;
}



/* Entry: 100632dc0; end: 100632de3;  */

void FUN_100632dc0(void)

{
  func_0x000100632cd8();
  FUN_100632de4();
  FUN_100632df0();
  return;
}



/* Entry: 100632de4; end: 100632def;  */

void FUN_100632de4(void)

{
  return;
}



/* Entry: 100632df0; end: 100632e37;  */

void FUN_100632df0(void)

{
  long in_x3;
  
  func_0x000100632d24();
  if (in_x3 != 0) {
    FUN_1006a005c();
    func_0x000107c28c1c();
    func_0x0001006a00c4();
    func_0x000107c28c20();
  }
  FUN_100632d78();
  FUN_100632e38();
  return;
}



/* Entry: 100632e38; end: 100632e87;  */

void FUN_100632e38(void)

{
  uint extraout_w8;
  
  func_0x0001005fad28();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010063345c();
  }
  return;
}



/* Entry: 100632e88; end: 100632ecf;  */

void FUN_100632e88(void)

{
  long in_x3;
  
  func_0x000100632d24();
  if (in_x3 != 0) {
    FUN_1006a005c();
    func_0x000107c28c2c();
    func_0x0001006a00c4();
    func_0x000107c28c30();
  }
  FUN_100632d78();
  FUN_100632ed0();
  return;
}



/* Entry: 100632ed0; end: 100632f1b;  */

void FUN_100632ed0(void)

{
  uint extraout_w8;
  
  func_0x0001005fad28();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010063342c();
  }
  return;
}



/* Entry: 100632f1c; end: 100632f2b;  */

void FUN_100632f1c(void)

{
  return;
}



/* Entry: 100632f2c; end: 100632f73;  */

void FUN_100632f2c(void)

{
  long in_x3;
  
  func_0x000100632d24();
  if (in_x3 != 0) {
    FUN_1006a005c();
    func_0x000107c28c40();
    func_0x0001006a00c4();
    func_0x000107c28c44();
  }
  FUN_100632d78();
  FUN_100632f74();
  return;
}



/* Entry: 100632f74; end: 100632f9b;  */

void FUN_100632f74(void)

{
  uint extraout_w8;
  
  func_0x0001005fad28();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001006333d8();
  }
  return;
}



/* Entry: 100632f9c; end: 100632fcb;  */

void FUN_100632f9c(long param_1)

{
  FUN_100632a20();
  *(undefined1 *)(param_1 + 200) = 0;
  FUN_100632fcc();
  return;
}



/* Entry: 100632fcc; end: 100632fdf;  */

void FUN_100632fcc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_100632abc();
    *(undefined1 *)(param_1 + 200) = 1;
    return;
  }
  return;
}



/* Entry: 100632fe0; end: 100632ffb;  */

void FUN_100632fe0(long param_1)

{
  FUN_100632abc();
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



/* Entry: 100632ffc; end: 100633107;  */

undefined8 * FUN_100632ffc(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_90;
  undefined **ppuStack_88;
  
  puVar1 = &uStack_1d0;
  puVar2 = &uStack_1d0;
  func_0x0001005fae20();
  uStack_1c8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      func_0x000100550664();
    } while (extraout_w10 != 0);
  }
  FUN_1005faf50();
  FUN_100633108();
  FUN_10028c49c();
  func_0x0001005fafb0();
  func_0x0001005fafbc();
  lVar4 = *(long *)(unaff_x22 + 0x70);
  pcStack_90 = FUN_10063616c;
  ppuStack_88 = &PTR_FUN_110a66ca8;
  func_0x000107c60e20(0x140);
  FUN_100633278();
  FUN_100633108();
  func_0x000100633294();
  func_0x0001006332a0();
  func_0x0001006332b0();
  FUN_1005fb02c();
  if (lVar4 == 0) {
    FUN_1006332e0();
    if (extraout_x8 != 0) {
      do {
        func_0x000100550664();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001005fb044();
    func_0x0001006332f4();
    func_0x0001006332fc();
  }
  FUN_100633304(&uStack_1d0);
  func_0x0001005fb7f0();
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c329c0();
    FUN_100633304();
    func_0x000107c329cc();
    puVar3 = (undefined1 *)puVar2;
    func_0x0001005faf5c();
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(puVar3 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
    *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x48) = 0;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    *(undefined8 *)(puVar3 + 0x58) = 0;
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(puVar3 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(puVar3 + 0x48) = uVar5;
    *(undefined8 *)(puVar3 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    FUN_100633188(puVar3 + 0x60,param_2 + 0x60);
    return (undefined8 *)(undefined1 *)puVar2;
  }
  return puVar1;
}



/* Entry: 100633108; end: 100633173;  */

long FUN_100633108(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x0001005faf5c();
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  FUN_100633188(lVar1 + 0x60,param_2 + 0x60);
  return param_1;
}



/* Entry: 100633174; end: 100633187;  */

void FUN_100633174(long param_1,long param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_1006331b4();
    *(undefined1 *)(param_1 + 200) = 1;
    return;
  }
  return;
}



/* Entry: 100633188; end: 1006331b3;  */

undefined1 * FUN_100633188(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[200] = 0;
  FUN_100633174();
  return param_1;
}



/* Entry: 1006331b4; end: 10063321b;  */

undefined8 * FUN_1006331b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  FUN_100632740(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 10063321c; end: 100633237;  */

void FUN_10063321c(long param_1)

{
  FUN_1006331b4();
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



/* Entry: 100633238; end: 10063325b;  */

void FUN_100633238(long param_1,long param_2)

{
  FUN_10063293c();
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  return;
}



/* Entry: 10063325c; end: 100633277;  */

void FUN_10063325c(long param_1)

{
  FUN_100633238();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 100633278; end: 1006332bf;  */

undefined1  [16] FUN_100633278(undefined8 *param_1)

{
  long unaff_x23;
  undefined1 auVar1 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  auVar1._0_8_ = param_1 + 2;
  param_1[1] = in_stack_00000008;
  *param_1 = in_stack_00000000;
  auVar1._8_8_ = unaff_x23 + 0x10;
  return auVar1;
}



/* Entry: 1006332c0; end: 1006332df;  */

void FUN_1006332c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100633304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006332e0; end: 100633303;  */

undefined8 FUN_1006332e0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x21;
  long unaff_x29;
  undefined8 uVar2;
  
  uVar1 = *unaff_x21;
  uVar2 = unaff_x21[2];
  *(undefined8 *)(unaff_x29 + -0x78) = unaff_x21[3];
  *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
  return uVar1;
}



/* Entry: 100633304; end: 100633353;  */

long FUN_100633304(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001005fb53c();
  FUN_100633374();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 100633354; end: 100633373;  */

void FUN_100633354(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x000100633328();
  }
  return;
}



/* Entry: 100633374; end: 1006334bf;  */

long FUN_100633374(long param_1)

{
  long lStack_28;
  
  FUN_100633354(param_1 + 0x60);
  func_0x0001006333b4(param_1 + 0x48);
  func_0x000100633408(param_1 + 0x30);
  func_0x000100633494(param_1 + 0x18);
  lStack_28 = param_1;
  FUN_1006334d4(&lStack_28);
  return param_1;
}



/* Entry: 1006334c0; end: 1006334d3;  */

void FUN_1006334c0(void)

{
  return;
}



/* Entry: 1006334d4; end: 100633537;  */

void FUN_1006334d4(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x0001006a5c44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 100633538; end: 100633753;  */

void FUN_100633538(long *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  uint extraout_w8;
  int extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w9;
  long lVar11;
  int extraout_w10;
  int extraout_w10_00;
  long lVar12;
  long lVar13;
  
  plVar7 = param_1;
  FUN_1005f0e1c();
  *plVar7 = (long)FUN_100871834;
  plVar7[1] = (long)&UNK_108704dac;
  plVar7[7] = (long)param_1;
  plVar8 = plVar7;
  FUN_1005f0ecc();
  FUN_100630730();
  FUN_100633754();
  while( true ) {
    func_0x000100633764();
    if (extraout_x8 != 0) {
      do {
        func_0x000100633778();
      } while (extraout_w10 != 0);
    }
    plVar9 = plVar7 + 4;
    func_0x00010061e2f8();
    if (((ulong)plVar9 & 1) == 0) {
      *(undefined1 *)(plVar7 + 8) = 0;
      if (*plVar8 == 0) {
        FUN_10054ef74();
      }
      func_0x000100633788();
      if (((ulong)plVar9 & 1) != 0) {
        return;
      }
    }
    pbVar1 = (byte *)(plVar7[5] + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    if ((*(long *)(plVar7[5] + 0xe8) == 0) && ((*(byte *)(plVar7[5] + 0xb8) & 1) != 0)) break;
    FUN_100871a0c();
    FUN_1006716e8(extraout_x8_00 + 0x10);
    *pbVar1 = 0;
    func_0x000107c32d9c();
    plVar9 = (long *)plVar7[7];
    FUN_100871a3c(plVar7 + 6);
    func_0x000100633798(plVar7[6]);
    do {
      func_0x000100633778();
    } while (extraout_w10_00 != 0);
    func_0x0001006337a4();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(plVar7 + 8) = 1;
      lVar12 = plVar7[4];
      lVar13 = *plVar8;
      if (lVar13 == 0) {
        FUN_10054ef74();
        lVar13 = *plVar9;
      }
      plVar9 = (long *)(lVar12 + 0x10);
      do {
        lVar11 = *plVar9;
        if (lVar11 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          bVar6 = cVar4 == '\0';
          if (bVar6) {
            uVar5 = 1;
            func_0x000107c32d64();
            if (bVar6) {
              func_0x000107c32d20();
              iVar2 = extraout_w8_00;
              if ((bool)uVar5) {
                iVar2 = extraout_w9;
              }
              puVar10 = (undefined1 *)(ulong)(iVar2 * 0x18 + 0x10);
              func_0x000107c610a0();
              *puVar10 = (char)iVar2;
              func_0x000107c32d30(0);
              *(undefined1 **)(lVar12 + 0x90) = puVar10;
            }
            func_0x000107c32d60();
            *(long *)(extraout_x8_01 + 0x20) = lVar13;
            func_0x000107c32d1c(*(undefined8 *)(lVar12 + 0x90));
            *(undefined8 *)(lVar12 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    func_0x000100871d60();
    func_0x000100871d68();
    func_0x000100871d70();
  }
  FUN_1006716e8(plVar7[5] + 0x58);
  *pbVar1 = 0;
  func_0x000107c32d9c();
  func_0x000100871d40();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 100633754; end: 10063382b;  */

void FUN_100633754(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100633760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340e278)();
  return;
}



/* Entry: 10063382c; end: 10063393f;  */

void FUN_10063382c(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar2;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *unaff_x20;
  long lVar4;
  
  func_0x00010063381c();
  *param_1 = &UNK_108689444;
  param_1[1] = &UNK_108689494;
  FUN_10054f3f8(param_1 + 2);
  FUN_100633a50();
  FUN_100633a5c(param_1 + 5);
  func_0x000100633fa0();
  do {
    func_0x000100633f70();
  } while (extraout_w10 != 0);
  func_0x000100633fb0();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    lVar4 = param_1[4];
    func_0x000100633f4c();
    if (*unaff_x20 == 0) {
      FUN_10054ef74();
    }
    func_0x000100633fc0();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000100633fcc();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c32298();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000100633fdc();
        if ((bool)in_ZR) {
          func_0x000107c32250();
          func_0x000107c32230();
          func_0x000107c3222c();
          *(long **)(lVar4 + 0x90) = unaff_x20;
        }
        func_0x000100633ff0();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c322a8();
  func_0x000107c3227c();
  func_0x000107c32278();
  func_0x000107c322a0();
  func_0x000107c32288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100633940; end: 100633a4f;  */

void FUN_100633940(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_10063382c(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    do {
      func_0x000100633f70();
    } while (extraout_w10 != 0);
    func_0x00010063401c(*(undefined8 *)(param_1 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      lVar5 = *(long *)(param_1 + 0x30);
      func_0x000100633f4c();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      func_0x000100633fc0();
      plVar3 = extraout_x8;
      do {
        if (*plVar3 == 0) {
          func_0x000100633fcc();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000107c32298();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000100633fdc();
          if ((bool)in_ZR) {
            func_0x000107c32250();
            func_0x000107c32230();
            func_0x000107c3222c();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x000100633ff0();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1005f9618(param_1 + 0x30);
  func_0x000107c322bc();
  func_0x000107c3229c();
  func_0x000107c322a0();
  func_0x000107c32288();
  FUN_1005efe48(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100633a50; end: 100633a5b;  */

void FUN_100633a50(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x21;
  
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *unaff_x21 = lVar4;
  func_0x00010054ee5c();
  return;
}



/* Entry: 100633a5c; end: 100633be3;  */

void FUN_100633a5c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_2;
  puVar2 = (undefined8 *)0x40;
  func_0x000107c60e20();
  *puVar2 = &UNK_108689374;
  puVar2[1] = &UNK_108689420;
  puVar2[6] = plVar6;
  FUN_1005f1014();
  FUN_10054f4ac(param_1,puVar2 + 2);
  FUN_100633be4(puVar2 + 5);
  func_0x000100633fa0();
  do {
    func_0x000100633f70();
  } while (extraout_w10 != 0);
  func_0x000100633fb0();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 7) = 0;
    lVar5 = puVar2[4];
    func_0x000100633f4c();
    if (*plVar6 == 0) {
      FUN_10054ef74();
    }
    func_0x000100633fc0();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000100633fcc();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000107c32298();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000100633fdc();
        if ((bool)in_ZR) {
          func_0x000107c32250();
          func_0x000107c32230();
          func_0x000107c3222c();
          *(long **)(lVar5 + 0x90) = plVar6;
        }
        func_0x000100633ff0();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c322a8();
  func_0x000107c3227c();
  func_0x000107c32278();
  func_0x000107c322a0();
  func_0x000107c32288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 100633be4; end: 100633f4b;  */

void FUN_100633be4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint extraout_w8;
  uint extraout_w8_00;
  ulong extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  long lVar8;
  ulong uVar9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  plVar5 = (long *)0xb0;
  func_0x000107c60e20();
  *plVar5 = (long)FUN_1006bbdfc;
  plVar5[1] = (long)&UNK_108689330;
  plVar5[0x13] = param_1;
  plVar6 = plVar5;
  FUN_1005f1014();
  FUN_100633a50();
  plVar10 = plVar5 + 10;
  *(undefined1 *)plVar10 = 0;
  *(undefined1 *)(plVar5 + 0xc) = 0;
  FUN_100633f4c();
  lVar13 = 0;
  plVar11 = (long *)0x1;
  uVar12 = extraout_x8;
  uVar9 = extraout_x9;
  do {
    *(char *)((long)plVar5 + 0xab) = (char)plVar11;
    plVar5[0x14] = lVar13;
    *(char *)((long)plVar5 + 0xaa) = (char)uVar9;
    *(byte *)((long)plVar5 + 0xa9) = (byte)uVar12 & 1;
    func_0x000100633f5c();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000100633f70();
      } while (extraout_w10 != 0);
    }
    plVar11 = plVar5 + 4;
    func_0x00010061e2f8();
    if (((ulong)plVar11 & 1) == 0) {
      *(undefined1 *)(plVar5 + 0x15) = 0;
      uVar12 = plVar5[4];
      if (*plVar6 == 0) {
        FUN_10054ef74();
      }
      func_0x000100633f80();
      if ((uVar12 & 1) != 0) {
        return;
      }
    }
    plVar11 = plVar5 + 4;
    FUN_1006bc108();
    uVar4 = (uint)plVar11;
    *(char *)((long)plVar5 + 0xad) = (char)plVar11;
    plVar7 = plVar11;
    FUN_1006bc1e4(uVar4 >> 8 & 1);
    if ((uVar4 >> 8 & 1) == 0) {
      func_0x000107c322a0();
      func_0x000107c28cb4(plVar10);
      func_0x000107c32288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar5);
      return;
    }
    uVar3 = (uint)*(byte *)((long)plVar5 + 0xab) == (uVar4 & 0xff);
    if ((bool)uVar3) {
LAB_100633cdc:
      lVar13 = plVar5[0x14];
    }
    else if (((ulong)plVar11 & 1) == 0) {
      if ((*(byte *)(plVar5 + 0xc) & 1) == 0) {
        lVar13 = plVar5[0x14];
      }
      else {
        func_0x00010063401c(*plVar10);
        if ((extraout_w8 >> 1 & 1) == 0) {
          plVar11 = (long *)0x0;
          goto LAB_100633cdc;
        }
        plVar5[4] = *plVar10;
        do {
          func_0x000100633f70();
        } while (extraout_w10_01 != 0);
        func_0x000100633fb0();
        if ((extraout_w8_00 >> 1 & 1) == 0) {
          *(undefined1 *)(plVar5 + 0x15) = 1;
          lVar13 = plVar5[4];
          lVar14 = *plVar6;
          if (lVar14 == 0) {
            FUN_10054ef74();
            lVar14 = *plVar7;
          }
          plVar11 = (long *)(lVar13 + 0x10);
          do {
            lVar8 = *plVar11;
            if (lVar8 == 0) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar2) {
                *plVar11 = 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              uVar3 = cVar1 == '\0';
              if ((bool)uVar3) {
                func_0x000107c3226c();
                if ((bool)uVar3) {
                  func_0x000107c32250();
                  func_0x000107c3224c();
                  func_0x000107c32234();
                  *(long **)(lVar13 + 0x90) = plVar7;
                }
                func_0x000107c32268();
                *(long *)(extraout_x8_02 + 0x20) = lVar14;
                func_0x000107c32260(*(undefined8 *)(lVar13 + 0x90));
                *(undefined8 *)(lVar13 + 0x10) = 0;
                return;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar8 >> 1 & 1) == 0);
        }
        func_0x000107c322f0();
        lVar13 = *plVar7;
        func_0x000107c3227c();
        func_0x000107c32304();
        if ((bool)uVar3) {
          plVar7 = plVar10;
          func_0x000107c28cb0();
          *(undefined1 *)(plVar5 + 0xc) = 0;
        }
      }
      func_0x000107c32308();
      (*extraout_x8_01)();
      lVar14 = *(long *)(plVar5[0x13] + 0x60) * 1000000;
      uVar3 = (long)plVar7 - lVar13 == lVar14;
      if (lVar14 <= (long)plVar7 - lVar13) {
        FUN_10054ed98(plVar5 + 0xd);
        plVar5[0x11] = plVar5[0xd];
        lVar14 = 0;
        if (plVar5[0xd] != 0) {
          do {
            func_0x000100633f70();
          } while (extraout_w10_00 != 0);
          lVar14 = plVar5[0x11];
        }
        plVar5[0x11] = 0;
        plVar5[0x12] = plVar5[0x13];
        plVar5[7] = lVar14;
        plVar5[8] = plVar5[0x13];
        func_0x000107c322fc();
        func_0x000107c322b8();
        func_0x000107c28cc0();
        func_0x000107c322c0();
        func_0x000107c28cbc(plVar5 + 7);
        lVar14 = plVar5[0xe];
        plVar5[0x10] = lVar14;
        if (lVar14 != 0) {
          plVar11 = (long *)(lVar14 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = *plVar11 + 0x200000000;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x000107c32304();
        if ((bool)uVar3) {
          FUN_10054eee0(plVar10,plVar5 + 0xf);
          FUN_10054ef20(plVar5 + 0xb,plVar5 + 0x10);
        }
        else {
          plVar5[0xb] = plVar5[0x10];
          plVar5[10] = plVar5[0xf];
          plVar5[0xf] = 0;
          plVar5[0x10] = 0;
          *(undefined1 *)(plVar5 + 0xc) = 1;
        }
        func_0x000107c28cb0(plVar5 + 0xf);
        func_0x000107c322d0();
        func_0x000107c322cc();
      }
      plVar11 = (long *)0x0;
    }
    else {
      if ((*(byte *)(plVar5 + 0xc) & 1) != 0) {
        func_0x0001005ed540(plVar5 + 0xb);
      }
      lVar13 = plVar5[0x14];
      plVar11 = (long *)0x1;
    }
    uVar9 = (ulong)*(byte *)((long)plVar5 + 0xad);
    uVar12 = (ulong)*(byte *)((long)plVar5 + 0xac);
  } while( true );
}



/* Entry: 100633f4c; end: 10063404b;  */

void FUN_100633f4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100633f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340e278)();
  return;
}



/* Entry: 10063404c; end: 100634153;  */

void FUN_10063404c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [64];
  
  func_0x000100634030(*(undefined8 *)(param_1 + 0x18));
  FUN_1006341e8();
  if (*(long *)(*(long *)(param_1 + 0x18) + 0x90) != *(long *)(*(long *)(param_1 + 0x18) + 0x98)) {
    uVar1 = *(undefined8 *)(**(long **)(param_1 + 0x10) + 0x18);
    FUN_10002b838(auStack_88,&DAT_10f4bb973);
    FUN_10054b97c(auStack_70,uVar1,auStack_88);
    func_0x000107c60ca0(auStack_88);
    func_0x000107c29fb0(**(undefined8 **)(param_1 + 0x10),*(long *)(param_1 + 0x18) + 0x90);
    func_0x000107c29f78(**(undefined8 **)(param_1 + 0x10),*(long *)(param_1 + 0x18) + 0x90);
    FUN_10054cbac(auStack_70);
    FUN_10054d120(auStack_70);
    FUN_10065ad84(*(long *)(param_1 + 0x18) + 0x90);
  }
  return;
}


