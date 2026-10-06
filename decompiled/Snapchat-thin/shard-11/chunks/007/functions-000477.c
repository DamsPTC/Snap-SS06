/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108878a60; end: 108878a7f;  */

void FUN_108878a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x000107c34200();
  FUN_108873b10();
  func_0x000107c342bc();
  func_0x0001005ed240(&ppuStack_48,param_3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  func_0x0001005ecd60(param_1,param_2,ppuStack_48,uStack_40);
  func_0x00010061fa30();
  return;
}



/* Entry: 108878a80; end: 108878b27;  */

long FUN_108878a80(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108878af4;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108878af4:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c342d8();
  func_0x000108878ba8();
  return param_1;
}



/* Entry: 108878b28; end: 108878b73;  */

void FUN_108878b28(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x000107c342d8();
  func_0x000108878ba8(param_1,auStack_28);
  return;
}



/* Entry: 108878b74; end: 108878b77;  */

undefined8 * FUN_108878b74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108878b78; end: 108878b8b;  */

void FUN_108878b78(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108878b8c; end: 108878bcb;  */

void FUN_108878b8c(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108878bcc; end: 108878bfb;  */

void FUN_108878bcc(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1086d5350();
  return;
}



/* Entry: 108878bfc; end: 108878bff;  */

undefined8 * FUN_108878bfc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108878c00; end: 108878c13;  */

void FUN_108878c00(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108878c14; end: 108878c2f;  */

void FUN_108878c14(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108878c30; end: 108878c67;  */

long FUN_108878c30(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  func_0x000107c34534();
  func_0x000107c31408();
  return param_1;
}



/* Entry: 108878c68; end: 108878d0f;  */

long FUN_108878c68(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108878cdc;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108878cdc:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x000108878d9c();
  return param_1;
}



/* Entry: 108878d10; end: 108878d67;  */

void FUN_108878d10(void)

{
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x000108878d9c();
  return;
}



/* Entry: 108878d68; end: 108878d6b;  */

undefined8 * FUN_108878d68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108878d6c; end: 108878d7f;  */

void FUN_108878d6c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108878d80; end: 108878dbf;  */

void FUN_108878d80(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108878dc0; end: 108878def;  */

void FUN_108878dc0(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0xa0) = 0;
  FUN_108878df0();
  return;
}



/* Entry: 108878df0; end: 108878fa7;  */

void FUN_108878df0(long param_1,undefined1 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined1 auStack_110 [32];
  long lStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined1 auStack_d0 [48];
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  undefined1 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_e8 = param_2;
  func_0x000107c3447c();
  if ((param_1 == 0) || (func_0x000107c3141c(), (int)param_1 == 0)) {
    lVar2 = unaff_x19 + 8;
    if (*(char *)(unaff_x19 + 0xa0) == '\x01') {
      FUN_1086ccb14();
      *(undefined1 *)(lVar2 + 0x98) = 0;
    }
    return;
  }
  func_0x000107c3445c();
  func_0x00010887bd1c();
  func_0x000107c344b8();
  func_0x000107c287bc();
  func_0x000107c34464(auStack_110);
  func_0x0001073a755c();
  func_0x00010887c434();
  func_0x000107c28930();
  lStack_f0 = param_1;
  uStack_d8 = uStack_e8;
  func_0x000107c345c4();
  func_0x000107c28228();
  lStack_e0 = param_1;
  func_0x000107c345c0();
  iVar1 = (int)param_1;
  _sqlite3_column_type();
  if (iVar1 == 5) {
    auStack_d0[0] = 0;
    uStack_a0 = 0;
    goto code_r0x00010061fd54;
  }
  func_0x000107c345c0(&puStack_68);
  func_0x000107c313e0();
  auStack_90[0] = 0;
  uStack_70 = 0;
  uVar3 = lStack_60 - (long)puStack_68;
  if (uVar3 < 8) {
    uStack_98 = 0;
LAB_108878ed0:
    FUN_1086cc98c(auStack_90);
  }
  else {
    uStack_98 = *puStack_68;
    if (uVar3 == 8) goto LAB_108878ed0;
    ppuStack_50 = &PTR_FUN_110a98638;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c3034c(&ppuStack_50,puStack_68 + 1,(int)uVar3 + -8);
    FUN_1086dc478(auStack_90,&ppuStack_50);
    uStack_70 = 1;
    FUN_108927a50(&ppuStack_50);
  }
  func_0x000107c27914(&puStack_68);
  FUN_1086cca2c(auStack_d0,&uStack_98);
  uStack_a0 = 1;
  FUN_1086cca0c(auStack_90);
code_r0x00010061fd54:
  func_0x00010887c3e4();
  FUN_1086b8b48();
  func_0x00010887c5c0();
  return;
}



/* Entry: 108878fa8; end: 108878fcb;  */

void FUN_108878fa8(long param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    FUN_1086ccb14();
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



/* Entry: 108878fcc; end: 108879017;  */

long FUN_108878fcc(long param_1)

{
  func_0x000107c3463c();
  _bzero();
  func_0x000107c34588();
  FUN_108879018();
  func_0x00010887cb70();
  func_0x000107c34534();
  func_0x000107c31408();
  FUN_1086ccb70(param_1 + 0x10);
  return param_1;
}



/* Entry: 108879018; end: 108879037;  */

void FUN_108879018(void)

{
  func_0x000107c34494();
  FUN_108879038();
  return;
}



/* Entry: 108879038; end: 10887905b;  */

undefined8 FUN_108879038(undefined8 param_1)

{
  FUN_10887905c();
  return param_1;
}



/* Entry: 10887905c; end: 10887909b;  */

void FUN_10887905c(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x98);
  if (cVar1 != *(char *)(param_2 + 0x98)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x98) == '\x01') {
        FUN_1086ccb14();
        *(undefined1 *)(param_1 + 0x98) = 0;
      }
      return;
    }
    FUN_1086cca88();
    *(undefined1 *)(param_1 + 0x98) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32670();
    func_0x000107c3194c();
    *(undefined1 *)(unaff_x20 + 0x18) = *(undefined1 *)(unaff_x19 + 0x18);
    func_0x0001052b2b60(unaff_x20 + 0x20,unaff_x19 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x51);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x49);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x51) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x49) = uVar2;
    FUN_1086cc820(unaff_x20 + 0x60,unaff_x19 + 0x60);
    return;
  }
  return;
}



