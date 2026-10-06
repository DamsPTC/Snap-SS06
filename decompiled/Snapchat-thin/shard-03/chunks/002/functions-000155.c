/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102623534; end: 1026236f7;  */

ulong FUN_102623534(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102623618);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10262361c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bc1f0;
    func_0x000107c61168(PTR_PTR_1126bc1f0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bc1f0;
    func_0x000107c61168(PTR_PTR_1126bc1f0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102623b28(0,0x112eb07b8,&PTR_PTR_1126bc1f0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026236f8);
  (*pcVar2)();
}



/* Entry: 1026236f8; end: 10262392b;  */

ulong FUN_1026236f8(ulong param_1,undefined *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  if (param_1 != 0) {
    uVar3 = param_1;
    puVar11 = param_2;
    func_0x000107c61174();
    uVar12 = uVar3;
    func_0x000107c44ed8();
    func_0x000107c61180();
    uVar4 = uVar12;
    func_0x000107c5faec();
    puVar8 = puVar11;
    func_0x000107c61170(uVar12);
    func_0x000107c6142c(puVar11);
    uVar12 = uVar4 & 0xffffffffffff;
    if (((ulong)puVar11 & 0x2000000000000000) != 0) {
      uVar12 = (ulong)puVar11 >> 0x38 & 0xf;
    }
    if (uVar12 != 0) {
      if ((ulong)param_2 >> 0x3e == 0) {
        puVar11 = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar11 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < param_2) {
          puVar11 = param_2;
        }
        func_0x000107c60480();
      }
      if (puVar11 != (undefined *)0x0) {
        uVar12 = 0;
        do {
          if (((ulong)param_2 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1026238e8);
              (*pcVar2)();
            }
            uVar4 = *(ulong *)(param_2 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar4 = uVar12;
            puVar8 = param_2;
            FUN_102623534();
          }
          puVar1 = (undefined *)(uVar12 + 1);
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1026238e4);
            (*pcVar2)();
          }
          uVar5 = uVar4;
          func_0x000107c4d3e4();
          func_0x000107c61180();
          uVar6 = uVar5;
          func_0x000107c5faec();
          puVar9 = puVar8;
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(puVar8);
          uVar5 = uVar6 & 0xffffffffffff;
          if (((ulong)puVar8 & 0x2000000000000000) != 0) {
            uVar5 = (ulong)puVar8 >> 0x38 & 0xf;
          }
          puVar8 = puVar9;
          if (uVar5 != 0) {
            uVar5 = uVar4;
            func_0x000107c4d3e4();
            func_0x000107c61180();
            uVar6 = uVar5;
            func_0x000107c5faec();
            puVar10 = puVar9;
            func_0x000107c61170(uVar5);
            uVar5 = uVar3;
            uStack_70 = uVar6;
            puStack_68 = puVar9;
            func_0x000107c44ed8();
            func_0x000107c61180();
            uVar6 = uVar5;
            func_0x000107c5faec();
            func_0x000107c61170(uVar5);
            uStack_80 = uVar6;
            puStack_78 = puVar10;
            func_0x000100e8b654();
            puVar7 = &uStack_80;
            puVar8 = PTR___sSSN_11034da80;
            func_0x000107c6022c(puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar5,uVar5);
            func_0x000107c6142c(puVar9);
            func_0x000107c6142c(puVar10);
            if (((ulong)puVar7 & 1) != 0) {
              func_0x000107c55180(uVar3);
              func_0x000107c61170(uVar4);
              return param_1;
            }
          }
          func_0x000107c61170(uVar4);
          uVar12 = uVar12 + 1;
        } while (puVar1 != puVar11);
      }
    }
    func_0x000107c61170(uVar3);
  }
  return 0;
}



/* Entry: 10262392c; end: 1026239fb;  */

undefined * FUN_10262392c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c4077c();
  func_0x000107c4077c(param_3);
  puVar1 = PTR_PTR_1126b1d80;
  func_0x000107c610f8(PTR_PTR_1126b1d80);
  func_0x000107c470e4(param_1,param_2);
  func_0x000107c49eac(param_3);
  puVar2 = PTR_PTR_1126b1d78;
  func_0x000107c610f8(PTR_PTR_1126b1d78);
  func_0x000107c46cdc();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c558c0(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c5a334(puVar2);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1026239fc; end: 102623a53;  */

void FUN_1026239fc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102623ba4;
  plVar2[2] = param_1;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x1026202d4;
  plVar1[0x13] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261ef90,0,0);
  return;
}



/* Entry: 102623a54; end: 102623ab7;  */

void FUN_102623a54(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102623ba8;
  plVar4[2] = param_1;
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_10262037c;
  plVar3[0x13] = lVar2;
  plVar3[0x14] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026203fc,0,0);
  return;
}



/* Entry: 102623ab8; end: 102623b0f;  */

void FUN_102623ab8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102623bac;
  plVar2[2] = param_1;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x102620698;
  plVar1[0x13] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102620700,0,0);
  return;
}



/* Entry: 102623b10; end: 102623b27;  */

void FUN_102623b10(long param_1)

{
  func_0x000102623010(param_1 + 0x20);
  return;
}



/* Entry: 102623b28; end: 102623b67;  */

