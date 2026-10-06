/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080f7890; end: 1080f78eb;  */

undefined1  [16] FUN_1080f7890(void)

{
  undefined1 in_ZR;
  ulong extraout_x9;
  ulong extraout_x10;
  undefined8 extraout_x11;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined1 auVar1 [16];
  undefined8 uStack_48;
  
  func_0x0001080f8748();
  if (uStack_48 == 0) {
    func_0x0001080f8878();
  }
  else {
    func_0x0001080f8728();
    func_0x00010b8c8030();
    func_0x0001080f8820();
    unaff_x20 = 0;
    if (!(bool)in_ZR) {
      unaff_x20 = extraout_x11;
    }
    unaff_x22 = 0;
    if (!(bool)in_ZR) {
      unaff_x22 = extraout_x10;
    }
    unaff_x23 = 0;
    if (!(bool)in_ZR) {
      unaff_x23 = extraout_x9;
    }
  }
  func_0x0001080f8800();
  auVar1._0_8_ = unaff_x22 | unaff_x21 | unaff_x23;
  auVar1._8_8_ = unaff_x20;
  return auVar1;
}



/* Entry: 1080f78ec; end: 1080f7937;  */

void FUN_1080f78ec(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000108108a8c(&lStack_28,param_2);
  if (lStack_28 != 0) {
    uStack_30 = *param_3;
    func_0x00010b8c7fcc(lStack_28,&uStack_30,&uStack_30);
  }
  func_0x0001080f8800();
  return;
}



/* Entry: 1080f7938; end: 1080f7977;  */

void FUN_1080f7938(void)

{
  undefined8 uStack_38;
  
  func_0x0001080f8748();
  if (uStack_38 != 0) {
    func_0x0001080f8728();
    func_0x00010b8c824c();
  }
  func_0x0001080f8800();
  return;
}



/* Entry: 1080f7978; end: 1080f79d3;  */

undefined1  [16] FUN_1080f7978(void)

{
  undefined1 in_ZR;
  ulong extraout_x9;
  ulong extraout_x10;
  undefined8 extraout_x11;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined1 auVar1 [16];
  undefined8 uStack_48;
  
  func_0x0001080f8748();
  if (uStack_48 == 0) {
    func_0x0001080f8878();
  }
  else {
    func_0x0001080f8728();
    func_0x00010b8c82e0();
    func_0x0001080f8820();
    unaff_x20 = 0;
    if (!(bool)in_ZR) {
      unaff_x20 = extraout_x11;
    }
    unaff_x22 = 0;
    if (!(bool)in_ZR) {
      unaff_x22 = extraout_x10;
    }
    unaff_x23 = 0;
    if (!(bool)in_ZR) {
      unaff_x23 = extraout_x9;
    }
  }
  func_0x0001080f8800();
  auVar1._0_8_ = unaff_x22 | unaff_x21 | unaff_x23;
  auVar1._8_8_ = unaff_x20;
  return auVar1;
}



/* Entry: 1080f79d4; end: 1080f79fb;  */

void FUN_1080f79d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080f8764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080f79fc; end: 1080f7a0f;  */

void FUN_1080f79fc(void)

{
  func_0x0001080f7a18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080f7a10; end: 1080f7a9f;  */

void FUN_1080f7a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080f886c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080f7aa0; end: 1080f7b3b;  */

void FUN_1080f7aa0(void)

{
  func_0x0001080f8768();
  func_0x0001080f87a0();
  func_0x0001080f8818();
  return;
}



/* Entry: 1080f7b3c; end: 1080f7b5f;  */

void FUN_1080f7b3c(void)

{
  return;
}



/* Entry: 1080f7b60; end: 1080f7b7b;  */

void FUN_1080f7b60(void)

{
  func_0x0001080f8768();
  func_0x0001080f8818();
  return;
}



/* Entry: 1080f7b7c; end: 1080f7b9f;  */

void FUN_1080f7b7c(void)

{
  return;
}



/* Entry: 1080f7ba0; end: 1080f7bc7;  */

void FUN_1080f7ba0(void)

{
  func_0x0001080f8768();
  func_0x0001080f87a0();
  func_0x0001080f8818();
  return;
}



/* Entry: 1080f7bc8; end: 1080f7beb;  */

void FUN_1080f7bc8(void)

{
  return;
}



/* Entry: 1080f7bec; end: 1080f7c07;  */

void FUN_1080f7bec(void)

{
  func_0x0001080f8768();
  func_0x0001080f8818();
  return;
}



/* Entry: 1080f7c08; end: 1080f7c2b;  */

void FUN_1080f7c08(void)

{
  return;
}



/* Entry: 1080f7c2c; end: 1080f7c57;  */

void FUN_1080f7c2c(void)

{
  undefined1 unaff_w20;
  undefined8 uStack_28;
  
  func_0x0001080f86f8();
  if (uStack_28 != 0) {
    *(undefined1 *)(uStack_28 + 0x21a) = unaff_w20;
  }
  func_0x0001080f8714();
  return;
}



/* Entry: 1080f7c58; end: 1080f7c7b;  */

void FUN_1080f7c58(void)

{
  return;
}



/* Entry: 1080f7c7c; end: 1080f7ca3;  */

void FUN_1080f7c7c(void)

{
  undefined8 uStack_18;
  
  func_0x0001080f8768();
  if (uStack_18 != 0) {
    *(undefined1 *)(uStack_18 + 0x21a) = 0;
  }
  func_0x0001080f7a28();
  return;
}



/* Entry: 1080f7ca4; end: 1080f7cc7;  */

void FUN_1080f7ca4(void)

{
  return;
}



/* Entry: 1080f7cc8; end: 1080f7cf3;  */

void FUN_1080f7cc8(void)

{
  undefined1 unaff_w20;
  undefined8 uStack_28;
  
  func_0x0001080f86f8();
  if (uStack_28 != 0) {
    *(undefined1 *)(uStack_28 + 0x21b) = unaff_w20;
  }
  func_0x0001080f8714();
  return;
}



/* Entry: 1080f7cf4; end: 1080f7d17;  */

void FUN_1080f7cf4(void)

{
  return;
}



/* Entry: 1080f7d18; end: 1080f7d3f;  */

void FUN_1080f7d18(void)

{
  undefined8 uStack_18;
  
  func_0x0001080f8768();
  if (uStack_18 != 0) {
    *(undefined1 *)(uStack_18 + 0x21b) = 0;
  }
  func_0x0001080f7a28();
  return;
}



/* Entry: 1080f7d40; end: 1080f7d63;  */

void FUN_1080f7d40(void)

{
  return;
}



/* Entry: 1080f7d64; end: 1080f7d8f;  */

void FUN_1080f7d64(void)

{
  undefined1 unaff_w20;
  undefined8 uStack_28;
  
  func_0x0001080f86f8();
  if (uStack_28 != 0) {
    *(undefined1 *)(uStack_28 + 0x219) = unaff_w20;
  }
  func_0x0001080f8714();
  return;
}



/* Entry: 1080f7d90; end: 1080f7db3;  */

void FUN_1080f7d90(void)

{
  return;
}



/* Entry: 1080f7db4; end: 1080f7ddf;  */

void FUN_1080f7db4(void)

{
  undefined8 uStack_18;
  
  func_0x0001080f8768();
  if (uStack_18 != 0) {
    *(undefined1 *)(uStack_18 + 0x219) = 1;
  }
  func_0x0001080f7a28();
  return;
}



/* Entry: 1080f7de0; end: 1080f7e03;  */

void FUN_1080f7de0(void)

{
  return;
}



/* Entry: 1080f7e04; end: 1080f7e2f;  */

void FUN_1080f7e04(void)

{
  undefined1 unaff_w20;
  undefined8 uStack_28;
  
  func_0x0001080f86f8();
  if (uStack_28 != 0) {
    *(undefined1 *)(uStack_28 + 0x21c) = unaff_w20;
  }
  func_0x0001080f8714();
  return;
}



/* Entry: 1080f7e30; end: 1080f7e53;  */

void FUN_1080f7e30(void)

{
  return;
}



/* Entry: 1080f7e54; end: 1080f7e7b;  */

void FUN_1080f7e54(void)

{
  undefined8 uStack_18;
  
  func_0x0001080f8768();
  if (uStack_18 != 0) {
    *(undefined1 *)(uStack_18 + 0x21c) = 0;
  }
  func_0x0001080f7a28();
  return;
}



/* Entry: 1080f7e7c; end: 1080f7e9f;  */

void FUN_1080f7e7c(void)

{
  return;
}



/* Entry: 1080f7ea0; end: 1080f7f7f;  */

void FUN_1080f7ea0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x00010b9a8f04(auStack_58);
  func_0x0001080f7ac8(&lStack_48,param_1);
  if (lStack_48 == 0) {
    func_0x0001080f87a0(0);
  }
  else {
    func_0x00010b9a94ec(&lStack_40,auStack_58);
    lVar2 = lStack_40;
    if (lStack_40 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lStack_40;
      ___dynamic_cast(lStack_40,&PTR_DAT_110d7ebe8,&PTR_DAT_110a25ba0,0);
      if ((lVar3 != 0) && (lVar1 = lVar3, func_0x00010b9a5818(), lVar2 = lStack_40, (int)lVar1 == 0)
         ) {
        func_0x00010b9a5890();
        return;
      }
    }
    lStack_38 = lVar3;
    func_0x000104bddf04(lVar2);
    func_0x00010812670c(lStack_48,&lStack_38);
    func_0x0001080f87a0();
    func_0x0001080f8680(lStack_38);
  }
  func_0x0001080f7a28();
  func_0x00010b9a8d98(auStack_58);
  return;
}



