/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10875385c; end: 1087538a7;  */

void FUN_10875385c(undefined8 param_1)

{
  func_0x0001087560dc();
  func_0x000108755b14();
  func_0x000108755afc();
  func_0x000108755ad0();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087538a8; end: 1087538cb;  */

void FUN_1087538a8(void)

{
  func_0x000108755a24();
  func_0x000108755afc();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087538cc; end: 1087539af;  */

void FUN_1087538cc(void)

{
  func_0x0001087562e0();
  func_0x000108755b1c();
  func_0x000108755b04();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 1087539b0; end: 1087539d3;  */

void FUN_1087539b0(void)

{
  func_0x000108755c90();
  func_0x000108755b04();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087539d4; end: 108753a1f;  */

void FUN_1087539d4(undefined8 param_1)

{
  func_0x0001087560dc();
  func_0x000108755b14();
  func_0x000108755afc();
  func_0x000108755ad0();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108753a20; end: 108753a43;  */

void FUN_108753a20(void)

{
  func_0x000108755a24();
  func_0x000108755afc();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108753a44; end: 108753b37;  */

void FUN_108753a44(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108751b08(param_1 + 0x50);
    func_0x000108755d08();
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
    func_0x0001087559cc();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x58) = 1;
      func_0x000108755790();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108755c18();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000108755890();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108755b70();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x0001087557ec();
          if ((bool)in_ZR) {
            func_0x000108755860();
            func_0x0001087557a0();
            func_0x000108755748();
          }
          func_0x00010875571c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000108756088();
  func_0x000108755b1c();
  func_0x000108755b04();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108756518();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108753b38; end: 108753b6f;  */

void FUN_108753b38(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x000108755b1c();
    func_0x000108755b04();
  }
  func_0x000108755ac8();
  func_0x000108756518();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108753b70; end: 108753ec3;  */

void FUN_108753b70(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint extraout_w8;
  uint extraout_w8_00;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined8 uStack_227;
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 uStack_60;
  undefined8 *puStack_58;
  
  puVar5 = (undefined8 *)(param_1 + 0x330);
  FUN_1086cc64c();
  *(undefined8 *)(param_1 + 0x380) = *puVar5;
  func_0x000108756034();
  func_0x000108755e10();
  func_0x000108755d30();
  func_0x0001087560b8();
  func_0x000108755d28();
  lVar10 = param_1 + 0x2d8;
  func_0x000107c2825c();
  if ((*(byte *)(param_1 + 0x310) & 1) == 0) {
    func_0x000108756698();
  }
  *(long *)(param_1 + 0x308) = lVar10;
  func_0x000108755a58();
  if (((extraout_w8 >> 1 & 1) != 0) || (func_0x000108755a58(), (extraout_w8_00 >> 5 & 1) != 0)) {
    func_0x000108755bd8();
    func_0x000107c278b8(&lStack_248,&UNK_10f4b327f);
    func_0x000108756180();
    func_0x000108755800();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x108753e2c);
    (*pcVar4)();
  }
  func_0x0001087561d4();
  if (*(int *)(param_1 + 900) == 0) {
    puVar6 = (undefined4 *)(param_1 + 0x380);
    FUN_1086cc694();
    FUN_108750798(param_1 + 0x290,*puVar6);
  }
  else {
    func_0x000108755be0(&lStack_248,*(undefined8 *)(*(long *)(param_1 + 0x350) + 0x98),
                        *(undefined8 *)(param_1 + 0x358));
    func_0x000107c290ac(param_1 + 0x20,&lStack_248);
    func_0x00010875630c();
    if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
      func_0x000108755f48();
    }
    else {
      func_0x000108756258(&lStack_248,*(undefined8 *)(param_1 + 0x350));
      *(long *)(param_1 + 0x200) = lStack_240;
      *(long *)(param_1 + 0x1f8) = lStack_248;
      *(ulong *)(param_1 + 0x210) = CONCAT71(uStack_22f,uStack_230);
      *(undefined8 *)(param_1 + 0x208) = uStack_238;
      *(undefined8 *)(param_1 + 0x219) = uStack_227;
      *(ulong *)(param_1 + 0x211) = CONCAT17(uStack_228,uStack_22f);
      if (*(int *)(param_1 + 0x1f8) != 2) {
        func_0x000108755ebc();
        func_0x000108755ef0(&lStack_248);
        func_0x0001086a9b44(param_1 + 0x2c0,&lStack_248);
        func_0x0001087560ec();
        func_0x000108755c24();
        lVar10 = *(long *)(param_1 + 0x2c8);
        bVar2 = *(byte *)(param_1 + 0x38e);
        bVar3 = *(byte *)(param_1 + 0x38d);
        lVar11 = *(long *)(param_1 + 0x378);
        lVar12 = *(long *)(param_1 + 0x370);
        iVar1 = *(int *)(param_1 + 0x388);
        if (((*(long *)(param_1 + 0x178) == 0) || ((*(byte *)(param_1 + 0x220) & 1) != 0)) ||
           (iVar1 <= (int)((lVar10 - *(long *)(param_1 + 0x2c0)) / 0x1a8))) {
          if (*(long *)(param_1 + 0x2c0) != lVar10) {
            uVar8 = *(undefined8 *)(lVar10 + -0x188);
            uVar9 = *(undefined8 *)(lVar10 + -0x180);
            goto LAB_108753d40;
          }
        }
        else {
          uVar8 = 0;
          uVar9 = 0;
LAB_108753d40:
          func_0x000108756620(*(long *)(param_1 + 0x360) + 0x28,uVar8,uVar9);
        }
        plVar7 = &lStack_248;
        func_0x000108755f6c(plVar7,*(undefined8 *)(param_1 + 0x350));
        FUN_10874fa30();
        uVar8 = *(undefined8 *)(param_1 + 0x350);
        uStack_70 = 0;
        func_0x000107c28258();
        uStack_60 = 1;
        plStack_68 = plVar7;
        func_0x00010875624c();
        func_0x000108756398(uVar8);
        func_0x000108755e38();
        puVar5 = &uStack_70;
        func_0x000107c2825c();
        puStack_58 = puVar5;
        FUN_10874fd24(*(undefined8 *)(param_1 + 0x350),*(long *)(param_1 + 0x360) + 0x28,2,
                      (int)((lVar12 - lVar11) / 0x1a8) < iVar1 & bVar3 & (bVar2 ^ 1),
                      (lStack_240 - lStack_248) / 0x1a8,param_1 + 0x278,param_1 + 0x328,&puStack_58,
                      param_1 + 0x308);
        func_0x000108755ad0();
        func_0x000108756608();
        goto LAB_108753c74;
      }
      func_0x000108755f60();
    }
  }
  func_0x000108755ad0();
  func_0x000108755c24();
LAB_108753c74:
  func_0x000108755e18();
  func_0x000108755c10();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 108753ec4; end: 108753f07;  */

void FUN_108753ec4(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x330);
  func_0x000108755e10();
  func_0x000108755d30();
  func_0x0001087560b8();
  func_0x000108755d28();
  func_0x000108755c24();
  func_0x000108755e18();
  func_0x000108755c10();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108753f08; end: 108753feb;  */

void FUN_108753f08(void)

{
  func_0x0001087562e0();
  func_0x000108755b1c();
  func_0x000108755b04();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 108753fec; end: 10875400f;  */

void FUN_108753fec(void)

{
  func_0x000108755c90();
  func_0x000108755b04();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108754010; end: 10875405b;  */

void FUN_108754010(undefined8 param_1)

{
  func_0x0001087560dc();
  func_0x000108755b14();
  func_0x000108755afc();
  func_0x000108755ad0();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875405c; end: 10875407f;  */

void FUN_10875405c(void)

{
  func_0x000108755a24();
  func_0x000108755afc();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108754080; end: 10875417f;  */

void FUN_108754080(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x0001087562f8();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_108751770(unaff_x19 + 0x58);
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x19 + 0x58);
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
    func_0x000108755af0(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010875600c();
      func_0x000108755790();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108755c18();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000108755890();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108755b70();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x0001087557ec();
          if ((bool)in_ZR) {
            func_0x000108755860();
            func_0x0001087557a0();
            func_0x000108755748();
          }
          func_0x00010875571c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(unaff_x19 + 0x50);
  func_0x000108755b04();
  func_0x000108755e40();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108756528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108754180; end: 1087541b3;  */

void FUN_108754180(void)

{
  int extraout_w8;
  
  func_0x0001087562f8();
  if (extraout_w8 == 1) {
    func_0x000108755b04();
    func_0x000108755e40();
  }
  func_0x000108755ac8();
  func_0x000108756528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087541b4; end: 108754523;  */

void FUN_1087541b4(long param_1)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar4;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 uVar5;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined8 uStack_21f;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_50;
  undefined8 *puStack_48;
  
  puVar2 = (undefined8 *)(param_1 + 0x328);
  FUN_1086cc64c();
  *(undefined8 *)(param_1 + 0x368) = *puVar2;
  func_0x000107c27f9c(param_1 + 0x328);
  func_0x000108756034();
  func_0x000108755d30();
  func_0x000108755d28();
  func_0x000108755e10();
  lVar4 = param_1 + 0x2d8;
  func_0x000107c2825c();
  if ((*(byte *)(param_1 + 0x310) & 1) == 0) {
    func_0x000108756698();
  }
  *(long *)(param_1 + 0x308) = lVar4;
  func_0x000108755a58();
  if (((extraout_w8 >> 1 & 1) != 0) || (func_0x000108755a58(), (extraout_w8_00 >> 5 & 1) != 0)) {
    func_0x000108755bd8();
    func_0x0001087564ac();
    func_0x000108756180();
    func_0x000108755800();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108754458);
    (*pcVar1)();
  }
  func_0x0001087561d4();
  if (*(int *)(param_1 + 0x36c) == 0) {
    puVar3 = (undefined4 *)(param_1 + 0x368);
    FUN_1086cc694();
    FUN_10874f7bc(param_1 + 0x290,*puVar3);
  }
  else {
    func_0x000108755f28();
    func_0x000108755be0(&uStack_240);
    func_0x000107c290ac(param_1 + 0x20,&uStack_240);
    func_0x000108755e74();
    if ((*(byte *)(param_1 + 0x1f0) & 1) != 0) {
      func_0x000108756258(&uStack_240,*(undefined8 *)(param_1 + 0x348));
      func_0x000108756684(param_1 + 0x1f8);
      lVar4 = *(long *)(param_1 + 0x348);
      extraout_x8[1] = uStack_238;
      *extraout_x8 = uStack_240;
      extraout_x8[3] = CONCAT71(uStack_227,uStack_228);
      extraout_x8[2] = uStack_230;
      *(undefined8 *)((long)extraout_x8 + 0x21) = uStack_21f;
      *(ulong *)((long)extraout_x8 + 0x19) = CONCAT17(uStack_220,uStack_227);
      func_0x0001087560f4(&uStack_240,*(undefined8 *)(lVar4 + 0x98));
      func_0x0001086a9b44(param_1 + 0x2c0,&uStack_240);
      func_0x00010867b9fc(&uStack_240);
      func_0x000108755c24();
      func_0x0001086a9b00(*(undefined8 *)(param_1 + 0x2c0),*(undefined8 *)(param_1 + 0x2c8));
      func_0x000108756110();
      if (((bool)in_ZR || in_NG != in_OV) || (*(int *)(param_1 + 0x1f8) != 0)) {
        if (extraout_x8_00 != extraout_x9) {
          func_0x0001087566c8();
          FUN_108747190(extraout_x9_00 + 0x28);
        }
      }
      else {
        lVar4 = *(long *)(param_1 + 0x358);
        *(undefined8 *)(lVar4 + 0xb0) = 0;
        *(undefined1 *)(lVar4 + 0xb8) = 0;
        FUN_108747190(lVar4 + 0x28);
        func_0x000108755f28();
        FUN_108864744(&uStack_240);
        FUN_10867b070(&uStack_60,&uStack_240);
        func_0x000107c28948(&uStack_240);
        func_0x0001086a9b00(uStack_60,puStack_58);
        func_0x0001086c0798(&uStack_60,puStack_58,*(undefined8 *)(param_1 + 0x2c0),
                            *(undefined8 *)(param_1 + 0x2c8));
        func_0x0001086a9b44(param_1 + 0x2c0,&uStack_60);
        func_0x00010867b9fc(&uStack_60);
      }
      lVar4 = param_1 + 0x2a8;
      func_0x000107c2825c();
      puVar2 = &uStack_240;
      lStack_68 = lVar4;
      func_0x000108755f6c(puVar2,*(undefined8 *)(param_1 + 0x348));
      FUN_10874fa30();
      uVar5 = *(undefined8 *)(param_1 + 0x348);
      uStack_60 = 0;
      func_0x000107c28258();
      uStack_50 = 1;
      puStack_58 = puVar2;
      func_0x00010875624c();
      func_0x000108755e38(uVar5);
      puVar2 = &uStack_60;
      func_0x000107c2825c();
      puStack_48 = puVar2;
      func_0x000108756388(*(undefined8 *)(param_1 + 0x348));
      func_0x000108756378();
      FUN_10874fd24(extraout_x8_01);
      func_0x000108755ad0();
      FUN_108748a7c(&uStack_240);
      goto LAB_108754418;
    }
    func_0x000108755f54();
  }
  func_0x000108755ad0();
  func_0x000108755c24();
LAB_108754418:
  func_0x000108755e18();
  func_0x000108755c10();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 108754524; end: 108754567;  */

void FUN_108754524(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x328);
  func_0x000108756034();
  func_0x000108755d30();
  func_0x000108755d28();
  func_0x000108755e10();
  func_0x000108755c24();
  func_0x000108755e18();
  func_0x000108755c10();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108754568; end: 10875464b;  */

void FUN_108754568(void)

{
  func_0x0001087562e0();
  func_0x000108755b1c();
  func_0x000108755b04();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 10875464c; end: 10875466f;  */

void FUN_10875464c(void)

{
  func_0x000108755c90();
  func_0x000108755b04();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108754670; end: 1087546bb;  */

void FUN_108754670(undefined8 param_1)

{
  func_0x0001087560dc();
  func_0x000108755b14();
  func_0x000108755afc();
  func_0x000108755ad0();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087546bc; end: 1087546df;  */

void FUN_1087546bc(void)

{
  func_0x000108755a24();
  func_0x000108755afc();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087546e0; end: 1087547df;  */

void FUN_1087546e0(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x0001087562f8();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_1087513e4(unaff_x19 + 0x58);
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x19 + 0x58);
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
    func_0x000108755af0(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010875600c();
      func_0x000108755790();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108755c18();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000108755890();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108755b70();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x0001087557ec();
          if ((bool)in_ZR) {
            func_0x000108755860();
            func_0x0001087557a0();
            func_0x000108755748();
          }
          func_0x00010875571c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(unaff_x19 + 0x50);
  func_0x000108755b04();
  func_0x000108755e40();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108756510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087547e0; end: 108754813;  */

void FUN_1087547e0(void)

{
  int extraout_w8;
  
  func_0x0001087562f8();
  if (extraout_w8 == 1) {
    func_0x000108755b04();
    func_0x000108755e40();
  }
  func_0x000108755ac8();
  func_0x000108756510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108754814; end: 1087548bf;  */

/* WARNING: Removing unreachable block (ram,0x000108754878) */

void FUN_108754814(long param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = (ulong *)(param_1 + 0x20);
  FUN_1086cc64c();
  uVar3 = *puVar2;
  *(ulong *)(param_1 + 0x30) = uVar3;
  func_0x000108755b14();
  func_0x000108755afc();
  if (uVar3 >> 0x20 == 0) {
    FUN_1086cc694(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    do {
      iVar1 = (int)uVar4 + 0x10;
      func_0x000108755c5c();
    } while (iVar1 == 0);
    func_0x000108755cb0();
    func_0x000108756560();
  }
  else {
    func_0x0001087562b0();
  }
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 1087548c0; end: 1087548e3;  */

void FUN_1087548c0(void)

{
  func_0x000108755a24();
  func_0x000108755afc();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087548e4; end: 108754a8f;  */

void FUN_1087548e4(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  
  func_0x0001087567dc();
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
LAB_10875498c:
    func_0x000107c28a1c(param_1 + 0x30);
    func_0x0001087562f0();
    func_0x000108755cdc();
    func_0x000108755afc();
    func_0x000108755ac8();
    func_0x000108755b14();
    func_0x000108755ae8();
    return;
  }
  plVar4 = (long *)(param_1 + 0x30);
  func_0x000107c28870();
  lVar6 = *plVar4;
  func_0x000108755cdc();
  func_0x000108755ce4();
  if (lVar6 == 2) {
    func_0x000108755bd8();
    func_0x0001087560c0();
    func_0x000108755e04();
    FUN_10865aaac();
    func_0x000108756750();
    ___cxa_throw(plVar4);
  }
  else {
    uVar3 = lVar6 == 1;
    if (!(bool)uVar3) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x20);
      do {
        func_0x00010875583c();
      } while (extraout_w10 != 0);
      func_0x000108755af0(*(undefined8 *)(param_1 + 0x30));
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x48) = 1;
        func_0x000108755790();
        if (*plVar4 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108755c18();
        plVar4 = extraout_x8;
        do {
          if (*plVar4 == 0) {
            func_0x000108755890();
            plVar4 = extraout_x8_01;
            uVar1 = extraout_w10_01;
            uVar5 = extraout_w11_00;
          }
          else {
            func_0x000108755b70();
            plVar4 = extraout_x8_00;
            uVar1 = extraout_w10_00;
            uVar5 = extraout_w11;
          }
          if ((uVar5 & 1) != 0) {
            func_0x0001087557ec();
            if ((bool)uVar3) {
              func_0x000108755860();
              func_0x0001087557a0();
              func_0x000108755748();
            }
            func_0x00010875571c();
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      goto LAB_10875498c;
    }
    func_0x000108755bd8();
    func_0x0001087565a4();
    func_0x00010875673c();
    ___cxa_throw(plVar4);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108754a1c);
  (*pcVar2)();
}



/* Entry: 108754a90; end: 108754ad3;  */

void FUN_108754a90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    lVar1 = param_1 + 0x38;
    func_0x000107c27f9c(param_1 + 0x30);
  }
  func_0x000107c27f9c(lVar1);
  func_0x000108755afc();
  func_0x000108755ac8();
  func_0x000108755b14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108754ad4; end: 108754c2f;  */

void FUN_108754ad4(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar4;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long unaff_x19;
  long lVar6;
  
  func_0x0001087562f8();
  if ((extraout_x8 & 1) == 0) {
    func_0x000108756260();
    lVar6 = *param_1;
    func_0x000108755b1c();
    func_0x000108755b04();
    uVar3 = lVar6 == 1;
    if ((bool)uVar3) {
      func_0x000108755af0(*(undefined8 *)(unaff_x19 + 0x40));
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x000108755bd8();
        func_0x00010875620c();
        func_0x000108755800();
      }
      else {
        func_0x000108755a80();
        func_0x000108756234();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108754be0);
      (*pcVar2)();
    }
    func_0x000108755f7c(*(undefined8 *)(unaff_x19 + 0x38));
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
    func_0x0001087559cc();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010875600c();
      func_0x000108755790();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108755c18();
      plVar4 = extraout_x8_00;
      do {
        if (*plVar4 == 0) {
          func_0x000108755890();
          plVar4 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x000108755b70();
          plVar4 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x0001087557ec();
          if ((bool)uVar3) {
            func_0x000108755860();
            func_0x0001087557a0();
            func_0x000108755748();
          }
          func_0x00010875571c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28a1c(unaff_x19 + 0x48);
  func_0x0001087562f0();
  func_0x000108755b1c();
  func_0x000108755ac8();
  func_0x000108755e30();
  func_0x000108755c40();
  func_0x000108755ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108754c30; end: 108754c77;  */

void FUN_108754c30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x000108755ac8();
  func_0x000108755e30();
  func_0x000108755c40();
  func_0x000108755ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108754c78; end: 108754ec3;  */

void FUN_108754c78(long param_1)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  ulong uVar5;
  undefined1 auStack_228 [464];
  byte bStack_58;
  ulong *puStack_50;
  undefined1 uStack_48;
  
  puVar2 = (ulong *)(param_1 + 0x88);
  func_0x000107c28a1c();
  uVar5 = *puVar2;
  func_0x000108755e64();
  func_0x000108755d98();
  func_0x000108755d00();
  func_0x000108755c9c();
  func_0x000108755dc8();
  func_0x000108755d90();
  func_0x0001087561b4();
  func_0x00010875590c();
  if (((extraout_w8 >> 1 & 1) != 0) || (func_0x00010875590c(), (extraout_w8_00 >> 5 & 1) != 0)) {
    func_0x000108755bd8();
    func_0x00010875632c();
    func_0x000108755c38();
    func_0x000108756474();
    func_0x000108755828();
    func_0x000108755ef8();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108754dac);
    (*pcVar1)();
  }
  puVar3 = puVar2;
  func_0x000108755f98(*(undefined8 *)(param_1 + 0xb0));
  if (((puVar3 != (ulong *)0x0) && (puVar4 = puVar3, func_0x000108755e20(), (puVar3[5] & 1) == 0))
     && ((char)puVar3[0x32] != '\0')) {
    *(undefined1 *)(puVar3 + 0x32) = 0;
    if ((uVar5 >> 0x20 & 1) == 0) {
      func_0x00010875677c();
      func_0x000108755be0(auStack_228);
      if ((bStack_58 & 1) == 0) {
        func_0x000108755e50();
        func_0x000108755870();
      }
      else {
        func_0x000108755fc0();
        uStack_48 = 1;
        puStack_50 = puVar2;
        func_0x000108756480();
        if (((ulong)puVar4 & 1) == 0) {
          func_0x000108755e50();
          func_0x000108755870();
          func_0x000108755dd0();
          goto LAB_108754d54;
        }
      }
      func_0x000108755ad0();
      func_0x000108755dd0();
      goto LAB_108754d58;
    }
    func_0x000108755e50();
    func_0x000108755c6c();
    FUN_10874bb4c();
  }
LAB_108754d54:
  func_0x000108755ad0();
LAB_108754d58:
  func_0x000108755d38();
  func_0x000108755ac8();
  func_0x000108755e6c();
  func_0x000108755ae8();
  return;
}



/* Entry: 108754ec4; end: 108754eff;  */

void FUN_108754ec4(void)

{
  func_0x0001087565fc();
  func_0x000108755d98();
  func_0x000108755d00();
  func_0x000108755c9c();
  func_0x000108755dc8();
  func_0x000108755d90();
  func_0x000108755d38();
  func_0x000108755ac8();
  func_0x000108755e6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108754f00; end: 10875502f;  */

void FUN_108754f00(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  lVar2 = *(long *)(param_1 + 0xa8);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x10) >> 5 & 1) == 0) {
    FUN_1086d48a8(param_1 + 0x20,lVar2 + 0x98);
    func_0x000108755f38();
    func_0x000107c27f9c(param_1 + 0xb0);
    lVar2 = param_1 + 0x38;
    FUN_1086d5eb4();
    uStack_58 = (undefined4)lVar2;
    uStack_54 = (undefined1)((ulong)lVar2 >> 0x20);
    func_0x000108755e04();
    func_0x000107c295f0();
    func_0x000107c27914(param_1 + 0x20);
    FUN_108753068(param_1 + 0x88);
    FUN_108753068(param_1 + 0x78);
    func_0x000107c27fb8(param_1 + 0x10);
    func_0x000108755ae8();
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(&uStack_58,lVar2 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108754fd4);
  (*pcVar1)();
}



/* Entry: 108755030; end: 108755063;  */

void FUN_108755030(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xa8);
  func_0x000108756594();
  func_0x000108756618();
  func_0x00010875659c();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108755064; end: 1087552af;  */

void FUN_108755064(long param_1)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  ulong uVar5;
  undefined1 auStack_228 [464];
  byte bStack_58;
  ulong *puStack_50;
  undefined1 uStack_48;
  
  puVar2 = (ulong *)(param_1 + 0x88);
  func_0x000107c28a1c();
  uVar5 = *puVar2;
  func_0x000108755e64();
  func_0x000108755d98();
  func_0x000108755d00();
  func_0x000108755c9c();
  func_0x000108755dc8();
  func_0x000108755d90();
  func_0x0001087561b4();
  func_0x00010875590c();
  if (((extraout_w8 >> 1 & 1) != 0) || (func_0x00010875590c(), (extraout_w8_00 >> 5 & 1) != 0)) {
    func_0x000108755bd8();
    func_0x00010875632c();
    func_0x000108755c38();
    func_0x000108756474();
    func_0x000108755828();
    func_0x000108755ef8();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108755198);
    (*pcVar1)();
  }
  puVar3 = puVar2;
  func_0x000108755f98(*(undefined8 *)(param_1 + 0xb0));
  if (((puVar3 != (ulong *)0x0) && (puVar4 = puVar3, func_0x000108755e20(), (puVar3[5] & 1) == 0))
     && ((char)puVar3[0x32] != '\0')) {
    *(undefined1 *)(puVar3 + 0x32) = 0;
    if ((uVar5 >> 0x20 & 1) == 0) {
      func_0x00010875677c();
      func_0x000108755be0(auStack_228);
      if ((bStack_58 & 1) == 0) {
        func_0x000108755e50();
        func_0x000108755870();
      }
      else {
        func_0x000108755fc0();
        uStack_48 = 1;
        puStack_50 = puVar2;
        func_0x000108756480();
        if (((ulong)puVar4 & 1) == 0) {
          func_0x000108755e50();
          func_0x000108755870();
          func_0x000108755dd0();
          goto LAB_108755140;
        }
      }
      func_0x000108755ad0();
      func_0x000108755dd0();
      goto LAB_108755144;
    }
    func_0x000108755e50();
    func_0x000108755c6c();
    FUN_10874bb4c();
  }
LAB_108755140:
  func_0x000108755ad0();
LAB_108755144:
  func_0x000108755d38();
  func_0x000108755ac8();
  func_0x000108755e6c();
  func_0x000108755ae8();
  return;
}



/* Entry: 1087552b0; end: 1087552eb;  */

void FUN_1087552b0(void)

{
  func_0x0001087565fc();
  func_0x000108755d98();
  func_0x000108755d00();
  func_0x000108755c9c();
  func_0x000108755dc8();
  func_0x000108755d90();
  func_0x000108755d38();
  func_0x000108755ac8();
  func_0x000108755e6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087552ec; end: 10875536b;  */

void FUN_1087552ec(long param_1)

{
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    func_0x0001087561a4();
  }
  else {
    func_0x0001087561a4();
  }
  func_0x0001087561ac();
  func_0x000108755cf8();
  func_0x000108755be8();
  func_0x000108755ad0();
  func_0x00010875602c();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875536c; end: 1087553b7;  */

void FUN_10875536c(long param_1)

{
  long lVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x88);
  func_0x000107c27f9c(param_1 + 0x68);
  func_0x000108755cf8();
  lVar1 = 0x80;
  if (cVar2 == '\0') {
    lVar1 = 0x78;
  }
  func_0x000107c27f9c(param_1 + lVar1);
  func_0x00010875602c();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087553b8; end: 10875541b;  */

void FUN_1087553b8(long param_1)

{
  func_0x000107c28834(param_1 + 0x368);
  func_0x000107c27f9c(param_1 + 0x368);
  func_0x000108756448();
  func_0x000108755ad0();
  func_0x000108755c10();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875541c; end: 10875544b;  */

void FUN_10875541c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x368);
  func_0x000108756448();
  func_0x000108755c10();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875544c; end: 108755547;  */

void FUN_10875544c(void)

{
  func_0x0001087562e0();
  func_0x000108755b1c();
  func_0x000108755b04();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 108755548; end: 10875556b;  */

void FUN_108755548(void)

{
  func_0x000108755c90();
  func_0x000108755b04();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875556c; end: 1087555b7;  */

void FUN_10875556c(undefined8 param_1)

{
  func_0x0001087560dc();
  func_0x000108755b14();
  func_0x000108755afc();
  func_0x000108755ad0();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087555b8; end: 1087555db;  */

void FUN_1087555b8(void)

{
  func_0x000108755a24();
  func_0x000108755afc();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087555dc; end: 1087556e3;  */

void FUN_1087555dc(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108751034(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
    func_0x000108755af0(*(undefined8 *)(param_1 + 0x78));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      func_0x000108755790();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108755c18();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000108755890();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108755b70();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x0001087557ec();
          if ((bool)in_ZR) {
            func_0x000108755860();
            func_0x0001087557a0();
            func_0x000108755748();
          }
          func_0x00010875571c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x78);
  func_0x000108755d40();
  func_0x000108755e6c();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108756508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087556e4; end: 10875571b;  */

void FUN_1087556e4(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    func_0x000108755d40();
    func_0x000108755e6c();
  }
  func_0x000108755ac8();
  func_0x000108756508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875571c; end: 1087567f7;  */

void FUN_10875571c(ulong param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  lVar1 = unaff_x22 + (param_1 & 0xffffffff) * 0x18;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = unaff_x19;
  *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
  *(char *)(*(long *)(unaff_x20 + 0x90) + 1) = *(char *)(*(long *)(unaff_x20 + 0x90) + 1) + '\x01';
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1087567f8; end: 1087569c3;  */

void FUN_1087567f8(undefined8 *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **appuStack_68 [5];
  
  puVar2 = param_2[9];
  puStack_d0 = param_2;
  func_0x000107c288a8(&ppuStack_c8,param_2 + 7);
  ppuStack_70 = (undefined **)puStack_d0;
  appuStack_68[0] = ppuStack_c8;
  ppuStack_c8 = (undefined **)0x0;
  FUN_108758a1c(&puStack_d8,&ppuStack_70,puVar2);
  func_0x000107c288ac(appuStack_68);
  func_0x000107c288ac(&ppuStack_c8);
  ppuVar1 = (undefined **)0xc0;
  __Znwm();
  ppuVar1[1] = (undefined *)0x0;
  ppuVar1[2] = (undefined *)0x0;
  *ppuVar1 = (undefined *)&PTR_FUN_110a6abe8;
  ppuVar3 = ppuVar1 + 3;
  ppuVar1[4] = (undefined *)0x0;
  *ppuVar3 = (undefined *)0x0;
  ppuVar1[6] = (undefined *)0x0;
  ppuVar1[5] = (undefined *)0x0;
  ppuVar1[7] = (undefined *)0x0;
  ppuVar1[8] = (undefined *)0x3cb0b1bb;
  ppuVar1[10] = (undefined *)0x0;
  ppuVar1[9] = (undefined *)0x0;
  ppuVar1[0xc] = (undefined *)0x0;
  ppuVar1[0xb] = (undefined *)0x0;
  ppuVar1[0xd] = (undefined *)0x0;
  ppuVar1[0xe] = (undefined *)0x32aaaba7;
  ppuVar1[0x10] = (undefined *)0x0;
  ppuVar1[0xf] = (undefined *)0x0;
  ppuVar1[0x12] = (undefined *)0x0;
  ppuVar1[0x11] = (undefined *)0x0;
  ppuVar1[0x14] = (undefined *)0x0;
  ppuVar1[0x13] = (undefined *)0x0;
  ppuVar1[0x16] = (undefined *)0x0;
  ppuVar1[0x15] = (undefined *)0x0;
  ppuVar1[0x17] = (undefined *)0x0;
  ppuStack_90 = ppuVar3;
  ppuStack_88 = ppuVar1;
  ppuStack_80 = ppuVar3;
  ppuStack_78 = ppuVar1;
  do {
    func_0x000107c332bc();
  } while (extraout_w10 != 0);
  ppuStack_98 = &PTR_FUN_110a6ab80;
  ppuStack_70 = ppuVar3;
  appuStack_68[0] = ppuVar1;
  do {
    func_0x000107c332bc();
  } while (extraout_w10_00 != 0);
  do {
    func_0x000107c332bc();
  } while (extraout_w10_01 != 0);
  *param_1 = ppuVar3;
  param_1[1] = ppuVar1;
  func_0x000108637a10(&ppuStack_70);
  func_0x000107c3a5c0();
  puStack_d0 = puStack_d8;
  ppuStack_c0 = ppuVar3;
  ppuStack_b8 = ppuVar1;
  ppuStack_a8 = ppuVar1;
  ppuStack_b0 = ppuVar3;
  if (puStack_d8 != (undefined8 *)0x0) {
    do {
      func_0x00010875a72c();
      ppuStack_c0 = ppuStack_90;
      ppuStack_b8 = ppuStack_88;
      ppuStack_a8 = ppuStack_78;
      ppuStack_b0 = ppuStack_80;
    } while (extraout_w10_02 != 0);
  }
  ppuStack_90 = (undefined **)0x0;
  ppuStack_88 = (undefined **)0x0;
  ppuStack_80 = (undefined **)0x0;
  ppuStack_78 = (undefined **)0x0;
  ppuStack_c8 = &PTR_FUN_110a6ab80;
  FUN_10875978c(&ppuStack_70,&puStack_d0);
  FUN_1087590fc(auStack_a0);
  FUN_1087597e0(&ppuStack_70);
  FUN_1087597e0(&puStack_d0);
  func_0x000107c27f9c(auStack_a0);
  FUN_108758f74(&ppuStack_98);
  func_0x00010875ab04();
  return;
}



/* Entry: 1087569c4; end: 1087573d3;  */

void FUN_1087569c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  byte *pbVar18;
  long lVar19;
  uint extraout_w8;
  int extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  ulong uVar20;
  int extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  byte *pbVar24;
  long *plVar25;
  long lVar26;
  ulong unaff_x27;
  long *plVar27;
  undefined8 uVar28;
  undefined ***pppuStack_628;
  undefined ***pppuStack_620;
  long *plStack_618;
  byte bStack_448;
  undefined **ppuStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined ***pppuStack_428;
  undefined4 uStack_420;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (undefined8 *)0x4d0;
  __Znwm();
  *puVar9 = FUN_108759bd4;
  puVar9[1] = FUN_10875a028;
  pppuVar17 = (undefined ***)(puVar9 + 4);
  puVar1 = puVar9 + 0x7d;
  puVar2 = puVar9 + 0x86;
  puVar9[0x98] = param_1;
  puVar10 = puVar9 + 2;
  FUN_1087598fc();
  func_0x00010875aa7c();
  *(undefined1 *)(puVar9 + 0x82) = 0;
  puVar9[0x81] = 0;
  puVar9[0x80] = 0;
  func_0x000107c28258();
  puVar9[0x81] = puVar10;
  *(undefined1 *)(puVar9 + 0x82) = 1;
  func_0x000107c316c8(puVar9 + 0x83,&UNK_10f4b9fff);
  puVar9[0x88] = 0;
  puVar9[0x87] = 0;
  puVar9[0x86] = 0;
  func_0x000107c316c8(puVar1,&UNK_10f4ba01a);
  FUN_10886bc20(pppuVar17,*(undefined8 *)(param_1 + 0x98));
  plVar25 = puVar9 + 0x41;
  func_0x000107c2905c(plVar25,pppuVar17);
  puVar10 = puVar9 + 0x8c;
  pppuVar16 = (undefined ***)(puVar9 + 0x95);
  puVar3 = puVar9 + 0x96;
  _bzero(&pppuStack_620,0x1e0);
  while ((((*(byte *)(puVar9 + 0x7c) & 1) != 0 || ((bStack_448 & 1) != 0)) &&
         ((undefined ***)*plVar25 != pppuStack_620))) {
    plVar27 = plVar25;
    func_0x000107c29060();
    plVar11 = plVar27;
    func_0x0001086a74d4();
    if ((((ulong)plVar11 & 1) == 0) &&
       (*(char *)((long)plVar27 + 0x1cc) != '\x01' || (int)plVar27[0x39] != 3)) {
      if ((char)plVar27[0x2a] == '\x01') {
        lVar19 = plVar27[0x29] * 1000;
      }
      else {
        lVar19 = 0;
      }
      unaff_x27 = unaff_x27 & 0xffffffff00000000 | 2;
      FUN_1088460dc(&ppuStack_440,plVar27,0,unaff_x27,lVar19,plVar27 + 3,0);
      FUN_1086d6ea8(puVar2,&ppuStack_440);
      func_0x000107c288d0(&ppuStack_440);
    }
    func_0x000107c29158(plVar25);
  }
  func_0x00010875aadc();
  func_0x000107c288c8(puVar9 + 0x42);
  func_0x000107c29150(pppuVar17);
  func_0x000107c316d0(puVar1);
  func_0x000107c316c8(&pppuStack_620,&UNK_10f4ba030);
  pppuStack_628 = (undefined ***)CONCAT44(pppuStack_628._4_4_,(uint)*(uint3 *)(param_1 + 0xe0));
  ppuStack_440 = &PTR_FUN_110a6ac38;
  pppuStack_428 = &ppuStack_440;
  puStack_438 = puVar2;
  FUN_1087055dc(*(undefined8 *)(param_1 + 0xa8),&pppuStack_628,&ppuStack_440);
  FUN_108706e6c(&ppuStack_440);
  func_0x000107c316d0(&pppuStack_620);
  plVar27 = *(long **)(param_1 + 200);
  func_0x00010875a8c8();
  uStack_420 = 0x1f6;
  func_0x000107c278b8(puVar9 + 0x89,&UNK_10f4b2029);
  lVar19 = (long)(puVar9[0x87] - puVar9[0x86]) / 0x3d0;
  func_0x000107c28af4(lVar19);
  pppuVar12 = &ppuStack_440;
  func_0x000107c28824(pppuVar12,puVar9 + 0x89,lVar19);
  pppuVar13 = pppuVar12;
  func_0x00010875a81c();
  pppuStack_620 = pppuVar13;
  (**(code **)(*plVar27 + 0x18))(plVar27,pppuVar12,&pppuStack_620);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar9 + 0x89);
  func_0x00010875a824();
  *puVar10 = 0;
  puVar9[0x8d] = 0;
  puVar9[0x8e] = 0;
  if (puVar9[0x87] - puVar9[0x86] != 0) {
    uVar20 = (long)(puVar9[0x87] - puVar9[0x86]) / 0x3d0;
    if (0xf0f0f0f0f0f0f0 < uVar20) goto LAB_1087570a4;
    FUN_108757e10(plVar25,uVar20,0,puVar9 + 0x8e);
    FUN_108757d34(puVar10,plVar25);
    func_0x000108757f54(plVar25);
  }
  puVar9[5] = 0;
  *pppuVar17 = (undefined **)0x0;
  puVar9[7] = 0;
  puVar9[6] = 0;
  *(undefined4 *)(puVar9 + 8) = 0x3f800000;
  *(undefined4 *)(puVar9 + 9) = 0;
  func_0x000107c316c8(plVar25,&UNK_10f4ba043);
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x38))
            (puVar9 + 0x97,*(long **)(param_1 + 0xb8),puVar2,1,*(undefined4 *)(param_1 + 0xe4));
  plVar27 = (long *)(param_1 + 0x38);
  FUN_108757418(puVar3,plVar27,puVar9 + 0x97);
  *pppuVar16 = (undefined **)*puVar3;
  do {
    func_0x00010875a72c();
  } while (extraout_w10 != 0);
  func_0x00010875a888(*pppuVar16);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar9 + 0x99) = 0;
    lVar19 = puVar9[0x95];
    func_0x00010875a6d8();
    lVar26 = *plVar27;
    if (lVar26 == 0) {
      func_0x000107c3a5c0();
      lVar26 = *plVar27;
    }
    func_0x00010875aa4c();
    plVar27 = extraout_x8;
    do {
      if (*plVar27 == 0) {
        func_0x00010875a75c();
        plVar27 = extraout_x8_01;
        uVar6 = extraout_w10_01;
        uVar21 = extraout_w11_00;
      }
      else {
        func_0x00010875a894();
        plVar27 = extraout_x8_00;
        uVar6 = extraout_w10_00;
        uVar21 = extraout_w11;
      }
      if ((uVar21 & 1) != 0) {
        pbVar24 = *(byte **)(lVar19 + 0x90);
        bVar5 = pbVar24[1];
        uVar20 = (ulong)bVar5;
        bVar8 = *pbVar24 <= bVar5;
        pbVar18 = pbVar24;
        if (bVar5 == *pbVar24) {
          func_0x00010875a76c();
          iVar4 = extraout_w8_00;
          if (bVar8) {
            iVar4 = extraout_w9;
          }
          pbVar18 = (byte *)(ulong)(iVar4 * 0x18 + 0x10);
          _malloc();
          uVar20 = 0;
          *pbVar18 = (byte)iVar4;
          pbVar18[1] = 0;
          pbVar18[8] = 0;
          pbVar18[9] = 0;
          pbVar18[10] = 0;
          pbVar18[0xb] = 0;
          pbVar18[0xc] = 0;
          pbVar18[0xd] = 0;
          pbVar18[0xe] = 0;
          pbVar18[0xf] = 0;
          *(byte **)(pbVar24 + 8) = pbVar18;
          *(byte **)(lVar19 + 0x90) = pbVar18;
        }
        pbVar24 = pbVar18 + uVar20 * 0x18 + 0x10;
        pbVar24[0] = 0;
        pbVar24[1] = 0;
        pbVar24[2] = 0;
        pbVar24[3] = 0;
        pbVar24[4] = 0;
        pbVar24[5] = 0;
        pbVar24[6] = 0;
        pbVar24[7] = 0;
        *(undefined8 **)(pbVar18 + uVar20 * 0x18 + 0x18) = puVar9;
        *(long *)(pbVar18 + uVar20 * 0x18 + 0x20) = lVar26;
        func_0x00010875a77c(*(undefined8 *)(lVar19 + 0x90));
        *(undefined8 *)(lVar19 + 0x10) = 0;
        goto LAB_108757068;
      }
    } while ((uVar6 >> 1 & 1) == 0);
  }
  pppuVar12 = pppuVar16;
  FUN_10872f9ec();
  if (pppuVar17 != pppuVar12) {
    *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(pppuVar12 + 4);
    ppuVar22 = pppuVar12[2];
    lVar19 = puVar9[5];
    if (lVar19 != 0) {
      ppuVar23 = *pppuVar17;
      for (; lVar19 != 0; lVar19 = lVar19 + -1) {
        *ppuVar23 = (undefined *)0x0;
        ppuVar23 = ppuVar23 + 1;
      }
      plVar27 = (long *)puVar9[6];
      puVar9[6] = 0;
      puVar9[7] = 0;
      for (ppuVar23 = ppuVar22;
          (ppuVar22 = ppuVar23, plVar27 != (long *)0x0 &&
          (ppuVar22 = (undefined **)0x0, ppuVar23 != (undefined **)0x0));
          ppuVar23 = (undefined **)*ppuVar23) {
        func_0x000107c27cfc(plVar27 + 2,ppuVar23 + 2);
        FUN_108730dbc(plVar27 + 5,ppuVar23 + 5);
        lVar19 = *plVar27;
        FUN_108757f9c(pppuVar17,plVar27);
        plVar27 = (long *)lVar19;
      }
      func_0x00010875ab58();
    }
    for (; ppuVar22 != (undefined **)0x0; ppuVar22 = (undefined **)*ppuVar22) {
      puVar14 = (undefined8 *)0x100;
      __Znwm();
      puVar9[0x7d] = puVar14;
      puVar9[0x7e] = puVar9 + 6;
      puVar9[0x7f] = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      FUN_1087313b8(puVar14 + 2,ppuVar22 + 2);
      *(undefined1 *)(puVar9 + 0x7f) = 1;
      puVar15 = puVar14 + 2;
      FUN_108848654();
      puVar14[1] = puVar15;
      FUN_108757f9c(pppuVar17,*puVar1);
      func_0x00010875aaac();
    }
  }
  lVar19 = puVar9[0x98];
  *(undefined4 *)(puVar9 + 9) = *(undefined4 *)(pppuVar12 + 5);
  func_0x000107c27f9c(pppuVar16);
  func_0x000107c27f9c(puVar3);
  func_0x00010875a8b0();
  func_0x000107c316d0(plVar25);
  plVar25 = *(long **)(lVar19 + 200);
  uStack_430 = 0;
  pppuStack_428 = (undefined ***)0x0;
  puStack_438 = (undefined8 *)0x0;
  ppuStack_440 = &PTR_FUN_110a609a8;
  uStack_420 = 0x1f7;
  func_0x00010875a900();
  pppuVar16 = &ppuStack_440;
  func_0x000107c2881c(pppuVar16,puVar9 + 0x8f,*(undefined4 *)(puVar9 + 9));
  pppuVar12 = pppuVar16;
  func_0x00010875a81c();
  pppuStack_620 = pppuVar12;
  (**(code **)(*plVar25 + 0x18))(plVar25,pppuVar16,&pppuStack_620);
  plVar25 = (long *)puVar9[0x98];
  func_0x00010875a8f0();
  func_0x00010875a824();
  pppuStack_620 = pppuVar17;
  plStack_618 = plVar25;
  func_0x000107c316c8(&ppuStack_440,&UNK_10f4ba053);
  FUN_1087577d0(puVar9[0x86],puVar9[0x87],puVar10,plVar25,&pppuStack_620);
  pppuVar17 = &ppuStack_440;
  func_0x000107c316d0();
  func_0x00010875a938();
  uStack_420 = 0x1f8;
  func_0x00010875a81c();
  pppuStack_628 = pppuVar17;
  func_0x00010875a9b0(*(undefined8 *)(*plVar25 + 0x18));
  func_0x00010875a824();
  func_0x00010875a938();
  uStack_420 = 0x1f5;
  func_0x00010875a81c();
  pppuStack_628 = pppuVar17;
  func_0x00010875a9b0(*(undefined8 *)(*plVar25 + 0x18));
  func_0x00010875a824();
  plVar25 = puVar9 + 3;
  lVar19 = *plVar25;
  do {
    ppuStack_440 = (undefined **)0x0;
    lVar26 = lVar19 + 0x10;
    func_0x00010875a720(lVar26,&ppuStack_440);
    if ((int)lVar26 != 0) {
      FUN_108758c80(lVar19 + 0x98);
      uVar28 = *puVar10;
      *(undefined8 *)(lVar19 + 0xa0) = puVar9[0x8d];
      *(undefined8 *)(lVar19 + 0x98) = uVar28;
      *(undefined8 *)(lVar19 + 0xa8) = puVar9[0x8e];
      *puVar10 = 0;
      puVar9[0x8d] = 0;
      puVar9[0x8e] = 0;
      *(undefined1 *)(lVar19 + 0xb0) = 1;
      *(undefined1 *)(lVar19 + 0xb8) = 1;
      func_0x00010875a874(lVar19 + 0x10);
      func_0x000107c31508(lVar19,plVar25);
      break;
    }
  } while (((uint)ppuStack_440 >> 1 & 1) == 0);
  func_0x00010875a82c(plVar25);
  func_0x00010875aa00();
  FUN_108638118(puVar10);
  func_0x000107c29108(puVar2);
  func_0x00010875a8a0();
  func_0x00010875a7c8();
  func_0x00010875a7e4();
LAB_108757068:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_1087570a4:
  func_0x000108757d20();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x108757268);
  (*pcVar7)();
}



/* Entry: 1087573d4; end: 108757417;  */

void FUN_1087573d4(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x00010875a72c();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x00010875ab04();
  return;
}



/* Entry: 108757418; end: 1087577cf;  */

void FUN_108757418(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  int extraout_w8_01;
  long lVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  long *plVar10;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar11;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar12;
  long lVar13;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  *puVar4 = FUN_1087599c0;
  puVar4[1] = FUN_108759b94;
  lVar9 = *param_3;
  plVar10 = puVar4 + 4;
  *plVar10 = lVar9;
  puVar4[7] = param_2;
  if (lVar9 != 0) {
    do {
      func_0x00010875a72c();
    } while (extraout_w10 != 0);
  }
  FUN_108733a58(puVar4 + 2);
  FUN_10872e700(param_1,puVar4 + 2);
  func_0x000107c28874(&lStack_58);
  func_0x000107c28878(&uStack_60,2);
  uVar8 = uStack_60;
  uStack_60 = 0;
  func_0x000107c28888(lStack_48 + 0x18,uVar8);
  func_0x000107c28890(&uStack_60);
  *(undefined8 *)(lStack_48 + 8) = 2;
  func_0x000107c2887c(lStack_48,auStack_50);
  func_0x000107c28894(lStack_48,0,param_2 + 0x38);
  func_0x000107c28898(lStack_48,1,plVar10);
  lVar9 = lStack_58;
  uStack_60 = 0;
  lStack_58 = 0;
  puVar4[6] = lVar9;
  func_0x000107c27f9c(&uStack_60);
  plVar5 = &lStack_58;
  func_0x000107c2889c();
  puVar4[5] = puVar4[6];
  do {
    func_0x00010875a72c();
  } while (extraout_w10_00 != 0);
  func_0x00010875a888(puVar4[5]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 8) = 0;
    func_0x00010875a9a0();
    lVar9 = *plVar5;
    if (lVar9 == 0) {
      func_0x000107c3a5c0();
      lVar9 = *plVar5;
    }
    plVar5 = (long *)(lStack_48 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x00010875a75c();
        plVar5 = extraout_x8_00;
        uVar2 = extraout_w10_02;
        uVar11 = extraout_w11_00;
      }
      else {
        func_0x00010875a894();
        plVar5 = extraout_x8;
        uVar2 = extraout_w10_01;
        uVar11 = extraout_w11;
      }
      if ((uVar11 & 1) != 0) {
        lVar13 = *(long *)(lStack_48 + 0x90);
        func_0x00010875aa10();
        if ((bool)in_ZR) {
          func_0x00010875a76c();
          iVar1 = extraout_w8_01;
          if ((bool)in_CY) {
            iVar1 = extraout_w9;
          }
          puVar7 = (undefined1 *)(ulong)(iVar1 * 0x18 + 0x10);
          _malloc();
          *puVar7 = (char)iVar1;
          puVar7[1] = 0;
          *(undefined8 *)(puVar7 + 8) = 0;
          *(undefined1 **)(lVar13 + 8) = puVar7;
          *(undefined1 **)(lStack_48 + 0x90) = puVar7;
        }
        func_0x00010875aa20();
        *(long *)(extraout_x8_03 + 0x20) = lVar9;
        goto LAB_1087576f4;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  plVar5 = puVar4 + 5;
  func_0x000107c28870();
  lVar9 = *plVar5;
  func_0x00010875a7f4();
  func_0x00010875a8c0();
  if (lVar9 == 0) {
    lVar9 = puVar4[7];
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&lStack_58,&UNK_10f4afc25,lVar9 + 0x20);
    FUN_10865aaac(uVar8,&lStack_58);
    func_0x00010875ab88();
    ___cxa_throw(uVar8);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10875774c);
    (*pcVar3)();
  }
  puVar4[5] = *plVar10;
  do {
    func_0x00010875a72c();
  } while (extraout_w10_03 != 0);
  func_0x00010875a888(puVar4[5]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 8) = 1;
    func_0x00010875a9a0();
    lVar13 = *plVar5;
    if (lVar13 == 0) {
      func_0x000107c3a5c0();
      lVar13 = *plVar5;
    }
    plVar10 = (long *)(lVar9 + 0x10);
    do {
      if (*plVar10 == 0) {
        func_0x00010875a75c();
        plVar10 = extraout_x8_02;
        uVar2 = extraout_w10_05;
        uVar11 = extraout_w11_02;
      }
      else {
        func_0x00010875a894();
        plVar10 = extraout_x8_01;
        uVar2 = extraout_w10_04;
        uVar11 = extraout_w11_01;
      }
      if ((uVar11 & 1) != 0) {
        lVar12 = *(long *)(lVar9 + 0x90);
        func_0x00010875aa10();
        if ((bool)in_ZR) {
          func_0x00010875a76c();
          func_0x00010875a6c8();
          func_0x00010875a73c();
          *(long **)(lVar12 + 8) = plVar5;
          *(long **)(lVar9 + 0x90) = plVar5;
        }
        func_0x00010875aa20();
        *(long *)(extraout_x8_04 + 0x20) = lVar13;
        lStack_48 = lVar9;
LAB_1087576f4:
        func_0x00010875a77c(*(undefined8 *)(lStack_48 + 0x90));
        *(undefined8 *)(lStack_48 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  puVar6 = puVar4 + 5;
  FUN_10872f9ec(puVar6);
  lVar9 = puVar4[3];
  do {
    lStack_58 = 0;
    lVar13 = lVar9 + 0x10;
    func_0x00010875a720(lVar13,&lStack_58);
    if ((int)lVar13 != 0) {
      func_0x000108733b60(lVar9 + 0x98);
      FUN_108730e90(lVar9 + 0x98,puVar6);
      *(undefined1 *)(lVar9 + 200) = 1;
      func_0x00010875a874(lVar9 + 0x10);
      func_0x00010875ab7c();
      func_0x000107c31508();
      break;
    }
  } while (((uint)lStack_58 >> 1 & 1) == 0);
  func_0x00010875a82c(puVar4 + 3);
  func_0x00010875a7f4();
  func_0x00010875a7c8();
  func_0x00010875a954();
  func_0x00010875a7e4();
  return;
}



/* Entry: 1087577d0; end: 108757d07;  */

long * FUN_1087577d0(long param_1,long param_2,long *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_498 [32];
  undefined2 uStack_478;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined4 uStack_390;
  undefined1 uStack_38c;
  undefined1 auStack_388 [24];
  undefined1 uStack_370;
  undefined1 uStack_338;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  int iStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [32];
  undefined1 auStack_1f8 [32];
  char cStack_1d8;
  undefined1 auStack_1d0 [32];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  char cStack_180;
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  int iStack_148;
  undefined1 auStack_140 [16];
  long lStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 uStack_d0;
  
  do {
    if (param_1 == param_2) {
      return param_3;
    }
    func_0x000107c316c8(auStack_178,&UNK_10f4ba064);
    auStack_140[0] = 0;
    uStack_d0 = 0;
    auStack_388[0] = 0;
    uStack_338 = 0;
    FUN_10863723c(auStack_248,auStack_140,auStack_388);
    FUN_108637394(auStack_388);
    FUN_1086373dc(auStack_140);
    if (*(int *)(param_1 + 0x68) == 1) {
      func_0x000107c316c8(&uStack_260,&UNK_10f4ba0a4);
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_270 = 0;
      FUN_10862b17c(&uStack_280,(*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8)) / 0x18);
      iVar8 = 0;
      lVar1 = *(long *)(param_1 + 0xc0);
      for (lVar9 = *(long *)(param_1 + 0xb8); uVar3 = uStack_270, lVar7 = lStack_278,
          uVar10 = uStack_280, lVar9 != lVar1; lVar9 = lVar9 + 0x18) {
        FUN_108758394(auStack_140,param_5,lVar9);
        func_0x00010862b5b4(&uStack_280,auStack_140);
        func_0x00010875aa08();
        lVar7 = (long)*(char *)(lStack_278 + -0x41);
        if (lVar7 < 0) {
          lVar7 = *(long *)(lStack_278 + -0x50);
        }
        if (lVar7 == 0) {
          iVar8 = iVar8 + 1;
        }
      }
      uStack_270 = 0;
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      uStack_2b8 = 0;
      iVar2 = *(int *)(param_1 + 0x318);
      if (2 < iVar2 - 1U) {
        iVar2 = 0;
      }
      auStack_388[0] = 0;
      uStack_370 = 0;
      lStack_158 = lVar7;
      uStack_160 = uVar10;
      uStack_150 = uVar3;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_290 = 0;
      iStack_288 = iVar8;
      iStack_148 = iVar8;
      FUN_10862b810(auStack_140,auStack_388,&uStack_160,0,iVar2);
      FUN_10862b094(&uStack_160);
      func_0x000107c279a4(auStack_388);
      FUN_10862b094(&uStack_2a0);
      FUN_10862b094(&uStack_2b8);
      func_0x000107c27c5c(auStack_140,param_1 + 0x48);
      plVar4 = *(long **)(param_4 + 0xb8);
      (**(code **)(*plVar4 + 0x40))(plVar4,param_1);
      if ((uStack_fc & 0xff) == ((uint)((ulong)plVar4 >> 0x20) & 0xff)) {
        if ((char)uStack_fc != '\0') {
          uStack_100 = (int)plVar4;
        }
      }
      else if ((uStack_fc & 0xff) == 0) {
        uStack_fc = CONCAT31(uStack_fc._1_3_,1);
        uStack_100 = (int)plVar4;
      }
      else {
        uStack_fc = (uint)uStack_fc._1_3_ << 8;
      }
      if (cStack_180 == '\x01') {
        func_0x000107c27c54(auStack_1d0,auStack_140);
        func_0x00010875866c(&uStack_1b0);
        uStack_1a8 = uStack_118;
        uStack_1b0 = uStack_120;
        uStack_1a0 = uStack_110;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_120 = 0;
        uStack_198 = uStack_108;
        uStack_190 = CONCAT44(uStack_fc,uStack_100);
        uStack_188 = uStack_f8;
      }
      else {
        FUN_108637308(auStack_1d0,auStack_140);
      }
      FUN_1086373b4(auStack_140);
      FUN_10862b094(&uStack_280);
      puVar5 = &uStack_260;
LAB_108757ad4:
      func_0x000107c316d0(puVar5);
    }
    else if (*(int *)(param_1 + 0x68) == 0) {
      func_0x000107c316c8(auStack_388,&UNK_10f4ba083);
      FUN_1086a3f6c(&uStack_160,param_1 + 0xb8,param_4 + 8);
      FUN_108758394(auStack_140,param_5,&uStack_160);
      if (cStack_1d8 == '\x01') {
        func_0x000107c3194c(auStack_248,auStack_140);
        func_0x000107c27b9c(auStack_230,auStack_128);
        func_0x000107c27c54(auStack_218,&uStack_110);
        func_0x000107c27c54(auStack_1f8,auStack_f0);
      }
      else {
        FUN_1086372ac(auStack_248,auStack_140);
      }
      func_0x00010875aa08();
      func_0x00010875aac0();
      puVar5 = (undefined8 *)auStack_388;
      goto LAB_108757ad4;
    }
    func_0x000107c27994(&uStack_260,param_1);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    FUN_1087586a4(auStack_388,auStack_248);
    lStack_158 = lStack_258;
    uStack_160 = uStack_260;
    uStack_150 = uStack_250;
    uStack_260 = 0;
    lStack_258 = 0;
    uStack_250 = 0;
    FUN_1086375b0(auStack_140,auStack_388);
    FUN_108637540(auStack_498,&uStack_160,uVar10,0,auStack_140,0,0,0);
    func_0x0001086375e4(auStack_140);
    func_0x00010875aac0();
    func_0x0001086375e4(auStack_388);
    func_0x000107c27914(&uStack_260);
    lVar9 = param_1;
    FUN_1086a7340(param_1,param_4 + 8,param_4 + 0x20);
    if (((int)lVar9 != 0) && (uStack_478 = 0x100, *(int *)(param_1 + 0x30) == 5)) {
      uStack_478 = 0x101;
    }
    if (*(char *)(param_1 + 0x2b8) == '\x01') {
      uStack_3a0 = *(undefined8 *)(param_1 + 0x2b0);
      uStack_398 = 1;
    }
    if (*(char *)(param_1 + 0x34c) == '\x01') {
      uStack_390 = *(undefined4 *)(param_1 + 0x348);
      uStack_38c = 1;
    }
    func_0x0001086375e4(auStack_248);
    func_0x000107c316d0(auStack_178);
    uVar6 = param_3[1];
    if (uVar6 < (ulong)param_3[2]) {
      func_0x000108757e9c(uVar6,auStack_498);
      lVar9 = uVar6 + 0x110;
    }
    else {
      plVar4 = param_3;
      FUN_108758968(param_3,(long)(uVar6 - *param_3) / 0x110 + 1);
      func_0x000108757e10(auStack_140,plVar4,(param_3[1] - *param_3) / 0x110,param_3 + 2);
      func_0x000108757e9c(lStack_130,auStack_498);
      lStack_130 = lStack_130 + 0x110;
      FUN_108757d34(param_3,auStack_140);
      lVar9 = param_3[1];
      func_0x000108757f54(auStack_140);
    }
    param_3[1] = lVar9;
    func_0x00010875aafc();
    param_1 = param_1 + 0x3d0;
  } while( true );
}



/* Entry: 108757d08; end: 108757d0b;  */

undefined8 * FUN_108757d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ab10;
  func_0x000107c288a4(param_1 + 0x19);
  func_0x000107c29798(param_1 + 0x17);
  func_0x000107c28cc4(param_1 + 0x15);
  func_0x000107c28808(param_1 + 0x13);
  FUN_10865a95c(param_1 + 7);
  func_0x000107c27914(param_1 + 4);
  func_0x000107c27914(param_1 + 1);
  return param_1;
}



/* Entry: 108757d0c; end: 108757d33;  */

void FUN_108757d0c(void)

{
  FUN_1087589b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108757d34; end: 108757e0f;  */

void FUN_108757d34(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -0x110) * 0x110;
  func_0x00010875a804();
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x110) {
    func_0x000108757e9c(lVar2,lVar3);
    lVar2 = lVar2 + 0x110;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x110) {
    func_0x0001086381c8(lVar4);
  }
  func_0x00010875ab34();
  param_2[1] = lVar5;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108757e10; end: 108757f9b;  */

long * FUN_108757e10(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x000108757e5c();
    lVar1 = param_2;
    param_2 = lVar2;
  }
  lVar2 = lVar1 + param_3 * 0x110;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x110;
  return param_1;
}



/* Entry: 108757f9c; end: 108758393;  */

void FUN_108757f9c(undefined8 param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  byte bVar17;
  
  func_0x00010875abb4();
  uVar9 = param_2 + 0x10;
  FUN_108848654();
  puVar11 = (ulong *)(unaff_x19 + 1);
  uVar12 = *puVar11;
  unaff_x20[1] = uVar9;
  if ((uVar12 != 0) && ((float)(unaff_x19[3] + 1) <= *(float *)(unaff_x19 + 4) * (float)uVar12))
  goto LAB_1087581dc;
  uVar4 = 1;
  if (2 < uVar12) {
    uVar4 = (ulong)((uVar12 & uVar12 - 1) != 0);
  }
  uVar4 = uVar4 | uVar12 << 1;
  uVar8 = (ulong)((float)(unaff_x19[3] + 1) / *(float *)(unaff_x19 + 4));
  if (uVar4 <= uVar8) {
    uVar4 = uVar8;
  }
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar12 = *puVar11;
  }
  if (uVar12 < uVar4) {
LAB_10875805c:
    func_0x00010875ab70();
    FUN_108731108();
    FUN_1087310f0();
    unaff_x19[1] = uVar4;
    lVar5 = *unaff_x19;
    for (uVar12 = 0; uVar4 != uVar12; uVar12 = uVar12 + 1) {
      *(undefined8 *)(lVar5 + uVar12 * 8) = 0;
    }
    plVar13 = (long *)unaff_x19[2];
    if (plVar13 != (long *)0x0) {
      uVar12 = plVar13[1];
      uVar8 = uVar4 - 1;
      if ((uVar4 & uVar8) == 0) {
        uVar12 = uVar12 & uVar8;
      }
      else if (uVar4 <= uVar12) {
        uVar16 = 0;
        if (uVar4 != 0) {
          uVar16 = uVar12 / uVar4;
        }
        uVar12 = uVar12 - uVar16 * uVar4;
      }
      *(long **)(lVar5 + uVar12 * 8) = unaff_x19 + 2;
      while (plVar15 = plVar13, plVar13 = (long *)*plVar15, plVar13 != (long *)0x0) {
        uVar16 = plVar13[1];
        if ((uVar4 & uVar8) == 0) {
          uVar16 = uVar16 & uVar8;
        }
        else if (uVar4 <= uVar16) {
          uVar10 = 0;
          if (uVar4 != 0) {
            uVar10 = uVar16 / uVar4;
          }
          uVar16 = uVar16 - uVar10 * uVar4;
        }
        if (uVar16 != uVar12) {
          plVar7 = plVar13;
          if (*(long *)(lVar5 + uVar16 * 8) == 0) {
            *(long **)(lVar5 + uVar16 * 8) = plVar15;
            uVar12 = uVar16;
          }
          else {
            do {
              plVar6 = plVar7;
              plVar7 = (long *)0x0;
              if (*plVar6 == 0) break;
              plVar3 = plVar13 + 2;
              func_0x000107c28078(plVar3,*plVar6 + 0x10);
              plVar7 = (long *)*plVar6;
            } while (((ulong)plVar3 & 1) != 0);
            *plVar15 = (long)plVar7;
            lVar5 = *unaff_x19;
            *plVar6 = **(long **)(lVar5 + uVar16 * 8);
            **(undefined8 **)(lVar5 + uVar16 * 8) = plVar13;
            plVar13 = plVar15;
          }
        }
      }
    }
  }
  else if (uVar4 < uVar12) {
    uVar8 = (ulong)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
    if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (uVar4 < uVar12) {
      if (uVar4 != 0) goto LAB_10875805c;
      FUN_1087310f0();
      unaff_x19[1] = 0;
    }
  }
  uVar12 = *puVar11;
LAB_1087581dc:
  uVar4 = uVar12 - 1;
  if ((uVar12 & uVar4) == 0) {
    uVar8 = (int)uVar12 - 1 & uVar9;
  }
  else {
    uVar8 = uVar9;
    if (uVar12 <= uVar9) {
      uVar8 = 0;
      if (uVar12 != 0) {
        uVar8 = uVar9 / uVar12;
      }
      uVar8 = uVar9 - uVar8 * uVar12;
    }
  }
  plVar13 = *(long **)(*unaff_x19 + uVar8 * 8);
  if (plVar13 != (long *)0x0) {
    uVar14 = 0;
    bVar17 = 0;
    for (; lVar5 = *plVar13, lVar5 != 0; plVar13 = (long *)*plVar13) {
      uVar16 = *(ulong *)(lVar5 + 8);
      if ((uVar12 & uVar4) == 0) {
        uVar10 = uVar16 & uVar4;
      }
      else {
        uVar10 = uVar16;
        if (uVar12 <= uVar16) {
          uVar10 = 0;
          if (uVar12 != 0) {
            uVar10 = uVar16 / uVar12;
          }
          uVar10 = uVar16 - uVar10 * uVar12;
        }
      }
      if (uVar10 != uVar8) break;
      if (uVar16 == uVar9) {
        lVar5 = lVar5 + 0x10;
        func_0x000107c28078(lVar5,unaff_x20 + 2);
        uVar2 = (uint)lVar5;
      }
      else {
        uVar2 = 0;
      }
      bVar1 = uVar2 != uVar14;
      if ((bool)(bVar17 & bVar1)) break;
      uVar14 = uVar14 | bVar1;
      bVar17 = bVar17 | bVar1;
    }
    uVar12 = *puVar11;
  }
  bVar17 = POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)) + POPCOUNT((char)(uVar12 >> 0x10))
           + POPCOUNT((char)(uVar12 >> 0x18)) + POPCOUNT((char)(uVar12 >> 0x20)) +
           POPCOUNT((char)(uVar12 >> 0x28)) + POPCOUNT((char)(uVar12 >> 0x30)) +
           POPCOUNT((char)(uVar12 >> 0x38));
  uVar9 = unaff_x20[1];
  if (bVar17 < 2) {
    uVar9 = uVar12 - 1 & uVar9;
  }
  else if (uVar12 <= uVar9) {
    uVar4 = 0;
    if (uVar12 != 0) {
      uVar4 = uVar9 / uVar12;
    }
    uVar9 = uVar9 - uVar4 * uVar12;
  }
  if (plVar13 == (long *)0x0) {
    plVar13 = unaff_x19 + 2;
    *unaff_x20 = *plVar13;
    *plVar13 = (long)unaff_x20;
    lVar5 = *unaff_x19;
    *(long **)(lVar5 + uVar9 * 8) = plVar13;
    if (*unaff_x20 != 0) {
      uVar9 = *(ulong *)(*unaff_x20 + 8);
      if (bVar17 < 2) {
        uVar9 = uVar9 & uVar12 - 1;
      }
      else if (uVar12 <= uVar9) {
        uVar4 = 0;
        if (uVar12 != 0) {
          uVar4 = uVar9 / uVar12;
        }
        uVar9 = uVar9 - uVar4 * uVar12;
      }
      *(long **)(lVar5 + uVar9 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *plVar13;
    *plVar13 = (long)unaff_x20;
    if (*unaff_x20 != 0) {
      uVar4 = *(ulong *)(*unaff_x20 + 8);
      if (bVar17 < 2) {
        uVar4 = uVar4 & uVar12 - 1;
      }
      else if (uVar12 <= uVar4) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar4 / uVar12;
        }
        uVar4 = uVar4 - uVar8 * uVar12;
      }
      if (uVar4 != uVar9) {
        *(long **)(*unaff_x19 + uVar4 * 8) = unaff_x20;
      }
    }
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 108758394; end: 1087585cf;  */

void FUN_108758394(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar8 = auStack_120;
  if (*(int *)(param_2[1] + 0xe4) == 3) {
    func_0x00010875aa58(auStack_68);
    func_0x000107c278b8(auStack_80,"");
    puVar7 = auStack_68;
    puVar8 = auStack_80;
    puVar5 = auStack_68;
  }
  else {
    plVar9 = (long *)*param_2;
    uVar11 = plVar9[1];
    if ((uVar11 != 0) && (plVar9[3] != 0)) {
      uVar3 = param_3;
      FUN_108848654();
      uVar12 = uVar11 - 1;
      if ((uVar11 & uVar12) == 0) {
        uVar13 = uVar3 & uVar12;
      }
      else {
        uVar13 = uVar3;
        if (uVar11 <= uVar3) {
          uVar1 = 0;
          uVar10 = (uint)uVar11;
          if (uVar10 != 0) {
            uVar1 = (uint)uVar3 / uVar10;
          }
          uVar13 = (ulong)((uint)uVar3 - uVar1 * uVar10);
        }
      }
      plVar9 = *(long **)(*plVar9 + uVar13 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_10875849c;
            uVar6 = plVar9[1];
            if (uVar6 != uVar3) break;
            lVar4 = (long)(plVar9 + 2);
            func_0x000107c28078(lVar4,param_3);
            if ((int)lVar4 != 0) {
              func_0x00010875aa58(auStack_98);
              func_0x00010727fab0(auStack_b0,plVar9 + 0xb,plVar9 + 8);
              if (*(char *)(plVar9 + 0x1f) == '\x01') {
                func_0x000107c279a0(auStack_d0,plVar9 + 0xf);
                if (*(char *)(plVar9 + 0x1f) != '\x01') goto LAB_10875854c;
                func_0x000107c279a0(auStack_f0,plVar9 + 0x13);
              }
              else {
                auStack_d0[0] = 0;
                uStack_b8 = 0;
LAB_10875854c:
                auStack_f0[0] = 0;
                uStack_d8 = 0;
              }
              puVar7 = auStack_98;
              puVar8 = auStack_b0;
              FUN_10863e408(param_1,auStack_98,auStack_b0,auStack_d0,auStack_f0);
              func_0x000107c279a4(auStack_f0);
              func_0x000107c279a4(auStack_d0);
              goto LAB_1087584cc;
            }
          }
          if ((uVar11 & uVar12) == 0) {
            uVar6 = uVar6 & uVar12;
          }
          else if (uVar11 <= uVar6) {
            uVar2 = 0;
            if (uVar11 != 0) {
              uVar2 = uVar6 / uVar11;
            }
            uVar6 = uVar6 - uVar2 * uVar11;
          }
        } while (uVar6 == uVar13);
      }
    }
LAB_10875849c:
    func_0x00010875aa58(auStack_108);
    func_0x000107c278b8(auStack_120,"");
    puVar7 = auStack_108;
    puVar5 = auStack_108;
  }
  FUN_1087585d0(param_1,puVar5,puVar8);
LAB_1087584cc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8);
  func_0x000107c27914(puVar7);
  return;
}



/* Entry: 1087585d0; end: 1087586a3;  */

undefined8 FUN_1087585d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  auStack_80[0] = 0;
  uStack_68 = 0;
  auStack_a0[0] = 0;
  uStack_88 = 0;
  FUN_10863e408(param_1,&uStack_40,&uStack_60,auStack_80,auStack_a0);
  func_0x000107c279a4(auStack_a0);
  func_0x000107c279a4(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  func_0x000107c27914(&uStack_40);
  return param_1;
}



/* Entry: 1087586a4; end: 108758727;  */

void FUN_1087586a4(undefined1 *param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010875abb4();
  *param_1 = 0;
  param_1[0x70] = 0;
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_108758728();
  }
  *(undefined1 *)(unaff_x19 + 0x78) = 0;
  *(undefined1 *)(unaff_x19 + 200) = 0;
  if (*(char *)(unaff_x20 + 200) == '\x01') {
    FUN_1087587b8((undefined1 *)(unaff_x19 + 0x78),unaff_x20 + 0x78);
  }
  return;
}



/* Entry: 108758728; end: 108758743;  */

void FUN_108758728(long param_1)

{
  FUN_108758744();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 108758744; end: 1087587b7;  */

void FUN_108758744(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010875abb4();
  func_0x000107c27994();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  func_0x000107c279a0(unaff_x19 + 0x30,unaff_x20 + 0x30);
  func_0x000107c279a0(unaff_x19 + 0x50,unaff_x20 + 0x50);
  return;
}



/* Entry: 1087587b8; end: 108758863;  */

void FUN_1087587b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 *puStack_50;
  undefined1 uStack_48;
  
  func_0x00010875abb4();
  func_0x000107c279a0();
  puVar5 = (undefined8 *)(param_1 + 0x20);
  *puVar5 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  uStack_48 = 0;
  lVar3 = lVar2 - lVar1;
  puStack_50 = puVar5;
  if (lVar3 != 0) {
    FUN_108758864(puVar5,lVar3 / 0x70);
    FUN_1087588b0(puVar5,lVar1,lVar2);
  }
  uStack_48 = 1;
  FUN_10875893c(&puStack_50);
  *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
  *(undefined1 *)(unaff_x19 + 0x50) = 1;
  return;
}



/* Entry: 108758864; end: 1087588af;  */

void FUN_108758864(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_2 < 0x24924924924924a) {
    plVar1 = param_1 + 2;
    func_0x00010862b2f4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0xe);
    return;
  }
  FUN_10862b208();
  lVar2 = param_1[1];
  lStack_70 = lVar2;
  lStack_68 = lVar2;
  func_0x00010875a804();
  uStack_78 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x70) {
    func_0x00010875ab7c();
    FUN_108758744();
    lVar2 = lStack_68 + 0x70;
    lStack_68 = lVar2;
  }
  uStack_78 = 1;
  FUN_10862b4c8(auStack_90);
  param_1[1] = lVar2;
  return;
}



/* Entry: 1087588b0; end: 10875893b;  */

void FUN_1087588b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_50 = lVar1;
  lStack_48 = lVar1;
  func_0x00010875a804();
  uStack_58 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x70) {
    func_0x00010875ab7c();
    FUN_108758744();
    lVar1 = lStack_48 + 0x70;
    lStack_48 = lVar1;
  }
  uStack_58 = 1;
  FUN_10862b4c8(auStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10875893c; end: 108758967;  */

long FUN_10875893c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010862b0c8(param_1);
  }
  return param_1;
}



/* Entry: 108758968; end: 1087589b7;  */

long * FUN_108758968(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xf0f0f0f0f0f0f0 < param_2) {
    func_0x000108757d20();
    *param_1 = (long)&PTR_FUN_110a6ab10;
    func_0x000107c288a4(param_1 + 0x19);
    func_0x000107c29798(param_1 + 0x17);
    func_0x000107c28cc4(param_1 + 0x15);
    func_0x000107c28808(param_1 + 0x13);
    FUN_10865a95c(param_1 + 7);
    func_0x000107c27914(param_1 + 4);
    func_0x000107c27914(param_1 + 1);
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x110;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x78787878787877 < uVar1) {
    plVar2 = (long *)0xf0f0f0f0f0f0f0;
  }
  return plVar2;
}



/* Entry: 1087589b8; end: 108758a1b;  */

undefined8 * FUN_1087589b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ab10;
  func_0x000107c288a4(param_1 + 0x19);
  func_0x000107c29798(param_1 + 0x17);
  func_0x000107c28cc4(param_1 + 0x15);
  func_0x000107c28808(param_1 + 0x13);
  FUN_10865a95c(param_1 + 7);
  func_0x000107c27914(param_1 + 4);
  func_0x000107c27914(param_1 + 1);
  return param_1;
}



/* Entry: 108758a1c; end: 108758ac3;  */

void FUN_108758a1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  *puVar2 = FUN_10875a130;
  puVar2[1] = FUN_10875a268;
  uVar1 = param_1[1];
  puVar2[4] = *param_1;
  puVar2[5] = uVar1;
  param_1[1] = 0;
  FUN_1087598fc(puVar2 + 2);
  func_0x00010875aa7c();
  puVar2[6] = param_2;
  *(undefined1 *)(puVar2 + 8) = 0;
  func_0x00010875ab0c(*(undefined8 *)(*(long *)*param_2 + 0x10));
  return;
}



/* Entry: 108758ac4; end: 108758c1f;  */

void FUN_108758ac4(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  uint uStack_48;
  
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = FUN_10875a078;
  puVar2[1] = FUN_10875a104;
  FUN_1087598fc(puVar2 + 2);
  FUN_1087573d4(param_1,puVar2[2]);
  plVar3 = (long *)*param_2;
  FUN_1087569c4(puVar2 + 5);
  puVar2[4] = puVar2[5];
  do {
    func_0x00010875a72c();
  } while (extraout_w10 != 0);
  func_0x00010875a888(puVar2[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 6) = 0;
    func_0x00010875a6d8();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010875aa4c();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x00010875a75c();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010875a894();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x00010875a7d0();
        if ((bool)in_ZR) {
          func_0x00010875a76c();
          func_0x00010875a6c8();
          func_0x00010875a700();
        }
        func_0x00010875a69c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  puVar2 = puVar2 + 4;
  FUN_108758c20();
  func_0x00010875a844();
  do {
    func_0x00010875a6e8();
    if ((int)puVar2 != 0) {
      func_0x00010875a8a8();
      func_0x00010875aa68();
      func_0x00010875a67c();
      break;
    }
  } while ((uStack_48 >> 1 & 1) == 0);
  func_0x00010875a750();
  func_0x00010875a880();
  func_0x00010875a7f4();
  func_0x00010875a7c8();
  func_0x00010875a7e4();
  return;
}



/* Entry: 108758c20; end: 108758c7f;  */

long FUN_108758c20(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108758c70);
  (*pcVar1)();
}



/* Entry: 108758c80; end: 108758ca3;  */

void FUN_108758c80(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1086380f8();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 108758ca4; end: 108758ce7;  */

void FUN_108758ca4(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  cVar1 = *(char *)(param_2 + 6);
  if (cVar1 != '\x01') {
    *param_1 = *param_2;
  }
  else {
    FUN_108758ce8();
  }
  *(bool *)(param_1 + 6) = cVar1 == '\x01';
  return;
}



/* Entry: 108758ce8; end: 108758d6f;  */

undefined8 * FUN_108758ce8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_38 = 0;
  lVar3 = lVar2 - lVar1;
  puStack_40 = param_1;
  if (lVar3 != 0) {
    FUN_108758d70(param_1,lVar3 / 0x110);
    FUN_108758db4(param_1,lVar1,lVar2);
  }
  uStack_38 = 1;
  FUN_108758e7c(&puStack_40);
  return param_1;
}



/* Entry: 108758d70; end: 108758db3;  */

void FUN_108758d70(ulong *param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 < 0xf0f0f0f0f0f0f1) {
    uVar2 = param_2;
    func_0x000108757e5c();
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + uVar2 * 0x110;
    return;
  }
  func_0x000108757d20();
  uVar2 = param_1[1];
  func_0x00010875a804();
  for (; param_2 != param_3; param_2 = param_2 + 0x110) {
    func_0x00010875ab7c();
    func_0x000107c27994();
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined2 *)(uVar2 + 0x20) = *(undefined2 *)(param_2 + 0x20);
    *(undefined8 *)(uVar2 + 0x18) = uVar1;
    FUN_1087586a4(uVar2 + 0x28,param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x100);
    uVar1 = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(uVar2 + 0x105) = *(undefined8 *)(param_2 + 0x105);
    *(undefined8 *)(uVar2 + 0x100) = uVar3;
    *(undefined8 *)(uVar2 + 0xf8) = uVar1;
    uVar2 = uVar2 + 0x110;
  }
  func_0x00010875ab34();
  param_1[1] = uVar2;
  return;
}



