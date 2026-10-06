/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105916930; end: 1059169df;  */

void FUN_105916930(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c28f340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,8,1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059169e0; end: 105916cf3; -[SCPreviewCameraRollSnapSaver saveImage:saveSessionId:exportPolicy:watermarkProfile:watermarkLayout:isWatermarkingEnabledForImages:completion:] */

void FUN_1059169e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105916cf4;
  puStack_a0 = &UNK_1108c0008;
  _objc_retain();
  uStack_98 = uVar4;
  uStack_80 = param_1;
  _objc_retain(uVar3);
  uStack_90 = uVar3;
  _objc_retain(param_5);
  ppuVar5 = &puStack_b8;
  uStack_88 = param_5;
  _objc_retainBlock();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105916e24;
  puStack_e0 = &UNK_1108c0068;
  _objc_retain(uVar2);
  uStack_d8 = uVar2;
  _objc_retain(param_5);
  uStack_d0 = param_5;
  _objc_retain(ppuVar5);
  ppuStack_c8 = ppuVar5;
  _objc_retain(param_10);
  uStack_c0 = param_10;
  ppuVar6 = &puStack_f8;
  _objc_retainBlock();
  uVar7 = param_6;
  func_0x00010c2433c0();
  if ((param_9 == 0) || ((int)uVar7 == 0)) {
    (*(code *)ppuVar6[2])(ppuVar6,param_4);
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_6;
    func_0x00010c2a2a20(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2a40(param_7);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(ppuVar6);
    func_0x00010bfc0720(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(ppuVar6);
    _objc_release(param_4);
    _objc_release(param_5);
  }
  _objc_release(ppuVar6);
  _objc_release(uStack_c0);
  _objc_release(ppuStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(ppuVar5);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105916cf4; end: 105916dff;  */

void FUN_105916cf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  FUN_1059165ac();
  if ((int)uVar2 != 0) {
    func_0x00010c0a71c0(*(undefined8 *)(param_1 + 0x20));
  }
  _CACurrentMediaTime();
  func_0x00010c0a7260(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c13ed80(uVar2);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105916e00; end: 105916e23;  */

void FUN_105916e00(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf73f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_didCompleteSavingToCameraRollWit_1125ba988,
               param_2,*(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x30) == 0,
               *(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Entry: 105916e24; end: 105916edb;  */

void FUN_105916e24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  func_0x00010c14ae80(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 105916edc; end: 105916f2b;  */

void FUN_105916edc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105916f2c; end: 105917097;  */

void FUN_105916f2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105916450;
  uStack_60 = 0x105916460;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_78 = &uStack_80;
  _objc_retain(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105917098;
  puStack_90 = &UNK_11084d758;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1059170d0;
  puStack_b8 = &UNK_110849810;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = &uStack_80;
  uStack_58 = uVar2;
  _objc_retain(uVar3);
  uStack_b0 = uVar3;
  func_0x00010c0c0800(param_2);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x1059170d4;
  puStack_e8 = &UNK_1108647e8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_e0 = uVar2;
  puStack_d8 = &uStack_80;
  func_0x0001000d76cc("APPSTORE",&puStack_100);
  _objc_release(uStack_e0);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 105917098; end: 1059170cf;  */

void FUN_105917098(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059170d0; end: 1059170eb;  */

void FUN_1059170d0(void)

{
  return;
}



/* Entry: 1059170ec; end: 105917413; -[SCPreviewCameraRollSnapSaver _canBypassFilteringForVideoFilter:] */

uint FUN_1059170ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  long lStack_b0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c29b620();
  if (lVar3 != 0) {
    uVar17 = 0;
    goto LAB_105917224;
  }
  lVar3 = param_3;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = param_3;
    func_0x00010c27e5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    if (lVar5 == 0) {
      lVar5 = param_3;
      func_0x00010c0ef960();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        func_0x00010c29aae0(param_3);
        bVar1 = false;
        if (!NAN((double)CONCAT17(in_register_00005007,
                                  CONCAT16(in_register_00005006,
                                           CONCAT15(in_register_00005005,
                                                    CONCAT14(in_register_00005004,
                                                             CONCAT13(in_register_00005003,
                                                                      CONCAT12(in_register_00005002,
                                                                               CONCAT11(
                                                  in_register_00005001,in_b0))))))))) {
          bVar1 = (double)CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0))))))) == 1.0;
        }
        if (!bVar1) goto LAB_10591718c;
        lVar6 = param_3;
        func_0x00010c29b880();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf529e0();
        if ((lVar7 == 0) && (lVar7 = param_3, func_0x00010bf0f0e0(), (int)lVar7 != 0)) {
          lVar7 = param_3;
          func_0x00010bf0ffc0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 == 0) {
            _objc_retain();
LAB_105917254:
            lVar16 = param_3;
            func_0x00010c26f640();
            _objc_retainAutoreleasedReturnValue();
            if (lVar16 == 0) {
              lVar8 = param_3;
              func_0x00010bf0f680();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar8;
              func_0x00010bf529e0();
              if (lVar9 == 0) {
                lVar9 = param_3;
                func_0x00010c0cece0();
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar9;
                func_0x00010bf529e0();
                if (lVar10 == 0) {
                  lVar10 = param_3;
                  func_0x00010bf15ea0();
                  _objc_retainAutoreleasedReturnValue();
                  if (lVar10 == 0) {
                    lVar11 = param_3;
                    func_0x00010c091860();
                    _objc_retainAutoreleasedReturnValue();
                    if (lVar11 == 0) {
                      lVar12 = param_3;
                      func_0x00010bf5c9c0();
                      _objc_retainAutoreleasedReturnValue();
                      if (lVar12 == 0) {
LAB_10591735c:
                        lVar13 = param_3;
                        func_0x00010c2a2a00();
                        _objc_retainAutoreleasedReturnValue();
                        lVar14 = lVar13;
                        func_0x00010c2357e0();
                        if ((int)lVar14 == 0) {
                          _objc_release(lVar13);
                          uVar17 = 1;
                        }
                        else {
                          lVar14 = param_3;
                          func_0x00010c2a2a00();
                          _objc_retainAutoreleasedReturnValue();
                          lVar15 = lVar14;
                          func_0x00010c290c40();
                          uVar17 = (uint)lVar15 ^ 1;
                          _objc_release(lVar14);
                          _objc_release(lVar13);
                        }
                        if (lVar12 != 0) goto LAB_1059173c4;
                      }
                      else {
                        lStack_b0 = param_3;
                        func_0x00010bf5c9c0();
                        _objc_retainAutoreleasedReturnValue();
                        if (lStack_b0 == 0) {
                          uStack_78 = 0;
                          uStack_80 = 0;
                          uStack_68 = 0;
                          uStack_70 = 0;
                          uStack_88 = 0;
                          uStack_90 = 0;
                        }
                        else {
                          func_0x00010bf27a60(&uStack_90,lStack_b0,param_2,0);
                        }
                        iVar2 = (int)&uStack_90;
                        _CGAffineTransformIsIdentity();
                        if (iVar2 != 0) goto LAB_10591735c;
                        uVar17 = 0;
LAB_1059173c4:
                        _objc_release(lStack_b0);
                      }
                      _objc_release(lVar12);
                    }
                    else {
                      uVar17 = 0;
                    }
                    _objc_release(lVar11);
                  }
                  else {
                    uVar17 = 0;
                  }
                  _objc_release(lVar10);
                }
                else {
                  uVar17 = 0;
                }
                _objc_release(lVar9);
              }
              else {
                uVar17 = 0;
              }
              _objc_release(lVar8);
            }
            else {
              uVar17 = 0;
            }
            _objc_release(lVar16);
            lVar16 = 0;
          }
          else {
            lVar16 = *(long *)(lVar7 + 8);
            _objc_retain(lVar16);
            if (lVar16 == 0) goto LAB_105917254;
            uVar17 = 0;
          }
          _objc_release(lVar16);
          _objc_release(lVar7);
        }
        else {
          uVar17 = 0;
        }
        _objc_release(lVar6);
      }
      else {
LAB_10591718c:
        uVar17 = 0;
      }
      _objc_release(lVar5);
    }
    else {
      uVar17 = 0;
    }
    _objc_release(lVar4);
  }
  else {
    uVar17 = 0;
  }
  _objc_release(lVar3);