/* Entry: 1080f7f80; end: 1080f7fa3;  */

void FUN_1080f7f80(void)

{
  return;
}



/* Entry: 1080f7fa4; end: 1080f7fe3;  */

void FUN_1080f7fa4(void)

{
  long lStack_20;
  undefined8 uStack_18;
  
  func_0x0001080f7ac8(&lStack_20);
  if (lStack_20 != 0) {
    uStack_18 = 0;
    func_0x00010812670c(lStack_20,&uStack_18);
    func_0x0001080f8680(uStack_18);
  }
  func_0x0001080f7a28(lStack_20);
  return;
}



/* Entry: 1080f7fe4; end: 1080f8007;  */

void FUN_1080f7fe4(void)

{
  return;
}



/* Entry: 1080f8008; end: 1080f8037;  */

void FUN_1080f8008(void)

{
  undefined1 unaff_w20;
  undefined8 uStack_28;
  
  func_0x0001080f86f8();
  if (uStack_28 != 0) {
    *(undefined1 *)(*(long *)(uStack_28 + 0x220) + 0x9d) = unaff_w20;
  }
  func_0x0001080f8714();
  return;
}



/* Entry: 1080f8038; end: 1080f805b;  */

void FUN_1080f8038(void)

{
  return;
}



/* Entry: 1080f805c; end: 1080f808b;  */

void FUN_1080f805c(void)

{
  undefined8 uStack_18;
  
  func_0x0001080f8768();
  if (uStack_18 != 0) {
    *(undefined1 *)(*(long *)(uStack_18 + 0x220) + 0x9d) = 1;
  }
  func_0x0001080f7a28();
  return;
}



/* Entry: 1080f808c; end: 1080f80af;  */

void FUN_1080f808c(void)

{
  return;
}



/* Entry: 1080f80b0; end: 1080f80db;  */

void FUN_1080f80b0(void)

{
  undefined1 unaff_w20;
  undefined8 uStack_28;
  
  func_0x0001080f86f8();
  if (uStack_28 != 0) {
    *(undefined1 *)(uStack_28 + 0x21e) = unaff_w20;
  }
  func_0x0001080f8714();
  return;
}



/* Entry: 1080f80dc; end: 1080f80ff;  */

void FUN_1080f80dc(void)

{
  return;
}



/* Entry: 1080f8100; end: 1080f8127;  */

void FUN_1080f8100(void)

{
  undefined8 uStack_18;
  
  func_0x0001080f8768();
  if (uStack_18 != 0) {
    *(undefined1 *)(uStack_18 + 0x21e) = 0;
  }
  func_0x0001080f7a28();
  return;
}



/* Entry: 1080f8128; end: 1080f814b;  */

void FUN_1080f8128(void)

{
  return;
}



/* Entry: 1080f814c; end: 1080f8197;  */

void FUN_1080f814c(undefined8 param_1,double *param_2)

{
  double dVar1;
  undefined8 uStack_38;
  
  dVar1 = *param_2;
  func_0x0001080f8768();
  if (uStack_38 != 0) {
    func_0x000108126454((float)dVar1);
  }
  func_0x0001080f8714(uStack_38);
  return;
}



/* Entry: 1080f8198; end: 1080f81bb;  */

void FUN_1080f8198(void)

{
  return;
}



/* Entry: 1080f81bc; end: 1080f81eb;  */

void FUN_1080f81bc(void)

{
  undefined8 uStack_18;
  
  func_0x0001080f8768();
  if (uStack_18 != 0) {
    func_0x000108126454(0);
  }
  func_0x0001080f7a28(uStack_18);
  return;
}



/* Entry: 1080f81ec; end: 1080f820f;  */

void FUN_1080f81ec(void)

{
  return;
}



/* Entry: 1080f8210; end: 1080f8243;  */

void FUN_1080f8210(void)

{
  undefined8 uStack_28;
  
  func_0x0001080f86f8();
  if (uStack_28 != 0) {
    func_0x0001081265dc();
  }
  func_0x0001080f8714(uStack_28);
  return;
}



/* Entry: 1080f8244; end: 1080f8267;  */

void FUN_1080f8244(void)

{
  return;
}



/* Entry: 1080f8268; end: 1080f8297;  */

void FUN_1080f8268(void)

{
  undefined8 uStack_18;
  
  func_0x0001080f8768();
  if (uStack_18 != 0) {
    func_0x0001081265dc(uStack_18,1);
  }
  func_0x0001080f7a28(uStack_18);
  return;
}



/* Entry: 1080f8298; end: 1080f82bb;  */

void FUN_1080f8298(void)

{
  return;
}



/* Entry: 1080f82bc; end: 1080f82ef;  */

void FUN_1080f82bc(void)

{
  undefined8 uStack_28;
  
  func_0x0001080f86f8();
  if (uStack_28 != 0) {
    func_0x0001081265f4();
  }
  func_0x0001080f8714(uStack_28);
  return;
}



/* Entry: 1080f82f0; end: 1080f8313;  */

void FUN_1080f82f0(void)

{
  return;
}



/* Entry: 1080f8314; end: 1080f8343;  */

void FUN_1080f8314(void)

{
  undefined8 uStack_18;
  
  func_0x0001080f8768();
  if (uStack_18 != 0) {
    func_0x0001081265f4(uStack_18,1);
  }
  func_0x0001080f7a28(uStack_18);
  return;
}



/* Entry: 1080f8344; end: 1080f8367;  */

void FUN_1080f8344(void)

{
  return;
}



/* Entry: 1080f8368; end: 1080f852b;  */

