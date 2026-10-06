/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001162b0; end: 1001162ef; -[SCDeviceInfoImplementation stringDeviceUuid] */

void FUN_1001162b0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuVar1 = ppuVar2;
  func_0x000107c4adac();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_1 + 8);
  }
  func_0x000107c61174(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1001162f0; end: 100116307; -[SCAExperimentUserTreatment setConfigDeviceId:] */

void FUN_1001162f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa0238,5,param_3,0);
  return;
}



/* Entry: 100116308; end: 10011639b; -[SCNoDepBlizzardImpl logUserAddedEvent:] */

/* WARNING: Possible PIC construction at 0x00010011635c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100116360) */

void FUN_100116308(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x10);
  if (param_3 == 0) {
    func_0x000107c611f0(param_1 + 0x10);
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c53494(param_3,param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10011639c; end: 1001163d3; -[SCCameraDeviceSettingsBuilder withMediaSubtypeConstraint:] */

long FUN_10011639c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1001163d4; end: 1001163db; -[SCCameraDeviceSettings photoQualityConstraint] */

undefined8 FUN_1001163d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1001163dc; end: 100116413; -[SCCameraDeviceSettingsBuilder withPhotoQualityConstraint:] */

long FUN_1001163dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100116414; end: 10011641b; -[SCCameraDeviceSettings videoCaptureCapabilityConstraint] */

undefined8 FUN_100116414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10011641c; end: 100116453; -[SCCameraDeviceSettingsBuilder withVideoCaptureCapabilityConstraint:] */

long FUN_10011641c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100116454; end: 100116ac3; -[SCBatteryLogger _initWithQueuePerformer:blizzardLogger:idleMonitor:networkMonitor:applicationLifecycleEvents:capturerStateUpdate:managedCapturerStateCoordinator:] */

undefined8 *
FUN_100116454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_80 = PTR_PTR_1126e7570;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b6f10;
    func_0x000107c610f4();
    func_0x000107c45728();
    uVar7 = puVar1[0x19];
    puVar1[0x19] = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c3c5dc(puVar1);
    func_0x000107c5bb0c(puVar1[0x19]);
    func_0x000107c61174(param_3);
    uVar7 = puVar1[0x17];
    puVar1[0x17] = param_3;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_4);
    uVar7 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_9);
    uVar7 = puVar1[0x14];
    puVar1[0x14] = param_9;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126b6f18;
    func_0x000107c610f4();
    func_0x000107c459e0();
    uVar7 = puVar1[0x1a];
    puVar1[0x1a] = puVar2;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126b6f20;
    func_0x000107c610f4();
    func_0x000107c459d8();
    uVar7 = puVar1[0x1c];
    puVar1[0x1c] = puVar2;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126b6f28;
    func_0x000107c610f4();
    func_0x000107c47a6c();
    uVar7 = puVar1[0x1d];
    puVar1[0x1d] = puVar2;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126b6f30;
    func_0x000107c610fc();
    uVar7 = puVar1[0x1b];
    puVar1[0x1b] = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c50518(puVar1[0x1b]);
    func_0x000107c3c5d4(puVar1);
    func_0x000107c50568(puVar1);
    func_0x000107c61144(auStack_90,puVar1);
    puVar4 = PTR_PTR_1126b6eb0;
    puVar2 = PTR_PTR_1126ae960;
    puVar3 = PTR_PTR_1126b6eb8;
    func_0x000107c4bfdc(PTR_PTR_1126b6eb8);
    func_0x000107c61180();
    func_0x000107c3e700(puVar4);
    func_0x000107c61180();
    func_0x000107c3fbc8(puVar2);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae970;
    func_0x000107c4c0f8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c61174(PTR___dispatch_main_q_11034be20);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_1052de24c;
    puStack_a0 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_98,auStack_90);
    func_0x000107c5e070(param_5);
    func_0x000107c611b0();
    func_0x000107c61170(PTR___dispatch_main_q_11034be20);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar4 = PTR_PTR_1126b6eb0;
    puVar2 = PTR_PTR_1126ae960;
    puVar3 = PTR_PTR_1126b6eb8;
    func_0x000107c4bfd0(PTR_PTR_1126b6eb8);
    func_0x000107c61180();
    func_0x000107c3e700(puVar4);
    func_0x000107c61180();
    func_0x000107c3fbc8(puVar2);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae970;
    func_0x000107c4c0f8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    uVar7 = puVar1[0x17];
    func_0x000107c4f7c0(uVar7);
    func_0x000107c61180();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_1052de278;
    puStack_c8 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_c0,auStack_90);
    func_0x000107c5e08c(param_5);
    func_0x000107c611b0();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61144(auStack_e8,puVar1);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar7 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    func_0x000107c61170(uVar7);
    uVar7 = param_7;
    func_0x000107c41b80(param_7);
    func_0x000107c61180();
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    puStack_100 = &UNK_1052de2a4;
    puStack_f8 = &UNK_110846510;
    func_0x000107c6111c(auStack_f0,auStack_e8);
    uVar6 = uVar7;
    func_0x000107c5c320(uVar7);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    uVar7 = param_7;
    func_0x000107c5e370(param_7);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_118,auStack_e8);
    uVar6 = uVar7;
    func_0x000107c5c320(uVar7);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570();
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170();
    FUN_10011df08();
    func_0x000107c61180();
    uVar7 = puVar1[8];
    puVar1[8] = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c3c35c(puVar1);
    *(undefined4 *)((long)puVar1 + 0x2c) = 0xbf800000;
    puVar1[7] = 0xbff0000000000000;
    func_0x000107c3c64c(puVar1);
    func_0x000107c61120(auStack_118);
    func_0x000107c61120(auStack_f0);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100116ac4; end: 100116acb; -[SCCameraDeviceSettings exposureConstraint] */

undefined8 FUN_100116ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100116acc; end: 100116b03; -[SCCameraDeviceSettingsBuilder withExposureConstraint:] */

long FUN_100116acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100116b04; end: 100116b0b; -[SCCameraDeviceSettings featureName] */

undefined8 FUN_100116b04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100116b0c; end: 100116b43; -[SCCameraDeviceSettingsBuilder withFeatureName:] */

long FUN_100116b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100116b44; end: 100116c5b; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl _frameRateConstraintForDeviceConfig:] */

void FUN_100116b44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4c838();
  uVar2 = param_3;
  func_0x000107c4cee4();
  if ((int)uVar2 <= (int)uVar1) {
    uVar1 = param_3;
    func_0x000107c4cee4();
    uVar2 = param_3;
    func_0x000107c4c804();
    if ((int)uVar2 <= (int)uVar1) {
      uVar1 = param_3;
      func_0x000107c4c804();
      uVar2 = param_3;
      func_0x000107c4cecc();
      if ((((int)uVar2 <= (int)uVar1) && (uVar1 = param_3, func_0x000107c4c804(), 0 < (int)uVar1))
         && (uVar1 = param_3, func_0x000107c4cee4(), 0 < (int)uVar1)) {
        puVar5 = PTR_PTR_1126b70f0;
        func_0x000107c610f4(PTR_PTR_1126b70f0);
        uVar1 = param_3;
        func_0x000107c4cee4(param_3);
        uVar2 = param_3;
        func_0x000107c4c838(param_3);
        uVar3 = param_3;
        func_0x000107c4cecc(param_3);
        uVar4 = param_3;
        func_0x000107c4c804(param_3);
        func_0x000107c47614(puVar5,param_2,(long)(int)uVar1,(long)(int)uVar2,(long)(int)uVar3,
                            (long)(int)uVar4,0);
        goto LAB_100116c3c;
      }
    }
  }
  puVar5 = (undefined *)0x0;
LAB_100116c3c:
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100116c5c; end: 100116e3b;  */

uint FUN_100116c5c(double *param_1)

{
  byte bVar1;
  code *pcVar2;
  double *pdVar3;
  double dVar4;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [263];
  undefined1 uStack_21;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return 0;
    }
    if (bVar1 == 1) {
      pdVar3 = param_1;
      FUN_100116e3c();
      if (((ulong)pdVar3 & 1) != 0) goto LAB_100116cfc;
      func_0x000107c2ac5c(auStack_130);
      func_0x000107c2ac6c(auStack_130,&UNK_10f587da3,0x1c);
      func_0x000107c2ac60(auStack_148,auStack_128,&uStack_21);
      func_0x000107c2ad58(auStack_148);
      goto LAB_100116de4;
    }
  }
  else {
    if (bVar1 == 2) {
      pdVar3 = param_1;
      FUN_100116e3c();
      if (((ulong)pdVar3 & 1) != 0) {
LAB_100116cfc:
        return *(uint *)param_1;
      }
      func_0x000107c2ac5c(auStack_130);
      func_0x000107c2ac6c(auStack_130,&UNK_10f587dc0,0x1d);
      func_0x000107c2ac60(auStack_148,auStack_128,&uStack_21);
      func_0x000107c2ad58(auStack_148);
      goto LAB_100116de4;
    }
    if (bVar1 == 3) {
      dVar4 = *param_1;
      if ((0.0 <= dVar4) && (dVar4 <= 4294967295.0)) {
        return (int)dVar4;
      }
      func_0x000107c2ac5c(auStack_130);
      func_0x000107c2ac6c(auStack_130,&UNK_10f587dde,0x18);
      func_0x000107c2ac60(auStack_148,auStack_128,&uStack_21);
      func_0x000107c2ad58(auStack_148);
      goto LAB_100116de4;
    }
    if (bVar1 == 5) {
      return (uint)*(byte *)param_1;
    }
  }
  func_0x000107c2ac5c(auStack_130);
  func_0x000107c2ac6c(auStack_130,&UNK_10f587df7,0x21);
  func_0x000107c2ac60(auStack_148,auStack_128,&uStack_21);
  func_0x000107c2ad58(auStack_148);
LAB_100116de4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100116de8);
  (*pcVar2)();
}



/* Entry: 100116e3c; end: 100116ebb;  */

bool FUN_100116e3c(double *param_1)

{
  char cVar1;
  bool bVar2;
  double dVar3;
  undefined1 auStack_18 [8];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x03') {
    bVar2 = false;
    dVar3 = *param_1;
    if ((0.0 <= dVar3) && (dVar3 <= 4294967295.0)) {
      func_0x000107c610e8(auStack_18);
      bVar2 = dVar3 == 0.0;
    }
    return bVar2;
  }
  if ((cVar1 != '\x02') && (cVar1 != '\x01')) {
    return false;
  }
  return *(int *)((long)param_1 + 4) == 0;
}



/* Entry: 100116ebc; end: 10011753b;  */

ulong FUN_100116ebc(long param_1,ulong param_2,ulong param_3,long param_4,undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long alStack_b8 [2];
  char cStack_a1;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  *(ulong *)(param_1 + 0x88) = param_2;
  *(ulong *)(param_1 + 0x90) = param_3;
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xd0) & *(byte *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(ulong *)(param_1 + 0x98) = param_2;
  if (*(char *)(param_1 + 0xcf) < '\0') {
    **(undefined1 **)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0xcf) = 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x48);
  puVar8 = puVar5;
  if (*(undefined8 **)(param_1 + 0x50) != puVar5) {
    uVar9 = *(ulong *)(param_1 + 0x60);
    plVar10 = puVar5 + uVar9 / 0x49;
    lVar7 = *plVar10;
    lVar12 = lVar7 + (uVar9 % 0x49) * 0x38;
    uVar9 = *(long *)(param_1 + 0x68) + uVar9;
    lVar11 = puVar5[uVar9 / 0x49] + (uVar9 % 0x49) * 0x38;
    puVar8 = *(undefined8 **)(param_1 + 0x50);
    if (lVar12 != lVar11) {
      do {
        if (*(char *)(lVar12 + 0x2f) < '\0') {
          func_0x000107c60e14(*(undefined8 *)(lVar12 + 0x18));
          lVar7 = *plVar10;
        }
        lVar12 = lVar12 + 0x38;
        if (lVar12 - lVar7 == 0xff8) {
          plVar10 = plVar10 + 1;
          lVar7 = *plVar10;
          lVar12 = lVar7;
        }
      } while (lVar12 != lVar11);
      puVar5 = *(undefined8 **)(param_1 + 0x48);
      puVar8 = *(undefined8 **)(param_1 + 0x50);
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar12 = (long)puVar8 - (long)puVar5;
  while (uVar9 = lVar12 >> 3, 2 < uVar9) {
    func_0x000107c60e14(*puVar5);
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x48) + 8);
    *(undefined8 **)(param_1 + 0x48) = puVar5;
    lVar12 = *(long *)(param_1 + 0x50) - (long)puVar5;
  }
  if (uVar9 == 1) {
    uVar6 = 0x24;
LAB_10011702c:
    *(undefined8 *)(param_1 + 0x60) = uVar6;
  }
  else if (uVar9 == 2) {
    uVar6 = 0x49;
    goto LAB_10011702c;
  }
  while (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
    FUN_10011925c(param_1 + 0x10);
  }
  FUN_10011753c(param_1 + 0x10,param_4);
  uVar9 = param_1 + 0x10;
  FUN_100118034();
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
  FUN_10011925c(param_1 + 0x10);
  FUN_100117fdc(param_1 + 0x10,&pppuStack_80);
  if ((*(char *)(param_1 + 0xd5) == '\x01') && ((int)pppuStack_80 != 0)) {
    FUN_10002d4d8(&lStack_a0,&UNK_10f587ba4);
    func_0x000107c2ad18(param_1 + 0x10,&lStack_a0,&pppuStack_80,0);
    lVar12 = lStack_a0;
    if (lStack_90 < 0) {
LAB_1001170c8:
      func_0x000107c60e14(lVar12);
    }
  }
  else {
    if (*(char *)(param_1 + 0xe0) == '\x01') {
      if (*(char *)(param_1 + 0xcf) < '\0') {
        if (*(long *)(param_1 + 0xc0) != 0) {
          FUN_100033dac(&lStack_a0,*(undefined8 *)(param_1 + 0xb8));
          goto LAB_100117110;
        }
      }
      else if (*(char *)(param_1 + 0xcf) != '\0') {
        lStack_98 = *(long *)(param_1 + 0xc0);
        lStack_a0 = *(long *)(param_1 + 0xb8);
        lStack_90 = *(long *)(param_1 + 200);
LAB_100117110:
        func_0x000107c2ad9c(param_4,&lStack_a0,2);
        if (lStack_90 < 0) {
          func_0x000107c60e14(lStack_a0);
        }
      }
    }
    if ((*(char *)(param_1 + 0xd1) != '\x01') || ((*(ushort *)(param_4 + 8) & 0xfe) == 6))
    goto LAB_100117188;
    pppuStack_80 = (undefined8 ***)CONCAT44(pppuStack_80._4_4_,0x10);
    uStack_78 = param_2;
    uStack_70 = param_3;
    FUN_10002d4d8(alStack_b8,&UNK_10f5878df);
    func_0x000107c2ad18(param_1 + 0x10,alStack_b8,&pppuStack_80,0);
    lVar12 = alStack_b8[0];
    if (cStack_a1 < '\0') goto LAB_1001170c8;
  }
  uVar9 = 0;
