/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052a8030; end: 1052a809f;  */

void FUN_1052a8030(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 1052a80a0; end: 1052a80eb;  */

void FUN_1052a80a0(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a80ec; end: 1052a8217;  */

void FUN_1052a80ec(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 1052a8218; end: 1052a823b;  */

void FUN_1052a8218(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a823c; end: 1052a824f;  */

void FUN_1052a823c(void)

{
  FUN_1052a8328();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a8250; end: 1052a8263;  */

void FUN_1052a8250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052a8258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052a8264; end: 1052a8277;  */

void FUN_1052a8264(void)

{
  FUN_1052a8288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a8278; end: 1052a8287;  */

undefined1  [16] FUN_1052a8278(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052a8288; end: 1052a8327;  */

void FUN_1052a8288(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_110874b08;
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
  FUN_1052a0348(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052a8328; end: 1052a8337;  */

void FUN_1052a8328(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110874ab8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052a8338; end: 1052a8363;  */

long * FUN_1052a8338(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}



/* Entry: 1052a8364; end: 1052a841f;  */

undefined8 FUN_1052a8364(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  if ((bRam0000000113846a30 & 1) == 0) {
    iVar1 = 0x13846a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113846a28 = 1;
      uRam0000000113846a20 = 0;
      ___cxa_guard_release(0x113846a30);
    }
  }
  return 0x113846a20;
}



/* Entry: 1052a8420; end: 1052a84fb;  */

void FUN_1052a8420(ulong param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  FUN_1052b36d4();
  bVar2 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9ca0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9ca0) = 1;
  if ((bVar2 & 1) != 0) {
    return;
  }
  if ((bRam00000001136b9ca8 & 1) == 0) {
    iVar6 = 0x136b9ca8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      if ((bRam00000001136b9cb8 & 1) == 0) {
        iVar6 = 0x136b9cb8;
        ___cxa_guard_acquire();
        if (iVar6 != 0) {
          func_0x0001003a83dc(0x1136b9cb0,"_djinni_interface_ContentBundleFactory");
          ___cxa_guard_release(0x1136b9cb8);
        }
      }
      func_0x000104bdbd44(0x1136b9cc0,0x1136b9cb0,1,0,0);
      ___cxa_guard_release(0x1136b9ca8);
    }
  }
  lVar5 = 0x1136b9cc0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b9941f8(&uStack_48);
  if ((param_1 & 1) == 0) {
    func_0x000107c31000(uStack_48);
    iVar6 = (int)lVar5;
  }
  else {
    uStack_50 = uStack_48;
    func_0x000108b80b74(auStack_40,&uStack_50,0x1136b9cc0);
    func_0x000107c30f50();
    lStack_88 = *(long *)(lVar5 + 0x10);
    if (lStack_88 != 0) {
      piVar1 = (int *)(lStack_88 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_80 = 0xff00;
    func_0x000107c30fa8(auStack_78,&lStack_88);
    func_0x000107c31030(auStack_68,auStack_78);
    func_0x000107c27900(auStack_70);
    func_0x000107c278f4(&lStack_88);
    puVar7 = auStack_68;
    func_0x00010b994158(uStack_48,puVar7,auStack_38);
    iVar6 = (int)puVar7;
    func_0x000107c27900(auStack_60);
    func_0x000107c2a668(auStack_40);
  }
  func_0x000104bdc2fc(&uStack_48);
  func_0x000108b80b80(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9a96d0(&lStack_c8);
  plStack_e0 = *(long **)(lStack_c8 + 0x18);
  if (plStack_e0 != (long *)0x0) {
    (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
  }
  lStack_d0 = *(long *)(lStack_c8 + 0x28);
  lStack_d8 = *(long *)(lStack_c8 + 0x20);
  func_0x000107c27d7c(extraout_x8,lStack_d8,lStack_d8 + lStack_d0);
  func_0x000107c27900(&plStack_e0);
  func_0x000104bdb38c(&lStack_c8);
  return;
}



/* Entry: 1052a84fc; end: 1052a88e3;  */

undefined1 * FUN_1052a84fc(long *param_1)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [16];
  undefined **appuStack_130 [3];
  undefined ***pppuStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x0001052a96a4();
  func_0x0001003a83dc(auStack_148,"_djinni_interface_ContentBundleFactory_statics");
  pcVar2 = "createFromContentObject";
  func_0x0001003a83dc(&uStack_150,"createFromContentObject");
  FUN_1052b39bc();
  func_0x000108b80a94();
  func_0x0001003adcc0(auStack_c0,pcVar2);
  func_0x0001052a95d8(auStack_160);
  uStack_b0 = uStack_150;
  uStack_150 = 0;
  func_0x0001003aef98(auStack_a8,auStack_160);
  pcVar2 = "createWithStreamingProtocolAllowlist";
  func_0x0001003a83dc(&uStack_168,"createWithStreamingProtocolAllowlist");
  FUN_1052b39bc();
  pcVar3 = pcVar2;
  func_0x000108b80a94();
  puVar4 = auStack_e0;
  func_0x0001003adcc0(puVar4,pcVar3);
  FUN_1052a88e4();
  func_0x0001003adcc0(auStack_d0,puVar4);
  func_0x000104bdbd48(auStack_178,pcVar2,auStack_e0,2);
  uStack_98 = uStack_168;
  uStack_168 = 0;
  func_0x0001003aef98(auStack_90,auStack_178);
  pcVar2 = "createFromURL";
  func_0x0001003a83dc(&uStack_180,"createFromURL");
  FUN_1052b39bc();
  func_0x000104bdbd7c();
  func_0x0001003adcc0(auStack_f0,pcVar2);
  func_0x0001052a95d8(auStack_190);
  uStack_80 = uStack_180;
  uStack_180 = 0;
  func_0x0001003aef98(auStack_78,auStack_190);
  pcVar2 = "createFromLocalContent";
  func_0x0001003a83dc(&uStack_198,"createFromLocalContent");
  FUN_1052b39bc();
  FUN_1052a9fd8();
  func_0x0001003adcc0(auStack_100,pcVar2);
  func_0x0001052a95d8(auStack_1a8);
  uStack_68 = uStack_198;
  uStack_198 = 0;
  func_0x0001003aef98(auStack_60,auStack_1a8);
  pcVar2 = "createFromLocalCacheKey";
  func_0x0001003a83dc(&uStack_1b0,"createFromLocalCacheKey");
  FUN_1052b39bc();
  func_0x000104bdbd7c();
  func_0x0001003adcc0(auStack_110,pcVar2);
  func_0x0001052a95d8(auStack_1c0);
  uStack_50 = uStack_1b0;
  uStack_1b0 = 0;
  func_0x0001003aef98(auStack_48,auStack_1c0);
  func_0x000104bdbd44(auStack_140,auStack_148,0,&uStack_b0,5);
  lVar6 = 0x60;
  do {
    func_0x0001003b1c5c(auStack_a8 + lVar6 + -8);
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != -0x18);
  func_0x0001052a95e4(auStack_1c0);
  func_0x0001052a95e4(auStack_110);
  func_0x0001003a8c94(&uStack_1b0);
  func_0x0001052a95e4(auStack_1a8);
  func_0x0001052a95e4(auStack_100);
  func_0x0001003a8c94(&uStack_198);
  func_0x0001052a95e4(auStack_190);
  func_0x0001052a95e4(auStack_f0);
  func_0x0001003a8c94(&uStack_180);
  func_0x0001052a95e4(auStack_178);
  lVar6 = 0x18;
  do {
    func_0x0001003adc18(auStack_e0 + lVar6);
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -8);
  func_0x0001003a8c94(&uStack_168);
  func_0x0001052a95e4(auStack_160);
  func_0x0001052a95e4(auStack_c0);
  func_0x0001003a8c94(&uStack_150);
  func_0x0001003a8c94(auStack_148);
  pppuStack_118 = appuStack_130;
  appuStack_130[0] = &PTR_FUN_110874b60;
  func_0x000108b807f0(auStack_e0,auStack_140,appuStack_130);
  func_0x0001006393ec(appuStack_130);
  func_0x0001003b2110(auStack_178,auStack_d8);
  FUN_1052a8940(&uStack_b0,FUN_1052a8a10);
  FUN_1052a8940(auStack_a0,FUN_1052a8a64);
  FUN_1052a8940(auStack_90,FUN_1052a8b18);
  FUN_1052a8940(&uStack_80,FUN_1052a8b68);
  FUN_1052a8940(auStack_70,FUN_1052a8bc0);
  func_0x000104bdb9bc(auStack_c0,auStack_178,&uStack_b0,5);
  func_0x00010b9a8f60(auStack_160,auStack_c0);
  lVar6 = *param_1;
  func_0x0001003a83dc(auStack_190,"ContentBundleFactory");
  func_0x000104bd9bd4(lVar6 + 0x10,auStack_190);
  puVar4 = auStack_160;
  func_0x00010b9a9020();
  func_0x0001003a8c94(auStack_190);
  func_0x00010b9a8d98(auStack_160);
  func_0x000104bdbf78(auStack_c0);
  lVar6 = 0x40;
  do {
    func_0x00010b9a8d98(auStack_a8 + lVar6 + -8);
    iVar5 = (int)puVar4;
    lVar6 = lVar6 + -0x10;
    uVar1 = lVar6 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_178);
  puVar4 = auStack_d8;
  func_0x0001003adc18(puVar4);
  func_0x0001052a95e4(auStack_140);
  func_0x0001052a9670();
  if ((bool)uVar1) {
    return puVar4;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc428 & 1) == 0) {
    iVar5 = 0x130cc428;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_1052a9340();
      func_0x00010b990868(0x1130cc418);
      ___cxa_guard_release(0x1130cc428);
    }
  }
  return (undefined1 *)0x1130cc418;
}



/* Entry: 1052a88e4; end: 1052a893f;  */

undefined8 FUN_1052a88e4(void)

{
  int iVar1;
  
  if ((bRam00000001130cc428 & 1) == 0) {
    iVar1 = 0x130cc428;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052a9340();
      func_0x00010b990868(0x1130cc418);
      ___cxa_guard_release(0x1130cc428);
    }
  }
  return 0x1130cc418;
}



/* Entry: 1052a8940; end: 1052a8a0f;  */

void FUN_1052a8940(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  code *pcVar4;
  code **ppcVar5;
  int iVar6;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  
  ppcVar5 = &pcStack_70;
  func_0x0001052a96a4();
  pcVar4 = (code *)0x40;
  __Znwm();
  pcStack_68 = FUN_1052a944c;
  ppuStack_60 = &PTR_FUN_110874bd0;
  uStack_58 = param_2;
  func_0x00010b9ac22c();
  pcStack_70 = pcVar4;
  func_0x0001052a9650();
  pcVar1 = pcVar4 + 8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *(long *)pcVar1 = *(long *)pcVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  iVar6 = (int)&pcStack_68;
  pcStack_68 = pcVar4;
  func_0x00010b9a8ef8(param_1);
  func_0x000104bda388(&pcStack_68);
  func_0x000104bda3d0();
  func_0x0001052a9670();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume(ppcVar5);
  }
  else {
    func_0x0001052a9650();
    __ZdlPv(pcVar4);
  }
  func_0x000104bd46a0(ppcVar5);
  pcStack_78 = FUN_1052a8a10;
  puStack_90 = (undefined1 *)ppcVar5;
  pcStack_88 = pcVar4;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001052a95b4();
  func_0x000108b8099c(auStack_b8);
  func_0x00010b151eb0(auStack_a0,auStack_b8);
  func_0x000100100fec(auStack_b8);
  func_0x0001052a95cc();
  func_0x0001052a95ec();
  return;
}



/* Entry: 1052a8a10; end: 1052a8a63;  */

void FUN_1052a8a10(void)

{
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  func_0x0001052a95b4();
  func_0x000108b8099c(auStack_48);
  func_0x00010b151eb0(auStack_30,auStack_48);
  func_0x000100100fec(auStack_48);
  func_0x0001052a95cc();
  func_0x0001052a95ec();
  return;
}



/* Entry: 1052a8a64; end: 1052a8b17;  */

void FUN_1052a8a64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  uVar1 = param_1;
  func_0x0001052a95b4();
  func_0x00010b9abfa4(param_1,1);
  func_0x000108b8099c(auStack_58,uVar1);
  FUN_1052a8f44(auStack_70,param_1);
  func_0x00010b151eec(auStack_40,auStack_58,auStack_70);
  FUN_1052a92cc(auStack_70);
  func_0x000100100fec(auStack_58);
  FUN_1052a8c10(auStack_40);
  func_0x00010529fde0(auStack_40);
  return;
}



/* Entry: 1052a8b18; end: 1052a8b67;  */

void FUN_1052a8b18(void)

{
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  func_0x0001052a95b4();
  func_0x000104bdbf60(auStack_48);
  func_0x00010b152000(auStack_30,auStack_48);
  func_0x0001052a9614();
  func_0x0001052a95cc();
  func_0x0001052a95ec();
  return;
}



/* Entry: 1052a8b68; end: 1052a8bbf;  */

void FUN_1052a8b68(void)

{
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [16];
  
  func_0x0001052a95b4();
  FUN_1052a9f64(auStack_50);
  func_0x00010b15218c(auStack_30,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  func_0x0001052a95cc();
  func_0x0001052a95ec();
  return;
}



/* Entry: 1052a8bc0; end: 1052a8c0f;  */

void FUN_1052a8bc0(void)

{
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  func_0x0001052a95b4();
  func_0x000104bdbf60(auStack_48);
  func_0x00010b152260(auStack_30,auStack_48);
  func_0x0001052a9614();
  func_0x0001052a95cc();
  func_0x0001052a95ec();
  return;
}



/* Entry: 1052a8c10; end: 1052a8cf3;  */

void FUN_1052a8c10(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_29;
  long lStack_28;
  
  func_0x000108b80734(*param_2,&UNK_10dd9284e);
  lVar4 = *param_2;
  if (lVar4 == 0) {
    func_0x0001052a9660();
  }
  else {
    ___dynamic_cast(lVar4,&PTR_DAT_110874bf0,&PTR_DAT_1107e7dd0,0xfffffffffffffffe);
    if (lVar4 == 0) {
      FUN_1052a8cf4(param_1,&uStack_29,param_2);
    }
    else {
      lStack_28 = *(long *)(lVar4 + 8);
      if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
        plVar1 = (long *)(*(long *)(lStack_28 + 0x10) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001052a9688();
      func_0x000104be7e54(&lStack_28);
    }
  }
  return;
}



/* Entry: 1052a8cf4; end: 1052a8e2b;  */

void FUN_1052a8cf4(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long alStack_58 [2];
  int iStack_48;
  long lStack_40;
  long lStack_38;
  
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  alStack_58[0] = *param_2;
  lVar3 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,alStack_58);
  if (lVar3 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar3 + 0x28);
    func_0x000104bf7d80(alStack_58,lVar3 + 0x18);
    if (alStack_58[0] != 0) {
      if (*(long *)(alStack_58[0] + 0x10) != 0) {
        plVar4 = (long *)(*(long *)(alStack_58[0] + 0x10) + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_38 = alStack_58[0];
      func_0x0001052a9688();
      func_0x000104be7e54(&lStack_38);
      plVar4 = alStack_58;
      goto LAB_1052a8e10;
    }
    iVar5 = iVar5 + 1;
    func_0x000104be7e54(alStack_58);
  }
  FUN_1052b2f4c(&lStack_38,param_2);
  iStack_48 = iVar5;
  if (lVar3 == 0) {
    lStack_40 = *param_2;
    func_0x000104bf822c(alStack_58,lStack_38);
    FUN_1052a8e2c(0x11328ad40,&lStack_40,alStack_58);
  }
  else {
    func_0x000104bf822c(alStack_58,lStack_38);
    func_0x000104bf7db8(lVar3 + 0x18,alStack_58);
  }
  func_0x000104bdc2a0(alStack_58);
  func_0x0001052a9688();
  plVar4 = &lStack_38;
LAB_1052a8e10:
  func_0x000104be7e54(plVar4);
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  return;
}



/* Entry: 1052a8e2c; end: 1052a8e5b;  */

void FUN_1052a8e2c(void)

{
  func_0x0001052a8e44();
  return;
}



/* Entry: 1052a8e5c; end: 1052a8ebf;  */

undefined1  [16] FUN_1052a8e5c(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_38 [3];
  
  FUN_1052a8ec0(auStack_38);
  uVar1 = auStack_38[0];
  func_0x000104bf7e44(param_1);
  if ((uVar1 & 1) != 0) {
    auStack_38[0] = 0;
  }
  func_0x000104bdc220(auStack_38);
  auVar2._8_8_ = uVar1 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1052a8ec0; end: 1052a8f43;  */

void FUN_1052a8ec0(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = *param_3;
  uVar2 = *param_4;
  puVar1[4] = param_4[1];
  puVar1[3] = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_4 + 2);
  param_2 = param_2 + 0x18;
  func_0x000104bf7ea8();
  puVar1[1] = param_2;
  return;
}



/* Entry: 1052a8f44; end: 1052a8fe7;  */

void FUN_1052a8f44(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uStack_34;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((char)param_2[1] == '\t') && (lVar3 = *param_2, lVar3 != 0)) {
    FUN_1052a8fe8(param_1,*(undefined8 *)(lVar3 + 0x10));
    lVar2 = lVar3 + 0x18;
    for (uVar4 = 0; uVar4 < *(ulong *)(lVar3 + 0x10); uVar4 = uVar4 + 1) {
      uVar1 = (int)lVar2;
      func_0x00010b9a9518();
      uStack_34 = uVar1;
      FUN_1052a91c0(param_1,&uStack_34);
      lVar2 = lVar2 + 0x10;
    }
  }
  return;
}



/* Entry: 1052a8fe8; end: 1052a9053;  */

void FUN_1052a8fe8(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)(param_1[2] - *param_1 >> 2) < param_2) {
    if ((ulong)param_2 >> 0x3e != 0) {
      FUN_1052a9054();
      func_0x0001052a9624();
      FUN_1052a9170();
      func_0x0001052a95f4();
      pcVar1 = "vector";
      func_0x000104bd47e8();
      lVar2 = param_2[1] - (*(long *)((long)pcVar1 + 8) - *(long *)pcVar1);
      _memcpy(lVar2);
      param_2[1] = lVar2;
      lVar2 = *(long *)pcVar1;
      *(long *)((long)pcVar1 + 8) = lVar2;
      *(undefined8 *)pcVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 8);
      *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
      param_2[2] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 0x10);
      *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_1052a90e8(auStack_48,param_2,param_1[1] - *param_1 >> 2);
    func_0x0001052a9690();
    FUN_1052a9170(auStack_48);
  }
  return;
}



/* Entry: 1052a9054; end: 1052a9067;  */

void FUN_1052a9054(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = "vector";
  func_0x000104bd47e8();
  lVar2 = param_2[1] - (*(long *)((long)pcVar1 + 8) - *(long *)pcVar1);
  _memcpy(lVar2);
  param_2[1] = lVar2;
  lVar2 = *(long *)pcVar1;
  *(long *)((long)pcVar1 + 8) = lVar2;
  *(undefined8 *)pcVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 8);
  *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
  param_2[2] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 0x10);
  *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1052a9068; end: 1052a90e7;  */

void FUN_1052a9068(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
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



/* Entry: 1052a90e8; end: 1052a9153;  */

long * FUN_1052a90e8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001052a9130();
  }
  lVar1 = param_4 + param_3 * 4;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 4;
  return param_1;
}



/* Entry: 1052a9154; end: 1052a916f;  */

long * FUN_1052a9154(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_2 << 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1052a919c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1052a9170; end: 1052a919b;  */

long * FUN_1052a9170(long *param_1)

{
  FUN_1052a919c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1052a919c; end: 1052a91bf;  */

void FUN_1052a919c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1052a91c0; end: 1052a9203;  */

undefined4 * FUN_1052a91c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_1052a9204();
  }
  *(undefined4 **)(param_1 + 2) = puVar2;
  return puVar2 + -1;
}



/* Entry: 1052a9204; end: 1052a928b;  */

long FUN_1052a9204(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  plVar1 = param_1;
  FUN_1052a928c(param_1,(param_1[1] - *param_1 >> 2) + 1);
  FUN_1052a90e8(auStack_48,plVar1,param_1[1] - *param_1 >> 2,param_1 + 2);
  *puStack_38 = *param_2;
  puStack_38 = puStack_38 + 1;
  func_0x0001052a9690();
  lVar2 = param_1[1];
  FUN_1052a9170(auStack_48);
  return lVar2;
}



/* Entry: 1052a928c; end: 1052a92cb;  */

long * FUN_1052a928c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plStack_38;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 1);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x3fffffffffffffff;
    }
    return plVar1;
  }
  FUN_1052a9054();
  plStack_38 = param_1;
  FUN_1052a9300(&plStack_38);
  return param_1;
}