void FUN_1080f8368(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  func_0x00010b9aa82c(&puStack_50,param_2,"resume");
  puVar4 = (undefined8 *)0x0;
  if ((((char)puStack_48 == '\v') && (((ulong)puStack_48 & 0x100) != 0)) &&
     (puVar4 = puStack_50, puStack_50 != (undefined8 *)0x0)) {
    do {
      func_0x0001080f87f0();
    } while (extraout_w10 != 0);
  }
  func_0x0001080f8870();
  func_0x00010b9aa82c(&puStack_50,param_2,&DAT_10f2ee806);
  puVar5 = (undefined8 *)0x0;
  if ((((char)puStack_48 == '\v') && (((ulong)puStack_48 & 0x100) != 0)) &&
     (puVar5 = puStack_50, puStack_50 != (undefined8 *)0x0)) {
    do {
      func_0x0001080f87f0();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001080f8870();
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 == (undefined8 *)0x0)) {
    func_0x00010b99f5f8(&puStack_50,&UNK_10f47adc0);
    *param_1 = 2;
    param_1[1] = puStack_50;
    goto LAB_1080f8504;
  }
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar6 = puVar3 + 3;
  *puVar6 = &PTR_DAT_110a22118;
  *puVar3 = &PTR_DAT_110a220c8;
  puVar3[4] = 0;
  puVar3[5] = 0;
  do {
    func_0x0001080f87cc();
  } while (extraout_w11 != 0);
  puVar3[6] = puVar4;
  do {
    func_0x0001080f87cc();
  } while (extraout_w11_00 != 0);
  puVar3[7] = puVar5;
  puVar1 = puVar6;
  puVar2 = puVar3;
  if ((puVar3[5] == 0) || (*(long *)(puVar3[5] + 8) == -1)) {
    do {
      puStack_48 = puVar2;
      puStack_50 = puVar1;
      func_0x0001080f884c();
      puVar1 = puStack_50;
      puVar2 = puStack_48;
    } while (extraout_w10_01 != 0);
    func_0x0001003a8180();
    func_0x0001003a824c(&puStack_50);
    if (puVar3[5] != 0) goto LAB_1080f84ac;
  }
  else {
LAB_1080f84ac:
    do {
      func_0x0001080f884c();
    } while (extraout_w10_02 != 0);
  }
  puStack_58 = puVar6;
  func_0x00010b9a8f78(&puStack_50,&puStack_58);
  func_0x000104bf351c(param_1,&puStack_50);
  func_0x0001080f8870();
  func_0x0001003a916c(puVar6);
  func_0x0001003a916c(puVar6);
LAB_1080f8504:
  func_0x000104bda3ac(puVar5);
  func_0x000104bda3ac(puVar4);
  return;
}



/* Entry: 1080f852c; end: 1080f8553;  */

void FUN_1080f852c(void)

{
  return;
}



/* Entry: 1080f8554; end: 1080f8567;  */

void FUN_1080f8554(void)