LAB_100117188:
  if (param_5 != (undefined8 *)0x0) {
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    lVar12 = *(long *)(param_1 + 0x48);
    if (*(long *)(param_1 + 0x50) != lVar12) {
      uVar2 = *(ulong *)(param_1 + 0x60);
      lVar7 = *(long *)(lVar12 + (uVar2 / 0x49) * 8) + (uVar2 % 0x49) * 0x38;
      uVar1 = *(long *)(param_1 + 0x68) + uVar2;
      lVar11 = *(long *)(lVar12 + (uVar1 / 0x49) * 8) + (uVar1 % 0x49) * 0x38;
      if (lVar7 != lVar11) {
        plVar10 = (long *)(lVar12 + (uVar2 / 0x49) * 8);
        do {
          func_0x000107c2ad30(alStack_b8,param_1 + 0x10,*(undefined8 *)(lVar7 + 8));
          plVar4 = alStack_b8;
          func_0x000107c60c70(plVar4,0,&DAT_10f3780c5,2);
          lStack_98 = plVar4[1];
          lStack_a0 = *plVar4;
          lStack_90 = plVar4[2];
          plVar4[1] = 0;
          plVar4[2] = 0;
          *plVar4 = 0;
          plVar4 = &lStack_a0;
          func_0x000107c60c5c(plVar4,&DAT_10f68f57e,1);
          uStack_78 = plVar4[1];
          pppuStack_80 = (undefined8 ***)*plVar4;
          uStack_70 = plVar4[2];
          plVar4[1] = 0;
          plVar4[2] = 0;
          *plVar4 = 0;
          uVar1 = uStack_78;
          ppppuVar3 = (undefined8 ****)pppuStack_80;
          if (-1 < (long)uStack_70) {
            uVar1 = uStack_70 >> 0x38;
            ppppuVar3 = &pppuStack_80;
          }
          func_0x000107c60c5c(&uStack_d0,ppppuVar3,uVar1);
          if ((long)uStack_70 < 0) {
            func_0x000107c60e14(pppuStack_80);
          }
          if (lStack_90 < 0) {
            func_0x000107c60e14(lStack_a0);
          }
          if (cStack_a1 < '\0') {
            func_0x000107c60e14(alStack_b8[0]);
          }
          func_0x000107c60dec(&lStack_a0,&DAT_10f4944be,lVar7 + 0x18);
          plVar4 = &lStack_a0;
          func_0x000107c60c5c(plVar4,&DAT_10f68f57e,1);
          uStack_78 = plVar4[1];
          pppuStack_80 = (undefined8 ***)*plVar4;
          uStack_70 = plVar4[2];
          plVar4[1] = 0;
          plVar4[2] = 0;
          *plVar4 = 0;
          uVar1 = uStack_78;
          ppppuVar3 = (undefined8 ****)pppuStack_80;
          if (-1 < (long)uStack_70) {
            uVar1 = uStack_70 >> 0x38;
            ppppuVar3 = &pppuStack_80;
          }
          func_0x000107c60c5c(&uStack_d0,ppppuVar3,uVar1);
          if ((long)uStack_70 < 0) {
            func_0x000107c60e14(pppuStack_80);
          }
          if (lStack_90 < 0) {
            func_0x000107c60e14(lStack_a0);
          }
          if (*(long *)(lVar7 + 0x30) != 0) {
            func_0x000107c2ad30(alStack_b8,param_1 + 0x10);
            plVar4 = alStack_b8;
            func_0x000107c60c70(plVar4,0,&UNK_10f587b91,4);
            lStack_98 = plVar4[1];
            lStack_a0 = *plVar4;
            lStack_90 = plVar4[2];
            plVar4[1] = 0;
            plVar4[2] = 0;
            *plVar4 = 0;
            plVar4 = &lStack_a0;
            func_0x000107c60c5c(plVar4,&UNK_10f587b96,0xd);
            uStack_78 = plVar4[1];
            pppuStack_80 = (undefined8 ***)*plVar4;
            uStack_70 = plVar4[2];
            plVar4[1] = 0;
            plVar4[2] = 0;
            *plVar4 = 0;
            uVar1 = uStack_78;
            ppppuVar3 = (undefined8 ****)pppuStack_80;
            if (-1 < (long)uStack_70) {
              uVar1 = uStack_70 >> 0x38;
              ppppuVar3 = &pppuStack_80;
            }
            func_0x000107c60c5c(&uStack_d0,ppppuVar3,uVar1);
            if ((long)uStack_70 < 0) {
              func_0x000107c60e14(pppuStack_80);
            }
            if (lStack_90 < 0) {
              func_0x000107c60e14(lStack_a0);
            }
            if (cStack_a1 < '\0') {
              func_0x000107c60e14(alStack_b8[0]);
            }
          }
          lVar7 = lVar7 + 0x38;
          if (lVar7 - *plVar10 == 0xff8) {
            plVar10 = plVar10 + 1;
            lVar7 = *plVar10;
          }
        } while (lVar7 != lVar11);
      }
    }
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      func_0x000107c60e14(*param_5);
    }
    param_5[1] = uStack_c8;
    *param_5 = uStack_d0;
    param_5[2] = uStack_c0;
    uVar9 = uVar9 & 0xffffffff;
  }
  return uVar9;
}



/* Entry: 10011753c; end: 100117867;  */

void FUN_10011753c(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  puVar17 = (undefined8 *)param_1[1];
  puVar12 = (undefined8 *)param_1[2];
  uVar9 = (long)puVar12 - (long)puVar17;
  uVar8 = 0;
  if (uVar9 != 0) {
    uVar8 = ((long)puVar12 - (long)puVar17) * 0x40 - 1;
  }
  uVar1 = param_1[4];
  uVar10 = param_1[5];
  uVar11 = uVar10 + uVar1;
  if (uVar8 != uVar11) goto LAB_100117808;
  if (uVar1 < 0x200) {
    puVar13 = (undefined8 *)param_1[3];
    puVar15 = (undefined8 *)*param_1;
    if (uVar9 < (ulong)((long)puVar13 - (long)puVar15)) {
      uVar5 = 0x1000;
      puVar7 = param_2;
      func_0x000107c60e20();
      if (puVar13 == puVar12) {
        if (puVar17 == puVar15) {
          uVar8 = (long)puVar13 - (long)puVar17 >> 2;
          if (puVar12 == puVar17) {
            uVar8 = 1;
          }
          lVar14 = uVar8 * 2;
          FUN_100117868();
          puVar17 = (undefined8 *)(uVar8 + (lVar14 + 6U & 0xfffffffffffffff8));
          lVar14 = param_1[2] - (long)param_1[1];
          puVar12 = puVar17;
          if (lVar14 != 0) {
            puVar12 = (undefined8 *)((long)puVar17 + lVar14);
            puVar13 = (undefined8 *)param_1[1];
            puVar15 = puVar17;
            do {
              *puVar15 = *puVar13;
              lVar14 = lVar14 + -8;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar14 != 0);
          }
          uVar9 = *param_1;
          *param_1 = uVar8;
          param_1[1] = (ulong)puVar17;
          param_1[2] = (ulong)puVar12;
          param_1[3] = uVar8 + (long)puVar7 * 8;
          if (uVar9 != 0) {
            func_0x000107c60e14(uVar9);
            puVar17 = (undefined8 *)param_1[1];
          }
        }
        puVar17[-1] = uVar5;
        uVar8 = param_1[1];
        param_1[1] = uVar8 - 8;
        uVar5 = *(undefined8 *)(uVar8 - 8);
        param_1[1] = uVar8;
        goto LAB_10011759c;
      }
      *puVar12 = uVar5;
      param_1[2] = param_1[2] + 8;
    }
    else {
      puVar7 = (undefined8 *)((long)puVar13 - (long)puVar15 >> 2);
      if (puVar13 == puVar15) {
        puVar7 = (undefined8 *)0x1;
      }
      puVar16 = param_2;
      FUN_100117868();
      uVar5 = 0x1000;
      puVar6 = puVar16;
      func_0x000107c60e20();
      puVar13 = (undefined8 *)((long)puVar7 + uVar9);
      puVar15 = puVar7 + (long)puVar16;
      puVar4 = puVar7;
      if (uVar9 == (long)puVar16 * 8) {
        if ((long)uVar9 < 1) {
          puVar13 = (undefined8 *)((long)puVar13 - (long)puVar7 >> 2);
          if (puVar12 == puVar17) {
            puVar13 = (undefined8 *)0x1;
          }
          puVar4 = puVar13;
          FUN_100117868();
          puVar13 = puVar4 + ((ulong)puVar13 >> 2);
          puVar15 = puVar4 + (long)puVar6;
          if (puVar7 != (undefined8 *)0x0) {
            func_0x000107c60e14(puVar7);
          }
        }
        else {
          lVar14 = ((long)puVar13 - (long)puVar7 >> 3) + 1;
          puVar13 = puVar13 + -((ulong)(lVar14 - (lVar14 >> 0x3f)) >> 1);
        }
      }
      puVar17 = puVar13 + 1;
      *puVar13 = uVar5;
      puVar12 = (undefined8 *)param_1[2];
      puVar7 = puVar4;
      if (puVar12 != (undefined8 *)param_1[1]) {
        do {
          puVar4 = puVar7;
          puVar16 = puVar13;
          if (puVar13 == puVar7) {
            if (puVar17 < puVar15) {
              lVar14 = ((long)puVar15 - (long)puVar17 >> 3) + 1;
              lVar2 = (long)puVar17 - (long)puVar7;
              lVar3 = (long)puVar17 - (long)puVar7;
              puVar17 = puVar17 + ((ulong)(lVar14 - (lVar14 >> 0x3f)) >> 1);
              puVar16 = (undefined8 *)((long)puVar17 - lVar2);
              if (lVar3 != 0) {
                func_0x000107c610b8(puVar16,puVar13,lVar3);
                puVar6 = puVar13;
              }
            }
            else {
              puVar16 = (undefined8 *)((long)puVar15 - (long)puVar7 >> 2);
              if ((long)puVar15 - (long)puVar7 == 0) {
                puVar16 = (undefined8 *)0x1;
              }
              puVar4 = puVar16;
              FUN_100117868();
              puVar16 = (undefined8 *)((long)puVar4 + ((long)puVar16 * 2 + 6U & 0xfffffffffffffff8))
              ;
              lVar14 = (long)puVar17 - (long)puVar7;
              puVar17 = puVar16;
              if (lVar14 != 0) {
                puVar17 = (undefined8 *)((long)puVar16 + lVar14);
                puVar15 = puVar16;
                do {
                  *puVar15 = *puVar13;
                  lVar14 = lVar14 + -8;
                  puVar15 = puVar15 + 1;
                  puVar13 = puVar13 + 1;
                } while (lVar14 != 0);
              }
              puVar15 = puVar4 + (long)puVar6;
              if (puVar7 != (undefined8 *)0x0) {
                func_0x000107c60e14(puVar7);
              }
            }
          }
          puVar12 = puVar12 + -1;
          puVar13 = puVar16 + -1;
          *puVar13 = *puVar12;
          puVar7 = puVar4;
        } while (puVar12 != (undefined8 *)param_1[1]);
      }
      uVar8 = *param_1;
      *param_1 = (ulong)puVar4;
      param_1[1] = (ulong)puVar13;
      param_1[2] = (ulong)puVar17;
      param_1[3] = (ulong)puVar15;
      if (uVar8 != 0) {
        func_0x000107c60e14();
      }
    }
  }
  else {
    param_1[4] = uVar1 - 0x200;
    uVar5 = *puVar17;
    param_1[1] = (ulong)(puVar17 + 1);
LAB_10011759c:
    func_0x000107c2ad48(param_1,uVar5);
  }
  puVar17 = (undefined8 *)param_1[1];
  uVar10 = param_1[5];
  uVar11 = param_1[4] + uVar10;
LAB_100117808:
  *(undefined8 **)(puVar17[uVar11 >> 9] + (uVar11 & 0x1ff) * 8) = param_2;
  param_1[5] = uVar10 + 1;
  return;
}



