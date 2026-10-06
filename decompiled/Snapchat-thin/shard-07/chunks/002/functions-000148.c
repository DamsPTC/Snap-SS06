/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052bd3b8; end: 1052bd4af;  */

void FUN_1052bd3b8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  *param_2 = param_1;
  uVar1 = *(undefined8 *)(param_3 + 8);
  param_2[2] = *(undefined8 *)(param_3 + 0x10);
  param_2[1] = uVar1;
  param_2[3] = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  return;
}



/* Entry: 1052bd4b0; end: 1052bd507;  */

ulong FUN_1052bd4b0(void)

{
  ulong uVar1;
  long lVar2;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  uVar1 = lStack_28 + 0x18;
  func_0x00010b9a9518(uVar1);
  lVar2 = lStack_28 + 0x28;
  func_0x00010b9a9518(lVar2);
  func_0x000104bdbf78(&lStack_28);
  return uVar1 & 0xffffffff | lVar2 << 0x20;
}



/* Entry: 1052bd508; end: 1052bd637;  */

undefined8 FUN_1052bd508(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138193d0 & 1) == 0) {
    param_1 = 0x1138193d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_ContentDistance");
      pcVar1 = "storyOffset";
      func_0x0001003a83dc(auStack_68,"storyOffset");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "snapOffset";
      func_0x0001003a83dc(auStack_70,"snapOffset");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138193c0,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x1138193d0;
      ___cxa_guard_release(0x1138193d0);
    }
  }
  FUN_1052bd638(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138193c0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052bd638; end: 1052bd64b;  */

void FUN_1052bd638(void)

{
  return;
}



/* Entry: 1052bd64c; end: 1052bd68f;  */

long FUN_1052bd64c(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  lVar1 = lStack_28 + 0x18;
  func_0x00010b9a9608(lVar1);
  func_0x000104bdbf78(&lStack_28);
  return lVar1;
}



/* Entry: 1052bd690; end: 1052bd773;  */

undefined8 FUN_1052bd690(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138193e8 & 1) == 0) {
    param_1 = 0x1138193e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_DeprecatedRankingSignal");
      pcVar1 = "wifiOnly";
      func_0x0001003a83dc(auStack_40,"wifiOnly");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x1138193d8,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x1138193e8;
      ___cxa_guard_release(0x1138193e8);
    }
  }
  FUN_1052bd774(uStack_18);
  if ((bool)in_ZR) {
    return 0x1138193d8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052bd774; end: 1052bd787;  */

void FUN_1052bd774(void)

{
  return;
}



/* Entry: 1052bd788; end: 1052bd8b7;  */

undefined8 FUN_1052bd788(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819400 & 1) == 0) {
    iVar1 = 0x13819400;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_FailoverAdvice");
      pcVar2 = "fallbackUrls";
      func_0x0001003a83dc(auStack_68,"fallbackUrls");
      FUN_1052977e0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar2);
      pcVar2 = "reason";
      func_0x0001003a83dc(auStack_70,"reason");
      FUN_1052bd8b8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x1138193f0,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      ___cxa_guard_release(0x113819400);
    }
  }
  FUN_1052bd910(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138193f0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc680 & 1) == 0) {
    iVar1 = 0x130cc680;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc670);
      ___cxa_guard_release(0x1130cc680);
    }
  }
  return 0x1130cc670;
}



/* Entry: 1052bd8b8; end: 1052bd90f;  */

undefined8 FUN_1052bd8b8(void)

{
  int iVar1;
  
  if ((bRam00000001130cc680 & 1) == 0) {
    iVar1 = 0x130cc680;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc670);
      ___cxa_guard_release(0x1130cc680);
    }
  }
  return 0x1130cc670;
}



/* Entry: 1052bd910; end: 1052bd923;  */

void FUN_1052bd910(void)

{
  return;
}



/* Entry: 1052bd924; end: 1052bda5f;  */

undefined1 * FUN_1052bd924(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x0001052be36c();
  uStack_38 = extraout_x8;
  FUN_1052bda60();
  func_0x0001003b2110(auStack_58,0x113819430);
  pcStack_70 = FUN_1052bdb50;
  uStack_60 = param_2[1];
  uStack_68 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1052bdac0(auStack_48,&pcStack_70);
  func_0x000104bdb9bc(auStack_50,auStack_58,auStack_48,1);
  func_0x00010b9a8d98(auStack_48);
  func_0x0001005ad23c(&uStack_68);
  func_0x0001003b1f60(auStack_58);
  FUN_1052bdba4(&pcStack_70,auStack_50,param_2);
  if ((pcStack_70 != (code *)0x0) && (*(long *)(pcStack_70 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(pcStack_70 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = pcStack_70;
  FUN_1052be324(&pcStack_70);
  puVar5 = auStack_50;
  func_0x000104bdbf78(puVar5);
  func_0x0001052be358(uStack_38);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x000104bdbf78(auStack_50);
  func_0x0001052be3b0();
  if ((bRam0000000113819438 & 1) == 0) {
    iVar4 = 0x13819438;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052bdda8();
      FUN_1052bddfc(0x113819428,0x113819458);
      ___cxa_guard_release(0x113819438);
    }
  }
  return (undefined1 *)0x113819428;
}



/* Entry: 1052bda60; end: 1052bdabf;  */

undefined8 FUN_1052bda60(void)

{
  int iVar1;
  
  if ((bRam0000000113819438 & 1) == 0) {
    iVar1 = 0x13819438;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052bdda8();
      FUN_1052bddfc(0x113819428,0x113819458);
      ___cxa_guard_release(0x113819438);
    }
  }
  return 0x113819428;
}



/* Entry: 1052bdac0; end: 1052bdb4f;  */

void FUN_1052bdac0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  long lStack_28;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1052bde74(&lStack_30,&uStack_50);
  if (lStack_30 != 0) {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_28 = lStack_30;
  func_0x00010b9a8ef8(param_1,&lStack_28);
  func_0x000104bda388(&lStack_28);
  func_0x000104bda3d0(&lStack_30);
  func_0x0001005ad23c((ulong)&uStack_50 | 8);
  return;
}



/* Entry: 1052bdb50; end: 1052bdba3;  */

void FUN_1052bdb50(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [24];
  
  (**(code **)(*(long *)*param_2 + 0x10))(auStack_38);
  FUN_105297728(param_1,auStack_38);
  func_0x0001000e30f4(auStack_38);
  return;
}



/* Entry: 1052bdba4; end: 1052bdbe7;  */

void FUN_1052bdba4(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x0001052be36c();
  uStack_28 = extraout_x8;
  FUN_1052bdfe4(auStack_38);
  *param_1 = auStack_38[0];
  func_0x0001052be358(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001052be36c();
  bVar1 = *(byte *)((param_2 & 0xffffffff) + 0x113819408);
  *(undefined1 *)((param_2 & 0xffffffff) + 0x113819408) = 1;
  uStack_68 = extraout_x8_00;
  if ((bVar1 & 1) != 0) goto LAB_1052bdc38;
  if ((bRam0000000113819450 & 1) == 0) goto LAB_1052bdc58;
  while( true ) {
    func_0x000108b80888(0x113819440);
LAB_1052bdc38:
    func_0x0001052be358(uStack_68);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052bdc58:
    iVar2 = 0x13819450;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052bdda8();
      func_0x0001003a83dc(&uStack_88,"getFallbackUrls");
      FUN_1052977e0();
      func_0x000104bdbd48(auStack_98);
      uStack_80 = uStack_88;
      uStack_88 = 0;
      func_0x0001003aef98(auStack_78,auStack_98);
      func_0x000104bdbd44(0x113819440,0x113819458,1,&uStack_80,1);
      func_0x0001003b1c5c(&uStack_80);
      func_0x0001003adc18(auStack_90);
      func_0x0001003a8c94(&uStack_88);
      ___cxa_guard_release(0x113819450);
    }
  }
  return;
}



/* Entry: 1052bdbe8; end: 1052bdd0b;  */

void FUN_1052bdbe8(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001052be36c();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113819408);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113819408) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_1052bdc38;
  if ((bRam0000000113819450 & 1) == 0) goto LAB_1052bdc58;
  while( true ) {
    func_0x000108b80888(0x113819440);
LAB_1052bdc38:
    func_0x0001052be358(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052bdc58:
    iVar2 = 0x13819450;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052bdda8();
      func_0x0001003a83dc(&uStack_48,"getFallbackUrls");
      FUN_1052977e0();
      func_0x000104bdbd48(auStack_58);
      uStack_40 = uStack_48;
      uStack_48 = 0;
      func_0x0001003aef98(auStack_38,auStack_58);
      func_0x000104bdbd44(0x113819440,0x113819458,1,&uStack_40,1);
      func_0x0001003b1c5c(&uStack_40);
      func_0x0001003adc18(auStack_50);
      func_0x0001003a8c94(&uStack_48);
      ___cxa_guard_release(0x113819450);
    }
  }
  return;
}



/* Entry: 1052bdd0c; end: 1052bdda7;  */

undefined8 FUN_1052bdd0c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819420 & 1) == 0) {
    iVar4 = 0x13819420;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052bdda8();
      lStack_20 = lRam0000000113819458;
      if (lRam0000000113819458 != 0) {
        piVar1 = (int *)(lRam0000000113819458 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113819410,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113819420);
    }
  }
  return 0x113819410;
}



/* Entry: 1052bdda8; end: 1052bddfb;  */

void FUN_1052bdda8(void)

{
  int iVar1;
  
  if ((bRam0000000113819460 & 1) == 0) {
    iVar1 = 0x13819460;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113819458,"_djinni_interface_FallbackUrlProvider");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113819460);
      return;
    }
  }
  return;
}



/* Entry: 1052bddfc; end: 1052bde73;  */

void FUN_1052bddfc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_40 [16];
  byte bStack_30;
  undefined8 uStack_28;
  
  FUN_1052bdbe8(0);
  FUN_1052bdbe8(1);
  func_0x00010b9941f8(&uStack_28);
  func_0x00010b993b40(auStack_40,uStack_28,param_2);
  if ((bStack_30 & 1) != 0) {
    func_0x0001003adcc0(param_1,auStack_40);
    func_0x0001003b12dc(auStack_40);
    func_0x000104bdc2fc(&uStack_28);
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052bde70);
  (*pcVar1)();
}



/* Entry: 1052bde74; end: 1052bdf0f;  */