/* Entry: 1052a92cc; end: 1052a92ff;  */

undefined8 FUN_1052a92cc(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1052a9300(&uStack_28);
  return param_1;
}



/* Entry: 1052a9300; end: 1052a9317;  */

void FUN_1052a9300(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1052a9318; end: 1052a933f;  */

long FUN_1052a9318(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052a9340; end: 1052a9397;  */

undefined8 FUN_1052a9340(void)

{
  int iVar1;
  
  if ((bRam00000001130cc440 & 1) == 0) {
    iVar1 = 0x130cc440;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc430);
      ___cxa_guard_release(0x1130cc440);
    }
  }
  return 0x1130cc430;
}



/* Entry: 1052a9398; end: 1052a939f;  */

void FUN_1052a9398(void)

{
  return;
}



/* Entry: 1052a93a0; end: 1052a93c3;  */

void FUN_1052a93a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110874b60;
  return;
}



/* Entry: 1052a93c4; end: 1052a93eb;  */

void FUN_1052a93c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110874b60;
  return;
}



/* Entry: 1052a93ec; end: 1052a9407;  */

/* WARNING: Removing unreachable block (ram,0x000108b8095c) */

void FUN_1052a93ec(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined1 in_ZR;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  FUN_1052a8420(0);
  FUN_1052b36d4();
  bVar4 = bRam00000001136b9ca1;
  bRam00000001136b9ca1 = 1;
  if ((bVar4 & 1) != 0) {
    return;
  }
  if ((bRam00000001136b9ca8 & 1) == 0) {
    iVar6 = 0x136b9ca8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      if ((bRam00000001136b9cb8 & 1) == 0) {
        iVar6 = 0x136b9cb8;
        ___cxa_guard_acquire();
        if (iVar6 != 0) {
          func_0x0001003a83dc(0x1136b9cb0,"_djinni_interface_ContentBundleFactory");
          ___cxa_guard_release(0x1136b9cb8);
        }
      }
      func_0x000104bdbd44(0x1136b9cc0,0x1136b9cb0,1,0,0);
      ___cxa_guard_release(0x1136b9ca8);
    }
  }
  lVar5 = 0x1136b9cc0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b9941f8(&uStack_48);
  uStack_50 = uStack_48;
  func_0x000108b80b74(auStack_40,&uStack_50,0x1136b9cc0);
  func_0x000107c30f50();
  lStack_88 = *(long *)(lVar5 + 0x10);
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_80 = 0xff00;
  func_0x000107c30fa8(auStack_78,&lStack_88);
  func_0x000107c31030(auStack_68,auStack_78);
  func_0x000107c27900(auStack_70);
  func_0x000107c278f4(&lStack_88);
  puVar7 = auStack_68;
  func_0x00010b994158(uStack_48,puVar7,auStack_38);
  iVar6 = (int)puVar7;
  func_0x000107c27900(auStack_60);
  func_0x000107c2a668(auStack_40);
  func_0x000104bdc2fc(&uStack_48);
  func_0x000108b80b80(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9a96d0(&lStack_c8);
    plStack_e0 = *(long **)(lStack_c8 + 0x18);
    if (plStack_e0 != (long *)0x0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
    }
    lStack_d0 = *(long *)(lStack_c8 + 0x28);
    lStack_d8 = *(long *)(lStack_c8 + 0x20);
    func_0x000107c27d7c(extraout_x8,lStack_d8,lStack_d8 + lStack_d0);
    func_0x000107c27900(&plStack_e0);
    func_0x000104bdb38c(&lStack_c8);
    return;
  }
  return;
}