/* Entry: 10887909c; end: 1088790eb;  */

long FUN_10887909c(long param_1)

{
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    func_0x00010887b6dc();
    func_0x00010887b6c8();
    func_0x00010887b778();
    func_0x000107c34364();
    func_0x000107c34368();
  }
  return param_1 + 8;
}



/* Entry: 1088790ec; end: 10887910b;  */

void FUN_1088790ec(void)

{
  func_0x000107c34260();
  FUN_10887910c();
  func_0x000107c3425c();
  return;
}



/* Entry: 10887910c; end: 108879177;  */

void FUN_10887910c(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_b8 [152];
  
  func_0x000107c343b8();
  cVar1 = *(char *)(param_1 + 0x98);
  if (cVar1 != *(char *)(param_2 + 0x98)) {
    if (cVar1 == '\0') {
      func_0x00010887c048();
      FUN_1086cc804();
    }
    else {
      func_0x000107c344c8();
      FUN_1086cc804();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x98) == '\x01') {
      FUN_1086ccb14();
      *(undefined1 *)(unaff_x19 + 0x98) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010887c048();
    func_0x000107c343b8();
    func_0x00010887cb4c();
    FUN_1086cca88();
    func_0x00010887c048();
    func_0x0001086cc7b4();
    func_0x000107c344fc();
    func_0x0001086cc7b4();
    FUN_1086ccb14(auStack_b8);
    return;
  }
  return;
}



/* Entry: 108879178; end: 1088791b3;  */

void FUN_108879178(void)

{
  undefined1 auStack_b8 [152];
  
  func_0x000107c343b8();
  func_0x00010887cb4c();
  FUN_1086cca88();
  func_0x00010887c048();
  func_0x0001086cc7b4();
  func_0x000107c344fc();
  func_0x0001086cc7b4();
  FUN_1086ccb14(auStack_b8);
  return;
}



/* Entry: 1088791b4; end: 1088791cf;  */