void FUN_1052bde74(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  code **ppcVar3;
  undefined8 extraout_x8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x0001052be36c();
  uVar1 = 0x40;
  uStack_38 = extraout_x8;
  __Znwm();
  pcStack_68 = FUN_1052bdf10;
  ppuStack_60 = &PTR_FUN_1108756d8;
  uStack_50 = param_2[1];
  uStack_58 = *param_2;
  uStack_48 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  ppcVar3 = &pcStack_68;
  uVar2 = uVar1;
  func_0x00010b9ac22c();
  *param_1 = uVar1;
  func_0x0001052be3a0();
  func_0x0001052be358(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001052be3a0();
  __ZdlPv(uVar1);
  __Unwind_Resume(uVar2);
  (*ppcVar3[2])(ppcVar3 + 3,uVar2);
  return;
}



/* Entry: 1052bdf10; end: 1052bdf7f;  */

void FUN_1052bdf10(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 1052bdf80; end: 1052bdfe3;  */

long FUN_1052bdf80(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052bdfe4; end: 1052be00b;  */

void FUN_1052bdfe4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1052be00c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1052be00c; end: 1052be0a7;  */

void FUN_1052be00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar5 = auStack_50;
  func_0x0001052be36c();
  uStack_38 = extraout_x8;
  FUN_1052be0c4(auStack_50,1);
  FUN_1052be118(lStack_40,param_3,param_4);
  lVar6 = lStack_40;
  lStack_40 = 0;
  FUN_1052be0a8(param_1,lVar6 + 0x18);
  FUN_1052be314(auStack_50);
  func_0x0001052be358(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1052be314();
  func_0x0001052be3b0();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_1052be0a8;
    lStack_68 = extraout_x8_00[1];
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_70 = puVar5;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x0001003a8180(puVar2,&puStack_70);
    func_0x0001003a90c4(&puStack_70);
    return;
  }
  return;
}



/* Entry: 1052be0a8; end: 1052be0c3;  */

void FUN_1052be0a8(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x0001003a8180(lVar2,&lStack_20);
    func_0x0001003a90c4(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1052be0c4; end: 1052be0eb;  */

long FUN_1052be0c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1052be0ec();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1052be0ec; end: 1052be117;  */

undefined8 * FUN_1052be0ec(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x333333333333334) {
    puVar1 = (undefined8 *)(param_2 * 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110875708;
  FUN_1052be184(param_1 + 3);
  return param_1;
}



/* Entry: 1052be118; end: 1052be15b;  */

undefined8 * FUN_1052be118(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110875708;
  FUN_1052be184(param_1 + 3);
  return param_1;
}



/* Entry: 1052be15c; end: 1052be15f;  */

void FUN_1052be15c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110875708;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052be160; end: 1052be173;  */

void FUN_1052be160(void)

{
  FUN_1052be298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052be174; end: 1052be183;  */

void FUN_1052be174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052be17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052be184; end: 1052be1cf;  */

void FUN_1052be184(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010b9ace44();
  *param_1 = &PTR_FUN_110875758;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1052be1d0; end: 1052be1d3;  */

void FUN_1052be1d0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110875758;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x0001005ad23c(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052be1d4; end: 1052be1e7;  */

void FUN_1052be1d4(void)

{
  FUN_1052be1f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052be1e8; end: 1052be1f7;  */

undefined1  [16] FUN_1052be1e8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052be1f8; end: 1052be297;  */

void FUN_1052be1f8(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110875758;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x0001005ad23c(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052be298; end: 1052be2a7;  */

void FUN_1052be298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110875708;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052be2a8; end: 1052be313;  */

void FUN_1052be2a8(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1052be314; end: 1052be323;  */

void FUN_1052be314(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1052be324; end: 1052be34b;  */

undefined8 * FUN_1052be324(undefined8 *param_1)

{
  FUN_1052be34c(*param_1);
  return param_1;
}



/* Entry: 1052be34c; end: 1052be3b7;  */

void FUN_1052be34c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1052be3b8; end: 1052be47f;  */

void FUN_1052be3b8(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lStack_48;
  
  func_0x00010b9a97d0(&lStack_48);
  iVar2 = (int)lStack_48 + 0x18;
  func_0x00010b9a9518();
  cVar1 = (char)lStack_48 + '(';
  FUN_1052bd64c();
  iVar3 = (int)lStack_48 + 0x38;
  func_0x00010b9a9518();
  lVar6 = lStack_48 + 0x48;
  func_0x00010b9a9588();
  iVar4 = (int)lStack_48 + 0x58;
  func_0x00010b9a9518();
  iVar5 = (int)lStack_48 + 0x68;
  func_0x00010b9a9518();
  *param_1 = iVar2;
  *(char *)(param_1 + 1) = cVar1;
  param_1[2] = iVar3;
  *(long *)(param_1 + 4) = lVar6;
  param_1[6] = iVar4;
  param_1[7] = iVar5;
  func_0x000104bdbf78(&lStack_48);
  return;
}



/* Entry: 1052be480; end: 1052be667;  */

undefined8 FUN_1052be480(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819478 & 1) == 0) {
    iVar1 = 0x13819478;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_c0,"_djinni_record_RankingSignals");
      pcVar2 = "mediaContextType";
      func_0x0001003a83dc(auStack_c8,"mediaContextType");
      FUN_1052a7154();
      func_0x0001003b1b50(auStack_b8,auStack_c8,pcVar2);
      pcVar2 = "deprecatedRankingSignal";
      func_0x0001003a83dc(auStack_d0,"deprecatedRankingSignal");
      FUN_1052bd690();
      func_0x0001003b1b50(auStack_a0,auStack_d0,pcVar2);
      pcVar2 = "fetchPriority";
      func_0x0001003a83dc(auStack_d8,"fetchPriority");
      FUN_1052be668();
      func_0x0001003b1b50(auStack_88,auStack_d8,pcVar2);
      pcVar2 = "importance";
      func_0x0001003a83dc(auStack_e0,"importance");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_70,auStack_e0,pcVar2);
      pcVar2 = "pageId";
      func_0x0001003a83dc(auStack_e8,"pageId");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_58,auStack_e8,pcVar2);
      pcVar2 = "trigger";
      func_0x0001003a83dc(auStack_f0,"trigger");
      FUN_1052be6c0();
      func_0x0001003b1b50(auStack_40,auStack_f0,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113819468,auStack_c0,0,auStack_b8,6);
      lVar4 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_b8 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      ___cxa_guard_release(0x113819478);
    }
  }
  FUN_1052be718(uStack_28);
  if ((bool)in_ZR) {
    return 0x113819468;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc698 & 1) == 0) {
    iVar1 = 0x130cc698;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc688);
      ___cxa_guard_release(0x1130cc698);
    }
  }
  return 0x1130cc688;
}



/* Entry: 1052be668; end: 1052be6bf;  */

undefined8 FUN_1052be668(void)

{
  int iVar1;
  
  if ((bRam00000001130cc698 & 1) == 0) {
    iVar1 = 0x130cc698;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc688);
      ___cxa_guard_release(0x1130cc698);
    }
  }
  return 0x1130cc688;
}



/* Entry: 1052be6c0; end: 1052be717;  */

undefined8 FUN_1052be6c0(void)

{
  int iVar1;
  
  if ((bRam00000001130cc6b0 & 1) == 0) {
    iVar1 = 0x130cc6b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc6a0);
      ___cxa_guard_release(0x1130cc6b0);
    }
  }
  return 0x1130cc6a0;
}



/* Entry: 1052be718; end: 1052be72b;  */

void FUN_1052be718(void)

{
  return;
}



/* Entry: 1052be72c; end: 1052be803;  */

void FUN_1052be72c(undefined8 param_1)

{
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [32];
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  FUN_1052be3b8(auStack_48,lStack_28 + 0x18);
  FUN_1052bea38(auStack_60,lStack_28 + 0x28);
  func_0x000104bf102c(auStack_80,lStack_28 + 0x38);
  func_0x000104bf102c(auStack_a0,lStack_28 + 0x48);
  FUN_1052be99c(param_1,auStack_48,auStack_60,auStack_80,auStack_a0);
  func_0x0001001148fc(auStack_a0);
  func_0x0001001148fc(auStack_80);
  func_0x0001000e30f4(auStack_60);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 1052be804; end: 1052be99b;  */

undefined8 *
FUN_1052be804(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 auStack_88 [3];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819490 & 1) == 0) {
    param_1 = (undefined8 *)0x113819490;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_RequestContext");
      pcVar1 = "rankingSignals";
      func_0x0001003a83dc(auStack_98,"rankingSignals");
      FUN_1052be480();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar1);
      pcVar1 = "uiPageInfo";
      func_0x0001003a83dc(auStack_a0,"uiPageInfo");
      FUN_1052beab0();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar1);
      pcVar1 = "trackingId";
      func_0x0001003a83dc(auStack_a8,"trackingId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar1);
      pcVar1 = "switchBoardKey";
      func_0x0001003a83dc(auStack_b0,"switchBoardKey");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar1);
      param_3 = auStack_88;
      param_2 = (undefined8 *)0x0;
      param_4 = (undefined8 *)0x4;
      func_0x000104bdbd44(0x113819480,auStack_90);
      lVar2 = 0x48;
      do {
        func_0x0001003b1c5c((long)auStack_88 + lVar2);
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != -0x18);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      param_1 = (undefined8 *)0x113819490;
      ___cxa_guard_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined8 *)0x113819480;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar3 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar3;
  param_1[6] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar4 = param_4[1];
    uVar3 = *param_4;
    param_1[9] = param_4[2];
    param_1[8] = uVar4;
    param_1[7] = uVar3;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar4 = param_5[1];
    uVar3 = *param_5;
    param_1[0xd] = param_5[2];
    param_1[0xc] = uVar4;
    param_1[0xb] = uVar3;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return param_1;
}



/* Entry: 1052be99c; end: 1052bea37;  */

void FUN_1052be99c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar1 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar1;
  param_1[6] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_1[9] = param_4[2];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[0xd] = param_5[2];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return;
}



/* Entry: 1052bea38; end: 1052beaaf;  */