/* Entry: 1052a9408; end: 1052a943f;  */

long FUN_1052a9408(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110874bc0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1052a9440; end: 1052a944b;  */

undefined ** FUN_1052a9440(void)

{
  return &PTR_DAT_110874bc0;
}



/* Entry: 1052a944c; end: 1052a94af;  */

void FUN_1052a944c(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 1052a94b0; end: 1052a956b;  */

void FUN_1052a94b0(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plStack_60;
  undefined1 auStack_58 [24];
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  func_0x0001003a8364();
  (**(code **)(*param_1 + 0x10))();
  uStack_38 = 0;
  plStack_40 = param_1;
  func_0x0001003a91d4("C++: {}");
  func_0x0001003a9204(auStack_58);
  func_0x0001003ac750(&plStack_40,plVar1,auStack_58);
  func_0x0001052a9614();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  plStack_60 = plStack_40;
  plStack_40 = (long *)0x0;
  func_0x00010b99f560(auStack_58,&plStack_60);
  func_0x00010b99ff08(uVar2,auStack_58);
  func_0x000104bda93c(auStack_58);
  func_0x0001003a8c94(&plStack_60);
  func_0x0001052a9660();
  func_0x0001003a8c94(&plStack_40);
  return;
}



/* Entry: 1052a956c; end: 1052a959b;  */

void FUN_1052a956c(long param_1,long param_2)

{
  func_0x00010b99febc(*(undefined8 *)(param_2 + 0x18),param_1 + 0x10);
  func_0x0001052a9660();
  return;
}



/* Entry: 1052a959c; end: 1052a96b7;  */

void FUN_1052a959c(void)

{
  return;
}



/* Entry: 1052a96b8; end: 1052a9a83;  */

void FUN_1052a96b8(ulong param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052a699c();
  FUN_1052ad450(param_1);
  FUN_1052b0560(param_1);
  FUN_1052b36d4(param_1);
  FUN_1052b53d4(param_1);
  FUN_1052b7310(param_1);
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9cd0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9cd0) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052a9744;
  if ((bRam00000001136b9cd8 & 1) == 0) goto LAB_1052a9774;
  while( true ) {
    func_0x000108b80888(0x1136b9d00,param_1);
LAB_1052a9744:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
LAB_1052a9774:
    iVar2 = 0x136b9cd8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052a9b20();
      pcVar3 = "prefetchContent";
      func_0x0001003a83dc(&uStack_c8,"prefetchContent");
      FUN_1052ad820();
      pcVar4 = pcVar3;
      FUN_1052b39bc();
      puVar5 = auStack_b0;
      func_0x0001003adcc0(puVar5,pcVar4);
      FUN_1052be804();
      puVar6 = auStack_a0;
      func_0x0001003adcc0(puVar6,puVar5);
      FUN_1052a0920();
      func_0x0001003adcc0(auStack_90,puVar6);
      func_0x000104bdbd48(auStack_d8,pcVar3,auStack_b0,3);
      uStack_80 = uStack_c8;
      uStack_c8 = 0;
      func_0x0001003aef98(auStack_78,auStack_d8);
      pcVar3 = "getStreamingVariantCacheStatus";
      func_0x0001003a83dc(&uStack_e0,"getStreamingVariantCacheStatus");
      if ((bRam00000001136b9ce0 & 1) == 0) {
        pcVar3 = (char *)0x1136b9ce0;
        ___cxa_guard_acquire();
        if ((int)pcVar3 != 0) {
          if ((bRam00000001136b9ce8 & 1) == 0) {
            iVar2 = 0x136b9ce8;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              FUN_1052b1590();
              func_0x00010b990868(0x1136b9d20);
              ___cxa_guard_release(0x1136b9ce8);
            }
          }
          func_0x00010b9911c4(0x1136b9d20);
          pcVar3 = (char *)0x1136b9ce0;
          ___cxa_guard_release(0x1136b9ce0);
        }
      }
      FUN_1052b39bc();
      func_0x0001003adcc0(auStack_c0,pcVar3);
      func_0x000104bdbd48(auStack_f0,0x1136b9d10,auStack_c0,1);
      uStack_68 = uStack_e0;
      uStack_e0 = 0;
      func_0x0001003aef98(auStack_60,auStack_f0);
      func_0x0001003a83dc(&uStack_f8,"shutdown");
      if ((bRam00000001136b9cf0 & 1) == 0) {
        iVar2 = 0x136b9cf0;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          if ((bRam00000001136b9cf8 & 1) == 0) {
            iVar2 = 0x136b9cf8;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x0001003adc64(0x1136b9d40);
              ___cxa_guard_release(0x1136b9cf8);
            }
          }
          func_0x00010b9911c4(0x1136b9d40);
          ___cxa_guard_release(0x1136b9cf0);
        }
      }
      func_0x000104bdbd48(auStack_108,0x1136b9d30,0,0);
      uStack_50 = uStack_f8;
      uStack_f8 = 0;
      func_0x0001003aef98(auStack_48,auStack_108);
      func_0x000104bdbd44(0x1136b9d00,0x113818db0,1,&uStack_80,3);
      lVar7 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_78 + lVar7 + -8);
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x18);
      FUN_1052a9f20(auStack_108);
      func_0x0001003a8c94(&uStack_f8);
      FUN_1052a9f20(auStack_f0);
      FUN_1052a9f20(auStack_c0);
      func_0x0001003a8c94(&uStack_e0);
      FUN_1052a9f20(auStack_d8);
      lVar7 = 0x28;
      do {
        func_0x0001003adc18(auStack_b0 + lVar7);
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != -8);
      func_0x0001003a8c94(&uStack_c8);
      ___cxa_guard_release(0x1136b9cd8);
    }
  }
  return;
}



