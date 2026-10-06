/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109143874; end: 109143953;  */

void FUN_109143874(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 == 0) {
    func_0x00010be95c00(param_1);
  }
  else {
    _objc_retain(param_1);
    func_0x00010be9d560(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 109143954; end: 10914395b;  */

void FUN_109143954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resumeBlendingPerformerIfNeeded_1125830a0);
  return;
}



/* Entry: 10914395c; end: 1091439f7; -[SCArSegmentationImageGenerator dealloc] */

void FUN_10914395c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x00010bfec280(*(undefined8 *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_resume();
    _objc_release(uVar1);
  }
  puStack_28 = PTR_PTR_112700800;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091439f8; end: 109143a63; -[SCArSegmentationImageGenerator _resumeBlendingPerformerIfNeeded] */

void FUN_1091439f8(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) && (bVar1 = *(byte *)(param_1 + 0x10), _objc_release(), (bVar1 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 109143a64; end: 109143a6b; -[SCArSegmentationImageGenerator clear] */

void FUN_109143a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_increment_1125d8a68);
  return;
}



/* Entry: 109143a6c; end: 109143a8f; +[SCArSegmentationImageGenerator shouldEnableGenerator] */

bool FUN_109143a6c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3ca8;
  func_0x00010be1e9a0(PTR_PTR_1126c3ca8);
  return (int)puVar1 != 4;
}



/* Entry: 109143a90; end: 109143aab; +[SCArSegmentationImageGenerator shouldEnableHighEndModel] */

bool FUN_109143a90(int param_1)

{
  func_0x00010be1e9a0();
  return param_1 == 0;
}



/* Entry: 109143aac; end: 109143cc7; -[SCArSegmentationImageGenerator _segmentInputImage:withCompletion:] */

void FUN_109143aac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 auStack_50 [2];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = PTR_PTR_1126c3ca8;
  func_0x00010c2300a0();
  if ((int)puVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0xc0);
    func_0x00010bf529e0();
    if (lVar5 == 0) {
      func_0x00010becc6e0(&uStack_a0,param_1,param_2,param_3);
      if (*(long *)(param_1 + 0x98) != 0) {
        piVar10 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
        do {
          iVar3 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(param_1 + 0x60);
        }
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(long *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      if (0 < *(int *)(param_1 + 100)) {
        lVar5 = 0;
        lVar8 = *(long *)(param_1 + 0xa0);
        do {
          *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(param_1 + 100));
      }
      *(undefined8 *)(param_1 + 0x68) = uStack_98;
      *(ulong *)(param_1 + 0x60) = CONCAT44(iStack_9c,uStack_a0);
      *(undefined8 *)(param_1 + 0x78) = uStack_88;
      *(undefined8 *)(param_1 + 0x70) = uStack_90;
      *(undefined8 *)(param_1 + 0x88) = uStack_78;
      *(undefined8 *)(param_1 + 0x80) = uStack_80;
      *(undefined8 *)(param_1 + 0x98) = uStack_68;
      *(undefined8 *)(param_1 + 0x90) = uStack_70;
      puVar9 = *(undefined8 **)(param_1 + 0xa8);
      puVar6 = (undefined8 *)(param_1 + 0xb0);
      if (puVar9 != puVar6) {
        if (puVar9 != (undefined8 *)0x0) {
          _free(puVar9[-1]);
        }
        *(long *)(param_1 + 0xa0) = param_1 + 0x68;
        *(undefined8 **)(param_1 + 0xa8) = puVar6;
        puVar9 = puVar6;
      }
      if (iStack_9c < 3) {
        puVar6 = (undefined8 *)((ulong)&uStack_a0 | 4);
        *puVar9 = *puStack_58;
        puVar9[1] = puStack_58[1];
        uStack_a0 = 0x42ff0000;
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar6[5] = 0;
        puVar6[4] = 0;
        *(undefined8 *)((long)puVar6 + 0x34) = 0;
        *(undefined8 *)((long)puVar6 + 0x2c) = 0;
        if (puStack_58 != auStack_50) {
          _free(puStack_58[-1]);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xa0) = uStack_60;
        *(undefined8 **)(param_1 + 0xa8) = puStack_58;
      }
      if (*(long *)(param_1 + 0x70) != 0) {
        uVar7 = (ulong)*(uint *)(param_1 + 100);
        if ((int)*(uint *)(param_1 + 100) < 3) {
          lVar5 = (long)*(int *)(param_1 + 0x6c) * (long)*(int *)(param_1 + 0x68);
        }
        else {
          lVar5 = 1;
          piVar10 = *(int **)(param_1 + 0xa0);
          do {
            lVar5 = lVar5 * *piVar10;
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 1;
          } while (uVar7 != 0);
        }
        if (lVar5 != 0) {
          iVar3 = (int)*(undefined8 *)(param_1 + 8);
          func_0x00010c296d80();
          if ((param_4 == 0) || (iVar3 != 0)) goto LAB_109143b08;
        }
      }
    }
  }
  (**(code **)(param_4 + 0x10))(param_4);
LAB_109143b08:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109143cc8; end: 109143df3;  */

undefined8 * FUN_109143cc8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1[7] != 0) {
    piVar8 = (int *)(param_1[7] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar4 = 0;
    lVar5 = param_1[8];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 4));
  }
  piVar8 = (int *)((long)param_2 + 4);
  iVar3 = *piVar8;
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar9 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  puVar6 = (undefined8 *)param_1[9];
  puVar7 = param_1 + 10;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[8] = param_1 + 1;
    param_1[9] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[9];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = puVar7;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  return param_1;
}



/* Entry: 109143df4; end: 109143f57; -[SCArSegmentationImageGenerator generateContextImageFromInput:completionQueue:completion:] */

void FUN_109143df4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = 0;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109143f58; end: 109144293;  */

void FUN_109143f58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  ulong uStack_48;
  
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    iVar3 = (int)*(undefined8 *)(lVar4 + 8);
    func_0x00010c296d80();
    if (iVar3 == 0) {
      uVar5 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf6fae0();
      plVar8 = *(long **)(lVar4 + 0x50);
      uStack_48 = uVar5;
      if (plVar8 != (long *)0x0) {
LAB_109143fa8:
        if (uVar5 < (ulong)plVar8[4]) goto LAB_109143fc0;
        if ((ulong)plVar8[4] < uVar5) {
          plVar8 = plVar8 + 1;
          goto LAB_109143fc0;
        }
        lVar11 = lVar4 + 0x48;
        FUN_109145248(lVar11,uVar5,&uStack_48);
        if (*(long *)(lVar11 + 0x38) != 0) {
          uVar9 = (ulong)*(uint *)(lVar11 + 0x2c);
          if ((int)*(uint *)(lVar11 + 0x2c) < 3) {
            lVar10 = (long)*(int *)(lVar11 + 0x34) * (long)*(int *)(lVar11 + 0x30);
          }
          else {
            lVar10 = 1;
            piVar12 = *(int **)(lVar11 + 0x68);
            do {
              lVar10 = lVar10 * *piVar12;
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 1;
            } while (uVar9 != 0);
          }
          if ((lVar10 == 0) || (*(long *)(lVar4 + 0x70) == 0)) goto LAB_109143fc8;
          uVar9 = (ulong)*(uint *)(lVar4 + 100);
          if ((int)*(uint *)(lVar4 + 100) < 3) {
            lVar11 = (long)*(int *)(lVar4 + 0x6c) * (long)*(int *)(lVar4 + 0x68);
          }
          else {
            lVar11 = 1;
            piVar12 = *(int **)(lVar4 + 0xa0);
            do {
              lVar11 = lVar11 * *piVar12;
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 1;
            } while (uVar9 != 0);
          }
          if (lVar11 == 0) goto LAB_109143fc8;
          if (uVar5 == 1) {
            lVar6 = *(long *)(param_1 + 0x20);
            func_0x00010c23e720();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar6;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = 0;
            if (lVar10 == 0) {
LAB_1091441d0:
              _objc_release(lVar6);
            }
            else {
              lVar7 = *(long *)(param_1 + 0x20);
              func_0x00010c23e720();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar7;
              func_0x00010c131360();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(lVar7);
              _objc_release(lVar10);
              _objc_release(lVar6);
              if (lVar11 != 0) {
                lVar6 = *(long *)(param_1 + 0x20);
                func_0x00010c23e720(lVar6);
                _objc_retainAutoreleasedReturnValue();
                FUN_109145248(lVar4 + 0x48,1,&uStack_48);
                lVar11 = lVar4;
                func_0x00010be1e100();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_1091441d0;
              }
              lVar11 = 0;
            }
            puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_c0 = 0xc2000000;
            uStack_b8 = 0x1091442b4;
            puStack_b0 = &UNK_1107d0af0;
            uVar1 = *(undefined8 *)(param_1 + 0x28);
            uVar2 = *(undefined8 *)(param_1 + 0x30);
            _objc_retain(uVar2);
            lStack_a8 = lVar11;
            uStack_a0 = uVar2;
            _objc_retain(lVar11);
            func_0x000107c27d8c(uVar1,&puStack_c8);
            _objc_release(lStack_a8);
            _objc_release(uStack_a0);
          }
          else {
            if (uVar5 != 0) goto LAB_10914401c;
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0xc2000000;
            uStack_88 = 0x1091442a4;
            puStack_80 = &UNK_11087bb60;
            uVar1 = *(undefined8 *)(param_1 + 0x28);
            lVar11 = *(long *)(param_1 + 0x30);
            _objc_retain(lVar11);
            lStack_78 = lVar11;
            func_0x000107c27d8c(uVar1,&puStack_98);
            lVar11 = lStack_78;
          }
          goto LAB_109144014;
        }
      }
LAB_109143fc8:
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_109144294;
      puStack_58 = &UNK_11087bb60;
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      lVar11 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar11);
      lStack_50 = lVar11;
      func_0x000107c27d8c(uVar1,&puStack_70);
      lVar11 = lStack_50;