void FUN_1052bea38(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  FUN_105297358(&uStack_40,lStack_28 + 0x18);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x0001000e30f4(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 1052beab0; end: 1052beb93;  */

undefined8 FUN_1052beab0(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138194a8 & 1) == 0) {
    param_1 = 0x1138194a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_UIPageInfo");
      pcVar1 = "pageHierarchy";
      func_0x0001003a83dc(auStack_40,"pageHierarchy");
      FUN_1052977e0();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113819498,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x1138194a8;
      ___cxa_guard_release(0x1138194a8);
    }
  }
  FUN_1052beb94(uStack_18);
  if ((bool)in_ZR) {
    return 0x113819498;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052beb94; end: 1052beba7;  */

void FUN_1052beb94(void)

{
  return;
}



/* Entry: 1052beba8; end: 1052becbb;  */

undefined8 *
FUN_1052beba8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined8 auStack_118 [3];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052becbc();
  func_0x0001003b2110(auStack_88,0x1138194b8);
  func_0x000105280820(auStack_78,param_2);
  func_0x000105280820(auStack_68,param_2 + 0x20);
  func_0x000105280820(auStack_58,param_2 + 0x40);
  func_0x000105280820(auStack_48,param_2 + 0x60);
  puVar6 = (undefined8 *)0x4;
  func_0x000104bdb9bc(&uStack_80,auStack_88,auStack_78);
  lVar7 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_78 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar5 = &uStack_80;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_80;
  func_0x000104bdbf78();
  func_0x0001052bef28(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_78 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_98 = FUN_1052becbc;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_b0 = lVar7;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam00000001138194c0 & 1) == 0) {
    puVar3 = (undefined8 *)0x1138194c0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_120,"_djinni_record_BitmojiInfo");
      pcVar4 = "avatarId";
      func_0x0001003a83dc(auStack_128,"avatarId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_118,auStack_128,pcVar4);
      pcVar4 = "selfieId";
      func_0x0001003a83dc(auStack_130,"selfieId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_100,auStack_130,pcVar4);
      pcVar4 = "sceneId";
      func_0x0001003a83dc(auStack_138,"sceneId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_e8,auStack_138,pcVar4);
      pcVar4 = "backgroundId";
      func_0x0001003a83dc(auStack_140,"backgroundId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_d0,auStack_140,pcVar4);
      puVar6 = auStack_118;
      puVar5 = (undefined8 *)0x0;
      param_5 = (undefined8 *)0x4;
      func_0x000104bdbd44(0x1138194b0,auStack_120);
      lVar7 = 0x48;
      do {
        func_0x0001003b1c5c((long)auStack_118 + lVar7);
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      puVar3 = (undefined8 *)0x1138194c0;
      ___cxa_guard_release();
    }
  }
  func_0x0001052bef28(uStack_b8);
  if ((bool)uVar1) {
    return (undefined8 *)0x1138194b0;
  }
  ___stack_chk_fail();
  if ((int)puVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  if (*(char *)(puVar5 + 3) == '\x01') {
    uVar9 = puVar5[1];
    uVar8 = *puVar5;
    puVar3[2] = puVar5[2];
    puVar3[1] = uVar9;
    *puVar3 = uVar8;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    *(undefined1 *)(puVar3 + 3) = 1;
  }
  *(undefined1 *)(puVar3 + 4) = 0;
  *(undefined1 *)(puVar3 + 7) = 0;
  if (*(char *)(puVar6 + 3) == '\x01') {
    uVar9 = puVar6[1];
    uVar8 = *puVar6;
    puVar3[6] = puVar6[2];
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    *(undefined1 *)(puVar3 + 7) = 1;
  }
  *(undefined1 *)(puVar3 + 8) = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar9 = param_5[1];
    uVar8 = *param_5;
    puVar3[10] = param_5[2];
    puVar3[9] = uVar9;
    puVar3[8] = uVar8;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(puVar3 + 0xb) = 1;
  }
  *(undefined1 *)(puVar3 + 0xc) = 0;
  *(undefined1 *)(puVar3 + 0xf) = 0;
  if (*(char *)(param_6 + 3) == '\x01') {
    uVar9 = param_6[1];
    uVar8 = *param_6;
    puVar3[0xe] = param_6[2];
    puVar3[0xd] = uVar9;
    puVar3[0xc] = uVar8;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    *(undefined1 *)(puVar3 + 0xf) = 1;
  }
  return puVar3;
}



/* Entry: 1052becbc; end: 1052bee47;  */

undefined8 *
FUN_1052becbc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined1 in_ZR;
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 auStack_88 [3];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138194c0 & 1) == 0) {
    param_1 = (undefined8 *)0x1138194c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_BitmojiInfo");
      pcVar1 = "avatarId";
      func_0x0001003a83dc(auStack_98,"avatarId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar1);
      pcVar1 = "selfieId";
      func_0x0001003a83dc(auStack_a0,"selfieId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar1);
      pcVar1 = "sceneId";
      func_0x0001003a83dc(auStack_a8,"sceneId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar1);
      pcVar1 = "backgroundId";
      func_0x0001003a83dc(auStack_b0,"backgroundId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar1);
      param_3 = auStack_88;
      param_2 = (undefined8 *)0x0;
      param_4 = (undefined8 *)0x4;
      func_0x000104bdbd44(0x1138194b0,auStack_90);
      lVar2 = 0x48;
      do {
        func_0x0001003b1c5c((long)auStack_88 + lVar2);
        lVar2 = lVar2 + -0x18;
        in_ZR = lVar2 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      param_1 = (undefined8 *)0x1138194c0;
      ___cxa_guard_release();
    }
  }
  func_0x0001052bef28(uStack_28);
  if ((bool)in_ZR) {
    return (undefined8 *)0x1138194b0;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar4 = param_3[1];
    uVar3 = *param_3;
    param_1[6] = param_3[2];
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar4 = param_4[1];
    uVar3 = *param_4;
    param_1[10] = param_4[2];
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar4 = param_5[1];
    uVar3 = *param_5;
    param_1[0xe] = param_5[2];
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  return param_1;
}



/* Entry: 1052bee48; end: 1052bef3b;  */

void FUN_1052bee48(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[6] = param_3[2];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_1[10] = param_4[2];
    param_1[9] = uVar2;
    param_1[8] = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[0xe] = param_5[2];
    param_1[0xd] = uVar2;
    param_1[0xc] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  return;
}



/* Entry: 1052bef3c; end: 1052bf07f;  */

undefined8 *
FUN_1052bef3c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *extraout_x8;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [8];
  undefined8 auStack_258 [3];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 *puStack_1e8;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052bf080();
  func_0x0001003b2110(auStack_88,0x1138194d0);
  FUN_1052c53f4(auStack_78,param_2);
  FUN_1052808e4(auStack_68,param_2 + 0x18);
  func_0x000105280820(auStack_58,param_2 + 0x30);
  FUN_1052bf20c(auStack_48,param_2 + 0x50);
  func_0x000104bdb9bc(&uStack_80,auStack_88,auStack_78,4);
  lVar10 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_78 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar1 = lVar10 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar9 = &uStack_80;
  func_0x00010b9a8f60(param_1);
  puVar7 = &uStack_80;
  func_0x000104bdbf78();
  FUN_1052bf340(uStack_38);
  if ((bool)uVar1) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar4 = auStack_48;
  lVar10 = -0x40;
  do {
    func_0x00010b9a8d98(puVar4);
    iVar6 = (int)puVar9;
    puVar4 = puVar4 + -0x10;
    lVar10 = lVar10 + 0x10;
    uVar1 = lVar10 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar9 = puVar7;
  __Unwind_Resume();
  pcStack_98 = FUN_1052bf080;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_b0 = lVar10;
  puStack_a8 = puVar7;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam00000001138194d8 & 1) == 0) {
    puVar9 = (undefined8 *)0x1138194d8;
    ___cxa_guard_acquire();
    if ((int)puVar9 != 0) {
      func_0x0001003a83dc(auStack_120,"_djinni_record_Snapchatter");
      pcVar5 = "userId";
      func_0x0001003a83dc(auStack_128,"userId");
      FUN_1052c54b8();
      func_0x0001003b1b50(auStack_118,auStack_128,pcVar5);
      pcVar5 = "username";
      func_0x0001003a83dc(auStack_130,"username");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_100,auStack_130,pcVar5);
      pcVar5 = "displayName";
      func_0x0001003a83dc(auStack_138,"displayName");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_e8,auStack_138,pcVar5);
      pcVar5 = "bitmojiInfo";
      func_0x0001003a83dc(auStack_140,"bitmojiInfo");
      FUN_1052bf22c();
      func_0x0001003b1b50(auStack_d0,auStack_140,pcVar5);
      uVar8 = 0;
      param_5 = (undefined8 *)0x4;
      func_0x000104bdbd44(0x1138194c8,auStack_120,0,auStack_118);
      lVar10 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_118 + lVar10);
        iVar6 = (int)uVar8;
        lVar10 = lVar10 + -0x18;
        uVar1 = lVar10 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      puVar9 = (undefined8 *)0x1138194d8;
      ___cxa_guard_release();
    }
  }
  FUN_1052bf340(uStack_b8);
  if ((bool)uVar1) {
    return (undefined8 *)0x1138194c8;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(puVar9 + 0x10) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar9;
  }
  pcStack_148 = FUN_1052bf20c;
  uStack_178 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_150 = &puStack_a0;
  FUN_1052becbc();
  func_0x0001003b2110(auStack_1c8,0x1138194b8);
  func_0x000105280820(auStack_1b8,puVar9);
  func_0x000105280820(auStack_1a8,puVar9 + 4);
  func_0x000105280820(auStack_198,puVar9 + 8);
  func_0x000105280820(auStack_188,puVar9 + 0xc);
  puVar9 = (undefined8 *)0x4;
  func_0x000104bdb9bc(&uStack_1c0,auStack_1c8,auStack_1b8);
  lVar10 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_1b8 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar1 = lVar10 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1c8);
  puVar7 = &uStack_1c0;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = &uStack_1c0;
  func_0x000104bdbf78();
  func_0x0001052bef28(uStack_178);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar10 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_1b8 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar1 = lVar10 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1c8);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_1d8 = FUN_1052becbc;
  uStack_1f8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_1f0 = lVar10;
  puStack_1e8 = puVar2;
  pppuStack_1e0 = &ppuStack_150;
  if ((bRam00000001138194c0 & 1) == 0) {
    puVar3 = (undefined8 *)0x1138194c0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_260,"_djinni_record_BitmojiInfo");
      pcVar5 = "avatarId";
      func_0x0001003a83dc(auStack_268,"avatarId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_258,auStack_268,pcVar5);
      pcVar5 = "selfieId";
      func_0x0001003a83dc(auStack_270,"selfieId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_240,auStack_270,pcVar5);
      pcVar5 = "sceneId";
      func_0x0001003a83dc(auStack_278,"sceneId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_228,auStack_278,pcVar5);
      pcVar5 = "backgroundId";
      func_0x0001003a83dc(auStack_280,"backgroundId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_210,auStack_280,pcVar5);
      puVar9 = auStack_258;
      puVar7 = (undefined8 *)0x0;
      param_5 = (undefined8 *)0x4;
      func_0x000104bdbd44(0x1138194b0,auStack_260);
      lVar10 = 0x48;
      do {
        func_0x0001003b1c5c((long)auStack_258 + lVar10);
        lVar10 = lVar10 + -0x18;
        uVar1 = lVar10 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_280);
      func_0x0001003a8c94(auStack_278);
      func_0x0001003a8c94(auStack_270);
      func_0x0001003a8c94(auStack_268);
      func_0x0001003a8c94(auStack_260);
      puVar3 = (undefined8 *)0x1138194c0;
      ___cxa_guard_release();
    }
  }
  func_0x0001052bef28(uStack_1f8);
  if ((bool)uVar1) {
    return (undefined8 *)0x1138194b0;
  }
  ___stack_chk_fail();
  if ((int)puVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  if (*(char *)(puVar7 + 3) == '\x01') {
    uVar11 = puVar7[1];
    uVar8 = *puVar7;
    puVar3[2] = puVar7[2];
    puVar3[1] = uVar11;
    *puVar3 = uVar8;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    *(undefined1 *)(puVar3 + 3) = 1;
  }
  *(undefined1 *)(puVar3 + 4) = 0;
  *(undefined1 *)(puVar3 + 7) = 0;
  if (*(char *)(puVar9 + 3) == '\x01') {
    uVar11 = puVar9[1];
    uVar8 = *puVar9;
    puVar3[6] = puVar9[2];
    puVar3[5] = uVar11;
    puVar3[4] = uVar8;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    *(undefined1 *)(puVar3 + 7) = 1;
  }
  *(undefined1 *)(puVar3 + 8) = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar11 = param_5[1];
    uVar8 = *param_5;
    puVar3[10] = param_5[2];
    puVar3[9] = uVar11;
    puVar3[8] = uVar8;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(puVar3 + 0xb) = 1;
  }
  *(undefined1 *)(puVar3 + 0xc) = 0;
  *(undefined1 *)(puVar3 + 0xf) = 0;
  if (*(char *)(param_6 + 3) == '\x01') {
    uVar11 = param_6[1];
    uVar8 = *param_6;
    puVar3[0xe] = param_6[2];
    puVar3[0xd] = uVar11;
    puVar3[0xc] = uVar8;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    *(undefined1 *)(puVar3 + 0xf) = 1;
  }
  return puVar3;
}



/* Entry: 1052bf080; end: 1052bf20b;  */

undefined8 *
FUN_1052bf080(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined8 auStack_1c8 [3];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138194d8 & 1) == 0) {
    param_1 = (undefined8 *)0x1138194d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_Snapchatter");
      pcVar4 = "userId";
      func_0x0001003a83dc(auStack_98,"userId");
      FUN_1052c54b8();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar4);
      pcVar4 = "username";
      func_0x0001003a83dc(auStack_a0,"username");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar4);
      pcVar4 = "displayName";
      func_0x0001003a83dc(auStack_a8,"displayName");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar4);
      pcVar4 = "bitmojiInfo";
      func_0x0001003a83dc(auStack_b0,"bitmojiInfo");
      FUN_1052bf22c();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar4);
      uVar6 = 0;
      param_4 = (undefined8 *)0x4;
      func_0x000104bdbd44(0x1138194c8,auStack_90,0,auStack_88);
      lVar8 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_88 + lVar8);
        param_2 = (int)uVar6;
        lVar8 = lVar8 + -0x18;
        in_ZR = lVar8 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      param_1 = (undefined8 *)0x1138194d8;
      ___cxa_guard_release();
    }
  }
  FUN_1052bf340(uStack_28);
  if ((bool)in_ZR) {
    return (undefined8 *)0x1138194c8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(param_1 + 0x10) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_b8 = FUN_1052bf20c;
  uStack_e8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_1052becbc();
  func_0x0001003b2110(auStack_138,0x1138194b8);
  func_0x000105280820(auStack_128,param_1);
  func_0x000105280820(auStack_118,param_1 + 4);
  func_0x000105280820(auStack_108,param_1 + 8);
  func_0x000105280820(auStack_f8,param_1 + 0xc);
  puVar7 = (undefined8 *)0x4;
  func_0x000104bdb9bc(&uStack_130,auStack_138,auStack_128);
  lVar8 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_128 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_138);
  puVar5 = &uStack_130;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = &uStack_130;
  func_0x000104bdbf78();
  func_0x0001052bef28(uStack_e8);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar8 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_128 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_138);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_1052becbc;
  uStack_168 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = lVar8;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_c0;
  if ((bRam00000001138194c0 & 1) == 0) {
    puVar3 = (undefined8 *)0x1138194c0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_1d0,"_djinni_record_BitmojiInfo");
      pcVar4 = "avatarId";
      func_0x0001003a83dc(auStack_1d8,"avatarId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_1c8,auStack_1d8,pcVar4);
      pcVar4 = "selfieId";
      func_0x0001003a83dc(auStack_1e0,"selfieId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_1b0,auStack_1e0,pcVar4);
      pcVar4 = "sceneId";
      func_0x0001003a83dc(auStack_1e8,"sceneId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_198,auStack_1e8,pcVar4);
      pcVar4 = "backgroundId";
      func_0x0001003a83dc(auStack_1f0,"backgroundId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_180,auStack_1f0,pcVar4);
      puVar7 = auStack_1c8;
      puVar5 = (undefined8 *)0x0;
      param_4 = (undefined8 *)0x4;
      func_0x000104bdbd44(0x1138194b0,auStack_1d0);
      lVar8 = 0x48;
      do {
        func_0x0001003b1c5c((long)auStack_1c8 + lVar8);
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1f0);
      func_0x0001003a8c94(auStack_1e8);
      func_0x0001003a8c94(auStack_1e0);
      func_0x0001003a8c94(auStack_1d8);
      func_0x0001003a8c94(auStack_1d0);
      puVar3 = (undefined8 *)0x1138194c0;
      ___cxa_guard_release();
    }
  }
  func_0x0001052bef28(uStack_168);
  if ((bool)uVar1) {
    return (undefined8 *)0x1138194b0;
  }
  ___stack_chk_fail();
  if ((int)puVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  if (*(char *)(puVar5 + 3) == '\x01') {
    uVar9 = puVar5[1];
    uVar6 = *puVar5;
    puVar3[2] = puVar5[2];
    puVar3[1] = uVar9;
    *puVar3 = uVar6;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    *(undefined1 *)(puVar3 + 3) = 1;
  }
  *(undefined1 *)(puVar3 + 4) = 0;
  *(undefined1 *)(puVar3 + 7) = 0;
  if (*(char *)(puVar7 + 3) == '\x01') {
    uVar9 = puVar7[1];
    uVar6 = *puVar7;
    puVar3[6] = puVar7[2];
    puVar3[5] = uVar9;
    puVar3[4] = uVar6;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    *(undefined1 *)(puVar3 + 7) = 1;
  }
  *(undefined1 *)(puVar3 + 8) = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar9 = param_4[1];
    uVar6 = *param_4;
    puVar3[10] = param_4[2];
    puVar3[9] = uVar9;
    puVar3[8] = uVar6;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(puVar3 + 0xb) = 1;
  }
  *(undefined1 *)(puVar3 + 0xc) = 0;
  *(undefined1 *)(puVar3 + 0xf) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar9 = param_5[1];
    uVar6 = *param_5;
    puVar3[0xe] = param_5[2];
    puVar3[0xd] = uVar9;
    puVar3[0xc] = uVar6;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(puVar3 + 0xf) = 1;
  }
  return puVar3;
}