/* Entry: 1052a9a84; end: 1052a9b1f;  */

undefined8 FUN_1052a9a84(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818da8 & 1) == 0) {
    iVar4 = 0x13818da8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052a9b20();
      lStack_20 = lRam0000000113818db0;
      if (lRam0000000113818db0 != 0) {
        piVar1 = (int *)(lRam0000000113818db0 + 8);
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
      func_0x0001003ad9a4(0x113818d98,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818da8);
    }
  }
  return 0x113818d98;
}



/* Entry: 1052a9b20; end: 1052a9b73;  */

void FUN_1052a9b20(void)

{
  int iVar1;
  
  if ((bRam0000000113818db8 & 1) == 0) {
    iVar1 = 0x13818db8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818db0,"_djinni_interface_ContentFetcher");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818db8);
      return;
    }
  }
  return;
}



/* Entry: 1052a9b74; end: 1052a9bc7;  */

void FUN_1052a9b74(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 1052a9bc8; end: 1052a9c63;  */

undefined8 * FUN_1052a9bc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001052a9c3c(&uStack_30);
  return param_1;
}



/* Entry: 1052a9c64; end: 1052a9d9f;  */

void FUN_1052a9c64(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  puStack_30 = (undefined8 *)0x0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052a9b74(&puStack_40,param_2,&uStack_50);
  FUN_1052a9bc8(&puStack_30,&puStack_40);
  func_0x0001052a9c3c(&puStack_40);
  func_0x0001052a9c3c(&uStack_50);
  puStack_40 = puStack_30 + 10;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  puStack_60 = puStack_30;
  lStack_58 = lStack_28;
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
  FUN_1052a9da0(puStack_30 + 4,&puStack_40,&puStack_60);
  func_0x0001052a9c3c(&puStack_60);
  if (puStack_30[0x12] == 0) {
    uVar5 = *puStack_30;
    param_1[1] = puStack_30[1];
    *param_1 = uVar5;
    param_1[2] = puStack_30[2];
    puStack_30[1] = 0;
    puStack_30[2] = 0;
    *puStack_30 = 0;
    func_0x0001000df5a0(&puStack_40);
    func_0x0001052a9c3c(&puStack_30);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_68);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1052a9d54);
  (*pcVar4)();
}