void FUN_102623b28(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102623b68; end: 102623bcf;  */

void FUN_102623b68(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = *(undefined1 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000102621fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102623bd0; end: 102623c6b;  */

void FUN_102623bd0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000109021904();
    if ((int)lVar1 == 0) {
      func_0x000107c5fcec(0);
      uStack_60 = uVar2;
      lStack_58 = param_2;
      func_0x000100f7a598(0x102626e14,auStack_70,
                          "MapDestinationServicesImplementation/MapAppTriggerObserver.swift",0x40,2,
                          0xac);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102623c6c; end: 102623d2f;  */

void FUN_102623c6c(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      func_0x000100083b20(&lStack_60);
      lVar1 = lStack_60;
      lVar3 = lStack_60;
      func_0x000107c5e2fc();
      func_0x000107c61170(lVar1);
      func_0x000100083b20(&lStack_60);
      if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102623d30);
        (*pcVar2)();
      }
      func_0x000107c5a720(lStack_60);
      func_0x000107c61170(lStack_60);
      *(undefined1 *)(param_2 + 0x30) = 1;
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102623d30; end: 102623eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102623d30(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(lVar3 + _DAT_112fed8a0);
    uVar2 = ((undefined8 *)(lVar3 + _DAT_112fed8a0))[1];
    func_0x000107c5fcec(0);
    uStack_60 = uVar1;
    uStack_58 = uVar2;
    lStack_50 = param_2;
    func_0x000100f7a598(FUN_102626da0,auStack_70,
                        "MapDestinationServicesImplementation/MapAppTriggerObserver.swift",0x40,2,
                        0xd8);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102623eb0; end: 102623f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102623eb0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112fed9c8);
    func_0x000107c5fcec(0);
    lStack_70 = param_2;
    uStack_68 = uVar2;
    func_0x00010206cdec(0x102626ccc,auStack_80,
                        "MapDestinationServicesImplementation/MapAppTriggerObserver.swift",0x40,2,
                        0xf6);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102623f60; end: 102624003;  */

void FUN_102623f60(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = 0;
    func_0x000107c5fcec(0);
    uStack_70 = uVar2;
    lStack_68 = param_2;
    func_0x000100f7a598(param_3,auStack_80,
                        "MapDestinationServicesImplementation/MapAppTriggerObserver.swift",0x40,2,
                        param_4,uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102624004; end: 102624097;  */

void FUN_102624004(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = 0;
    func_0x000107c5fcec(0);
    func_0x00010206cdec(param_3,param_2,
                        "MapDestinationServicesImplementation/MapAppTriggerObserver.swift",0x40,2,
                        param_4,uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102624098; end: 10262414f;  */

void FUN_102624098(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + *param_3);
    uVar2 = ((undefined8 *)(lVar4 + *param_3))[1];
    uVar3 = 0;
    func_0x000107c5fcec(0);
    lStack_70 = param_2;
    uStack_68 = uVar1;
    uStack_60 = uVar2;
    func_0x00010206cdec(param_4,auStack_80,
                        "MapDestinationServicesImplementation/MapAppTriggerObserver.swift",0x40,2,
                        param_5,uVar3);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102624150; end: 10262420b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102624150(long *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  lVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar1 = (ulong *)(lVar4 + _DAT_112fed980);
    uVar3 = puVar1[1];
    uVar2 = *puVar1 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar2 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      func_0x000107c5fcec(0);
      lStack_60 = param_2;
      lStack_58 = lVar4;
      func_0x00010206cdec(0x102625ffc,auStack_70,
                          "MapDestinationServicesImplementation/MapAppTriggerObserver.swift",0x40,2,
                          0x115);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10262420c; end: 1026242af;  */

void FUN_10262420c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001048580f8(&uStack_38);
    func_0x000107c61574(param_2);
    lVar1 = 0;
    FUN_1026e821c();
    func_0x000107c613fc();
    *(undefined1 *)(lVar1 + 0x10) = 2;
    func_0x000107c4d4a8(uStack_38);
    func_0x000107c615e8(uStack_38);
    func_0x000107c61574(lVar1);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 1026242b0; end: 10262436b;  */

void FUN_1026242b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  long lVar1;
  undefined8 uStack_48;
  
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001048580f8(&uStack_48);
    func_0x000107c61574(param_2);
    lVar1 = 0;
    (*param_5)();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x10) = param_3;
    *(undefined8 *)(lVar1 + 0x18) = param_4;
    func_0x000107c61434(param_4);
    func_0x000107c4d4a8(uStack_48);
    func_0x000107c615e8(uStack_48);
    func_0x000107c61574(lVar1);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 10262436c; end: 1026244c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262436c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fed6a0);
  uVar3 = ((undefined8 *)(param_1 + _DAT_112fed6a0))[1];
  uVar7 = *(undefined8 *)(param_1 + _DAT_112fed6b0);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112fed6a8);
  uVar9 = ((undefined8 *)(param_1 + _DAT_112fed6a8))[1];
  uVar6 = *(undefined8 *)(param_1 + _DAT_112fed6b8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed6c0);
  uVar4 = ((undefined8 *)(param_1 + _DAT_112fed6c0))[1];
  lVar5 = 0;
  func_0x0001026e6dc8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  *(undefined8 *)(lVar5 + 0x28) = uVar9;
  *(undefined8 *)(lVar5 + 0x30) = uVar7;
  *(undefined8 *)(lVar5 + 0x38) = uVar6;
  *(undefined8 *)(lVar5 + 0x40) = uVar2;
  *(undefined8 *)(lVar5 + 0x48) = uVar4;
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar6);
  }
  else {
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar6);
    func_0x0001048580f8(&uStack_58);
    func_0x000107c61574(param_2);
    func_0x000107c4d4a8(uStack_58);
    func_0x000107c615e8(uStack_58);
  }
  func_0x000107c61574(lVar5);
  return;
}



/* Entry: 1026244c4; end: 1026245cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026244c4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112fed8e0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fed8d0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112fed8d0))[1];
  uVar5 = *(undefined8 *)(param_1 + _DAT_112fed8d8);
  uVar6 = ((undefined8 *)(param_1 + _DAT_112fed8d8))[1];
  uVar7 = *(undefined8 *)(param_1 + _DAT_112fed8e8);
  lVar3 = 0;
  FUN_1026e8058();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  *(undefined8 *)(lVar3 + 0x38) = uVar7;
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c61434(uVar2);
  }
  else {
    func_0x000107c61434(uVar2);
    func_0x0001048580f8(&uStack_38);
    func_0x000107c61574(param_2);
    func_0x000107c4d4a8(uStack_38);
    func_0x000107c615e8(uStack_38);
  }
  func_0x000107c61574(lVar3);
  return;
}



/* Entry: 1026245cc; end: 1026246b7;  */

void FUN_1026245cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_38;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  FUN_1026e772c(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x0001026e74cc(lVar1,0,0x22,0,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x0001048580f8(&uStack_38);
    func_0x000107c61574(param_3);
    func_0x000107c4d4a8(uStack_38);
    func_0x000107c615e8(uStack_38);
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1026246b8; end: 10262471f;  */

void FUN_1026246b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  plVar2 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102624720;
  plVar2[0x13] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026248e4,0,0);
  return;
}



/* Entry: 102624720; end: 10262478b;  */

void FUN_102624720(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined1 *)(lVar2 + 0x48) = param_1;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262478c,uVar3,uVar1);
  return;
}



/* Entry: 10262478c; end: 1026248cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262478c(void)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cVar2 = *(char *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  if (cVar2 == '\x01') {
    lVar4 = *(long *)(unaff_x22 + 0x20) + 0x10;
    func_0x000107c61648();
    if (lVar4 == 0) goto LAB_1026248b0;
    func_0x0001048580f8(unaff_x22 + 0x18);
    func_0x000107c61574(lVar4);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar3 = 0;
    FUN_1026e892c(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0x20);
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112fed9f8);
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112feda00);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    FUN_1026e772c(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar5);
    func_0x0001026e738c(uVar6,uVar7,uVar3,uVar5,0x22,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61648();
    if (lVar4 == 0) {
      func_0x000107c61170(uVar3);
      goto LAB_1026248b0;
    }
    func_0x0001048580f8(unaff_x22 + 0x10);
    func_0x000107c61574(lVar4);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  }
  func_0x000107c4d4a8(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar5);
LAB_1026248b0:
                    /* WARNING: Could not recover jumptable at 0x0001026248c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026248cc; end: 1026248e3;  */

void FUN_1026248cc(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026248e4,0,0);
  return;
}



/* Entry: 1026248e4; end: 10262499b;  */

void FUN_1026248e4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10262499c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar2 = 0x112d5eca8;
  func_0x0001000285a8(0x112d5eca8,&UNK_10dac4ed0);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_10111b368;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11052c210;
  func_0x000107c43064(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10262499c; end: 1026249db;  */

void FUN_10262499c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026249dc,0,0);
  return;
}



/* Entry: 1026249dc; end: 102624a57;  */

void FUN_1026249dc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
  if (lVar3 != 0) {
    func_0x000107c61174();
    lVar1 = lVar3;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar3);
    if (lVar1 == 0) {
      uVar2 = 0;
      goto LAB_102624a44;
    }
    func_0x000107c61170(lVar1);
  }
  uVar2 = 1;