LAB_109144014:
      _objc_release(lVar11);
    }
  }
LAB_10914401c:
  _objc_release(lVar4);
  return;
LAB_109143fc0:
  plVar8 = (long *)*plVar8;
  if (plVar8 == (long *)0x0) goto LAB_109143fc8;
  goto LAB_109143fa8;
}



/* Entry: 109144294; end: 1091442c3;  */

void FUN_109144294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001091442a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1091442c4; end: 1091445a7; -[SCArSegmentationImageGenerator _toCVMatWithResize:] */

void FUN_1091442c4(undefined4 *param_1,double param_2,double param_3,long param_4,undefined8 param_5
                  ,long param_6)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined4 auStack_98 [2];
  undefined4 *puStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  undefined4 *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_6);
  if (param_4 != 0) {
    iVar2 = (int)*(undefined8 *)(param_4 + 8);
    func_0x00010c296d80();
    if (iVar2 == 0) {
      func_0x00010c23d0a0(param_6);
      dVar4 = param_2;
      func_0x00010c23d0a0(param_6);
      if (param_2 <= param_3) {
        dVar4 = param_3;
        func_0x00010c23d0a0(param_6);
      }
      else {
        func_0x00010c23d0a0(param_6);
      }
      uVar5 = NEON_fminnm(1024.0 / dVar4,0x3ff0000000000000);
      lVar3 = param_6;
      func_0x00010bfe8a40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (lVar3 == 0) {
        *param_1 = 0x42ff0000;
        *(undefined8 *)(param_1 + 3) = 0;
        *(undefined8 *)(param_1 + 1) = 0;
        *(undefined8 *)(param_1 + 7) = 0;
        *(undefined8 *)(param_1 + 5) = 0;
        *(undefined8 *)(param_1 + 0xb) = 0;
        *(undefined8 *)(param_1 + 9) = 0;
        *(undefined8 *)(param_1 + 0xe) = 0;
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 0x14) = 0;
        *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
        *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
        *(undefined8 *)(param_1 + 0x16) = 0;
      }
      else {
        FUN_1091748f4(auStack_80,lVar3);
        func_0x00010c271ac0(param_1,puVar1);
        uStack_70 = 0;
        auStack_80[0] = 0x1010000;
        auStack_98[0] = 0x2010000;
        uStack_88 = 0;
        puStack_90 = param_1;
        puStack_78 = param_1;
        FUN_109ac9fc8(auStack_80,auStack_98,3,0);
      }
      _objc_release(lVar3);
      goto LAB_109144430;
    }
  }
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
LAB_109144430:
  _objc_release(param_6);
  return;
}



/* Entry: 1091445a8; end: 109144f4f; -[SCArSegmentationImageGenerator _getContextImageFromDownloadedSky:imageMat:skyMaskMat:] */