/* Entry: 1052a9da0; end: 1052a9ddf;  */

void FUN_1052a9da0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_1052a9de0(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1,param_2);
  }
  return;
}



/* Entry: 1052a9de0; end: 1052a9de7;  */

undefined8 FUN_1052a9de0(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x18) & 1) == 0) {
    func_0x0001052a9f28(*(undefined8 *)(*param_1 + 0x90));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 1052a9de8; end: 1052a9e53;  */

undefined8 FUN_1052a9de8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001052a9e14(&uStack_28);
  return param_1;
}



/* Entry: 1052a9e54; end: 1052a9e5b;  */

void FUN_1052a9e54(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x0001001148fc();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1052a9e5c; end: 1052a9f1f;  */

void FUN_1052a9e5c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    func_0x0001001148fc();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1052a9f20; end: 1052a9f63;  */

void FUN_1052a9f20(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  func_0x0001003adc0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return;
}



/* Entry: 1052a9f64; end: 1052a9fd7;  */

void FUN_1052a9f64(undefined8 *param_1)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  func_0x000104bdbf60(&uStack_40,lStack_28 + 0x18);
  iVar1 = (int)lStack_28 + 0x28;
  func_0x00010b9a9518();
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  *(int *)(param_1 + 3) = iVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 1052a9fd8; end: 1052aa113;  */

undefined1 * FUN_1052a9fd8(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  char *pcVar6;
  code ***pppcVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  code **ppcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  code **ppcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  code ***pppcStack_140;
  code ***apppcStack_138 [2];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  code ***pppcStack_108;
  undefined **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_d8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818dd0 & 1) == 0) {
    param_1 = (undefined8 *)0x113818dd0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_ContentKey");
      pcVar6 = "mediaId";
      func_0x0001003a83dc(auStack_68,"mediaId");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar6);
      pcVar6 = "mediaContextType";
      func_0x0001003a83dc(auStack_70,"mediaContextType");
      FUN_1052a7154();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar6);
      uVar10 = 0;
      func_0x000104bdbd44(0x113818dc0,auStack_60,0,auStack_58,2);
      lVar12 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar12);
        param_2 = (int)uVar10;
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x18);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = (undefined8 *)0x113818dd0;
      ___cxa_guard_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined1 *)0x113818dc0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9d58 & 1) == 0) {
    iVar5 = 0x136b9d58;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_1052aaca4();
      FUN_1052aa96c(0);
      FUN_1052aa96c(1);
      func_0x00010b9941f8(apppcStack_138);
      func_0x00010b993b40(&pppcStack_108,apppcStack_138[0],0x113818df0);
      if (((ulong)pcStack_f8 & 1) == 0) goto LAB_1052aa4d4;
      func_0x0001003adcc0(0x1136b9d70,&pppcStack_108);
      func_0x0001003b12dc(&pppcStack_108);
      func_0x000104bdc2fc(apppcStack_138);
      ___cxa_guard_release(0x1136b9d58);
    }
  }
  pppcVar7 = (code ***)0x1136b9d78;
  func_0x0001003b2110(auStack_168);
  pcStack_180 = FUN_1052aa5a4;
  func_0x0001052ab1b4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001052ab104();
    } while (extraout_w10 != 0);
  }
  pcStack_158 = FUN_1052aa5a4;
  uStack_178 = 0;
  uStack_170 = 0;
  func_0x0001052ab1e0();
  pppcStack_108 = (code ***)FUN_1052aad70;
  ppuStack_100 = &PTR_FUN_110874c40;
  pcStack_f8 = FUN_1052aa5a4;
  uStack_150 = 0;
  uStack_148 = 0;
  func_0x0001052ab240();
  ppcStack_198 = (code **)pppcVar7;
  (*(code *)*ppuStack_100)(&ppuStack_100);
  do {
    func_0x0001052ab1c4();
  } while (extraout_w10_00 != 0);
  pppcStack_108 = pppcVar7;
  func_0x0001052ab248(apppcStack_138);
  func_0x0001052ab230();
  pppcVar7 = &ppcStack_198;
  func_0x000104bda3d0();
  func_0x0001052ab228();
  ppcStack_198 = (code **)FUN_1052aa8b4;
  func_0x0001052ab1b4();
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001052ab104();
    } while (extraout_w10_01 != 0);
  }
  pcStack_158 = FUN_1052aa8b4;
  uStack_190 = 0;
  uStack_188 = 0;
  func_0x0001052ab1e0();
  func_0x0001052ab13c(FUN_1052aae68);
  func_0x0001052ab240();
  ppcStack_1b0 = (code **)pppcVar7;
  func_0x0001052ab1a4();
  do {
    func_0x0001052ab1c4();
  } while (extraout_w10_02 != 0);
  pppcStack_108 = pppcVar7;
  func_0x0001052ab248(auStack_128);
  func_0x0001052ab230();
  pppcVar7 = &ppcStack_1b0;
  func_0x000104bda3d0();
  func_0x0001052ab228();
  ppcStack_1b0 = (code **)FUN_1052aa908;
  func_0x0001052ab1b4();
  if (extraout_x8_02 != 0) {
    do {
      func_0x0001052ab104();
    } while (extraout_w10_03 != 0);
  }
  pcStack_158 = FUN_1052aa908;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  func_0x0001052ab1e0();
  func_0x0001052ab13c(FUN_1052aaf34);
  func_0x0001052ab240();
  pppcStack_140 = pppcVar7;
  func_0x0001052ab1a4();
  do {
    func_0x0001052ab1c4();
  } while (extraout_w10_04 != 0);
  pppcStack_108 = pppcVar7;
  func_0x0001052ab248(auStack_118);
  func_0x0001052ab230();
  func_0x000104bda3d0(&pppcStack_140);
  func_0x0001052ab228();
  func_0x000104bdb9bc(auStack_160,auStack_168,apppcStack_138,3);
  lVar12 = 0x20;
  do {
    func_0x00010b9a8d98((long)apppcStack_138 + lVar12);
    lVar12 = lVar12 + -0x10;
    uVar4 = lVar12 == -0x10;
  } while (!(bool)uVar4);
  func_0x0001052aad48(&uStack_1a8);
  func_0x0001052aad48(&uStack_190);
  func_0x0001052aad48(&uStack_178);
  func_0x0001003b1f60(auStack_168);
  ppuVar8 = (undefined **)0x50;
  __Znwm();
  ppuVar11 = ppuVar8 + 1;
  *ppuVar11 = (undefined *)0x0;
  ppuVar8[2] = (undefined *)0x0;
  *ppuVar8 = (undefined *)&PTR_DAT_110874cb0;
  pppcVar7 = (code ***)(ppuVar8 + 3);
  func_0x00010b9ace44(pppcVar7,auStack_160);
  ppuVar8[3] = (undefined *)&PTR_DAT_110874d00;
  lVar12 = param_1[1];
  puVar13 = (undefined *)*param_1;
  ppuVar8[9] = (undefined *)param_1[1];
  ppuVar8[8] = puVar13;
  if (lVar12 != 0) {
    do {
      func_0x0001052ab104();
    } while (extraout_w10_05 != 0);
  }
  apppcStack_138[0] = pppcVar7;
  if ((ppuVar8[5] == (undefined *)0x0) || (uVar4 = *(long *)(ppuVar8[5] + 8) == -1, (bool)uVar4)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar2) {
        *ppuVar11 = *ppuVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pppcStack_108 = pppcVar7;
    ppuStack_100 = ppuVar8;
    func_0x0001003a8180(ppuVar8 + 4,&pppcStack_108);
    func_0x0001003a90c4(&pppcStack_108);
    if (ppuVar8[5] != (undefined *)0x0) goto LAB_1052aa410;
  }
  else {
LAB_1052aa410:
    do {
      func_0x0001052ab104();
    } while (extraout_w10_06 != 0);
  }
  *extraout_x8 = (long)pppcVar7;
  FUN_1052ab0b0(apppcStack_138);
  puVar9 = auStack_160;
  func_0x000104bdbf78(puVar9);
  func_0x0001052ab270(uStack_d8);
  if ((bool)uVar4) {
    return puVar9;
  }
  ___stack_chk_fail();