LAB_102624a44:
                    /* WARNING: Could not recover jumptable at 0x000102624a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 102624a58; end: 102624b3f;  */

void FUN_102624a58(undefined1 *param_1,double param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_38;
  
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001048580f8(&uStack_38);
    func_0x000107c61574(param_3);
    if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102624b38);
      (*pcVar1)();
    }
    if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102624b3c);
      (*pcVar1)();
    }
    if (1.8446744073709552e+19 <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102624b40);
      (*pcVar1)();
    }
    lVar3 = (long)param_2;
    uVar2 = 0;
    FUN_1026e9b28(0);
    func_0x000107c610f8();
    func_0x0001026e9a04(lVar3,uVar2);
    func_0x000107c4d4a8(uStack_38);
    func_0x000107c615e8(uStack_38);
    func_0x000107c61170(lVar3);
    *param_1 = 0;
  }
  return;
}



/* Entry: 102624b40; end: 102624c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102624b40(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fed610);
  uVar4 = ((undefined8 *)(param_1 + _DAT_112fed610))[1];
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed608);
  uVar5 = ((undefined8 *)(param_1 + _DAT_112fed608))[1];
  uVar3 = *(undefined8 *)(param_1 + _DAT_112fed618);
  uVar6 = ((undefined8 *)(param_1 + _DAT_112fed618))[1];
  lVar7 = 0;
  FUN_1026e691c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar1;
  *(undefined8 *)(lVar7 + 0x18) = uVar4;
  *(undefined8 *)(lVar7 + 0x20) = uVar2;
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  *(undefined8 *)(lVar7 + 0x30) = uVar3;
  *(undefined8 *)(lVar7 + 0x38) = uVar6;
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
  }
  else {
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x0001048580f8(&uStack_58);
    func_0x000107c61574(param_2);
    func_0x000107c4d4a8(uStack_58);
    func_0x000107c615e8(uStack_58);
  }
  func_0x000107c61574(lVar7);
  return;
}



/* Entry: 102624c5c; end: 102624cf7;  */

void FUN_102624c5c(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001048580f8(&uStack_38);
    func_0x000107c61574(param_2);
    uVar1 = 0;
    (*param_3)(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c4d4a8(uStack_38);
    func_0x000107c615e8(uStack_38);
    func_0x000107c61170(uVar1);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 102624cf8; end: 102624dc3;  */

void FUN_102624cf8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,code *param_6)

{
  undefined8 uStack_58;
  
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001048580f8(&uStack_58);
    func_0x000107c61574(param_2);
    (*param_5)(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_4);
    (*param_6)(param_3,param_4);
    func_0x000107c4d4a8(uStack_58);
    func_0x000107c615e8(uStack_58);
    func_0x000107c61170(param_3);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 102624dc4; end: 102624eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102624dc4(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  param_2 = param_2 + 0x10;
  lVar5 = param_3;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001048580f8(&uStack_68);
    func_0x000107c61574(param_2);
    uVar4 = *(undefined8 *)(param_3 + _DAT_112fed980);
    uVar1 = ((undefined8 *)(param_3 + _DAT_112fed980))[1];
    uVar6 = *(undefined8 *)(param_3 + _DAT_112fed988);
    uVar7 = ((undefined8 *)(param_3 + _DAT_112fed988))[1];
    func_0x000107c61434(uVar1);
    lVar2 = param_3;
    func_0x0001026261cc(param_3);
    FUN_1026262fc(param_3);
    uVar3 = 0;
    FUN_1026e95f0(0);
    func_0x000107c610f8();
    func_0x0001026e93e8(uVar6,uVar7,uVar4,uVar1,1,0x22,lVar2,lVar5,param_3,uVar3);
    func_0x000107c4d4a8(uStack_68);
    func_0x000107c615e8(uStack_68);
    func_0x000107c61170(uVar4);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 102624ef0; end: 10262516b;  */

undefined * FUN_102624ef0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [32];
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar13 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    uVar7 = 0x112eb08a0;
    func_0x0001000285a8(0x112eb08a0,&UNK_10dac4ea8);
    func_0x000107c60498(puVar12,uVar7);
    puVar13 = puVar12;
  }
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434(param_1);
  lVar14 = 0;
  while( true ) {
    while (uVar15 != 0) {
      uVar3 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar14 << 6;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      uStack_90 = uVar3;
      uStack_88 = uVar2;
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar9 * 0x20,auStack_80);
      func_0x0001000bb420(auStack_80,auStack_b0);
      uVar7 = 0;
      FUN_102626be8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c61434(uVar2);
      puVar8 = &uStack_b8;
      func_0x000107c6147c(puVar8,auStack_b0,PTR___sypN_11034f1a8 + 8,uVar7,6);
      uVar7 = uStack_b8;
      if ((int)puVar8 == 0) {
        func_0x000102626c28(&uStack_90,0x112da9f08,&UNK_10da55920);
        func_0x000107c61574(puVar13);
        func_0x000107c61574(param_1);
        return (undefined *)0x0;
      }
      uVar15 = uVar15 - 1 & uVar15;
      func_0x000107c61434(uVar2);
      func_0x000102626c28(&uStack_90,0x112da9f08,&UNK_10da55920);
      uVar9 = uVar3;
      uVar10 = uVar2;
      func_0x000100029284();
      if ((uVar10 & 1) == 0) {
        if (*(ulong *)(puVar13 + 0x18) <= *(ulong *)(puVar13 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102625168);
          (*pcVar4)();
        }
        uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar13 + uVar10 + 0x40) =
             *(ulong *)(puVar13 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar13 + 0x30) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        *(undefined8 *)(*(long *)(puVar13 + 0x38) + uVar9 * 8) = uVar7;
        if (SCARRY8(*(long *)(puVar13 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10262516c);
          (*pcVar4)();
        }
        *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + 1;
      }
      else {
        puVar1 = (ulong *)(*(long *)(puVar13 + 0x30) + uVar9 * 0x10);
        uVar10 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        func_0x000107c6142c(uVar10);
        uVar6 = *(undefined8 *)(*(long *)(puVar13 + 0x38) + uVar9 * 8);
        *(undefined8 *)(*(long *)(puVar13 + 0x38) + uVar9 * 8) = uVar7;
        func_0x000107c61170(uVar6);
      }
    }
    bVar5 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102625164);
      (*pcVar4)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar14) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  func_0x000107c61574(param_1);
  return puVar13;
}



/* Entry: 10262516c; end: 1026251a7;  */

void FUN_10262516c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026251a8; end: 1026251cb;  */

void FUN_1026251a8(undefined8 *param_1)

{
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  return;
}



/* Entry: 1026251cc; end: 1026251eb;  */

void FUN_1026251cc(void)

{
  func_0x000107c61168(&PTR_PTR_112eb0820);
  return;
}



/* Entry: 1026251ec; end: 102625df3;  */