/* Entry: 100117868; end: 10011789b;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_100117868(ulong param_1,undefined8 *******param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 ******ppppppuVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined4 uVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 ******ppppppuVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  if (param_1 >> 0x3d == 0) {
    lVar7 = param_1 << 3;
    func_0x000107c60e20(lVar7);
    auVar20._8_8_ = param_1;
    auVar20._0_8_ = lVar7;
    return auVar20;
  }
  func_0x000104c4f740();
  pppppppuVar11 = &pppppppuStack_a0;
  ppppppuVar14 = *(undefined8 *******)(param_1 + 0x80);
  ppppppuVar13 = *(undefined8 *******)(param_1 + 0x88);
  while ((ppppppuVar13 != ppppppuVar14 &&
         (*(byte *)ppppppuVar13 < 0x21 &&
          (1L << ((ulong)*(byte *)ppppppuVar13 & 0x3f) & 0x100002600U) != 0))) {
    ppppppuVar13 = (undefined8 ******)((long)ppppppuVar13 + 1);
    *(undefined8 *******)(param_1 + 0x88) = ppppppuVar13;
  }
  param_2[1] = ppppppuVar13;
  pppppppuVar10 = param_2;
  if (ppppppuVar13 == ppppppuVar14) {
LAB_100117a44:
    *(undefined4 *)param_2 = 0;
    goto LAB_100117ce0;
  }
  ppppppuVar3 = (undefined8 ******)((long)ppppppuVar13 + 1);
  *(undefined8 *******)(param_1 + 0x88) = ppppppuVar3;
  bVar5 = *(byte *)ppppppuVar13;
  if (0x5a < bVar5) {
    if (bVar5 < 0x6e) {
      if (bVar5 == 0x5b) {
        uVar12 = 3;
      }
      else {
        if (bVar5 != 0x5d) {
          if ((bVar5 == 0x66) &&
             (*(undefined4 *)param_2 = 8, 3 < (long)ppppppuVar14 - (long)ppppppuVar3)) {
            lVar7 = 0;
            do {
              if (lVar7 == -4) {
                ppppppuVar13 = (undefined8 ******)((long)ppppppuVar13 + 5);
                goto LAB_100117e2c;
              }
              lVar18 = lVar7 + 4;
              pbVar17 = &UNK_10f58797b + lVar7;
              lVar7 = lVar7 + -1;
            } while (*(byte *)((long)ppppppuVar13 + lVar18) == *pbVar17);
          }
          goto LAB_100117e10;
        }
        uVar12 = 4;
      }
      goto LAB_100117cdc;
    }
    if (bVar5 < 0x7b) {
      if (bVar5 == 0x6e) {
        *(undefined4 *)param_2 = 9;
        if (2 < (long)ppppppuVar14 - (long)ppppppuVar3) {
          lVar7 = 0;
          do {
            if (lVar7 == -3) goto LAB_100117d08;
            lVar18 = lVar7 + 3;
            pbVar17 = &UNK_10f58797f + lVar7;
            lVar7 = lVar7 + -1;
          } while (*(byte *)((long)ppppppuVar13 + lVar18) == *pbVar17);
        }
      }
      else if ((bVar5 == 0x74) &&
              (*(undefined4 *)param_2 = 7, 2 < (long)ppppppuVar14 - (long)ppppppuVar3)) {
        lVar7 = 0;
        do {
          if (lVar7 == -3) goto LAB_100117d08;
          lVar18 = lVar7 + 3;
          pbVar17 = &UNK_10f587976 + lVar7;
          lVar7 = lVar7 + -1;
        } while (*(byte *)((long)ppppppuVar13 + lVar18) == *pbVar17);
      }
    }
    else {
      if (bVar5 == 0x7d) {
        uVar12 = 2;
        goto LAB_100117cdc;
      }
      if (bVar5 == 0x7b) {
        uVar9 = 1;
        *(undefined4 *)param_2 = 1;
        goto LAB_100117ce4;
      }
    }
    goto LAB_100117e10;
  }
  switch(bVar5) {
  case 0x22:
    *(undefined4 *)param_2 = 5;
    do {
      while( true ) {
        ppppppuVar13 = ppppppuVar3;
        if (ppppppuVar13 == ppppppuVar14) goto LAB_100117e10;
        ppppppuVar3 = (undefined8 ******)((long)ppppppuVar13 + 1);
        *(undefined8 *******)(param_1 + 0x88) = ppppppuVar3;
        if (*(byte *)ppppppuVar13 != 0x5c) break;
        if (ppppppuVar3 != ppppppuVar14) {
          *(undefined8 *******)(param_1 + 0x88) = (undefined8 ******)((long)ppppppuVar13 + 2U);
          ppppppuVar3 = (undefined8 ******)((long)ppppppuVar13 + 2U);
        }
      }
    } while (*(byte *)ppppppuVar13 != 0x22);
    goto LAB_100117ce0;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2e:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
    break;
  case 0x27:
    if (*(char *)(param_1 + 0xc4) != '\x01') goto code_r0x000100117b48;
    *(undefined4 *)param_2 = 5;
    uVar8 = param_1;
    func_0x000107c2ad20();
    if ((uVar8 & 1) != 0) goto LAB_100117ce0;
    break;
  case 0x2b:
    pppppppuVar10 = (undefined8 *******)0x1;
    uVar8 = param_1;
    FUN_10011966c(param_1,1);
    if ((int)uVar8 != 0) {
code_r0x000100117acc:
      uVar12 = 6;
      goto LAB_100117cdc;
    }
    *(undefined4 *)param_2 = 0xb;
    if ((*(char *)(param_1 + 199) == '\x01') &&
       (lVar7 = *(long *)(param_1 + 0x88), 6 < *(long *)(param_1 + 0x80) - lVar7)) {
      lVar18 = 6;
      do {
        if (lVar18 == -1) goto code_r0x000100117e20;
        pcVar1 = (char *)(lVar7 + lVar18);
        pcVar2 = &UNK_10f587bcb + lVar18;
        lVar18 = lVar18 + -1;
      } while (*pcVar1 == *pcVar2);
    }
    break;
  case 0x2c:
    uVar12 = 0xd;
    goto LAB_100117cdc;
  case 0x2d:
    pppppppuVar10 = (undefined8 *******)0x1;
    uVar8 = param_1;
    FUN_10011966c(param_1,1);
    if ((int)uVar8 != 0) goto code_r0x000100117acc;
    *(undefined4 *)param_2 = 0xc;
    if ((*(char *)(param_1 + 199) == '\x01') &&
       (lVar7 = *(long *)(param_1 + 0x88), 6 < *(long *)(param_1 + 0x80) - lVar7)) {
      lVar18 = 6;
      do {
        if (lVar18 == -1) goto code_r0x000100117e20;
        pcVar1 = (char *)(lVar7 + lVar18);
        pcVar2 = &UNK_10f587bcb + lVar18;
        lVar18 = lVar18 + -1;
      } while (*pcVar1 == *pcVar2);
    }
    break;
  case 0x2f:
code_r0x000100117b48:
    *(undefined4 *)param_2 = 0xf;
    if (ppppppuVar3 != ppppppuVar14) {
      pbVar17 = (byte *)((long)ppppppuVar13 + 2);
      *(byte **)(param_1 + 0x88) = pbVar17;
      if (*(byte *)((long)ppppppuVar13 + 1) == 0x2a) {
        if ((undefined8 ******)((long)ppppppuVar13 + 3U) < ppppppuVar14) {
          bVar19 = false;
          lVar18 = 2;
          do {
            while( true ) {
              lVar7 = lVar18;
              lVar18 = lVar7 + 1;
              pbVar4 = (byte *)((long)ppppppuVar13 + lVar18);
              *(byte **)(param_1 + 0x88) = pbVar4;
              if (*pbVar17 != 0x2a) break;
              pbVar17 = pbVar4;
              if (*pbVar4 == 0x2f || ppppppuVar14 <= pbVar4 + 1) goto code_r0x000100117dec;
            }
            bVar6 = true;
            if (*pbVar17 != 10) {
              bVar6 = bVar19;
            }
            bVar19 = bVar6;
            pbVar17 = (byte *)((long)ppppppuVar13 + lVar18);
          } while (pbVar17 + 1 < ppppppuVar14);
        }
        else {
          bVar19 = false;
          lVar7 = 1;
        }
code_r0x000100117dec:
        if ((undefined8 ******)((long)ppppppuVar3 + lVar7) != ppppppuVar14) {
          pbVar17 = (byte *)(lVar7 + 1);
          *(byte **)(param_1 + 0x88) = (byte *)((long)ppppppuVar3 + (long)pbVar17);
          if (*(byte *)((long)ppppppuVar3 + lVar7) == 0x2f) goto code_r0x000100117e3c;
        }
      }
      else if (*(byte *)((long)ppppppuVar13 + 1) == 0x2f) {
        pbVar17 = (byte *)((long)ppppppuVar14 + ~(ulong)ppppppuVar13);
        pbVar4 = (byte *)0x0;
        do {
          pbVar16 = pbVar4;
          if ((byte *)((long)ppppppuVar14 + (-2 - (long)ppppppuVar13)) == pbVar16)
          goto code_r0x000100117ddc;
          *(byte **)(param_1 + 0x88) = (byte *)((long)ppppppuVar13 + (long)(pbVar16 + 3));
          if (*(byte *)((long)ppppppuVar13 + (long)(pbVar16 + 2)) == 10) {
            bVar19 = false;
            pbVar17 = pbVar16 + 2;
            goto code_r0x000100117e3c;
          }
          pbVar4 = pbVar16 + 1;
        } while (*(byte *)((long)ppppppuVar13 + (long)(pbVar16 + 2)) != 0xd);
        pbVar17 = pbVar16 + 2;
        if (((undefined8 ******)((long)ppppppuVar13 + (long)(pbVar16 + 3)) == ppppppuVar14) ||
           (*(byte *)((long)ppppppuVar13 + (long)(pbVar16 + 3)) != 10)) {
code_r0x000100117ddc:
          bVar19 = false;
        }
        else {
          bVar19 = false;
          pbVar17 = pbVar16 + 3;
          *(byte **)(param_1 + 0x88) = (byte *)((long)ppppppuVar13 + (long)(pbVar16 + 4));
        }
code_r0x000100117e3c:
        if (*(char *)(param_1 + 0xd0) != '\x01') goto LAB_100117ce0;
        if (((*(byte *)(param_1 + 0xa0) & 1) == 0) &&
           (ppppppuVar14 = *(undefined8 *******)(param_1 + 0x90),
           ppppppuVar14 != (undefined8 ******)0x0)) {
          if (ppppppuVar14 < ppppppuVar13) {
            bVar6 = true;
            do {
              ppppppuVar15 = (undefined8 ******)((long)ppppppuVar14 + 1);
              if (*(byte *)ppppppuVar14 == 10 || *(byte *)ppppppuVar14 == 0xd) break;
              bVar6 = ppppppuVar15 < ppppppuVar13;
              ppppppuVar14 = ppppppuVar15;
            } while (ppppppuVar15 != ppppppuVar13);
            if (bVar6 || bVar19) goto code_r0x000100117e88;
          }
          else if (bVar19) goto code_r0x000100117e88;
          bVar19 = false;
          *(undefined1 *)(param_1 + 0xa0) = 1;
        }
        else {
code_r0x000100117e88:
          bVar19 = true;
        }
        pppppppuStack_88 = (undefined8 *******)0x0;
        uStack_80 = 0;
        uStack_78 = 0;
        func_0x000107c60c84(&pppppppuStack_88,pbVar17 + 1);
        if (pbVar17 != (byte *)0xffffffffffffffff) {
          ppppppuVar3 = (undefined8 ******)((long)ppppppuVar3 + (long)pbVar17);
          do {
            ppppppuVar14 = (undefined8 ******)((long)ppppppuVar13 + 1);
            if (*(byte *)ppppppuVar13 == 0xd) {
              ppppppuVar15 = ppppppuVar3;
              if ((ppppppuVar14 != ppppppuVar3) &&
                 (ppppppuVar15 = (undefined8 ******)((long)ppppppuVar13 + 2),
                 *(byte *)((long)ppppppuVar13 + 1) != 10)) {
                ppppppuVar15 = ppppppuVar14;
              }
              func_0x000107c60c8c(&pppppppuStack_88,10);
              ppppppuVar13 = ppppppuVar15;
            }
            else {
              func_0x000107c60c8c(&pppppppuStack_88);
              ppppppuVar13 = ppppppuVar14;
            }
          } while (ppppppuVar13 != ppppppuVar3);
        }
        if (bVar19) {
          uVar8 = uStack_80;
          pppppppuVar11 = pppppppuStack_88;
          if (-1 < (long)uStack_78) {
            uVar8 = uStack_78 >> 0x38;
            pppppppuVar11 = &pppppppuStack_88;
          }
          func_0x000107c60c5c(param_1 + 0xa8,pppppppuVar11,uVar8);
        }
        else {
          uVar9 = *(undefined8 *)(param_1 + 0x98);
          if ((long)uStack_78 < 0) {
            FUN_100033dac(&pppppppuStack_a0,pppppppuStack_88,uStack_80);
          }
          else {
            uStack_98 = uStack_80;
            pppppppuStack_a0 = pppppppuStack_88;
            uStack_90 = uStack_78;
          }
          func_0x000107c2ad9c(uVar9,&pppppppuStack_a0,1);
          if ((long)uStack_90 < 0) {
            func_0x000107c60e14(pppppppuStack_a0);
          }
        }
        pppppppuVar10 = pppppppuVar11;
        if ((long)uStack_78 < 0) {
          func_0x000107c60e14(pppppppuStack_88);
          pppppppuVar10 = pppppppuVar11;
        }
        goto LAB_100117ce0;
      }
    }
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    *(undefined4 *)param_2 = 6;
    pppppppuVar10 = (undefined8 *******)0x0;
    FUN_10011966c(param_1,0);
    goto LAB_100117ce0;
  case 0x3a:
    uVar12 = 0xe;
LAB_100117cdc:
    *(undefined4 *)param_2 = uVar12;
LAB_100117ce0:
    uVar9 = 1;
    goto LAB_100117ce4;
  case 0x49:
    if ((*(char *)(param_1 + 199) == '\x01') &&
       (*(undefined4 *)param_2 = 0xb, 6 < (long)ppppppuVar14 - (long)ppppppuVar3)) {
      lVar7 = 0;
      do {
        if (lVar7 == -7) {
          ppppppuVar13 = ppppppuVar13 + 1;
          goto LAB_100117e2c;
        }
        lVar18 = lVar7 + 7;
        pbVar17 = &UNK_10f587bd1 + lVar7;
        lVar7 = lVar7 + -1;
      } while (*(byte *)((long)ppppppuVar13 + lVar18) == *pbVar17);
    }
    break;
  case 0x4e:
    if ((((*(char *)(param_1 + 199) == '\x01') &&
         (*(undefined4 *)param_2 = 10, 1 < (long)ppppppuVar14 - (long)ppppppuVar3)) &&
        (*(byte *)((long)ppppppuVar13 + 2) == 0x4e)) && (*(byte *)ppppppuVar3 == 0x61)) {
      ppppppuVar13 = (undefined8 ******)((long)ppppppuVar13 + 3);
      goto LAB_100117e2c;
    }
    break;
  default:
    if (bVar5 == 0) goto LAB_100117a44;
  }
LAB_100117e10:
  uVar9 = 0;
  *(undefined4 *)param_2 = 0x10;
LAB_100117ce4:
  param_2[2] = *(undefined8 *******)(param_1 + 0x88);
  auVar21._8_8_ = pppppppuVar10;
  auVar21._0_8_ = uVar9;
  return auVar21;
LAB_100117d08:
  ppppppuVar13 = (undefined8 ******)((long)ppppppuVar13 + 4);
  goto LAB_100117e2c;
code_r0x000100117e20:
  ppppppuVar13 = (undefined8 ******)(lVar7 + 7);
LAB_100117e2c:
  *(undefined8 *******)(param_1 + 0x88) = ppppppuVar13;
  goto LAB_100117ce0;
}



/* Entry: 10011789c; end: 100117fdb;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10011789c(ulong param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 *******pppppppuVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  bool bVar17;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *******pppppppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  pbVar12 = *(byte **)(param_1 + 0x80);
  pbVar11 = *(byte **)(param_1 + 0x88);
  while ((pbVar11 != pbVar12 &&
         (*pbVar11 < 0x21 && (1L << ((ulong)*pbVar11 & 0x3f) & 0x100002600U) != 0))) {
    pbVar11 = pbVar11 + 1;
    *(byte **)(param_1 + 0x88) = pbVar11;
  }
  *(byte **)(param_2 + 2) = pbVar11;
  if (pbVar11 == pbVar12) {
LAB_100117a44:
    *param_2 = 0;
    goto LAB_100117ce0;
  }
  pbVar3 = pbVar11 + 1;
  *(byte **)(param_1 + 0x88) = pbVar3;
  bVar4 = *pbVar11;
  if (0x5a < bVar4) {
    if (bVar4 < 0x6e) {
      if (bVar4 == 0x5b) {
        uVar9 = 3;
      }
      else {
        if (bVar4 != 0x5d) {
          if ((bVar4 == 0x66) && (*param_2 = 8, 3 < (long)pbVar12 - (long)pbVar3)) {
            lVar10 = 0;
            do {
              if (lVar10 == -4) {
                pbVar11 = pbVar11 + 5;
                goto LAB_100117e2c;
              }
              lVar16 = lVar10 + 4;
              pbVar12 = &UNK_10f58797b + lVar10;
              lVar10 = lVar10 + -1;
            } while (pbVar11[lVar16] == *pbVar12);
          }
          goto LAB_100117e10;
        }
        uVar9 = 4;
      }
      goto LAB_100117cdc;
    }
    if (bVar4 < 0x7b) {
      if (bVar4 == 0x6e) {
        *param_2 = 9;
        if (2 < (long)pbVar12 - (long)pbVar3) {
          lVar10 = 0;
          do {
            if (lVar10 == -3) goto LAB_100117d08;
            lVar16 = lVar10 + 3;
            pbVar12 = &UNK_10f58797f + lVar10;
            lVar10 = lVar10 + -1;
          } while (pbVar11[lVar16] == *pbVar12);
        }
      }
      else if ((bVar4 == 0x74) && (*param_2 = 7, 2 < (long)pbVar12 - (long)pbVar3)) {
        lVar10 = 0;
        do {
          if (lVar10 == -3) goto LAB_100117d08;
          lVar16 = lVar10 + 3;
          pbVar12 = &UNK_10f587976 + lVar10;
          lVar10 = lVar10 + -1;
        } while (pbVar11[lVar16] == *pbVar12);
      }
    }
    else {
      if (bVar4 == 0x7d) {
        uVar9 = 2;
        goto LAB_100117cdc;
      }
      if (bVar4 == 0x7b) {
        uVar8 = 1;
        *param_2 = 1;
        goto LAB_100117ce4;
      }
    }
    goto LAB_100117e10;
  }
  switch(bVar4) {
  case 0x22:
    *param_2 = 5;
    do {
      while( true ) {
        pbVar11 = pbVar3;
        if (pbVar11 == pbVar12) goto LAB_100117e10;
        pbVar3 = pbVar11 + 1;
        *(byte **)(param_1 + 0x88) = pbVar3;
        if (*pbVar11 != 0x5c) break;
        if (pbVar3 != pbVar12) {
          *(byte **)(param_1 + 0x88) = pbVar11 + 2;
          pbVar3 = pbVar11 + 2;
        }
      }
    } while (*pbVar11 != 0x22);
    goto LAB_100117ce0;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2e:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
    break;
  case 0x27:
    if (*(char *)(param_1 + 0xc4) != '\x01') goto code_r0x000100117b48;
    *param_2 = 5;
    uVar7 = param_1;
    func_0x000107c2ad20();
    if ((uVar7 & 1) != 0) goto LAB_100117ce0;
    break;
  case 0x2b:
    uVar7 = param_1;
    FUN_10011966c(param_1,1);
    if ((int)uVar7 != 0) {
code_r0x000100117acc:
      uVar9 = 6;
      goto LAB_100117cdc;
    }
    *param_2 = 0xb;
    if ((*(char *)(param_1 + 199) == '\x01') &&
       (lVar10 = *(long *)(param_1 + 0x88), 6 < *(long *)(param_1 + 0x80) - lVar10)) {
      lVar16 = 6;
      do {
        if (lVar16 == -1) goto code_r0x000100117e20;
        pcVar1 = (char *)(lVar10 + lVar16);
        pcVar2 = &UNK_10f587bcb + lVar16;
        lVar16 = lVar16 + -1;
      } while (*pcVar1 == *pcVar2);
    }
    break;
  case 0x2c:
    uVar9 = 0xd;
    goto LAB_100117cdc;
  case 0x2d:
    uVar7 = param_1;
    FUN_10011966c(param_1,1);
    if ((int)uVar7 != 0) goto code_r0x000100117acc;
    *param_2 = 0xc;
    if ((*(char *)(param_1 + 199) == '\x01') &&
       (lVar10 = *(long *)(param_1 + 0x88), 6 < *(long *)(param_1 + 0x80) - lVar10)) {
      lVar16 = 6;
      do {
        if (lVar16 == -1) goto code_r0x000100117e20;
        pcVar1 = (char *)(lVar10 + lVar16);
        pcVar2 = &UNK_10f587bcb + lVar16;
        lVar16 = lVar16 + -1;
      } while (*pcVar1 == *pcVar2);
    }
    break;
  case 0x2f:
code_r0x000100117b48:
    *param_2 = 0xf;
    if (pbVar3 != pbVar12) {
      pbVar15 = pbVar11 + 2;
      *(byte **)(param_1 + 0x88) = pbVar15;
      if (pbVar11[1] == 0x2a) {
        if (pbVar11 + 3 < pbVar12) {
          bVar17 = false;
          lVar16 = 2;
          do {
            while( true ) {
              lVar10 = lVar16;
              lVar16 = lVar10 + 1;
              pbVar13 = pbVar11 + lVar16;
              *(byte **)(param_1 + 0x88) = pbVar13;
              if (*pbVar15 != 0x2a) break;
              pbVar15 = pbVar13;
              if (*pbVar13 == 0x2f || pbVar12 <= pbVar13 + 1) goto code_r0x000100117dec;
            }
            bVar6 = true;
            if (*pbVar15 != 10) {
              bVar6 = bVar17;
            }
            bVar17 = bVar6;
            pbVar15 = pbVar11 + lVar16;
          } while (pbVar15 + 1 < pbVar12);
        }
        else {
          bVar17 = false;
          lVar10 = 1;
        }
code_r0x000100117dec:
        if (pbVar3 + lVar10 != pbVar12) {
          pbVar15 = (byte *)(lVar10 + 1);
          *(byte **)(param_1 + 0x88) = pbVar3 + (long)pbVar15;
          if (pbVar3[lVar10] == 0x2f) goto code_r0x000100117e3c;
        }
      }
      else if (pbVar11[1] == 0x2f) {
        pbVar15 = pbVar12 + ~(ulong)pbVar11;
        pbVar13 = (byte *)0x0;
        do {
          pbVar14 = pbVar13;
          if (pbVar12 + (-2 - (long)pbVar11) == pbVar14) goto code_r0x000100117ddc;
          *(byte **)(param_1 + 0x88) = pbVar11 + (long)(pbVar14 + 3);
          if (pbVar11[(long)(pbVar14 + 2)] == 10) {
            bVar17 = false;
            pbVar15 = pbVar14 + 2;
            goto code_r0x000100117e3c;
          }
          pbVar13 = pbVar14 + 1;
        } while (pbVar11[(long)(pbVar14 + 2)] != 0xd);
        pbVar15 = pbVar14 + 2;
        if ((pbVar11 + (long)(pbVar14 + 3) == pbVar12) || (pbVar11[(long)(pbVar14 + 3)] != 10)) {
code_r0x000100117ddc:
          bVar17 = false;
        }
        else {
          bVar17 = false;
          pbVar15 = pbVar14 + 3;
          *(byte **)(param_1 + 0x88) = pbVar11 + (long)(pbVar14 + 4);
        }
code_r0x000100117e3c:
        if (*(char *)(param_1 + 0xd0) != '\x01') goto LAB_100117ce0;
        if (((*(byte *)(param_1 + 0xa0) & 1) == 0) &&
           (pbVar12 = *(byte **)(param_1 + 0x90), pbVar12 != (byte *)0x0)) {
          if (pbVar12 < pbVar11) {
            bVar6 = true;
            do {
              pbVar13 = pbVar12 + 1;
              if (*pbVar12 == 10 || *pbVar12 == 0xd) break;
              bVar6 = pbVar13 < pbVar11;
              pbVar12 = pbVar13;
            } while (pbVar13 != pbVar11);
            if (bVar6 || bVar17) goto code_r0x000100117e88;
          }
          else if (bVar17) goto code_r0x000100117e88;
          bVar17 = false;
          *(undefined1 *)(param_1 + 0xa0) = 1;
        }
        else {
code_r0x000100117e88:
          bVar17 = true;
        }
        pppppppuStack_68 = (undefined8 *******)0x0;
        uStack_60 = 0;
        uStack_58 = 0;
        func_0x000107c60c84(&pppppppuStack_68,pbVar15 + 1);
        if (pbVar15 != (byte *)0xffffffffffffffff) {
          pbVar3 = pbVar3 + (long)pbVar15;
          do {
            pbVar12 = pbVar11 + 1;
            if (*pbVar11 == 0xd) {
              pbVar15 = pbVar3;
              if ((pbVar12 != pbVar3) && (pbVar15 = pbVar11 + 2, pbVar11[1] != 10)) {
                pbVar15 = pbVar12;
              }
              func_0x000107c60c8c(&pppppppuStack_68,10);
              pbVar11 = pbVar15;
            }
            else {
              func_0x000107c60c8c(&pppppppuStack_68);
              pbVar11 = pbVar12;
            }
          } while (pbVar11 != pbVar3);
        }
        if (bVar17) {
          uVar7 = uStack_60;
          pppppppuVar5 = pppppppuStack_68;
          if (-1 < (long)uStack_58) {
            uVar7 = uStack_58 >> 0x38;
            pppppppuVar5 = &pppppppuStack_68;
          }
          func_0x000107c60c5c(param_1 + 0xa8,pppppppuVar5,uVar7);
        }
        else {
          uVar8 = *(undefined8 *)(param_1 + 0x98);
          if ((long)uStack_58 < 0) {
            FUN_100033dac(&pppppppuStack_80,pppppppuStack_68,uStack_60);
          }
          else {
            uStack_78 = uStack_60;
            pppppppuStack_80 = pppppppuStack_68;
            uStack_70 = uStack_58;
          }
          func_0x000107c2ad9c(uVar8,&pppppppuStack_80,1);
          if ((long)uStack_70 < 0) {
            func_0x000107c60e14(pppppppuStack_80);
          }
        }
        if ((long)uStack_58 < 0) {
          func_0x000107c60e14(pppppppuStack_68);
        }
        goto LAB_100117ce0;
      }
    }
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    *param_2 = 6;
    FUN_10011966c(param_1,0);
    goto LAB_100117ce0;
  case 0x3a:
    uVar9 = 0xe;
LAB_100117cdc:
    *param_2 = uVar9;
LAB_100117ce0:
    uVar8 = 1;
    goto LAB_100117ce4;
  case 0x49:
    if ((*(char *)(param_1 + 199) == '\x01') && (*param_2 = 0xb, 6 < (long)pbVar12 - (long)pbVar3))
    {
      lVar10 = 0;
      do {
        if (lVar10 == -7) {
          pbVar11 = pbVar11 + 8;
          goto LAB_100117e2c;
        }
        lVar16 = lVar10 + 7;
        pbVar12 = &UNK_10f587bd1 + lVar10;
        lVar10 = lVar10 + -1;
      } while (pbVar11[lVar16] == *pbVar12);
    }
    break;
  case 0x4e:
    if ((((*(char *)(param_1 + 199) == '\x01') && (*param_2 = 10, 1 < (long)pbVar12 - (long)pbVar3))
        && (pbVar11[2] == 0x4e)) && (*pbVar3 == 0x61)) {
      pbVar11 = pbVar11 + 3;
      goto LAB_100117e2c;
    }
    break;
  default:
    if (bVar4 == 0) goto LAB_100117a44;
  }
LAB_100117e10:
  uVar8 = 0;
  *param_2 = 0x10;
LAB_100117ce4:
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x88);
  return uVar8;
LAB_100117d08:
  pbVar11 = pbVar11 + 4;
  goto LAB_100117e2c;
code_r0x000100117e20:
  pbVar11 = (byte *)(lVar10 + 7);
LAB_100117e2c:
  *(byte **)(param_1 + 0x88) = pbVar11;
  goto LAB_100117ce0;
}



/* Entry: 100117fdc; end: 100118033;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_100117fdc(ulong param_1,int *param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 *******pppppppuVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *******pppppppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    do {
      uVar7 = param_1;
      FUN_10011789c(param_1,param_2);
    } while (*param_2 == 0xf);
    return uVar7;
  }
  pbVar11 = *(byte **)(param_1 + 0x80);
  pbVar10 = *(byte **)(param_1 + 0x88);
  while ((pbVar10 != pbVar11 &&
         (*pbVar10 < 0x21 && (1L << ((ulong)*pbVar10 & 0x3f) & 0x100002600U) != 0))) {
    pbVar10 = pbVar10 + 1;
    *(byte **)(param_1 + 0x88) = pbVar10;
  }
  *(byte **)(param_2 + 2) = pbVar10;
  if (pbVar10 == pbVar11) {
LAB_100117a44:
    *param_2 = 0;
    goto LAB_100117ce0;
  }
  pbVar3 = pbVar10 + 1;
  *(byte **)(param_1 + 0x88) = pbVar3;
  bVar4 = *pbVar10;
  if (0x5a < bVar4) {
    if (bVar4 < 0x6e) {
      if (bVar4 == 0x5b) {
        iVar8 = 3;
      }
      else {
        if (bVar4 != 0x5d) {
          if ((bVar4 == 0x66) && (*param_2 = 8, 3 < (long)pbVar11 - (long)pbVar3)) {
            lVar9 = 0;
            do {
              if (lVar9 == -4) {
                pbVar10 = pbVar10 + 5;
                goto LAB_100117e2c;
              }
              lVar15 = lVar9 + 4;
              pbVar11 = &UNK_10f58797b + lVar9;
              lVar9 = lVar9 + -1;
            } while (pbVar10[lVar15] == *pbVar11);
          }
          goto LAB_100117e10;
        }
        iVar8 = 4;
      }
      goto LAB_100117cdc;
    }
    if (bVar4 < 0x7b) {
      if (bVar4 == 0x6e) {
        *param_2 = 9;
        if (2 < (long)pbVar11 - (long)pbVar3) {
          lVar9 = 0;
          do {
            if (lVar9 == -3) goto LAB_100117d08;
            lVar15 = lVar9 + 3;
            pbVar11 = &UNK_10f58797f + lVar9;
            lVar9 = lVar9 + -1;
          } while (pbVar10[lVar15] == *pbVar11);
        }
      }
      else if ((bVar4 == 0x74) && (*param_2 = 7, 2 < (long)pbVar11 - (long)pbVar3)) {
        lVar9 = 0;
        do {
          if (lVar9 == -3) goto LAB_100117d08;
          lVar15 = lVar9 + 3;
          pbVar11 = &UNK_10f587976 + lVar9;
          lVar9 = lVar9 + -1;
        } while (pbVar10[lVar15] == *pbVar11);
      }
    }
    else {
      if (bVar4 == 0x7d) {
        iVar8 = 2;
        goto LAB_100117cdc;
      }
      if (bVar4 == 0x7b) {
        uVar7 = 1;
        *param_2 = 1;
        goto LAB_100117ce4;
      }
    }
    goto LAB_100117e10;
  }
  switch(bVar4) {
  case 0x22:
    *param_2 = 5;
    do {
      while( true ) {
        pbVar10 = pbVar3;
        if (pbVar10 == pbVar11) goto LAB_100117e10;
        pbVar3 = pbVar10 + 1;
        *(byte **)(param_1 + 0x88) = pbVar3;
        if (*pbVar10 != 0x5c) break;
        if (pbVar3 != pbVar11) {
          *(byte **)(param_1 + 0x88) = pbVar10 + 2;
          pbVar3 = pbVar10 + 2;
        }
      }
    } while (*pbVar10 != 0x22);
    goto LAB_100117ce0;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2e:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
    break;
  case 0x27:
    if (*(char *)(param_1 + 0xc4) != '\x01') goto code_r0x000100117b48;
    *param_2 = 5;
    uVar7 = param_1;
    func_0x000107c2ad20();
    if ((uVar7 & 1) != 0) goto LAB_100117ce0;
    break;
  case 0x2b:
    uVar7 = param_1;
    FUN_10011966c(param_1,1);
    if ((int)uVar7 != 0) {
code_r0x000100117acc:
      iVar8 = 6;
      goto LAB_100117cdc;
    }
    *param_2 = 0xb;
    if ((*(char *)(param_1 + 199) == '\x01') &&
       (lVar9 = *(long *)(param_1 + 0x88), 6 < *(long *)(param_1 + 0x80) - lVar9)) {
      lVar15 = 6;
      do {
        if (lVar15 == -1) goto code_r0x000100117e20;
        pcVar1 = (char *)(lVar9 + lVar15);
        pcVar2 = &UNK_10f587bcb + lVar15;
        lVar15 = lVar15 + -1;
      } while (*pcVar1 == *pcVar2);
    }
    break;
  case 0x2c:
    iVar8 = 0xd;
    goto LAB_100117cdc;
  case 0x2d:
    uVar7 = param_1;
    FUN_10011966c(param_1,1);
    if ((int)uVar7 != 0) goto code_r0x000100117acc;
    *param_2 = 0xc;
    if ((*(char *)(param_1 + 199) == '\x01') &&
       (lVar9 = *(long *)(param_1 + 0x88), 6 < *(long *)(param_1 + 0x80) - lVar9)) {
      lVar15 = 6;
      do {
        if (lVar15 == -1) goto code_r0x000100117e20;
        pcVar1 = (char *)(lVar9 + lVar15);
        pcVar2 = &UNK_10f587bcb + lVar15;
        lVar15 = lVar15 + -1;
      } while (*pcVar1 == *pcVar2);
    }
    break;
  case 0x2f:
code_r0x000100117b48:
    *param_2 = 0xf;
    if (pbVar3 != pbVar11) {
      pbVar14 = pbVar10 + 2;
      *(byte **)(param_1 + 0x88) = pbVar14;
      if (pbVar10[1] == 0x2a) {
        if (pbVar10 + 3 < pbVar11) {
          bVar17 = false;
          lVar15 = 2;
          do {
            while( true ) {
              lVar9 = lVar15;
              lVar15 = lVar9 + 1;
              pbVar12 = pbVar10 + lVar15;
              *(byte **)(param_1 + 0x88) = pbVar12;
              if (*pbVar14 != 0x2a) break;
              pbVar14 = pbVar12;
              if (*pbVar12 == 0x2f || pbVar11 <= pbVar12 + 1) goto code_r0x000100117dec;
            }
            bVar6 = true;
            if (*pbVar14 != 10) {
              bVar6 = bVar17;
            }
            bVar17 = bVar6;
            pbVar14 = pbVar10 + lVar15;
          } while (pbVar14 + 1 < pbVar11);
        }
        else {
          bVar17 = false;
          lVar9 = 1;
        }
code_r0x000100117dec:
        if (pbVar3 + lVar9 != pbVar11) {
          pbVar14 = (byte *)(lVar9 + 1);
          *(byte **)(param_1 + 0x88) = pbVar3 + (long)pbVar14;
          if (pbVar3[lVar9] == 0x2f) goto code_r0x000100117e3c;
        }
      }
      else if (pbVar10[1] == 0x2f) {
        pbVar14 = pbVar11 + ~(ulong)pbVar10;
        pbVar12 = (byte *)0x0;
        do {
          pbVar13 = pbVar12;
          if (pbVar11 + (-2 - (long)pbVar10) == pbVar13) goto code_r0x000100117ddc;
          *(byte **)(param_1 + 0x88) = pbVar10 + (long)(pbVar13 + 3);
          if (pbVar10[(long)(pbVar13 + 2)] == 10) {
            bVar17 = false;
            pbVar14 = pbVar13 + 2;
            goto code_r0x000100117e3c;
          }
          pbVar12 = pbVar13 + 1;
        } while (pbVar10[(long)(pbVar13 + 2)] != 0xd);
        pbVar14 = pbVar13 + 2;
        if ((pbVar10 + (long)(pbVar13 + 3) == pbVar11) || (pbVar10[(long)(pbVar13 + 3)] != 10)) {
code_r0x000100117ddc:
          bVar17 = false;
        }
        else {
          bVar17 = false;
          pbVar14 = pbVar13 + 3;
          *(byte **)(param_1 + 0x88) = pbVar10 + (long)(pbVar13 + 4);
        }
code_r0x000100117e3c:
        if (*(char *)(param_1 + 0xd0) != '\x01') goto LAB_100117ce0;
        if (((*(byte *)(param_1 + 0xa0) & 1) == 0) &&
           (pbVar11 = *(byte **)(param_1 + 0x90), pbVar11 != (byte *)0x0)) {
          if (pbVar11 < pbVar10) {
            bVar6 = true;
            do {
              pbVar12 = pbVar11 + 1;
              if (*pbVar11 == 10 || *pbVar11 == 0xd) break;
              bVar6 = pbVar12 < pbVar10;
              pbVar11 = pbVar12;
            } while (pbVar12 != pbVar10);
            if (bVar6 || bVar17) goto code_r0x000100117e88;
          }
          else if (bVar17) goto code_r0x000100117e88;
          bVar17 = false;
          *(undefined1 *)(param_1 + 0xa0) = 1;
        }
        else {
code_r0x000100117e88:
          bVar17 = true;
        }
        pppppppuStack_68 = (undefined8 *******)0x0;
        uStack_60 = 0;
        uStack_58 = 0;
        func_0x000107c60c84(&pppppppuStack_68,pbVar14 + 1);
        if (pbVar14 != (byte *)0xffffffffffffffff) {
          pbVar3 = pbVar3 + (long)pbVar14;
          do {
            pbVar11 = pbVar10 + 1;
            if (*pbVar10 == 0xd) {
              pbVar14 = pbVar3;
              if ((pbVar11 != pbVar3) && (pbVar14 = pbVar10 + 2, pbVar10[1] != 10)) {
                pbVar14 = pbVar11;
              }
              func_0x000107c60c8c(&pppppppuStack_68,10);
              pbVar10 = pbVar14;
            }
            else {
              func_0x000107c60c8c(&pppppppuStack_68);
              pbVar10 = pbVar11;
            }
          } while (pbVar10 != pbVar3);
        }
        if (bVar17) {
          uVar7 = uStack_60;
          pppppppuVar5 = pppppppuStack_68;
          if (-1 < (long)uStack_58) {
            uVar7 = uStack_58 >> 0x38;
            pppppppuVar5 = &pppppppuStack_68;
          }
          func_0x000107c60c5c(param_1 + 0xa8,pppppppuVar5,uVar7);
        }
        else {
          uVar16 = *(undefined8 *)(param_1 + 0x98);
          if ((long)uStack_58 < 0) {
            FUN_100033dac(&pppppppuStack_80,pppppppuStack_68,uStack_60);
          }
          else {
            uStack_78 = uStack_60;
            pppppppuStack_80 = pppppppuStack_68;
            uStack_70 = uStack_58;
          }
          func_0x000107c2ad9c(uVar16,&pppppppuStack_80,1);
          if ((long)uStack_70 < 0) {
            func_0x000107c60e14(pppppppuStack_80);
          }
        }
        if ((long)uStack_58 < 0) {
          func_0x000107c60e14(pppppppuStack_68);
        }
        goto LAB_100117ce0;
      }
    }
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    *param_2 = 6;
    FUN_10011966c(param_1,0);
    goto LAB_100117ce0;
  case 0x3a:
    iVar8 = 0xe;
LAB_100117cdc:
    *param_2 = iVar8;
LAB_100117ce0:
    uVar7 = 1;
    goto LAB_100117ce4;
  case 0x49:
    if ((*(char *)(param_1 + 199) == '\x01') && (*param_2 = 0xb, 6 < (long)pbVar11 - (long)pbVar3))
    {
      lVar9 = 0;
      do {
        if (lVar9 == -7) {
          pbVar10 = pbVar10 + 8;
          goto LAB_100117e2c;
        }
        lVar15 = lVar9 + 7;
        pbVar11 = &UNK_10f587bd1 + lVar9;
        lVar9 = lVar9 + -1;
      } while (pbVar10[lVar15] == *pbVar11);
    }
    break;
  case 0x4e:
    if ((((*(char *)(param_1 + 199) == '\x01') && (*param_2 = 10, 1 < (long)pbVar11 - (long)pbVar3))
        && (pbVar10[2] == 0x4e)) && (*pbVar3 == 0x61)) {
      pbVar10 = pbVar10 + 3;
      goto LAB_100117e2c;
    }
    break;
  default:
    if (bVar4 == 0) goto LAB_100117a44;
  }
LAB_100117e10:
  uVar7 = 0;
  *param_2 = 0x10;
LAB_100117ce4:
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x88);
  return uVar7;
LAB_100117d08:
  pbVar10 = pbVar10 + 4;
  goto LAB_100117e2c;
code_r0x000100117e20:
  pbVar10 = (byte *)(lVar9 + 7);
LAB_100117e2c:
  *(byte **)(param_1 + 0x88) = pbVar10;
  goto LAB_100117ce0;
}



/* Entry: 100118034; end: 100118f2b;  */