LAB_1052aa4d4:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1052aa4dc);
  (*pcVar3)();
}



/* Entry: 1052aa114; end: 1052aa5a3;  */

void FUN_1052aa114(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  code ***pppcVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  code **ppcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  code **ppcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code ***pppcStack_d0;
  code ***apppcStack_c8 [2];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  code ***pppcStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9d58 & 1) == 0) {
    iVar5 = 0x136b9d58;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_1052aaca4();
      FUN_1052aa96c(0);
      FUN_1052aa96c(1);
      func_0x00010b9941f8(apppcStack_c8);
      func_0x00010b993b40(&pppcStack_98,apppcStack_c8[0],0x113818df0);
      if (((ulong)pcStack_88 & 1) == 0) goto LAB_1052aa4d4;
      func_0x0001003adcc0(0x1136b9d70,&pppcStack_98);
      func_0x0001003b12dc(&pppcStack_98);
      func_0x000104bdc2fc(apppcStack_c8);
      ___cxa_guard_release(0x1136b9d58);
    }
  }
  pppcVar6 = (code ***)0x1136b9d78;
  func_0x0001003b2110(auStack_f8);
  pcStack_110 = FUN_1052aa5a4;
  func_0x0001052ab1b4();
  if (extraout_x8 != 0) {
    do {
      func_0x0001052ab104();
    } while (extraout_w10 != 0);
  }
  pcStack_e8 = FUN_1052aa5a4;
  uStack_108 = 0;
  uStack_100 = 0;
  func_0x0001052ab1e0();
  pppcStack_98 = (code ***)FUN_1052aad70;
  ppuStack_90 = &PTR_FUN_110874c40;
  pcStack_88 = FUN_1052aa5a4;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x0001052ab240();
  ppcStack_128 = (code **)pppcVar6;
  (*(code *)*ppuStack_90)(&ppuStack_90);
  do {
    func_0x0001052ab1c4();
  } while (extraout_w10_00 != 0);
  pppcStack_98 = pppcVar6;
  func_0x0001052ab248(apppcStack_c8);
  func_0x0001052ab230();
  pppcVar6 = &ppcStack_128;
  func_0x000104bda3d0();
  func_0x0001052ab228();
  ppcStack_128 = (code **)FUN_1052aa8b4;
  func_0x0001052ab1b4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001052ab104();
    } while (extraout_w10_01 != 0);
  }
  pcStack_e8 = FUN_1052aa8b4;
  uStack_120 = 0;
  uStack_118 = 0;
  func_0x0001052ab1e0();
  func_0x0001052ab13c(FUN_1052aae68);
  func_0x0001052ab240();
  ppcStack_140 = (code **)pppcVar6;
  func_0x0001052ab1a4();
  do {
    func_0x0001052ab1c4();
  } while (extraout_w10_02 != 0);
  pppcStack_98 = pppcVar6;
  func_0x0001052ab248(auStack_b8);
  func_0x0001052ab230();
  pppcVar6 = &ppcStack_140;
  func_0x000104bda3d0();
  func_0x0001052ab228();
  ppcStack_140 = (code **)FUN_1052aa908;
  func_0x0001052ab1b4();
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001052ab104();
    } while (extraout_w10_03 != 0);
  }
  pcStack_e8 = FUN_1052aa908;
  uStack_138 = 0;
  uStack_130 = 0;
  func_0x0001052ab1e0();
  func_0x0001052ab13c(FUN_1052aaf34);
  func_0x0001052ab240();
  pppcStack_d0 = pppcVar6;
  func_0x0001052ab1a4();
  do {
    func_0x0001052ab1c4();
  } while (extraout_w10_04 != 0);
  pppcStack_98 = pppcVar6;
  func_0x0001052ab248(auStack_a8);
  func_0x0001052ab230();
  func_0x000104bda3d0(&pppcStack_d0);
  func_0x0001052ab228();
  func_0x000104bdb9bc(auStack_f0,auStack_f8,apppcStack_c8,3);
  lVar9 = 0x20;
  do {
    func_0x00010b9a8d98((long)apppcStack_c8 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar4 = lVar9 == -0x10;
  } while (!(bool)uVar4);
  func_0x0001052aad48(&uStack_138);
  func_0x0001052aad48(&uStack_120);
  func_0x0001052aad48(&uStack_108);
  func_0x0001003b1f60(auStack_f8);
  ppuVar7 = (undefined **)0x50;
  __Znwm();
  ppuVar8 = ppuVar7 + 1;
  *ppuVar8 = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  *ppuVar7 = (undefined *)&PTR_DAT_110874cb0;
  pppcVar6 = (code ***)(ppuVar7 + 3);
  func_0x00010b9ace44(pppcVar6,auStack_f0);
  ppuVar7[3] = (undefined *)&PTR_DAT_110874d00;
  lVar9 = param_2[1];
  puVar10 = (undefined *)*param_2;
  ppuVar7[9] = (undefined *)param_2[1];
  ppuVar7[8] = puVar10;
  if (lVar9 != 0) {
    do {
      func_0x0001052ab104();
    } while (extraout_w10_05 != 0);
  }
  apppcStack_c8[0] = pppcVar6;
  if ((ppuVar7[5] == (undefined *)0x0) || (uVar4 = *(long *)(ppuVar7[5] + 8) == -1, (bool)uVar4)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar2) {
        *ppuVar8 = *ppuVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pppcStack_98 = pppcVar6;
    ppuStack_90 = ppuVar7;
    func_0x0001003a8180(ppuVar7 + 4,&pppcStack_98);
    func_0x0001003a90c4(&pppcStack_98);
    if (ppuVar7[5] != (undefined *)0x0) goto LAB_1052aa410;
  }
  else {
LAB_1052aa410:
    do {
      func_0x0001052ab104();
    } while (extraout_w10_06 != 0);
  }
  *param_1 = (long)pppcVar6;
  FUN_1052ab0b0(apppcStack_c8);
  func_0x000104bdbf78(auStack_f0);
  func_0x0001052ab270(uStack_68);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_1052aa4d4:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1052aa4dc);
  (*pcVar3)();
}



/* Entry: 1052aa5a4; end: 1052aa8b3;  */

