/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1051d8; end: 10b105267;  */

long FUN_10b1051d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbb238;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b105410();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b105268; end: 10b105277;  */

void FUN_10b105268(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b105278; end: 10b10529f;  */

long FUN_10b105278(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b1052a0; end: 10b105313;  */

void FUN_10b1052a0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbb328;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b1053c4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b105314);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b105444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b105314; end: 10b10537b;  */

void FUN_10b105314(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  
  puVar1 = PTR_PTR_1126dfc18;
  _objc_alloc();
  if (param_2[1] != 0) {
    do {
      FUN_10b1053c4();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010b105430();
  return;
}



/* Entry: 10b10537c; end: 10b1053c3;  */

undefined8 * FUN_10b10537c(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b1053c4();
    } while (extraout_w10 != 0);
  }
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b105430();
  return param_1;
}



/* Entry: 10b1053c4; end: 10b105457;  */

void FUN_10b1053c4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b105458; end: 10b1054cf; -[SCNApplicationApplicationScope initWithCpp:] */

undefined1 * FUN_10b105458(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705d78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b1061f8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010b105aa0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b1054d0; end: 10b105653; +[SCNApplicationApplicationScope produce:circumstanceEngineScope:courierScope:] */

void FUN_10b1054d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int extraout_w10;
  undefined8 unaff_x22;
  undefined1 auStack_80 [16];
  undefined **appuStack_70 [2];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bcc38a0(&lStack_50,param_3);
  FUN_10b10695c(appuStack_70,param_4);
  FUN_10b107188(auStack_80,param_5);
  FUN_10b21b82c(&lStack_60,&lStack_50,appuStack_70,auStack_80);
  func_0x00010b105a7c(auStack_80);
  func_0x00010b105a58(appuStack_70);
  func_0x00010b105a34(&lStack_50);
  if (lStack_60 == 0) {
    unaff_x22 = 0;
  }
  else {
    appuStack_70[0] = &PTR_DAT_110cbb338;
    lStack_50 = lStack_60;
    lStack_48 = lStack_58;
    if (lStack_58 != 0) {
      do {
        FUN_10b1061f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c31700(appuStack_70,&lStack_50,FUN_10b1059c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b1062bc();
  }
  func_0x00010b105aa0(&lStack_60);
  func_0x00010b10624c();
  func_0x00010b106278();
  func_0x00010b1062a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 10b105654; end: 10b1056eb; -[SCNApplicationApplicationScope dispose] */

void FUN_10b105654(void)

{
  long extraout_x8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b1062d4();
  (**(code **)(extraout_x8 + 0x10))(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b1056ec(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b106208();
  func_0x00010b106244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1056ec; end: 10b10578f;  */

void FUN_10b1056ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  FUN_10b105ac4(auStack_40,param_1,&puStack_48);
  func_0x000107c27b58(auStack_40);
  _objc_release(puStack_48);
  func_0x00010b1062a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b105790; end: 10b10580f; -[SCNApplicationApplicationScope getCircumstanceEngineScope] */

void FUN_10b105790(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b1062d4();
  func_0x00010b1062b4();
  FUN_10b1069ac(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b106230();
  func_0x00010b105a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b105810; end: 10b10588f; -[SCNApplicationApplicationScope getCourierScope] */

void FUN_10b105810(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b1062d4();
  func_0x00010b1062b4();
  FUN_10b1071d8(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b106230();
  func_0x00010b105a7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b105890; end: 10b10590f; -[SCNApplicationApplicationScope getSystemScope] */

void FUN_10b105890(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b1062d4();
  func_0x00010b1062b4();
  func_0x00010bcc38f0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b106230();
  FUN_10b105a34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b105910; end: 10b105963; -[SCNApplicationApplicationScope .cxx_destruct] */

void FUN_10b105910(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb338;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b105aa0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b105964; end: 10b1059c7; -[SCNApplicationApplicationScope .cxx_construct] */

undefined8 * FUN_10b105964(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b1061f8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b1059c8; end: 10b105a33;  */

void FUN_10b1059c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfc20;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b1061f8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010b105aa0(&uStack_30);
  return;
}



/* Entry: 10b105a34; end: 10b105ac3;  */

void FUN_10b105a34(long param_1)

{
  func_0x00010b1062a8();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b105ac4; end: 10b105c8f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b105ac4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long alStack_58 [7];
  
  alStack_58[5] = 0;
  alStack_58[6] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  FUN_10b105c90(alStack_58 + 3,param_2,alStack_58 + 1);
  FUN_10b105ce4(alStack_58 + 5,alStack_58 + 3);
  func_0x00010b1059a4(alStack_58 + 3);
  func_0x00010b1059a4(alStack_58 + 1);
  func_0x000107c27b48(alStack_58);
  func_0x000107c27b4c(alStack_58 + 3,alStack_58[0]);
  uStack_68 = *param_3;
  *param_3 = 0;
  lStack_60 = alStack_58[0];
  alStack_58[0] = 0;
  lStack_70 = 0;
  lStack_78 = 0;
  lStack_88 = alStack_58[5] + 0x38;
  uStack_80 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_58[5];
  func_0x00010b105d24();
  if ((int)lVar1 == 0) {
    FUN_10b105e5c(&lStack_90,&uStack_68);
    lVar1 = lStack_90;
    lStack_90 = 0;
    lVar2 = *(long *)(alStack_58[5] + 0x80);
    *(long *)(alStack_58[5] + 0x80) = lVar1;
    if (lVar2 != 0) {
      func_0x00010b106214();
      lVar1 = lStack_90;
      lStack_90 = 0;
      if (lVar1 != 0) {
        func_0x00010b106214();
      }
    }
  }
  else {
    FUN_10b105ce4(&lStack_78,alStack_58 + 5);
  }
  func_0x000107c2798c(&lStack_88);
  if (lStack_78 != 0) {
    lStack_a0 = lStack_78;
    lStack_98 = lStack_70;
    if (lStack_70 != 0) {
      do {
        FUN_10b1061f8();
      } while (extraout_w10 != 0);
    }
    FUN_10b105d6c(&uStack_68,&lStack_a0);
    func_0x00010b10623c();
  }
  param_1[1] = alStack_58[4];
  *param_1 = alStack_58[3];
  alStack_58[3] = 0;
  alStack_58[4] = 0;
  func_0x00010b1059a4(&lStack_78);
  FUN_10b1061ac(&uStack_68);
  func_0x000107c27b58(alStack_58 + 3);
  lVar1 = alStack_58[0];
  alStack_58[0] = 0;
  if (lVar1 != 0) {
    func_0x00010b106214();
  }
  func_0x00010b106298();
  return;
}



/* Entry: 10b105c90; end: 10b105ce3;  */

void FUN_10b105c90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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



/* Entry: 10b105ce4; end: 10b105d6b;  */

undefined8 * FUN_10b105ce4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b10623c();
  return param_1;
}



/* Entry: 10b105d6c; end: 10b105e5b;  */

void FUN_10b105d6c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = *param_2;
  lStack_38 = param_2[1];
  if (lStack_38 == 0) {
    lStack_38 = 0;
  }
  else {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10b105f30(param_1,&uStack_40);
  func_0x00010b106288();
  func_0x00010b106244();
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b105e5c; end: 10b105e9f;  */

void FUN_10b105e5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110cbb358;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10b105ea0; end: 10b105ea3;  */

undefined8 * FUN_10b105ea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb358;
  FUN_10b1061ac(param_1 + 1);
  return param_1;
}



/* Entry: 10b105ea4; end: 10b105eb7;  */

void FUN_10b105ea4(void)

{
  FUN_10b105f04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b105eb8; end: 10b105f03;  */

void FUN_10b105eb8(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b1061f8();
    } while (extraout_w10 != 0);
  }
  FUN_10b105d6c(param_1 + 8,&uStack_30);
  func_0x00010b10623c();
  return;
}



/* Entry: 10b105f04; end: 10b105f2f;  */

undefined8 * FUN_10b105f04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb358;
  FUN_10b1061ac(param_1 + 1);
  return param_1;
}



/* Entry: 10b105f30; end: 10b106067;  */

void FUN_10b105f30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  FUN_10b106068(param_2);
  func_0x00010bccc9e0(auStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar1);
  func_0x00010b10624c();
  return;
}



/* Entry: 10b106068; end: 10b106163;  */

void FUN_10b106068(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b105c90(&lStack_40,param_1,&uStack_50);
  FUN_10b105ce4(&lStack_30,&lStack_40);
  func_0x00010b1059a4(&lStack_40);
  func_0x00010b106288();
  lStack_40 = lStack_30 + 0x38;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  lStack_60 = lStack_30;
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
  FUN_10b106164(lStack_30 + 8,&lStack_40,&lStack_60);
  func_0x00010b106244();
  if (*(long *)(lStack_30 + 0x78) == 0) {
    func_0x000107c2798c(&lStack_40);
    func_0x00010b106298();
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_68);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10b10612c);
  (*pcVar4)();
}



/* Entry: 10b106164; end: 10b1061a3;  */

void FUN_10b106164(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_10b1061a4(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1,param_2);
  }
  return;
}



/* Entry: 10b1061a4; end: 10b1061ab;  */

bool FUN_10b1061a4(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 1) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x78) != 0;
    func_0x00010b106290();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b1061ac; end: 10b1061f7;  */

undefined8 * FUN_10b1061ac(undefined8 *param_1)

{
  func_0x000107c27b70(param_1 + 1);
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 10b1061f8; end: 10b1062df;  */

void FUN_10b1061f8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b1062e0; end: 10b106337;  */

void FUN_10b1062e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    ___dynamic_cast(param_1,&PTR_DAT_110cbb398,&PTR_DAT_110cbb3a8,0);
    if (param_1 == (undefined8 *)0x0) {
      ___cxa_bad_cast();
      *param_1 = &PTR_FUN_110cbb430;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    uVar1 = param_1[3];
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b106338; end: 10b10633b;  */

void FUN_10b106338(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb430;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10633c; end: 10b10634f;  */

void FUN_10b10633c(void)

{
  FUN_10b106484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b106350; end: 10b10635b;  */

long FUN_10b106350(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbb3f0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b10635c; end: 10b10639b;  */

void FUN_10b10635c(void)

{
  func_0x00010b10649c();
  return;
}



/* Entry: 10b10639c; end: 10b1063ef;  */

void FUN_10b10639c(undefined8 param_1)

{
  long unaff_x21;
  
  func_0x000107c3506c();
  func_0x00010bf55460(*(undefined8 *)(unaff_x21 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2c4f0();
  func_0x000107c35068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b1063f0; end: 10b106483;  */

long FUN_10b1063f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbb3f0;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b106484; end: 10b1064a7;  */

void FUN_10b106484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb430;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1064a8; end: 10b106527; -[SCNCofCircumstanceEngineRegistry initWithCpp:] */

undefined1 * FUN_10b1064a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_112705d80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x00010b106660(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10b106528; end: 10b1065b7; +[SCNCofCircumstanceEngineRegistry getInstance] */

void FUN_10b106528(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  func_0x000107c30178(auStack_30);
  FUN_10b1062e0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c35078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b1065b8; end: 10b106613; -[SCNCofCircumstanceEngineRegistry .cxx_destruct] */

void FUN_10b1065b8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb4d0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b106660((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b106614; end: 10b10668b; -[SCNCofCircumstanceEngineRegistry .cxx_construct] */

undefined8 * FUN_10b106614(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x000107c31704();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b10668c; end: 10b106703; -[SCNCofCircumstanceEngineScope initWithCpp:] */

undefined1 * FUN_10b10668c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705d88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b106b50();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010b105a58(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b106704; end: 10b106817; +[SCNCofCircumstanceEngineScope produce:circumstanceEngine:] */

void FUN_10b106704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bcc38a0(auStack_50,param_3);
  func_0x000107c2bdfc(auStack_60,param_4);
  FUN_10b4b3784(auStack_40,auStack_50,auStack_60);
  func_0x000107c29bb4(auStack_60);
  FUN_10b105a34(auStack_50);
  FUN_10b1069ac(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b106b74();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b106818; end: 10b1068c3; -[SCNCofCircumstanceEngineScope dispose] */

void FUN_10b106818(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b1056ec(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b106b60();
  func_0x00010b1059a4();
  func_0x00010b1059a4(&uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1068c4; end: 10b10695b; -[SCNCofCircumstanceEngineScope getCircumstanceEngine] */

void FUN_10b1068c4(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_30);
  FUN_10b1062e0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b106b60();
  func_0x000107c29bb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b10695c; end: 10b1069ab;  */

void FUN_10b10695c(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        FUN_10b106b50();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b1069ac; end: 10b1069d7;  */

void FUN_10b1069ac(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b106a70();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1069d8; end: 10b106a2b; -[SCNCofCircumstanceEngineScope .cxx_destruct] */

void FUN_10b1069d8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb4e0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b105a58((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b106a2c; end: 10b106a6f; -[SCNCofCircumstanceEngineScope .cxx_construct] */

undefined8 * FUN_10b106a2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b106b50();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b106a70; end: 10b106ae3;  */

void FUN_10b106a70(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbb4e0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b106b50();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b106ae4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b106b60();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b106ae4; end: 10b106b4f;  */

void FUN_10b106ae4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfc28;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b106b50();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010b105a58(&uStack_30);
  return;
}



/* Entry: 10b106b50; end: 10b106b97;  */

void FUN_10b106b50(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b106b98; end: 10b106c0f; -[SCNCourierCourier initWithCpp:] */

undefined1 * FUN_10b106b98(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705d90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b106ec0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b106e94(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b106c10; end: 10b106c93; +[SCNCourierCourier create] */

void FUN_10b106c10(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b21c500(auStack_30);
  FUN_10b106cf4(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b106ed0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b106c94; end: 10b106cf3; -[SCNCourierCourier notifyAppStateChanged:] */

void FUN_10b106c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10b106cf4; end: 10b106d1f;  */

void FUN_10b106cf4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b106db8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b106d20; end: 10b106d73; -[SCNCourierCourier .cxx_destruct] */

void FUN_10b106d20(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb4f0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10b106e94((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b106d74; end: 10b106db7; -[SCNCourierCourier .cxx_construct] */

undefined8 * FUN_10b106d74(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b106ec0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b106db8; end: 10b106e2b;  */

void FUN_10b106db8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbb4f0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b106ec0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b106e2c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b106ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b106e2c; end: 10b106e93;  */

void FUN_10b106e2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfc30;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b106ec0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10b106e94(&uStack_30);
  return;
}



/* Entry: 10b106e94; end: 10b106ebf;  */

long FUN_10b106e94(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b106ec0; end: 10b106efb;  */

void FUN_10b106ec0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b106efc; end: 10b106f6f; -[SCNCourierCourierScope initWithCpp:] */

undefined1 * FUN_10b106efc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705d98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b10737c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010b1073a0();
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b106f70; end: 10b107043; +[SCNCourierCourierScope produce:] */

void FUN_10b106f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  func_0x00010bcc38a0(auStack_50,param_3);
  FUN_10b21cadc(auStack_40,auStack_50);
  FUN_10b105a34(auStack_50);
  puVar1 = auStack_40;
  FUN_10b1071d8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b1073a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b107044; end: 10b1070ef; -[SCNCourierCourierScope dispose] */

void FUN_10b107044(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b1056ec(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10738c();
  func_0x00010b1059a4();
  func_0x00010b1059a4(&uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1070f0; end: 10b107187; -[SCNCourierCourierScope getCourier] */

void FUN_10b1070f0(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_30);
  FUN_10b106cf4(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10738c();
  FUN_10b106e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b107188; end: 10b1071d7;  */

void FUN_10b107188(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        FUN_10b10737c();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b1071d8; end: 10b107203;  */

void FUN_10b1071d8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b10729c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b107204; end: 10b107257; -[SCNCourierCourierScope .cxx_destruct] */

void FUN_10b107204(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb500;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b105a7c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b107258; end: 10b10729b; -[SCNCourierCourierScope .cxx_construct] */

undefined8 * FUN_10b107258(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b10737c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b10729c; end: 10b10730f;  */

void FUN_10b10729c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbb500;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b10737c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b107310);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10738c();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b107310; end: 10b10737b;  */

void FUN_10b107310(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfc38;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b10737c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010b105a7c(&uStack_30);
  return;
}



/* Entry: 10b10737c; end: 10b1073bf;  */

void FUN_10b10737c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b1073c0; end: 10b1074af;  */

void FUN_10b1073c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c27f580(param_2);
  func_0x00010c11f9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108619534(auStack_58);
  func_0x00010c15e9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_78);
  func_0x0001052b1dac(param_1,uVar1,auStack_58,auStack_78);
  func_0x000107c279c4(auStack_78);
  _objc_release(param_2);
  func_0x000107c27a18(auStack_58);
  func_0x00010b10755c();
  func_0x00010b107554();
  return;
}



/* Entry: 10b1074b0; end: 10b107553;  */

void FUN_10b1074b0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  puVar2 = PTR_PTR_1126dfc40;
  _objc_alloc(PTR_PTR_1126dfc40);
  puVar3 = param_1 + 8;
  uVar1 = *param_1;
  param_1 = param_1 + 2;
  func_0x000107c285a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058b80(puVar2,param_2,uVar1,param_1,puVar3);
  func_0x00010b10755c();
  func_0x00010b107554();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b107554; end: 10b107563;  */

void FUN_10b107554(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b107564; end: 10b10761b;  */

void FUN_10b107564(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110cbb558;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10b10761c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10b1078a8(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b10761c; end: 10b10771f;  */

void FUN_10b10761c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cbb598;
  puVar4[3] = &PTR_DAT_110875258;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110cbb5e8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b1078a8(&uStack_50);
  return;
}



/* Entry: 10b107720; end: 10b107723;  */

void FUN_10b107720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb598;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b107724; end: 10b107737;  */

void FUN_10b107724(void)

{
  FUN_10b107898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b107738; end: 10b107743;  */

long FUN_10b107738(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbb558;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b107744; end: 10b107783;  */

void FUN_10b107744(void)

{
  FUN_10b1078d4();
  return;
}



/* Entry: 10b107784; end: 10b107803;  */

void FUN_10b107784(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c28044(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a40(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b107804; end: 10b107897;  */

long FUN_10b107804(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbb558;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b107898; end: 10b1078a7;  */

void FUN_10b107898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb598;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1078a8; end: 10b1078d3;  */

long FUN_10b1078a8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b1078d4; end: 10b1078df;  */

long FUN_10b1078d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbb558;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b1078e0; end: 10b107957; -[SCNContentResolutionBoltMediaVariantProviderCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10b1078e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705da0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b107e9c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052b243c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b107958; end: 10b107a57; -[SCNContentResolutionBoltMediaVariantProviderCallbackCppProxy getMediaVariantRules:] */

void FUN_10b107958(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_58,param_3);
  (**(code **)(*plVar1 + 0x10))(&uStack_40,plVar1,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000108c461b4(&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b107ebc();
  func_0x0001052b22bc(&uStack_40);
  func_0x00010b107eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b107a58; end: 10b107b4b;  */

void FUN_10b107a58(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126dfc48;
    _objc_opt_class(PTR_PTR_1126dfc48);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110cbb648;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_10b107be8);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10b107e74(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10b107e9c();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x00010b107eac();
  return;
}



/* Entry: 10b107b4c; end: 10b107ba7; -[SCNContentResolutionBoltMediaVariantProviderCallbackCppProxy .cxx_destruct] */

void FUN_10b107b4c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb6f0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052b243c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b107ba8; end: 10b107be7; -[SCNContentResolutionBoltMediaVariantProviderCallbackCppProxy .cxx_construct] */

undefined8 * FUN_10b107ba8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b107e9c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b107be8; end: 10b107cdb;  */

void FUN_10b107be8(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cbb688;
  puVar1[3] = &PTR_DAT_110875290;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10b107e9c();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  func_0x00010b107ec8();
  puVar1[3] = &PTR_FUN_110cbb6d8;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b107e74(&uStack_50);
  return;
}



/* Entry: 10b107cdc; end: 10b107cdf;  */

void FUN_10b107cdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb688;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b107ce0; end: 10b107cf3;  */

void FUN_10b107ce0(void)

{
  FUN_10b107e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b107cf4; end: 10b107cff;  */

long FUN_10b107cf4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbb648;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b107eb4();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}