LAB_105917224:
  _objc_release(param_3);
  return uVar17;
}



/* Entry: 105917414; end: 105917507; -[SCPreviewCameraRollSnapSaver _newMp4Url] */

undefined * FUN_105917414(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf878c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db77b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = uVar2;
  func_0x00010c25ce00(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return puVar4;
}



/* Entry: 105917508; end: 105917567; -[SCPreviewCameraRollSnapSaver .cxx_destruct] */

void FUN_105917508(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105917568; end: 1059176b3; -[SCPreviewCameraRollSnapSavingCoordinatorImpl initWithJobScheduler:cameraRollSnapSaver:snapVideoFilterCoordinator:contentDelivery:notificationPool:] */

undefined1 *
FUN_105917568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eae70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059176b4; end: 105917817; -[SCPreviewCameraRollSnapSavingCoordinatorImpl saveVideo:saveSessionId:uiOnError:] */

void FUN_1059176b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  _objc_release(uVar2);
  _os_unfair_lock_lock(param_1 + 0x30);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x38),param_2,param_3,uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
  func_0x00010bec66e0(param_1,param_2,uVar1,param_4,0,0,0,0xffffffffffffffff,0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105917818;
  puStack_58 = &UNK_110848bd8;
  uStack_50 = uVar1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar1);
  func_0x00010c0fa1e0(uVar3,param_2,param_3,uVar1,&puStack_70);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 105917818; end: 10591781b;  */

void FUN_105917818(void)

{
  return;
}



/* Entry: 10591781c; end: 105917a43; -[SCPreviewCameraRollSnapSavingCoordinatorImpl saveImage:saveSessionId:exportPolicy:watermarkProfile:watermarkLayout:isWatermarkingEnabledForImages:uiOnError:] */

void FUN_10591781c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_3;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_9;
  _objc_retainBlock();
  _objc_release(param_9);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar3);
  _os_unfair_lock_lock(param_1 + 0x30);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x38),param_2,param_3,uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
  func_0x00010bec66e0(param_1,param_2,uVar1,param_4,1,param_5,param_6,param_7,param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  uVar2 = param_3;
  _UIImageJPEGRepresentation(0x3ff0000000000000,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_105917a44(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf64e40(0x412a5e0000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105917ab4;
  puStack_78 = &UNK_110848bd8;
  uStack_70 = param_4;
  uStack_68 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(param_4);
  func_0x00010c14a860(uVar4,param_2,uVar2,uVar3,puVar6,0,&puStack_90);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 105917a44; end: 105917ab3;  */

void FUN_105917a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e0d998);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105917ab4; end: 105917ab7;  */

void FUN_105917ab4(void)

{
  return;
}



/* Entry: 105917ab8; end: 105917abb; -[SCPreviewCameraRollSnapSavingCoordinatorImpl jobProcessorSaveSnapWithMediaId:snapSavingData:completion:] */

void FUN_105917ab8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be46450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__jobProcessorSaveSnapWithMediaId_11256f2b0);
  return;
}



/* Entry: 105917abc; end: 105917b4f; -[SCPreviewCameraRollSnapSavingCoordinatorImpl _jobProcessorSaveSnapWithMediaId:snapSavingData:completion:] */

void FUN_105917abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c075080();
  if ((int)uVar1 == 0) {
    func_0x00010be46460(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    func_0x00010be46420(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105917b50; end: 105917d5b; -[SCPreviewCameraRollSnapSavingCoordinatorImpl _submitSaveSnapJobWithMediaId:saveSessionId:isImageSnap:exportPolicy:watermarkProfile:watermarkLayout:isWatermarkingEnabledForImages:] */

void FUN_105917b50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126b7228;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  func_0x00010c1b6840();
  func_0x00010c1b67a0(puVar2,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1b6780(puVar2,param_2,0);
  puVar3 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  puVar4 = puVar3;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar4);
  func_0x00010c1b66e0(puVar2,param_2,puVar3);
  puVar4 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  func_0x00010c1eeea0();
  func_0x00010c1b67e0(puVar2,param_2,puVar4);
  puVar5 = PTR_PTR_1126c0218;
  _objc_alloc(PTR_PTR_1126c0218);
  func_0x00010c01f160();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  lStack_68 = 0;
  puVar6 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar5,0,&lStack_68);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  if ((lVar1 == 0) && (puVar7 = puVar6, func_0x00010c08fa60(), puVar7 != (undefined *)0x0)) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f200();
    _objc_release(uVar8);
  }
  _objc_release(puVar6);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 105917d5c; end: 1059180d7; -[SCPreviewCameraRollSnapSavingCoordinatorImpl _jobProcessorSaveVideoWithMediaId:snapSavingData:completion:] */

void FUN_105917d5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010010fab4();
  lVar1 = lVar3;
  if ((int)lVar4 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_initWeak(auStack_80,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1059180d8;
  puStack_a0 = &UNK_11085f5c8;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(uVar5);
  ppuVar6 = &puStack_b8;
  uStack_90 = uVar5;
  _objc_retainBlock();
  if (lVar1 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    _objc_retainBlock();
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar7);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar8);
    _objc_retain(ppuVar6);
    _objc_retain(param_5);
    _objc_copyWeak(auStack_f8,auStack_80);
    func_0x00010c13e3c0(uVar9);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_f8);
    _objc_release(param_5);
    _objc_release(ppuVar6);
    _objc_release(uVar8);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar7);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    _objc_retainBlock();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = param_4;
    func_0x00010c14ad20();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar2;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1059180e4;
    puStack_d8 = &UNK_1108c0098;
    _objc_retain(uVar7);
    uStack_d0 = uVar7;
    _objc_retain(ppuVar6);
    ppuStack_c8 = ppuVar6;
    _objc_retain(param_5);
    uStack_c0 = param_5;
    func_0x00010c14b680(uVar9);
    _objc_release(uVar8);
    _objc_release(uStack_c0);
    _objc_release(ppuStack_c8);
    uVar8 = uStack_d0;
  }
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(ppuVar6);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059180d8; end: 1059180e3;  */