void FUN_1026251ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  func_0x000107c61644(unaff_x20 + 0x10,0);
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c614f0(param_1);
  plVar2 = (long *)0x0;
  func_0x000103b3dd78();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_10267c6f8(plVar2,param_1,plVar2);
  puVar4 = &UNK_11052c1d0;
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar7 = *(code **)(*plVar2 + 0x60);
  func_0x000107c6157c();
  pcVar6 = FUN_102625df4;
  puVar5 = puVar3;
  (*pcVar7)(FUN_102625df4);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(pcVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar7 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar1);
  (*pcVar7)();
  func_0x000107c615e8(pcVar6);
  func_0x000107c61574(uVar1);
  plVar2 = (long *)0x0;
  func_0x000103b3b314();
  FUN_10267c6f8();
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uVar1 = 0x102625e20;
  puVar3 = puVar4;
  (**(code **)(*plVar2 + 0x60))(0x102625e20);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c614f0(uVar1);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(puVar3 + 0x10);
  func_0x000107c6157c(uVar8);
  (*pcVar6)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar8);
  func_0x000109021a1c();
  if (param_4 != 0) {
    plVar2 = (long *)0x0;
    func_0x000103b3bb3c();
    FUN_10267c6f8();
    puVar4 = &UNK_11052c1d0;
    func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    pcVar6 = FUN_102625fac;
    puVar3 = puVar4;
    (**(code **)(*plVar2 + 0x60))(FUN_102625fac);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c614f0(pcVar6);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    pcVar7 = *(code **)(puVar3 + 0x10);
    func_0x000107c6157c(uVar1);
    (*pcVar7)();
    func_0x000107c615e8(pcVar6);
    func_0x000107c61574(uVar1);
  }
  plVar2 = (long *)0x0;
  func_0x000103b3b4b4();
  FUN_10267c6f8();
  puVar4 = &UNK_11052c1d0;
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar1 = 0x102625e44;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(0x102625e44);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(uVar1);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar8);
  (*pcVar6)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar8);
  plVar2 = (long *)0x0;
  func_0x000103b3aa24();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar1 = 0x102625e70;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(0x102625e70);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(uVar1);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar8);
  (*pcVar6)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar8);
  plVar2 = (long *)0x0;
  func_0x000103b3b164();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar6 = FUN_102625e9c;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_102625e9c);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(pcVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar7 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar1);
  (*pcVar7)();
  func_0x000107c615e8(pcVar6);
  func_0x000107c61574(uVar1);
  plVar2 = (long *)0x0;
  func_0x000103b3de08();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar6 = FUN_102625ea4;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_102625ea4);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(pcVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar7 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar1);
  (*pcVar7)();
  func_0x000107c615e8(pcVar6);
  func_0x000107c61574(uVar1);
  plVar2 = (long *)0x0;
  func_0x000103b3de98();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar1 = 0x102625ec8;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(0x102625ec8);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(uVar1);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar8);
  (*pcVar6)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar8);
  plVar2 = (long *)0x0;
  func_0x000103b3c0e0();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar1 = 0x102625eec;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(0x102625eec);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(uVar1);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar8);
  (*pcVar6)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar8);
  plVar2 = (long *)0x0;
  func_0x000103b3e1a8();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar6 = FUN_102625f10;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_102625f10);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(pcVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar7 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar1);
  (*pcVar7)();
  func_0x000107c615e8(pcVar6);
  func_0x000107c61574(uVar1);
  plVar2 = (long *)0x0;
  func_0x000103b3be7c();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar1 = 0x102625f18;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar8);
  (*pcVar6)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar8);
  plVar2 = (long *)0x0;
  func_0x000103b3cb10();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar1 = 0x102625f20;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar8);
  (*pcVar6)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar8);
  plVar2 = (long *)0x0;
  func_0x000103b3c91c();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar1 = 0x102625f28;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar8);
  (*pcVar6)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar8);
  plVar2 = (long *)0x0;
  func_0x000103b3a884();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar6 = FUN_102625f30;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar7 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar1);
  (*pcVar7)();
  func_0x000107c615e8(pcVar6);
  func_0x000107c61574(uVar1);
  plVar2 = (long *)0x0;
  func_0x000103b3c4c8();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar1 = 0x102625f54;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar8);
  (*pcVar6)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar8);
  plVar2 = (long *)0x0;
  func_0x000103b3d9e4();
  FUN_10267c6f8();
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar1 = 0x102625f78;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(0x102625f78);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar8);
  (*pcVar6)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar8);
  plVar2 = (long *)0x0;
  func_0x000103b3c7ec();
  FUN_10267c6f8();
  func_0x000107c613fc(&UNK_11052c1d0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  func_0x000107c61574();
  pcVar6 = FUN_102625fa4;
  puVar3 = puVar4;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar7 = *(code **)(puVar3 + 0x10);
  func_0x000107c6157c(uVar1);
  (*pcVar7)();
  func_0x000107c615e8(pcVar6);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102625df4; end: 102625e9b;  */

void FUN_102625df4(void)

{
  FUN_102624098();
  return;
}



/* Entry: 102625e9c; end: 102625ea3;  */

void FUN_102625e9c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000109021904();
    if ((int)lVar2 == 0) {
      func_0x000107c5fcec(0);
      uStack_60 = uVar3;
      lStack_58 = lVar1;
      func_0x000100f7a598(0x102626e14,auStack_70,
                          "MapDestinationServicesImplementation/MapAppTriggerObserver.swift",0x40,2,
                          0xac);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102625ea4; end: 102625f0f;  */

void FUN_102625ea4(void)

{
  FUN_102624004();
  return;
}



/* Entry: 102625f10; end: 102625f2f;  */

void FUN_102625f10(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x30) & 1) == 0) {
      func_0x000100083b20(&lStack_60);
      lVar1 = lStack_60;
      lVar4 = lStack_60;
      func_0x000107c5e2fc();
      func_0x000107c61170(lVar1);
      func_0x000100083b20(&lStack_60);
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102623d30);
        (*pcVar2)();
      }
      func_0x000107c5a720(lStack_60);
      func_0x000107c61170(lStack_60);
      *(undefined1 *)(lVar3 + 0x30) = 1;
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102625f30; end: 102625fa3;  */

void FUN_102625f30(void)

{
  FUN_102623f60();
  return;
}



/* Entry: 102625fa4; end: 102625fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102625fa4(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  lVar5 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    puVar1 = (ulong *)(lVar5 + _DAT_112fed980);
    uVar3 = puVar1[1];
    uVar2 = *puVar1 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar2 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      func_0x000107c5fcec(0);
      lStack_60 = lVar4;
      lStack_58 = lVar5;
      func_0x00010206cdec(0x102625ffc,auStack_70,
                          "MapDestinationServicesImplementation/MapAppTriggerObserver.swift",0x40,2,
                          0x115);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102625fac; end: 102626013;  */

void FUN_102625fac(void)

{
  FUN_102624098();
  return;
}