{
  FUN_1080f8670();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080f8568; end: 1080f8573;  */

void FUN_1080f8568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080f886c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080f8574; end: 1080f862b;  */

void FUN_1080f8574(void)

{
  FUN_1080f862c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080f862c; end: 1080f866f;  */

undefined8 * FUN_1080f862c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a22118;
  func_0x000104bda388(param_1 + 4);
  func_0x000104bda388(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1080f8670; end: 1080f889f;  */

void FUN_1080f8670(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a220c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080f88a0; end: 1080f8d6f;  */

undefined8 * FUN_1080f88a0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *param_3;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1080fd008(param_1,param_2,&UNK_10f47addf,&UNK_10f47adf2,&lStack_28,0);
  func_0x0001080ed580(lStack_28);
  *param_1 = &PTR_DAT_110a22180;
  return param_1;
}



/* Entry: 1080f8d70; end: 1080f8deb;  */

undefined8 * FUN_1080f8d70(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *param_3;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1080fd008(param_1,param_2,&UNK_10f47ae5f,&UNK_10f47ae6c,&lStack_28,1);
  func_0x0001080ed580(lStack_28);
  *param_1 = &PTR_FUN_110a22310;
  return param_1;
}



/* Entry: 1080f8dec; end: 1080f8def;  */

undefined8 * FUN_1080f8dec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a22c48;
  func_0x0001080fd160(param_1 + 5);
  func_0x000107475310(param_1 + 2);
  return param_1;
}



/* Entry: 1080f8df0; end: 1080f8e03;  */

void FUN_1080f8df0(void)

{
  func_0x0001080fd064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080f8e04; end: 1080f8e0b;  */

undefined8 FUN_1080f8e04(void)

{
  return 1;
}



/* Entry: 1080f8e0c; end: 1080f8e57;  */

void FUN_1080f8e0c(long *param_1,long param_2)

{
  int extraout_w10;
  long lStack_28;
  
  func_0x0001078d8308(&lStack_28,param_2 + 0x10);
  if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
    do {
      func_0x0001080fb7c4();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_28;
  func_0x0001078ce460();
  return;
}



/* Entry: 1080f8e58; end: 1080f91e7;  */

undefined1  [16] FUN_1080f8e58(double param_1,float param_2,long param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  long *extraout_x8_00;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float fVar8;
  double dVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  byte bStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [8];
  byte bStack_f0;
  undefined1 auStack_e8 [8];
  byte bStack_e0;
  undefined1 auStack_d8 [8];
  byte bStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  byte bStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  double dVar9;
  
  dVar9 = param_1;
  func_0x0001080fb850();
  uStack_88 = extraout_x8;
  func_0x0001080fb860(&lStack_b0);
  func_0x0001080fb860(&puStack_a0);
  func_0x00010b9a94ec(&uStack_c8,&puStack_a0);
  FUN_1080f91e8(&uStack_b8,&uStack_c8);
  func_0x000104bddf04(uStack_c8);
  func_0x00010b9a8d98(&puStack_a0);
  func_0x0001080fb860(&uStack_c8);
  func_0x0001080fb860(auStack_d8);
  func_0x0001080fb860(auStack_e8);
  func_0x0001080fb860(auStack_f8);
  func_0x0001080fb860(auStack_108);
  func_0x0001080fb860(auStack_118);
  func_0x0001080fb860(auStack_128);
  lVar3 = *(long *)(param_3 + 0x10);
  fVar14 = *(float *)(lVar3 + 0x1c);
  uVar15 = *(undefined4 *)(lVar3 + 0x20);
  uStack_138 = 0;
  uStack_130 = 0;
  if ((bStack_a8 & 0xfe) == 2) {
    func_0x00010b9a9358(&puStack_a0,&lStack_b0);
    func_0x00010090c1cc(&uStack_130,&puStack_a0);
    func_0x0001003a8cb8(puStack_a0);
  }
  else if (bStack_a8 == 0xf) {
    FUN_108107520(&puStack_a0,*(undefined8 *)(lVar3 + 0x10),&lStack_b0);
    uVar4 = uStack_98;
    if (puStack_a0 == (undefined *)0x1) {
      uStack_98 = 0;
      uStack_138 = uVar4;
      func_0x0001078ce4b4(0);
    }
    else {
      uVar4 = 0;
    }
    func_0x0001080f00c0(&puStack_a0);
    goto LAB_1080f8fe8;
  }
  uVar4 = 0;
LAB_1080f8fe8:
  if ((bStack_c0 & 0xfc) == 4) {
    puVar5 = &uStack_c8;
    func_0x00010b9a9518();
  }
  else {
    puVar5 = (undefined8 *)0x1;
  }
  if ((bStack_d0 & 0xfc) == 4) {
    func_0x00010b9a92f0(auStack_d8);
    fVar8 = (float)dVar9;
    dVar9 = (double)(ulong)(uint)fVar8;
    uVar6 = (ulong)(uint)fVar8 << 0x20;
  }
  else {
    uVar6 = 0x3f80000000000000;
  }
  if ((bStack_e0 & 0xfc) == 4) {
    func_0x00010b9a92f0(auStack_e8);
    dVar10 = dVar9 * (double)fVar14;
    dVar9 = (double)(ulong)(uint)(float)dVar10;
    uVar6 = (ulong)(uint)(float)dVar10 << 0x20 | 1;
  }
  fVar8 = 0.0;
  if ((bStack_f0 & 0xfc) == 4) {
    func_0x00010b9a92f0(auStack_f8);
    fVar8 = (float)dVar9;
  }
  uVar1 = (bStack_120 & 0xfe) == 2;
  if ((bool)uVar1) {
    func_0x00010b9a9358(&uStack_140,auStack_128);
    puStack_a0 = &UNK_10f47ae8f;
    uStack_98 = 4;
    puVar7 = &uStack_140;
    func_0x00010b9a5ea8(puVar7,&puStack_a0);
    func_0x0001003a8cb8(uStack_140);
  }
  else {
    puVar7 = (undefined8 *)0x0;
  }
  uVar12 = (ulong)(uint)(param_2 * fVar14);
  uVar11 = (ulong)(uint)(SUB84(param_1,0) * fVar14);
  func_0x00010b9a9608();
  func_0x00010b9a92f0(auStack_118);
  puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
  uStack_90 = 0;
  FUN_108128930(uVar11,uVar12,fVar8,dVar9,fVar14,uVar15,&uStack_130,&uStack_138,&uStack_b8,0,0,
                puVar7,puVar5,uVar6,0);
  uVar6 = uVar11;
  uVar13 = uVar12;
  func_0x0001078ce4b4(uVar4);
  func_0x0001003a8cb8(uStack_130);
  func_0x00010b9a8d98(auStack_128);
  func_0x00010b9a8d98(auStack_118);
  func_0x00010b9a8d98(auStack_108);
  func_0x00010b9a8d98(auStack_f8);
  func_0x00010b9a8d98(auStack_e8);
  func_0x00010b9a8d98(auStack_d8);
  func_0x00010b9a8d98(&uStack_c8);
  func_0x000107807aac(uStack_b8);
  plVar2 = &lStack_b0;
  func_0x00010b9a8d98();
  func_0x0001080fb754(uStack_88);
  if ((bool)uVar1) {
    auVar16._0_4_ = (float)uVar11 / fVar14;
    auVar16._4_4_ = 0;
    auVar16._8_4_ = (float)uVar12 / fVar14;
    auVar16._12_4_ = 0;
    return auVar16;
  }
  ___stack_chk_fail();
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    func_0x0001080fb958(lVar3,&PTR_DAT_110d7ebe8,&PTR_DAT_110a26020);
  }
  FUN_1080fa694();
  *extraout_x8_00 = lVar3;
  auVar17._8_8_ = uVar13;
  auVar17._0_8_ = uVar6;
  return auVar17;
}



/* Entry: 1080f91e8; end: 1080f9223;  */

void FUN_1080f91e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x0001080fb958(lVar1,&PTR_DAT_110d7ebe8,&PTR_DAT_110a26020);
  }
  FUN_1080fa694();
  *param_1 = lVar1;
  return;
}



/* Entry: 1080f9224; end: 1080f9c0f;  */

void FUN_1080f9224(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  code *extraout_x8_17;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [15];
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 *apuStack_a0 [5];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  
  func_0x0001080fb850();
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_48 = extraout_x8;
  func_0x0001003a83dc(&pcStack_78,&DAT_10f2c3049);
  uStack_a8 = 1;
  auStack_d0[0] = 1;
  uStack_c1 = 1;
  FUN_1080eee30(&uStack_c0,&pcStack_78,&uStack_a8,auStack_d0,&uStack_c1);
  func_0x0001003a8cb8(pcStack_78);
  if ((bRam0000000113729870 & 1) == 0) {
    iVar1 = 0x13729870;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4("value");
      func_0x0001080fb7d4();
    }
  }
  pcStack_78 = FUN_1080fa6c4;
  ppuStack_70 = &PTR_FUN_110a22380;
  uStack_68 = param_1;
  func_0x0001080fb6cc(FUN_1080fa84c);
  func_0x000108107f90();
  func_0x0001080fb704(*(undefined8 *)(*param_2 + 0x58));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_00 & 1) == 0) {
    iVar1 = 0x13729880;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4("font");
      func_0x0001080fb7d4();
    }
  }
  func_0x0001080fb790(FUN_1080fa8bc);
  func_0x0001080fb6cc(FUN_1080fa924);
  func_0x000108107f90();
  (**(code **)(*param_2 + 0x60))(param_2,0x113729878,&uStack_c0,auStack_d0);
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_01 & 1) == 0) {
    iVar1 = 0x13729890;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f68f0f0);
      func_0x0001080fb7d4();
    }
  }
  pcStack_78 = FUN_1080fa978;
  ppuStack_70 = &PTR_FUN_110a22400;
  uStack_68 = param_1;
  func_0x0001080fb6cc(FUN_1080fa9e0);
  func_0x000108107e68();
  func_0x0001080fb718(*(undefined8 *)(*param_2 + 0x40));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_02 & 1) == 0) {
    iVar1 = 0x137298a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f2dba2e);
      func_0x0001080fb7d4();
    }
  }
  func_0x0001080fb790(FUN_1080faa38);
  func_0x0001080fb6cc(FUN_1080faab4);
  func_0x000108107d18();
  func_0x0001080fb718(*(undefined8 *)(*param_2 + 0x18));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_03 & 1) == 0) {
    iVar1 = 0x137298b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f2dba1f);
      func_0x0001080fb7d4();
    }
  }
  pcStack_78 = FUN_1080fab08;
  ppuStack_70 = &PTR_FUN_110a22480;
  uStack_68 = param_1;
  func_0x0001080fb6cc(FUN_1080fab84);
  func_0x000108107d18();
  func_0x0001080fb718(*(undefined8 *)(*param_2 + 0x18));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_04 & 1) == 0) {
    iVar1 = 0x137298c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f47912d);
      func_0x0001080fb7d4();
    }
  }
  func_0x0001080fb790(FUN_1080fabd8);
  func_0x0001080fb6cc(FUN_1080fac40);
  func_0x000108107f90();
  func_0x0001080fb934();
  func_0x0001080fb718();
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_05 & 1) == 0) {
    iVar1 = 0x137298d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f47828d);
      func_0x0001080fb7d4();
    }
  }
  pcStack_78 = FUN_1080fac94;
  ppuStack_70 = &PTR_FUN_110a22500;
  uStack_68 = param_1;
  func_0x0001080fb6cc(FUN_1080fad10);
  func_0x000108107d18();
  func_0x0001080fb704(*(undefined8 *)(*param_2 + 0x18));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_06 & 1) == 0) {
    iVar1 = 0x137298e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f47827f);
      func_0x0001080fb7d4();
    }
  }
  func_0x0001080fb790(FUN_1080fad64);
  func_0x0001080fb6cc(FUN_1080fadcc);
  func_0x000108107ed8();
  func_0x0001080fb704(*(undefined8 *)(*param_2 + 0x38));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_07 & 1) == 0) {
    iVar1 = 0x137298f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f479185);
      func_0x0001080fb7d4();
    }
  }
  pcStack_78 = FUN_1080fae24;
  ppuStack_70 = &PTR_FUN_110a22580;
  uStack_68 = param_1;
  func_0x0001080fb6cc(FUN_1080fae8c);
  func_0x000108107df8();
  func_0x0001080fb704(*(undefined8 *)(*param_2 + 0x30));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_08 & 1) == 0) {
    iVar1 = 0x13729900;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f479202);
      func_0x0001080fb7d4();
    }
  }
  func_0x0001080fb790(FUN_1080faee0);
  func_0x0001080fb6cc(FUN_1080faf48);
  func_0x000108107d88();
  func_0x0001080fb704(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_09 & 1) == 0) {
    iVar1 = 0x13729910;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f2db9e8);
      func_0x0001080fb7d4();
    }
  }
  pcStack_78 = FUN_1080fafa0;
  ppuStack_70 = &PTR_FUN_110a22600;
  uStack_68 = param_1;
  func_0x0001080fb6cc(FUN_1080fb008);
  func_0x000108107d88();
  func_0x0001080fb704(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_10 & 1) == 0) {
    iVar1 = 0x13729920;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f2db9f6);
      func_0x0001080fb7d4();
    }
  }
  func_0x0001080fb790(FUN_1080fb060);
  func_0x0001080fb6cc(FUN_1080fb0c8);
  func_0x000108107d88();
  func_0x0001080fb704(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_11 & 1) == 0) {
    iVar1 = 0x13729930;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f47826c);
      func_0x0001080fb7d4();
    }
  }
  pcStack_78 = FUN_1080fb120;
  ppuStack_70 = &PTR_FUN_110a22680;
  uStack_68 = param_1;
  func_0x0001080fb6cc(FUN_1080fb188);
  func_0x000108107d88();
  func_0x0001080fb704(*(undefined8 *)(*param_2 + 0x20));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_12 & 1) == 0) {
    iVar1 = 0x13729940;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f2db30c);
      func_0x0001080fb7d4();
    }
  }
  func_0x0001080fb790(FUN_1080fb1dc);
  func_0x0001080fb6cc(FUN_1080fb264);
  func_0x000108107f90();
  func_0x0001080fb934();
  func_0x0001080fb704();
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_13 & 1) == 0) {
    iVar1 = 0x13729950;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f479248);
      func_0x0001080fb7d4();
    }
  }
  pcStack_78 = FUN_1080fb2b8;
  ppuStack_70 = &PTR_FUN_110a22700;
  uStack_68 = param_1;
  func_0x0001080fb6cc(FUN_1080fb320);
  func_0x000108107f90();
  func_0x0001080fb934();
  func_0x0001080fb718();
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_14 & 1) == 0) {
    iVar1 = 0x13729960;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f479025);
      func_0x0001080fb7d4();
    }
  }
  func_0x0001080fb790(FUN_1080fb374);
  func_0x0001080fb6cc(FUN_1080fb3c0);
  func_0x000108107df8();
  func_0x0001080fb718(*(undefined8 *)(*param_2 + 0x30));
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_15 & 1) == 0) {
    iVar1 = 0x13729970;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4("selection");
      func_0x0001080fb7d4();
    }
  }
  pcStack_78 = FUN_1080fb400;
  ppuStack_70 = &PTR_FUN_110a22780;
  uStack_68 = param_1;
  func_0x0001080fb6cc(FUN_1080fb468);
  func_0x000108107f90();
  func_0x0001080fb934();
  func_0x0001080fb718();
  func_0x0001080fb7bc();
  func_0x0001080fb6f4();
  func_0x0001080fb6e4();
  func_0x0001080fb844();
  if ((extraout_x8_16 & 1) == 0) {
    iVar1 = 0x13729980;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001080fb7b4(&DAT_10f4790a9);
      func_0x0001080fb7d4();
    }
  }
  pcStack_78 = FUN_1080fb4a8;
  ppuStack_70 = &PTR_FUN_110a227c0;
  uStack_68 = param_1;
  func_0x0001080fb6cc(FUN_1080fb51c);
  func_0x000108108000();
  func_0x0001080fb934();
  uVar2 = 0x113729978;
  uVar3 = 0;
  (*extraout_x8_17)(param_2,0x113729978,0,auStack_d0);
  func_0x0001080fb7bc();
  (*(code *)*apuStack_a0[0])(apuStack_a0);
  func_0x0001080fb7e8();
  func_0x0001003a83dc(&uStack_a8,"font");
  func_0x0001080fb868(0x1080fb55c);
  func_0x0001080fb7e8();
  func_0x0001003a8cb8(CONCAT44(uStack_a4,uStack_a8));
  func_0x0001003a83dc(&uStack_a8,&DAT_10f47912d);
  func_0x0001080fb868(0x1080fb590);
  func_0x0001080fb7e8();
  func_0x0001003a8cb8(CONCAT44(uStack_a4,uStack_a8));
  func_0x0001080ceaec(&uStack_c0);
  func_0x0001080fb754(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_1080f9c10;
  uStack_f0 = param_1;
  plStack_e8 = param_2;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010b9a94ec(&uStack_100,uVar3);
  FUN_1080f91e8(&uStack_f8,&uStack_100);
  func_0x000104bddf04(uStack_100);
  FUN_108128684(uVar2,&uStack_f8);
  func_0x0001080fb8cc();
  func_0x000107807aac(uStack_f8);
  return;
}