void FUN_1088791b4(long param_1)

{
  FUN_1086cca88();
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}



/* Entry: 1088791d0; end: 1088791eb;  */

void FUN_1088791d0(undefined8 *param_1,undefined8 *param_2)

{
  func_0x00010887d180(*param_1,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5]);
  func_0x00010887bc0c();
  func_0x000107c3446c();
  func_0x000107c343fc();
  FUN_10887925c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 1088791ec; end: 10887925b;  */

void FUN_1088791ec(void)

{
  func_0x00010887d180();
  func_0x00010887bc0c();
  func_0x000107c3446c();
  func_0x000107c343fc();
  FUN_10887925c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 10887925c; end: 1088792c3;  */

void FUN_10887925c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  func_0x000107c3426c();
  func_0x00010887bfb4();
  func_0x00010887c824();
  func_0x0001056453e4();
  func_0x00010887c834();
  func_0x0001073a80e0();
  func_0x00010887c814();
  func_0x000108875a44();
  func_0x000107c28230(param_1,5);
  func_0x00010887c804();
  func_0x000107c34530();
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    if (*(char *)(unaff_x20 + 0x28) == '\x01') {
      lVar1 = unaff_x20 + 8;
      FUN_108927b88(lVar1);
    }
    else {
      lVar1 = 0;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010089a97c(&uStack_70,lVar1 + 8);
    func_0x000104bd9994(&uStack_70,uStack_68,unaff_x20,unaff_x20 + 8);
    if (*(char *)(unaff_x20 + 0x28) == '\x01') {
      func_0x00010b4d1804(appuStack_58,unaff_x20 + 8);
      if (-1 < cStack_41) {
        appuStack_58[0] = appuStack_58;
      }
      FUN_1088793cc(&uStack_70,uStack_68,appuStack_58[0],(long)appuStack_58[0] + lVar1);
      func_0x000107c34364();
    }
    func_0x000107c34528();
    func_0x000107c31410();
    func_0x00010887c094();
  }
  else {
    func_0x000107c34528();
    func_0x00010bccb8cc();
  }
  return;
}



/* Entry: 1088792c4; end: 1088793cb;  */

void FUN_1088792c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  func_0x000107c34530();
  if (*(char *)(param_3 + 0x30) == '\x01') {
    if (*(char *)(param_3 + 0x28) == '\x01') {
      lVar1 = param_3 + 8;
      FUN_108927b88(lVar1);
    }
    else {
      lVar1 = 0;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010089a97c(&uStack_70,lVar1 + 8);
    func_0x000104bd9994(&uStack_70,uStack_68,param_3,param_3 + 8);
    if (*(char *)(param_3 + 0x28) == '\x01') {
      func_0x00010b4d1804(appuStack_58,param_3 + 8);
      if (-1 < cStack_41) {
        appuStack_58[0] = appuStack_58;
      }
      FUN_1088793cc(&uStack_70,uStack_68,appuStack_58[0],(long)appuStack_58[0] + lVar1);
      func_0x000107c34364();
    }
    func_0x000107c34528();
    func_0x000107c31410();
    func_0x00010887c094();
  }
  else {
    func_0x000107c34528();
    func_0x00010bccb8cc();
  }
  return;
}



/* Entry: 1088793cc; end: 1088793d3;  */

undefined1 * FUN_1088793cc(long *param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar4 = param_4 - (long)param_3;
  if (0 < lVar4) {
    plVar3 = param_1 + 2;
    lVar5 = param_1[1];
    if (*plVar3 - lVar5 < lVar4) {
      plVar2 = param_1;
      func_0x000107c27908(param_1,(lVar4 - *param_1) + lVar5);
      lVar5 = *param_1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x000107c2790c();
        plStack_68 = plVar3;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + ((long)param_2 - lVar5));
      lStack_50 = (long)plStack_68 + (long)plVar2;
      puStack_58 = puStack_60 + lVar4;
      puVar1 = puStack_60;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      func_0x000104bd9b18(param_1,&plStack_68,param_2);
      func_0x00010887bf34();
      func_0x000107c27910();
    }
    else {
      lVar5 = lVar5 - (long)param_2;
      if (lVar4 - lVar5 == 0 || lVar4 < lVar5) {
        func_0x00010887c924();
        puVar1 = param_2;
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar1 = *param_3;
          param_3 = param_3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
      else {
        func_0x000100a71e9c(param_1,param_3 + lVar5,param_4,lVar4 - lVar5);
        if (0 < lVar5) {
          func_0x00010887c924();
          puVar1 = param_2;
          for (; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar1 = *param_3;
            param_3 = param_3 + 1;
            puVar1 = puVar1 + 1;
          }
        }
      }
    }
  }
  return param_2;
}