void FUN_1059180d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeCachedSnapVideoFilterForMe_112628798,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1059180e4; end: 10591815b;  */

void FUN_1059180e4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2 == 0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10591815c; end: 10591833b;  */

void FUN_10591815c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar5 = param_1 + 0x50;
    _objc_loadWeakRetained();
    lVar8 = lVar5;
    func_0x00010be0aea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar5 = 0;
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,puVar4);
    _objc_release(puVar4);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c14ad20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar9);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar7);
    func_0x00010c14b680(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar9);
  }
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  if ((lVar5 != 0) && (lVar6 = *(long *)(param_2 + 0x20), lVar6 != 0)) {
    (**(code **)(lVar6 + 0x10))(lVar6,lVar5);
  }
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(*(long *)(param_2 + 0x28),lVar5);
  (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),lVar5 == 0,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10591833c; end: 1059183b3;  */

void FUN_10591833c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2 == 0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059183b4; end: 105918827; -[SCPreviewCameraRollSnapSavingCoordinatorImpl _jobProcessorSaveImageWithMediaId:snapSavingData:completion:] */

void FUN_1059183b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar2 = *(ulong *)(param_1 + 0x38);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  FUN_105917a44();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105918828;
  puStack_a8 = &UNK_110859140;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_retain(uVar5);
  uStack_98 = uVar5;
  _objc_retain(uVar6);
  ppuVar7 = &puStack_c0;
  uStack_90 = uVar6;
  _objc_retainBlock();
  if (uVar1 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar8);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    _objc_retainBlock();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    _objc_retain(param_3);
    _objc_retain(uVar8);
    _objc_retain(param_4);
    _objc_retain(uVar10);
    _objc_retain(ppuVar7);
    _objc_retain(param_5);
    func_0x00010c13e480(uVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar11);
    _objc_release(param_5);
    _objc_release(ppuVar7);
    _objc_release(uVar10);
    _objc_release(param_4);
    _objc_release(uVar8);
    _objc_release(param_3);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    _objc_retainBlock();
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    uVar10 = param_4;
    func_0x00010c14ad20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_4;
    func_0x00010bf9d120(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_4;
    func_0x00010c2a2a00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a29e0(param_4);
    func_0x00010c083a20(param_4);
    _objc_retain(uVar8);
    _objc_retain(ppuVar7);
    _objc_retain(param_5);
    func_0x00010c14a720(uVar12);
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(param_5);
    _objc_release(ppuVar7);
    uVar10 = uVar8;
  }
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(ppuVar7);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105918828; end: 105918903;  */

