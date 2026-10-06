/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090c0e0c; end: 1090c0e1b; -[SCNeoPlayerVideoView setResizeScaleSyncEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c0e0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112781910) = param_3;
  return;
}



/* Entry: 1090c0e1c; end: 1090c0e2f; -[SCNeoPlayerVideoView hasRenderReadyLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1090c0e1c(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127818f4) & 1;
}



/* Entry: 1090c0e30; end: 1090c0e3f; -[SCNeoPlayerVideoView setHasRenderReadyLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c0e30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127818f4) = param_3;
  return;
}



/* Entry: 1090c0e40; end: 1090c0e4b; -[SCNeoPlayerVideoView onRenderReadyLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090c0e40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781918);
}



/* Entry: 1090c0e4c; end: 1090c0e57; -[SCNeoPlayerVideoView setOnRenderReadyLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c0e4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1090c0e58; end: 1090c0ea7; -[SCNeoPlayerVideoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c0e58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112781918,0);
  _objc_storeStrong(param_1 + _DAT_112781914,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112781900,0);
  return;
}



/* Entry: 1090c0ea8; end: 1090c0f3f;  */

void FUN_1090c0ea8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090c0f40; end: 1090c10a3;  */

undefined8 * FUN_1090c0f40(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_110ad89f8;
  param_1[2] = 0x32aaaba7;
  param_1[1] = 1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  puVar1 = PTR_PTR_1126dd328;
  _objc_opt_new();
  param_1[10] = puVar1;
  puVar1 = PTR_PTR_1126dd5b0;
  _objc_opt_new();
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xb] = puVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5c20();
  func_0x00010c182d20(param_1[0xb]);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126dd338;
  func_0x00010c22ba80(PTR_PTR_1126dd338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(param_1[0xb],param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c221960(param_1[10],param_2,param_1[0xb]);
  return param_1;
}



/* Entry: 1090c10a4; end: 1090c10f7;  */

undefined8 * FUN_1090c10a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad89f8;
  FUN_1090c1870(param_1 + 0x10);
  FUN_1090c1908(param_1 + 0xf);
  func_0x0001090c18e0(param_1 + 0xd);
  _objc_release(param_1[0xb]);
  _objc_release(param_1[10]);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1090c10f8; end: 1090c10fb;  */

undefined8 * FUN_1090c10f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad89f8;
  FUN_1090c1870(param_1 + 0x10);
  FUN_1090c1908(param_1 + 0xf);
  func_0x0001090c18e0(param_1 + 0xd);
  _objc_release(param_1[0xb]);
  _objc_release(param_1[10]);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1090c10fc; end: 1090c110f;  */

void FUN_1090c10fc(void)

{
  FUN_1090c10a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090c1110; end: 1090c1133;  */

void FUN_1090c1110(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x0001090c1a78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090c1134; end: 1090c113f;  */

undefined1  [16] FUN_1090c1134(void)

{
  return ZEXT816(0x100000001) << 0x40;
}



/* Entry: 1090c1140; end: 1090c117f;  */

void FUN_1090c1140(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1090c1180; end: 1090c1187;  */

void FUN_1090c1180(long param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x90) == '\x01') {
    lStack_28 = 0;
    __ZNSt3__15mutex4lockEv(lVar1 + 0x10);
    if ((*(byte *)(lVar1 + 0x88) & 1) == 0) {
      func_0x0001090c1a68();
    }
    else {
      FUN_1090c12d4(&lStack_28,lVar1 + 0x80);
      if (*(char *)(lVar1 + 0x88) == '\x01') {
        FUN_1090c1890(lVar1 + 0x80);
        *(undefined1 *)(lVar1 + 0x88) = 0;
      }
      func_0x0001090c1a68();
      if (lStack_28 != 0) {
        func_0x00010bf86220(*(undefined8 *)(lVar1 + 0x58));
        *(undefined1 *)(lVar1 + 0x90) = 0;
        do {
          func_0x0001090c1a58();
        } while (extraout_w10 != 0);
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc6000000;
        pcStack_48 = FUN_1090c1304;
        puStack_40 = &UNK_110ad8a40;
        lStack_30 = lVar1;
        do {
          func_0x0001090c1a58();
        } while (extraout_w10_00 != 0);
        lStack_38 = lVar1;
        func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_58);
        FUN_1090ab4d4(&lStack_38);
        FUN_1090ab4d4(&lStack_30);
      }
    }
    FUN_1090c1890(&lStack_28);
  }
  return;
}



/* Entry: 1090c1188; end: 1090c12a7;  */

void FUN_1090c1188(long param_1)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x90) == '\x01') {
    lStack_28 = 0;
    __ZNSt3__15mutex4lockEv(param_1 + 0x10);
    if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
      func_0x0001090c1a68();
    }
    else {
      FUN_1090c12d4(&lStack_28,param_1 + 0x80);
      if (*(char *)(param_1 + 0x88) == '\x01') {
        FUN_1090c1890(param_1 + 0x80);
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      func_0x0001090c1a68();
      if (lStack_28 != 0) {
        func_0x00010bf86220(*(undefined8 *)(param_1 + 0x58));
        *(undefined1 *)(param_1 + 0x90) = 0;
        do {
          func_0x0001090c1a58();
        } while (extraout_w10 != 0);
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc6000000;
        pcStack_48 = FUN_1090c1304;
        puStack_40 = &UNK_110ad8a40;
        lStack_30 = param_1;
        do {
          func_0x0001090c1a58();
        } while (extraout_w10_00 != 0);
        lStack_38 = param_1;
        func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_58);
        FUN_1090ab4d4(&lStack_38);
        FUN_1090ab4d4(&lStack_30);
      }
    }
    FUN_1090c1890(&lStack_28);
  }
  return;
}



/* Entry: 1090c12a8; end: 1090c12d3;  */

void FUN_1090c12a8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x20);
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
  *(long *)(param_1 + 0x20) = lVar4;
  return;
}



/* Entry: 1090c12d4; end: 1090c1303;  */