/* Entry: 1080f9c10; end: 1080f9c67;  */

void FUN_1080f9c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b9a94ec(&uStack_30,param_3);
  FUN_1080f91e8(&uStack_28,&uStack_30);
  func_0x000104bddf04(uStack_30);
  FUN_108128684(param_2,&uStack_28);
  func_0x0001080fb8cc();
  func_0x000107807aac(uStack_28);
  return;
}



/* Entry: 1080f9c68; end: 1080f9c93;  */

void FUN_1080f9c68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_108128684(param_2,&uStack_18);
  func_0x000107807aac(uStack_18);
  return;
}



/* Entry: 1080f9c94; end: 1080f9eb3;  */

void FUN_1080f9c94(ulong param_1)

{
  func_0x0001080fb928();
  func_0x0001080fb828(&UNK_10f47ae94);
  if (((((param_1 & 1) == 0) && (func_0x0001080fb738(&UNK_10f47ae99), (param_1 & 1) == 0)) &&
      (func_0x0001080fb738(&UNK_10f47ae9f), (param_1 & 1) == 0)) &&
     (func_0x0001080fb738(&UNK_10f47aea6), (param_1 & 1) == 0)) {
    func_0x0001080fb8d8();
    func_0x0001080fb768();
  }
  else {
    FUN_1081284e8();
    func_0x0001080fb7dc();
  }
  return;
}



/* Entry: 1080f9eb4; end: 1080f9eef;  */

void FUN_1080f9eb4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x0001080fb958(lVar1,&PTR_DAT_110d7ebe8,&PTR_DAT_110a22840);
  }
  FUN_1080fb5bc();
  *param_1 = lVar1;
  return;
}



/* Entry: 1080f9ef0; end: 1080f9f1b;  */

void FUN_1080f9ef0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_24 [16];
  undefined1 uStack_14;
  
  auStack_24[0] = 0;
  uStack_14 = 0;
  FUN_108128530(param_2,auStack_24);
  return;
}



/* Entry: 1080f9f1c; end: 1080f9f93;  */

void FUN_1080f9f1c(ulong param_1)

{
  func_0x0001080fb928();
  func_0x0001080fb828(&UNK_10f47af35);
  if (((param_1 & 1) == 0) && (func_0x0001080fb738(&UNK_10f47ae8f), (param_1 & 1) == 0)) {
    func_0x0001080fb8d8();
    func_0x0001080fb768();
  }
  else {
    func_0x0001081285a8();
    func_0x0001080fb7dc();
  }
  return;
}



/* Entry: 1080f9f94; end: 1080fa093;  */

void FUN_1080f9f94(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 *unaff_x19;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  undefined8 uStack_58;
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar5 = (undefined4)param_1;
  func_0x0001080fb928();
  if (*(byte *)(param_4 + 1) < 2) {
    func_0x00010812866c();
  }
  else {
    if (((*(byte *)(param_4 + 1) != 9) || (lVar4 = *param_4, lVar4 == 0)) ||
       (*(ulong *)(lVar4 + 0x10) < 5)) {
      func_0x00010b99f5f8(&uStack_58,&UNK_10f47af53);
      *unaff_x19 = 2;
      unaff_x19[1] = uStack_58;
      uStack_58 = 0;
      func_0x0001080fb88c();
      return;
    }
    fVar7 = *(float *)(*(long *)(param_2 + 0x10) + 0x1c);
    func_0x00010b9a9588(lVar4 + 0x18);
    func_0x00010b9a92f0(lVar4 + 0x28);
    dVar8 = (double)fVar7;
    dVar1 = (double)CONCAT44(uVar6,uVar5);
    func_0x00010b9a92f0(lVar4 + 0x38);
    dVar3 = (double)CONCAT44(uVar6,uVar5);
    func_0x00010b9a92f0(lVar4 + 0x48);
    dVar2 = (double)CONCAT44(uVar6,uVar5);
    func_0x00010b9a92f0(lVar4 + 0x58);
    FUN_1081285c0((float)(dVar1 * dVar8),(float)dVar3,(float)(dVar2 * dVar8),
                  (float)((double)CONCAT44(uVar6,uVar5) * dVar8));
  }
  func_0x0001080fb7dc();
  return;
}



/* Entry: 1080fa094; end: 1080fa243;  */