void FUN_1052aa5a4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  int extraout_w10;
  long *plVar7;
  int iVar8;
  undefined8 *apuStack_90 [2];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = param_1;
  func_0x0001052ab194();
  uVar6 = 1;
  func_0x00010b9abfa4();
  plVar7 = (long *)*param_1;
  FUN_1052af1f4();
  puStack_58 = puVar4;
  uStack_50 = uVar6;
  if (*(byte *)(param_2 + 8) < 2) {
LAB_1052aa65c:
    puStack_80 = (undefined8 *)0x0;
    uStack_78 = 0;
  }
  else {
    func_0x00010b9a9810(&puStack_60,param_2);
    if (puStack_60 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = puStack_60;
      ___dynamic_cast(puStack_60,&PTR_DAT_110d7f038,&PTR_DAT_110874d48,0);
    }
    func_0x000104be7e54(&puStack_60);
    if (puVar4 == (undefined8 *)0x0) goto LAB_1052aa65c;
    uStack_78 = puVar4[6];
    puStack_80 = (undefined8 *)puVar4[5];
    if (puVar4[6] != 0) {
      do {
        func_0x0001052ab104();
      } while (extraout_w10 != 0);
    }
  }
  (**(code **)(*plVar7 + 0x10))(apuStack_90,plVar7,&puStack_58,&puStack_80);
  FUN_1052aacf8(&puStack_80);
  func_0x000108b80734(apuStack_90[0],&UNK_10dd92987);
  if (apuStack_90[0] == (undefined8 *)0x0) {
    func_0x0001052ab0f4();
    goto LAB_1052aa858;
  }
  puVar4 = apuStack_90[0];
  ___dynamic_cast(apuStack_90[0],&PTR_DAT_110874c30,&PTR_DAT_1107e7dd0,0xfffffffffffffffe);
  if (puVar4 != (undefined8 *)0x0) {
    puStack_58 = (undefined8 *)puVar4[1];
    if ((puStack_58 != (undefined8 *)0x0) && (puStack_58[2] != 0)) {
      plVar7 = (long *)(puStack_58[2] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001052ab20c();
    func_0x000104be7e54(&puStack_58);
    goto LAB_1052aa858;
  }
  func_0x0001052ab1f4();
  puStack_58 = apuStack_90[0];
  lVar3 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&puStack_58);
  if (lVar3 == 0) {
    iVar8 = 1;
LAB_1052aa794:
    FUN_1052af914(&puStack_60,apuStack_90);
    if (lVar3 == 0) {
      func_0x000104bf822c(&puStack_80,puStack_60);
      puVar4 = (undefined8 *)0x30;
      iStack_70 = iVar8;
      __Znwm();
      uStack_50 = 0x11328ad50;
      uStack_48 = 1;
      puVar4[2] = apuStack_90[0];
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[4] = uStack_78;
      puVar4[3] = puStack_80;
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      *(int *)(puVar4 + 5) = iVar8;
      uVar6 = 0x11328ad58;
      puStack_58 = puVar4;
      func_0x000104bf7ea8();
      puVar4[1] = uVar6;
      func_0x000104bf7e44(0x11328ad40);
      if (((ulong)puVar4 & 1) != 0) {
        puStack_58 = (undefined8 *)0x0;
      }
      func_0x000104bdc220(&puStack_58);
      ppuVar5 = &puStack_80;
    }
    else {
      func_0x000104bf822c(&puStack_58,puStack_60);
      uStack_48 = CONCAT44(uStack_48._4_4_,iVar8);
      func_0x000104bf7db8(lVar3 + 0x18,&puStack_58);
      ppuVar5 = &puStack_58;
    }
    func_0x000104bdc2a0(ppuVar5);
    func_0x0001052ab20c();
    ppuVar5 = &puStack_60;
  }
  else {
    iVar8 = *(int *)(lVar3 + 0x28);
    func_0x000104bf7d80(&puStack_58,lVar3 + 0x18);
    if (puStack_58 == (undefined8 *)0x0) {
      iVar8 = iVar8 + 1;
      func_0x000104be7e54(&puStack_58);
      goto LAB_1052aa794;
    }
    if (puStack_58[2] != 0) {
      plVar7 = (long *)(puStack_58[2] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puStack_80 = puStack_58;
    func_0x0001052ab20c();
    func_0x000104be7e54(&puStack_80);
    ppuVar5 = &puStack_58;
  }
  func_0x000104be7e54(ppuVar5);
  func_0x0001052ab1e8();
LAB_1052aa858:
  func_0x0001052aad20(apuStack_90);
  return;
}



/* Entry: 1052aa8b4; end: 1052aa907;  */

void FUN_1052aa8b4(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long *plStack_30;
  undefined1 uStack_28;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x18))();
  uStack_28 = (undefined1)param_3;
  plStack_30 = plVar1;
  if ((param_3 & 1) == 0) {
    func_0x0001052ab0f4();
  }
  else {
    FUN_1052b03a0(param_1,&plStack_30);
  }
  return;
}



/* Entry: 1052aa908; end: 1052aa96b;  */

void FUN_1052aa908(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_98 [120];
  
  func_0x0001052ab194();
  plVar1 = (long *)*param_1;
  FUN_1052be72c(auStack_98);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_98);
  func_0x00010529fe04(auStack_98);
  func_0x0001052ab0f4();
  return;
}



/* Entry: 1052aa96c; end: 1052aac0b;  */

void FUN_1052aa96c(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052af504();
  FUN_1052afbc0(param_1);
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9d50);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9d50) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052aa9d8;
  if ((bRam00000001136b9d60 & 1) == 0) goto LAB_1052aa9fc;
  while( true ) {
    func_0x000108b80888(0x1136b9d80,param_1);
LAB_1052aa9d8:
    func_0x0001052ab270(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052aa9fc:
    iVar2 = 0x136b9d60;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052aaca4();
      pcVar3 = "streamByteRange";
      func_0x0001003a83dc(&uStack_b8,"streamByteRange");
      FUN_1052afcf8();
      pcVar4 = pcVar3;
      FUN_1052af24c();
      puVar5 = auStack_a0;
      func_0x0001003adcc0(puVar5,pcVar4);
      FUN_1052af81c();
      func_0x0001003adcc0(auStack_90,puVar5);
      func_0x000104bdbd48(auStack_c8,pcVar3,auStack_a0,2);
      uStack_80 = uStack_b8;
      uStack_b8 = 0;
      func_0x0001003aef98(auStack_78,auStack_c8);
      func_0x0001003a83dc(&uStack_d0,"getMetadataIfAvailable");
      if ((bRam00000001136b9d68 & 1) == 0) {
        iVar2 = 0x136b9d68;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          FUN_1052b0468();
          func_0x00010b990784(0x1136b9d90);
          ___cxa_guard_release(0x1136b9d68);
        }
      }
      func_0x000104bdbd48(auStack_e0,0x1136b9d90,0,0);
      uStack_68 = uStack_d0;
      uStack_d0 = 0;
      func_0x0001003aef98(auStack_60,auStack_e0);
      pcVar3 = "setRequestContext";
      func_0x0001003a83dc(&uStack_e8,"setRequestContext");
      func_0x0001003b166c(auStack_108);
      FUN_1052be804();
      func_0x0001003adcc0(auStack_b0,pcVar3);
      func_0x000104bdbd48(auStack_f8,auStack_108,auStack_b0,1);
      uStack_50 = uStack_e8;
      uStack_e8 = 0;
      func_0x0001003aef98(auStack_48,auStack_f8);
      func_0x000104bdbd44(0x1136b9d80,0x113818df0,1,&uStack_80,3);
      lVar6 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_78 + lVar6 + -8);
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x18);
      func_0x0001052ab120(auStack_f8);
      func_0x0001052ab120(auStack_b0);
      func_0x0001052ab120(auStack_108);
      func_0x0001003a8c94(&uStack_e8);
      func_0x0001052ab120(auStack_e0);
      func_0x0001003a8c94(&uStack_d0);
      func_0x0001052ab120(auStack_c8);
      lVar6 = 0x18;
      do {
        func_0x0001003adc18(auStack_a0 + lVar6);
        lVar6 = lVar6 + -0x10;
        in_ZR = lVar6 == -8;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_b8);
      ___cxa_guard_release(0x1136b9d60);
    }
  }
  return;
}



/* Entry: 1052aac0c; end: 1052aaca3;  */

undefined8 FUN_1052aac0c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818de8 & 1) == 0) {
    iVar4 = 0x13818de8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052aaca4();
      lStack_20 = lRam0000000113818df0;
      if (lRam0000000113818df0 != 0) {
        piVar1 = (int *)(lRam0000000113818df0 + 8);
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
      func_0x0001003ad9a4(0x113818dd8,&lStack_20);
      func_0x0001052ab25c();
      ___cxa_guard_release(0x113818de8);
    }
  }
  return 0x113818dd8;
}



/* Entry: 1052aaca4; end: 1052aacf7;  */

void FUN_1052aaca4(void)

{
  int iVar1;
  
  if ((bRam0000000113818df8 & 1) == 0) {
    iVar1 = 0x13818df8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818df0,"_djinni_interface_ContentStreamer");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818df8);
      return;
    }
  }
  return;
}



/* Entry: 1052aacf8; end: 1052aad6f;  */

long FUN_1052aacf8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052aad70; end: 1052aae1f;  */

void FUN_1052aad70(void)

{
  func_0x0001052ab21c();
  return;
}



/* Entry: 1052aae20; end: 1052aae67;  */