void FUN_105918828(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105918904;
  puStack_50 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_48 = uVar3;
  func_0x00010c12b940(uVar1,param_2,puVar2,&puStack_68);
  _objc_release(puVar2);
  _objc_release(uStack_48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105918904; end: 105918907;  */

void FUN_105918904(void)

{
  return;
}



/* Entry: 105918908; end: 10591897f;  */

void FUN_105918908(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2 == 0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105918980; end: 105918bb3;  */

void FUN_105918980(undefined *param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if ((param_2 != 0) && (param_4 != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar2 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      param_2 = 0;
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,puVar9);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c14ad20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf9d120();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c2a2a00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a29e0(*(undefined8 *)(param_1 + 0x30));
      func_0x00010c083a20(*(undefined8 *)(param_1 + 0x30));
      puVar9 = *(undefined **)(param_1 + 0x38);
      _objc_retain(puVar9);
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar10);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar8);
      func_0x00010c14a720(uVar1);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar8);
      _objc_release(uVar10);
    }
    _objc_release(puVar9);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  if ((param_2 != 0) && (lVar7 = *(long *)(puVar2 + 0x20), lVar7 != 0)) {
    (**(code **)(lVar7 + 0x10))(lVar7,param_2);
  }
  (**(code **)(*(long *)(puVar2 + 0x28) + 0x10))(*(long *)(puVar2 + 0x28),param_2);
  (**(code **)(*(long *)(puVar2 + 0x30) + 0x10))(*(long *)(puVar2 + 0x30),param_2 == 0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105918bb4; end: 105918c2b;  */

void FUN_105918bb4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2 == 0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105918c2c; end: 105918c53; -[SCPreviewCameraRollSnapSavingCoordinatorImpl _errorDescriptionForSnapVideoFilterRetrieveError:] */

undefined ** FUN_105918c2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return (undefined **)(&PTR_PTR_1108c0128)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd32f8;
}



/* Entry: 105918c54; end: 105918d07; -[SCPreviewCameraRollSnapSavingCoordinatorImpl _presentDebugViewWithMessage:] */

void FUN_105918c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105918d08;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105918d08; end: 105918d8f;  */

void FUN_105918d08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126afde0;
    func_0x00010bf57f80(PTR_PTR_1126afde0,param_2,*(undefined8 *)(param_1 + 0x20),0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105918d90; end: 105918dfb; -[SCPreviewCameraRollSnapSavingCoordinatorImpl .cxx_destruct] */

void FUN_105918d90(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105918dfc; end: 105918edf; -[SCPreviewCameraRollSnapSavingServiceProvider provide] */

void FUN_105918dfc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0220;
  _objc_alloc(PTR_PTR_1126c0220);
  func_0x00010c005b40();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105918ee0; end: 105918f1f;  */

void FUN_105918ee0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105918f20; end: 105919253; -[SCPreviewCameraRollSnapSavingServiceProvider _createPreviewCameraRollSnapSavingCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105918f20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126c0228;
  _objc_alloc();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272c290;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar11;
  func_0x00010c242d80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272c2a4;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar13;
  func_0x00010bf7f880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272c288;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar14;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_105919254(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c14a8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_105919254(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11272c29c;
    _objc_loadWeakRetained(lVar12);
  }
  lVar9 = lVar12;
  func_0x00010c2a29c0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0485c0(puVar1,param_2,lVar2,lVar3,lVar4,lVar6,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar12);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar11);
  puVar10 = PTR_PTR_1126c0230;
  _objc_alloc(PTR_PTR_1126c0230);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272c28c;
    _objc_loadWeakRetained(lVar11);
  }
  lVar2 = lVar11;
  func_0x00010c085740(lVar11);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272c294;
    _objc_loadWeakRetained(lVar13);
  }
  lVar3 = lVar13;
  func_0x00010c243b00(lVar13);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272c2a0;
    _objc_loadWeakRetained(lVar14);
  }
  lVar5 = lVar14;
  func_0x00010bf4c240(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_11272c2a8;
    _objc_loadWeakRetained(lVar4);
  }
  lVar6 = lVar4;
  func_0x00010c0dc640(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0208e0(puVar10,param_2,lVar2,puVar1,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar11);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105919254; end: 105919277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105919254(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272c298);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105919278; end: 10591930f; -[SCPreviewCameraRollSnapSavingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105919278(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272c2a8);
  _objc_destroyWeak(param_1 + _DAT_11272c2a4);
  _objc_destroyWeak(param_1 + _DAT_11272c2a0);
  _objc_destroyWeak(param_1 + _DAT_11272c29c);
  _objc_destroyWeak(param_1 + _DAT_11272c298);
  _objc_destroyWeak(param_1 + _DAT_11272c294);
  _objc_destroyWeak(param_1 + _DAT_11272c290);
  _objc_destroyWeak(param_1 + _DAT_11272c28c);
  _objc_destroyWeak(param_1 + _DAT_11272c288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272c284);
  return;
}



/* Entry: 105919310; end: 1059193fb; -[SCPreviewLabelCounterImpl initWithCameraConfigurationServices:userPreferences:] */

undefined1 *
FUN_105919310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126eae78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    uVar2 = param_3;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c111420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x00010beabf40(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059193fc; end: 1059194c3; -[SCPreviewLabelCounterImpl canShowPreviewLabel] */

ulong FUN_1059193fc(float param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c1114a0();
  if (lVar1 == 1) {
    lVar2 = *(long *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010c1114c0(lVar1);
    param_2 = (ulong)(lVar2 < lVar1);
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010c1114a0();
    if (lVar1 == 3) {
      param_2 = 1;
    }
    else {
      lVar1 = *(long *)(param_2 + 8);
      func_0x00010c1114a0();
      if (lVar1 == 2) {
        lVar1 = param_2 + 0x10;
        _objc_loadWeakRetained(lVar1);
        lVar2 = lVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c20();
        func_0x00010bddda20((double)param_1,param_2);
        _objc_release(lVar2);
        _objc_release(lVar1);
      }
      else {
        param_2 = 0;
      }
    }
  }
  return param_2;
}



/* Entry: 1059194c4; end: 10591954f; -[SCPreviewLabelCounterImpl setPreviewLabelsShown] */

void FUN_1059194c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  param_2 = param_2 + 0x10;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c19de00((float)(double)CONCAT44(uVar4,uVar3),lVar1,param_3,
                      &PTR____CFConstantStringClassReference_110e0d9b8);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105919550; end: 10591961b; -[SCPreviewLabelCounterImpl _checkIfDayPassedSince:] */

bool FUN_105919550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0(param_1,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf44660(puVar1,param_3,0x10,puVar2,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010bf65700(puVar4);
  _objc_release(puVar4);
  return 0 < (long)puVar1;
}



/* Entry: 10591961c; end: 10591965f; -[SCPreviewLabelCounterImpl _setupDebug] */

void FUN_10591961c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105919660; end: 105919667; -[SCPreviewLabelCounterImpl previewLabelsShownCount] */

undefined8 FUN_105919660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105919668; end: 10591969f; -[SCPreviewLabelCounterImpl .cxx_destruct] */

void FUN_105919668(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059196a0; end: 105919733; -[SCPreviewLabelCounterServiceProvider provide] */

void FUN_1059196a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105919734;
  puStack_30 = &UNK_1108c0180;
  puVar1 = PTR_PTR_1126ae720;
  uStack_28 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0240;
  _objc_alloc(PTR_PTR_1126c0240);
  func_0x00010c039aa0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105919734; end: 1059197ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105919734(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c0238;
  _objc_alloc(PTR_PTR_1126c0238);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20) + (long)_DAT_11272c2c0;
    _objc_loadWeakRetained(lVar3);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar4 = *(long *)(param_1 + 0x20) + (long)_DAT_11272c2c4;
      _objc_loadWeakRetained(lVar4);
      goto LAB_105919790;
    }
  }
  lVar4 = 0;
LAB_105919790:
  lVar2 = lVar4;
  func_0x00010c1067a0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb1c0(puVar1,param_2,lVar3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059197f0; end: 105919833; -[SCPreviewLabelCounterServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059197f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272c2c4);
  _objc_destroyWeak(param_1 + _DAT_11272c2c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272c2bc);
  return;
}



/* Entry: 105919834; end: 10591995b; +[SCSnapMediaPlayerContentManager retrieveContentWithContentDelivery:localCacheKey:] */

void FUN_105919834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c0248;
  func_0x00010bf56300(PTR_PTR_1126c0248,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10591995c;
  puStack_40 = &UNK_110855f30;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c13e640(param_3,param_2,puVar2,puVar3,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10591995c; end: 105919967;  */

void FUN_10591995c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105919968; end: 105919a8f; +[SCSnapMediaPlayerContentManager retrieveContentWithContentDelivery:externalURL:] */

void FUN_105919968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c0248;
  func_0x00010bf56340(PTR_PTR_1126c0248,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105919a90;
  puStack_40 = &UNK_110855f30;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c13e640(param_3,param_2,puVar2,puVar3,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105919a90; end: 105919a9b;  */

void FUN_105919a90(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105919a9c; end: 105919c9b; +[SCSnapMediaPlayerContentManager fetchWithContentFetcher:url:encryptionKey:encryptionIV:] */

void FUN_105919a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_opt_new();
  puVar3 = PTR_PTR_1126b1378;
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  func_0x00010c291560(puVar3,param_2,0x22,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0248;
  func_0x00010bf56340(PTR_PTR_1126c0248,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar4 = param_5;
  func_0x00010c08fa60();
  puVar5 = puVar2;
  if ((lVar4 != 0) && (lVar4 = param_6, func_0x00010c08fa60(), lVar4 != 0)) {
    func_0x00010c2ad2a0(puVar2,param_2,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  uVar6 = param_3;
  func_0x00010bfa6dc0(param_3,param_2,puVar3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49960();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105919c9c;
  puStack_60 = &UNK_110891150;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c26d0c0(uVar7,param_2,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_58);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105919c9c; end: 105919ce3;  */

undefined8 FUN_105919c9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc1d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
  _objc_release(param_2);
  return 0;
}



/* Entry: 105919ce4; end: 10591a093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105919ce4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  
  puVar1 = PTR_PTR_1126c0250;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b7d78;
  _objc_alloc();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  FUN_10591a094();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010591a0b8();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0d7980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1280(puVar2,param_2,lVar5,lVar8,0);
  lVar9 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar10 = 0;
  if (lVar9 != 0) {
    lVar10 = lVar9 + _DAT_11272c2e4;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar10;
  func_0x00010c281640();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar14 = 0;
  if (lVar13 != 0) {
    lVar14 = lVar13 + _DAT_11272c2d4;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar14;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010591a0dc();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c291140();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar20 = 0;
  if (lVar19 != 0) {
    lVar20 = lVar19 + _DAT_11272c2dc;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar20;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010591a0dc();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010befe1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  FUN_10591a094();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + 0x20);
  lVar28 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar28 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = lVar28 + _DAT_11272c2e8;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar32;
  func_0x00010c249b40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar30 = param_1;
  func_0x00010591a0b8();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010c0d7980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2780(puVar1,param_2,puVar2,lVar12,lVar15,lVar18,lVar21,lVar24,lVar27,uVar33,lVar29,
                      lVar31);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(param_1);
  _objc_release(lVar29);
  _objc_release(lVar32);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10591a094; end: 10591a0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591a094(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272c2e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10591a100; end: 10591a1a7; -[SCUnlockablesMetricsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591a100(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272c2f0,0);
  _objc_destroyWeak(param_1 + _DAT_11272c2ec);
  _objc_destroyWeak(param_1 + _DAT_11272c2e8);
  _objc_destroyWeak(param_1 + _DAT_11272c2c8);
  _objc_destroyWeak(param_1 + _DAT_11272c2e4);
  _objc_destroyWeak(param_1 + _DAT_11272c2e0);
  _objc_destroyWeak(param_1 + _DAT_11272c2dc);
  _objc_destroyWeak(param_1 + _DAT_11272c2d8);
  _objc_destroyWeak(param_1 + _DAT_11272c2d4);
  _objc_destroyWeak(param_1 + _DAT_11272c2d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272c2cc);
  return;
}



/* Entry: 10591a1a8; end: 10591a30f; -[SCGtqAdData adRequestWithProvider:] */

void FUN_10591a1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c0260;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010bef3f80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1dfdc0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010befdf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c700(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bdc9700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dd80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0d7700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbfe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf075a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010be3f7e0(param_1);
  func_0x00010c1b0520(puVar1,param_2,uVar2);
  func_0x00010be3daa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d3c80();
  func_0x00010c1ae920(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10591a310; end: 10591a317; -[SCGtqAdData network] */

void FUN_10591a310(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  uVar2 = *(ulong *)(param_1 + 8);
  _objc_retain();
  puVar3 = PTR_PTR_1126d9860;
  _objc_opt_new(PTR_PTR_1126d9860);
  uVar4 = uVar2;
  func_0x00010bfc37c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3d80(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bfc37e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179d40(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bfc4060();
  if (uVar4 < 4) {
    uVar6 = *(undefined4 *)(&UNK_10dee78a0 + uVar4 * 4);
  }
  else {
    uVar6 = 2;
  }
  func_0x00010c180f60(puVar3,param_2,uVar6);
  uVar4 = uVar2;
  func_0x00010bfc38a0();
  iVar1 = (int)(uVar4 - 1) + 2;
  if (3 < uVar4 - 1) {
    iVar1 = 1;
  }
  func_0x00010c17a600(puVar3,param_2,iVar1);
  uVar4 = uVar2;
  func_0x00010bfc4f20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x00010c067fc0(uVar4);
    func_0x00010c1b6fe0(puVar3,param_2,(long)uVar5 / 8000);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10591a318; end: 10591a31f; -[SCGtqAdData application] */

void FUN_10591a318(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  _objc_retain();
  puVar3 = PTR_PTR_1126d9850;
  _objc_opt_new(PTR_PTR_1126d9850);
  uVar4 = uVar2;
  func_0x00010bfc2620(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168e60(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bfc2660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010848b6bc();
  func_0x00010c169480(puVar3,param_2,uVar5);
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bfc2640();
  uVar1 = (undefined4)uVar4;
  if (5 < uVar4) {
    uVar1 = 1;
  }
  func_0x00010c169400(puVar3,param_2,uVar1);
  uVar4 = uVar2;
  func_0x00010bfca880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206ca0(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  uVar4 = uVar2;
  func_0x00010bfc2560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08fa60();
  if (uVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar2;
    func_0x00010bfc2560(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar6,param_2,uVar7);
  func_0x00010c169060(puVar3,param_2,puVar6);
  _objc_release(puVar6);
  if (uVar5 != 0) {
    _objc_release(uVar7);
  }
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bfc2600(uVar2);
  func_0x00010c168900(puVar3,param_2,uVar4 != 0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10591a320; end: 10591a3bb; -[SCGtqAdData adsDevice] */

void FUN_10591a320(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar1 = param_1;
  func_0x00010be36d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010848bb28(uVar3,lVar1,0,0,0,uVar2,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10591a3bc; end: 10591a4e3; -[SCGtqAdData adPreferencesWithProvider:] */

void FUN_10591a3bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0268;
  _objc_alloc_init(PTR_PTR_1126c0268);
  func_0x00010c1bdaa0();
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c13e1c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010bf0ece0(lVar3);
      func_0x00010c16b9e0(puVar1,param_2,lVar2);
      lVar2 = lVar3;
      func_0x00010bf9de60(lVar3);
      func_0x00010c199420(puVar1,param_2,lVar2);
      lVar2 = lVar3;
      func_0x00010c26d200(lVar3);
      func_0x00010c213b80(puVar1,param_2,lVar2);
      lVar2 = lVar3;
      func_0x00010bfbbae0(lVar3);
      func_0x00010c1975a0(puVar1,param_2,lVar2);
      _objc_release(lVar3);
      goto LAB_10591a4c8;
    }
  }
  func_0x00010c16b9e0(puVar1,param_2,0);
  func_0x00010c199420(puVar1,param_2,0);
  func_0x00010c213b80(puVar1,param_2,0);
  func_0x00010c1975a0(puVar1,param_2,0);
LAB_10591a4c8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10591a4e4; end: 10591a59f; -[SCGtqAdData _adsUser] */

void FUN_10591a4e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c0270;
  _objc_alloc_init(PTR_PTR_1126c0270);
  lVar2 = param_1;
  func_0x00010be095c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195bc0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010848b7c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar3);
  if (lVar4 != 0) {
    func_0x00010c189ba0(puVar1,param_2,lVar4);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10591a5a0; end: 10591a647; -[SCGtqAdData _osVersion] */

void FUN_10591a5a0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c1708 != -1) {
    func_0x00010002a2fc(0x1136c1708,&PTR___NSConcreteGlobalBlock_1108c01e0);
  }
  uVar1 = uRam00000001136c1710;
  _objc_retain(uRam00000001136c1710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10591a648; end: 10591a6b3; -[SCGtqAdData _idfa] */

void FUN_10591a648(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
  func_0x00010c22bc20(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010befe540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10591a6b4; end: 10591a6f7; -[SCGtqAdData _encryptedUserData] */

void FUN_10591a6b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000108e4970c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf93c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10591a6f8; end: 10591a737; -[SCGtqAdData _isDebug] */

undefined8 FUN_10591a6f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0703c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10591a738; end: 10591a8e7; -[SCGtqAdData _inventoryRequests] */

void FUN_10591a738(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c0278;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001084c1810();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c1c37a0(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x0001084c18c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c1c37c0(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07ed80();
  func_0x00010c1b47e0(puVar1);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b8c98;
  func_0x00010c0effa0(PTR_PTR_1126b8c98);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x000108492f58(0,0xfbadbeef,0,0,puVar5,0,0xfbadbeef,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 10591a8e8; end: 10591a92f; -[SCGtqAdData .cxx_destruct] */

void FUN_10591a8e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10591a930; end: 10591a9a3; -[SCGtqUserData initWithUserAdIdProvider:] */

undefined1 * FUN_10591a930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eae88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10591a9a4; end: 10591a9ab; -[SCGtqUserData experiments] */

undefined8 FUN_10591a9a4(void)

{
  return 0;
}



/* Entry: 10591a9ac; end: 10591a9f3; -[SCGtqUserData snapadsId] */

void FUN_10591a9ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c149400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10591a9f4; end: 10591a9ff; -[SCGtqUserData .cxx_destruct] */

void FUN_10591a9f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10591aa00; end: 10591aa73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591aa00(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_11272c314;
    _objc_loadWeakRetained(lVar2);
  }
  lVar1 = lVar2;
  func_0x00010bf398e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10591aa74; end: 10591aaf3;  */

void FUN_10591aa74(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf7e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10591aaf4; end: 10591ab6f; -[SCGtqNetworkServiceProvider _dataProvider] */

void FUN_10591aaf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c0290;
  _objc_alloc(PTR_PTR_1126c0290);
  func_0x000100b9047c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c291140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a7a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10591ab70; end: 10591abf3; -[SCGtqNetworkServiceProvider _requestInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591ab70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c0298;
  _objc_alloc(PTR_PTR_1126c0298);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11272c30c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf534e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006300(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10591abf4; end: 10591ac8b; -[SCGtqNetworkServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591abf4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272c32c);
  _objc_destroyWeak(param_1 + _DAT_11272c328);
  _objc_destroyWeak(param_1 + _DAT_11272c324);
  _objc_destroyWeak(param_1 + _DAT_11272c320);
  _objc_destroyWeak(param_1 + _DAT_11272c31c);
  _objc_destroyWeak(param_1 + _DAT_11272c318);
  _objc_destroyWeak(param_1 + _DAT_11272c314);
  _objc_destroyWeak(param_1 + _DAT_11272c310);
  _objc_destroyWeak(param_1 + _DAT_11272c30c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272c308);
  return;
}



/* Entry: 10591ac8c; end: 10591adab; -[SCGtqAdTrackProxyNetworkRequest initWithGtqAdTrackProxyRequest:host:path:type:adConfigProvider:userAdIdProvider:] */

undefined8
FUN_10591ac8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0d9d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019760(param_1,param_2,param_3,param_4,param_5,puVar2,0,param_6,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10591adac; end: 10591af73; -[SCGtqAdTrackProxyNetworkRequest initWithGtqAdTrackProxyRequest:host:path:key:additionalHTTPHeaders:type:adConfigProvider:userAdIdProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10591adac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126eae90;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11272c330;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    func_0x00010c1a9200(puVar1);
    func_0x00010c1d9820(puVar1);
    func_0x00010c1659e0(puVar1);
    func_0x00010c1b6b40(puVar1);
    func_0x00010c1e3380(puVar1);
    func_0x00010c180f80(puVar1);
    func_0x00010c1c7660(puVar1);
    func_0x00010c1ec220(puVar1);
    puVar3 = PTR_PTR_1126bbf20;
    func_0x00010bdc1d20(PTR_PTR_1126bbf20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebf40(puVar1);
    _objc_release(puVar3);
    func_0x00010be736c0(puVar1);
    func_0x00010c200b40(puVar1);
    func_0x00010bfca1a0(puVar1);
    func_0x00010c1ed9a0(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10591af74; end: 10591afc7; -[SCGtqAdTrackProxyNetworkRequest _persistenceSetting:adConfigProvider:] */

undefined8 FUN_10591af74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 - 1U < 2) {
    func_0x00010bfcfb20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010c0fa3a0();
    _objc_release(param_4);
    return uVar1;
  }
  return 0;
}



/* Entry: 10591afc8; end: 10591b023; -[SCGtqAdTrackProxyNetworkRequest toSCRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591afc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272c330);
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22600(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10591b024; end: 10591b113; -[SCGtqAdTrackProxyNetworkRequest toPersistenceObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591b024(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010c1ed9a0(param_1,param_2,0);
  func_0x00010c200b40(param_1,param_2,0);
  puVar1 = PTR_PTR_1126c02a0;
  _objc_alloc(PTR_PTR_1126c02a0);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272c330);
  lVar2 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c086560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcfe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054da0(puVar1,param_2,uVar5,lVar2,lVar3,lVar4,param_1);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10591b114; end: 10591b127; -[SCGtqAdTrackProxyNetworkRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591b114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272c330,0);
  return;
}



/* Entry: 10591b128; end: 10591b267;  */

void FUN_10591b128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7d78;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010bff1280();
  _objc_release(param_3);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126c02a8;
  _objc_opt_new(PTR_PTR_1126c02a8);
  puVar3 = puVar1;
  func_0x00010bf075a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010befdf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c700(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c0d7700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbfe0(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bef3f80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1dfdc0(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10591b268; end: 10591b4e3; -[SCGtqNetworkController fireGtqAdTrackProxyRequest:performer:success:failure:] */

void FUN_10591b268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_10591b128(uVar1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000106bc1304(param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c02b0;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010be1f9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be237c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019780();
  _objc_release(uVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c11de00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfaa3c0(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10591b4e4; end: 10591b58f;  */

void FUN_10591b4e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR_PTR_1126c02b8;
    func_0x00010bdc2140(PTR_PTR_1126c02b8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c02b8;
    func_0x00010bdc2160(PTR_PTR_1126c02b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec64a0(lVar3,param_2,uVar1,uVar2,puVar4,puVar5,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10591b590; end: 10591b80b; -[SCGtqNetworkController fireGtqCreationAdTrackProxyRequest:performer:success:failure:] */

void FUN_10591b590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_10591b128(uVar1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000106bc1304(param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c02b0;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010be1f9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be23780(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019780();
  _objc_release(uVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c11de00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfaa3c0(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10591b80c; end: 10591b8b7;  */

void FUN_10591b80c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR_PTR_1126c02b8;
    func_0x00010bdc2140(PTR_PTR_1126c02b8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c02b8;
    func_0x00010bdc2160(PTR_PTR_1126c02b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec64a0(lVar3,param_2,uVar1,uVar2,puVar4,puVar5,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),2);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10591b8b8; end: 10591ba5b; -[SCGtqNetworkController submitServeNetworkRequest:completionPerformer:success:failure:] */

void FUN_10591b8b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c11de00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfaa3c0(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10591ba5c; end: 10591bb1f;  */

void FUN_10591ba5c(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      if (lVar3 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(lVar3);
        func_0x00010c0f7fc0(uVar2);
        _objc_release(lVar3);
      }
    }
    else {
      func_0x00010bec64a0(lVar1);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10591bb20; end: 10591bb87;  */

void FUN_10591bb20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e0da38,
                      &PTR____CFConstantStringClassReference_110e0da78,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10591bb88; end: 10591bbf3; -[SCGtqNetworkController _getHost] */

void FUN_10591bb88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010af38afc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x60);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10591bbf4; end: 10591bc3b; -[SCGtqNetworkController _getServePath] */

void FUN_10591bbf4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 == 0) {
    *(undefined ***)(param_1 + 0x68) = &PTR____CFConstantStringClassReference_110e0da58;
    _objc_release(0);
    lVar1 = *(long *)(param_1 + 0x68);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10591bc3c; end: 10591bc8b; -[SCGtqNetworkController _getTrackViewPath] */

void FUN_10591bc3c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010af38b6c();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x70);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10591bc8c; end: 10591bcd3; -[SCGtqNetworkController _getTrackCreationPath] */

void FUN_10591bc8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5aba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10591bcd4; end: 10591beab; -[SCGtqNetworkController _submitRequest:performer:latencyMeasure:failureMeasure:success:failure:requestType:] */

void FUN_10591bcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _CACurrentMediaTime();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10591beac;
  puStack_90 = &UNK_1108c02c0;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_9;
  uStack_68 = param_1;
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  ppuVar1 = &puStack_a8;
  _objc_retainBlock(ppuVar1);
  if (param_10 == 2) {
    func_0x00010c13e0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_10 == 1) {
    func_0x00010c13e100(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_10 != 0) goto LAB_10591be34;
    func_0x00010c13e0c0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_5;
  func_0x00010c11de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f5e0(param_2,param_3,param_4,uVar2,ppuVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
LAB_10591be34:
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(uStack_88);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}