void FUN_1080fa094(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar9 = (undefined4)((ulong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  if ((((char)param_5[1] == '\t') && (lVar4 = *param_5, lVar4 != 0)) &&
     (*(long *)(lVar4 + 0x10) == 4)) {
    if (*(char *)(lVar4 + 0x20) == '\t') {
      lVar7 = *(long *)(lVar4 + 0x18);
    }
    else {
      lVar7 = 0;
    }
    if (*(char *)(lVar4 + 0x30) == '\t') {
      lVar6 = *(long *)(lVar4 + 0x28);
    }
    else {
      lVar6 = 0;
    }
    lVar1 = lVar4 + 0x38;
    func_0x00010b9a9518(lVar1);
    uVar2 = lVar4 + 0x48;
    func_0x00010b9a9608();
    if ((lVar7 != 0) && (lVar6 != 0)) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      FUN_1080f2af4(&uStack_68,*(undefined8 *)(lVar7 + 0x10));
      lVar4 = lVar7 + 0x18;
      for (lVar7 = *(long *)(lVar7 + 0x10) << 4; lVar7 != 0; lVar7 = lVar7 + -0x10) {
        uVar5 = (uint)lVar4;
        func_0x00010b9a9588();
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar5 >> 8 | uVar5 << 0x18);
        func_0x0001080f2b60(&uStack_68,&uStack_80);
        lVar4 = lVar4 + 0x10;
      }
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      func_0x0001073b504c(&uStack_80,*(undefined8 *)(lVar6 + 0x10));
      lVar4 = lVar6 + 0x18;
      for (lVar7 = *(long *)(lVar6 + 0x10) << 4; lVar7 != 0; lVar7 = lVar7 + -0x10) {
        func_0x00010b9a92f0(lVar4);
        fVar8 = (float)(double)CONCAT44(uVar9,fVar8);
        uVar9 = 0;
        fStack_84 = fVar8;
        func_0x0001074c4f8c(&uStack_80,&fStack_84);
        lVar4 = lVar4 + 0x10;
      }
      if ((uVar2 & 1) == 0) {
        func_0x0001081283c8(param_4,&uStack_80,&uStack_68,lVar1);
      }
      else {
        func_0x000108128448();
      }
      func_0x0001080fb7dc();
      FUN_1080f3394(&uStack_80);
      FUN_1080f33d8(&uStack_68);
      return;
    }
    puVar3 = &UNK_10f47afa4;
  }
  else {
    puVar3 = &UNK_10f47af7f;
  }
  func_0x00010b99f5f8(&uStack_68,puVar3);
  *param_1 = 2;
  param_1[1] = uStack_68;
  uStack_68 = 0;
  func_0x0001080fb88c();
  return;
}



/* Entry: 1080fa244; end: 1080fa3fb;  */

void FUN_1080fa244(undefined8 *param_1,double param_2,long param_3,long *param_4)

{
  ulong *puVar1;
  undefined1 in_ZR;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long lVar10;
  float unaff_s8;
  float unaff_s9;
  long lStack_120;
  undefined8 uStack_118;
  long *aplStack_110 [4];
  long *plStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 uStack_c8;
  undefined1 auStack_70 [8];
  long alStack_68 [2];
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  func_0x0001080fb850();
  lVar10 = *(long *)(*(long *)(param_3 + 0x10) + 0x10);
  uStack_48 = extraout_x8;
  if (lVar10 == 0) {
    param_4 = (long *)&UNK_10f47afcd;
    func_0x00010b99f5f8(&lStack_58);
    *param_1 = 2;
    param_1[1] = lStack_58;
    lStack_58 = 0;
    func_0x0001080fb88c();
  }
  else {
    unaff_s8 = *(float *)(*(long *)(param_3 + 0x10) + 0x1c);
    if (*(long *)(lVar10 + 0x10) != 0) {
      do {
        func_0x0001080fb7c4();
      } while (extraout_w10 != 0);
    }
    if ((*(byte *)(param_4 + 1) & 0xfe) == 2) {
      func_0x00010b9a9358(alStack_68,param_4);
      param_4 = alStack_68;
      FUN_10812c760(&lStack_58,(double)unaff_s8,lVar10);
      func_0x0001003a8cb8(alStack_68[0]);
      uVar6 = uStack_50;
      in_ZR = lStack_58 == 1;
      if ((bool)in_ZR) {
        if ((uStack_50 != 0) && (*(long *)(uStack_50 + 0x10) != 0)) {
          do {
            func_0x0001080fb7c4();
          } while (extraout_w10_00 != 0);
        }
LAB_1080fa368:
        func_0x00010b9a8f78(alStack_68,auStack_70);
        param_4 = alStack_68;
        func_0x000104bf351c(param_1);
        func_0x0001080fb8a8();
        func_0x000104bddf04(uVar6);
      }
      else {
LAB_1080fa394:
        *param_1 = 2;
        param_1[1] = uStack_50;
        uStack_50 = 0;
      }
      func_0x000107807ab8(&lStack_58);
    }
    else {
      in_ZR = *(byte *)(param_4 + 1) == 9;
      if ((bool)in_ZR) {
        func_0x00010b9a92f0(*param_4 + 0x18);
        FUN_10812c968(&lStack_58,(float)param_2,(double)unaff_s8,lVar10);
        uVar6 = uStack_50;
        in_ZR = lStack_58 == 1;
        if (!(bool)in_ZR) goto LAB_1080fa394;
        if ((uStack_50 != 0) && (*(long *)(uStack_50 + 0x10) != 0)) {
          do {
            func_0x0001080fb7c4();
          } while (extraout_w10_01 != 0);
        }
        goto LAB_1080fa368;
      }
      uStack_50 = uStack_50 & 0xffffffffffff0000;
      lStack_58 = 0;
      param_4 = &lStack_58;
      func_0x000104bf351c(param_1);
      func_0x00010b9a8d98(&lStack_58);
    }
  }
  func_0x000107475618(lVar10);
  func_0x0001080fb754(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(param_4 + 1) & 0xfe) != 2) {
    func_0x00010b99f5f8(&plStack_f0,&DAT_10f479142);
    *extraout_x8_00 = 2;
    extraout_x8_00[1] = plStack_f0;
    plStack_f0 = (long *)0x0;
    goto LAB_1080fa604;
  }
  plVar8 = param_4;
  func_0x00010b9a9358(&lStack_120);
  if (lStack_120 == 0) {
    plStack_f0 = (long *)&UNK_10f7d0ef0;
    puStack_e8 = (undefined8 *)0x0;
  }
  else {
    plStack_f0 = (long *)(lStack_120 + 0x18);
    puStack_e8 = (undefined8 *)(ulong)*(uint *)(lStack_120 + 0xc);
  }
  uStack_e0 = 0;
  auStack_d8[0] = 0;
  uStack_c8 = 0;
  func_0x0001080fb8e0();
  if ((((((ulong)plVar8 & 1) == 0) ||
       (plVar3 = param_4, func_0x0001080fb8e0(), ((ulong)plVar8 & 1) == 0)) ||
      (plVar4 = plVar3, func_0x0001080fb8e0(), ((ulong)plVar8 & 1) == 0)) ||
     (plVar5 = plVar4, func_0x0001080fb8e0(), ((ulong)plVar8 & 1) == 0)) {
LAB_1080fa51c:
    func_0x00010b9a6d50(aplStack_110,&plStack_f0);
    plVar8 = aplStack_110[0];
    aplStack_110[0] = (long *)0x0;
  }
  else {
    func_0x0001003b13bc(&plStack_f0);
    uVar6 = 0;
    func_0x0001003b1ac8();
    if ((uVar6 & 1) == 0) goto LAB_1080fa51c;
    lVar10 = 0;
    aplStack_110[0] = param_4;
    aplStack_110[1] = plVar3;
    aplStack_110[2] = plVar4;
    aplStack_110[3] = plVar5;
    do {
      if (lVar10 == 0x20) {
        if ((double)param_4 <= 0.0) {
          puVar9 = &DAT_10f478447;
          goto LAB_1080fa660;
        }
        bVar2 = false;
        if (((double)plVar4 == 0.0) && (bVar2 = false, !NAN((double)plVar3))) {
          bVar2 = (double)plVar3 == 0.0;
        }
        if ((bVar2) || (0.0 < (double)plVar4 && 0.0 < (double)plVar3)) {
          unaff_s8 = (float)(double)plVar4;
          unaff_s9 = (float)(double)plVar5;
          uStack_118 = (long *)CONCAT44((float)(double)plVar3,(float)(double)param_4);
          bVar2 = true;
          plVar8 = uStack_118;
          goto LAB_1080fa538;
        }
        puVar9 = &DAT_10f478474;
        goto LAB_1080fa660;
      }
      puVar1 = (ulong *)((long)aplStack_110 + lVar10);
      lVar10 = lVar10 + 8;
    } while ((*puVar1 & 0x7fffffffffffffff) < 0x7ff0000000000000);
    puVar9 = &DAT_10f4784e6;
LAB_1080fa660:
    func_0x00010b99f5f8(&uStack_118,puVar9);
    plVar8 = uStack_118;
    uStack_118 = (long *)0x0;
  }
  func_0x0001080fb88c();
  bVar2 = false;