/* Entry: 102626014; end: 1026262fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102626014(long param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar4 = *(undefined8 **)(param_1 + _DAT_112fed480);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e06dd8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e06dd8);
  puVar2 = param_2;
  if (puVar4[2] == 0) {
LAB_102626098:
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c61434(puVar4);
    func_0x000100029284(ppuVar1);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000107c6142c(puVar4);
      goto LAB_102626098;
    }
    puVar2 = &uStack_70;
    func_0x0001000bb420(puVar4[7] + (long)ppuVar1 * 0x20);
    func_0x000107c6142c(param_2);
    param_2 = puVar4;
  }
  func_0x000107c6142c(param_2);
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  lStack_78 = lStack_58;
  uStack_80 = uStack_60;
  if (lStack_58 != 0) {
    func_0x000100102924(&uStack_90,&uStack_50);
    goto LAB_102626158;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5bc18;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e5bc18);
  if (puVar4[2] == 0) {
LAB_102626128:
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c61434(puVar4);
    puVar3 = puVar2;
    func_0x000100029284(ppuVar1);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000107c6142c(puVar4);
      goto LAB_102626128;
    }
    func_0x0001000bb420(puVar4[7] + (long)ppuVar1 * 0x20,&uStack_50);
    func_0x000107c6142c(puVar2);
    puVar2 = puVar4;
  }
  func_0x000107c6142c(puVar2);
  if (lStack_78 != 0) {
    func_0x000102626c28(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
LAB_102626158:
  if (lStack_38 == 0) {
    func_0x000102626c28(&uStack_50,0x112d387f8,&UNK_10d902650);
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    puVar2 = &uStack_70;
    func_0x000107c6147c(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((int)puVar2 == 0) {
      uStack_70 = 0;
      uStack_68 = 0;
    }
  }
  auVar5._8_8_ = uStack_68;
  auVar5._0_8_ = uStack_70;
  return auVar5;
}



/* Entry: 1026262fc; end: 102626be7;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1026262fc(long param_1,ulong *param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  
  lVar11 = *(long *)(param_1 + _DAT_112fed990);
  if (lVar11 == 0) {
    return (undefined *)0x0;
  }
  puVar14 = *(ulong **)(lVar11 + _DAT_112fed480);
  func_0x000107c61434(puVar14);
  func_0x000107c61174();
  puVar13 = puVar14;
  FUN_102624ef0();
  func_0x000107c6142c(puVar14);
  if (puVar13 == (ulong *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    puVar18 = (ulong *)0x0;
    puVar17 = (ulong *)0x0;
    uVar20 = *(undefined8 *)(param_1 + _DAT_112fed988);
    uVar19 = ((undefined8 *)(param_1 + _DAT_112fed988))[1];
    uStack_b8 = *(undefined8 *)(param_1 + _DAT_112fed980);
    uStack_b0 = ((undefined8 *)(param_1 + _DAT_112fed980))[1];
    uStack_c0 = 0;
    uStack_a8 = 0;
    puVar14 = (ulong *)0x0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e5bb98;
    func_0x000107c5faec();
    if (puVar13[2] == 0) {
      func_0x000107c6142c(param_2);
LAB_102626500:
      uStack_a8 = 0;
    }
    else {
      func_0x000107c61434(puVar13);
      puVar14 = param_2;
      func_0x000100029284();
      if (((ulong)puVar14 & 1) == 0) {
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(puVar13);
        param_2 = puVar14;
        goto LAB_102626500;
      }
      lVar2 = *(long *)(puVar13[7] + (long)ppuVar1 * 8);
      func_0x000107c61174();
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(puVar13);
      param_2 = (ulong *)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c61168();
      lVar3 = lVar2;
      func_0x000107c6148c();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar2);
        goto LAB_102626500;
      }
      uStack_88 = 0;
      puStack_80 = (ulong *)0x0;
      param_2 = &uStack_88;
      func_0x000107c5fae8();
      func_0x000107c61170(lVar2);
      puVar14 = puStack_80;
      if (puStack_80 == (ulong *)0x0) goto LAB_102626500;
      if ((uStack_88 == 0x65757274) && (puStack_80 == (ulong *)0xe400000000000000)) {
        func_0x000107c6142c(0xe400000000000000);
      }
      else {
        uVar4 = uStack_88;
        param_2 = puStack_80;
        func_0x000107c605b8(uStack_88,puStack_80,0x65757274,0xe400000000000000,0);
        func_0x000107c6142c(puVar14);
        if ((uVar4 & 1) == 0) goto LAB_102626500;
      }
      param_2 = (ulong *)0x112d38c88;
      FUN_102626be8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uStack_a8 = 1;
      func_0x000107c6010c();
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e5bbd8;
    func_0x000107c5faec();
    puVar14 = param_2;
    if (puVar13[2] == 0) {
LAB_1026265b8:
      func_0x000107c6142c(param_2);
LAB_1026265bc:
      uStack_c0 = 0;
      puVar17 = (ulong *)0x0;
    }
    else {
      func_0x000107c61434(puVar13);
      func_0x000100029284();
      if (((ulong)puVar14 & 1) == 0) {
        func_0x000107c6142c(param_2);
        param_2 = puVar13;
        goto LAB_1026265b8;
      }
      lVar2 = *(long *)(puVar13[7] + (long)ppuVar1 * 8);
      func_0x000107c61174();
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(puVar13);
      puVar14 = (ulong *)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c61168();
      lVar3 = lVar2;
      func_0x000107c6148c();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar2);
        goto LAB_1026265bc;
      }
      uStack_88 = 0;
      puStack_80 = (ulong *)0x0;
      puVar14 = &uStack_88;
      func_0x000107c5fae8();
      func_0x000107c61170(lVar2);
      puVar17 = puStack_80;
      if (puStack_80 == (ulong *)0x0) {
        uStack_c0 = 0;
      }
      else {
        uStack_c0 = uStack_88;
      }
    }
    uStack_b8 = *(undefined8 *)(param_1 + _DAT_112fed980);
    uStack_b0 = ((undefined8 *)(param_1 + _DAT_112fed980))[1];
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd6038;
    func_0x000107c5faec();
    puVar16 = puVar14;
    if (puVar13[2] == 0) {
LAB_102626688:
      func_0x000107c6142c(puVar14);
LAB_10262668c:
      uStack_d8 = 0;
      puVar18 = (ulong *)0x0;
    }
    else {
      func_0x000107c61434(puVar13);
      func_0x000100029284();
      if (((ulong)puVar16 & 1) == 0) {
        func_0x000107c6142c(puVar14);
        puVar14 = puVar13;
        goto LAB_102626688;
      }
      lVar2 = *(long *)(puVar13[7] + (long)ppuVar1 * 8);
      func_0x000107c61174();
      func_0x000107c6142c(puVar14);
      func_0x000107c6142c(puVar13);
      puVar16 = (ulong *)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c61168();
      lVar3 = lVar2;
      func_0x000107c6148c();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar2);
        goto LAB_10262668c;
      }
      uStack_88 = 0;
      puStack_80 = (ulong *)0x0;
      puVar16 = &uStack_88;
      func_0x000107c5fae8();
      func_0x000107c61170(lVar2);
      puVar18 = puStack_80;
      if (puStack_80 == (ulong *)0x0) {
        uStack_d8 = 0;
      }
      else {
        uStack_d8 = uStack_88;
      }
    }
    uVar20 = *(undefined8 *)(param_1 + _DAT_112fed988);
    uVar19 = ((undefined8 *)(param_1 + _DAT_112fed988))[1];
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbf1b8;
    func_0x000107c5faec();
    param_2 = puVar16;
    if (puVar13[2] == 0) {
LAB_102626754:
      func_0x000107c6142c(puVar16);
    }
    else {
      func_0x000107c61434(puVar13);
      func_0x000100029284();
      if (((ulong)param_2 & 1) == 0) {
        func_0x000107c6142c(puVar16);
        puVar16 = puVar13;
        goto LAB_102626754;
      }
      lVar2 = *(long *)(puVar13[7] + (long)ppuVar1 * 8);
      func_0x000107c61174();
      func_0x000107c6142c(puVar16);
      func_0x000107c6142c(puVar13);
      param_2 = (ulong *)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c61168();
      lVar3 = lVar2;
      func_0x000107c6148c();
      if (lVar3 != 0) {
        uStack_88 = 0;
        puStack_80 = (ulong *)0x0;
        param_2 = &uStack_88;
        func_0x000107c5fae8();
        func_0x000107c61170(lVar2);
        uStack_e0 = 0;
        puVar14 = puStack_80;
        if (puStack_80 != (ulong *)0x0) {
          uStack_e0 = uStack_88;
        }
        goto LAB_102626760;
      }
      func_0x000107c61170(lVar2);
    }
    uStack_e0 = 0;
    puVar14 = (ulong *)0x0;
  }
LAB_102626760:
  lVar3 = lVar11;
  FUN_102626014();
  uVar9 = *(undefined8 *)(lVar11 + _DAT_112fed460);
  uVar10 = ((undefined8 *)(lVar11 + _DAT_112fed460))[1];
  if (puVar13 == (ulong *)0x0) {
    puVar16 = (ulong *)0x0;
    uStack_f0 = 0;
    puVar12 = (ulong *)0x0;
    goto LAB_102626904;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5bcd8;
  puVar16 = param_2;
  func_0x000107c5faec();
  if (puVar13[2] == 0) {
LAB_102626860:
    func_0x000107c6142c(puVar16);
LAB_102626864:
    uStack_f0 = 0;
    puVar12 = (ulong *)0x0;
  }
  else {
    func_0x000107c61434(puVar13);
    puVar12 = puVar16;
    func_0x000100029284();
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(puVar16);
      puVar16 = puVar13;
      goto LAB_102626860;
    }
    lVar5 = *(long *)(puVar13[7] + (long)ppuVar1 * 8);
    func_0x000107c61174();
    func_0x000107c6142c(puVar16);
    func_0x000107c6142c(puVar13);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSString_1126ae4d0);
    lVar2 = lVar5;
    func_0x000107c6148c(lVar5,puVar6);
    if (lVar2 == 0) {
      func_0x000107c61170(lVar5);
      goto LAB_102626864;
    }
    uStack_88 = 0;
    puStack_80 = (ulong *)0x0;
    func_0x000107c5fae8();
    func_0x000107c61170(lVar5);
    uStack_f0 = 0;
    puVar12 = puStack_80;
    if (puStack_80 != (ulong *)0x0) {
      uStack_f0 = uStack_88;
    }
  }
  FUN_102626be8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  puVar16 = puVar13;
  func_0x000107c61434();
  func_0x000107c5f9dc();
  puVar7 = puVar16;
  func_0x000106768f54();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar8 = 0;
  FUN_102626be8(0,0x112d5ecb0,&PTR_PTR_1126bf1c0);
  puVar16 = puVar7;
  func_0x000107c5fc54(puVar7,uVar8);
  func_0x000107c61430(puVar13,2);
  func_0x000107c61170(puVar7);
LAB_102626904:
  uVar15 = *(undefined8 *)(lVar11 + _DAT_112fed468);
  uVar8 = uVar15;
  func_0x000107c61434();
  func_0x000100403a6c();
  func_0x000107c6142c(uVar15);
  if (puVar17 != (ulong *)0x0) {
    uStack_88 = uStack_c0;
    uStack_98 = 0x6d6f72705f736461;
    uStack_90 = 0xec0000006465746f;
    puStack_80 = puVar17;
    func_0x000100e8b654();
    func_0x000107c6022c(&uStack_98,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar15,uVar15);
  }
  uVar4 = uStack_b8;
  func_0x000107c5fadc(uStack_b8,uStack_b0);
  if (puVar18 == (ulong *)0x0) {
    uStack_b8 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_d8,puVar18);
    func_0x000107c6142c(puVar18);
    uStack_b8 = uStack_d8;
  }
  if (puVar14 == (ulong *)0x0) {
    uStack_d8 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_e0,puVar14);
    func_0x000107c6142c(puVar14);
    uStack_d8 = uStack_e0;
  }
  if (puVar17 == (ulong *)0x0) {
    uStack_c0 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_c0,puVar17);
    func_0x000107c6142c(puVar17);
  }
  if (param_2 == (ulong *)0x0) {
    uStack_e0 = 0;
  }
  else {
    func_0x000107c5fadc(lVar3,param_2);
    func_0x000107c6142c(param_2);
    uStack_e0 = lVar3;
  }
  func_0x000107c5fadc(uVar9,uVar10);
  if (puVar12 == (ulong *)0x0) {
    uStack_f0 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_f0,puVar12);
    func_0x000107c6142c(puVar12);
  }
  if (puVar16 == (ulong *)0x0) {
    puVar13 = (ulong *)0x0;
  }
  else {
    uVar10 = 0;
    FUN_102626be8(0,0x112d5ecb0,&PTR_PTR_1126bf1c0);
    puVar13 = puVar16;
    func_0x000107c5fc48(puVar16,uVar10);
    func_0x000107c6142c(puVar16);
  }
  puVar6 = PTR_PTR_1126b1ff0;
  func_0x000107c610f8(PTR_PTR_1126b1ff0);
  uVar10 = uVar8;
  func_0x000107c5fe08(uVar8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar8);
  func_0x000107c46d58(uVar20,uVar19,puVar6);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(uStack_d8);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61170(uStack_e0);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uStack_f0);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar10);
  return puVar6;
}



/* Entry: 102626be8; end: 102626c67;  */