undefined8 * FUN_1090c12d4(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1090c18b4();
  *param_1 = *param_2;
  *param_2 = 0;
  return param_1;
}



/* Entry: 1090c1304; end: 1090c1313;  */

void FUN_1090c1304(long param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(lVar1 + 0x90) = 1;
  if (*(char *)(lVar1 + 0x90) == '\x01') {
    lStack_28 = 0;
    __ZNSt3__15mutex4lockEv(lVar1 + 0x10);
    if ((*(byte *)(lVar1 + 0x88) & 1) == 0) {
      func_0x0001090c1a68();
    }
    else {
      FUN_1090c12d4(&lStack_28,lVar1 + 0x80);
      if (*(char *)(lVar1 + 0x88) == '\x01') {
        FUN_1090c1890(lVar1 + 0x80);
        *(undefined1 *)(lVar1 + 0x88) = 0;
      }
      func_0x0001090c1a68();
      if (lStack_28 != 0) {
        func_0x00010bf86220(*(undefined8 *)(lVar1 + 0x58));
        *(undefined1 *)(lVar1 + 0x90) = 0;
        do {
          func_0x0001090c1a58();
        } while (extraout_w10 != 0);
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc6000000;
        pcStack_48 = FUN_1090c1304;
        puStack_40 = &UNK_110ad8a40;
        lStack_30 = lVar1;
        do {
          func_0x0001090c1a58();
        } while (extraout_w10_00 != 0);
        lStack_38 = lVar1;
        func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_58);
        FUN_1090ab4d4(&lStack_38);
        FUN_1090ab4d4(&lStack_30);
      }
    }
    FUN_1090c1890(&lStack_28);
  }
  return;
}



/* Entry: 1090c1314; end: 1090c16cf;  */

void FUN_1090c1314(code *param_1,code **param_2,undefined **param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  code **ppcVar6;
  int extraout_w10;
  int extraout_w10_00;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  code *pcStack_168;
  code *pcStack_160;
  long lStack_158;
  code *pcStack_150;
  code *pcStack_148;
  long alStack_140 [14];
  code *pcStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *apcStack_b0 [13];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = *param_2;
  if (pcVar8 == (code *)0x0) goto LAB_1090c1610;
  param_3 = &PTR_DAT_110ad8f08;
  param_4 = 0;
  pcVar9 = pcVar8;
  ___dynamic_cast(pcVar8,&PTR_DAT_110adb240);
  if (pcVar9 == (code *)0x0) {
LAB_1090c1390:
    (**(code **)(*(long *)pcVar8 + 0x20))(&pcStack_d0,pcVar8);
    if (pcStack_d0 == (code *)0x1) {
      FUN_1090cccac(&pcStack_148,&uStack_c8);
      if (pcStack_148 == (code *)0x1) {
        lVar7 = *(long *)(param_1 + 0x78);
        if (lVar7 == 0) {
LAB_1090c13e8:
          puVar5 = (undefined8 *)0x88;
          __Znwm();
          *puVar5 = &PTR_FUN_110ad9168;
          puVar5[1] = 1;
          param_3 = (undefined **)0x70;
          _memcpy(puVar5 + 2,alStack_140);
          puVar5[0x10] = 0;
          pcStack_160 = (code *)0x0;
          *(undefined8 **)(param_1 + 0x78) = puVar5;
          FUN_1090c1930(lVar7);
          FUN_1090c1908(&pcStack_160);
          lVar7 = *(long *)(param_1 + 0x78);
        }
        else {
          lVar4 = lVar7 + 0x10;
          FUN_1090ccc94(lVar4,alStack_140);
          if ((int)lVar4 != 0) goto LAB_1090c13e8;
        }
        param_2 = &pcStack_c0;
        FUN_1090ccf48(&lStack_158,lVar7);
      }
      else {
        param_2 = (code **)&UNK_10f54f6c8;
        param_3 = (undefined **)0x29;
        func_0x00010b99fa70(&pcStack_160,alStack_140);
        lStack_158 = 2;
        pcStack_150 = pcStack_160;
        pcStack_160 = (code *)0x0;
        func_0x000104bda93c(&pcStack_160);
      }
      func_0x0001090c19f0(&pcStack_148);
    }
    else {
      param_2 = (code **)&UNK_10f54f69a;
      param_3 = (undefined **)0x2d;
      func_0x00010b99fa70(&pcStack_148,&uStack_c8);
      lStack_158 = 2;
      pcStack_150 = pcStack_148;
      pcStack_148 = (code *)0x0;
      func_0x000104bda93c(&pcStack_148);
    }
    func_0x0001090c19c0(&pcStack_d0);
  }
  else {
    ppcVar6 = (code **)(pcVar9 + 0x90);
    pcVar8 = *ppcVar6;
    _CVPixelBufferGetIOSurface();
    if (pcVar8 == (code *)0x0) {
      pcVar8 = *param_2;
      goto LAB_1090c1390;
    }
    FUN_1090c195c(&lStack_158);
    param_2 = ppcVar6;
  }
  pcVar8 = pcStack_150;
  if (lStack_158 == 1) {
    pcStack_168 = pcStack_150;
    pcStack_150 = (code *)0x0;
    __ZNSt3__15mutex4lockEv(param_1 + 0x10);
    if (param_1[0x88] == (code)0x1) {
      FUN_1090c18b4(param_1 + 0x80);
      *(code **)(param_1 + 0x80) = pcStack_168;
    }
    else {
      *(code **)(param_1 + 0x80) = pcVar8;
      param_1[0x88] = (code)0x1;
    }
    pcStack_168 = (code *)0x0;
    FUN_1090c1140(&pcStack_d0,param_1 + 0x68);
    if (pcStack_d0 != (code *)0x0) {
      pcStack_148 = *(code **)(pcStack_d0 + 0x28);
      alStack_140[0] = *(long *)(pcStack_d0 + 0x30);
      if (alStack_140[0] != 0) {
        plVar1 = (long *)(alStack_140[0] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*(long *)pcStack_148 + 0x28))(pcStack_148,0);
      FUN_1090971c4(&pcStack_148);
    }
    FUN_1090c1a28(&pcStack_d0);
    func_0x0001090c1a68();
    do {
      func_0x0001090c1a58();
    } while (extraout_w10 != 0);
    pcStack_d0 = (code *)PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc6000000;
    pcStack_c0 = FUN_1090c1180;
    puStack_b8 = &UNK_110ad8a40;
    pcStack_148 = param_1;
    do {
      func_0x0001090c1a58();
    } while (extraout_w10_00 != 0);
    param_2 = &pcStack_d0;
    apcStack_b0[0] = param_1;
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20);
    FUN_1090ab4d4(apcStack_b0);
    FUN_1090ab4d4(&pcStack_148);
    FUN_1090c1890(&pcStack_168);
  }
  else if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
    param_2 = &pcStack_150;
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  param_1 = (code *)&lStack_158;
  func_0x0001090c1a04();