/* Entry: 1088793d4; end: 108879513;  */

undefined1 *
FUN_1088793d4(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,long param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (0 < param_5) {
    plVar3 = param_1 + 2;
    lVar4 = param_1[1];
    if (*plVar3 - lVar4 < param_5) {
      plVar2 = param_1;
      func_0x000107c27908(param_1,(param_5 - *param_1) + lVar4);
      lVar4 = *param_1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x000107c2790c();
        plStack_68 = plVar3;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + ((long)param_2 - lVar4));
      lStack_50 = (long)plStack_68 + (long)plVar2;
      puStack_58 = puStack_60 + param_5;
      puVar1 = puStack_60;
      for (; param_5 != 0; param_5 = param_5 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      func_0x000104bd9b18(param_1,&plStack_68,param_2);
      func_0x00010887bf34();
      func_0x000107c27910();
    }
    else {
      lVar4 = lVar4 - (long)param_2;
      if (param_5 - lVar4 == 0 || param_5 < lVar4) {
        func_0x00010887c924();
        puVar1 = param_2;
        for (; param_5 != 0; param_5 = param_5 + -1) {
          *puVar1 = *param_3;
          puVar1 = puVar1 + 1;
          param_3 = param_3 + 1;
        }
      }
      else {
        func_0x000100a71e9c(param_1,param_3 + lVar4,param_4,param_5 - lVar4);
        if (0 < lVar4) {
          func_0x00010887c924();
          puVar1 = param_2;
          for (; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar1 = *param_3;
            puVar1 = puVar1 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
    }
  }
  return param_2;
}



/* Entry: 108879514; end: 1088795bb;  */

long FUN_108879514(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108879588;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108879588:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x000108879648();
  return param_1;
}



/* Entry: 1088795bc; end: 108879613;  */

void FUN_1088795bc(void)

{
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x000108879648();
  return;
}



/* Entry: 108879614; end: 108879617;  */

undefined8 * FUN_108879614(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108879618; end: 10887962b;  */

void FUN_108879618(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887962c; end: 10887966b;  */

void FUN_10887962c(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10887966c; end: 10887969b;  */

void FUN_10887966c(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_10887969c();
  return;
}



/* Entry: 10887969c; end: 1088796ff;  */

void FUN_10887969c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x000107c3447c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x000107c313f8(*unaff_x19);
    func_0x000107c313e0(auStack_38);
    func_0x000107c344fc();
    FUN_1086554b0();
    func_0x00010887bfc4();
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 4) == '\x01') {
    func_0x000100100fec();
    *(undefined1 *)(puVar1 + 3) = 0;
  }
  return;
}



/* Entry: 108879700; end: 108879747;  */

void FUN_108879700(void)

{
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x000107c34660();
  func_0x00010887c5a0();
  func_0x000107c34750();
  FUN_108879748();
  func_0x000107c279c4(unaff_x20 | 8);
  func_0x000107c34534();
  func_0x000107c31408();
  func_0x000107c279c4(unaff_x19 + 0x10);
  return;
}



/* Entry: 108879748; end: 108879767;  */

void FUN_108879748(void)

{
  func_0x000107c34494();
  func_0x0001052b2b60();
  return;
}



/* Entry: 108879768; end: 10887977f;  */

void FUN_108879768(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  func_0x000107c34260(param_1,param_2 + 8);
  FUN_1088797f0();
  func_0x000107c3425c();
  return;
}



/* Entry: 108879780; end: 1088797cf;  */

long FUN_108879780(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    func_0x00010887b6dc();
    func_0x00010887b6c8();
    func_0x00010887b778();
    func_0x000107c34364();
    func_0x000107c34368();
  }
  return param_1 + 8;
}



/* Entry: 1088797d0; end: 1088797ef;  */

void FUN_1088797d0(void)

{
  func_0x000107c34260();
  FUN_1088797f0();
  func_0x000107c3425c();
  return;
}



/* Entry: 1088797f0; end: 10887985b;  */

void FUN_1088797f0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c343b8();
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 == '\0') {
      func_0x00010887c048();
      func_0x000107c27b80();
    }
    else {
      func_0x000107c344c8();
      func_0x000107c27b80();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x18) == '\x01') {
      func_0x000100100fec();
      *(undefined1 *)(unaff_x19 + 0x18) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010887c048();
    uVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar2;
    uVar2 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = uVar2;
    uVar2 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = uVar2;
    return;
  }
  return;
}