void FUN_102626be8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102626c68; end: 102626ce7;  */

void FUN_102626c68(void)

{
  long unaff_x20;
  
  FUN_102624cf8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0x1026e97bc,0x1026e966c);
  return;
}



/* Entry: 102626ce8; end: 102626d4b;  */

void FUN_102626ce8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102626d4c;
  plVar4[4] = lVar1;
  plVar4[5] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar4[6] = lVar2;
  func_0x000107c5fce8();
  plVar4[7] = lVar2;
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  plVar4[8] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102624720;
  plVar3[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026248e4,0,0);
  return;
}



/* Entry: 102626d4c; end: 102626d87;  */

void FUN_102626d4c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102626d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102626d88; end: 102626d9f;  */

long FUN_102626d88(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102626da0; end: 102626ebf;  */

void FUN_102626da0(void)

{
  long unaff_x20;
  
  FUN_1026245cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102626ec0; end: 102626eff; -[_TtC36MapDestinationServicesImplementation16MapChromeManager operaPresentingViewController] */

void FUN_102626ec0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  func_0x000107c61618(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102626f00; end: 102626f47; -[_TtC36MapDestinationServicesImplementation16MapChromeManager setOperaPresentingViewController:] */

void FUN_102626f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,1,0);
  func_0x000107c61604(param_1 + 0x10,param_3);
  return;
}



/* Entry: 102626f48; end: 102626f83; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidTapBackButton] */

void FUN_102626f48(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c50358();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102626f84; end: 102626fef;  */

void FUN_102626f84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102626ff0,uVar1,uVar2);
  return;
}