void FUN_1091445a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined1 auStack_3d0 [96];
  undefined4 uStack_370;
  undefined8 uStack_36c;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  long lStack_338;
  long lStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  int *piStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  uint uStack_27c;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  long lStack_248;
  int *piStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  uint uStack_21c;
  int iStack_218;
  int iStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  int *piStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [312];
  undefined4 uStack_88;
  
  _objc_retain(param_3);
  puVar12 = (undefined *)0x0;
  if (param_1 == 0) goto LAB_109144c20;
  iVar5 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c296d80();
  if (iVar5 != 0) {
    puVar12 = (undefined *)0x0;
    goto LAB_109144c20;
  }
  lVar6 = param_3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010c23e7a0();
  if (lVar9 == -0x7edfcbb7) {
    uVar13 = 0;
LAB_109144654:
    lVar9 = lVar6;
    func_0x00010c25e280();
    uVar2 = 4;
    if (lVar9 != 0x5654bad0) {
      uVar2 = uVar13;
    }
    FUN_10918a9b0(auStack_1c0,*(undefined4 *)(param_1 + 0x40),0);
    uStack_220 = 0x42ff0000;
    iStack_214 = 0;
    uStack_210 = 0;
    uStack_21c = 0;
    iStack_218 = 0;
    piVar14 = (int *)((ulong)&uStack_220 | 8);
    uStack_204 = 0;
    uStack_200 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_1f4 = 0;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lVar9 = param_3;
    piStack_1e0 = piVar14;
    puStack_1d8 = &uStack_1d0;
    func_0x00010c131360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      puStack_238 = (undefined8 *)0x0;
      piStack_240 = (int *)0x0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_258 = 0;
      uStack_254 = 0;
      uStack_260 = 0;
      uStack_25c = 0;
      lStack_248 = 0;
      uStack_250 = 0;
      uStack_24c = 0;
      uStack_278._0_4_ = 0;
      uStack_278._4_4_ = 0;
      uStack_280 = 0;
      uStack_27c = 0;
      uStack_268 = 0;
      uStack_264 = 0;
      uStack_270 = 0;
      uStack_26c = 0;
    }
    else {
      func_0x00010c271aa0(&uStack_280,lVar9);
    }
    if (lStack_1e8 != 0) {
      piVar1 = (int *)(lStack_1e8 + 0x14);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(&uStack_220);
      }
    }
    if (0 < (int)uStack_21c) {
      lVar8 = 0;
      do {
        piStack_1e0[lVar8] = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uStack_21c);
    }
    iStack_218 = (int)uStack_278;
    iStack_214 = uStack_278._4_4_;
    uStack_220 = uStack_280;
    uStack_21c = uStack_27c;
    uStack_208 = uStack_268;
    uStack_204 = uStack_264;
    uStack_210 = uStack_270;
    uStack_20c = uStack_26c;
    uStack_1f8 = uStack_258;
    uStack_1f4 = uStack_254;
    uStack_200 = uStack_260;
    uStack_1fc = uStack_25c;
    lStack_1e8 = lStack_248;
    uStack_1f0 = uStack_250;
    uStack_1ec = uStack_24c;
    piVar1 = piStack_1e0;
    puVar11 = puStack_1d8;
    if ((puStack_1d8 != &uStack_1d0) &&
       (piVar1 = piVar14, puVar11 = &uStack_1d0, puStack_1d8 != (undefined8 *)0x0)) {
      _free(puStack_1d8[-1]);
    }
    puStack_1d8 = puVar11;
    piStack_1e0 = piVar1;
    puVar11 = (undefined8 *)((ulong)&uStack_280 | 4);
    if ((int)uStack_27c < 3) {
      *puStack_1d8 = *puStack_238;
      puStack_1d8[1] = puStack_238[1];
      uStack_280 = 0x42ff0000;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      *(undefined8 *)((long)puVar11 + 0x34) = 0;
      *(undefined8 *)((long)puVar11 + 0x2c) = 0;
      if (puStack_238 != &uStack_230) {
        _free(puStack_238[-1]);
      }
    }
    else {
      puStack_1d8 = puStack_238;
      piStack_1e0 = piStack_240;
      puStack_238 = &uStack_230;
      uStack_280 = 0x42ff0000;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      *(undefined8 *)((long)puVar11 + 0x34) = 0;
      *(undefined8 *)((long)puVar11 + 0x2c) = 0;
      piStack_240 = (int *)((ulong)&uStack_280 | 8);
    }
    _objc_release(lVar9);
    uStack_280 = 0x1010000;
    puStack_2d8 = &uStack_220;
    uStack_270 = 0;
    uStack_26c = 0;
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x2010000);
    uStack_2d0 = 0;
    uStack_278 = puStack_2d8;
    FUN_109ac9fc8(&uStack_280,&uStack_2e0,3,0);
    uStack_280 = 0x42ff0000;
    uStack_278._4_4_ = 0;
    uStack_270 = 0;
    uStack_27c = 0;
    uStack_278._0_4_ = 0;
    piVar14 = (int *)((ulong)&uStack_280 | 8);
    uStack_264 = 0;
    uStack_260 = 0;
    uStack_26c = 0;
    uStack_268 = 0;
    uStack_254 = 0;
    uStack_25c = 0;
    uStack_258 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    lVar9 = param_3;
    piStack_240 = piVar14;
    puStack_238 = &uStack_230;
    func_0x00010bf1cc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 != 0) {
      lVar9 = param_3;
      func_0x00010bf1cc20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 == 0) {
        puStack_298 = (undefined8 *)0x0;
        piStack_2a0 = (int *)0x0;
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        lStack_2a8 = 0;
        uStack_2b0 = 0;
        puStack_2d8 = (undefined4 *)0x0;
        uStack_2e0 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
      }
      else {
        func_0x00010c271ae0(&uStack_2e0,lVar9);
      }
      if (lStack_248 != 0) {
        piVar1 = (int *)(lStack_248 + 0x14);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(&uStack_280);
        }
      }
      if (0 < (int)uStack_27c) {
        lVar8 = 0;
        do {
          piStack_240[lVar8] = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)uStack_27c);
      }
      uStack_278._0_4_ = (int)puStack_2d8;
      uStack_278._4_4_ = (int)((ulong)puStack_2d8 >> 0x20);
      uStack_280 = (undefined4)uStack_2e0;
      uStack_268 = (undefined4)uStack_2c8;
      uStack_264 = (undefined4)((ulong)uStack_2c8 >> 0x20);
      uStack_270 = (undefined4)uStack_2d0;
      uStack_26c = (undefined4)((ulong)uStack_2d0 >> 0x20);
      uStack_258 = (undefined4)uStack_2b8;
      uStack_254 = (undefined4)((ulong)uStack_2b8 >> 0x20);
      uStack_260 = (undefined4)uStack_2c0;
      uStack_25c = (undefined4)((ulong)uStack_2c0 >> 0x20);
      lStack_248 = lStack_2a8;
      uStack_250 = (undefined4)uStack_2b0;
      uStack_24c = (undefined4)((ulong)uStack_2b0 >> 0x20);
      uStack_27c = uStack_2e0._4_4_;
      piVar1 = piStack_240;
      puVar11 = puStack_238;
      if ((puStack_238 != &uStack_230) &&
         (piVar1 = piVar14, puVar11 = &uStack_230, puStack_238 != (undefined8 *)0x0)) {
        _free(puStack_238[-1]);
      }
      puStack_238 = puVar11;
      piStack_240 = piVar1;
      puVar11 = (undefined8 *)((ulong)&uStack_2e0 | 4);
      bVar4 = (int)uStack_2e0._4_4_ < 3;
      if (bVar4) {
        *puStack_238 = *puStack_298;
        puStack_238[1] = puStack_298[1];
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x42ff0000);
        puVar11[1] = 0;
        *puVar11 = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        *(undefined8 *)((long)puVar11 + 0x34) = 0;
        *(undefined8 *)((long)puVar11 + 0x2c) = 0;
        if (puStack_298 != &uStack_290) {
          _free(puStack_298[-1]);
        }
      }
      else {
        piStack_240 = piStack_2a0;
        puStack_238 = puStack_298;
        puStack_298 = &uStack_290;
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x42ff0000);
        puVar11[1] = 0;
        *puVar11 = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        *(undefined8 *)((long)puVar11 + 0x34) = 0;
        *(undefined8 *)((long)puVar11 + 0x2c) = 0;
        piStack_2a0 = (int *)((ulong)&uStack_2e0 | 8);
      }
      _objc_release(lVar9);
    }
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    FUN_109189778(&uStack_2e0,auStack_1c0,param_4,&uStack_220,&uStack_2f8,0);
    uVar10 = uStack_2f0;
    if (-1 < (long)uStack_2e8) {
      uVar10 = uStack_2e8 >> 0x38;
    }
    if (uVar10 == 0) {
      if (lStack_1e8 != 0) {
        piVar14 = (int *)(lStack_1e8 + 0x14);
        do {
          iVar5 = *piVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(&uStack_220);
        }
      }
      lStack_1e8 = 0;
      uStack_208 = 0;
      uStack_204 = 0;
      uStack_210 = 0;
      uStack_20c = 0;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      if (0 < (int)uStack_21c) {
        lVar9 = 0;
        do {
          piStack_1e0[lVar9] = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)uStack_21c);
      }
      iVar5 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c296d80();
      if (iVar5 != 0) goto LAB_109144a98;
      uStack_310 = 0;
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_370 = 0x42ff0000;
      lStack_330 = (long)&uStack_36c + 4;
      uStack_364 = 0;
      uStack_360 = 0;
      uStack_36c = 0;
      uStack_354 = 0;
      uStack_350 = 0;
      uStack_35c = 0;
      uStack_358 = 0;
      uStack_344 = 0;
      uStack_34c = 0;
      uStack_348 = 0;
      lStack_338 = 0;
      uStack_340 = 0;
      uStack_33c = 0;
      uStack_320 = 0;
      uStack_318 = 0;
      puStack_328 = &uStack_320;
      uStack_88 = uVar2;
      if (CONCAT44(uStack_26c,uStack_270) == 0) {
LAB_109144d00:
        FUN_10918ab40(auStack_3d0,auStack_1c0,param_4,&uStack_2e0,param_5,&uStack_310);
        FUN_109143cc8(&uStack_370,auStack_3d0);
      }
      else {
        uVar10 = (ulong)uStack_27c;
        if ((int)uStack_27c < 3) {
          lVar9 = (long)uStack_278._4_4_ * (long)(int)uStack_278;
        }
        else {
          lVar9 = 1;
          piVar14 = piStack_240;
          do {
            lVar9 = lVar9 * *piVar14;
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 1;
          } while (uVar10 != 0);
        }
        if (lVar9 == 0) goto LAB_109144d00;
        FUN_10918dd18(auStack_3d0,auStack_1c0,param_4,&uStack_2e0,param_5,&uStack_280,&uStack_310);
        FUN_109143cc8(&uStack_370,auStack_3d0);
      }
      func_0x00010567aa40(auStack_3d0);
      uVar10 = uStack_308;
      if (-1 < (long)uStack_300) {
        uVar10 = uStack_300 >> 0x38;
      }
      if (uVar10 == 0) {
        puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfbaa80(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar7;
        func_0x00010bfe8a40(0x3ff0000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_retain(puVar12);
        _objc_release(puVar12);
      }
      else {
        puVar12 = (undefined *)0x0;
      }
      if (lStack_338 != 0) {
        piVar14 = (int *)(lStack_338 + 0x14);
        do {
          iVar5 = *piVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(&uStack_370);
        }
      }
      lStack_338 = 0;
      uStack_358 = 0;
      uStack_354 = 0;
      uStack_360 = 0;
      uStack_35c = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      uStack_350 = 0;
      uStack_34c = 0;
      if (0 < (int)uStack_36c) {
        lVar9 = 0;
        do {
          *(undefined4 *)(lStack_330 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)uStack_36c);
      }
      if (puStack_328 != &uStack_320 && puStack_328 != (undefined8 *)0x0) {
        _free(puStack_328[-1]);
      }
      if ((long)uStack_300 < 0) {
        __ZdlPv(uStack_310);
      }
    }
    else {
LAB_109144a98:
      puVar12 = (undefined *)0x0;
    }
    if (lStack_2a8 != 0) {
      piVar14 = (int *)(lStack_2a8 + 0x14);
      do {
        iVar5 = *piVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(&uStack_2e0);
      }
    }
    lStack_2a8 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    if (0 < (int)uStack_2e0._4_4_) {
      lVar9 = 0;
      do {
        piStack_2a0[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_2e0._4_4_);
    }
    if (puStack_298 != &uStack_290 && puStack_298 != (undefined8 *)0x0) {
      _free(puStack_298[-1]);
    }
    if ((long)uStack_2e8 < 0) {
      __ZdlPv(uStack_2f8);
    }
    if (lStack_248 != 0) {
      piVar14 = (int *)(lStack_248 + 0x14);
      do {
        iVar5 = *piVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(&uStack_280);
      }
    }
    lStack_248 = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_270 = 0;
    uStack_26c = 0;
    uStack_258 = 0;
    uStack_254 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    if (0 < (int)uStack_27c) {
      lVar9 = 0;
      do {
        piStack_240[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_27c);
    }
    if (puStack_238 != &uStack_230 && puStack_238 != (undefined8 *)0x0) {
      _free(puStack_238[-1]);
    }
    if (lStack_1e8 != 0) {
      piVar14 = (int *)(lStack_1e8 + 0x14);
      do {
        iVar5 = *piVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(&uStack_220);
      }
    }
    lStack_1e8 = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    uStack_210 = 0;
    uStack_20c = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    if (0 < (int)uStack_21c) {
      lVar9 = 0;
      do {
        piStack_1e0[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_21c);
    }
    if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
      _free(puStack_1d8[-1]);
    }
    FUN_109145158(auStack_1c0);
  }
  else {
    if (lVar9 == -0x6d8b416a) {
      uVar13 = 1;
      goto LAB_109144654;
    }
    if (lVar9 == -0x872053b) {
      uVar13 = 2;
      goto LAB_109144654;
    }
    puVar12 = (undefined *)0x0;
  }
  _objc_release(lVar6);
LAB_109144c20:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 109144f50; end: 109144faf; +[SCArSegmentationImageGenerator _getDeviceMode] */

undefined4 FUN_109144f50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07e1c0();
  _objc_release(puVar1);
  uVar3 = 0;
  if ((int)puVar2 == 0) {
    uVar3 = 2;
  }
  return uVar3;
}



/* Entry: 109144fb0; end: 10914502f; +[SCArSegmentationImageGenerator _getProcessingSizeForInputSize:minDimension:] */

undefined1  [16] FUN_109144fb0(undefined8 param_1,undefined8 param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  if (iVar2 < iVar1) {
    uVar3 = (uint)(((float)(int)param_4 / (float)iVar2) * (float)iVar1);
    uVar4 = param_4;
    if ((uVar3 & 7) != 0) {
      uVar3 = (int)((float)(int)uVar3 / 8.0) << 3;
    }
  }
  else {
    uVar4 = (uint)(((float)(int)param_4 / (float)iVar1) * (float)iVar2);
    uVar3 = param_4;
    if ((uVar4 & 7) != 0) {
      uVar4 = (int)((float)(int)uVar4 / 8.0) << 3;
    }
  }
  auVar5._0_8_ = (double)(int)uVar3;
  auVar5._8_8_ = (double)(int)uVar4;
  return auVar5;
}



/* Entry: 109145030; end: 109145113; -[SCArSegmentationImageGenerator .cxx_destruct] */

void FUN_109145030(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  _objc_storeStrong(param_1 + 0xc0,0);
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  FUN_109145340(*(undefined8 *)(param_1 + 0x50));
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109145114; end: 109145157; -[SCArSegmentationImageGenerator .cxx_construct] */

void FUN_109145114(long param_1)

{
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 **)(param_1 + 0x48) = (undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(long *)(param_1 + 0xa0) = param_1 + 0x68;
  *(undefined8 **)(param_1 + 0xa8) = (undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



/* Entry: 109145158; end: 10914523f;  */

undefined8 * FUN_109145158(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_110ade0a0;
  if (param_1[0x22] != 0) {
    piVar1 = (int *)(param_1[0x22] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x1b);
    }
  }
  param_1[0x22] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  if (0 < *(int *)((long)param_1 + 0xdc)) {
    lVar6 = 0;
    lVar8 = param_1[0x23];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0xdc));
  }
  puVar7 = (undefined8 *)param_1[0x24];
  if (puVar7 != param_1 + 0x25 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  plVar5 = (long *)param_1[0x13];
  param_1[0x13] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  return param_1;
}



/* Entry: 109145240; end: 109145247;  */

void FUN_109145240(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109145244);
  (*pcVar1)();
}



/* Entry: 109145248; end: 10914533f;  */

long * FUN_109145248(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = param_1 + 1;
  plVar1 = (long *)*plVar2;
  do {
    plVar3 = plVar2;
    if (plVar1 == (long *)0x0) {
LAB_1091452ac:
      plVar1 = (long *)0x88;
      __Znwm();
      plVar1[4] = *param_3;
      *(undefined4 *)(plVar1 + 5) = 0x42ff0000;
      *(undefined8 *)((long)plVar1 + 0x34) = 0;
      *(undefined8 *)((long)plVar1 + 0x2c) = 0;
      *(undefined8 *)((long)plVar1 + 0x44) = 0;
      *(undefined8 *)((long)plVar1 + 0x3c) = 0;
      *(undefined8 *)((long)plVar1 + 0x54) = 0;
      *(undefined8 *)((long)plVar1 + 0x4c) = 0;
      plVar1[0xc] = 0;
      plVar1[0xb] = 0;
      plVar1[0xf] = 0;
      plVar1[0xd] = (long)(plVar1 + 6);
      plVar1[0xe] = (long)(plVar1 + 0xf);
      plVar1[0x10] = 0;
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = (long)plVar2;
      *plVar3 = (long)plVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x000107c27be4(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return plVar1;
    }
    while (plVar2 = plVar1, (ulong)plVar2[4] <= param_2) {
      if (param_2 <= (ulong)plVar2[4]) {
        return plVar2;
      }
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 1;
        goto LAB_1091452ac;
      }
    }
    plVar1 = (long *)*plVar2;
  } while( true );
}



/* Entry: 109145340; end: 1091453ff;  */

void FUN_109145340(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_109145340(*param_1);
    FUN_109145340(param_1[1]);
    if (param_1[0xc] != 0) {
      piVar1 = (int *)(param_1[0xc] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(param_1 + 5);
      }
    }
    param_1[0xc] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    if (0 < *(int *)((long)param_1 + 0x2c)) {
      lVar5 = 0;
      lVar7 = param_1[0xd];
      do {
        *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)((long)param_1 + 0x2c));
    }
    puVar6 = (undefined8 *)param_1[0xe];
    if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109145400; end: 109145727; -[SCGeoFilterAppearanceSetting initWithIsSponsored:isUpdatable:isBelowDrawingLayer:isAnimated:isFrameFilter:isActionmoji:isBitmoji:isFriendFilter:eligibleForNotification:isFromPostCaptureLensExplorer:isSnapchatPlusExclusive:autoStacking:unlockableContentType:unlockableCategory:unlockableAttributes:updateLabelPosition:sponsoredSlug:unlockableTrackInfo:dynamicFilterRefreshHint:dynamicFilterUpdatingMessage:filterPrompt:filterScore:eligibility:carouselGroup:carouselGlobalScoreList:attachment:debugInfo:] */

undefined8 *
FUN_109145400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined1 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain();
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puStack_80 = PTR_PTR_112700808;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9;
    *(undefined1 *)((long)puVar1 + 0xd) = param_10;
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 0xf) = param_11._1_1_;
    *(undefined1 *)(puVar1 + 2) = param_11._2_1_;
    *(undefined1 *)((long)puVar1 + 0x11) = param_11._3_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = param_12;
    puVar1[3] = param_13;
    puVar1[4] = param_14;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[0x12] = param_1;
    puVar1[0x13] = param_2;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_23;
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  return puVar1;
}