/* Entry: 10887985c; end: 10887988f;  */

void FUN_10887985c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}



/* Entry: 108879890; end: 108879937;  */

long FUN_108879890(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108879904;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108879904:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x0001088799c4();
  return param_1;
}



/* Entry: 108879938; end: 10887998f;  */

void FUN_108879938(void)

{
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x0001088799c4();
  return;
}



/* Entry: 108879990; end: 108879993;  */

undefined8 * FUN_108879990(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108879994; end: 1088799a7;  */

void FUN_108879994(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088799a8; end: 108879a5b;  */

void FUN_1088799a8(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108879a5c; end: 108879a8f;  */

undefined8 * FUN_108879a5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c31408(uVar1);
  return param_1;
}



/* Entry: 108879a90; end: 108879aa7;  */

void FUN_108879a90(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x000107c34260(param_1,param_2 + 8);
  FUN_10871ded4();
  func_0x000107c3425c();
  return;
}



/* Entry: 108879aa8; end: 108879af7;  */

long FUN_108879aa8(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x00010887b6dc();
    func_0x00010887b6c8();
    func_0x00010887b778();
    func_0x000107c34364();
    func_0x000107c34368();
  }
  return param_1 + 8;
}



/* Entry: 108879af8; end: 108879b17;  */

void FUN_108879af8(void)

{
  func_0x000107c34260();
  FUN_10871ded4();
  func_0x000107c3425c();
  return;
}



/* Entry: 108879b18; end: 108879b6b;  */

void FUN_108879b18(void)

{
  func_0x000107c343c4();
  FUN_108879b6c();
  func_0x00010887bb54();
  return;
}



/* Entry: 108879b6c; end: 108879b97;  */

/* WARNING: Possible PIC construction at 0x000108879b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108879b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108879b84) */
/* WARNING: Removing unreachable block (ram,0x000108879b8c) */
/* WARNING: Removing unreachable block (ram,0x00010887cd48) */

void FUN_108879b6c(int param_1)

{
  func_0x00010887b678();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108879b98; end: 108879beb;  */

void FUN_108879b98(void)

{
  func_0x000107c343c4();
  FUN_108879b6c();
  func_0x000107c34320();
  return;
}



/* Entry: 108879bec; end: 108879c93;  */

long FUN_108879bec(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108879c60;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108879c60:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c287b0();
  func_0x000107c343c0();
  func_0x000108879d20();
  return param_1;
}



/* Entry: 108879c94; end: 108879ceb;  */

void FUN_108879c94(void)

{
  func_0x000107c343c4();
  func_0x000107c287b0();
  func_0x000107c343c0();
  func_0x000108879d20();
  return;
}



/* Entry: 108879cec; end: 108879cef;  */

undefined8 * FUN_108879cec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108879cf0; end: 108879d03;  */

void FUN_108879cf0(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108879d04; end: 108879d43;  */

void FUN_108879d04(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108879d44; end: 108879d73;  */

void FUN_108879d44(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_108879d74();
  return;
}



/* Entry: 108879d74; end: 108879e27;  */

void FUN_108879d74(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c3447c();
  if (param_1 != 0) {
    func_0x000107c3141c();
    if ((int)param_1 != 0) {
      func_0x000107c3445c();
      func_0x00010887c3a4(&uStack_40);
      func_0x00010887bde4();
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_40 = 0;
      func_0x000107c27914(&uStack_40);
      if (*(char *)(unaff_x19 + 0x28) == '\x01') {
        func_0x00010887c3e4();
        FUN_10869b44c();
      }
      else {
        func_0x00010887c3e4();
        func_0x00010869b498();
      }
      func_0x00010887c094();
      return;
    }
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(lVar1 + 0x20) = 0;
  }
  return;
}



/* Entry: 108879e28; end: 108879e2b;  */

undefined8 * FUN_108879e28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108879e2c; end: 108879e3f;  */

void FUN_108879e2c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108879e40; end: 108879e63;  */

void FUN_108879e40(void)

{
  func_0x000107c34200();
  func_0x000107c28208();
  func_0x000107c342bc();
  func_0x00010887ba60();
  FUN_108879e94();
  func_0x00010887b7ac();
  func_0x00010887bfc4();
  return;
}



/* Entry: 108879e64; end: 108879e93;  */

void FUN_108879e64(void)

{
  func_0x00010887ba60();
  FUN_108879e94();
  func_0x00010887b7ac();
  func_0x00010887bfc4();
  return;
}



/* Entry: 108879e94; end: 108879ec3;  */

void FUN_108879e94(void)

{
  func_0x000107c343ec();
  FUN_10892631c();
  func_0x00010887bd00();
  func_0x00010887c038();
  func_0x00010887c7d4();
  return;
}



/* Entry: 108879ec4; end: 108879f6b;  */

long FUN_108879ec4(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108879f38;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108879f38:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c342d8();
  func_0x000108879fec();
  return param_1;
}



/* Entry: 108879f6c; end: 108879fb7;  */

void FUN_108879f6c(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x000107c342d8();
  func_0x000108879fec(param_1,auStack_28);
  return;
}



/* Entry: 108879fb8; end: 108879fbb;  */

undefined8 * FUN_108879fb8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108879fbc; end: 108879fcf;  */

void FUN_108879fbc(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108879fd0; end: 10887a00f;  */

void FUN_108879fd0(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10887a010; end: 10887a03f;  */

void FUN_10887a010(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_10887a040();
  return;
}



/* Entry: 10887a040; end: 10887a10b;  */

void FUN_10887a040(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  int iStack_30;
  
  func_0x000107c3447c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x000107c3445c();
    func_0x000107c313e0(&uStack_38);
    ppuStack_68 = &PTR_FUN_110a97ea0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    func_0x000107c3034c(&ppuStack_68,uStack_38,iStack_30 - (int)uStack_38);
    func_0x000107c27914(&uStack_38);
    if (*(char *)(unaff_x19 + 0x38) == '\x01') {
      func_0x000107c34588();
      FUN_108734c38();
    }
    else {
      func_0x000107c34588();
      func_0x000108734cc0();
    }
    FUN_108926210(&ppuStack_68);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    FUN_108926210();
    *(undefined1 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10887a10c; end: 10887a10f;  */

undefined8 * FUN_10887a10c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887a110; end: 10887a14b;  */

void FUN_10887a110(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887a14c; end: 10887a17b;  */

void FUN_10887a14c(void)

{
  func_0x00010887ba60();
  FUN_10887a17c();
  func_0x00010887b7ac();
  func_0x00010887bfc4();
  return;
}



/* Entry: 10887a17c; end: 10887a1ab;  */

void FUN_10887a17c(void)

{
  func_0x000107c343ec();
  func_0x00010b4f24e0();
  func_0x00010887bd00();
  func_0x00010887c038();
  func_0x00010887c7d4();
  return;
}



/* Entry: 10887a1ac; end: 10887a1ff;  */

void FUN_10887a1ac(void)

{
  func_0x000107c343c4();
  FUN_10887a200();
  func_0x00010887bb54();
  return;
}



/* Entry: 10887a200; end: 10887a223;  */

void FUN_10887a200(int param_1)

{
  func_0x000107c34200();
  func_0x000107c2a0d0();
  func_0x000107c342bc();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 10887a224; end: 10887a24f;  */

void FUN_10887a224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x00010887b678();
  FUN_108872004();
  func_0x00010887bad4();
  func_0x0001056453ec();
  func_0x00010887bae4();
  func_0x0001005ed240(&ppuStack_48,param_3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  func_0x0001005ecd60(param_1,param_2,ppuStack_48,uStack_40);
  func_0x00010061fa30();
  return;
}



/* Entry: 10887a250; end: 10887a2af;  */

void FUN_10887a250(long param_1)

{
  func_0x00010887cd1c();
  func_0x000107c60d88(param_1 + 0x18);
  func_0x0001005edcc0(param_1);
  func_0x00010054c3a4(param_1);
  func_0x00010062154c();
  func_0x000100621554();
  return;
}



/* Entry: 10887a2b0; end: 10887a2ef;  */

void FUN_10887a2b0(undefined8 param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  func_0x000107c342a8();
  FUN_1088722d4(param_1,3,in_x4,in_x5);
  func_0x00010887b7d4();
  func_0x000107c343fc();
  func_0x00010887ba88();
  FUN_10887a33c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 10887a2f0; end: 10887a33b;  */

void FUN_10887a2f0(void)

{
  func_0x00010887b7d4();
  func_0x000107c343fc();
  func_0x00010887ba88();
  FUN_10887a33c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 10887a33c; end: 10887a367;  */

void FUN_10887a33c(int param_1,undefined8 param_2,long param_3)

{
  func_0x00010887b678();
  FUN_108872004();
  func_0x00010887bad4();
  func_0x0001056453ec();
  func_0x00010887bae4();
  if (*(char *)(param_3 + 8) == '\x01') {
    func_0x0001005edd44();
    func_0x000107c6132c();
    if (param_1 != 0) {
      func_0x000107c3a4f8();
      func_0x000107c3a50c();
      func_0x000107c3a520();
      func_0x0001003a91d4(&UNK_10f82fa21);
      func_0x000107c3a500();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x000107c31418();
  return;
}



/* Entry: 10887a368; end: 10887a387;  */

void FUN_10887a368(void)

{
  func_0x00010887cd1c();
  func_0x000107c3446c();
  func_0x000107c343fc();
  func_0x000107c344c8();
  FUN_10887a428();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 10887a388; end: 10887a38b;  */

undefined8 * FUN_10887a388(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887a38c; end: 10887a39f;  */

void FUN_10887a38c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887a3a0; end: 10887a427;  */

/* WARNING: Possible PIC construction at 0x00010887a3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010887a3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010887a3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010887a404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010887a3f0) */
/* WARNING: Removing unreachable block (ram,0x00010887a3e8) */
/* WARNING: Removing unreachable block (ram,0x00010887a3c8) */
/* WARNING: Removing unreachable block (ram,0x00010887a408) */

void FUN_10887a3a0(int param_1,undefined8 param_2,long param_3)

{
  func_0x000107c34578();
  func_0x00010887b628();
  func_0x00010887bcd0();
  FUN_108872004();
  func_0x00010887c704();
  if (*(char *)(param_3 + 8) == '\x01') {
    func_0x0001005edd44();
    func_0x000107c6132c();
    if (param_1 != 0) {
      func_0x000107c3a4f8();
      func_0x000107c3a50c();
      func_0x000107c3a520();
      func_0x0001003a91d4(&UNK_10f82fa21);
      func_0x000107c3a500();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x00010887c4cc();
  return;
}



/* Entry: 10887a428; end: 10887a433;  */

void FUN_10887a428(undefined8 param_1)

{
  int iVar1;
  
  func_0x0001005edd44(param_1,1);
  iVar1 = (int)param_1;
  func_0x000107c6132c();
  if (iVar1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 10887a434; end: 10887a4db;  */

long FUN_10887a434(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_10887a4a8;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_10887a4a8:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c342d8();
  func_0x00010887a55c();
  return param_1;
}



/* Entry: 10887a4dc; end: 10887a527;  */

void FUN_10887a4dc(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x000107c342d8();
  func_0x00010887a55c(param_1,auStack_28);
  return;
}



/* Entry: 10887a528; end: 10887a52b;  */

undefined8 * FUN_10887a528(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887a52c; end: 10887a53f;  */

void FUN_10887a52c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887a540; end: 10887a5fb;  */

void FUN_10887a540(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}