/* WARNING: Removing unreachable block (ram,0x000100118268) */
/* WARNING: Removing unreachable block (ram,0x000100118bac) */

ulong FUN_100118034(ulong param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined8 *******pppppppuVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined4 auStack_128 [2];
  long lStack_120;
  long lStack_118;
  undefined8 auStack_110 [2];
  char cStack_f9;
  uint uStack_f8;
  undefined4 uStack_f4;
  ulong uStack_f0;
  undefined7 uStack_e8;
  char cStack_e1;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ******ppppppuStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  int aiStack_90 [6];
  long lStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(ulong *)(param_1 + 200) < *(ulong *)(param_1 + 0x28)) {
    FUN_10002d4d8(&lStack_78,&UNK_10f587921);
    func_0x000107c2ad54();
LAB_100118dd8:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100118ddc);
    (*pcVar4)();
  }
  FUN_100117fdc(param_1,auStack_128);
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    cVar2 = *(char *)(param_1 + 0xbf);
    if (cVar2 < '\0') {
      if (*(long *)(param_1 + 0xb0) != 0) goto LAB_100118090;
    }
    else if (cVar2 != '\0') {
LAB_100118090:
      uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
      uVar17 = *(undefined8 *)
                (*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
      if (cVar2 < '\0') {
        FUN_100033dac(&uStack_140,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0));
      }
      else {
        uStack_138 = *(undefined8 *)(param_1 + 0xb0);
        uStack_140 = *(undefined8 *)(param_1 + 0xa8);
        lStack_130 = *(long *)(param_1 + 0xb8);
      }
      func_0x000107c2ad9c(uVar17,&uStack_140,0);
      if (lStack_130 < 0) {
        func_0x000107c60e14(uStack_140);
      }
      if (*(char *)(param_1 + 0xbf) < '\0') {
        **(undefined1 **)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xa8) = 0;
        *(undefined1 *)(param_1 + 0xbf) = 0;
      }
    }
  }
  uVar9 = param_1;
  switch(auStack_128[0]) {
  case 1:
    ppppppuStack_b0 = (undefined8 *******)0x0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_70 = uStack_70 & 0xfffffe00 | 7;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    puVar6 = (undefined8 *)0x18;
    func_0x000107c60e20();
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = puVar6 + 1;
    uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
    uVar5 = *(uint *)(plVar8 + 1);
    *(uint *)(plVar8 + 1) = uStack_70;
    lStack_78 = *plVar8;
    *plVar8 = (long)puVar6;
    uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8)
             + 0x18) = lStack_120 - *(long *)(param_1 + 0x78);
    uStack_70 = uVar5;
    do {
      uVar9 = param_1;
      FUN_10011789c(param_1,aiStack_90);
      if ((int)uVar9 == 0) {
code_r0x000100118b24:
        FUN_10002d4d8(&uStack_e0,&UNK_10f5879cf);
        func_0x000107c2ad18(param_1,&uStack_e0,aiStack_90,0);
        func_0x000107c2ad24(param_1,2);
code_r0x000100118b54:
        auStack_110[0] = uStack_e0;
        if (lStack_d0 < 0) {
code_r0x000100118c50:
          func_0x000107c60e14(auStack_110[0]);
        }
code_r0x000100118c8c:
        uVar9 = 0;
        goto code_r0x000100118c90;
      }
      uVar9 = 1;
      while (((uVar9 & 1) != 0 && (aiStack_90[0] == 0xf))) {
        uVar9 = param_1;
        FUN_10011789c(param_1,aiStack_90);
      }
      if ((uVar9 & 1) == 0) goto code_r0x000100118b24;
      if (aiStack_90[0] == 2) {
        uVar9 = uStack_a8;
        if (-1 < (long)uStack_a0) {
          uVar9 = uStack_a0 >> 0x38;
        }
        if (uVar9 == 0) break;
      }
      if ((long)uStack_a0 < 0) {
        *(undefined1 *)ppppppuStack_b0 = 0;
        uStack_a8 = 0;
      }
      else {
        ppppppuStack_b0 = (undefined8 ******)((ulong)ppppppuStack_b0 & 0xffffffffffffff00);
        uStack_a0 = uStack_a0 & 0xffffffffffffff;
      }
      if (aiStack_90[0] == 6) {
        if (*(char *)(param_1 + 0xc3) != '\x01') goto code_r0x000100118b24;
        uStack_d8 = uStack_d8 & 0xfffffffffffffe00;
        uStack_c8 = 0;
        uStack_c0 = 0;
        lStack_d0 = 0;
        uVar9 = param_1;
        FUN_100119778(param_1,aiStack_90,&uStack_e0);
        if ((uVar9 & 1) != 0) {
          func_0x000107c2ad78(&uStack_f8,&uStack_e0);
          if ((long)uStack_a0 < 0) {
            func_0x000107c60e14(ppppppuStack_b0);
          }
          ppppppuStack_b0 = (undefined8 ******)CONCAT44(uStack_f4,uStack_f8);
          uStack_a8 = uStack_f0;
          uStack_a0 = CONCAT17(cStack_e1,uStack_e8);
          func_0x0001001151c0(&uStack_e0);
          goto code_r0x000100118618;
        }
        func_0x000107c2ad24(param_1,2);
        func_0x0001001151c0(&uStack_e0);
        goto code_r0x000100118c8c;
      }
      if (aiStack_90[0] != 5) goto code_r0x000100118b24;
      uVar9 = param_1;
      FUN_100118f2c(param_1,aiStack_90,&ppppppuStack_b0);
      if ((uVar9 & 1) == 0) {
        func_0x000107c2ad24(param_1,2);
        goto code_r0x000100118c8c;
      }
code_r0x000100118618:
      if (((long)uStack_a0._7_1_ < 0) && (uStack_a8 >> 0x1e != 0)) {
        FUN_10002d4d8(&uStack_e0,&UNK_10f587bd3);
        func_0x000107c2ad54(&uStack_e0);
        goto LAB_100118dd8;
      }
      if (*(char *)(param_1 + 0xc6) == '\x01') {
        uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
        lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) +
                          (uVar9 & 0x1ff) * 8);
        uVar9 = uStack_a8;
        pppppppuVar3 = (undefined8 *******)ppppppuStack_b0;
        if (-1 < (long)uStack_a0) {
          uVar9 = (long)uStack_a0._7_1_;
          pppppppuVar3 = &ppppppuStack_b0;
        }
        FUN_100115cec(lVar10,pppppppuVar3,(undefined1 *)((long)pppppppuVar3 + uVar9));
        if (lVar10 == 0) goto code_r0x000100118674;
        func_0x000107c60dec(&uStack_f8,&UNK_10f587be5,&ppppppuStack_b0);
        puVar7 = &uStack_f8;
        func_0x000107c60c5c(puVar7,&DAT_10f638984,1);
        uStack_d8 = *(ulong *)(puVar7 + 2);
        uStack_e0 = *(undefined8 *)puVar7;
        lStack_d0 = *(long *)(puVar7 + 4);
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[0] = 0;
        puVar7[1] = 0;
        if (cStack_e1 < '\0') {
          func_0x000107c60e14(CONCAT44(uStack_f4,uStack_f8));
        }
        func_0x000107c2ad18(param_1,&uStack_e0,aiStack_90,0);
        func_0x000107c2ad24(param_1,2);
        goto code_r0x000100118b54;
      }