LAB_1090c1610:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
    func_0x0001090c19f0(&pcStack_148);
    func_0x0001090c19c0(&pcStack_d0);
  }
  __Unwind_Resume();
  lVar7 = *(long *)(param_1 + 0x50);
  pcVar8 = *param_2;
  pcVar10 = param_2[1];
  pcVar9 = param_2[2];
  func_0x0001090c1a78();
  puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_200 = 0xc2000000;
  pcStack_1f8 = FUN_1090c178c;
  puStack_1f0 = &UNK_110ad74b8;
  lStack_1e8 = lVar7;
  dStack_1e0 = (double)SUB84(pcVar8,0);
  dStack_1d8 = (double)(float)((ulong)pcVar8 >> 0x20);
  dStack_1d0 = (double)SUB84(pcVar10,0);
  dStack_1c8 = (double)(float)((ulong)pcVar10 >> 0x20);
  dStack_1c0 = (double)SUB84(pcVar9,0);
  dStack_1b8 = (double)(float)((ulong)pcVar9 >> 0x20);
  dStack_1b0 = (double)((ulong)param_3 & 0xffffffff);
  dStack_1a8 = (double)(param_4 & 0xffffffff);
  func_0x0001090c1a78();
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_208);
  _objc_release(lStack_1e8);
  _objc_release(lVar7);
  return;
}



/* Entry: 1090c16d0; end: 1090c178b;  */

void FUN_1090c16d0(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  func_0x0001090c1a78();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1090c178c;
  puStack_80 = &UNK_110ad74b8;
  uStack_78 = uVar1;
  dStack_70 = (double)(float)uVar2;
  dStack_68 = (double)(float)((ulong)uVar2 >> 0x20);
  dStack_60 = (double)(float)uVar4;
  dStack_58 = (double)(float)((ulong)uVar4 >> 0x20);
  dStack_50 = (double)(float)uVar3;
  dStack_48 = (double)(float)((ulong)uVar3 >> 0x20);
  dStack_40 = (double)param_3;
  dStack_38 = (double)param_4;
  func_0x0001090c1a78();
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_98);
  _objc_release(uStack_78);
  _objc_release(uVar1);
  return;
}



/* Entry: 1090c178c; end: 1090c17d3;  */

void FUN_1090c178c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_18 = *(undefined8 *)(param_1 + 0x50);
  uStack_20 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c222220(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40,
                      (long)*(double *)(param_1 + 0x58),(long)*(double *)(param_1 + 0x60));
  return;
}



/* Entry: 1090c17d4; end: 1090c17db;  */

void FUN_1090c17d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}



/* Entry: 1090c17dc; end: 1090c186f;  */

void FUN_1090c17dc(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x10);
  func_0x0001090c1814(param_1 + 0x68,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x10);
  return;
}



/* Entry: 1090c1870; end: 1090c188f;  */

void FUN_1090c1870(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1090c1890();
  }
  return;
}



/* Entry: 1090c1890; end: 1090c18b3;  */

undefined8 FUN_1090c1890(undefined8 param_1)

{
  FUN_1090c18b4();
  return param_1;
}



/* Entry: 1090c18b4; end: 1090c1907;  */

void FUN_1090c18b4(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
    *param_1 = 0;
  }
  return;
}



/* Entry: 1090c1908; end: 1090c192f;  */

undefined8 * FUN_1090c1908(undefined8 *param_1)

{
  FUN_1090c1930(*param_1);
  return param_1;
}



/* Entry: 1090c1930; end: 1090c195b;  */