LAB_1080fa538:
  func_0x0001003b1b30(auStack_d8);
  func_0x0001003a8cb8(lStack_120);
  if (bVar2) {
    puVar7 = (undefined8 *)0x40;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110a22868;
    plVar3 = puVar7 + 3;
    *plVar3 = (long)&PTR_FUN_110a228b8;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *(int *)(puVar7 + 6) = (int)plVar8;
    *(int *)((long)puVar7 + 0x34) = (int)((ulong)plVar8 >> 0x20);
    *(float *)(puVar7 + 7) = unaff_s8;
    *(float *)((long)puVar7 + 0x3c) = unaff_s9;
    plStack_f0 = plVar3;
    puStack_e8 = puVar7;
    do {
      func_0x0001080fb7c4();
    } while (extraout_w10_02 != 0);
    func_0x0001003a8180();
    func_0x0001003a824c(&plStack_f0);
    if (puVar7[5] != 0) {
      do {
        func_0x0001080fb7c4();
      } while (extraout_w10_03 != 0);
    }
    aplStack_110[0] = plVar3;
    func_0x00010b9a8f78(&plStack_f0,aplStack_110);
    func_0x000104bf351c(extraout_x8_00,&plStack_f0);
    func_0x00010b9a8d98(&plStack_f0);
    func_0x000104bddf04(plVar3);
    FUN_1080fb5ec(plVar3);
    return;
  }
  *extraout_x8_00 = 2;
  extraout_x8_00[1] = plVar8;
LAB_1080fa604:
  func_0x0001080fb88c();
  return;
}



/* Entry: 1080fa3fc; end: 1080fa693;  */

void FUN_1080fa3fc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  int extraout_w10;
  int extraout_w10_00;
  float unaff_s8;
  float unaff_s9;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 *apuStack_a0 [4];
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 uStack_58;
  
  if ((*(byte *)(param_3 + 1) & 0xfe) != 2) {
    func_0x00010b99f5f8(&puStack_80,&DAT_10f479142);
    *param_1 = 2;
    param_1[1] = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    goto LAB_1080fa604;
  }
  puVar7 = param_3;
  func_0x00010b9a9358(&lStack_b0);
  if (lStack_b0 == 0) {
    puStack_80 = (undefined8 *)&UNK_10f7d0ef0;
    puStack_78 = (undefined8 *)0x0;
  }
  else {
    puStack_80 = (undefined8 *)(lStack_b0 + 0x18);
    puStack_78 = (undefined8 *)(ulong)*(uint *)(lStack_b0 + 0xc);
  }
  uStack_70 = 0;
  auStack_68[0] = 0;
  uStack_58 = 0;
  func_0x0001080fb8e0();
  if ((((((ulong)puVar7 & 1) == 0) ||
       (puVar6 = param_3, func_0x0001080fb8e0(), ((ulong)puVar7 & 1) == 0)) ||
      (puVar3 = puVar6, func_0x0001080fb8e0(), ((ulong)puVar7 & 1) == 0)) ||
     (puVar4 = puVar3, func_0x0001080fb8e0(), ((ulong)puVar7 & 1) == 0)) {
LAB_1080fa51c:
    func_0x00010b9a6d50(apuStack_a0,&puStack_80);
    puVar7 = apuStack_a0[0];
    apuStack_a0[0] = (undefined8 *)0x0;
  }
  else {
    func_0x0001003b13bc(&puStack_80);
    uVar5 = 0;
    func_0x0001003b1ac8();
    if ((uVar5 & 1) == 0) goto LAB_1080fa51c;
    lVar9 = 0;
    apuStack_a0[0] = param_3;
    apuStack_a0[1] = puVar6;
    apuStack_a0[2] = puVar3;
    apuStack_a0[3] = puVar4;
    do {
      if (lVar9 == 0x20) {
        if ((double)param_3 <= 0.0) {
          puVar8 = &DAT_10f478447;
          goto LAB_1080fa660;
        }
        bVar2 = false;
        if (((double)puVar3 == 0.0) && (bVar2 = false, !NAN((double)puVar6))) {
          bVar2 = (double)puVar6 == 0.0;
        }
        if ((bVar2) || (0.0 < (double)puVar3 && 0.0 < (double)puVar6)) {
          unaff_s8 = (float)(double)puVar3;
          unaff_s9 = (float)(double)puVar4;
          uStack_a8 = (undefined8 *)CONCAT44((float)(double)puVar6,(float)(double)param_3);
          bVar2 = true;
          puVar7 = uStack_a8;
          goto LAB_1080fa538;
        }
        puVar8 = &DAT_10f478474;
        goto LAB_1080fa660;
      }
      puVar1 = (ulong *)((long)apuStack_a0 + lVar9);
      lVar9 = lVar9 + 8;
    } while ((*puVar1 & 0x7fffffffffffffff) < 0x7ff0000000000000);
    puVar8 = &DAT_10f4784e6;
LAB_1080fa660:
    func_0x00010b99f5f8(&uStack_a8,puVar8);
    puVar7 = uStack_a8;
    uStack_a8 = (undefined8 *)0x0;
  }
  func_0x0001080fb88c();
  bVar2 = false;
LAB_1080fa538:
  func_0x0001003b1b30(auStack_68);
  func_0x0001003a8cb8(lStack_b0);
  if (bVar2) {
    puVar6 = (undefined8 *)0x40;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_110a22868;
    puVar3 = puVar6 + 3;
    *puVar3 = &PTR_FUN_110a228b8;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(int *)(puVar6 + 6) = (int)puVar7;
    *(int *)((long)puVar6 + 0x34) = (int)((ulong)puVar7 >> 0x20);
    *(float *)(puVar6 + 7) = unaff_s8;
    *(float *)((long)puVar6 + 0x3c) = unaff_s9;
    puStack_80 = puVar3;
    puStack_78 = puVar6;
    do {
      func_0x0001080fb7c4();
    } while (extraout_w10 != 0);
    func_0x0001003a8180();
    func_0x0001003a824c(&puStack_80);
    if (puVar6[5] != 0) {
      do {
        func_0x0001080fb7c4();
      } while (extraout_w10_00 != 0);
    }
    apuStack_a0[0] = puVar3;
    func_0x00010b9a8f78(&puStack_80,apuStack_a0);
    func_0x000104bf351c(param_1,&puStack_80);
    func_0x00010b9a8d98(&puStack_80);
    func_0x000104bddf04(puVar3);
    FUN_1080fb5ec(puVar3);
    return;
  }
  *param_1 = 2;
  param_1[1] = puVar7;
LAB_1080fa604:
  func_0x0001080fb88c();
  return;
}



/* Entry: 1080fa694; end: 1080fa6c3;  */

long * FUN_1080fa694(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar4;
  long lStack_80;
  byte bStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if ((param_1 == (long *)0x0) ||
     (plVar3 = param_1, func_0x00010b9a5818(), ((ulong)plVar3 & 1) != 0)) {
    return param_1;
  }
  func_0x00010b9a5890();
  plVar2 = &lStack_80;
  plVar1 = &lStack_80;
  func_0x0001080fb850();
  uStack_58 = extraout_x8_00;
  func_0x00010b9a8f04(&lStack_80);
  lVar4 = *(long *)(param_4 + 0x10);
  plVar3 = (long *)*plVar3;
  FUN_1080fa7d0(&lStack_70);
  if (lStack_70 == 0) {
LAB_1080fa79c:
    func_0x0001080fb7dc();
  }
  else {
    in_ZR = (bStack_78 & 0xfe) == 2;
    if ((bool)in_ZR) {
      func_0x00010b9a9358(&lStack_68,&lStack_80);
      plVar3 = &lStack_68;
      FUN_108128260(lStack_70);
      func_0x0001003a8cb8(lStack_68);
      goto LAB_1080fa79c;
    }
    in_ZR = bStack_78 == 0xf;
    if (!(bool)in_ZR) goto LAB_1080fa79c;
    FUN_108107520(&lStack_68,*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10));
    if (lStack_68 == 1) {
      plVar3 = &lStack_60;
      func_0x000108128324(lStack_70);
    }
    else {
      *extraout_x8 = 2;
      extraout_x8[1] = lStack_60;
      lStack_60 = 0;
      plVar3 = plVar2;
    }
    func_0x0001080f00c0(&lStack_68);
    in_ZR = lStack_68 == 1;
    if ((bool)in_ZR) goto LAB_1080fa79c;
  }
  func_0x0001080fb8c4();
  func_0x00010b9a8d98();
  func_0x0001080fb754(uStack_58);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar2 = plVar1;
  if (plVar3 != (long *)0x0) {
    func_0x0001080fb958(plVar3,&PTR_DAT_110a25558,&PTR_DAT_110a25f08);
    plVar2 = plVar3;
    if ((plVar3 == (long *)0x0) || (func_0x00010b9a5818(), ((ulong)plVar2 & 1) != 0))
    goto LAB_1080fa81c;
    func_0x00010b9a5890();
  }
  plVar3 = (long *)0x0;