/* Entry: 108758db4; end: 108758e7b;  */

void FUN_108758db4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010875a804();
  for (; param_2 != param_3; param_2 = param_2 + 0x110) {
    func_0x00010875ab7c();
    func_0x000107c27994();
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined2 *)(lVar2 + 0x20) = *(undefined2 *)(param_2 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
    FUN_1087586a4(lVar2 + 0x28,param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x100);
    uVar1 = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(lVar2 + 0x105) = *(undefined8 *)(param_2 + 0x105);
    *(undefined8 *)(lVar2 + 0x100) = uVar3;
    *(undefined8 *)(lVar2 + 0xf8) = uVar1;
    lVar2 = lVar2 + 0x110;
  }
  func_0x00010875ab34();
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 108758e7c; end: 108758ea7;  */

long FUN_108758e7c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000108638144(param_1);
  }
  return param_1;
}



/* Entry: 108758ea8; end: 108758eab;  */

undefined8 * FUN_108758ea8(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a6abc8;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10875901c(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x000108637a10(param_1 + 3);
  func_0x000108637a10(param_1 + 1);
  return param_1;
}



/* Entry: 108758eac; end: 108758ebf;  */

void FUN_108758eac(void)

{
  FUN_108758f74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108758ec0; end: 108758ec3;  */

undefined8 * FUN_108758ec0(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a6abc8;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10875901c(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x000108637a10(param_1 + 3);
  func_0x000108637a10(param_1 + 1);
  return param_1;
}



/* Entry: 108758ec4; end: 108758ed7;  */

void FUN_108758ec4(void)

{
  FUN_108758f74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108758ed8; end: 108758edb;  */

void FUN_108758ed8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6abe8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108758edc; end: 108758eef;  */

void FUN_108758edc(void)

{
  FUN_108758f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108758ef0; end: 108758f3f;  */

void FUN_108758ef0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xb0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1086380f8();
  }
  return;
}



/* Entry: 108758f40; end: 108758f53;  */

void FUN_108758f40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108758f54; end: 108758f73;  */

void FUN_108758f54(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1086380f8();
  }
  return;
}



/* Entry: 108758f74; end: 10875901b;  */

undefined8 * FUN_108758f74(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a6abc8;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10875901c(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x000108637a10(param_1 + 3);
  func_0x000108637a10(param_1 + 1);
  return param_1;
}



/* Entry: 10875901c; end: 1087590fb;  */

void FUN_10875901c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_108637b44(auStack_40,param_1 + 8,&uStack_50);
  FUN_108637ba0(alStack_30,auStack_40);
  func_0x000108637a10(auStack_40);
  func_0x00010875a9e0();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x58);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x98,param_2);
  plVar2 = *(long **)(alStack_30[0] + 0xa0);
  *(undefined8 *)(alStack_30[0] + 0xa0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x58);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x28);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,alStack_30);
    func_0x00010875a978();
  }
  func_0x000108637a10(alStack_30);
  return;
}