void FUN_1090c1930(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090c1954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090c195c; end: 1090c1987;  */

undefined8 * FUN_1090c195c(undefined8 *param_1)

{
  *param_1 = 1;
  FUN_1090c1988(param_1 + 1);
  return param_1;
}



/* Entry: 1090c1988; end: 1090c19af;  */

undefined8 * FUN_1090c1988(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1090c19b0();
  return param_1;
}



/* Entry: 1090c19b0; end: 1090c1a27;  */

void FUN_1090c19b0(long *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 1090c1a28; end: 1090c1a4f;  */

long FUN_1090c1a28(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1090c1a50; end: 1090c1a7f;  */

void FUN_1090c1a50(void)

{
  return;
}



/* Entry: 1090c1a80; end: 1090c1bdf;  */

undefined8 FUN_1090c1a80(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0df720(*param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df720(param_1[1]);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1[2]);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1[3]);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1[4]);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1[5];
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x0001090c2090();
  func_0x0001090c2080();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x0001090c2080();
  return uVar7;
}



/* Entry: 1090c1be0; end: 1090c1c23;  */

undefined8 FUN_1090c1be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0dfd40(param_2,param_3,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  FUN_1090c2080();
  return param_1;
}



/* Entry: 1090c1c24; end: 1090c1c87;  */

long FUN_1090c1c24(double *param_1)

{
  double dVar1;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  
  if (((*(uint *)((long)param_1 + 0xc) & 0x1d) == 1) && (*(int *)(param_1 + 1) != 0)) {
    dStack_28 = param_1[1];
    dVar1 = *param_1;
    dStack_20 = param_1[2];
    dStack_30 = dVar1;
    _CMTimeGetSeconds(&dStack_30);
    return (long)(dVar1 * 1000.0);
  }
  return -1;
}



/* Entry: 1090c1c88; end: 1090c1e0b;  */

void FUN_1090c1c88(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _CMSampleBufferGetFormatDescription();
  if (param_3 == 0) {
    uVar5 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_4[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    *param_4 = uVar5;
    puVar1 = PTR__CGAffineTransformIdentity_110347008;
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    param_5[5] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    param_5[4] = uVar5;
    uVar7 = *(undefined8 *)puVar1;
    uVar6 = *(undefined8 *)(puVar1 + 0x18);
    uVar5 = *(undefined8 *)(puVar1 + 0x10);
    param_5[1] = *(undefined8 *)(puVar1 + 8);
    *param_5 = uVar7;
    param_5[3] = uVar6;
    param_5[2] = uVar5;
    return;
  }
  _CMVideoFormatDescriptionGetPresentationDimensions();
  *param_4 = param_1;
  param_4[1] = param_2;
  _CMFormatDescriptionGetExtension(param_3,&PTR____CFConstantStringClassReference_110f1db38);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((uVar2 & 1) != 0) && (uVar2 = param_3, func_0x00010bf529e0(), uVar2 == 6)) {
      _objc_retain(param_3);
      FUN_1090c1be0(param_3,0);
      uVar5 = param_1;
      FUN_1090c1be0(param_3,1);
      uVar6 = uVar5;
      FUN_1090c1be0(param_3,2);
      uVar7 = uVar6;
      FUN_1090c1be0(param_3,3);
      uVar3 = uVar7;
      FUN_1090c1be0(param_3,4);
      uVar4 = uVar3;
      FUN_1090c1be0(param_3,5);
      func_0x0001090c2090();
      *param_5 = param_1;
      param_5[1] = uVar5;
      param_5[2] = uVar6;
      param_5[3] = uVar7;
      param_5[4] = uVar3;
      param_5[5] = uVar4;
      goto LAB_1090c1da8;
    }
  }
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar5 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_5[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_5 = uVar5;
  param_5[3] = uVar7;
  param_5[2] = uVar6;
  uVar5 = *(undefined8 *)(puVar1 + 0x20);
  param_5[5] = *(undefined8 *)(puVar1 + 0x28);
  param_5[4] = uVar5;
LAB_1090c1da8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090c1e0c; end: 1090c207f;  */

void FUN_1090c1e0c(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c23d4c0(param_2);
  uStack_48 = 0;
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CMBlockBufferCreateWithMemoryBlock(uVar2,0,uVar1,param_3,0,0,uVar1,3,&uStack_48);
  if ((int)uVar2 == 0) {
    uStack_50 = 0;
    uVar2 = uStack_48;
    _CMBlockBufferGetDataPointer(uStack_48,0,0,0,&uStack_50);
    if ((int)uVar2 == 0) {
      func_0x00010bf21d60(param_2);
      uVar1 = param_4;
      func_0x00010bf51ee0();
      if ((uVar1 & 1) == 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110f212b8;
        FUN_109096480(&PTR____CFConstantStringClassReference_110f212b8,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_5 = ppuVar3;
        _CFRelease(uStack_48);
        puVar4 = (undefined *)0x0;
      }
      else {
        if (param_2 == 0) {
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_60 = 0;
        }
        else {
          uVar1 = param_2;
          func_0x00010c10f3e0(&uStack_70);
        }
        func_0x0001090c2088();
        if (1 < uVar1) {
          if (param_2 == 0) {
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
          }
          else {
            uVar1 = param_2;
            func_0x00010c10f3e0(&uStack_88,param_2);
          }
          func_0x0001090c2088();
          _CMTimeMultiplyByRatio(&uStack_d0,&uStack_88,1,uVar1);
          uStack_68 = uStack_c8;
          uStack_70 = uStack_d0;
          uStack_60 = uStack_c0;
        }
        if (param_2 == 0) {
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
        }
        else {
          func_0x00010c10f700(&uStack_b8,param_2);
          func_0x00010bf67200(&uStack_88,param_2);
        }
        uStack_98 = uStack_80;
        uStack_a0 = uStack_88;
        uStack_90 = uStack_78;
        uStack_c8 = uStack_68;
        uStack_d0 = uStack_70;
        uStack_c0 = uStack_60;
        puVar4 = PTR_PTR_1126dd358;
        _objc_alloc(PTR_PTR_1126dd358);
        func_0x00010c149880(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001090c2088();
        func_0x00010c032a40(puVar4);
        _objc_release(param_2);
      }
      goto LAB_1090c1ee8;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110f21298;
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f21278;
  }
  FUN_1090966fc(ppuVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  puVar4 = (undefined *)0x0;
  *param_5 = ppuVar3;
LAB_1090c1ee8:
  _objc_release(param_4);
  func_0x0001090c2090();
  func_0x0001090c2080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1090c2080; end: 1090c2097;  */

void FUN_1090c2080(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090c2098; end: 1090c2137; -[SCNeoSparseArray init] */

undefined1 * FUN_1090c2098(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700628;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dd3e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1090c2138; end: 1090c213f; -[SCNeoSparseArray firstIndex] */

void FUN_1090c2138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb16f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_firstIndex_1125c9f60)
  ;
  return;
}



/* Entry: 1090c2140; end: 1090c2147; -[SCNeoSparseArray lastIndex] */

void FUN_1090c2140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c088fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_lastIndex_1125ffdf8);
  return;
}



/* Entry: 1090c2148; end: 1090c214f; -[SCNeoSparseArray objectAtIndex:] */

void FUN_1090c2148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1126159e0)
  ;
  return;
}



/* Entry: 1090c2150; end: 1090c21ab; -[SCNeoSparseArray setObject:atIndex:] */

void FUN_1090c2150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bef92c0(*(undefined8 *)(param_1 + 0x10),param_2,param_4);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090c21ac; end: 1090c21db; -[SCNeoSparseArray removeObjectAtIndex:] */

void FUN_1090c21ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c12cb40(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__112628f18,param_3);
  return;
}



/* Entry: 1090c21dc; end: 1090c2227; -[SCNeoSparseArray lastObject] */

void FUN_1090c21dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c088fa0();
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010c0dfd20(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090c2228; end: 1090c224f; -[SCNeoSparseArray removeAllObjects] */

void FUN_1090c2228(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c12ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllIndexes_112628560);
  return;
}



/* Entry: 1090c2250; end: 1090c22f7; -[SCNeoSparseArray enumerateObjectsWithBlock:] */

void FUN_1090c2250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1090c22f8;
  puStack_48 = &UNK_110ad8aa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97be0(uVar1,param_2,0,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090c22f8; end: 1090c2347;  */

void FUN_1090c22f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0dff20(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1090c2348; end: 1090c2377; -[SCNeoSparseArray .cxx_destruct] */

void FUN_1090c2348(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090c2378; end: 1090c238b;  */

void FUN_1090c2378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1090c238c; end: 1090c2393; -[SCNeoPlayerStateDependencies initWithHasPlayerItem:hasTrackInfoLoaded:wantsPlay:hasError:minimumBufferDurationForPlaybackStartSeconds:] */

void FUN_1090c238c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c019d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithHasPlayerItem_hasTrackIn_1125e4138);
  return;
}



/* Entry: 1090c2394; end: 1090c241b; -[SCNeoPlayerStateDependencies initWithHasPlayerItem:hasTrackInfoLoaded:wantsPlay:hasError:errorIsDeferrable:minimumBufferDurationForPlaybackStartSeconds:] */

void FUN_1090c2394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112700630;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 0xc) = param_8;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 1090c241c; end: 1090c2423; -[SCNeoPlayerStateDependencies hasPlayerItem] */

undefined1 FUN_1090c241c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1090c2424; end: 1090c242b; -[SCNeoPlayerStateDependencies hasTrackInfoLoaded] */

undefined1 FUN_1090c2424(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1090c242c; end: 1090c2433; -[SCNeoPlayerStateDependencies wantsPlay] */

undefined1 FUN_1090c242c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1090c2434; end: 1090c243b; -[SCNeoPlayerStateDependencies hasError] */

undefined1 FUN_1090c2434(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1090c243c; end: 1090c2443; -[SCNeoPlayerStateDependencies errorIsDeferrable] */

undefined1 FUN_1090c243c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1090c2444; end: 1090c244b; -[SCNeoPlayerStateDependencies minimumBufferDurationForPlaybackStartSeconds] */

undefined8 FUN_1090c2444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090c244c; end: 1090c25cb; -[SCNeoStateManager initWithTimebase:queue:timeLooper:shouldCheckPipelineBackPressure:outputStatusProvider:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1090c244c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  func_0x0001090c30c8();
  func_0x0001090c30b8();
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112700638;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithTimebase_queue__1125f23a0,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278193c;
    func_0x0001090c30a0();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112781940;
    func_0x0001090c30b8();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    _objc_alloc(PTR_PTR_1126dd5b8);
    func_0x0001090c3048();
    func_0x0001090c3038();
    _objc_alloc(PTR_PTR_1126dd5b8);
    func_0x0001090c3048();
    func_0x0001090c3038();
    lVar3 = (long)_DAT_11278194c;
    func_0x0001090c30c8();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112781950),param_8);
  }
  _objc_release(param_8);
  func_0x0001090c30b0();
  func_0x0001090c3018();
  func_0x0001090c3020();
  return (undefined1 *)puVar1;
}



/* Entry: 1090c25cc; end: 1090c25f3; -[SCNeoStateManager audioTrackObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c25cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112781944);
  func_0x0001090c30a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090c25f4; end: 1090c261b; -[SCNeoStateManager videoTrackObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c25f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112781948);
  func_0x0001090c30a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090c261c; end: 1090c2667; -[SCNeoStateManager logTag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c261c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = *(undefined ***)(param_1 + _DAT_112781954);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1f8d8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  func_0x0001090c30c8();
  func_0x0001090c3020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1090c2668; end: 1090c266b; -[SCNeoStateManager stateNeedsUpdate] */

void FUN_1090c2668(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onEvent_1126169e8);
  return;
}