/* Entry: 1052bf20c; end: 1052bf22b;  */

undefined8 *
FUN_1052bf20c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined8 auStack_118 [3];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 0x10) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052becbc();
  func_0x0001003b2110(auStack_88,0x1138194b8);
  func_0x000105280820(auStack_78,param_2);
  func_0x000105280820(auStack_68,param_2 + 4);
  func_0x000105280820(auStack_58,param_2 + 8);
  func_0x000105280820(auStack_48,param_2 + 0xc);
  puVar6 = (undefined8 *)0x4;
  func_0x000104bdb9bc(&uStack_80,auStack_88,auStack_78);
  lVar7 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_78 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar5 = &uStack_80;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_80;
  func_0x000104bdbf78();
  func_0x0001052bef28(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_78 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_98 = FUN_1052becbc;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_b0 = lVar7;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam00000001138194c0 & 1) == 0) {
    puVar3 = (undefined8 *)0x1138194c0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_120,"_djinni_record_BitmojiInfo");
      pcVar4 = "avatarId";
      func_0x0001003a83dc(auStack_128,"avatarId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_118,auStack_128,pcVar4);
      pcVar4 = "selfieId";
      func_0x0001003a83dc(auStack_130,"selfieId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_100,auStack_130,pcVar4);
      pcVar4 = "sceneId";
      func_0x0001003a83dc(auStack_138,"sceneId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_e8,auStack_138,pcVar4);
      pcVar4 = "backgroundId";
      func_0x0001003a83dc(auStack_140,"backgroundId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_d0,auStack_140,pcVar4);
      puVar6 = auStack_118;
      puVar5 = (undefined8 *)0x0;
      param_5 = (undefined8 *)0x4;
      func_0x000104bdbd44(0x1138194b0,auStack_120);
      lVar7 = 0x48;
      do {
        func_0x0001003b1c5c((long)auStack_118 + lVar7);
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      puVar3 = (undefined8 *)0x1138194c0;
      ___cxa_guard_release();
    }
  }
  func_0x0001052bef28(uStack_b8);
  if ((bool)uVar1) {
    return (undefined8 *)0x1138194b0;
  }
  ___stack_chk_fail();
  if ((int)puVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  if (*(char *)(puVar5 + 3) == '\x01') {
    uVar9 = puVar5[1];
    uVar8 = *puVar5;
    puVar3[2] = puVar5[2];
    puVar3[1] = uVar9;
    *puVar3 = uVar8;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    *(undefined1 *)(puVar3 + 3) = 1;
  }
  *(undefined1 *)(puVar3 + 4) = 0;
  *(undefined1 *)(puVar3 + 7) = 0;
  if (*(char *)(puVar6 + 3) == '\x01') {
    uVar9 = puVar6[1];
    uVar8 = *puVar6;
    puVar3[6] = puVar6[2];
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    *(undefined1 *)(puVar3 + 7) = 1;
  }
  *(undefined1 *)(puVar3 + 8) = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar9 = param_5[1];
    uVar8 = *param_5;
    puVar3[10] = param_5[2];
    puVar3[9] = uVar9;
    puVar3[8] = uVar8;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(puVar3 + 0xb) = 1;
  }
  *(undefined1 *)(puVar3 + 0xc) = 0;
  *(undefined1 *)(puVar3 + 0xf) = 0;
  if (*(char *)(param_6 + 3) == '\x01') {
    uVar9 = param_6[1];
    uVar8 = *param_6;
    puVar3[0xe] = param_6[2];
    puVar3[0xd] = uVar9;
    puVar3[0xc] = uVar8;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    *(undefined1 *)(puVar3 + 0xf) = 1;
  }
  return puVar3;
}



/* Entry: 1052bf22c; end: 1052bf287;  */

undefined8 FUN_1052bf22c(void)

{
  int iVar1;
  
  if ((bRam00000001130cc6c8 & 1) == 0) {
    iVar1 = 0x130cc6c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052becbc();
      func_0x00010b990784(0x1130cc6b8);
      ___cxa_guard_release(0x1130cc6c8);
    }
  }
  return 0x1130cc6b8;
}



/* Entry: 1052bf288; end: 1052bf323;  */

undefined8 *
FUN_1052bf288(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_1[8] = param_4[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  FUN_10528b1f4(param_1 + 10,param_5);
  return param_1;
}



/* Entry: 1052bf324; end: 1052bf33f;  */

void FUN_1052bf324(long param_1)

{
  FUN_10528b250();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 1052bf340; end: 1052bf353;  */

void FUN_1052bf340(void)

{
  return;
}



/* Entry: 1052bf354; end: 1052bf457;  */

undefined1 * FUN_1052bf354(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052bf458();
  func_0x0001003b2110(auStack_68,0x1138194e8);
  auStack_58[0] = *param_2;
  uStack_50 = 7;
  uStack_48 = *(undefined4 *)(param_2 + 4);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_1052bf588(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_1052bf458;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138194f0 & 1) == 0) {
    puVar3 = (undefined1 *)0x1138194f0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_NotificationCenterBadge");
      pcVar4 = "hasUnread";
      func_0x0001003a83dc(auStack_d8,"hasUnread");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "unreadCount";
      func_0x0001003a83dc(auStack_e0,"unreadCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138194e0,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar3 = (undefined1 *)0x1138194f0;
      ___cxa_guard_release(0x1138194f0);
    }
  }
  FUN_1052bf588(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138194e0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 1052bf458; end: 1052bf587;  */

undefined8 FUN_1052bf458(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138194f0 & 1) == 0) {
    param_1 = 0x1138194f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_NotificationCenterBadge");
      pcVar1 = "hasUnread";
      func_0x0001003a83dc(auStack_68,"hasUnread");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "unreadCount";
      func_0x0001003a83dc(auStack_70,"unreadCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138194e0,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x1138194f0;
      ___cxa_guard_release(0x1138194f0);
    }
  }
  FUN_1052bf588(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138194e0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052bf588; end: 1052bf59b;  */

void FUN_1052bf588(void)

{
  return;
}



/* Entry: 1052bf59c; end: 1052bf6b3;  */

undefined1 * FUN_1052bf59c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052bf6b4();
  func_0x0001003b2110(auStack_68,0x113819500);
  auStack_58[0] = *param_2;
  uStack_50 = 4;
  uStack_48 = *(undefined8 *)(param_2 + 2);
  uStack_40 = 5;
  if (*(char *)(param_2 + 4) == '\0') {
    uStack_40 = 1;
    uStack_48 = 0;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_1052bf7e4(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_1052bf6b4;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113819508 & 1) == 0) {
    puVar3 = (undefined1 *)0x113819508;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_NotificationCenterBadgedItemSummary");
      pcVar4 = "badgedItemCount";
      func_0x0001003a83dc(auStack_d8,"badgedItemCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "oldestBadgedItemId";
      func_0x0001003a83dc(auStack_e0,"oldestBadgedItemId");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138194f8,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar3 = (undefined1 *)0x113819508;
      ___cxa_guard_release(0x113819508);
    }
  }
  FUN_1052bf7e4(uStack_98);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    return puVar3;
  }
  return (undefined1 *)0x1138194f8;
}



/* Entry: 1052bf6b4; end: 1052bf7e3;  */

undefined8 FUN_1052bf6b4(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819508 & 1) == 0) {
    param_1 = 0x113819508;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_NotificationCenterBadgedItemSummary");
      pcVar1 = "badgedItemCount";
      func_0x0001003a83dc(auStack_68,"badgedItemCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "oldestBadgedItemId";
      func_0x0001003a83dc(auStack_70,"oldestBadgedItemId");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138194f8,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113819508;
      ___cxa_guard_release(0x113819508);
    }
  }
  FUN_1052bf7e4(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138194f8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052bf7e4; end: 1052bf7f7;  */

void FUN_1052bf7e4(void)

{
  return;
}



/* Entry: 1052bf7f8; end: 1052bf93b;  */

long * FUN_1052bf7f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_1c8 [16];
  long lStack_1b8;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052bf93c();
  func_0x0001003b2110(&lStack_98,0x113819518);
  uStack_80 = 5;
  uStack_88 = *param_2;
  uStack_78 = param_2[1];
  uStack_70 = 5;
  FUN_1052bfaf8(auStack_68,param_2 + 2);
  uStack_58 = param_2[5];
  uStack_50 = 5;
  func_0x000108b80a1c(auStack_48,param_2 + 6);
  func_0x000104bdb9bc(&lStack_90,&lStack_98,&uStack_88,5);
  lVar8 = 0x40;
  do {
    func_0x00010b9a8d98((long)&uStack_88 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_98);
  plVar4 = &lStack_90;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_90;
  func_0x000104bdbf78();
  func_0x0001052c0028(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x50;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_98;
  func_0x0001003b1f60();
  func_0x0001052c0004();
  pcStack_a8 = FUN_1052bf93c;
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_c0 = lVar8;
  plStack_b8 = plVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113819520 & 1) == 0) {
    plVar4 = (long *)0x113819520;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_148,"_djinni_record_NotificationCenterItem");
      pcVar5 = "id";
      func_0x0001003a83dc(auStack_150,"id");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_140,auStack_150,pcVar5);
      pcVar5 = "createdAt";
      func_0x0001003a83dc(auStack_158,"createdAt");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_128,auStack_158,pcVar5);
      pcVar5 = "badgeClearedBy";
      func_0x0001003a83dc(auStack_160,"badgeClearedBy");
      FUN_1052bfbc0();
      func_0x0001003b1b50(auStack_110,auStack_160,pcVar5);
      pcVar5 = "orderKey";
      func_0x0001003a83dc(auStack_168,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_f8,auStack_168,pcVar5);
      pcVar5 = "content";
      func_0x0001003a83dc(auStack_170,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_e0,auStack_170,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113819510,auStack_148,0,auStack_140,5);
      lVar8 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_140 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_170);
      func_0x0001003a8c94(auStack_168);
      func_0x0001003a8c94(auStack_160);
      func_0x0001003a8c94(auStack_158);
      func_0x0001003a8c94(auStack_150);
      func_0x0001003a8c94(auStack_148);
      plVar4 = (long *)0x113819520;
      ___cxa_guard_release();
    }
  }
  func_0x0001052c0028(uStack_c8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_1b8,(plVar4[1] - *plVar4) / 0x18);
    lVar9 = 0;
    lVar8 = 0x18;
    for (uVar10 = 0; uVar10 < (ulong)((plVar4[1] - *plVar4) / 0x18); uVar10 = uVar10 + 1) {
      FUN_1052c53f4(auStack_1c8,*plVar4 + lVar9);
      func_0x00010b9a9020(lStack_1b8 + lVar8,auStack_1c8);
      func_0x00010b9a8d98(auStack_1c8);
      lVar8 = lVar8 + 0x10;
      lVar9 = lVar9 + 0x18;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_1b8);
    plVar4 = &lStack_1b8;
    func_0x000104bddf38(plVar4);
    return plVar4;
  }
  return (long *)0x113819510;
}