code_r0x000100118674:
      uVar9 = param_1;
      FUN_10011789c(param_1,&uStack_e0);
      uVar5 = 0;
      if ((int)uStack_e0 == 0xe) {
        uVar5 = (uint)uVar9;
      }
      if ((uVar5 & 1) == 0) {
        FUN_10002d4d8(&uStack_f8,&UNK_10f587981);
        func_0x000107c2ad18(param_1,&uStack_f8,&uStack_e0,0);
        func_0x000107c2ad24(param_1,2);
        if (-1 < cStack_e1) goto code_r0x000100118c8c;
        auStack_110[0] = CONCAT44(uStack_f4,uStack_f8);
        goto code_r0x000100118c50;
      }
      uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
      uVar17 = *(undefined8 *)
                (*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
      uVar9 = uStack_a8;
      pppppppuVar3 = (undefined8 *******)ppppppuStack_b0;
      if (-1 < (long)uStack_a0) {
        uVar9 = uStack_a0 >> 0x38;
        pppppppuVar3 = &ppppppuStack_b0;
      }
      FUN_100114aec(uVar17,pppppppuVar3,(undefined1 *)((long)pppppppuVar3 + uVar9));
      FUN_10011753c(param_1,uVar17);
      uVar9 = param_1;
      FUN_100118034();
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      FUN_10011925c(param_1);
      if ((uVar9 & 1) == 0) {
        func_0x000107c2ad24(param_1,2);
        goto code_r0x000100118c8c;
      }
      uVar9 = param_1;
      FUN_10011789c(param_1,&uStack_f8);
      if ((((int)uVar9 == 0) || (0xf < uStack_f8)) ||
         ((1 << (ulong)(uStack_f8 & 0x1f) & 0xa004U) == 0)) {
        FUN_10002d4d8(auStack_110,&UNK_10f5879a6);
        func_0x000107c2ad18(param_1,auStack_110,&uStack_f8,0);
        func_0x000107c2ad24(param_1,2);
        if (cStack_f9 < '\0') goto code_r0x000100118c50;
        goto code_r0x000100118c8c;
      }
      uVar9 = 1;
      while (((uVar9 & 1) != 0 && (uStack_f8 == 0xf))) {
        uVar9 = param_1;
        FUN_10011789c(param_1,&uStack_f8);
      }
    } while (uStack_f8 != 2);
    uVar9 = 1;
code_r0x000100118c90:
    func_0x0001001151c0(&lStack_78);
    if ((long)uStack_a0 < 0) {
      func_0x000107c60e14(ppppppuStack_b0);
    }
    goto code_r0x000100118ca8;
  case 2:
  case 4:
  case 0xd:
    if (*(char *)(param_1 + 0xc2) != '\x01') goto LAB_1001181ec;
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
    uStack_70 = (uint)uStack_70._2_2_ << 0x10;
    uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
    lVar11 = plVar8[1];
    *(uint *)(plVar8 + 1) = uStack_70;
    lStack_78 = *plVar8;
    lVar10 = *(long *)(param_1 + 0x20) + -1;
    uVar9 = lVar10 + *(long *)(param_1 + 0x28);
    lVar13 = *(long *)(param_1 + 8);
    lStack_118 = *(long *)(param_1 + 0x88);
    uVar15 = *(ulong *)(param_1 + 0x78);
    *(ulong *)(*(long *)(*(long *)(lVar13 + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8) + 0x18) =
         ~uVar15 + lStack_118;
    uVar9 = lVar10 + *(long *)(param_1 + 0x28);
    lVar10 = *(long *)(*(long *)(lVar13 + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
    lStack_118 = lStack_118 - uVar15;
    uStack_70 = (int)lVar11;
    goto code_r0x000100118a70;
  case 3:
    uStack_70 = uStack_70 & 0xfffffe00 | 6;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    puVar6 = (undefined8 *)0x18;
    func_0x000107c60e20();
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = puVar6 + 1;
    uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
    lVar11 = plVar8[1];
    *(uint *)(plVar8 + 1) = uStack_70;
    lStack_78 = *plVar8;
    *plVar8 = (long)puVar6;
    lVar10 = *(long *)(param_1 + 0x20);
    uVar9 = (*(long *)(param_1 + 0x28) + lVar10) - 1;
    lVar13 = *(long *)(param_1 + 8);
    *(long *)(*(long *)(*(long *)(lVar13 + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8) + 0x18) =
         lStack_120 - *(long *)(param_1 + 0x78);
    pbVar1 = *(byte **)(param_1 + 0x88);
    while ((pbVar1 != *(byte **)(param_1 + 0x80) &&
           (*pbVar1 < 0x21 && (1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
      pbVar1 = pbVar1 + 1;
      *(byte **)(param_1 + 0x88) = pbVar1;
    }
    uStack_70 = (int)lVar11;
    if ((pbVar1 == *(byte **)(param_1 + 0x80)) || (*pbVar1 != 0x5d)) {
      iVar16 = 0;
      while( true ) {
        uVar9 = (*(long *)(param_1 + 0x28) + lVar10) - 1;
        uVar17 = *(undefined8 *)(*(long *)(lVar13 + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
        func_0x000107c2ad88(uVar17,iVar16);
        FUN_10011753c(param_1,uVar17);
        uVar9 = param_1;
        FUN_100118034();
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
        FUN_10011925c(param_1);
        if ((uVar9 & 1) == 0) break;
        uVar9 = param_1;
        FUN_10011789c(param_1,&uStack_e0);
        iVar16 = iVar16 + 1;
        while (((uVar9 & 1) != 0 && ((int)uStack_e0 == 0xf))) {
          uVar9 = param_1;
          FUN_10011789c(param_1,&uStack_e0);
        }
        if ((uVar9 & 1) == 0) {
code_r0x000100118b74:
          FUN_10002d4d8(aiStack_90,&UNK_10f5879f1);
          func_0x000107c2ad18(param_1,aiStack_90,&uStack_e0,0);
          func_0x000107c2ad24(param_1,4);
          goto code_r0x000100118bc4;
        }
        if ((int)uStack_e0 != 0xd) {
          if ((int)uStack_e0 != 4) goto code_r0x000100118b74;
          goto code_r0x000100118b6c;
        }
        lVar10 = *(long *)(param_1 + 0x20);
        lVar13 = *(long *)(param_1 + 8);
      }
      func_0x000107c2ad24(param_1,4);
code_r0x000100118bc4:
      uVar9 = 0;
    }
    else {
      FUN_10011789c(param_1,&uStack_e0);
code_r0x000100118b6c:
      uVar9 = 1;
    }
    func_0x0001001151c0(&lStack_78);
code_r0x000100118ca8:
    uVar15 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + (uVar15 >> 9) * 8) + (uVar15 & 0x1ff) * 8
                       ) + 0x20) = *(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x78);
    goto code_r0x000100118cd8;
  case 5:
    uStack_e0 = 0;
    uStack_d8 = 0;
    lStack_d0 = 0;
    FUN_100118f2c(param_1,auStack_128,&uStack_e0);
    if ((uVar9 & 1) != 0) {
      FUN_1001193c4(&lStack_78,&uStack_e0);
      uVar15 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
      plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar15 >> 9) * 8) +
                         (uVar15 & 0x1ff) * 8);
      uVar5 = *(uint *)(plVar8 + 1);
      *(uint *)(plVar8 + 1) = uStack_70;
      lVar10 = *plVar8;
      *plVar8 = lStack_78;
      lVar11 = *(long *)(param_1 + 0x20) + -1;
      uVar15 = lVar11 + *(long *)(param_1 + 0x28);
      lVar13 = *(long *)(param_1 + 8);
      lVar12 = *(long *)(param_1 + 0x78);
      *(long *)(*(long *)(*(long *)(lVar13 + (uVar15 >> 9) * 8) + (uVar15 & 0x1ff) * 8) + 0x18) =
           lStack_120 - lVar12;
      uVar15 = *(long *)(param_1 + 0x28) + lVar11;
      *(long *)(*(long *)(*(long *)(lVar13 + (uVar15 >> 9) * 8) + (uVar15 & 0x1ff) * 8) + 0x20) =
           lStack_118 - lVar12;
      lStack_78 = lVar10;
      uStack_70 = uVar5;
      func_0x0001001151c0();
    }
    if (lStack_d0 < 0) {
      func_0x000107c60e14(uStack_e0);
    }
    goto code_r0x000100118cd8;
  case 6:
    uStack_70 = (uint)uStack_70._2_2_ << 0x10;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    FUN_100119778(param_1,auStack_128,&lStack_78);
    if ((uVar9 & 1) != 0) {
      uVar15 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
      plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar15 >> 9) * 8) +
                         (uVar15 & 0x1ff) * 8);
      lVar10 = plVar8[1];
      *(uint *)(plVar8 + 1) = uStack_70;
      lVar11 = *plVar8;
      *plVar8 = lStack_78;
      lVar13 = *(long *)(param_1 + 0x20) + -1;
      uVar15 = lVar13 + *(long *)(param_1 + 0x28);
      lVar12 = *(long *)(param_1 + 8);
      lVar14 = *(long *)(param_1 + 0x78);
      *(long *)(*(long *)(*(long *)(lVar12 + (uVar15 >> 9) * 8) + (uVar15 & 0x1ff) * 8) + 0x18) =
           lStack_120 - lVar14;
      uVar15 = *(long *)(param_1 + 0x28) + lVar13;
      lStack_78 = lVar11;
      uStack_70 = (int)lVar10;
      goto code_r0x000100118960;
    }
    goto code_r0x000100118978;
  case 7:
    uStack_70 = CONCAT22(uStack_70._2_2_,5);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uVar9 = 1;
    lStack_78 = CONCAT71(lStack_78._1_7_,1);
    uVar15 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar15 >> 9) * 8) + (uVar15 & 0x1ff) * 8
                       );
    lVar10 = plVar8[1];
    *(uint *)(plVar8 + 1) = uStack_70;
    lVar11 = *plVar8;
    *plVar8 = lStack_78;
    lVar13 = *(long *)(param_1 + 0x20) + -1;
    uVar15 = lVar13 + *(long *)(param_1 + 0x28);
    lVar12 = *(long *)(param_1 + 8);
    lVar14 = *(long *)(param_1 + 0x78);
    *(long *)(*(long *)(*(long *)(lVar12 + (uVar15 >> 9) * 8) + (uVar15 & 0x1ff) * 8) + 0x18) =
         lStack_120 - lVar14;
    uVar15 = lVar13 + *(long *)(param_1 + 0x28);
    lStack_78 = lVar11;
    uStack_70 = (int)lVar10;