/* Entry: 109145728; end: 10914574b; -[SCGeoFilterAppearanceSetting copyWithZone:] */

undefined8 FUN_109145728(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10914574c; end: 1091458fb; -[SCGeoFilterAppearanceSetting hash] */

ulong * FUN_10914574c(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined4 *)(param_1 + 8);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar7 = CONCAT44((int)(uVar11 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar7 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar7)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_108 = (ulong)uVar2 & 0xff;
  uStack_100 = uVar7 >> 0x10 & 0xff;
  uStack_f8 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_f0 = (ulong)uVar9;
  uVar10 = *(undefined4 *)(param_1 + 0xc);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar7 = CONCAT44((int)(uVar11 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar7 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar7)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_e8 = (ulong)uVar2 & 0xff;
  uStack_e0 = uVar7 >> 0x10 & 0xff;
  uStack_d8 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_d0 = (ulong)uVar9;
  uStack_c8 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_c0 = (ulong)*(byte *)(param_1 + 0x11);
  uStack_b8 = (ulong)*(byte *)(param_1 + 0x12);
  uStack_b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_90 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x98) + *(ulong *)(param_1 + 0x98) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_88 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_68 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x68);
  uStack_48 = *(undefined8 *)(param_1 + 0x70);
  lStack_50 = -lVar1;
  if (-1 < lVar1) {
    lStack_50 = lVar1;
  }
  uStack_58 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uStack_38 = uVar4;
  func_0x00010bfde980();
  puVar5 = &uStack_108;
  uStack_30 = uVar3;
  func_0x000107c3191c(puVar5,0x1c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_109145b70:
    puVar8 = (ulong *)0x1;
  }
  else {
    puVar8 = (ulong *)0x0;
    if ((puVar5 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_109145b7c;
    puVar8 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar6 & 1) != 0) &&
         (((((char)puVar5[1] == (char)param_3[1] &&
            (*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9))) &&
           (*(char *)((long)puVar5 + 10) == *(char *)((long)param_3 + 10))) &&
          ((*(char *)((long)puVar5 + 0xb) == *(char *)((long)param_3 + 0xb) &&
           (*(char *)((long)puVar5 + 0xc) == *(char *)((long)param_3 + 0xc))))))) &&
        (*(char *)((long)puVar5 + 0xd) == *(char *)((long)param_3 + 0xd))) &&
       ((((*(char *)((long)puVar5 + 0xe) == *(char *)((long)param_3 + 0xe) &&
          (*(char *)((long)puVar5 + 0xf) == *(char *)((long)param_3 + 0xf))) &&
         (((char)puVar5[2] == (char)param_3[2] &&
          (((*(char *)((long)puVar5 + 0x11) == *(char *)((long)param_3 + 0x11) &&
            (*(char *)((long)puVar5 + 0x12) == *(char *)((long)param_3 + 0x12))) &&
           (puVar5[3] == param_3[3])))))) &&
        ((puVar5[4] == param_3[4] && (puVar5[0xd] == param_3[0xd])))))) {
      puVar8 = (ulong *)0x0;
      if (((double)puVar5[0x12] != (double)param_3[0x12]) ||
         ((double)puVar5[0x13] != (double)param_3[0x13])) goto LAB_109145b7c;
      uVar7 = puVar5[5];
      if (((((uVar7 == param_3[5]) || (func_0x00010c071ae0(), (int)uVar7 != 0)) &&
           ((uVar7 = puVar5[6], uVar7 == param_3[6] || (func_0x00010c071ae0(), (int)uVar7 != 0))))
          && (((uVar7 = puVar5[7], uVar7 == param_3[7] || (func_0x00010c071ae0(), (int)uVar7 != 0))
              && ((uVar7 = puVar5[8], uVar7 == param_3[8] ||
                  (func_0x00010c071ae0(), (int)uVar7 != 0)))))) &&
         (((((uVar7 = puVar5[9], uVar7 == param_3[9] || (func_0x00010c071ae0(), (int)uVar7 != 0)) &&
            ((uVar7 = puVar5[10], uVar7 == param_3[10] || (func_0x00010c071ae0(), (int)uVar7 != 0)))
            ) && ((uVar7 = puVar5[0xb], uVar7 == param_3[0xb] ||
                  (func_0x00010c071ae0(), (int)uVar7 != 0)))) &&
          ((((uVar7 = puVar5[0xc], uVar7 == param_3[0xc] || (func_0x00010c071ae0(), (int)uVar7 != 0)
             ) && (((uVar7 = puVar5[0xe], uVar7 == param_3[0xe] ||
                    (func_0x00010c071ae0(), (int)uVar7 != 0)) &&
                   ((uVar7 = puVar5[0xf], uVar7 == param_3[0xf] ||
                    (func_0x00010c071ae0(), (int)uVar7 != 0)))))) &&
           ((uVar7 = puVar5[0x10], uVar7 == param_3[0x10] ||
            (func_0x00010c071ae0(), (int)uVar7 != 0)))))))) {
        puVar8 = (ulong *)puVar5[0x11];
        if (puVar8 != (ulong *)param_3[0x11]) {
          func_0x00010c071ae0();
          goto LAB_109145b7c;
        }
        goto LAB_109145b70;
      }
    }
    puVar8 = (ulong *)0x0;
  }