/* Entry: 1052bf93c; end: 1052bfaf7;  */

long * FUN_1052bf93c(long *param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_128 [16];
  long lStack_118;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819520 & 1) == 0) {
    param_1 = (long *)0x113819520;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_a8,"_djinni_record_NotificationCenterItem");
      pcVar1 = "id";
      func_0x0001003a83dc(auStack_b0,"id");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_a0,auStack_b0,pcVar1);
      pcVar1 = "createdAt";
      func_0x0001003a83dc(auStack_b8,"createdAt");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_88,auStack_b8,pcVar1);
      pcVar1 = "badgeClearedBy";
      func_0x0001003a83dc(auStack_c0,"badgeClearedBy");
      FUN_1052bfbc0();
      func_0x0001003b1b50(auStack_70,auStack_c0,pcVar1);
      pcVar1 = "orderKey";
      func_0x0001003a83dc(auStack_c8,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_c8,pcVar1);
      pcVar1 = "content";
      func_0x0001003a83dc(auStack_d0,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_40,auStack_d0,pcVar1);
      uVar3 = 0;
      func_0x000104bdbd44(0x113819510,auStack_a8,0,auStack_a0,5);
      lVar6 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a0 + lVar6);
        param_2 = (int)uVar3;
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      func_0x0001003a8c94(auStack_b8);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      param_1 = (long *)0x113819520;
      ___cxa_guard_release();
    }
  }
  func_0x0001052c0028(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_118,(param_1[1] - *param_1) / 0x18);
    lVar4 = 0;
    lVar6 = 0x18;
    for (uVar5 = 0; uVar5 < (ulong)((param_1[1] - *param_1) / 0x18); uVar5 = uVar5 + 1) {
      FUN_1052c53f4(auStack_128,*param_1 + lVar4);
      func_0x00010b9a9020(lStack_118 + lVar6,auStack_128);
      func_0x00010b9a8d98(auStack_128);
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x18;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_118);
    plVar2 = &lStack_118;
    func_0x000104bddf38(plVar2);
    return plVar2;
  }
  return (long *)0x113819510;
}