code_r0x000100118960:
    *(long *)(*(long *)(*(long *)(lVar12 + (uVar15 >> 9) * 8) + (uVar15 & 0x1ff) * 8) + 0x20) =
         lStack_118 - lVar14;
code_r0x000100118978:
    func_0x0001001151c0(&lStack_78);
    goto code_r0x000100118cd8;
  case 8:
    uStack_70 = CONCAT22(uStack_70._2_2_,5);
    lStack_78 = (ulong)lStack_78._1_7_ << 8;
    uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
    lVar10 = plVar8[1];
    *(uint *)(plVar8 + 1) = uStack_70;
    lVar11 = *plVar8;
    uStack_70 = (int)lVar10;
    break;
  case 9:
    uStack_70 = (uint)uStack_70._2_2_ << 0x10;
    uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
    lVar10 = plVar8[1];
    *(uint *)(plVar8 + 1) = uStack_70;
    lStack_78 = *plVar8;
    uStack_70 = (int)lVar10;
    goto code_r0x000100118a24;
  case 10:
    uStack_70 = CONCAT22(uStack_70._2_2_,3);
    uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
    lVar10 = plVar8[1];
    *(uint *)(plVar8 + 1) = uStack_70;
    lVar11 = *plVar8;
    lStack_78 = 0x7ff8000000000000;
    uStack_70 = (int)lVar10;
    break;
  case 0xb:
    uStack_70 = CONCAT22(uStack_70._2_2_,3);
    uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
    lVar10 = plVar8[1];
    *(uint *)(plVar8 + 1) = uStack_70;
    lVar11 = *plVar8;
    lStack_78 = 0x7ff0000000000000;
    uStack_70 = (int)lVar10;
    break;
  case 0xc:
    uStack_70 = CONCAT22(uStack_70._2_2_,3);
    uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
    lVar10 = plVar8[1];
    *(uint *)(plVar8 + 1) = uStack_70;
    lVar11 = *plVar8;
    lStack_78 = -0x10000000000000;
    uStack_70 = (int)lVar10;
    break;
  default:
LAB_1001181ec:
    lVar10 = *(long *)(param_1 + 0x20) + -1;
    uVar9 = lVar10 + *(long *)(param_1 + 0x28);
    lVar11 = *(long *)(param_1 + 8);
    lVar13 = *(long *)(param_1 + 0x78);
    *(long *)(*(long *)(*(long *)(lVar11 + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8) + 0x18) =
         lStack_120 - lVar13;
    uVar9 = lVar10 + *(long *)(param_1 + 0x28);
    *(long *)(*(long *)(*(long *)(lVar11 + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8) + 0x20) =
         lStack_118 - lVar13;
    FUN_10002d4d8(&lStack_78,&UNK_10f587945);
    func_0x000107c2ad18(param_1,&lStack_78,auStack_128,0);
    return 0;
  }
  *plVar8 = lStack_78;
  lStack_78 = lVar11;
code_r0x000100118a24:
  lVar10 = *(long *)(param_1 + 0x20) + -1;
  uVar9 = lVar10 + *(long *)(param_1 + 0x28);
  lVar11 = *(long *)(param_1 + 8);
  lVar13 = *(long *)(param_1 + 0x78);
  *(long *)(*(long *)(*(long *)(lVar11 + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8) + 0x18) =
       lStack_120 - lVar13;
  uVar9 = lVar10 + *(long *)(param_1 + 0x28);
  lVar10 = *(long *)(*(long *)(lVar11 + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
  lStack_118 = lStack_118 - lVar13;
code_r0x000100118a70:
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  *(long *)(lVar10 + 0x20) = lStack_118;
  func_0x0001001151c0(&lStack_78);
  uVar9 = 1;
code_r0x000100118cd8:
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0xa0) = 0;
    uVar15 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    *(undefined8 *)(param_1 + 0x98) =
         *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 8) + (uVar15 >> 9) * 8) + (uVar15 & 0x1ff) * 8);
  }
  return uVar9;
}



/* Entry: 100118f2c; end: 10011925b;  */

undefined8 FUN_100118f2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  uint uStack_74;
  char *pcStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  ulong uStack_60;
  byte bStack_51;
  
  func_0x000107c60c84(param_3,(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)) + -2);
  pcStack_70 = (char *)(*(long *)(param_2 + 8) + 1);
  pcVar9 = (char *)(*(long *)(param_2 + 0x10) + -1);
  if (pcStack_70 != pcVar9) {
    do {
      pcVar10 = pcStack_70 + 1;
      cVar4 = *pcStack_70;
      if (cVar4 != '\\') {
        if (cVar4 == '\"') {
          return 1;
        }
        iVar8 = (int)cVar4;
        pcStack_70 = pcVar10;
        goto LAB_100118fa4;
      }
      if (pcVar10 == pcVar9) {
        pcStack_70 = pcVar10;
        FUN_10002d4d8(&uStack_68,&UNK_10f587a2c);
        func_0x000107c2ad18(param_1,&uStack_68,param_2,pcVar10);
        goto LAB_100119188;
      }
      pcVar10 = pcStack_70 + 2;
      bVar5 = pcStack_70[1];
      pcStack_70 = pcVar10;
      if (bVar5 < 0x66) {
        if (bVar5 < 0x5c) {
          if (bVar5 == 0x22) {
            iVar8 = 0x22;
          }
          else {
            if (bVar5 != 0x2f) {
LAB_1001191b8:
              FUN_10002d4d8(&uStack_68,&UNK_10f587a4c);
              func_0x000107c2ad18(param_1,&uStack_68,param_2,pcVar10);
LAB_100119188:
              if ((char)bStack_51 < '\0') {
                func_0x000107c60e14(CONCAT44(uStack_64,uStack_68));
              }
              return 0;
            }
            iVar8 = 0x2f;
          }
        }
        else if (bVar5 == 0x5c) {
          iVar8 = 0x5c;
        }
        else {
          if (bVar5 != 0x62) goto LAB_1001191b8;
          iVar8 = 8;
        }
LAB_100118fa4:
        pcVar10 = pcStack_70;
        func_0x000107c60c8c(param_3,iVar8);
        pcStack_70 = pcVar10;
      }
      else {
        if (bVar5 < 0x72) {
          if (bVar5 == 0x66) {
            iVar8 = 0xc;
          }
          else {
            if (bVar5 != 0x6e) goto LAB_1001191b8;
            iVar8 = 10;
          }
          goto LAB_100118fa4;
        }
        if (bVar5 == 0x72) {
          iVar8 = 0xd;
          goto LAB_100118fa4;
        }
        if (bVar5 == 0x74) {
          iVar8 = 9;
          goto LAB_100118fa4;
        }
        if (bVar5 != 0x75) goto LAB_1001191b8;
        uVar7 = param_1;
        func_0x000107c2ad2c(param_1,param_2,&pcStack_70,pcVar9,&uStack_74);
        pcVar10 = pcStack_70;
        uVar2 = uStack_74;
        if ((int)uVar7 == 0) {
          return 0;
        }
        if (uStack_74 >> 10 == 0x36) {
          if ((long)pcVar9 - (long)pcStack_70 < 6) {
            FUN_10002d4d8(&uStack_68,&UNK_10f587a6a);
            func_0x000107c2ad18(param_1,&uStack_68,param_2,pcVar10);
            goto LAB_100119188;
          }
          pcVar10 = pcStack_70 + 1;
          if ((*pcStack_70 != '\\') ||
             (pcVar10 = pcStack_70 + 2, pcVar1 = pcStack_70 + 1, pcStack_70 = pcVar10,
             *pcVar1 != 'u')) {
            FUN_10002d4d8(&uStack_68,&UNK_10f587aae);
            func_0x000107c2ad18(param_1,&uStack_68,param_2,pcVar10);
            goto LAB_100119188;
          }
          uVar7 = param_1;
          func_0x000107c2ad2c(param_1,param_2,&pcStack_70,pcVar9,&uStack_68);
          if ((int)uVar7 == 0) {
            return 0;
          }
          uVar2 = (uStack_68 & 0x3ff | (uVar2 & 0x3ff) << 10) + 0x10000;
        }
        func_0x000107c2ad14(&uStack_68,uVar2);
        uVar3 = uStack_60;
        puVar6 = (uint *)CONCAT44(uStack_64,uStack_68);
        if (-1 < (char)bStack_51) {
          uVar3 = (ulong)bStack_51;
          puVar6 = &uStack_68;
        }
        func_0x000107c60c5c(param_3,puVar6,uVar3);
        if ((char)bStack_51 < '\0') {
          func_0x000107c60e14(CONCAT44(uStack_64,uStack_68));
        }
      }
    } while (pcStack_70 != pcVar9);
  }
  return 1;
}



/* Entry: 10011925c; end: 1001192b7;  */

void FUN_10011925c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar1 = (lVar2 - *(long *)(param_1 + 8)) * 0x40 + -1;
  }
  if (0x3ff < (ulong)(lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)))) {
    func_0x000107c60e14(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  return;
}



/* Entry: 1001192b8; end: 1001193c3;  */

uint * FUN_1001192b8(undefined8 param_1,uint param_2)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [263];
  undefined1 uStack_31;
  
  if (param_2 < 0x7ffffffb) {
    puVar2 = (uint *)(ulong)(param_2 + 5);
    func_0x000107c610a0();
    if (puVar2 != (uint *)0x0) {
      *puVar2 = param_2;
      func_0x000107c610b4(puVar2 + 1,param_1,param_2);
      *(undefined1 *)((long)puVar2 + (ulong)param_2 + 4) = 0;
      return puVar2;
    }
    FUN_10002d4d8(auStack_140,&UNK_10f58819d);
    func_0x000107c2ad54(auStack_140);
  }
  else {
    func_0x000107c2ac5c(auStack_140);
    func_0x000107c2ac6c(auStack_140,&UNK_10f58814f,0x4d);
    func_0x000107c2ac60(auStack_158,auStack_138,&uStack_31);
    func_0x000107c2ad58(auStack_158);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10011937c);
  (*pcVar1)();
}



/* Entry: 1001193c4; end: 100119443;  */

long * FUN_1001193c4(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  
  param_1[2] = 0;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00 | 0x104;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = (int)param_2[1];
  plVar2 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    iVar1 = (int)*(char *)((long)param_2 + 0x17);
    plVar2 = param_2;
  }
  FUN_1001192b8(plVar2,iVar1);
  *param_1 = (long)plVar2;
  return param_1;
}



/* Entry: 100119444; end: 10011944f; -[SCBatteryCPUMonitor initWithApplicationLifecycleEvents:] */

void FUN_100119444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c015310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFrequency_applicationLif_1125e2ea0,4,param_3);
  return;
}



/* Entry: 100119450; end: 10011966b; -[SCBatteryCPUMonitor initWithFrequency:applicationLifecycleEvents:] */

undefined8 *
FUN_100119450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_4);
  puStack_68 = PTR_PTR_1126e7530;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_78,puVar1);
    uVar4 = param_4;
    func_0x000107c41b80(param_4);
    func_0x000107c61180();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    puStack_90 = &UNK_1052d8514;
    puStack_88 = &UNK_110846510;
    func_0x000107c6111c(auStack_80,auStack_78);
    uVar3 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    uVar4 = param_4;
    func_0x000107c5e370(param_4);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_a8,auStack_78);
    uVar3 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    puVar1[3] = param_3;
    func_0x000107c61120(auStack_a8);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_4);
  return puVar1;
}



/* Entry: 10011966c; end: 100119777;  */

undefined8 FUN_10011966c(long param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 0x80);
  pbVar2 = *(byte **)(param_1 + 0x88);
  pbVar1 = pbVar4;
  if (((param_2 != 0) && (pbVar1 = pbVar2, pbVar2 != pbVar4)) && (pbVar1 = pbVar4, *pbVar2 == 0x49))
  {
    *(byte **)(param_1 + 0x88) = pbVar2 + 1;
    return 0;
  }
  do {
    pbVar4 = pbVar2;
    *(byte **)(param_1 + 0x88) = pbVar4;
    if (pbVar1 <= pbVar4) {
      return 1;
    }
    pbVar2 = pbVar4 + 1;
    bVar3 = *pbVar4;
  } while (bVar3 - 0x30 < 10);
  if (bVar3 == 0x2e) {
    *(byte **)(param_1 + 0x88) = pbVar2;
    if (pbVar1 <= pbVar2) {
      return 1;
    }
    bVar3 = *pbVar2;
    pbVar2 = pbVar4 + 2;
    while (bVar3 - 0x30 < 10) {
      *(byte **)(param_1 + 0x88) = pbVar2;
      if (pbVar1 <= pbVar2) {
        return 1;
      }
      bVar3 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    }
  }
  if (((bVar3 & 0xdf) == 0x45) && (*(byte **)(param_1 + 0x88) = pbVar2, pbVar2 < pbVar1)) {
    pbVar4 = pbVar2 + 1;
    bVar3 = *pbVar2;
    if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
      *(byte **)(param_1 + 0x88) = pbVar4;
      if (pbVar1 <= pbVar4) {
        return 1;
      }
      pbVar4 = pbVar2 + 2;
      bVar3 = pbVar2[1];
    }
    for (; (bVar3 - 0x30 < 10 && (*(byte **)(param_1 + 0x88) = pbVar4, pbVar4 < pbVar1));
        pbVar4 = pbVar4 + 1) {
      bVar3 = *pbVar4;
    }
  }
  return 1;
}



/* Entry: 100119778; end: 100119883;  */

/* WARNING: Removing unreachable block (ram,0x0001098f142c) */