/* Entry: 1090c266c; end: 1090c26a3; -[SCNeoStateManager setInstruments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c266c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112781954);
  *(undefined8 *)(param_1 + _DAT_112781954) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090c26a4; end: 1090c26cb; -[SCNeoStateManager willSeek] */

/* WARNING: Possible PIC construction at 0x0001090c26b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090c26b8) */

void FUN_1090c26a4(undefined8 param_1)

{
  func_0x0001090c3058();
                    /* WARNING: Could not recover jumptable at 0x00010c2a6b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_willSeek_1126874e8);
  return;
}



/* Entry: 1090c26cc; end: 1090c26fb; -[SCNeoStateManager reset] */

/* WARNING: Possible PIC construction at 0x0001090c26e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090c26e4) */

void FUN_1090c26cc(undefined8 param_1)

{
  func_0x0001090c3058();
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setEnabled__112642f38,0);
  return;
}



/* Entry: 1090c26fc; end: 1090c280b; -[SCNeoStateManager endTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c26fc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__kCMTimeZero_110348670;
  uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar3;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  lVar2 = (long)_DAT_112781948;
  if ((*(long *)(param_2 + lVar2) != 0) &&
     (func_0x00010bf95780(&uStack_50), (uStack_48 & 0x100000000) != 0)) {
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    uStack_40 = param_1[2];
    if (*(long *)(param_2 + lVar2) == 0) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bf95780(&uStack_70);
    }
    _CMTimeMaximum(param_1,&uStack_50,&uStack_70);
  }
  lVar2 = (long)_DAT_112781944;
  if ((*(long *)(param_2 + lVar2) != 0) &&
     (func_0x00010bf95780(&uStack_50), (uStack_48 & 0x100000000) != 0)) {
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_60 = param_1[2];
    if (*(long *)(param_2 + lVar2) == 0) {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
    }
    else {
      func_0x00010bf95780(&uStack_88);
    }
    _CMTimeMaximum(&uStack_50,&uStack_70,&uStack_88);
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = uStack_40;
  }
  return;
}



/* Entry: 1090c280c; end: 1090c2beb; -[SCNeoStateManager generateNewStateWithDependencies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c280c(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  double dVar8;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined5 uStack_138;
  undefined3 uStack_133;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 uStack_128;
  double dStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined5 uStack_d8;
  undefined3 uStack_d3;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [24];
  double dStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010bfda5c0();
  if ((uVar4 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = &PTR____CFConstantStringClassReference_110f212d8;
  }
  else {
    uVar4 = param_4;
    func_0x00010bfd6c40();
    if ((int)uVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar4 = param_4;
      func_0x00010bf98ca0();
      uVar2 = (uint)uVar4;
    }
    uVar4 = param_4;
    func_0x00010bfd6c40();
    if (((uVar2 | (uint)uVar4 ^ 0xffffffff) & 1) == 0) {
      uVar5 = 4;
      ppuVar6 = &PTR____CFConstantStringClassReference_110f212f8;
    }
    else {
      uVar4 = param_4;
      func_0x00010c2a1a80();
      if ((uVar4 & 1) == 0) {
        uVar5 = 2;
        ppuVar6 = &PTR____CFConstantStringClassReference_110f21318;
      }
      else {
        uVar4 = param_4;
        func_0x00010bfdd880();
        if ((uVar4 & 1) != 0) {
          lVar7 = *(long *)(param_2 + _DAT_11278194c);
          func_0x00010bf60480(auStack_80,param_2);
          if (lVar7 == 0) {
            dStack_68 = 0.0;
            uStack_60 = 0;
            uStack_58 = 0;
          }
          else {
            func_0x00010c1282a0(&dStack_68,lVar7);
          }
          uStack_98 = uStack_60;
          dStack_a0 = dStack_68;
          uStack_90 = uStack_58;
          uVar3 = (uint)*(undefined8 *)(param_2 + _DAT_112781940);
          dVar8 = dStack_68;
          func_0x00010bfc8600();
          if (((uVar3 >> 8 & 1) == 0) && (func_0x00010c0ce320(param_4), 0.0 < dVar8)) {
            uStack_158 = uStack_98;
            dStack_160 = dStack_a0;
            uStack_150 = uStack_90;
            func_0x00010c0ce320(param_4);
            _CMTimeMakeWithSeconds(&dStack_c0,1000000000);
            _CMTimeAdd(&dStack_100,&dStack_160,&dStack_c0);
            uStack_98 = uStack_f8;
            dStack_a0 = dStack_100;
            uStack_90 = uStack_f0;
          }
          uStack_b8 = uStack_98;
          dStack_c0 = dStack_a0;
          uStack_b0 = uStack_90;
          uStack_118 = uStack_60;
          dStack_120 = dStack_68;
          uStack_110 = uStack_58;
          if (*(long *)(param_2 + _DAT_112781944) == 0) {
            uStack_d8 = 0;
            uStack_d3 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_cc = 0;
            uStack_f8 = 0;
            dStack_100 = 0.0;
            uStack_e8 = 0;
            uStack_f0 = 0;
          }
          else {
            func_0x00010c117760(&dStack_100);
          }
          if (*(long *)(param_2 + _DAT_112781948) == 0) {
            uStack_138 = 0;
            uStack_133 = 0;
            uStack_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_12c = 0;
            uStack_158 = 0;
            dStack_160 = 0.0;
            uStack_148 = 0;
            uStack_150 = 0;
          }
          else {
            func_0x00010c117760(&dStack_160);
          }
          if (((((ulong)dStack_100 & 1) == 0) || (((ulong)dStack_100 & 0x10000) != 0)) &&
             ((((ulong)dStack_160 & 1) == 0 || (((ulong)dStack_160 & 0x10000) != 0)))) {
            *param_1 = 5;
            param_1[1] = &PTR____CFConstantStringClassReference_110f21378;
            *(undefined2 *)(param_1 + 2) = 0;
          }
          else {
            _objc_retain(uStack_c8);
            _objc_retain(uStack_128);
            func_0x00010bdf8680();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uStack_12c;
            bVar1 = (byte)uStack_cc;
            if (((byte)uStack_cc == 1) && ((uStack_12c & 0xff) != 0)) {
              uVar5 = 1;
LAB_1090c2b74:
              *param_1 = uVar5;
              func_0x0001090c30b8();
              param_1[1] = param_2;
            }
            else {
              if (uVar2 == 0) {
                uVar5 = 3;
                goto LAB_1090c2b74;
              }
              *param_1 = 4;
              param_1[1] = &PTR____CFConstantStringClassReference_110f21398;
            }
            *(byte *)(param_1 + 2) = bVar1 ^ 1;
            *(byte *)((long)param_1 + 0x11) = (byte)uVar3 ^ 1;
            func_0x0001090c30b0();
          }
          _objc_release(uStack_128);
          _objc_release(uStack_c8);
          goto LAB_1090c28f4;
        }
        if (uVar2 == 0) {
          uVar5 = 3;
          ppuVar6 = &PTR____CFConstantStringClassReference_110f21358;
        }
        else {
          uVar5 = 4;
          ppuVar6 = &PTR____CFConstantStringClassReference_110f21338;
        }
      }
    }
    *param_1 = uVar5;
    param_1[1] = ppuVar6;
  }
  *(undefined2 *)(param_1 + 2) = 0;
LAB_1090c28f4:
  func_0x0001090c3020();
  return;
}



/* Entry: 1090c2bec; end: 1090c2bef; -[SCNeoStateManager timeDidJump] */