/* Entry: 1052bfaf8; end: 1052bfbbf;  */

void FUN_1052bfaf8(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b9abe10(&lStack_48,(param_2[1] - *param_2) / 0x18);
  lVar1 = 0;
  lVar3 = 0x18;
  for (uVar2 = 0; uVar2 < (ulong)((param_2[1] - *param_2) / 0x18); uVar2 = uVar2 + 1) {
    FUN_1052c53f4(auStack_58,*param_2 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x00010b9a8d98(auStack_58);
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0x18;
  }
  func_0x00010b9a8f84(param_1,&lStack_48);
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 1052bfbc0; end: 1052bfc1b;  */

undefined8 FUN_1052bfbc0(void)

{
  int iVar1;
  
  if ((bRam00000001130cc6e0 & 1) == 0) {
    iVar1 = 0x130cc6e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052c54b8();
      func_0x00010b990868(0x1130cc6d0);
      ___cxa_guard_release(0x1130cc6e0);
    }
  }
  return 0x1130cc6d0;
}



/* Entry: 1052bfc1c; end: 1052bfc8b;  */

undefined8 FUN_1052bfc1c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001052bfc50(&uStack_28);
  return param_1;
}



/* Entry: 1052bfc8c; end: 1052bfc93;  */

void FUN_1052bfc8c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1052bfc94; end: 1052bfccb;  */

void FUN_1052bfc94(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1052bfccc; end: 1052bfcdf;  */

void FUN_1052bfccc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x18) * 0x18;
  FUN_1052bfe08(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1052bfce0; end: 1052bfd6b;  */

void FUN_1052bfce0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_1052bfe08(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1052bfd6c; end: 1052bfddb;  */

long * FUN_1052bfd6c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001052bfdb8();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1052bfddc; end: 1052bfe07;  */

void FUN_1052bfddc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_38 = 0;
    puStack_38[1] = 0;
    puStack_38[2] = 0;
    uVar1 = *param_2;
    puStack_38[1] = param_2[1];
    *puStack_38 = uVar1;
    puStack_38[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_1052bfe98();
  FUN_1052bfec8(&uStack_60);
  return;
}



/* Entry: 1052bfe08; end: 1052bfe97;  */

void FUN_1052bfe08(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_28 = 0;
    puStack_28[1] = 0;
    puStack_28[2] = 0;
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    puStack_28[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_1052bfe98();
  FUN_1052bfec8(&uStack_50);
  return;
}



/* Entry: 1052bfe98; end: 1052bfec7;  */

void FUN_1052bfe98(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1052bfec8; end: 1052bfef7;  */

long FUN_1052bfec8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1052bfef8(param_1);
  }
  return param_1;
}



/* Entry: 1052bfef8; end: 1052bff17;  */

void FUN_1052bfef8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1052bff18; end: 1052bff73;  */

void FUN_1052bff18(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1052bff74; end: 1052bff7b;  */

void FUN_1052bff74(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1052bff7c; end: 1052bffb3;  */

void FUN_1052bff7c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1052bffb4; end: 1052c0003;  */

ulong FUN_1052bffb4(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    FUN_1052bfccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Unwind_Resume_11034bd20)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    uVar2 = 0xaaaaaaaaaaaaaaa;
  }
  return uVar2;
}



/* Entry: 1052c0004; end: 1052c003b;  */

void FUN_1052c0004(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1052c003c; end: 1052c05e7;  */

void FUN_1052c003c(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  code **ppcVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  code **ppcVar7;
  code ***pppcVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  long extraout_x11;
  long extraout_x11_00;
  long *unaff_x19;
  long lVar10;
  long *plVar11;
  undefined8 in_register_00005008;
  code *pcStack_1d8;
  undefined8 auStack_1d0 [2];
  code **ppcStack_1c0;
  undefined8 uStack_1b8;
  code **ppcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  code **ppcStack_178;
  undefined8 uStack_170;
  code *apcStack_160 [3];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  code **ppcStack_120;
  undefined8 *puStack_118;
  byte abStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  code **ppcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  
  func_0x0001052c3afc();
  func_0x0001052c35b0();
  uStack_70 = extraout_x8;
  if ((bRam00000001136ba160 & 1) == 0) {
    iVar6 = 0x136ba160;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1052c1660();
      FUN_1052c0f9c(0);
      FUN_1052c0f9c(1);
      func_0x00010b9941f8(&ppcStack_a0);
      func_0x00010b993b40(&ppcStack_120,ppcStack_a0,0x113819540);
      if ((abStack_110[0] & 1) == 0) goto LAB_1052c051c;
      func_0x0001003adcc0(0x1136ba1b8,&ppcStack_120);
      func_0x0001003b12dc(&ppcStack_120);
      func_0x000104bdc2fc(&ppcStack_a0);
      ___cxa_guard_release(0x1136ba160);
    }
  }
  ppcVar7 = (code **)0x1136ba1c0;
  func_0x0001003b2110(auStack_148);
  apcStack_160[0] = FUN_1052c05e8;
  func_0x0001052c38bc();
  lVar10 = extraout_x11;
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001052c3548();
      lVar10 = extraout_x11_00;
    } while (extraout_w10 != 0);
  }
  pcStack_138 = FUN_1052c05e8;
  *(undefined8 *)(lVar10 + 8) = 0;
  *(undefined8 *)(lVar10 + 0x10) = 0;
  func_0x0001052c3a28();
  ppcStack_a0 = (code **)FUN_1052c2e50;
  ppuStack_98 = &PTR_FUN_1108758e0;
  pcStack_90 = FUN_1052c05e8;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_88 = param_1;
  func_0x0001052c3b38();
  ppcStack_178 = ppcVar7;
  func_0x0001052c361c();
  do {
    func_0x0001052c388c();
  } while (extraout_w10_00 != 0);
  ppcStack_a0 = ppcVar7;
  func_0x0001052c3b40(&ppcStack_120);
  func_0x0001052c3b24();
  func_0x000104bda3d0(&ppcStack_178);
  func_0x000104be5d84(&uStack_130);
  ppcStack_178 = (code **)FUN_1052c08d8;
  func_0x0001052c38bc();
  uStack_170 = param_1;
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10_01 != 0);
  }
  ppcVar7 = (code **)abStack_110;
  FUN_1052c07dc(ppcVar7,&ppcStack_178);
  pcStack_190 = FUN_1052c0924;
  func_0x0001052c38bc();
  if (extraout_x8_02 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10_02 != 0);
  }
  pcStack_138 = FUN_1052c0924;
  uStack_188 = 0;
  uStack_180 = 0;
  func_0x0001052c3a28();
  func_0x0001052c3934(FUN_1052c311c);
  func_0x0001052c3b38();
  ppcStack_1a8 = ppcVar7;
  func_0x0001052c361c();
  do {
    func_0x0001052c388c();
  } while (extraout_w10_03 != 0);
  ppcStack_a0 = ppcVar7;
  func_0x0001052c3b40(auStack_100);
  func_0x0001052c3b24();
  pppcVar8 = &ppcStack_1a8;
  func_0x000104bda3d0();
  func_0x0001052c399c();
  ppcStack_1a8 = (code **)FUN_1052c0bd8;
  func_0x0001052c38bc();
  if (extraout_x8_03 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10_04 != 0);
  }
  pcStack_138 = FUN_1052c0bd8;
  uStack_1a0 = 0;
  uStack_198 = 0;
  func_0x0001052c3a28();
  func_0x0001052c3934(FUN_1052c326c);
  func_0x0001052c3b38();
  ppcStack_1c0 = (code **)pppcVar8;
  func_0x0001052c361c();
  do {
    func_0x0001052c388c();
  } while (extraout_w10_05 != 0);
  ppcStack_a0 = (code **)pppcVar8;
  func_0x0001052c3b40(auStack_f0);
  func_0x0001052c3b24();
  func_0x000104bda3d0(&ppcStack_1c0);
  func_0x0001052c399c();
  ppcStack_a0 = (code **)FUN_1052c0de4;
  func_0x0001052c38bc();
  ppuStack_98 = (undefined **)param_1;
  if (extraout_x8_04 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10_06 != 0);
  }
  FUN_1052c07dc(auStack_e0,&ppcStack_a0);
  pcStack_138 = FUN_1052c0e5c;
  func_0x0001052c38bc();
  uStack_130 = param_1;
  if (extraout_x8_05 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10_07 != 0);
  }
  FUN_1052c07dc(auStack_d0,&pcStack_138);
  ppcStack_1c0 = (code **)FUN_1052c0ebc;
  func_0x0001052c38bc();
  uStack_1b8 = param_1;
  if (extraout_x8_06 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10_08 != 0);
  }
  FUN_1052c07dc(auStack_c0,&ppcStack_1c0);
  pcStack_1d8 = FUN_1052c0f34;
  func_0x0001052c38bc();
  auStack_1d0[0] = param_1;
  if (extraout_x8_07 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10_09 != 0);
  }
  FUN_1052c07dc(auStack_b0,&pcStack_1d8);
  func_0x000104bdb9bc(auStack_140,auStack_148,&ppcStack_120,8);
  lVar10 = 0x70;
  do {
    func_0x00010b9a8d98((long)&ppcStack_120 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar5 = lVar10 == -0x10;
  } while (!(bool)uVar5);
  func_0x000104be5d84(auStack_1d0);
  func_0x0001052c399c();
  func_0x000104be5d84(&uStack_130);
  func_0x0001052c3b5c();
  func_0x000104be5d84(&uStack_1a0);
  func_0x000104be5d84(&uStack_188);
  func_0x0001052c3a18(&ppcStack_178);
  func_0x0001052c3a18(apcStack_160);
  func_0x0001003b1f60(auStack_148);
  puVar9 = (undefined8 *)0x50;
  __Znwm();
  plVar11 = puVar9 + 1;
  *plVar11 = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_DAT_110875970;
  ppcVar7 = (code **)(puVar9 + 3);
  func_0x00010b9ace44(ppcVar7,auStack_140);
  puVar9[3] = &PTR_DAT_1108759c0;
  func_0x0001052c38bc();
  puVar9[9] = in_register_00005008;
  puVar9[8] = param_1;
  if (extraout_x8_08 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10_10 != 0);
  }
  if ((puVar9[5] == 0) || (uVar5 = *(long *)(puVar9[5] + 8) == -1, ppcVar3 = ppcVar7, (bool)uVar5))
  {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppcStack_120 = ppcVar7;
    puStack_118 = puVar9;
    func_0x0001003a8180(puVar9 + 4,&ppcStack_120);
    func_0x0001003a90c4(&ppcStack_120);
    ppcStack_a0 = ppcVar7;
    ppcVar3 = ppcVar7;
    if (puVar9[5] != 0) goto LAB_1052c0458;
  }
  else {
LAB_1052c0458:
    do {
      ppcStack_a0 = ppcVar3;
      func_0x0001052c3548();
      ppcVar3 = ppcStack_a0;
    } while (extraout_w10_11 != 0);
  }
  *unaff_x19 = (long)ppcVar7;
  FUN_1052c34b4(&ppcStack_a0);
  func_0x000104bdbf78(auStack_140);
  func_0x0001052c34f4(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_1052c051c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1052c0524);
  (*pcVar4)();
}