long FUN_1052aae20(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052aae68; end: 1052aaf17;  */

void FUN_1052aae68(void)

{
  func_0x0001052ab21c();
  return;
}



/* Entry: 1052aaf18; end: 1052aaf33;  */

long FUN_1052aaf18(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052aaf34; end: 1052aafa3;  */

void FUN_1052aaf34(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 1052aafa4; end: 1052aafc3;  */

long FUN_1052aafa4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052aafc4; end: 1052aafd7;  */

void FUN_1052aafc4(void)

{
  FUN_1052ab0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052aafd8; end: 1052aafeb;  */

void FUN_1052aafd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052aafe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052aafec; end: 1052aafff;  */

void FUN_1052aafec(void)

{
  FUN_1052ab010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052ab000; end: 1052ab00f;  */

undefined1  [16] FUN_1052ab000(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052ab010; end: 1052ab09f;  */

void FUN_1052ab010(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_110874d00;
  func_0x0001052ab1f4();
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
  func_0x0001052ab1e8();
  func_0x0001052aad48(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052ab0a0; end: 1052ab0af;  */

void FUN_1052ab0a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110874cb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052ab0b0; end: 1052ab0d7;  */

long * FUN_1052ab0b0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}



/* Entry: 1052ab0d8; end: 1052ab297;  */

void FUN_1052ab0d8(undefined8 param_1,undefined8 *param_2,long param_3)

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



/* Entry: 1052ab298; end: 1052ab3d3;  */

undefined8 FUN_1052ab298(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  long lVar4;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818e10 & 1) == 0) {
    param_1 = 0x113818e10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_DataSlice");
      pcVar2 = "slice";
      func_0x0001003a83dc(auStack_68,"slice");
      FUN_1052af24c();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar2);
      pcVar2 = "data";
      func_0x0001003a83dc(auStack_70,"data");
      func_0x000108b8033c();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar2);
      unaff_x19 = auStack_58;
      uVar3 = 0;
      func_0x000104bdbd44(0x113818e00,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(unaff_x19 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818e10;
      ___cxa_guard_release(0x113818e10);
      unaff_x20 = 0xffffffffffffffe8;
    }
  }
  uVar1 = *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28;
  if ((bool)uVar1) {
    return 0x113818e00;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_78 = FUN_1052ab3d4;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = unaff_x20;
  puStack_88 = unaff_x19;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818e28 & 1) == 0) {
    param_1 = 0x113818e28;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_DiskSizeBreakdown");
      pcVar2 = "authoritative";
      func_0x0001003a83dc(auStack_d8,"authoritative");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar2);
      pcVar2 = "nonAuthoritative";
      func_0x0001003a83dc(auStack_e0,"nonAuthoritative");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818e18,auStack_d0,0,auStack_c8,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        uVar1 = lVar4 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      param_1 = 0x113818e28;
      ___cxa_guard_release(0x113818e28);
    }
  }
  FUN_1052ab504(uStack_98);
  if ((bool)uVar1) {
    return 0x113818e18;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052ab3d4; end: 1052ab503;  */

undefined8 FUN_1052ab3d4(undefined8 param_1,int param_2)

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
  if ((bRam0000000113818e28 & 1) == 0) {
    param_1 = 0x113818e28;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_DiskSizeBreakdown");
      pcVar1 = "authoritative";
      func_0x0001003a83dc(auStack_68,"authoritative");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "nonAuthoritative";
      func_0x0001003a83dc(auStack_70,"nonAuthoritative");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818e18,auStack_60,0,auStack_58,2);
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
      param_1 = 0x113818e28;
      ___cxa_guard_release(0x113818e28);
    }
  }
  FUN_1052ab504(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818e18;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052ab504; end: 1052ab517;  */

void FUN_1052ab504(void)

{
  return;
}



/* Entry: 1052ab518; end: 1052ab613;  */

undefined1 * FUN_1052ab518(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052ab614();
  func_0x0001003b2110(auStack_68,0x113818e38);
  func_0x0001052a8c54(auStack_58,param_2);
  FUN_1052810a4(auStack_48,param_2 + 0x10);
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar6 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_60;
  func_0x000104bdbf78();
  FUN_1052ab7d4(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  __Unwind_Resume(puVar3);
  pcStack_78 = FUN_1052ab614;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818e40 & 1) == 0) {
    iVar2 = 0x13818e40;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_LookupContentResult");
      pcVar4 = "contentBundle";
      func_0x0001003a83dc(auStack_d8,"contentBundle");
      FUN_1052ab744();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "serializedFeatureMetadata";
      func_0x0001003a83dc(auStack_e0,"serializedFeatureMetadata");
      FUN_1052810e0();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818e30,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      ___cxa_guard_release(0x113818e40);
    }
  }
  FUN_1052ab7d4(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818e30;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc458 & 1) == 0) {
    iVar5 = 0x130cc458;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_1052b39bc();
      func_0x00010b990784(0x1130cc448);
      ___cxa_guard_release(0x1130cc458);
    }
  }
  return (undefined1 *)0x1130cc448;
}



/* Entry: 1052ab614; end: 1052ab743;  */

undefined8 FUN_1052ab614(undefined8 param_1,int param_2)

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
  if ((bRam0000000113818e40 & 1) == 0) {
    iVar1 = 0x13818e40;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_LookupContentResult");
      pcVar2 = "contentBundle";
      func_0x0001003a83dc(auStack_68,"contentBundle");
      FUN_1052ab744();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar2);
      pcVar2 = "serializedFeatureMetadata";
      func_0x0001003a83dc(auStack_70,"serializedFeatureMetadata");
      FUN_1052810e0();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818e30,auStack_60,0,auStack_58,2);
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
      ___cxa_guard_release(0x113818e40);
    }
  }
  FUN_1052ab7d4(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818e30;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc458 & 1) == 0) {
    iVar1 = 0x130cc458;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052b39bc();
      func_0x00010b990784(0x1130cc448);
      ___cxa_guard_release(0x1130cc458);
    }
  }
  return 0x1130cc448;
}



/* Entry: 1052ab744; end: 1052ab79f;  */

undefined8 FUN_1052ab744(void)

{
  int iVar1;
  
  if ((bRam00000001130cc458 & 1) == 0) {
    iVar1 = 0x130cc458;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052b39bc();
      func_0x00010b990784(0x1130cc448);
      ___cxa_guard_release(0x1130cc458);
    }
  }
  return 0x1130cc448;
}



/* Entry: 1052ab7a0; end: 1052ab7d3;  */

undefined8 * FUN_1052ab7a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001006b78fc(param_1 + 2,param_3);
  return param_1;
}



/* Entry: 1052ab7d4; end: 1052ab7e7;  */

void FUN_1052ab7d4(void)

{
  return;
}



/* Entry: 1052ab7e8; end: 1052ab947;  */

undefined8 FUN_1052ab7e8(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818e58 & 1) == 0) {
    iVar1 = 0x13818e58;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_MetaSegmentSpecifier");
      pcVar2 = "variants";
      func_0x0001003a83dc(auStack_80,"variants");
      FUN_1052ab948();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar2);
      pcVar2 = "intervalMs";
      func_0x0001003a83dc(auStack_88,"intervalMs");
      FUN_1052a09d8();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar2);
      pcVar2 = "byteRange";
      func_0x0001003a83dc(auStack_90,"byteRange");
      FUN_1052a09d8();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818e48,auStack_78,0,auStack_70,3);
      lVar4 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      ___cxa_guard_release(0x113818e58);
    }
  }
  func_0x0001052ac0d4(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818e48;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc470 & 1) == 0) {
    iVar1 = 0x130cc470;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052b198c();
      func_0x00010b990868(0x1130cc460);
      ___cxa_guard_release(0x1130cc470);
    }
  }
  return 0x1130cc460;
}



/* Entry: 1052ab948; end: 1052ab9a3;  */

undefined8 FUN_1052ab948(void)

{
  int iVar1;
  
  if ((bRam00000001130cc470 & 1) == 0) {
    iVar1 = 0x130cc470;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052b198c();
      func_0x00010b990868(0x1130cc460);
      ___cxa_guard_release(0x1130cc470);
    }
  }
  return 0x1130cc460;
}



/* Entry: 1052ab9a4; end: 1052aba0b;  */

undefined8 FUN_1052ab9a4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001052ab9d0(&uStack_28);
  return param_1;
}



/* Entry: 1052aba0c; end: 1052aba13;  */

void FUN_1052aba0c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052ac0e8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x68;
    func_0x0001052aba48();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1052aba14; end: 1052abadf;  */

void FUN_1052aba14(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052ac0e8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x68;
    func_0x0001052aba48();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}