LAB_1080fa81c:
  *plVar1 = (long)plVar3;
  return plVar2;
}



/* Entry: 1080fa6c4; end: 1080fa7cf;  */

void FUN_1080fa6c4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  long lStack_60;
  byte bStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar2 = &lStack_60;
  plVar1 = &lStack_60;
  func_0x0001080fb850();
  uStack_38 = extraout_x8;
  func_0x00010b9a8f04(&lStack_60);
  lVar3 = *(long *)(param_5 + 0x10);
  param_2 = (long *)*param_2;
  FUN_1080fa7d0(&lStack_50);
  if (lStack_50 == 0) {
LAB_1080fa79c:
    func_0x0001080fb7dc();
  }
  else {
    in_ZR = (bStack_58 & 0xfe) == 2;
    if ((bool)in_ZR) {
      func_0x00010b9a9358(&lStack_48,&lStack_60);
      param_2 = &lStack_48;
      FUN_108128260(lStack_50);
      func_0x0001003a8cb8(lStack_48);
      goto LAB_1080fa79c;
    }
    in_ZR = bStack_58 == 0xf;
    if (!(bool)in_ZR) goto LAB_1080fa79c;
    FUN_108107520(&lStack_48,*(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10));
    if (lStack_48 == 1) {
      param_2 = &lStack_40;
      func_0x000108128324(lStack_50);
    }
    else {
      *param_1 = 2;
      param_1[1] = lStack_40;
      lStack_40 = 0;
      param_2 = plVar2;
    }
    func_0x0001080f00c0(&lStack_48);
    in_ZR = lStack_48 == 1;
    if ((bool)in_ZR) goto LAB_1080fa79c;
  }
  func_0x0001080fb8c4();
  func_0x00010b9a8d98();
  func_0x0001080fb754(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 != (long *)0x0) {
    func_0x0001080fb958(param_2,&PTR_DAT_110a25558,&PTR_DAT_110a25f08);
    if ((param_2 == (long *)0x0) ||
       (plVar2 = param_2, func_0x00010b9a5818(), ((ulong)plVar2 & 1) != 0)) goto LAB_1080fa81c;
    func_0x00010b9a5890();
  }
  param_2 = (long *)0x0;
LAB_1080fa81c:
  *plVar1 = (long)param_2;
  return;
}



/* Entry: 1080fa7d0; end: 1080fa827;  */

void FUN_1080fa7d0(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    func_0x0001080fb958(param_2,&PTR_DAT_110a25558,&PTR_DAT_110a25f08);
    if ((param_2 == 0) || (uVar1 = param_2, func_0x00010b9a5818(), (uVar1 & 1) != 0))
    goto LAB_1080fa81c;
    func_0x00010b9a5890();
  }
  param_2 = 0;
LAB_1080fa81c:
  *param_1 = param_2;
  return;
}



/* Entry: 1080fa828; end: 1080fa84b;  */

void FUN_1080fa828(void)

{
  return;
}



/* Entry: 1080fa84c; end: 1080fa897;  */

void FUN_1080fa84c(undefined8 *param_1)

{
  long lStack_30;
  undefined8 uStack_28;
  
  FUN_1080fa7d0(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    uStack_28 = 0;
    FUN_108128260(lStack_30,&uStack_28);
    func_0x0001003a8cb8(uStack_28);
  }
  func_0x0001078ce460(lStack_30);
  return;
}



/* Entry: 1080fa898; end: 1080fa8bb;  */

void FUN_1080fa898(void)

{
  return;
}



/* Entry: 1080fa8bc; end: 1080fa8ff;  */

void FUN_1080fa8bc(void)

{
  undefined8 uStack_28;
  
  func_0x0001080fb838();
  func_0x0001080fb89c();
  if (uStack_28 == 0) {
    func_0x0001080fb7dc();
  }
  else {
    func_0x0001080fb8f8();
    FUN_1080f9c10();
  }
  func_0x0001080fb8c4();
  func_0x0001080fb8a8();
  return;
}



/* Entry: 1080fa900; end: 1080fa923;  */

void FUN_1080fa900(void)

{
  return;
}



/* Entry: 1080fa924; end: 1080fa953;  */

void FUN_1080fa924(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  FUN_1080f9c68();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fa954; end: 1080fa977;  */

void FUN_1080fa954(void)

{
  return;
}



/* Entry: 1080fa978; end: 1080fa9bb;  */

void FUN_1080fa978(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lStack_38;
  
  uVar1 = *param_2;
  func_0x0001080fb72c();
  if (lStack_38 != 0) {
    func_0x000108128380(lStack_38,(uint)uVar1 >> 8 | (uint)uVar1 << 0x18);
  }
  func_0x0001080fb7dc();
  if (lStack_38 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fa9bc; end: 1080fa9df;  */

void FUN_1080fa9bc(void)

{
  return;
}



/* Entry: 1080fa9e0; end: 1080faa13;  */

void FUN_1080fa9e0(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x000108128380(lStack_28,0xff000000);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080faa14; end: 1080faa37;  */

void FUN_1080faa14(void)

{
  return;
}



/* Entry: 1080faa38; end: 1080faa8f;  */

void FUN_1080faa38(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int extraout_w10;
  long *unaff_x19;
  long lStack_38;
  
  func_0x0001080fb96c();
  if (unaff_x19 != (long *)0x0) {
    do {
      func_0x0001080fb918();
    } while (extraout_w10 != 0);
  }
  func_0x0001080fb72c();
  if (lStack_38 == 0) {
    func_0x0001080fb8cc();
  }
  else {
    func_0x0001080fb908();
    FUN_1080f9c94();
  }
  func_0x0001080fb940();
  if (unaff_x19 == (long *)0x0) {
    return;
  }
  plVar1 = unaff_x19 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    func_0x0001003a8364();
    func_0x0001003ac8f0();
    if (unaff_x19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ac8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080faa90; end: 1080faab3;  */

void FUN_1080faa90(void)

{
  return;
}



/* Entry: 1080faab4; end: 1080faae3;  */

void FUN_1080faab4(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080fb978();
  FUN_1081284e8();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080faae4; end: 1080fab07;  */

void FUN_1080faae4(void)

{
  return;
}



/* Entry: 1080fab08; end: 1080fab5f;  */

void FUN_1080fab08(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int extraout_w10;
  long *unaff_x19;
  long lStack_38;
  
  func_0x0001080fb96c();
  if (unaff_x19 != (long *)0x0) {
    do {
      func_0x0001080fb918();
    } while (extraout_w10 != 0);
  }
  func_0x0001080fb72c();
  if (lStack_38 == 0) {
    func_0x0001080fb8cc();
  }
  else {
    func_0x0001080fb908();
    func_0x0001080f9d44();
  }
  func_0x0001080fb940();
  if (unaff_x19 == (long *)0x0) {
    return;
  }
  plVar1 = unaff_x19 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    func_0x0001003a8364();
    func_0x0001003ac8f0();
    if (unaff_x19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ac8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 8))();
      return;
    }
  }
  return;
}