void FUN_1090c2bec(void)

{
  return;
}



/* Entry: 1090c2bf0; end: 1090c2e73; -[SCNeoStateManager onEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c2bf0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_11278194c;
  lVar6 = *(long *)(param_1 + lVar7);
  func_0x00010bf60480(auStack_a8);
  if (lVar6 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010c1282a0(&uStack_90,lVar6);
  }
  func_0x00010c0b1720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090c30a8();
  func_0x0001090c30d0();
  func_0x0001090c3018();
  lVar9 = (long)_DAT_112781944;
  uVar2 = (uint)*(undefined8 *)(param_1 + lVar9);
  func_0x0001090c30e4();
  func_0x00010bfda100();
  uVar3 = (uint)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c071800();
  lVar8 = (long)_DAT_112781948;
  uVar4 = (uint)*(undefined8 *)(param_1 + lVar8);
  func_0x0001090c30e4();
  func_0x00010bfda100();
  uVar5 = (uint)*(undefined8 *)(param_1 + lVar8);
  func_0x00010c071800();
  lVar6 = *(long *)(param_1 + _DAT_112781940);
  func_0x00010c0807a0();
  uVar1 = 1;
  if (((uVar3 & (uVar2 ^ 1) | (uint)lVar6 ^ 0xffffffff) & 1) == 0) {
    uVar1 = uVar5 & (uVar4 ^ 1);
  }
  uStack_78 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
  uStack_70 = *(undefined4 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
  uVar3 = *(uint *)(PTR__kCMTimePositiveInfinity_110348658 + 0xc);
  if (uVar2 != 0) {
    uStack_d8 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
    uStack_d0 = *(undefined4 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
    lVar6 = *(long *)(param_1 + lVar9);
    uStack_cc = uVar3;
    uStack_c8 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
    if (lVar6 == 0) {
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
    }
    else {
      func_0x00010c08b080(&uStack_f0);
    }
    func_0x0001090c3028();
    func_0x0001090c3088();
  }
  if (uVar4 != 0) {
    func_0x0001090c3070();
    lVar6 = *(long *)(param_1 + lVar8);
    if (lVar6 == 0) {
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
    }
    else {
      func_0x00010c08b080(&uStack_f0);
    }
    func_0x0001090c3028();
    func_0x0001090c3088();
  }
  if (((uVar3 ^ 0xffffffff) & 5) != 0) {
    func_0x00010c0b1720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c30a8();
    func_0x0001090c30d0();
    func_0x0001090c3018();
    lVar6 = *(long *)(param_1 + lVar7);
    func_0x0001090c3070();
    if (lVar6 == 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010c26fde0(&uStack_c0);
    }
    lVar6 = param_1;
    func_0x00010c1500a0();
  }
  if (uVar1 != 0) {
    func_0x00010c0b1720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c30a8();
    func_0x0001090c30d0();
    func_0x0001090c3018();
    lVar6 = param_1 + _DAT_112781950;
    _objc_loadWeakRetained();
    func_0x00010c252720();
    func_0x0001090c3018();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090c3018();
  __Unwind_Resume();
  pcStack_f8 = FUN_1090c2e74;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1090c2ed4;
  puStack_110 = &UNK_11087bb00;
  lStack_108 = lVar6;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x000107c27d8c(*(undefined8 *)(lVar6 + _DAT_11278193c),&puStack_128);
  return;
}



/* Entry: 1090c2e74; end: 1090c2ed3; -[SCNeoStateManager effectiveRateDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c2e74(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1090c2ed4;
  puStack_20 = &UNK_11087bb00;
  lStack_18 = param_1;
  func_0x000107c27d8c(*(undefined8 *)(param_1 + _DAT_11278193c),&puStack_38);
  return;
}



/* Entry: 1090c2ed4; end: 1090c2edb;  */