/* Entry: 102626ff0; end: 1026270f7;  */

void FUN_102626ff0(void)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  uVar1 = *(ulong *)(lVar4 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    uVar3 = uVar1;
    func_0x000107c49ff8();
    func_0x000107c61170(ppuVar2);
    func_0x000107c615e8(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x0001048580f8(unaff_x22 + 0x10);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
      lVar4 = 0;
      FUN_1026e8494(0);
      func_0x000107c613fc();
      goto LAB_1026270c4;
    }
  }
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar4 = 0;
  FUN_1026e821c();
  func_0x000107c613fc();
  *(undefined1 *)(lVar4 + 0x10) = 1;
LAB_1026270c4:
  func_0x000107c4d4a8(uVar5);
  func_0x000107c61574(lVar4);
  func_0x000107c615e8(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001026270f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026270f8; end: 102627133;  */

void FUN_1026270f8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102627130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102627134; end: 10262714f; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidTapLocationSettingsButton] */

/* WARNING: Possible PIC construction at 0x00010262853c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102628540) */

void FUN_102627134(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11052c4a0;
  func_0x000107c613fc(&UNK_11052c4a0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dac5038;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac5040,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102627150; end: 1026271c7;  */

void FUN_102627150(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined1 *)(unaff_x22 + 0x41) = param_4;
  *(undefined1 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026271c8,uVar1,uVar2);
  return;
}



/* Entry: 1026271c8; end: 1026272df;  */

void FUN_1026271c8(void)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  bVar1 = *(byte *)(unaff_x22 + 0x41);
  bVar2 = *(byte *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  *(undefined8 *)(lVar3 + 0x28) = uVar5;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61434(uVar5);
  func_0x000107c46ed0(puVar4);
  uVar5 = 0;
  FUN_1026e772c(0);
  func_0x000107c610f8();
  func_0x0001026e74cc(lVar3,(bVar1 | bVar2 ^ 0xff) & 1,0xb3,puVar4,0,0,uVar5);
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c4d4a8(uVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c615e8(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001026272dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026272e0; end: 1026273ef; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidTapFriendButtonForUserId:inCluster:actionId:isFromSearch:] */

/* WARNING: Possible PIC construction at 0x0001026273bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026273c0) */

void FUN_1026272e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c5faec();
  puVar1 = &UNK_11052c450;
  func_0x000107c613fc(&UNK_11052c450,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar1[0x20] = param_6;
  puVar1[0x21] = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  puVar2 = &UNK_11052c478;
  func_0x000107c613fc(&UNK_11052c478,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac5028;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61580(param_1,2);
  func_0x000107c61434(param_2);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac5030,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1026273f0; end: 102627473;  */

void FUN_1026273f0(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_9;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined1 *)(unaff_x22 + 0x60) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102627474,uVar1,uVar2);
  return;
}



/* Entry: 102627474; end: 102627607;  */

void FUN_102627474(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_70;
  
  cVar6 = *(char *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  if (cVar6 == '\x01') {
    puStack_70 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ecc();
  }
  else {
    puStack_70 = (undefined *)0x0;
  }
  lVar8 = 0xb3;
  func_0x000100c6f294();
  func_0x000107c61180();
  if (lVar8 != 0) {
    uVar12 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
    uVar13 = *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar9 = lVar8;
    func_0x000107c5faec();
    func_0x000107c61170(lVar8);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    FUN_1026e8f5c(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x0001026e8acc(uVar12,uVar13,puStack_70,uVar2,uVar5,uVar1,uVar4,0,0,uVar11,uVar3,0,0,0,0,
                        lVar9,param_2,0,puVar10);
    func_0x0001048580f8(unaff_x22 + 0x10);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000107c4d4a8(uVar11);
    func_0x000107c61170(puStack_70);
    func_0x000107c615e8(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000102627600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x102627608);
  (*pcVar7)();
}



/* Entry: 102627608; end: 102627767; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidTapPlacesTrayButtonWithPivotName:localizedPivotName:attributeId:isSearchQuery:actionId:] */

/* WARNING: Possible PIC construction at 0x000102627720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102627724) */

void FUN_102627608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  puVar1 = &UNK_11052c400;
  func_0x000107c613fc(&UNK_11052c400,0x58,7);
  puVar1[0x10] = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = uVar4;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_1;
  puVar2 = &UNK_11052c428;
  func_0x000107c613fc(&UNK_11052c428,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac5018;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61580(param_1,2);
  func_0x000107c61434(param_2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac5020,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102627768; end: 1026277db;  */

void FUN_102627768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026277dc,uVar1,uVar2);
  return;
}



/* Entry: 1026277dc; end: 1026278db;  */

void FUN_1026277dc(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  uVar6 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
  uVar7 = *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
  bVar1 = lVar5 == 0;
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0x30));
    uVar4 = uVar3;
    func_0x000107c3112c();
    func_0x000107c61170(uVar3);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  FUN_1026e95f0(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x0001026e93e8(uVar6,uVar7,uVar3,uVar2,0,0xcb,uVar4,bVar1,0);
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c4d4a8(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001026278d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026278dc; end: 102627a03; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidTapPlaceProfileButtonWithPlaceId:sourceType:] */

/* WARNING: Possible PIC construction at 0x0001026279cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026279d0) */

void FUN_1026278dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  if (param_4 == 0) {
    param_4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5faec();
  }
  puVar1 = &UNK_11052c3b0;
  func_0x000107c613fc(&UNK_11052c3b0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(long *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = uVar3;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  puVar2 = &UNK_11052c3d8;
  func_0x000107c613fc(&UNK_11052c3d8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac5008;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61434(uVar3);
  func_0x000107c61580(param_1,2);
  func_0x000107c61434(param_2);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac5010,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102627a04; end: 102627a6f;  */

void FUN_102627a04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102627a70,uVar1,uVar2);
  return;
}



/* Entry: 102627a70; end: 102627bbb;  */

void FUN_102627a70(void)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  uVar1 = *(ulong *)(lVar7 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    uVar3 = uVar1;
    func_0x000107c49ff8();
    func_0x000107c61170(ppuVar2);
    func_0x000107c615e8(uVar1);
    if ((uVar3 & 1) != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      uVar5 = 0;
      FUN_1026e876c(0);
      func_0x000107c610f8();
      uVar6 = 0xb3;
      func_0x0001026e8540(0xb3,puVar4,0,0,uVar5);
      func_0x0001048580f8(unaff_x22 + 0x10);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
      func_0x000107c4d4a8(uVar5);
      func_0x000107c61170(uVar6);
      goto LAB_102627b9c;
    }
  }
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar7 = 0;
  FUN_1026e821c();
  func_0x000107c613fc();
  *(undefined1 *)(lVar7 + 0x10) = 1;
  func_0x000107c4d4a8(uVar5);
  func_0x000107c61574(lVar7);
LAB_102627b9c:
  func_0x000107c615e8(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102627bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102627bbc; end: 102627c87; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidTapMeTrayButtonWithActionId:] */

/* WARNING: Possible PIC construction at 0x000102627c64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102627c68) */

void FUN_102627bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_11052c360;
  func_0x000107c613fc(&UNK_11052c360,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar2 = &UNK_11052c388;
  func_0x000107c613fc(&UNK_11052c388,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac4ff8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61580(param_1,2);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac5000,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102627c88; end: 102627cf3;  */

void FUN_102627c88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102627cf4,uVar1,uVar2);
  return;
}



/* Entry: 102627cf4; end: 102627d67;  */

void FUN_102627cf4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = 0;
  FUN_1026e6838(0);
  func_0x000107c613fc();
  func_0x000107c4d4a8(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102627d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102627d68; end: 102627d83; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidTapAddFriendsButton] */

/* WARNING: Possible PIC construction at 0x00010262853c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102628540) */

void FUN_102627d68(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11052c338;
  func_0x000107c613fc(&UNK_11052c338,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dac4fe8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4ff0,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102627d84; end: 102627def;  */

void FUN_102627d84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102627df0,uVar1,uVar2);
  return;
}



/* Entry: 102627df0; end: 102627e63;  */

void FUN_102627df0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = 0;
  func_0x0001026e87c8(0);
  func_0x000107c613fc();
  func_0x000107c4d4a8(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102627e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102627e64; end: 102627e7f; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidTapMemoriesPivot] */

/* WARNING: Possible PIC construction at 0x00010262853c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102628540) */

void FUN_102627e64(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11052c310;
  func_0x000107c613fc(&UNK_11052c310,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dac4fd8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4fe0,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102627e80; end: 102627eeb;  */

void FUN_102627e80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102627eec,uVar1,uVar2);
  return;
}



/* Entry: 102627eec; end: 102627f5f;  */

void FUN_102627eec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = 0;
  FUN_1026e7f84(0);
  func_0x000107c613fc();
  func_0x000107c4d4a8(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102627f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102627f60; end: 102627f7b; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidTapFootstepsPivot] */

/* WARNING: Possible PIC construction at 0x00010262853c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102628540) */

void FUN_102627f60(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11052c2e8;
  func_0x000107c613fc(&UNK_11052c2e8,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dac4fc8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4fd0,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102627f7c; end: 102627fef;  */

void FUN_102627f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102627ff0,uVar1,uVar2);
  return;
}



/* Entry: 102627ff0; end: 102628093;  */

void FUN_102627ff0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar5 = 0;
  FUN_1026e7f18();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar4;
  *(undefined8 *)(lVar5 + 0x18) = uVar2;
  *(undefined8 *)(lVar5 + 0x20) = uVar3;
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  func_0x000107c4d4a8(uVar6);
  func_0x000107c61574(lVar5);
  func_0x000107c615e8(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102628090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102628094; end: 1026281af; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidTapFootstepsActivityWithLocalizedLocality:localizedFootstepsMessage:] */

/* WARNING: Possible PIC construction at 0x000102628178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010262817c) */

void FUN_102628094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = &UNK_11052c298;
  func_0x000107c613fc(&UNK_11052c298,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  puVar2 = &UNK_11052c2c0;
  func_0x000107c613fc(&UNK_11052c2c0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac4fb8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61580(param_1,2);
  func_0x000107c61434(param_2);
  func_0x000107c61434(uVar3);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4fc0,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1026281b0; end: 10262821b;  */

void FUN_1026281b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262821c,uVar1,uVar2);
  return;
}



/* Entry: 10262821c; end: 10262828f;  */

void FUN_10262821c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = 0;
  FUN_1026e842c(0);
  func_0x000107c613fc();
  func_0x000107c4d4a8(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010262828c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102628290; end: 1026282ab; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidLongPressCompassButton] */

/* WARNING: Possible PIC construction at 0x00010262853c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102628540) */

void FUN_102628290(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11052c270;
  func_0x000107c613fc(&UNK_11052c270,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dac4fa8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4fb0,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1026282ac; end: 102628317;  */

void FUN_1026282ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102628318,uVar1,uVar2);
  return;
}



/* Entry: 102628318; end: 10262849f;  */

void FUN_102628318(void)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  uVar1 = *(ulong *)(lVar4 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    uVar3 = uVar1;
    func_0x000107c49ff8();
    func_0x000107c61170(ppuVar2);
    func_0x000107c615e8(uVar1);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x38);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
LAB_102628440:
        func_0x0001048580f8(unaff_x22 + 0x10);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
        func_0x0001026e7134(0);
        uVar6 = 1;
        FUN_1026e6fd0(1);
      }
      else {
        lVar5 = lVar4;
        func_0x000107c4b88c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar4);
        if (lVar5 == 0) goto LAB_102628440;
        func_0x000107c61170(lVar5);
        func_0x0001048580f8(unaff_x22 + 0x10);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
        func_0x0001026e7134(0);
        uVar6 = 1;
        func_0x0001026e706c(1);
      }
      func_0x000107c4d4a8(uVar7);
      func_0x000107c61170(uVar6);
      goto LAB_102628480;
    }
  }
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar4 = 0;
  FUN_1026e821c();
  func_0x000107c613fc();
  *(undefined1 *)(lVar4 + 0x10) = 1;
  func_0x000107c4d4a8(uVar7);
  func_0x000107c61574(lVar4);
LAB_102628480:
  func_0x000107c615e8(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010262849c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026284a0; end: 1026284bb; -[_TtC36MapDestinationServicesImplementation16MapChromeManager mapChromeDidTapCompassButton] */

/* WARNING: Possible PIC construction at 0x00010262853c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102628540) */

void FUN_1026284a0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11052c248;
  func_0x000107c613fc(&UNK_11052c248,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dac4f98;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4fa0,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1026284bc; end: 10262855f;  */

/* WARNING: Possible PIC construction at 0x00010262853c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102628540) */

void FUN_1026284bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c613fc(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_4;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,param_5,param_3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 102628560; end: 102628613;  */

void FUN_102628560(void)

{
  long unaff_x20;
  
  func_0x000100cfcfd8(unaff_x20 + 0x10);
  func_0x000100cfcfd8(unaff_x20 + 0x18);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102628614; end: 102628683;  */

void FUN_102628614(undefined8 param_1)

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
  plVar3[1] = 0x102628fac;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102628684; end: 1026286cb;  */

void FUN_102628684(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102628fb0;
  plVar3[3] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262821c,lVar1,lVar2);
  return;
}



/* Entry: 1026286cc; end: 10262873b;  */

void FUN_1026286cc(undefined8 param_1)

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
  plVar3[1] = 0x102628fb4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10262873c; end: 10262876f;  */

void FUN_10262873c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102628770; end: 1026287e3;  */

void FUN_102628770(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102628fb8;
  plVar5[6] = lVar2;
  plVar5[7] = lVar6;
  plVar5[4] = lVar1;
  plVar5[5] = lVar3;
  plVar5[3] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[8] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102627ff0,lVar3,lVar4);
  return;
}



/* Entry: 1026287e4; end: 102628853;  */

void FUN_1026287e4(undefined8 param_1)

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
  plVar3[1] = 0x102628fbc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102628854; end: 10262889b;  */

void FUN_102628854(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102628fc0;
  plVar3[3] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102627eec,lVar1,lVar2);
  return;
}