/* Entry: 1052c05e8; end: 1052c07db;  */

void FUN_1052c05e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [56];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*(long *)*param_1 + 0x10))(auStack_d0);
  func_0x0001052c36b8();
  func_0x0001052c3b94();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052c3508();
    } while (extraout_w11 != 0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052c16b4(auStack_40,auStack_e0,&uStack_50);
  FUN_1052c16dc(&uStack_30,auStack_40);
  FUN_1052c1970(auStack_40);
  FUN_1052c1970(&uStack_50);
  func_0x0001052c3b48();
  func_0x0001052c3b80(uStack_58);
  func_0x0001052c3954();
  func_0x0001052c3ab0(extraout_x8 + 0x40);
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_30;
  func_0x0001052c1700();
  if ((int)uVar1 == 0) {
    func_0x0001052c39ec();
    func_0x0001052c3ac0(&PTR_FUN_1108757b0);
    lVar3 = *(long *)(extraout_x9 + 0x88);
    *(undefined8 *)(extraout_x9 + 0x88) = uVar1;
    if (lVar3 != 0) {
      func_0x0001052c35dc();
    }
  }
  else {
    FUN_1052c16dc(&lStack_80,&uStack_30);
  }
  func_0x0001052c3874();
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x0001052c3548();
      } while (extraout_w10 != 0);
    }
    FUN_1052c1738(auStack_70);
    FUN_1052c1970(&lStack_90);
  }
  func_0x0001052c3bcc();
  FUN_1052c1970();
  puVar2 = auStack_70;
  FUN_1052c1b3c();
  func_0x0001052c38ac();
  func_0x0001052c3a0c();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001052c35c0();
  }
  func_0x0001052c3a48();
  func_0x0001052c3b9c();
  func_0x0001052c37fc();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052c3508();
    } while (extraout_w11_00 != 0);
  }
  func_0x0001052c372c();
  func_0x0001052c3b64();
  func_0x0001052c3840();
  func_0x0001052c391c();
  func_0x0001052c3848();
  return;
}



/* Entry: 1052c07dc; end: 1052c08d7;  */

void FUN_1052c07dc(undefined8 *****param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  int iVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uVar5;
  undefined1 auStack_e0 [16];
  undefined8 ****ppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  pppppuVar1 = param_1;
  func_0x0001052c35b0();
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uVar5 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_98 = uStack_b0;
  uStack_48 = extraout_x8;
  func_0x0001052c3a28();
  ppppuStack_78 = (undefined8 ****)FUN_1052c2fcc;
  ppuStack_70 = &PTR_FUN_110875900;
  uStack_60 = uStack_a8;
  uStack_68 = uStack_b0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_58 = uVar5;
  func_0x00010b9ac22c();
  ppppuStack_80 = pppppuVar1;
  func_0x0001052c3a98();
  do {
    func_0x0001052c388c();
  } while (extraout_w10 != 0);
  iVar4 = (int)&ppppuStack_78;
  ppppuStack_78 = pppppuVar1;
  func_0x00010b9a8ef8(param_1);
  func_0x000104bda388(&ppppuStack_78);
  pppppuVar2 = &ppppuStack_80;
  func_0x000104bda3d0();
  func_0x0001052c3b5c();
  func_0x0001052c34f4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    pppppuVar3 = pppppuVar2;
    func_0x0001052c36b0();
  }
  else {
    func_0x0001052c3a98();
    pppppuVar3 = pppppuVar1;
    __ZdlPv();
  }
  func_0x0001052c3a88();
  pcStack_b8 = FUN_1052c08d8;
  ppppuStack_d0 = pppppuVar1;
  ppppuStack_c8 = pppppuVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  (*(code *)(**pppppuVar3)[3])(auStack_e0);
  func_0x0001052c36b8();
  func_0x0001052c38e0();
  func_0x0001052c370c();
  func_0x0001052c37f4();
  return;
}



/* Entry: 1052c08d8; end: 1052c0923;  */

void FUN_1052c08d8(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(*(long *)*param_1 + 0x18))(auStack_30);
  func_0x0001052c36b8();
  func_0x0001052c38e0();
  func_0x0001052c370c();
  func_0x0001052c37f4();
  return;
}



/* Entry: 1052c0924; end: 1052c0bd7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1052c0924(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar5;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [24];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long alStack_78 [5];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar2 = param_2;
  func_0x0001052c363c();
  uVar3 = 1;
  func_0x00010b9abfa4(param_3,1);
  plVar5 = (long *)*param_2;
  func_0x000104bedf58(puVar2);
  func_0x000104bedf88(param_3);
  (**(code **)(*plVar5 + 0x20))(auStack_f0,plVar5,puVar2,uVar3 & 0xff,param_3 & 0xffffffffff);
  func_0x0001052c36b8();
  func_0x0001052c3b94();
  lStack_d8 = lStack_b8;
  if ((lStack_b8 != 0) && (*(long *)(lStack_b8 + 0x10) != 0)) {
    do {
      func_0x0001052c3508();
      lStack_d8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puStack_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  FUN_1052c21e4(alStack_78 + 3,auStack_100,alStack_78 + 1);
  FUN_1052c220c(&puStack_50,alStack_78 + 3);
  FUN_1052c2468(alStack_78 + 3);
  FUN_1052c2468(alStack_78 + 1);
  func_0x0001003b69cc(alStack_78);
  func_0x0001003b6c18(alStack_78 + 3,alStack_78[0]);
  lStack_88 = alStack_78[0];
  lStack_90 = lStack_d8;
  lStack_d8 = 0;
  alStack_78[0] = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  func_0x0001052c3ab0(puStack_50 + 0xb);
  __ZNSt3__15mutex4lockEv();
  puVar2 = puStack_50;
  func_0x0001052c2230();
  if ((int)puVar2 == 0) {
    func_0x0001052c39ec();
    lVar1 = lStack_88;
    lVar4 = lStack_90;
    *puVar2 = &PTR_FUN_110875850;
    lStack_90 = 0;
    lStack_88 = 0;
    puVar2[2] = lVar1;
    puVar2[1] = lVar4;
    lVar4 = puStack_50[0x14];
    puStack_50[0x14] = puVar2;
    if (lVar4 != 0) {
      func_0x0001052c35dc();
    }
  }
  else {
    FUN_1052c220c(&lStack_a0,&puStack_50);
  }
  func_0x0001052c3874();
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x0001052c3548();
      } while (extraout_w10 != 0);
    }
    FUN_1052c2268(&lStack_90);
    FUN_1052c2468(&lStack_b0);
  }
  uStack_c8 = alStack_78[4];
  uStack_d0 = alStack_78[3];
  alStack_78[3] = 0;
  alStack_78[4] = 0;
  FUN_1052c2468(&lStack_a0);
  func_0x0001052c2868(&lStack_90);
  func_0x0001003b6c64(alStack_78 + 3);
  lVar4 = alStack_78[0];
  alStack_78[0] = 0;
  if (lVar4 != 0) {
    func_0x0001052c35c0();
  }
  FUN_1052c2468(&puStack_50);
  func_0x0001052c3b9c();
  func_0x0001052c37fc();
  if ((lStack_b8 != 0) && (*(long *)(lStack_b8 + 0x10) != 0)) {
    do {
      func_0x0001052c3508();
    } while (extraout_w11_00 != 0);
  }
  func_0x00010b9a8f78(param_1,&puStack_50);
  func_0x0001052c3914();
  func_0x0001052c3840();
  func_0x0001052c3924();
  func_0x0001052c39b4();
  return;
}



/* Entry: 1052c0bd8; end: 1052c0de3;  */

void FUN_1052c0bd8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *unaff_x20;
  long *plVar4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [56];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001052c3afc();
  func_0x0001052c363c();
  plVar4 = (long *)*unaff_x20;
  func_0x000104bedf58();
  (**(code **)(*plVar4 + 0x28))(auStack_d0,plVar4,param_1,param_2 & 0xff);
  func_0x0001052c36b8();
  func_0x0001052c3b94();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052c3508();
    } while (extraout_w11 != 0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052c2884(auStack_40,auStack_e0,&uStack_50);
  FUN_1052c28ac(&uStack_30,auStack_40);
  FUN_1052c2af4(auStack_40);
  FUN_1052c2af4(&uStack_50);
  func_0x0001052c3b48();
  func_0x0001052c3b80(uStack_58);
  func_0x0001052c3954();
  func_0x0001052c3ab0(extraout_x8 + 0x58);
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_30;
  func_0x0001052c28d0();
  if ((int)uVar1 == 0) {
    func_0x0001052c39ec();
    func_0x0001052c3ac0(&PTR_FUN_1108758a0);
    lVar3 = *(long *)(extraout_x9 + 0xa0);
    *(undefined8 *)(extraout_x9 + 0xa0) = uVar1;
    if (lVar3 != 0) {
      func_0x0001052c35dc();
    }
  }
  else {
    FUN_1052c28ac(&lStack_80,&uStack_30);
  }
  func_0x0001052c3874();
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x0001052c3548();
      } while (extraout_w10 != 0);
    }
    FUN_1052c2908(auStack_70);
    FUN_1052c2af4(&lStack_90);
  }
  func_0x0001052c3bcc();
  FUN_1052c2af4();
  puVar2 = auStack_70;
  FUN_1052c2cbc();
  func_0x0001052c38ac();
  func_0x0001052c3a0c();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001052c35c0();
  }
  func_0x0001052c3a50();
  func_0x0001052c3b9c();
  func_0x0001052c37fc();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052c3508();
    } while (extraout_w11_00 != 0);
  }
  func_0x0001052c372c();
  func_0x0001052c3b64();
  func_0x0001052c3840();
  func_0x0001052c392c();
  func_0x0001052c39c4();
  return;
}