void FUN_1090c2ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_onEvent_1126169e8);
  return;
}



/* Entry: 1090c2edc; end: 1090c2f9f; -[SCNeoStateManager _debugMessageFromAudioOutputState:videoOutputState:currentTime:targetTime:] */

void FUN_1090c2edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_50 = param_5[2];
  _CMTimeGetSeconds(&uStack_60);
  uStack_58 = param_6[1];
  uStack_60 = *param_6;
  uStack_50 = param_6[2];
  _CMTimeGetSeconds(&uStack_60);
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f213b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090c30d8();
  func_0x0001090bfff8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1090c2fa0; end: 1090c300b; -[SCNeoStateManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c2fa0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278193c,0);
  FUN_1090c300c((long)_DAT_112781954);
  FUN_1090c300c((long)_DAT_112781940);
  _objc_destroyWeak(param_1 + _DAT_112781950);
  FUN_1090c300c((long)_DAT_11278194c);
  FUN_1090c300c((long)_DAT_112781948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112781944,0);
  return;
}



/* Entry: 1090c300c; end: 1090c30f7;  */

void FUN_1090c300c(long param_1)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(unaff_x19 + param_1,0);
  return;
}



/* Entry: 1090c30f8; end: 1090c313f; -[SCNeoStructVector initWithStructSize:] */

void FUN_1090c30f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700640;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(ulong *)((long)puVar1 + 0x10) = param_3 + 7U & 0xfffffffffffffff8;
  }
  return;
}



/* Entry: 1090c3140; end: 1090c3187; -[SCNeoStructVector dealloc] */

void FUN_1090c3140(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_112700640;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090c3188; end: 1090c31e3; -[SCNeoStructVector _reallocAtCapacity:] */

void FUN_1090c3188(long param_1,undefined8 param_2,long param_3)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001090c33f0();
  param_3 = *(long *)(param_1 + 0x10) * param_3;
  FUN_1090947b0();
  if (*(long *)(unaff_x20 + 8) != 0) {
    _memcpy(param_3,*(long *)(unaff_x20 + 8),
            *(long *)(unaff_x20 + 0x10) * *(long *)(unaff_x20 + 0x18));
    _free(*(undefined8 *)(unaff_x20 + 8));
  }
  *(long *)(unaff_x20 + 8) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
  return;
}



/* Entry: 1090c31e4; end: 1090c31f7; -[SCNeoStructVector ensureCapacity:] */

void FUN_1090c31e4(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x20) < param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010be868f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reallocAtCapacity__11257f3d8);
    return;
  }
  return;
}