/* Entry: 1087590fc; end: 10875919f;  */

void FUN_1087590fc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = FUN_10875a53c;
  puVar1[1] = FUN_10875a644;
  FUN_10875978c(puVar1 + 4,param_1);
  func_0x000107c27f94(puVar1 + 2);
  func_0x00010875ab20();
  puVar1[10] = param_2;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  func_0x00010875ab0c(*(undefined8 *)(*(long *)*param_2 + 0x10));
  return;
}



/* Entry: 1087591a0; end: 10875951f;  */

void FUN_1087591a0(long *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  uint extraout_w8;
  long *plVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  puVar5 = (undefined8 *)0x60;
  __Znwm();
  *puVar5 = FUN_10875a2a4;
  puVar5[1] = FUN_10875a514;
  puVar5[10] = param_1;
  plVar12 = puVar5 + 2;
  func_0x000107c27f94();
  func_0x00010875ab20();
  plVar6 = puVar5 + 8;
  *plVar6 = *param_1;
  do {
    func_0x00010875a72c();
  } while (extraout_w10 != 0);
  func_0x00010875a888(*plVar6);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xb) = 0;
    lVar11 = puVar5[8];
    func_0x00010875a6d8();
    lVar13 = *plVar12;
    if (lVar13 == 0) {
      func_0x000107c3a5c0();
      lVar13 = *plVar12;
    }
    plVar8 = (long *)(lVar11 + 0x10);
    do {
      if (*plVar8 == 0) {
        func_0x00010875a75c();
        plVar8 = extraout_x8_00;
        uVar2 = extraout_w10_01;
        uVar9 = extraout_w11_00;
      }
      else {
        func_0x00010875a894();
        plVar8 = extraout_x8;
        uVar2 = extraout_w10_00;
        uVar9 = extraout_w11;
      }
      if ((uVar9 & 1) != 0) {
        lVar10 = *(long *)(lVar11 + 0x90);
        func_0x00010875aa10();
        if ((bool)in_ZR) {
          func_0x00010875a76c();
          func_0x00010875a6c8();
          func_0x00010875a73c();
          *(long **)(lVar10 + 8) = plVar12;
          *(long **)(lVar11 + 0x90) = plVar12;
        }
        func_0x00010875aa20();
        *(long *)(extraout_x8_01 + 0x20) = lVar13;
        func_0x00010875a77c(*(undefined8 *)(lVar11 + 0x90));
        *(undefined8 *)(lVar11 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_108758c20();
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  func_0x00010875a9e8();
  func_0x00010875ab44();
  func_0x00010875a9e0();
  func_0x00010875a988();
  lVar11 = puVar5[4];
  __ZNSt3__15mutex4lockEv(lVar11 + 0x58);
  plVar12 = (long *)puVar5[4];
  if ((char)plVar12[4] == '\x01') {
    bVar1 = *(byte *)(plVar6 + 3);
    if (((*(byte *)(plVar12 + 3) & 1) == 0) && (bVar1 != 0)) {
      FUN_108758ce8(&lStack_70,plVar6);
      plVar12[1] = lStack_68;
      *plVar12 = lStack_70;
      plVar12[2] = lStack_60;
      lStack_70 = 0;
      lStack_68 = 0;
      lStack_60 = 0;
      *(undefined1 *)(plVar12 + 3) = 1;
      FUN_108638118(&lStack_70);
    }
    else if (*(byte *)(plVar12 + 3) == 0) {
      if ((bVar1 & 1) == 0) {
        *(int *)plVar12 = (int)*plVar6;
      }
    }
    else if (bVar1 == 0) {
      FUN_108638118(plVar12);
      *(int *)plVar12 = (int)*plVar6;
      *(undefined1 *)(plVar12 + 3) = 0;
    }
    else {
      bVar3 = plVar6 <= plVar12;
      bVar4 = plVar12 == plVar6;
      if (!bVar4) {
        lVar13 = *plVar6;
        lVar10 = plVar6[1];
        lVar7 = *plVar12;
        func_0x00010875aa40(lVar10 - lVar13);
        if (!bVar3 || bVar4) {
          func_0x00010875aa40();
          if (!bVar3 || bVar4) {
            FUN_108759520(lVar13,lVar10);
            FUN_10863818c(plVar12,lVar13);
            goto LAB_1087592fc;
          }
          lVar7 = lVar13 + extraout_x9;
          FUN_108759520(lVar13,lVar7);
        }
        else {
          if (lVar7 != 0) {
            FUN_108638184(plVar12);
            __ZdlPv(*plVar12);
            *plVar12 = 0;
            plVar12[1] = 0;
            plVar12[2] = 0;
          }
          plVar6 = plVar12;
          FUN_108758968(plVar12,extraout_x8_02 / 0x110);
          FUN_108758d70(plVar12,plVar6);
          lVar7 = lVar13;
        }
        FUN_108758db4(plVar12,lVar7,lVar10);
      }
    }
  }
  else {
    FUN_108758ca4(plVar12,plVar6);
    *(undefined1 *)(plVar12 + 4) = 1;
  }
LAB_1087592fc:
  plVar12 = *(long **)(puVar5[4] + 0xa0);
  *(undefined8 *)(puVar5[4] + 0xa0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar11 + 0x58);
  if (plVar12 == (long *)0x0) {
    func_0x00010875aad0();
  }
  else {
    (**(code **)(*plVar12 + 0x10))(plVar12,puVar5 + 4);
    func_0x00010875a95c();
  }
  func_0x00010875a9f8();
  func_0x00010875a954();
  func_0x00010875ab2c();
  func_0x00010875a7c8();
  func_0x00010875a7e4();
  return;
}



/* Entry: 108759520; end: 1087596f7;  */

ulong FUN_108759520(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong extraout_x8;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = 0;
  do {
    uVar10 = param_1 + lVar11;
    uVar1 = param_3 + lVar11;
    if (uVar10 == param_2) {
      return uVar1;
    }
    func_0x00010875ab70();
    func_0x000107c27cfc();
    uVar9 = *(undefined8 *)(uVar10 + 0x18);
    *(undefined2 *)(uVar1 + 0x20) = *(undefined2 *)(uVar10 + 0x20);
    *(undefined8 *)(uVar1 + 0x18) = uVar9;
    cVar4 = *(char *)(uVar1 + 0x98);
    if (cVar4 == *(char *)(uVar10 + 0x98)) {
      if (cVar4 != '\0') {
        FUN_1087596f8(uVar1 + 0x28,uVar10 + 0x28);
      }
    }
    else if (cVar4 == '\0') {
      FUN_108758728(uVar1 + 0x28,uVar10 + 0x28);
    }
    else {
      func_0x00010862b144();
      *(undefined1 *)(uVar1 + 0x98) = 0;
    }
    lVar2 = param_3 + lVar11;
    lVar7 = param_1 + lVar11;
    cVar4 = *(char *)(lVar2 + 0xf0);
    if (cVar4 == *(char *)(lVar7 + 0xf0)) {
      if (cVar4 != '\0') {
        func_0x000107c27c5c(lVar2 + 0xa0,lVar7 + 0xa0);
        lVar2 = param_3 + lVar11;
        bVar5 = uVar10 <= uVar1;
        bVar6 = uVar1 == uVar10;
        if (!bVar6) {
          lVar7 = *(long *)(param_1 + lVar11 + 0xc0);
          lVar3 = *(long *)(param_1 + lVar11 + 200);
          lVar8 = *(long *)(lVar2 + 0xc0);
          func_0x00010875aa40(lVar3 - lVar7);
          if (!bVar5 || bVar6) {
            uVar10 = *(long *)(param_3 + lVar11 + 200) - lVar8;
            if (extraout_x8 <= uVar10) {
              FUN_108759740(lVar7,lVar3);
              FUN_10862b10c(lVar2 + 0xc0,lVar7);
              goto LAB_1087596a8;
            }
            FUN_108759740(lVar7,lVar7 + uVar10);
            lVar7 = lVar7 + uVar10;
          }
          else {
            func_0x00010875866c(lVar2 + 0xc0);
            lVar8 = lVar2 + 0xc0;
            FUN_10862b6b0(lVar8,(long)extraout_x8 / 0x70);
            FUN_108758864(lVar2 + 0xc0,lVar8);
          }
          FUN_1087588b0(lVar2 + 0xc0,lVar7,lVar3);
        }
LAB_1087596a8:
        lVar7 = param_1 + lVar11;
        *(undefined4 *)(lVar2 + 0xd8) = *(undefined4 *)(lVar7 + 0xd8);
        uVar9 = *(undefined8 *)(lVar7 + 0xe0);
        *(undefined4 *)(lVar2 + 0xe8) = *(undefined4 *)(lVar7 + 0xe8);
        *(undefined8 *)(lVar2 + 0xe0) = uVar9;
      }
    }
    else if (cVar4 == '\0') {
      FUN_1087587b8(lVar2 + 0xa0,lVar7 + 0xa0);
    }
    else {
      FUN_1086373b4(lVar2 + 0xa0);
      *(undefined1 *)(lVar2 + 0xf0) = 0;
    }
    lVar2 = param_3 + lVar11;
    lVar7 = param_1 + lVar11;
    uVar12 = *(undefined8 *)(lVar7 + 0x100);
    uVar9 = *(undefined8 *)(lVar7 + 0xf8);
    *(undefined8 *)(lVar2 + 0x105) = *(undefined8 *)(lVar7 + 0x105);
    *(undefined8 *)(lVar2 + 0x100) = uVar12;
    *(undefined8 *)(lVar2 + 0xf8) = uVar9;
    lVar11 = lVar11 + 0x110;
  } while( true );
}



/* Entry: 1087596f8; end: 10875973f;  */

long FUN_1087596f8(long param_1,long param_2)

{
  func_0x000107c27cfc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x18,param_2 + 0x18);
  func_0x000107c27c5c(param_1 + 0x30,param_2 + 0x30);
  func_0x000107c27c5c(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



/* Entry: 108759740; end: 10875978b;  */

long FUN_108759740(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x70) {
    FUN_1087596f8(param_3,param_1);
    param_3 = param_3 + 0x70;
    lVar1 = lVar1 + 0x70;
  }
  return lVar1;
}



/* Entry: 10875978c; end: 1087597b7;  */

undefined8 * FUN_10875978c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  FUN_1087597b8(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1087597b8; end: 1087597df;  */

void FUN_1087597b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *param_1 = &PTR_FUN_110a6ab80;
  return;
}



/* Entry: 1087597e0; end: 108759807;  */

undefined8 * FUN_1087597e0(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  FUN_108758f74(param_1 + 1);
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 108759808; end: 10875980f;  */

void FUN_108759808(void)

{
  return;
}



/* Entry: 108759810; end: 10875983f;  */

void FUN_108759810(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6ac38;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 108759840; end: 10875986b;  */

void FUN_108759840(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6ac38;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10875986c; end: 1087598b7;  */

void FUN_10875986c(long param_1)

{
  undefined1 auStack_3f0 [976];
  
  func_0x000107c28918(auStack_3f0);
  FUN_1086d6ea8(*(undefined8 *)(param_1 + 8),auStack_3f0);
  func_0x000107c288d0(auStack_3f0);
  return;
}