bool FUN_100119778(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined **appuStack_170 [2];
  undefined **ppuStack_160;
  undefined1 auStack_158 [56];
  undefined8 uStack_120;
  char cStack_109;
  undefined **appuStack_f8 [19];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  byte *pbVar9;
  
  pbVar9 = *(byte **)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  uVar6 = 8;
  if (*pbVar9 != 0x2d) {
    uVar6 = 5;
  }
  uVar7 = 0x1999999999999999;
  if (*pbVar9 == 0x2d) {
    pbVar9 = pbVar9 + 1;
    uVar7 = 0xccccccccccccccc;
  }
  if (pbVar9 < pbVar1) {
    uVar5 = 0;
    do {
      pbVar8 = pbVar9 + 1;
      if (((*pbVar9 - 0x3a & 0xff) < 0xf6) ||
         ((uVar2 = *pbVar9 - 0x30, uVar7 <= uVar5 &&
          (((uVar7 < uVar5 || (pbVar8 != pbVar1)) || (uVar6 < uVar2)))))) {
        uStack_48 = 0;
        func_0x0001092b29f8(auStack_60,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                            *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8));
        func_0x0001093f2800(appuStack_170,auStack_60,8);
        pppuVar3 = appuStack_170;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(pppuVar3,&uStack_48);
        uVar6 = *(uint *)((long)pppuVar3 + (long)((*pppuVar3)[-3] + 0x20)) & 5;
        if (uVar6 == 0) {
          uStack_1c8 = CONCAT62(uStack_1c8._2_6_,3);
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          lStack_1c0 = 0;
          uStack_1d0 = uStack_48;
          func_0x000107c2ad6c(&uStack_1d0,param_3);
          func_0x000107c2ad70(&uStack_1d0);
        }
        else {
          func_0x0001092b29f8(auStack_1a8,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                              *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8));
          puVar4 = auStack_1a8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar4,0,&DAT_10f638984,1);
          uStack_188 = puVar4[1];
          uStack_190 = *puVar4;
          lStack_180 = puVar4[2];
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          puVar4 = &uStack_190;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar4,&UNK_10f587a19,0x12);
          uStack_1c8 = puVar4[1];
          uStack_1d0 = *puVar4;
          lStack_1c0 = puVar4[2];
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          func_0x0001098f0f4c(param_1,&uStack_1d0,param_2,0);
          if (lStack_1c0 < 0) {
            __ZdlPv(uStack_1d0);
          }
          if (lStack_180 < 0) {
            __ZdlPv(uStack_190);
          }
          if (cStack_191 < '\0') {
            __ZdlPv(auStack_1a8[0]);
          }
        }
        appuStack_f8[0] = &PTR_DAT_1108df740;
        appuStack_170[0] = &PTR_SUB_1108df718;
        ppuStack_160 = &PTR_DAT_11088d7b0;
        if (cStack_109 < '\0') {
          __ZdlPv(uStack_120);
        }
        ppuStack_160 = (undefined **)
                       (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
        __ZNSt3__16localeD1Ev(auStack_158);
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_170,&PTR_PTR_1108df758);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f8);
        return uVar6 == 0;
      }
      uVar5 = uVar5 * 10 + (ulong)uVar2;
      pbVar9 = pbVar8;
    } while (pbVar8 < pbVar1);
  }
  FUN_1001150b4(&stack0xffffffffffffffc8,param_3);
  func_0x0001001151c0(&stack0xffffffffffffffc8);
  return true;
}



/* Entry: 100119884; end: 10011991f; -[SCAEventBase setClientTs:] */

/* WARNING: Possible PIC construction at 0x0001001198fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100119900) */
/* WARNING: Removing unreachable block (ram,0x000100119904) */
/* WARNING: Removing unreachable block (ram,0x00010011990c) */

void FUN_100119884(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    func_0x000107c5c9e4(param_3);
    func_0x000107c4d954(puVar1);
    func_0x000107c61180();
  }
  func_0x000107c4f904(param_1);
  func_0x000107c61180();
  func_0x000107c56bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100119920; end: 100119957;  */

long FUN_100119920(long param_1)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfe00;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1001150b4();
  return param_1;
}



/* Entry: 100119958; end: 100119973;  */

void FUN_100119958(long param_1)

{
  FUN_100119920();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 100119974; end: 100119983;  */

void FUN_100119974(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100119980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 8))();
  return;
}



/* Entry: 100119984; end: 100119a17; -[SCNoDepBlizzardImpl _logUserAddedEvent:] */

/* WARNING: Possible PIC construction at 0x0001001199d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001199dc) */