/* Entry: 1090c31f8; end: 1090c324b; -[SCNeoStructVector structAtIndex:] */

long FUN_1090c31f8(long param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001090c33f0();
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_110f213d8);
  }
  return *(long *)(unaff_x20 + 8) + *(long *)(unaff_x20 + 0x10) * unaff_x19;
}



/* Entry: 1090c324c; end: 1090c32a3; -[SCNeoStructVector _appendWritableStruct] */

long FUN_1090c324c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = lVar2 + 1;
  if (*(ulong *)(param_1 + 0x20) <= uVar1) {
    uVar1 = *(ulong *)(param_1 + 0x20) * 2;
    if (uVar1 < 9) {
      uVar1 = 8;
    }
    func_0x00010be868e0(param_1,param_2,uVar1);
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = lVar2 + 1;
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  return *(long *)(param_1 + 8) + *(long *)(param_1 + 0x10) * lVar2;
}



/* Entry: 1090c32a4; end: 1090c32cb; -[SCNeoStructVector appendStruct:] */

void FUN_1090c32a4(void)

{
  func_0x0001090c33f0();
  func_0x00010bdcd6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)();
  return;
}



/* Entry: 1090c32cc; end: 1090c32fb; -[SCNeoStructVector appendWritableStruct] */

undefined8 FUN_1090c32cc(undefined8 param_1)

{
  func_0x00010bdcd6a0();
  _bzero();
  return param_1;
}



/* Entry: 1090c32fc; end: 1090c3307; -[SCNeoStructVector bytesLength] */

long FUN_1090c32fc(long param_1)

{
  return *(long *)(param_1 + 0x10) * *(long *)(param_1 + 0x18);
}



/* Entry: 1090c3308; end: 1090c330f; -[SCNeoStructVector bytes] */

undefined8 FUN_1090c3308(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1090c3310; end: 1090c3387; -[SCNeoStructVector mutableCopy] */

undefined * FUN_1090c3310(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_PTR_1126dd398;
  _objc_alloc(PTR_PTR_1126dd398);
  func_0x00010c04e940();
  func_0x00010bf96660();
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 0x18); uVar3 = uVar3 + 1) {
    lVar2 = param_1;
    func_0x00010c25de40(param_1,param_2,uVar3);
    func_0x00010bf07100(puVar1,param_2,lVar2);
  }
  return puVar1;
}



/* Entry: 1090c3388; end: 1090c33d3; -[SCNeoStructVector setSize:] */

void FUN_1090c3388(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong unaff_x19;
  long unaff_x20;
  
  if (*(long *)(param_1 + 0x18) != param_3) {
    func_0x0001090c33f0();
    func_0x00010bf96660();
    uVar1 = *(ulong *)(unaff_x20 + 0x18);
    if (uVar1 <= unaff_x19 && unaff_x19 - uVar1 != 0) {
      _bzero(*(long *)(unaff_x20 + 8) + *(long *)(unaff_x20 + 0x10) * uVar1,
             *(long *)(unaff_x20 + 0x10) * (unaff_x19 - uVar1));
    }
    *(ulong *)(unaff_x20 + 0x18) = unaff_x19;
  }
  return;
}



/* Entry: 1090c33d4; end: 1090c33db; -[SCNeoStructVector size] */

undefined8 FUN_1090c33d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090c33dc; end: 1090c33fb; -[SCNeoStructVector capacity] */

undefined8 FUN_1090c33dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090c33fc; end: 1090c34a7; -[SCNeoSynchronizer init] */

undefined1 * FUN_1090c33fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700648;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _CMClockGetHostTimeClock();
    _CMTimebaseCreateWithSourceClock
              (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,uVar3,
               (undefined1 *)((long)puVar1 + 8));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1090c34a8; end: 1090c34af; -[SCNeoSynchronizer timebase] */

undefined8 FUN_1090c34a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1090c34b0; end: 1090c351b; -[SCNeoSynchronizer setTime:] */

void FUN_1090c34b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  func_0x0001090c3780(param_3[2],*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11fdc0(param_1);
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  func_0x00010c1e7660(uVar1,param_2,&uStack_50);
  return;
}



/* Entry: 1090c351c; end: 1090c3523; -[SCNeoSynchronizer time] */

void FUN_1090c351c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimebaseGetTime_1103484d8)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1090c3524; end: 1090c3567; -[SCNeoSynchronizer setRate:] */

void FUN_1090c3524(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x0001090c3774();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26f000(auStack_48,param_1);
  func_0x0001090c3798(uVar1,param_2,auStack_48);
  return;
}



/* Entry: 1090c3568; end: 1090c3583; -[SCNeoSynchronizer rate] */

float FUN_1090c3568(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  _CMTimebaseGetRate(*(undefined8 *)(param_2 + 8));
  return (float)(double)CONCAT44(uVar2,uVar1);
}



/* Entry: 1090c3584; end: 1090c35df; -[SCNeoSynchronizer setRate:time:] */

void FUN_1090c3584(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001090c3774();
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  func_0x0001090c3780(param_3[2],*(undefined8 *)(param_1 + 8));
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  func_0x0001090c3798(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_50);
  return;
}



/* Entry: 1090c35e0; end: 1090c3687; -[SCNeoSynchronizer addAudioRenderer:] */

void FUN_1090c35e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x0001090c3764();
  _objc_retain();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___AVSampleBufferRenderSynchronizer_1126dd360;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  _objc_release(uVar1);
  func_0x00010befaee0(*(undefined8 *)(unaff_x20 + 0x20),param_2,*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x00010c11fdc0();
  func_0x00010c26f000(auStack_58);
  func_0x0001090c3798(uVar1,param_2,auStack_58);
  _objc_release();
  return;
}



/* Entry: 1090c3688; end: 1090c36cb; -[SCNeoSynchronizer addVideoRenderer:] */

void FUN_1090c3688(void)

{
  long unaff_x20;
  
  func_0x0001090c3764();
  func_0x00010befa120(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x00010c183980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}