/* Entry: 1052c0de4; end: 1052c0e5b;  */

void FUN_1052c0de4(void)

{
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001052c3afc();
  func_0x0001052c363c();
  func_0x000104bef110(auStack_48);
  func_0x0001052c3984();
  func_0x0001006573e4(auStack_48);
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001052c38e0();
  func_0x0001052c370c();
  func_0x0001052c3814();
  return;
}



/* Entry: 1052c0e5c; end: 1052c0ebb;  */

void FUN_1052c0e5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_30 [16];
  
  puVar1 = param_1;
  func_0x0001052c363c();
  plVar2 = (long *)*param_1;
  func_0x00010b9a9588();
  (**(code **)(*plVar2 + 0x38))(auStack_30,plVar2,puVar1);
  func_0x0001052c36b8();
  func_0x0001052c3b88();
  func_0x0001052c370c();
  func_0x0001052c37f4();
  return;
}



/* Entry: 1052c0ebc; end: 1052c0f33;  */

void FUN_1052c0ebc(void)

{
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001052c3afc();
  func_0x0001052c363c();
  FUN_1052c5390(auStack_48);
  func_0x0001052c3984();
  func_0x000100100fec(auStack_48);
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001052c38e0();
  func_0x0001052c370c();
  func_0x0001052c3814();
  return;
}



/* Entry: 1052c0f34; end: 1052c0f9b;  */

void FUN_1052c0f34(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_30 [16];
  
  puVar1 = param_1;
  func_0x0001052c363c();
  plVar2 = (long *)*param_1;
  func_0x000104bedf58();
  (**(code **)(*plVar2 + 0x48))(auStack_30,plVar2,puVar1,param_2 & 0xff);
  func_0x0001052c36b8();
  func_0x0001052c3b88();
  func_0x0001052c370c();
  func_0x0001052c37f4();
  return;
}



/* Entry: 1052c0f9c; end: 1052c15c3;  */

void FUN_1052c0f9c(ulong param_1,ulong param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x0001052c35b0();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136ba158);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136ba158) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052c0ff0;
  if ((bRam00000001136ba168 & 1) == 0) goto LAB_1052c1008;
  while( true ) {
    func_0x000108b80888(0x1136ba1c8,param_1);
    param_2 = param_1;
LAB_1052c0ff0:
    param_1 = param_2;
    func_0x0001052c34dc();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052c1008:
    iVar2 = 0x136ba168;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052c1660();
      func_0x0001003a83dc(&uStack_170,"fetchBadge");
      if ((bRam00000001136ba170 & 1) == 0) {
        iVar2 = 0x136ba170;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          if ((bRam00000001136ba178 & 1) == 0) {
            uVar5 = 0x1136ba178;
            ___cxa_guard_acquire();
            if ((int)uVar5 != 0) {
              FUN_1052bf458();
              FUN_1052c2da4();
              func_0x00010b9913cc(uVar5,0x1136ba1f8);
              ___cxa_guard_release(0x1136ba178);
            }
          }
          func_0x0001052c39fc(0x1136ba1d8);
          ___cxa_guard_release(0x1136ba170);
        }
      }
      func_0x0001052c3b6c(auStack_180,0x1136ba1d8);
      uStack_f8 = uStack_170;
      uStack_170 = 0;
      func_0x0001003aef98(auStack_f0,auStack_180);
      func_0x0001003a83dc(&uStack_188,"syncNotificationCenter");
      FUN_1052c2cd8();
      func_0x0001052c3af0();
      func_0x0001052c3b6c(auStack_198);
      uStack_e0 = uStack_188;
      uStack_188 = 0;
      func_0x0001003aef98(auStack_d8,auStack_198);
      pcVar3 = "fetchNotifications";
      func_0x0001003a83dc(&uStack_1a0,"fetchNotifications");
      if ((bRam00000001136ba198 & 1) == 0) {
        pcVar3 = (char *)0x1136ba198;
        ___cxa_guard_acquire();
        if ((int)pcVar3 != 0) {
          if ((bRam00000001136ba1a0 & 1) == 0) {
            iVar2 = 0x136ba1a0;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              FUN_1052c2df4();
              FUN_1052c2da4();
              func_0x0001052c3b2c(0x1136ba238);
              ___cxa_guard_release(0x1136ba1a0);
            }
          }
          func_0x0001052c39fc(0x1136ba228);
          pcVar3 = (char *)0x1136ba198;
          ___cxa_guard_release(0x1136ba198);
        }
      }
      func_0x000104bef438();
      puVar4 = auStack_118;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x000104bef494();
      func_0x0001003adcc0(auStack_108,puVar4);
      func_0x000104bdbd48(auStack_1b0,0x1136ba228,auStack_118,2);
      uStack_c8 = uStack_1a0;
      uStack_1a0 = 0;
      func_0x0001003aef98(auStack_c0,auStack_1b0);
      pcVar3 = "fetchBadgedItemSummary";
      func_0x0001003a83dc(&uStack_1b8,"fetchBadgedItemSummary");
      if ((bRam00000001136ba1a8 & 1) == 0) {
        pcVar3 = (char *)0x1136ba1a8;
        ___cxa_guard_acquire();
        if ((int)pcVar3 != 0) {
          if ((bRam00000001136ba1b0 & 1) == 0) {
            iVar2 = 0x136ba1b0;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              FUN_1052bf6b4();
              FUN_1052c2da4();
              func_0x0001052c3b2c(0x1136ba258);
              ___cxa_guard_release(0x1136ba1b0);
            }
          }
          func_0x0001052c39fc(0x1136ba248);
          pcVar3 = (char *)0x1136ba1a8;
          ___cxa_guard_release(0x1136ba1a8);
        }
      }
      func_0x000104bef438();
      func_0x0001003adcc0(auStack_128,pcVar3);
      func_0x0001052c390c(auStack_1c8,0x1136ba248,auStack_128);
      uStack_b0 = uStack_1b8;
      uStack_1b8 = 0;
      func_0x0001003aef98(auStack_a8,auStack_1c8);
      pcVar3 = "clearNotificationBadge";
      func_0x0001003a83dc(&uStack_1d0,"clearNotificationBadge");
      FUN_1052c2cd8();
      func_0x000104bef650();
      func_0x0001003adcc0(auStack_138,pcVar3);
      func_0x0001052c3af0();
      func_0x0001052c390c(auStack_1e0);
      uStack_98 = uStack_1d0;
      uStack_1d0 = 0;
      func_0x0001003aef98(auStack_90,auStack_1e0);
      pcVar3 = "clearNotification";
      func_0x0001003a83dc(&uStack_1e8,"clearNotification");
      FUN_1052c2cd8();
      func_0x000104bef5f8();
      func_0x0001003adcc0(auStack_148,pcVar3);
      func_0x0001052c3af0();
      func_0x0001052c390c(auStack_1f8);
      uStack_80 = uStack_1e8;
      uStack_1e8 = 0;
      func_0x0001003aef98(auStack_78,auStack_1f8);
      pcVar3 = "enterNotificationCenter";
      func_0x0001003a83dc(&uStack_200,"enterNotificationCenter");
      FUN_1052c2cd8();
      FUN_1052c54b8();
      func_0x0001003adcc0(auStack_158,pcVar3);
      func_0x0001052c3af0();
      func_0x0001052c390c(auStack_210);
      uStack_68 = uStack_200;
      uStack_200 = 0;
      func_0x0001003aef98(auStack_60,auStack_210);
      pcVar3 = "exitNotificationCenter";
      func_0x0001003a83dc(&uStack_218,"exitNotificationCenter");
      FUN_1052c2cd8();
      func_0x000104bef438();
      func_0x0001003adcc0(auStack_168,pcVar3);
      func_0x0001052c3af0();
      func_0x0001052c390c(auStack_228);
      uStack_50 = uStack_218;
      uStack_218 = 0;
      func_0x0001003aef98(auStack_48,auStack_228);
      func_0x000104bdbd44(0x1136ba1c8,0x113819540,1,&uStack_f8,8);
      lVar6 = 0xa8;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar6 + -8);
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x18);
      func_0x0001052c3704(auStack_228);
      func_0x0001052c3704(auStack_168);
      func_0x0001003a8c94(&uStack_218);
      func_0x0001052c3704(auStack_210);
      func_0x0001052c3704(auStack_158);
      func_0x0001003a8c94(&uStack_200);
      func_0x0001052c3704(auStack_1f8);
      func_0x0001052c3704(auStack_148);
      func_0x0001003a8c94(&uStack_1e8);
      func_0x0001052c3704(auStack_1e0);
      func_0x0001052c3704(auStack_138);
      func_0x0001003a8c94(&uStack_1d0);
      func_0x0001052c3704(auStack_1c8);
      func_0x0001052c3704(auStack_128);
      func_0x0001003a8c94(&uStack_1b8);
      func_0x0001052c3704(auStack_1b0);
      lVar6 = 0x18;
      do {
        func_0x0001003adc18(auStack_118 + lVar6);
        lVar6 = lVar6 + -0x10;
        in_ZR = lVar6 == -8;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_1a0);
      func_0x0001052c3704(auStack_198);
      func_0x0001003a8c94(&uStack_188);
      func_0x0001052c3704(auStack_180);
      func_0x0001003a8c94(&uStack_170);
      ___cxa_guard_release(0x1136ba168);
    }
  }
  return;
}



/* Entry: 1052c15c4; end: 1052c165f;  */

undefined8 FUN_1052c15c4(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819538 & 1) == 0) {
    iVar4 = 0x13819538;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052c1660();
      lStack_20 = lRam0000000113819540;
      if (lRam0000000113819540 != 0) {
        piVar1 = (int *)(lRam0000000113819540 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113819528,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113819538);
    }
  }
  return 0x113819528;
}