void FUN_100119984(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    if ((*(long *)(param_1 + 0x20) == 0) || (lVar1 = *(long *)(param_1 + 0x28), lVar1 == 0)) {
      func_0x000107c3ace4(param_1,param_2,*(undefined8 *)(param_1 + 0x40),param_3,
                          &PTR____CFConstantStringClassReference_110e6d5b8);
    }
    else {
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c5a32c(param_3,param_2,lVar1);
      param_3 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100119a18; end: 100119b27; -[SCNoDepBlizzardImpl _addEventToQueue:eventToAdd:queueName:] */

/* WARNING: Possible PIC construction at 0x000100119b08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100119b0c) */

void FUN_100119a18(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126b72d8;
  func_0x000107c61158(PTR_PTR_1126b72d8);
  uVar2 = param_4;
  func_0x000107c6115c(param_4,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126d0340;
    func_0x000107c61158(PTR_PTR_1126d0340);
    func_0x000107c6115c(param_4,puVar1);
    if ((param_4 & 1) == 0) {
      func_0x000106ac8cd4(*(undefined8 *)(param_1 + 0x18),param_5,1);
      goto LAB_100119b04;
    }
  }
  uVar2 = param_3;
  func_0x000107c40808();
  if (*(ulong *)(param_1 + 8) < uVar2) {
    func_0x000106ac469c(*(undefined8 *)(param_1 + 0x18),param_5,1);
  }
  else {
    uVar2 = param_3;
    func_0x000107c40808();
    if (uVar2 == *(ulong *)(param_1 + 8)) {
      func_0x000106ac4ca4(*(undefined8 *)(param_1 + 0x18),param_5,1);
    }
    func_0x000107c3d798(param_3);
    FUN_100119b28(*(undefined8 *)(param_1 + 0x18),param_5,1);
  }
LAB_100119b04:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100119b28; end: 100119c9b;  */

void FUN_100119b28(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11095bb60,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(puVar1);
  func_0x000107c61144(auStack_c8,puVar1);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  puStack_e0 = &UNK_1052debec;
  puStack_d8 = &UNK_1108681f8;
  func_0x000107c6111c(auStack_d0,auStack_c8);
  puVar2 = puVar1;
  func_0x000107c3e704(puVar1);
  func_0x000107c61180();
  func_0x000107c5a288();
  func_0x000107c61170(puVar2);
  func_0x000107c3e704(puVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_f8,auStack_c8);
  func_0x000107c5a890(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_f8);
  func_0x000107c61120(auStack_d0);
  func_0x000107c61120(auStack_c8);
  return;
}



/* Entry: 100119c9c; end: 100119dd7; -[SCBatteryLogger _setUpCpuUsageListener] */

void FUN_100119c9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  puStack_60 = &UNK_1052debec;
  puStack_58 = &UNK_1108681f8;
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar1 = param_1;
  func_0x000107c3e704(param_1);
  func_0x000107c61180();
  func_0x000107c5a288();
  func_0x000107c61170(uVar1);
  func_0x000107c3e704(param_1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_78,auStack_48);
  func_0x000107c5a890(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100119dd8; end: 100119e77; -[SCConfigMetricGraphene2 experimentExposureLog:experimentSource:] */

/* WARNING: Possible PIC construction at 0x000100119e44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100119e48) */

void FUN_100119dd8(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  ppuVar1 = param_3;
  func_0x000107c49d0c();
  if ((int)ppuVar1 == 0) {
    param_3 = &PTR____CFConstantStringClassReference_110dd2318;
  }
  FUN_100119e78(uVar2,param_4,&PTR____CFConstantStringClassReference_110dd2338,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100119e78; end: 10011a15b;  */

/* WARNING: Removing unreachable block (ram,0x00010011a11c) */

char * FUN_100119e78(long param_1,char *param_2,char *param_3,char *param_4,long param_5)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11087b3d8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_a0,pcVar2);
      func_0x000107c61174(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        func_0x000107c61178(param_3);
        pcVar2 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_88,pcVar2);
      func_0x000107c61174(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        func_0x000107c61178(param_4);
        pcVar2 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_70,pcVar2);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      FUN_10007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11087b3d8,&uStack_c0,param_5 * 10);
      puStack_a8 = (undefined1 *)&uStack_c0;
      FUN_10007e5dc(&puStack_a8);
      lVar3 = 0;
      do {
        if ((&cStack_59)[lVar3] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
        unaff_x24 = &uStack_c0;
      } while (lVar3 != -0x48);
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  pcVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c61170(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c60bd8();
    return *(char **)(pcVar2 + 200);
  }
  return pcVar2;
}



/* Entry: 10011a15c; end: 10011a163; -[SCBatteryLogger batteryCPUMonitor] */

undefined8 FUN_10011a15c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10011a164; end: 10011a16b; -[SCBatteryCPUMonitor setUsageListener:] */

void FUN_10011a164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10011a16c; end: 10011a1c7;  */

/* WARNING: Possible PIC construction at 0x00010011a194: Changing call to branch */

void FUN_10011a16c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b1c988;
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    param_1 = (undefined8 *)param_1[0x17];
  }
  else {
    if (*(char *)((long)param_1 + 0x87) < '\0') {
      func_0x000107c60e14(param_1[0xe]);
    }
    FUN_10011a1c8(param_1 + 8);
    FUN_10011a348(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10011a1c8; end: 10011a347;  */

long * FUN_10011a1c8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  puVar6 = puVar4;
  if (puVar1 != puVar4) {
    uVar3 = param_1[4];
    plVar5 = puVar4 + uVar3 / 0x49;
    lVar2 = *plVar5;
    lVar8 = lVar2 + (uVar3 % 0x49) * 0x38;
    lVar7 = puVar4[(param_1[5] + uVar3) / 0x49] + ((param_1[5] + uVar3) % 0x49) * 0x38;
    puVar6 = puVar1;
    if (lVar8 != lVar7) {
      do {
        if (*(char *)(lVar8 + 0x2f) < '\0') {
          func_0x000107c60e14(*(undefined8 *)(lVar8 + 0x18));
          lVar2 = *plVar5;
        }
        lVar8 = lVar8 + 0x38;
        if (lVar8 - lVar2 == 0xff8) {
          plVar5 = plVar5 + 1;
          lVar2 = *plVar5;
          lVar8 = lVar2;
        }
      } while (lVar8 != lVar7);
      puVar4 = (undefined8 *)param_1[1];
      puVar1 = (undefined8 *)param_1[2];
      puVar6 = puVar1;
    }
  }
  param_1[5] = 0;
  lVar8 = (long)puVar6 - (long)puVar4;
  while (uVar3 = lVar8 >> 3, 2 < uVar3) {
    func_0x000107c60e14(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    puVar6 = puVar1;
    lVar8 = (long)puVar1 - (long)puVar4;
  }
  if (uVar3 == 1) {
    lVar8 = 0x24;
  }
  else {
    if (uVar3 != 2) goto LAB_10011a2ec;
    lVar8 = 0x49;
  }
  param_1[4] = lVar8;
LAB_10011a2ec:
  if (puVar4 != puVar6) {
    do {
      puVar1 = puVar4 + 1;
      func_0x000107c60e14(*puVar4);
      puVar4 = puVar1;
    } while (puVar1 != puVar6);
    puVar6 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
  }
  if (puVar1 != puVar6) {
    param_1[2] = (long)puVar1 + ((long)puVar6 + (7 - (long)puVar1) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10011a348; end: 10011a3df;  */

long * FUN_10011a348(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    func_0x000107c60e14(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_10011a3c4;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_10011a3c4:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    func_0x000107c60e14(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10011a3e0; end: 10011a4bf;  */

long * FUN_10011a3e0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10011a4c0; end: 10011a4f7;  */

void FUN_10011a4c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  cVar2 = *(char *)(param_1 + 5);
  if (cVar2 != *(char *)(param_2 + 5)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 5) == '\x01') {
        func_0x000107c2ad70();
        *(undefined1 *)(param_1 + 5) = 0;
      }
      return;
    }
    FUN_100119920();
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
  if (cVar2 != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(param_1 + 1) = uVar1;
    uVar5 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar5;
    plVar3 = param_2 + 2;
    lVar8 = *plVar3;
    *plVar3 = 0;
    plVar7 = param_1 + 2;
    lVar6 = *plVar7;
    *plVar7 = 0;
    lVar4 = *plVar3;
    *plVar3 = lVar6;
    if (lVar4 != 0) {
      func_0x000107c2ada4();
    }
    lVar4 = *plVar7;
    *plVar7 = lVar8;
    if (lVar4 != 0) {
      func_0x000107c2ada4(plVar7);
    }
    uVar5 = param_2[3];
    param_2[3] = param_1[3];
    param_1[3] = uVar5;
    uVar5 = param_2[4];
    param_2[4] = param_1[4];
    param_1[4] = uVar5;
    return;
  }
  return;
}



/* Entry: 10011a4f8; end: 10011a51f;  */

undefined8 FUN_10011a4f8(undefined8 param_1)

{
  FUN_10011a4c0();
  return param_1;
}



/* Entry: 10011a520; end: 10011a55b;  */

void FUN_10011a520(long param_1)

{
  FUN_100119920();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10011a55c; end: 10011a58f;  */

long * FUN_10011a55c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uStack_178;
  uint uStack_170;
  undefined8 *puStack_160;
  uint auStack_158 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_51;
  
  uVar6 = param_2;
  func_0x000107c613d0();
  if ((char)param_1[1] == '\0') {
    auStack_158[0] = CONCAT22(auStack_158[0]._2_2_,7);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    puVar3 = (undefined8 *)0x18;
    func_0x000107c60e20();
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = puVar3 + 1;
    puStack_160 = puVar3;
    FUN_1001150b4(&puStack_160,param_1);
    func_0x0001001151c0(&puStack_160);
  }
  else if ((char)param_1[1] != '\a') {
    func_0x000107c2ac5c(&puStack_160);
    func_0x000107c2ac6c(&puStack_160,&UNK_10f588006,0x40);
    func_0x000107c2ac60(&uStack_178,auStack_158,&uStack_51);
    func_0x000107c2ad58(&uStack_178);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100114b60);
    (*pcVar2)();
  }
  uVar1 = (int)uVar6 * 4 | 2;
  lVar7 = *param_1;
  plVar8 = (long *)(lVar7 + 8);
  plVar9 = (long *)*plVar8;
  uStack_178 = param_2;
  uStack_170 = uVar1;
  if (plVar9 != (long *)0x0) {
    do {
      plVar4 = plVar9 + 4;
      FUN_1001158d4(plVar4,&uStack_178);
      lVar7 = 8;
      if ((int)plVar4 == 0) {
        lVar7 = 0;
        plVar8 = plVar9;
      }
      plVar9 = *(long **)((long)plVar9 + lVar7);
    } while (plVar9 != (long *)0x0);
    lVar7 = *param_1;
  }
  if (plVar8 != (long *)(lVar7 + 8)) {
    uVar5 = plVar8[4];
    FUN_100115988(uVar5,(int)plVar8[5],param_2,uVar1);
    plVar9 = plVar8;
    if ((uVar5 & 1) != 0) goto LAB_100114c60;
  }
  FUN_1001151fc();
  FUN_10011538c(&puStack_160,&uStack_178);
  plVar9 = (long *)*param_1;
  FUN_100115690(plVar9,plVar8,&puStack_160,&puStack_160);
  func_0x0001001151c0(&uStack_150);
  if ((puStack_160 != (undefined8 *)0x0) && ((auStack_158[0] & 3) == 1)) {
    func_0x000107c60fd0();
  }
LAB_100114c60:
  return plVar9 + 6;
}



/* Entry: 10011a590; end: 10011a5cb;  */

bool FUN_10011a590(long param_1)

{
  if (*(char *)(param_1 + 8) == '\a') {
    FUN_10011a55c(param_1,&UNK_10f742ec9);
    return *(char *)(param_1 + 8) == '\a';
  }
  return false;
}



/* Entry: 10011a5cc; end: 10011a5f3;  */

void FUN_10011a5cc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10011a5f4; end: 10011a5fb;  */

void FUN_10011a5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc_1103462b0)
            (param_1 + 0xa8);
  return;
}



/* Entry: 10011a5fc; end: 10011a6d7; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl _resolutionConstraintForDeviceConfig:] */

void FUN_10011a5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c50598();
  if ((((int)uVar1 == 0) || (uVar1 = param_3, func_0x000107c505a4(), (int)uVar1 == 0)) ||
     (uVar1 = param_3, func_0x000107c5059c(), (int)uVar1 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b70f8;
    func_0x000107c610f4(PTR_PTR_1126b70f8);
    uVar1 = param_3;
    func_0x000107c50598(param_3);
    uVar2 = param_3;
    func_0x000107c5059c(param_3);
    uVar3 = param_3;
    func_0x000107c505a4(param_3);
    uVar4 = param_3;
    func_0x000107c50598(param_3);
    func_0x000107c3b7fc((double)(int)uVar3,(double)(int)uVar4,param_1);
    func_0x000107c47808(puVar5,param_2,(long)(int)uVar1,(long)(int)uVar2,param_1);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10011a6d8; end: 10011a6e7;  */

void FUN_10011a6d8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10011a6e8; end: 10011a767;  */

undefined1  [16] FUN_10011a6e8(long *param_1)

{
  undefined1 in_ZR;
  int extraout_w10;
  
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    FUN_10011a768(0x11383a720);
    if (!(bool)in_ZR) {
      func_0x00010011a774();
      func_0x00010011a788(0x11383a720);
    }
    func_0x00010011b648();
  }
  return auRam000000011383a710;
}



/* Entry: 10011a768; end: 10011a79b;  */

void FUN_10011a768(void)

{
  return;
}



/* Entry: 10011a79c; end: 10011a7ff;  */

void FUN_10011a79c(void)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  
  func_0x00010011a790();
  FUN_10011a800();
  func_0x00010011a808();
  FUN_10011a89c();
  func_0x00010011a8a4();
  plVar2 = (long *)*unaff_x19;
  uVar1 = 0x98;
  (**(code **)(*plVar2 + 0x40))();
  uRam000000011383a718 = uVar1;
  plRam000000011383a710 = plVar2;
  func_0x00010011b634();
  return;
}



/* Entry: 10011a800; end: 10011a82b;  */

void FUN_10011a800(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000020);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10011a82c; end: 10011a89b;  */

void FUN_10011a82c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar1 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_6[2];
  uVar6 = param_6[1];
  uVar5 = *param_6;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  param_1[2] = uVar1;
  param_1[3] = param_3;
  param_1[4] = param_4;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[8] = uVar2;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_100100fec(&uStack_48);
  func_0x000107c60ca0(&uStack_30);
  return;
}



/* Entry: 10011a89c; end: 10011a8b7;  */

undefined1 * FUN_10011a89c(void)

{
  undefined1 *puStack_28;
  
  puStack_28 = &stack0x00000008;
  func_0x000100100fd4(&puStack_28);
  return &stack0x00000008;
}



/* Entry: 10011a8b8; end: 10011a943;  */

undefined1  [16] FUN_10011a8b8(undefined8 param_1,ulong param_2)

{
  undefined8 unaff_x21;
  undefined1 auVar1 [16];
  
  func_0x00010011a8ac();
  FUN_10011a944();
  FUN_1001010e4();
  func_0x000107c61180();
  func_0x000107c440c0();
  func_0x000107c61180();
  FUN_10011b4b4();
  FUN_10011b600(unaff_x21);
  FUN_10011485c();
  func_0x00010011b62c();
  auVar1._8_8_ = param_2 & 0xff;
  auVar1._0_8_ = unaff_x21;
  return auVar1;
}



/* Entry: 10011a944; end: 10011a95f;  */

void FUN_10011a944(void)

{
  return;
}



/* Entry: 10011a960; end: 10011a9eb; -[SCCircumstanceEngineConfigurationMashaller getIntegerValue:] */

void FUN_10011a960(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5c64c();
  if (lVar1 == 0xc) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    FUN_100101430(param_3);
    func_0x000107c61180();
    func_0x000107c49814(uVar2,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  else {
    uVar2 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10011a9ec; end: 10011ab3f; -[SCCircumstanceEngineConfiguration intValueForKey:] */

void FUN_10011a9ec(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4a8c4(param_3);
  func_0x000107c61180();
  func_0x000107c4baac(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar2 = param_3;
  func_0x000107c5c64c();
  puVar3 = PTR_PTR_1126dec58;
  if (uVar2 == 0xc) {
    func_0x000107c61174(param_3);
    func_0x000107c61158(puVar3);
    uVar4 = param_3;
    func_0x000107c6115c(param_3,puVar3);
    uVar2 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c3b834(param_1);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4a8c4(uVar2);
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c42e88(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    lVar6 = param_1;
    func_0x000107c49810(param_1);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
  }
  else {
    lVar6 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10011ab40; end: 10011ab9f; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl _getCameraDeviceSettingsAspectRatioFromSize:] */

undefined8 FUN_10011ab40(double param_1,double param_2)

{
  if (ABS((float)param_1 / (float)param_2 + -1.7777778) < 0.01) {
    return 1;
  }
  if (ABS((float)param_1 / (float)param_2 + -1.3333334) < 0.01) {
    return 2;
  }
  return 0;
}



/* Entry: 10011aba0; end: 10011ac23; -[SCLazyCircumstanceEngineProxy intValueForConfigKeySync:featureProvidedSignals:] */

void FUN_10011aba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3b5e8(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c49810();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10011ac24; end: 10011ac9f; -[SCCircumstanceEngine intValueForConfigKeySync:featureProvidedSignals:] */

void FUN_10011ac24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3ade8(param_1,param_2,param_3,1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000107c49810(uVar1,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10011aca0; end: 10011ad2b; -[SCCircumstanceEngineConfigProvider intValueForConfigKeySync:featureProvidedSignals:] */

void FUN_10011aca0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x000107c3c078();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49804(lVar1);
    func_0x000107c4d95c(puVar3,param_2,lVar2);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10011ad2c; end: 10011ad5b; -[SCBatteryCPUMonitor setupCpuTimeListener:] */

void FUN_10011ad2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61184();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10011ad5c; end: 10011adb3; -[SCBatteryCPUMonitor startMonitoring] */

void FUN_10011ad5c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10011adb4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 10011adb4; end: 10011ae03;  */

void FUN_10011adb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x10) != 0) {
    return;
  }
  func_0x000107c3b3d0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(long *)(*(long *)(param_1 + 0x20) + 0x10) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10011ae04; end: 10011aef3; -[SCBatteryCPUMonitor _createcpuMonitorTimer] */

void FUN_10011ae04(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4f7c0(uVar1);
  func_0x000107c61180();
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  func_0x000107c60f84(PTR___dispatch_source_type_timer_11034be38,0,0,uVar1);
  func_0x000107c61170(uVar1);
  if (puVar2 != (undefined *)0x0) {
    lVar3 = *(long *)(param_1 + 0x18) * 1000000000;
    uVar1 = 0;
    func_0x000107c60f94(0,lVar3);
    func_0x000107c60f8c(puVar2,uVar1,lVar3,0);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    puStack_48 = &UNK_1052d8724;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x000107c60f88(puVar2,&puStack_58);
    func_0x000107c60f68(puVar2);
    func_0x000107c61174(puVar2);
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10011aef4; end: 10011afab; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl _photoQualityConstraintForDeviceConfig:] */

void FUN_10011aef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c44f30();
  if (((int)uVar1 == 0) || (uVar1 = param_3, func_0x000107c44f34(), (int)uVar1 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b7100;
    func_0x000107c610f4(PTR_PTR_1126b7100);
    uVar1 = param_3;
    func_0x000107c44f30(param_3);
    uVar2 = param_3;
    func_0x000107c44f34(param_3);
    uVar3 = param_3;
    func_0x000107c504a4(param_3);
    uVar4 = param_3;
    func_0x000107c504a8(param_3);
    func_0x000107c4780c(puVar5,param_2,(long)(int)uVar1,(long)(int)uVar2,uVar3,uVar4);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10011afac; end: 10011b047; -[SCBatteryPageViewLogger initWithBlizzardLogger:applicationLifecycleEvents:] */

undefined8
FUN_10011afac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c470d0();
  func_0x000107c3ba20(param_1,param_2,puVar1,param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 10011b048; end: 10011b127; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl _videoCaptureSupportConstraintForDeviceConfig:] */

void FUN_10011b048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b7110;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  uVar2 = param_3;
  func_0x000107c504a0(param_3);
  uVar3 = param_3;
  func_0x000107c504b0(param_3);
  uVar4 = param_3;
  func_0x000107c50494(param_3);
  uVar5 = param_3;
  func_0x000107c504cc(param_3);
  uVar6 = param_3;
  func_0x000107c504c4(param_3);
  uVar7 = param_3;
  func_0x000107c504c8(param_3);
  uVar8 = param_3;
  func_0x000107c504c0();
  func_0x000107c61170(param_3);
  func_0x000107c486ac(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,(char)uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10011b128; end: 10011b423; -[SCBatteryPageViewLogger _initWithQueuePerformer:blizzardLogger:applicationLifecycleEvents:] */

undefined8 *
FUN_10011b128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_58 = PTR_PTR_1126e7598;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar5 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar5 = puVar1[6];
    puVar1[6] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126b6fa8;
    func_0x000107c610fc();
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f5a838);
    uVar5 = puVar1[0xf];
    puVar1[0xf] = &PTR____CFConstantStringClassReference_110f5a838;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_3);
    uVar5 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_4);
    uVar5 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar5 = puVar1[8];
    puVar1[8] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar5 = puVar1[9];
    puVar1[9] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar5 = puVar1[10];
    puVar1[10] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar5 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar5 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar5 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61144(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c419f0(param_5);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar3 = uVar5;
    func_0x000107c5c320(uVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    puVar4 = puVar1;
    func_0x000107c3ad8c();
    if ((int)puVar4 != 0) {
      *(undefined1 *)(puVar1 + 5) = 1;
    }
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10011b424; end: 10011b433;  */

uint FUN_10011b424(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto LAB_10011b484;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_10011b484:
      func_0x000107c4163c(lVar2);
      uVar1 = (uint)lVar2;
      goto LAB_10011b4ac;
    }
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  if ((int)uVar1 < 0) {
    uVar1 = (uint)(*(int *)(lVar4 + (ulong)-uVar1 * 4) == *(int *)(lVar3 + 0x10));
  }
  else {
    uVar1 = *(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1;
  }
LAB_10011b4ac:
  return uVar1 & 1;
}



/* Entry: 10011b434; end: 10011b4b3;  */

uint FUN_10011b434(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_10011b484;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_10011b484:
      func_0x000107c4163c(param_2);
      uVar1 = (uint)param_2;
      goto LAB_10011b4ac;
    }
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if ((int)uVar1 < 0) {
    uVar1 = (uint)(*(int *)(lVar3 + (ulong)-uVar1 * 4) == *(int *)(lVar2 + 0x10));
  }
  else {
    uVar1 = *(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1;
  }
LAB_10011b4ac:
  return uVar1 & 1;
}



/* Entry: 10011b4b4; end: 10011b4bb;  */

void FUN_10011b4b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10011b4bc; end: 10011b547; -[SCPerformanceResourceTracker init] */

undefined1 * FUN_10011b4bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e75a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10011b548; end: 10011b5c7; -[SCBatteryPageViewLogger _appLaunchedToBackground] */

bool FUN_10011b548(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3dfc0();
  if (puVar3 == (undefined *)0x2) {
    puVar3 = PTR_PTR_1126ae520;
    func_0x000107c5a9bc(PTR_PTR_1126ae520);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c4d668();
    bVar1 = puVar4 != (undefined *)0x0;
    func_0x000107c61170(puVar3);
  }
  else {
    bVar1 = false;
  }
  func_0x000107c61170(puVar2);
  return bVar1;
}



/* Entry: 10011b5c8; end: 10011b5ff;  */

undefined8 FUN_10011b5c8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000107c4c0a8(param_1);
  FUN_10011b624();
  return param_1;
}



/* Entry: 10011b600; end: 10011b623;  */

void FUN_10011b600(long param_1)

{
  if (param_1 != 0) {
    FUN_10011b5c8();
    return;
  }
  return;
}



/* Entry: 10011b624; end: 10011b64f;  */

void FUN_10011b624(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10011b650; end: 10011b697;  */

bool FUN_10011b650(long *param_1)

{
  long *plVar1;
  undefined1 auStack_a0 [4];
  ushort uStack_9c;
  
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  func_0x000107c613b8(plVar1,auStack_a0);
  return (uint)plVar1 < 0x80000000 && (uStack_9c & 0xf000) == 0x4000;
}



/* Entry: 10011b698; end: 10011b703; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl _mediaSubtypeConstraintForDeviceConfig:] */

void FUN_10011b698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4ca48();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b7108;
    func_0x000107c610f4(PTR_PTR_1126b7108);
    uVar1 = param_3;
    func_0x000107c4ca48(param_3);
    func_0x000107c476b4(puVar2,param_2,(long)(int)uVar1);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10011b704; end: 10011b787; -[SCBatteryGPSMonitor initWithBlizzardLogger:] */

undefined8 FUN_10011b704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c470d0();
  func_0x000107c3ba1c(param_1,param_2,puVar1,param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 10011b788; end: 10011b7cf; -[SCCameraDeviceSettingsBuilder build] */

void FUN_10011b788(void)

{
  func_0x000107c610f4(PTR_PTR_1126b7120);
  func_0x000107c469e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10011b7d0; end: 10011b83b; -[SCCameraDeviceSettingsBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010011b7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011b800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011b818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010011b804) */
/* WARNING: Removing unreachable block (ram,0x00010011b7ec) */
/* WARNING: Removing unreachable block (ram,0x00010011b81c) */

void FUN_10011b7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 10011b83c; end: 10011bad7; -[SCBatteryGPSMonitor _initWithQueuePerformer:blizzardLogger:] */

undefined1 *
FUN_10011b83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126e7568;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10011bad8; end: 10011bb5b; -[SCBatteryNetworkMonitor initWithNetworkMonitor:] */

undefined8 FUN_10011bad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c470d0();
  func_0x000107c3ba28(param_1,param_2,puVar1,param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 10011bb5c; end: 10011bd77; -[SCBatteryNetworkMonitor _initWithQueuePerformer:networkMonitor:] */

undefined8 *
FUN_10011bb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126e7580;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar4 = puVar1[5];
    puVar1[5] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_3);
    uVar4 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324();
    func_0x000107c61180();
    uVar4 = puVar1[9];
    puVar1[9] = puVar2;
    func_0x000107c61170(uVar4);
    uVar4 = param_4;
    func_0x000107c40244();
    puVar1[0xf] = uVar4;
    func_0x000107c61144(auStack_58,puVar1);
    uVar4 = param_4;
    func_0x000107c4d5d8();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_60,auStack_58);
    uVar3 = uVar4;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar5 = puVar1[0x11];
    puVar1[0x11] = uVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    puVar1[0x10] = puVar1[0xf];
    func_0x000107c3c378(puVar1);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10011bd78; end: 10011bdd7; -[_TtC39NetworkPathMonitorServiceImplementation25NetworkPathMonitorService connectivityStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10011bd78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112daa578;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112daa578);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar3);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112daa580);
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar1));
  func_0x000107c61170(lVar2);
  return uVar3;
}



/* Entry: 10011bdd8; end: 10011bde7; -[_TtC39NetworkPathMonitorServiceImplementation25NetworkPathMonitorService networkReconnectObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011bdd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112daa570));
  return;
}



/* Entry: 10011bde8; end: 10011bee3; -[SCBatteryNetworkMonitor _resetNetworkTrafficStatisticsData] */

/* WARNING: Possible PIC construction at 0x00010011be3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011be6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011be9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011becc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010011bea0) */
/* WARNING: Removing unreachable block (ram,0x00010011be70) */
/* WARNING: Removing unreachable block (ram,0x00010011be40) */
/* WARNING: Removing unreachable block (ram,0x00010011bed0) */

void FUN_10011bde8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6f88;
  func_0x000107c3ef7c();
  func_0x000107c61180();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c49820();
  *(undefined **)(param_1 + 0x60) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10011bee4; end: 10011befb;  */

void FUN_10011bee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc_1103462b0)
            (param_1 + 0x38);
  return;
}



/* Entry: 10011befc; end: 10011bfd3;  */

uint FUN_10011befc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte *param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [80];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long alStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_100100ed0(alStack_50);
  if (alStack_50[0] != 0) {
    if (param_6 == 0) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x000107c39820(&uStack_70);
    }
    FUN_100060b18(auStack_d8,&uStack_30);
    uVar2 = uStack_60;
    uVar1 = uStack_70;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    FUN_10011c010(uVar2,uVar1);
    func_0x00010011c04c();
    puVar3 = &uStack_40;
    func_0x00010011c054(puVar3,alStack_50,auStack_c0);
    func_0x00010011c87c();
    FUN_100100fec(&uStack_70);
    uVar4 = (uint)puVar3;
    if ((uVar4 >> 8 & 1) != 0) goto LAB_10011bf90;
  }
  uVar4 = (uint)*param_5;
LAB_10011bf90:
  FUN_1000df75c(alStack_50);
  return uVar4 & 1;
}



/* Entry: 10011bfd4; end: 10011c00f;  */

void FUN_10011bfd4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_11;
  
  uStack_11 = param_3;
  FUN_10011befc(0x38,1,param_1,param_2,&uStack_11,0);
  return;
}



/* Entry: 10011c010; end: 10011c073;  */

void FUN_10011c010(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  
  uStack0000000000000038 = in_stack_00000020;
  uStack0000000000000030 = in_stack_00000018;
  uStack0000000000000040 = in_stack_00000028;
  uStack0000000000000048 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0xc;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000060 = param_2;
  uStack0000000000000070 = param_1;
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}