LAB_109145b7c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1091458fc; end: 109145b97; -[SCGeoFilterAppearanceSetting isEqual:] */

long FUN_1091458fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109145b70:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109145b7c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
        (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
       ((((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
          (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))) &&
         ((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
          (((*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11) &&
            (*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12))) &&
           (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))))) &&
        ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
         (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x90) != *(double *)(param_3 + 0x90)) ||
         (*(double *)(param_1 + 0x98) != *(double *)(param_3 + 0x98))) goto LAB_109145b7c;
      lVar3 = *(long *)(param_1 + 0x28);
      if (((((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
           ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          (((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
           ((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
         (((((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
           ((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          ((((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            (((lVar3 = *(long *)(param_1 + 0x70), lVar3 == *(long *)(param_3 + 0x70) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             ((lVar3 = *(long *)(param_1 + 0x78), lVar3 == *(long *)(param_3 + 0x78) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
           ((lVar3 = *(long *)(param_1 + 0x80), lVar3 == *(long *)(param_3 + 0x80) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) {
        lVar3 = *(long *)(param_1 + 0x88);
        if (lVar3 != *(long *)(param_3 + 0x88)) {
          func_0x00010c071ae0();
          goto LAB_109145b7c;
        }
        goto LAB_109145b70;
      }
    }
    lVar3 = 0;
  }
LAB_109145b7c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109145b98; end: 109145b9f; -[SCGeoFilterAppearanceSetting isSponsored] */

undefined1 FUN_109145b98(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109145ba0; end: 109145ba7; -[SCGeoFilterAppearanceSetting isUpdatable] */

undefined1 FUN_109145ba0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 109145ba8; end: 109145baf; -[SCGeoFilterAppearanceSetting isBelowDrawingLayer] */

undefined1 FUN_109145ba8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 109145bb0; end: 109145bb7; -[SCGeoFilterAppearanceSetting isAnimated] */

undefined1 FUN_109145bb0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 109145bb8; end: 109145bbf; -[SCGeoFilterAppearanceSetting isFrameFilter] */

undefined1 FUN_109145bb8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 109145bc0; end: 109145bc7; -[SCGeoFilterAppearanceSetting isActionmoji] */

undefined1 FUN_109145bc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 109145bc8; end: 109145bcf; -[SCGeoFilterAppearanceSetting isBitmoji] */

undefined1 FUN_109145bc8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 109145bd0; end: 109145bd7; -[SCGeoFilterAppearanceSetting isFriendFilter] */

undefined1 FUN_109145bd0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 109145bd8; end: 109145bdf; -[SCGeoFilterAppearanceSetting eligibleForNotification] */

undefined1 FUN_109145bd8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 109145be0; end: 109145be7; -[SCGeoFilterAppearanceSetting isFromPostCaptureLensExplorer] */

undefined1 FUN_109145be0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 109145be8; end: 109145bef; -[SCGeoFilterAppearanceSetting isSnapchatPlusExclusive] */

undefined1 FUN_109145be8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 109145bf0; end: 109145bf7; -[SCGeoFilterAppearanceSetting autoStacking] */

undefined8 FUN_109145bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109145bf8; end: 109145bff; -[SCGeoFilterAppearanceSetting unlockableContentType] */

undefined8 FUN_109145bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109145c00; end: 109145c07; -[SCGeoFilterAppearanceSetting unlockableCategory] */

undefined8 FUN_109145c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109145c08; end: 109145c0f; -[SCGeoFilterAppearanceSetting unlockableAttributes] */

undefined8 FUN_109145c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109145c10; end: 109145c17; -[SCGeoFilterAppearanceSetting updateLabelPosition] */

undefined1  [16] FUN_109145c10(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x90);
}



/* Entry: 109145c18; end: 109145c1f; -[SCGeoFilterAppearanceSetting sponsoredSlug] */

undefined8 FUN_109145c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109145c20; end: 109145c27; -[SCGeoFilterAppearanceSetting unlockableTrackInfo] */

undefined8 FUN_109145c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109145c28; end: 109145c2f; -[SCGeoFilterAppearanceSetting dynamicFilterRefreshHint] */

undefined8 FUN_109145c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 109145c30; end: 109145c37; -[SCGeoFilterAppearanceSetting dynamicFilterUpdatingMessage] */

undefined8 FUN_109145c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109145c38; end: 109145c3f; -[SCGeoFilterAppearanceSetting filterPrompt] */

undefined8 FUN_109145c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109145c40; end: 109145c47; -[SCGeoFilterAppearanceSetting filterScore] */

undefined8 FUN_109145c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 109145c48; end: 109145c4f; -[SCGeoFilterAppearanceSetting eligibility] */

undefined8 FUN_109145c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 109145c50; end: 109145c57; -[SCGeoFilterAppearanceSetting carouselGroup] */

undefined8 FUN_109145c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 109145c58; end: 109145c5f; -[SCGeoFilterAppearanceSetting carouselGlobalScoreList] */

undefined8 FUN_109145c58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 109145c60; end: 109145c67; -[SCGeoFilterAppearanceSetting attachment] */

undefined8 FUN_109145c60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 109145c68; end: 109145c6f; -[SCGeoFilterAppearanceSetting debugInfo] */

undefined8 FUN_109145c68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 109145c70; end: 109145d17; -[SCGeoFilterAppearanceSetting .cxx_destruct] */

void FUN_109145c70(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 109145d18; end: 109145d33; +[SCGeoFilterAppearanceSettingBuilder geoFilterAppearanceSetting] */

void FUN_109145d18(void)

{
  _objc_alloc_init(PTR_PTR_1126dd7d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109145d34; end: 109146323; +[SCGeoFilterAppearanceSettingBuilder geoFilterAppearanceSettingFromExistingGeoFilterAppearanceSetting:] */

void FUN_109145d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined *puVar40;
  
  puVar1 = PTR_PTR_1126dd7d8;
  _objc_retain(param_3);
  func_0x00010bfc1140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c07f200(param_3);
  puVar3 = puVar1;
  func_0x00010c2b1640(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0822e0(param_3);
  puVar4 = puVar3;
  func_0x00010c2b1960(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c06d220(param_3);
  puVar5 = puVar4;
  func_0x00010c2b0280(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c06c000(param_3);
  puVar6 = puVar5;
  func_0x00010c2b01a0(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c073640(param_3);
  puVar7 = puVar6;
  func_0x00010c2b0860(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c06b660(param_3);
  puVar8 = puVar7;
  func_0x00010c2b00e0(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c06d3a0(param_3);
  puVar9 = puVar8;
  func_0x00010c2b02a0(puVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c073720(param_3);
  puVar10 = puVar9;
  func_0x00010c2b0880(puVar9,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf8d420(param_3);
  puVar11 = puVar10;
  func_0x00010c2acd00(puVar10,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c073cc0(param_3);
  puVar12 = puVar11;
  func_0x00010c2b0900(puVar11,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c07eda0(param_3);
  puVar13 = puVar12;
  func_0x00010c2b1600(puVar12,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf11e00(param_3);
  puVar14 = puVar13;
  func_0x00010c2a8d60(puVar13,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c280f40(param_3);
  puVar15 = puVar14;
  func_0x00010c2bbea0(puVar14,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c280f20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c2bbe80(puVar15,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c280f00();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2bbe60(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286da0(param_3);
  puVar19 = puVar18;
  func_0x00010c2bc0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c24a620();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2b9cc0(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2bbf60(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010bf8b880();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010c2acb80(puVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010bf8b8a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010c2acba0(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010bfae260();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010c2ae000(puVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010bfae360();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar29;
  func_0x00010c2ae080(puVar29,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_3;
  func_0x00010bf8d300(param_3);
  puVar33 = puVar31;
  func_0x00010c2accc0(puVar31,param_2,uVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_3;
  func_0x00010bf32760(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar33;
  func_0x00010c2aa300(puVar33,param_2,uVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = param_3;
  func_0x00010bf32720(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar34;
  func_0x00010c2aa2e0(puVar34,param_2,uVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_3;
  func_0x00010bf0cb60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar36;
  func_0x00010c2a8880(puVar36,param_2,uVar37);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = param_3;
  func_0x00010bf66200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar40 = puVar38;
  func_0x00010c2abd20(puVar38,param_2,uVar39);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar39);
  _objc_release(puVar38);
  _objc_release(uVar37);
  _objc_release(puVar36);
  _objc_release(uVar35);
  _objc_release(puVar34);
  _objc_release(uVar32);
  _objc_release(puVar33);
  _objc_release(puVar31);
  _objc_release(uVar30);
  _objc_release(puVar29);
  _objc_release(uVar28);
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar2);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar40);
  return;
}



/* Entry: 109146324; end: 1091463c3; -[SCGeoFilterAppearanceSettingBuilder build] */

void FUN_109146324(long param_1)

{
  _objc_alloc(PTR_PTR_1126dd748);
  func_0x00010c01f780(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091463c4; end: 1091463cb; -[SCGeoFilterAppearanceSettingBuilder withIsSponsored:] */

void FUN_1091463c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1091463cc; end: 1091463d3; -[SCGeoFilterAppearanceSettingBuilder withIsUpdatable:] */

void FUN_1091463cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1091463d4; end: 1091463db; -[SCGeoFilterAppearanceSettingBuilder withIsBelowDrawingLayer:] */

void FUN_1091463d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 1091463dc; end: 1091463e3; -[SCGeoFilterAppearanceSettingBuilder withIsAnimated:] */

void FUN_1091463dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 1091463e4; end: 1091463eb; -[SCGeoFilterAppearanceSettingBuilder withIsFrameFilter:] */

void FUN_1091463e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 1091463ec; end: 1091463f3; -[SCGeoFilterAppearanceSettingBuilder withIsActionmoji:] */

void FUN_1091463ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 1091463f4; end: 1091463fb; -[SCGeoFilterAppearanceSettingBuilder withIsBitmoji:] */

void FUN_1091463f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 1091463fc; end: 109146403; -[SCGeoFilterAppearanceSettingBuilder withIsFriendFilter:] */

void FUN_1091463fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf) = param_3;
  return;
}



/* Entry: 109146404; end: 10914640b; -[SCGeoFilterAppearanceSettingBuilder withEligibleForNotification:] */

void FUN_109146404(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10914640c; end: 109146413; -[SCGeoFilterAppearanceSettingBuilder withIsFromPostCaptureLensExplorer:] */

void FUN_10914640c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 109146414; end: 10914641b; -[SCGeoFilterAppearanceSettingBuilder withIsSnapchatPlusExclusive:] */

void FUN_109146414(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 10914641c; end: 109146423; -[SCGeoFilterAppearanceSettingBuilder withAutoStacking:] */

void FUN_10914641c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 109146424; end: 10914642b; -[SCGeoFilterAppearanceSettingBuilder withUnlockableContentType:] */

void FUN_109146424(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10914642c; end: 109146463; -[SCGeoFilterAppearanceSettingBuilder withUnlockableCategory:] */

long FUN_10914642c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109146464; end: 10914649b; -[SCGeoFilterAppearanceSettingBuilder withUnlockableAttributes:] */

long FUN_109146464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10914649c; end: 1091464a3; -[SCGeoFilterAppearanceSettingBuilder withUpdateLabelPosition:] */

void FUN_10914649c(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x38) = param_1;
  *(undefined8 *)(param_3 + 0x40) = param_2;
  return;
}



/* Entry: 1091464a4; end: 1091464db; -[SCGeoFilterAppearanceSettingBuilder withSponsoredSlug:] */

long FUN_1091464a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1091464dc; end: 109146513; -[SCGeoFilterAppearanceSettingBuilder withUnlockableTrackInfo:] */

long FUN_1091464dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109146514; end: 10914654b; -[SCGeoFilterAppearanceSettingBuilder withDynamicFilterRefreshHint:] */

long FUN_109146514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10914654c; end: 109146583; -[SCGeoFilterAppearanceSettingBuilder withDynamicFilterUpdatingMessage:] */

long FUN_10914654c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109146584; end: 1091465bb; -[SCGeoFilterAppearanceSettingBuilder withFilterPrompt:] */

long FUN_109146584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1091465bc; end: 1091465f3; -[SCGeoFilterAppearanceSettingBuilder withFilterScore:] */

long FUN_1091465bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1091465f4; end: 1091465fb; -[SCGeoFilterAppearanceSettingBuilder withEligibility:] */

void FUN_1091465f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 1091465fc; end: 109146633; -[SCGeoFilterAppearanceSettingBuilder withCarouselGroup:] */

long FUN_1091465fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109146634; end: 10914666b; -[SCGeoFilterAppearanceSettingBuilder withCarouselGlobalScoreList:] */

long FUN_109146634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10914666c; end: 1091466a3; -[SCGeoFilterAppearanceSettingBuilder withAttachment:] */

long FUN_10914666c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1091466a4; end: 1091466db; -[SCGeoFilterAppearanceSettingBuilder withDebugInfo:] */

long FUN_1091466a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1091466dc; end: 109146783; -[SCGeoFilterAppearanceSettingBuilder .cxx_destruct] */

void FUN_1091466dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 109146784; end: 109146933; +[SCSponsoredSlug defaultValues] */

void FUN_109146784(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730af8 != -1) {
    func_0x000107c27d9c(0x113730af8,&PTR___NSConcreteGlobalBlock_110ade0c0);
  }
  uVar1 = uRam0000000113730af0;
  _objc_retain(uRam0000000113730af0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109146934; end: 109146b87; +[SCSponsoredSlug adSlugDefaultValuesWithConfigProvider:] */

void FUN_109146934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = lRam0000000113730b08;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1091469f0;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar3 = param_3;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x113730b08,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar1 = uRam0000000113730b00;
  _objc_retain(uRam0000000113730b00);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109146b88; end: 109146bd7; -[SCSponsoredSlug init] */

undefined8 FUN_109146b88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd750;
  func_0x00010bf6a9a0(PTR_PTR_1126dd750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 109146bd8; end: 109146cf3; -[SCSponsoredSlug initWithDictionary:] */

undefined1 * FUN_109146bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112700810;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dd750;
    func_0x00010bf6a9a0(PTR_PTR_1126dd750);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f4360(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar4 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f4360(puVar1);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f4640(puVar1);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109146cf4; end: 109146db3; -[SCSponsoredSlug initWithParameters:] */

undefined1 * FUN_109146cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700810;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dd750;
    func_0x00010bf6a9a0(PTR_PTR_1126dd750);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f4360(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c0f4360(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109146db4; end: 109147023; -[SCSponsoredSlug copyWithZone:] */

long FUN_109146db4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_3;
  _objc_opt_class();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  if (lVar1 != 0) {
    func_0x00010bfb4000(param_3);
    *(undefined8 *)(lVar1 + 0x10) = param_1;
    lVar2 = param_3;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52240();
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    *(long *)(lVar1 + 0x18) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf8ac20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52240();
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    *(long *)(lVar1 + 0x20) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    func_0x00010bf8ac40(param_3);
    *(undefined8 *)(lVar1 + 0x70) = param_1;
    *(undefined8 *)(lVar1 + 0x78) = param_2;
    lVar2 = param_3;
    func_0x00010bfe3c20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52240();
    uVar4 = *(undefined8 *)(lVar1 + 0x48);
    *(long *)(lVar1 + 0x48) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c2a0740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52240();
    uVar4 = *(undefined8 *)(lVar1 + 0x50);
    *(long *)(lVar1 + 0x50) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c104260();
    *(long *)(lVar1 + 0x58) = lVar2;
    lVar2 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52240();
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    *(long *)(lVar1 + 0x28) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c26f0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52240();
    uVar4 = *(undefined8 *)(lVar1 + 0x38);
    *(long *)(lVar1 + 0x38) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c24aae0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52240();
    uVar4 = *(undefined8 *)(lVar1 + 0x60);
    *(long *)(lVar1 + 0x60) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c24a240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52240();
    uVar4 = *(undefined8 *)(lVar1 + 0x68);
    *(long *)(lVar1 + 0x68) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0b5480();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52240();
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    *(long *)(lVar1 + 0x30) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    func_0x00010c0b54a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf52240();
    uVar4 = *(undefined8 *)(lVar1 + 0x40);
    *(long *)(lVar1 + 0x40) = lVar2;
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  return lVar1;
}



/* Entry: 109147024; end: 1091472a3; -[SCSponsoredSlug initWithCoder:] */

undefined1 *
FUN_109147024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112700810;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf4bc00();
    dVar4 = 12.0;
    if ((int)uVar2 != 0) {
      func_0x00010bf66e40(param_5);
      dVar4 = (double)SUB84(dVar4,0);
    }
    *(double *)((long)puVar1 + 0x10) = dVar4;
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc10a0();
    *(double *)((long)puVar1 + 0x70) = dVar4;
    *(undefined8 *)((long)puVar1 + 0x78) = param_2;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1091472a4; end: 109147557; -[SCSponsoredSlug encodeWithCoder:] */

void FUN_1091472a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  _objc_retain(param_4);
  func_0x00010bfb4000(param_2);
  func_0x00010bf92ee0((float)(double)CONCAT44(uVar4,uVar3),param_4,param_3,
                      &PTR____CFConstantStringClassReference_110f246f8);
  uVar1 = param_2;
  func_0x00010c26b920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,uVar1,&PTR____CFConstantStringClassReference_110f24718);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf8ac20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,uVar1,&PTR____CFConstantStringClassReference_110f24618);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010bf8ac40(param_2);
  func_0x00010c2971c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,puVar2,&PTR____CFConstantStringClassReference_110f24578);
  _objc_release(puVar2);
  uVar1 = param_2;
  func_0x00010bfe3c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,uVar1,&PTR____CFConstantStringClassReference_110f244b8);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c2a0740(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,uVar1,&PTR____CFConstantStringClassReference_110f244f8);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_2;
  func_0x00010c104260(param_2);
  func_0x00010c0df780(puVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,puVar2,&PTR____CFConstantStringClassReference_110daf598);
  _objc_release(puVar2);
  uVar1 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,uVar1,&PTR____CFConstantStringClassReference_110dbf1d8);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26f0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,uVar1,&PTR____CFConstantStringClassReference_110f23c78);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c24aae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,uVar1,&PTR____CFConstantStringClassReference_110f24478);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c24a240(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,uVar1,&PTR____CFConstantStringClassReference_110f24738);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0b5480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,uVar1,&PTR____CFConstantStringClassReference_110f24538);
  _objc_release(uVar1);
  func_0x00010c0b54a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,param_2,&PTR____CFConstantStringClassReference_110f24558);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109147558; end: 10914779b; -[SCSponsoredSlug parseStyle:] */

void FUN_109147558(float param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  float fVar9;
  double dVar10;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f24578);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0e00e0(lVar1,param_3,&PTR____CFConstantStringClassReference_110dbf2b8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f245b8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110dbf658);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f24618);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010bfb2c80(lVar5);
    dVar10 = (double)param_1;
    *(double *)(param_2 + 0x10) = dVar10;
    puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb4000(param_2);
    fVar9 = SUB84(dVar10,0);
    func_0x00010c266f40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 8);
    *(undefined **)(param_2 + 8) = puVar7;
    _objc_release(uVar8);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf414c0(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    *(undefined **)(param_2 + 0x18) = puVar7;
    _objc_release(uVar8);
    func_0x00010bfb2c80(lVar3);
    dVar10 = (double)fVar9;
    func_0x00010bfb2c80(lVar4);
    *(double *)(param_2 + 0x70) = dVar10;
    *(double *)(param_2 + 0x78) = (double)fVar9;
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf414c0(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    *(undefined **)(param_2 + 0x20) = puVar7;
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10914779c; end: 109147bdb; -[SCSponsoredSlug parseParameters:] */

void FUN_10914779c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) goto LAB_109147bb4;
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110daf598);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
    func_0x00010c0720c0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110f24758);
    if ((int)ppuVar3 == 0) {
      ppuVar3 = ppuVar2;
      func_0x00010c0720c0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110f24778);
      if ((int)ppuVar3 == 0) {
        ppuVar3 = ppuVar2;
        func_0x00010c0720c0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110f24798);
        if ((int)ppuVar3 == 0) {
          ppuVar3 = ppuVar2;
          func_0x00010c0720c0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110f247b8);
          if ((int)ppuVar3 == 0) {
            ppuVar3 = ppuVar2;
            func_0x00010c0720c0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110f247d8);
            if ((int)ppuVar3 == 0) {
              ppuVar3 = ppuVar2;
              func_0x00010c0720c0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110f24498);
              if ((int)ppuVar3 == 0) {
                ppuVar3 = ppuVar2;
                func_0x00010c0720c0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110f247f8
                                   );
                if ((int)ppuVar3 == 0) {
                  ppuVar3 = ppuVar2;
                  func_0x00010c0720c0(ppuVar2,param_2,
                                      &PTR____CFConstantStringClassReference_110f24818);
                  if ((int)ppuVar3 == 0) {
                    ppuVar3 = ppuVar2;
                    func_0x00010c0720c0(ppuVar2,param_2,
                                        &PTR____CFConstantStringClassReference_110f24838);
                    if ((int)ppuVar3 == 0) {
                      *(undefined8 *)(param_1 + 0x58) = 0;
                      goto LAB_1091478e8;
                    }
                    uVar9 = 9;
                  }
                  else {
                    uVar9 = 8;
                  }
                }
                else {
                  uVar9 = 7;
                }
              }
              else {
                uVar9 = 6;
              }
            }
            else {
              uVar9 = 5;
            }
          }
          else {
            uVar9 = 4;
          }
        }
        else {
          uVar9 = 3;
        }
      }
      else {
        uVar9 = 2;
      }
    }
    else {
      uVar9 = 1;
    }
    *(undefined8 *)(param_1 + 0x58) = uVar9;
  }
LAB_1091478e8:
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f244b8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar4 = ppuVar3;
    func_0x00010c25cfc0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110f1fd58,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar5;
    _objc_release(uVar9);
    _objc_release(ppuVar4);
  }
  ppuVar4 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f244f8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar6 = ppuVar4;
    func_0x00010c25cfc0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110f1fd58,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar5;
    _objc_release(uVar9);
    _objc_release(ppuVar6);
  }
  ppuVar6 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f23c78);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (ppuVar6 != (undefined **)0x0) {
    func_0x00010bfb2c80(ppuVar6);
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar5;
    _objc_release(uVar9);
  }
  ppuVar7 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf1d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar7 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf1d8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    *(undefined ***)(param_1 + 0x28) = ppuVar7;
    _objc_release(uVar9);
  }
  ppuVar7 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f24538);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar7 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f24538);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    *(undefined ***)(param_1 + 0x30) = ppuVar7;
    _objc_release(uVar9);
  }
  ppuVar7 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f24558);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (ppuVar7 != (undefined **)0x0) {
    func_0x00010bfb2c80(ppuVar7);
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar5;
    _objc_release(uVar9);
  }
  ppuVar8 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f24478);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar1 = ppuVar8;
  }
  _objc_retain(ppuVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  *(undefined ***)(param_1 + 0x60) = ppuVar1;
  _objc_release(uVar9);
  _objc_release(ppuVar8);
  ppuVar8 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f24738);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar1 = ppuVar8;
  }
  _objc_retain(ppuVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  *(undefined ***)(param_1 + 0x68) = ppuVar1;
  _objc_release(uVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
LAB_109147bb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109147bdc; end: 109147c3b; -[SCSponsoredSlug font] */

void FUN_109147bdc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    func_0x00010bfb4000();
    func_0x00010c266f40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 109147c3c; end: 109147c3f; -[SCSponsoredSlug didDecodeObject] */

void FUN_109147c3c(void)

{
  return;
}



/* Entry: 109147c40; end: 109147c43; -[SCSponsoredSlug willEncodeObject] */

void FUN_109147c40(void)

{
  return;
}



/* Entry: 109147c44; end: 109148133; -[SCSponsoredSlug isEqual:] */

bool FUN_109147c44(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_5);
  if (param_3 == param_5) {
    bVar1 = true;
    goto LAB_109147cc4;
  }
  lVar2 = param_3;
  _objc_opt_class(param_3);
  lVar3 = param_5;
  func_0x00010c077980(param_5,param_4,lVar2);
  if ((int)lVar3 == 0) {
    bVar1 = false;
    goto LAB_109147cc4;
  }
  _objc_retain(param_5);
  dVar5 = *(double *)(param_3 + 0x10);
  func_0x00010bfb4000(param_5);
  if (dVar5 == param_1) {
    lVar3 = *(long *)(param_3 + 0x18);
    lVar2 = param_5;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == lVar2) {
      _objc_release(lVar2);
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + 0x18);
      lVar3 = param_5;
      func_0x00010c26b920(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071c60(uVar4,param_4,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((int)uVar4 == 0) goto LAB_109147ca8;
    }
    lVar3 = *(long *)(param_3 + 0x20);
    lVar2 = param_5;
    func_0x00010bf8ac20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == lVar2) {
      _objc_release(lVar2);
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      lVar3 = param_5;
      func_0x00010bf8ac20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071c60(uVar4,param_4,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((int)uVar4 == 0) goto LAB_109147ca8;
    }
    func_0x00010bf8ac40(param_5);
    bVar1 = false;
    if ((*(double *)(param_3 + 0x70) == param_1) && (*(double *)(param_3 + 0x78) == param_2)) {
      lVar3 = *(long *)(param_3 + 0x28);
      lVar2 = param_5;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == lVar2) {
        _objc_release(lVar2);
      }
      else {
        uVar4 = *(undefined8 *)(param_3 + 0x28);
        lVar3 = param_5;
        func_0x00010c26b700(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(uVar4,param_4,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)uVar4 == 0) goto LAB_109147ca8;
      }
      lVar3 = *(long *)(param_3 + 0x30);
      lVar2 = param_5;
      func_0x00010c0b5480();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == lVar2) {
        _objc_release(lVar2);
      }
      else {
        uVar4 = *(undefined8 *)(param_3 + 0x30);
        lVar3 = param_5;
        func_0x00010c0b5480(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(uVar4,param_4,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)uVar4 == 0) goto LAB_109147ca8;
      }
      lVar3 = *(long *)(param_3 + 0x60);
      lVar2 = param_5;
      func_0x00010c24aae0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == lVar2) {
        _objc_release(lVar2);
      }
      else {
        uVar4 = *(undefined8 *)(param_3 + 0x60);
        lVar3 = param_5;
        func_0x00010c24aae0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(uVar4,param_4,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)uVar4 == 0) goto LAB_109147ca8;
      }
      lVar3 = *(long *)(param_3 + 0x68);
      lVar2 = param_5;
      func_0x00010c24a240();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == lVar2) {
        _objc_release(lVar2);
      }
      else {
        uVar4 = *(undefined8 *)(param_3 + 0x68);
        lVar3 = param_5;
        func_0x00010c24a240(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(uVar4,param_4,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)uVar4 == 0) goto LAB_109147ca8;
      }
      lVar3 = *(long *)(param_3 + 0x38);
      lVar2 = param_5;
      func_0x00010c26f0e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == lVar2) {
        _objc_release(lVar2);
      }
      else {
        uVar4 = *(undefined8 *)(param_3 + 0x38);
        lVar3 = param_5;
        func_0x00010c26f0e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071f40(uVar4,param_4,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)uVar4 == 0) goto LAB_109147ca8;
      }
      lVar3 = *(long *)(param_3 + 0x40);
      lVar2 = param_5;
      func_0x00010c0b54a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == lVar2) {
        _objc_release(lVar2);
      }
      else {
        uVar4 = *(undefined8 *)(param_3 + 0x40);
        lVar3 = param_5;
        func_0x00010c0b54a0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071f40(uVar4,param_4,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)uVar4 == 0) goto LAB_109147ca8;
      }
      lVar3 = *(long *)(param_3 + 0x48);
      lVar2 = param_5;
      func_0x00010bfe3c20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == lVar2) {
        _objc_release(lVar2);
      }
      else {
        uVar4 = *(undefined8 *)(param_3 + 0x48);
        lVar3 = param_5;
        func_0x00010bfe3c20(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071f40(uVar4,param_4,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)uVar4 == 0) goto LAB_109147ca8;
      }
      lVar3 = *(long *)(param_3 + 0x50);
      lVar2 = param_5;
      func_0x00010c2a0740();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == lVar2) {
        _objc_release(lVar2);
      }
      else {
        uVar4 = *(undefined8 *)(param_3 + 0x50);
        lVar3 = param_5;
        func_0x00010c2a0740(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071f40(uVar4,param_4,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)uVar4 == 0) goto LAB_109147ca8;
      }
      lVar3 = *(long *)(param_3 + 0x58);
      lVar2 = param_5;
      func_0x00010c104260(param_5);
      bVar1 = lVar3 == lVar2;
    }
  }
  else {
LAB_109147ca8:
    bVar1 = false;
  }
  _objc_release(param_5);
LAB_109147cc4:
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 109148134; end: 109148257; -[SCSponsoredSlug hash] */

ulong FUN_109148134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  ulong auStack_98 [13];
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (ulong)*(double *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  auStack_98[1] = uVar1;
  func_0x00010bfde980();
  auVar6._0_8_ = (long)*(double *)(param_1 + 0x70);
  auVar6._8_8_ = (long)*(double *)(param_1 + 0x78);
  auVar6 = NEON_ext(auVar6,auVar6,8,1);
  auStack_98[4] = auVar6._8_8_;
  auStack_98[3] = auVar6._0_8_;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  auStack_98[2] = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  auStack_98[5] = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  auStack_98[6] = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  auStack_98[7] = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  auStack_98[8] = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  auStack_98[9] = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  auStack_98[10] = uVar2;
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x50);
  auStack_98[0xb] = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  auStack_98[0xc] = lVar3;
  lVar4 = 8;
  do {
    uVar5 = *(ulong *)((long)auStack_98 + lVar4) | uVar5 << 0x20;
    uVar5 = ~uVar5 + uVar5 * 0x40000;
    uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
    uVar5 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
    uVar5 = uVar5 ^ uVar5 >> 0x16;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar5 = *(ulong *)(lVar3 + 8);
  *(undefined8 *)(lVar3 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return uVar5;
}


