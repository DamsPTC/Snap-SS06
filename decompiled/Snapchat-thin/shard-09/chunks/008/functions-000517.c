/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10716c950; end: 10716caff; -[SCPreviewSnapSaver saveSnapToSnapAlbumWithPreview:saveSessionId:snapId:location:embeddedMetadata:exportPolicy:watermarkProfile:watermarkLayout:loggingParameters:exportCompletion:saveCompletion:] */

void FUN_10716c950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075080();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010be9a400(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_11,
                        param_12,param_13);
  }
  else {
    func_0x00010be992a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12,param_13);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10716cb00; end: 10716cf93; -[SCPreviewSnapSaver _saveImageSnapWithPreview:saveSessionId:snapId:location:embeddedMetadata:exportPolicy:watermarkProfile:watermarkLayout:loggingParameters:exportCompletion:saveCompletion:] */

void FUN_10716cb00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  uVar1 = param_3;
  func_0x00010bfd4160();
  if ((int)uVar1 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250660();
    _objc_release(uVar1);
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x3032000000;
    pcStack_e8 = FUN_10716cfd4;
    uStack_e0 = 0x10716cfe4;
    _objc_retain(param_1);
    uVar1 = param_3;
    lStack_d8 = param_1;
    func_0x00010c13b420(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf9d440();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_13);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_12);
    _objc_retain(param_14);
    func_0x00010bfe9420(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_14);
    _objc_release(param_12);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_13);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(lStack_d8);
  }
  else {
    uVar1 = param_3;
    func_0x00010c13b420();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf9d440();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10716cf94;
    puStack_b8 = &UNK_1109905a8;
    lStack_b0 = param_1;
    _objc_retain(param_4);
    uStack_a8 = param_4;
    _objc_retain(param_5);
    uStack_a0 = param_5;
    _objc_retain(param_6);
    uStack_98 = param_6;
    _objc_retain(param_8);
    uStack_90 = param_8;
    _objc_retain(param_9);
    uStack_88 = param_9;
    _objc_retain(param_12);
    uStack_80 = param_12;
    _objc_retain(param_13);
    uStack_78 = param_13;
    _objc_retain(param_14);
    uStack_70 = param_14;
    func_0x00010c29a0e0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10716cf94; end: 10716cfd3;  */

void FUN_10716cf94(long param_1,undefined8 param_2)

{
  func_0x00010be9a3c0(*(undefined8 *)(param_1 + 0x20),param_2,param_2,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 10716cfd4; end: 10716cfeb;  */

void FUN_10716cfd4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10716cfec; end: 10716d1cf;  */

void FUN_10716cfec(long param_1,undefined *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  _objc_retain(param_2);
  lVar8 = *(long *)(param_1 + 0x60);
  pcVar9 = *(code **)(lVar8 + 0x10);
  _objc_retain(param_3);
  (*pcVar9)(lVar8,param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5c600();
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar1);
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar3 != 0) {
    _objc_retainAutorelease(param_2);
    func_0x00010bdc1020();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5c600();
    func_0x00010bfe9260(0x3ff0000000000000,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
    param_2 = puVar6;
  }
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28) + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73f00();
  _objc_release(param_3);
  _objc_release(uVar7);
  func_0x00010be99260(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28));
  lVar8 = *(long *)(*(long *)(param_1 + 0x70) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10716d1d0; end: 10716d25b;  */

void FUN_10716d1d0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),7);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  return;
}



/* Entry: 10716d25c; end: 10716d4c7; -[SCPreviewSnapSaver _saveImage:snapId:location:embeddedMetadata:exportPolicy:watermarkProfile:watermarkLayout:loggingParameters:saveCompletion:] */

void FUN_10716d25c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000010;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000010);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10716d4c8;
  puStack_a8 = &UNK_110990608;
  uStack_a0 = uVar2;
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retain(in_stack_00000010);
  uStack_80 = in_stack_00000010;
  ppuVar3 = &puStack_c0;
  _objc_retainBlock();
  uVar4 = param_7;
  func_0x00010c2433c0();
  if ((int)uVar4 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x000108faa4cc();
    if (iVar1 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_7;
      func_0x00010c2a2a20(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a2a40();
      _objc_retain(param_3);
      _objc_retain(ppuVar3);
      func_0x00010bfc0720(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(ppuVar3);
      _objc_release(param_3);
      goto LAB_10716d43c;
    }
  }
  (*(code *)ppuVar3[2])(ppuVar3,param_3);
LAB_10716d43c:
  _objc_release(ppuVar3);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uVar2);
  _objc_release(in_stack_00000010);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10716d4c8; end: 10716d563;  */

void FUN_10716d4c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  func_0x00010c14ae60(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 10716d564; end: 10716d577;  */

void FUN_10716d564(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010716d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10716d578; end: 10716d6b3;  */

void FUN_10716d578(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
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
  pcStack_68 = FUN_10716cfd4;
  uStack_60 = 0x10716cfe4;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_78 = &uStack_80;
  _objc_retain(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10716d6b4;
  puStack_90 = &UNK_11084d758;
  puStack_88 = &uStack_80;
  uStack_58 = uVar2;
  func_0x00010c0c0800(param_2);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x10716d6f0;
  puStack_c0 = &UNK_1108647e8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_b8 = uVar2;
  puStack_b0 = &uStack_80;
  func_0x0001000d76cc("APPSTORE",&puStack_d8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10716d6b4; end: 10716d6eb;  */

void FUN_10716d6b4(long param_1,undefined8 param_2)

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



/* Entry: 10716d6ec; end: 10716d707;  */

void FUN_10716d6ec(void)

{
  return;
}



/* Entry: 10716d708; end: 10716de13; -[SCPreviewSnapSaver _saveVideo:saveSessionId:snapId:location:exportPolicy:watermarkProfile:loggingParameters:exportCompletion:saveCompletion:] */

void FUN_10716d708(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined **param_11,undefined8 param_12)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  uint uStack_1f4;
  long lStack_1f0;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar20 = param_1[1];
  _objc_retain(param_8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar20;
  func_0x00010b6f9900();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  func_0x00010bf17d00();
  _objc_release(puVar9);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10716de14;
  puStack_d0 = &UNK_110990658;
  _objc_retain(param_12);
  uStack_c0 = param_12;
  _objc_retain(puVar3);
  ppuVar5 = &puStack_e8;
  puStack_c8 = puVar3;
  puStack_b8 = puVar4;
  _objc_retainBlock();
  puStack_128 = puVar9;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_10716de60;
  puStack_110 = &UNK_110990688;
  _objc_retain(puVar20);
  puStack_108 = puVar20;
  _objc_retain(param_6);
  uStack_100 = param_6;
  _objc_retain(param_5);
  uStack_f8 = param_5;
  _objc_retain(ppuVar5);
  ppuVar6 = &puStack_128;
  ppuStack_f0 = ppuVar5;
  _objc_retainBlock();
  func_0x00010c224ac0(param_3);
  _objc_release(param_8);
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010c29b620();
  if (lVar7 == 0) {
    lVar7 = param_3;
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 != 0) {
LAB_10716d91c:
      _objc_release(lVar7);
      goto LAB_10716d924;
    }
    lVar8 = param_3;
    func_0x00010c27e5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar8;
    func_0x00010bf529e0();
    if (lVar19 != 0) {
LAB_10716d914:
      _objc_release(lVar8);
      goto LAB_10716d91c;
    }
    lVar19 = param_3;
    func_0x00010c0ef960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar19 != 0) {
LAB_10716d90c:
      _objc_release(lVar19);
      goto LAB_10716d914;
    }
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
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))) == 1.0;
    }
    if (!bVar1) {
      lVar19 = 0;
      goto LAB_10716d90c;
    }
    lVar19 = param_3;
    func_0x00010c29b880();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar19;
    func_0x00010bf529e0();
    if ((lVar11 != 0) || (lVar11 = param_3, func_0x00010bf0f0e0(), (int)lVar11 == 0))
    goto LAB_10716d90c;
    lVar11 = param_3;
    func_0x00010bf0ffc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 != 0) {
      lVar18 = *(long *)(lVar11 + 8);
      _objc_retain(lVar18);
      if (lVar18 == 0) goto LAB_10716dae8;
LAB_10716db80:
      _objc_release(lVar18);
      _objc_release(lVar11);
      goto LAB_10716d90c;
    }
    _objc_retain();
LAB_10716dae8:
    lVar18 = param_3;
    func_0x00010c26f640();
    _objc_retainAutoreleasedReturnValue();
    if (lVar18 != 0) goto LAB_10716db80;
    lVar18 = param_3;
    func_0x00010bf0f680();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar18;
    func_0x00010bf529e0();
    if (lVar12 != 0) goto LAB_10716db80;
    lVar12 = param_3;
    func_0x00010c0cece0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf529e0();
    if (lVar13 != 0) {
LAB_10716db78:
      _objc_release(lVar12);
      goto LAB_10716db80;
    }
    lVar13 = param_3;
    func_0x00010bf15ea0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 != 0) {
LAB_10716db6c:
      _objc_release(lVar13);
      goto LAB_10716db78;
    }
    lVar14 = param_3;
    func_0x00010c091860();
    _objc_retainAutoreleasedReturnValue();
    if (lVar14 != 0) {
      _objc_release();
      goto LAB_10716db6c;
    }
    lVar13 = param_3;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 == 0) {
LAB_10716dbfc:
      lVar14 = param_3;
      func_0x00010c2a2a00();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010c2357e0();
      if ((int)lVar15 != 0) {
        lVar15 = param_3;
        func_0x00010c2a2a00();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar15;
        func_0x00010c290c40();
        uStack_1f4 = (uint)lVar16 ^ 1;
        _objc_release(lVar15);
        _objc_release(lVar14);
        if (lVar13 != 0) goto LAB_10716dc74;
        goto LAB_10716dc7c;
      }
      _objc_release(lVar14);
      if (lVar13 != 0) {
        uStack_1f4 = 1;
        goto LAB_10716dc74;
      }
      _objc_release(0);
      _objc_release(0);
      _objc_release(0);
      _objc_release(lVar12);
      _objc_release(lVar18);
      _objc_release(lVar11);
      _objc_release(lVar19);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(param_3);
LAB_10716dd30:
      ppuVar17 = param_1;
      func_0x00010be631e0();
      lVar7 = param_3;
      func_0x00010c29ae80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d2e0();
      _objc_release(lVar7);
      (*(code *)param_11[2])(param_11,0);
      puVar9 = param_1[2];
      func_0x00010c269d40(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf73f00();
      _objc_release(puVar9);
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      uStack_148 = 0x10716df28;
      puStack_140 = &UNK_11084aaa8;
      ppuStack_138 = ppuVar17;
      ppuStack_130 = ppuVar6;
      _objc_retain(ppuVar6);
      _objc_retain(ppuVar17);
      func_0x0001000d76cc("APPSTORE",&puStack_158);
      _objc_release(ppuStack_138);
      _objc_release(ppuStack_130);
      ppuVar10 = ppuVar6;
      goto LAB_10716d9dc;
    }
    lStack_1f0 = param_3;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    if (lStack_1f0 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010bf27a60(&uStack_b0,lStack_1f0);
    }
    iVar2 = (int)&uStack_b0;
    _CGAffineTransformIsIdentity();
    if (iVar2 != 0) goto LAB_10716dbfc;
    uStack_1f4 = 0;
LAB_10716dc74:
    _objc_release(lStack_1f0);
LAB_10716dc7c:
    _objc_release(lVar13);
    _objc_release(0);
    _objc_release(0);
    _objc_release(lVar12);
    _objc_release(lVar18);
    _objc_release(lVar11);
    _objc_release(lVar19);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(param_3);
    if ((uStack_1f4 & 1) != 0) goto LAB_10716dd30;
  }
  else {
LAB_10716d924:
    _objc_release(param_3);
  }
  puVar9 = param_1[2];
  func_0x00010c269d40(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250660();
  _objc_release(puVar9);
  _objc_retain(param_11);
  _objc_retain(param_4);
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar6);
  func_0x00010bfae700(param_3);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(param_4);
  ppuVar10 = param_11;
  ppuVar17 = ppuVar6;
LAB_10716d9dc:
  _objc_release(ppuVar10);
  _objc_release(ppuVar17);
  _objc_release(ppuStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(puStack_108);
  _objc_release(ppuVar5);
  _objc_release(puStack_c8);
  _objc_release(uStack_c0);
  _objc_release(puVar3);
  _objc_release(puVar20);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10716de14; end: 10716de5f;  */

void FUN_10716de14(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10716de60; end: 10716df13;  */

void FUN_10716de60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  func_0x00010c14afc0(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 10716df14; end: 10716df43;  */

void FUN_10716df14(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010716df24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10716df44; end: 10716e0af;  */

void FUN_10716df44(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73f00();
  _objc_release(uVar1);
  if (param_3 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10716e0c4;
    puStack_78 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar1);
    uStack_68 = uVar1;
    _objc_retain(param_2);
    uStack_70 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(uStack_70);
    uVar1 = uStack_68;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10716e0b0;
    puStack_48 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    uStack_38 = uVar1;
    _objc_retain(param_3);
    lStack_40 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    uVar1 = uStack_38;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10716e0b0; end: 10716e0c3;  */

void FUN_10716e0b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010716e0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),1);
  return;
}



/* Entry: 10716e0c4; end: 10716e10f;  */

void FUN_10716e0c4(long param_1)

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



/* Entry: 10716e110; end: 10716e2fb; -[SCPreviewSnapSaver _saveVideoSnapWithPreview:saveSessionId:snapId:location:exportPolicy:watermarkProfile:loggingParameters:exportCompletion:saveCompletion:] */

void FUN_10716e110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010c13b420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf9d440();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10716e2fc;
  puStack_b0 = &UNK_1109905a8;
  uStack_78 = param_9;
  uStack_70 = param_10;
  uStack_68 = param_11;
  uStack_a8 = param_1;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_90 = param_6;
  uStack_88 = param_7;
  uStack_80 = param_8;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c29a0e0(uVar1,param_2,param_7,&puStack_c8);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10716e2fc; end: 10716e33b;  */

void FUN_10716e2fc(long param_1,undefined8 param_2)

{
  func_0x00010be9a3c0(*(undefined8 *)(param_1 + 0x20),param_2,param_2,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 10716e33c; end: 10716e403; -[SCPreviewSnapSaver _newMp4Url] */

undefined * FUN_10716e33c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110db77b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10716e404; end: 10716e457; -[SCPreviewSnapSaver .cxx_destruct] */

void FUN_10716e404(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10716e458; end: 10716e58b; -[SCSendToContentConfiguration configureMusicBridgingWithMusicFeature:musicDidChangeHandler:] */

void FUN_10716e458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0fbb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca1c0(param_1);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_3);
  uVar1 = param_4;
  func_0x00010bf51e00();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  func_0x00010c1ca1a0(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10716e58c; end: 10716e603;  */

void FUN_10716e58c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (func_0x00010c289b20(lVar1), param_2 != 0)) {
    func_0x00010c0f5c20(lVar1);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10716e604; end: 10716e60b; -[SCPreviewExporter sharePressed] */

void FUN_10716e604(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb1dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sharePressedWithPreviewBlob__11258a118,0);
  return;
}



/* Entry: 10716e60c; end: 10716e60f; -[SCPreviewExporter shareWithPreviewBlob:] */

void FUN_10716e60c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb1dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sharePressedWithPreviewBlob__11258a118);
  return;
}



/* Entry: 10716e610; end: 10716e6bf; -[SCPreviewExporter _galleryEntryType] */

undefined4 FUN_10716e610(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c078120();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c07e920();
      _objc_release(param_1);
      uVar3 = 0;
      if ((int)uVar1 == 0) {
        uVar3 = 0xffffd8f1;
      }
    }
    else {
      uVar3 = 4;
    }
  }
  else {
    uVar3 = 8;
  }
  return uVar3;
}



/* Entry: 10716e6c0; end: 10716ea1f; -[SCPreviewExporter _sharePressedWithPreviewBlob:] */

void FUN_10716e6c0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c111b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2876e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126d4e08;
  _objc_alloc_init(PTR_PTR_1126d4e08);
  func_0x00010c0d7160();
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078120();
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07e940();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf855e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c110cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar6 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar7 = PTR_PTR_1126d4e10;
      _objc_alloc(PTR_PTR_1126d4e10);
      uVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd4160();
      func_0x00010be1a020(param_1);
      func_0x00010c011400(puVar7);
      _objc_release(uVar1);
      func_0x00010c0c9400(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620();
      _objc_release(param_1);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar2);
      goto LAB_10716e9cc;
    }
  }
  else {
    _objc_release(uVar1);
  }
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075080();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
LAB_10716e86c:
    puVar8 = auStack_90;
    _objc_copyWeak(puVar8,auStack_58);
    _objc_retain(param_3);
    func_0x00010c29a0e0(param_1);
    uVar5 = param_3;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd4160();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_10716e86c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10716ea20;
    puStack_70 = &UNK_110855f90;
    puVar8 = auStack_60;
    _objc_copyWeak(puVar8,auStack_58);
    _objc_retain(param_3);
    uStack_68 = param_3;
    func_0x00010bfe9420(param_1);
    uVar5 = uStack_68;
  }
  _objc_release(uVar5);
  _objc_destroyWeak(puVar8);
  _objc_destroyWeak(auStack_58);
LAB_10716e9cc:
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 10716ea20; end: 10716ebaf;  */

void FUN_10716ea20(long param_1,undefined *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c5ae0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar3 != 0) {
    _objc_retainAutorelease(param_2);
    func_0x00010bdc1020();
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5ae0();
    func_0x00010bfe9260(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_2 = puVar4;
  }
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10716ebb0;
  puStack_70 = &UNK_110848218;
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  _objc_retain(param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = param_2;
  _objc_retain(uVar5);
  uStack_60 = uVar5;
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_60);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10716ebb0; end: 10716ebe3;  */

void FUN_10716ebb0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb1fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10716ebe4; end: 10716ed2b;  */

void FUN_10716ebe4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10716eca4;
  puStack_50 = &UNK_110848218;
  _objc_retain(param_2);
  uStack_48 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10716ed2c; end: 10716ed7b; -[SCPreviewExporter activityControllerCompletion] */

void FUN_10716ed2c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10716ed7c;
  puStack_20 = &UNK_110990748;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10716ed7c; end: 10716ee03;  */

void FUN_10716ed7c(long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if ((param_3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    if ((param_2 & 1) == 0) {
      func_0x00010bf71d60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23a0a0();
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      func_0x00010be595e0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10716ee04; end: 10716f033; -[SCPreviewExporter _shareWithImage:previewBlob:] */

void FUN_10716ee04(undefined *param_1,undefined1 *param_2,undefined **param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bef14c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  puStack_78 = puVar1;
  func_0x00010c0c7ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bfbd160();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5f400();
  puVar5 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010bf42a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bef1820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bfd9520();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar6 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puStack_78;
    puVar17 = puVar1;
    ppuVar18 = param_4;
    func_0x00010be7c000(param_1);
    _objc_release(puVar1);
  }
  else {
    puVar17 = (undefined *)0x0;
    ppuVar18 = param_3;
    func_0x00010c10bd80(param_1);
    puVar20 = puStack_78;
  }
  _objc_release(puVar7);
  _objc_release(puVar20);
  _objc_release(param_4);
  ppuVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10716f034;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = puVar5;
  puStack_d8 = puVar4;
  puStack_d0 = puVar3;
  puStack_c8 = puVar6;
  puStack_c0 = puVar2;
  puStack_b8 = puVar7;
  puStack_b0 = puVar20;
  puStack_a8 = puVar1;
  ppuStack_a0 = param_4;
  ppuStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar17);
  _objc_retain(ppuVar18);
  ppuVar9 = ppuVar8;
  func_0x00010bef14c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar8;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar19;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  func_0x00010bfd9520();
  if (((ulong)ppuVar11 & 1) == 0) {
    _objc_release(ppuVar10);
    _objc_release(ppuVar19);
  }
  else {
    ppuVar11 = ppuVar18;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar10);
    _objc_release(ppuVar19);
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar19 = (undefined **)0x0;
      puVar2 = puVar17;
      func_0x00010c10bd80(ppuVar8);
      goto LAB_10716f2ec;
    }
  }
  ppuVar10 = ppuVar8;
  func_0x00010beb4ba0();
  if ((int)ppuVar10 != 0) {
    ppuVar10 = ppuVar8;
    func_0x00010c29a960(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6160();
    _objc_release(ppuVar19);
    _objc_release(ppuVar10);
  }
  _objc_initWeak(auStack_f8,ppuVar8);
  ppuVar10 = ppuVar8;
  func_0x00010c0c7ce0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar8;
  func_0x00010bfbd160();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5f400();
  ppuVar13 = ppuVar8;
  func_0x00010bf46560(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar8;
  func_0x00010bf42a00(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebe960(ppuVar8);
  ppuVar15 = ppuVar19;
  func_0x00010bef1840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar19);
  _objc_release(ppuVar10);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_f0 = ppuVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_10716f36c;
  puStack_110 = &UNK_110948730;
  ppuVar10 = &puStack_128;
  param_2 = auStack_f8;
  _objc_copyWeak(auStack_100,param_2);
  _objc_retain(ppuVar9);
  puVar2 = puVar1;
  ppuVar19 = ppuVar18;
  ppuStack_108 = ppuVar9;
  func_0x00010be7c000(ppuVar8);
  _objc_release(puVar1);
  _objc_release(ppuStack_108);
  _objc_destroyWeak(auStack_100);
  _objc_release(ppuVar15);
  _objc_destroyWeak(auStack_f8);
LAB_10716f2ec:
  _objc_release(ppuVar9);
  _objc_release(ppuVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar10 + 5);
  _objc_destroyWeak(auStack_f8);
  __Unwind_Resume();
  _objc_retain(ppuVar19);
  puVar1 = puVar17 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = puVar1;
  func_0x00010beb4ba0();
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    puVar1 = puVar17 + 0x28;
    _objc_loadWeakRetained(puVar1);
    puVar3 = puVar1;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dae0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  lVar16 = *(long *)(puVar17 + 0x20);
  if (lVar16 != 0) {
    (**(code **)(lVar16 + 0x10))(lVar16,param_2,puVar2,ppuVar19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar19);
  return;
}



/* Entry: 10716f034; end: 10716f36b; -[SCPreviewExporter _shareWithVideoFilter:previewBlob:] */

void FUN_10716f034(undefined **param_1,undefined1 *param_2,undefined *param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_1;
  func_0x00010bef14c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bfd9520();
  if (((ulong)ppuVar4 & 1) == 0) {
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  else {
    lVar14 = param_4;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    if (lVar14 == 0) {
      lVar14 = 0;
      puVar13 = param_3;
      func_0x00010c10bd80(param_1);
      goto LAB_10716f2ec;
    }
  }
  ppuVar3 = param_1;
  func_0x00010beb4ba0();
  if ((int)ppuVar3 != 0) {
    ppuVar3 = param_1;
    func_0x00010c29a960(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6160();
    _objc_release(ppuVar2);
    _objc_release(ppuVar3);
  }
  _objc_initWeak(auStack_78,param_1);
  ppuVar3 = param_1;
  func_0x00010c0c7ce0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_1;
  func_0x00010bfbd160();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5f400();
  ppuVar6 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010bf42a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebe960(param_1);
  ppuVar8 = ppuVar2;
  func_0x00010bef1840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_70 = ppuVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10716f36c;
  puStack_90 = &UNK_110948730;
  ppuVar3 = &puStack_a8;
  param_2 = auStack_78;
  _objc_copyWeak(auStack_80,param_2);
  _objc_retain(ppuVar1);
  puVar13 = puVar9;
  lVar14 = param_4;
  ppuStack_88 = ppuVar1;
  func_0x00010be7c000(param_1);
  _objc_release(puVar9);
  _objc_release(ppuStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(ppuVar8);
  _objc_destroyWeak(auStack_78);
LAB_10716f2ec:
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar3 + 5);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(lVar14);
  puVar9 = param_3 + 0x28;
  _objc_loadWeakRetained();
  puVar10 = puVar9;
  func_0x00010beb4ba0();
  _objc_release(puVar9);
  if ((int)puVar10 != 0) {
    puVar9 = param_3 + 0x28;
    _objc_loadWeakRetained(puVar9);
    puVar10 = puVar9;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dae0();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  lVar12 = *(long *)(param_3 + 0x20);
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 0x10))(lVar12,param_2,puVar13,lVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar14);
  return;
}



/* Entry: 10716f36c; end: 10716f43b;  */

void FUN_10716f36c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010beb4ba0();
  _objc_release(lVar3);
  if ((int)lVar1 != 0) {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dae0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10716f43c; end: 10716f497; -[SCPreviewExporter _shouldPauseVideoWhenTranscoding] */

undefined8 FUN_10716f43c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07f160();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10716f498; end: 10716f563; -[SCPreviewExporter _presentItemProviders:previewBlob:completion:] */

void FUN_10716f498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf855e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c110cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0c7ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f0e0();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10716f564; end: 10716f63b; -[SCPreviewExporter _logSuccesfullySharingWithActivityType:] */

void FUN_10716f564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf42a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c111720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c07ec60();
  func_0x00010c0a51a0(uVar3,param_2,param_3,uVar4,uVar2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10716f63c; end: 10716f643; -[SCPreviewExporter _spectaclesCustomExportFormat] */

undefined8 FUN_10716f63c(void)

{
  return 0;
}



/* Entry: 10716f644; end: 10716f6cb; -[SCPreviewExporter memoriesPreviewShareSheetExportWillDismiss] */

void FUN_10716f644(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0c9400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c0c9400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10716f6cc; end: 10716f73f; -[SCPreviewFilterDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716f6cc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127646e4);
  _objc_destroyWeak(param_1 + _DAT_1127646e0);
  _objc_destroyWeak(param_1 + _DAT_1127646dc);
  _objc_destroyWeak(param_1 + _DAT_1127646d8);
  _objc_destroyWeak(param_1 + _DAT_1127646d4);
  _objc_destroyWeak(param_1 + _DAT_1127646d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127646cc);
  return;
}



/* Entry: 10716f740; end: 10716f753; -[SCPreviewFilterDataProviderFactoryImpl getFilterDataProviderWithSnapSource_DEPRECATED:] */

void FUN_10716f740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc5930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getFilterDataProviderWithSnapSou_1125ceff0,param_3,0,0,0,0);
  return;
}



/* Entry: 10716f754; end: 10716f757; -[SCPreviewFilterDataProviderFactoryImpl getFilterDataProviderUnderABWithSnapSource:mediaType:] */

void FUN_10716f754(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc58d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getFilterDataProviderWithSnapSou_1125cefd8);
  return;
}



/* Entry: 10716f758; end: 10716f7db; -[SCPreviewFilterDataProviderFactoryImpl getFilterDataProviderWithSnapSource:mediaType:] */

void FUN_10716f758(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 1;
  if (param_4 != 0) {
    uVar1 = 2;
  }
  puVar2 = PTR_PTR_1126b38a8;
  func_0x00010c0d8800(PTR_PTR_1126b38a8,param_2,0,uVar1,0,0);
  func_0x00010bfc5920(param_1,param_2,param_3,0,0,0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10716f7dc; end: 10716f80f; -[SCPreviewFilterDataProviderFactoryImpl getFilterDataProviderWithSnapSource:streakCount:fullScreenImageFuture:mediaOrientation:filterContextData:] */

void FUN_10716f7dc(void)

{
  func_0x00010bfc58e0();
  return;
}



/* Entry: 10716f810; end: 10716f917; -[SCPreviewFilterDataProviderFactoryImpl getFilterDataProviderWithSnapSource:snapPageSource:streakCount:fullScreenImageFuture:mediaOrientation:filterContextData:initialInfoStickerData:] */

void FUN_10716f810(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b62b0;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained();
  func_0x00010c0487c0(puVar1,param_2,param_3,param_4,param_5,lVar2,param_6,param_7,param_8,param_9,
                      uVar4,lVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10716f918; end: 10716fa33; -[SCPreviewFilterDataProviderFactoryImpl getFilterDataProviderWithSnapSource:snapPageSource:streakCount:fullScreenImageFuture:mediaOrientation:filterContextData:initialInfoStickerData:snapDocFiltersEditor:] */

void FUN_10716f918(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b62b0;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained();
  func_0x00010c0487a0(puVar1,param_2,param_3,param_4,param_5,lVar2,param_6,param_7,param_8,param_9,
                      uVar4,lVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),param_10,*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10716fa34; end: 10716faa3; -[SCPreviewFilterDataProviderFactoryImpl .cxx_destruct] */

void FUN_10716fa34(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10716faa4; end: 10716fcb3; -[SCPreviewBlobMediaView initWithPreviewBlob:isSpectacles:isSpectaclesPreviewRotation:userSession:captionDataProvider:videoTrackingServices:contentDeliveryServices:stickerInjector:creativeToolsABProvider:itemViewService:imageProcessRenderingSessionFactory:] */

undefined8
FUN_10716faa4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  long lVar1;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  lVar1 = param_3;
  func_0x00010c249660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    *(undefined1 *)(puStack_80 + 3) = 1;
    lVar1 = param_3;
    func_0x00010c249660(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf800();
    _objc_release(lVar1);
  }
  func_0x00010c039720(param_1);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10716fcb4; end: 10716fcd3;  */

void FUN_10716fcb4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10716fcd4; end: 10716ff6b; -[SCPreviewBlobMediaView initWithPreviewBlob:isSpectacles:isSpectaclesPreviewRotation:shouldApplySpectaclesMask:userSession:captionDataProvider:videoTrackingServices:contentDeliveryServices:stickerInjector:creativeToolsABProvider:itemViewService:imageProcessRenderingSessionFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10716fcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f8a70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112764708;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276470c) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112764710) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112764714) = param_6;
    lVar4 = (long)_DAT_112764718;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11276471c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112764720;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112764724;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112764728;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11276472c;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112764730;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112764734;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10716ff6c; end: 10716ffcf; -[SCPreviewBlobMediaView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716ff6c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + _DAT_112764738) == '\x01') {
    func_0x00010c2568a0(*(undefined8 *)(param_1 + _DAT_11276473c));
  }
  puStack_28 = PTR_PTR_1126f8a70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10716ffd0; end: 107170293; -[SCPreviewBlobMediaView _hasTrackingOrAnimatedContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10716ffd0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar6 = (long)_DAT_112764708;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c255460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_210;
    do {
      lVar8 = 0;
      do {
        if (*plStack_210 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(ulong *)(lStack_218 + lVar8 * 8);
        uVar2 = uVar5;
        func_0x00010c081660();
        if (((uVar2 & 1) != 0) || (func_0x00010c06c000(), (uVar5 & 1) != 0)) goto LAB_107170244;
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_220,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_250;
    do {
      lVar8 = 0;
      do {
        if (*plStack_250 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar2 = *(ulong *)(lStack_258 + lVar8 * 8);
        func_0x00010c081660();
        if ((uVar2 & 1) != 0) goto LAB_107170244;
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_260,auStack_158,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfc1460();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar7 == 0) {
    lVar3 = 0;
    goto LAB_107170250;
  }
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  lVar3 = *(long *)(param_1 + lVar6);
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bfc1460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar6 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_2a0,auStack_1d8,0x10);
  lVar3 = 0;
  if (lVar6 != 0) {
    lVar3 = *plStack_290;
    do {
      lVar7 = 0;
      do {
        if (*plStack_290 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        uVar2 = *(ulong *)(lStack_298 + lVar7 * 8);
        func_0x00010c06c000();
        if ((uVar2 & 1) != 0) goto LAB_107170244;
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      lVar6 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_2a0,auStack_1d8,0x10);
    } while (lVar6 != 0);
    lVar3 = 0;
  }
LAB_107170248:
  _objc_release(lVar1);
LAB_107170250:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar3;
  }
  ___stack_chk_fail();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bb980;
  _objc_opt_class(PTR_PTR_1126bb980);
  lVar3 = lVar1;
  func_0x00010beecc40(lVar1,param_2,puVar4,&PTR___NSConcreteGlobalBlock_110990798);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bfe63a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return lVar6;
LAB_107170244:
  lVar3 = 1;
  goto LAB_107170248;
}



/* Entry: 107170294; end: 10717032f; -[SCPreviewBlobMediaView _imageCommandProvider] */

void FUN_107170294(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bb980;
  _objc_opt_class(PTR_PTR_1126bb980);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110990798);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107170330; end: 107170337;  */

void FUN_107170330(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf69910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_defaultImageProcessCommandProvid_1125b7fe8);
  return;
}



/* Entry: 107170338; end: 107171f23; -[SCPreviewBlobMediaView _setupViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107170338(undefined8 param_1,double param_2,double param_3,double param_4,
                  undefined *param_5,undefined8 *param_6)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined *unaff_x20;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined8 uVar39;
  undefined *puStack_558;
  uint uStack_550;
  undefined *puStack_540;
  long lStack_538;
  undefined8 uStack_490;
  undefined8 uStack_488;
  double dStack_480;
  undefined8 uStack_478;
  double dStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined *puStack_418;
  undefined8 uStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  undefined1 auStack_3f8 [8];
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  double dStack_3a0;
  undefined8 uStack_398;
  double dStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  double dStack_370;
  undefined8 uStack_368;
  double dStack_360;
  undefined8 uStack_358;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_5;
  if ((param_5[_DAT_112764740] & 1) == 0) {
    param_5[_DAT_112764740] = 1;
    lVar23 = (long)_DAT_112764708;
    lVar2 = *(long *)(param_5 + lVar23);
    func_0x00010c0c6c20();
    if (lVar2 == 0) {
      puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010bf20c00(param_5);
      func_0x00010c013de0();
      lVar2 = (long)_DAT_112764744;
      uVar39 = *(undefined8 *)(param_5 + lVar2);
      *(undefined **)(param_5 + lVar2) = puVar7;
      _objc_release(uVar39);
      uVar39 = *(undefined8 *)(param_5 + lVar23);
      func_0x00010bfe6ac0(uVar39);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_5 + lVar2));
      _objc_release(uVar39);
      func_0x00010befbb60(param_5);
    }
    else {
      lVar2 = *(long *)(param_5 + lVar23);
      func_0x00010c0c6c20();
      if (lVar2 == 1) {
        lVar3 = *(long *)(param_5 + lVar23);
        func_0x00010c29ae80();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010c0d9500();
        _objc_release(lVar3);
        if (lVar2 != 0) {
          uVar4 = *(ulong *)(param_5 + lVar23);
          func_0x00010bfaee40();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar4;
          func_0x00010c249d80();
          uVar5 = uVar4;
          func_0x00010c249de0();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar5;
          func_0x00010bf529e0();
          uVar39 = 0x3ff0000000000000;
          if ((uVar20 != 0 && uVar13 != 0x7fffffffffffffff) &&
             (uVar20 = uVar5, func_0x00010bf529e0(), uVar13 < uVar20)) {
            uVar13 = uVar5;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar20 = uVar13;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar20;
            func_0x00010c067fc0();
            _objc_release(uVar20);
            uVar39 = 0;
            if (uVar6 < 4) {
              uVar39 = *(undefined8 *)(&UNK_10de1fc80 + uVar6 * 8);
            }
            _objc_release(uVar13);
          }
          func_0x00010c140140();
          uVar13 = uVar4;
          func_0x00010c2a0460();
          if (uVar13 == 0x7fffffffffffffff) {
            uVar20 = 0;
          }
          else {
            uVar13 = uVar4;
            func_0x00010c2a04c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a0460(uVar4);
            uVar20 = uVar13;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar13);
          }
          uVar13 = uVar4;
          func_0x00010c27e680();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar20;
          func_0x00010c08fa60();
          if (uVar6 != 0) {
            puVar14 = PTR_PTR_1126b26d8;
            func_0x00010bf978e0(PTR_PTR_1126b26d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar7);
            _objc_release(puVar14);
          }
          uVar6 = uVar13;
          func_0x00010bf529e0();
          if (uVar6 != 0) {
            uVar6 = uVar13;
            func_0x00010c0b8600(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar7);
            _objc_release(uVar6);
          }
          puVar14 = puVar7;
          func_0x00010bf529e0();
          if (puVar14 == (undefined *)0x0) {
            puStack_540 = (undefined *)0x0;
          }
          else {
            uVar8 = *(undefined8 *)(param_5 + lVar23);
            func_0x00010c0918c0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = PTR_PTR_1126b26e0;
            func_0x00010c29b060(PTR_PTR_1126b26e0);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = param_5;
            func_0x00010be36ec0();
            _objc_retainAutoreleasedReturnValue();
            puStack_540 = puVar15;
            func_0x00010bf41e60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(uVar8);
          }
          puVar14 = puStack_540;
          func_0x00010bf529e0();
          if (puVar14 == (undefined *)0x0) {
            lVar3 = *(long *)(param_5 + lVar23);
            func_0x00010c249660();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar3 == 0) {
              puVar14 = PTR_PTR_1126b26c8;
              func_0x00010c22b820();
              _objc_retainAutoreleasedReturnValue();
              puStack_c0 = puVar14;
            }
            else {
              puVar15 = param_5;
              func_0x00010be36ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = *(undefined8 *)(param_5 + lVar23);
              func_0x00010c249660(uVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar15;
              func_0x00010c249640();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar8);
              _objc_release(puVar15);
              puStack_b8 = puVar14;
            }
            puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puStack_540);
            _objc_release(puVar14);
            puStack_540 = puVar15;
          }
          puVar14 = PTR_PTR_1126d1378;
          _objc_alloc();
          func_0x00010bf20c00(param_5);
          func_0x00010c013de0();
          lVar27 = (long)_DAT_112764748;
          uVar8 = *(undefined8 *)(param_5 + lVar27);
          *(undefined **)(param_5 + lVar27) = puVar14;
          _objc_release(uVar8);
          func_0x00010c221ca0(*(undefined8 *)(param_5 + lVar27));
          uVar8 = *(undefined8 *)(param_5 + lVar27);
          func_0x00010bfccde0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d4c20();
          _objc_release(uVar8);
          uStack_e0 = *(undefined8 *)PTR__kEAGLDrawablePropertyRetainedBacking_11034b938;
          uStack_d8 = *(undefined8 *)PTR__kEAGLDrawablePropertyColorFormat_11034b930;
          uStack_c8 = *(undefined8 *)PTR__kEAGLColorFormatRGBA8_11034b928;
          puStack_d0 = PTR____kCFBooleanFalse_11034ab60;
          puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_5 + lVar27);
          func_0x00010bfccde0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1917e0();
          _objc_release(uVar8);
          _objc_release(puVar14);
          func_0x00010befbb60();
          lVar3 = lVar2;
          func_0x00010c279200();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar3;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x0001004fa310();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d4e28);
          lVar22 = lVar3;
          func_0x00010beecc40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          lVar3 = lVar22;
          func_0x00010bfe63a0();
          _objc_retainAutoreleasedReturnValue();
          lVar24 = lVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          lVar3 = lVar24;
          func_0x00010c1010c0();
          _objc_retainAutoreleasedReturnValue();
          lVar21 = (long)_DAT_11276474c;
          uVar8 = *(undefined8 *)(param_5 + lVar21);
          *(long *)(param_5 + lVar21) = lVar3;
          _objc_release(uVar8);
          func_0x00010c1e7640(0,*(undefined8 *)(param_5 + lVar21));
          uVar8 = 0;
          func_0x00010c2241a0(0,*(undefined8 *)(param_5 + lVar21));
          if (lVar12 == 0) {
            uVar8 = 0;
            uStack_368 = 0;
            dStack_370 = 0.0;
            uStack_358 = 0;
            dStack_360 = 0.0;
            uStack_378 = 0;
            uStack_380 = 0;
          }
          else {
            func_0x00010c106f40(&uStack_380);
          }
          func_0x00010b691288(&uStack_380);
          func_0x00010b69138c();
          puVar14 = PTR_PTR_1126bf4d0;
          func_0x00010c22bec0(PTR_PTR_1126bf4d0);
          _objc_retainAutoreleasedReturnValue();
          lVar21 = *(long *)(param_5 + lVar23);
          func_0x00010bfaee40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar21;
          func_0x00010bf5f160();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
            puVar15 = (undefined *)0x0;
          }
          else {
            uVar9 = *(undefined8 *)(param_5 + lVar23);
            func_0x00010bfaee40();
            _objc_retainAutoreleasedReturnValue();
            uVar25 = uVar9;
            func_0x00010bf5f160();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
            uStack_e8 = uVar25;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar25);
            _objc_release(uVar9);
          }
          _objc_release(lVar3);
          _objc_release(lVar21);
          puVar10 = PTR_PTR_1126bf4f0;
          _objc_alloc();
          func_0x00010c03c700();
          uVar9 = *(undefined8 *)(param_5 + _DAT_112764734);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_5 + lVar27);
          func_0x00010bfccde0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar25 = uVar9;
          func_0x00010bf59fc0();
          _objc_retainAutoreleasedReturnValue();
          lVar21 = (long)_DAT_11276473c;
          uVar19 = *(undefined8 *)(param_5 + lVar21);
          *(undefined8 *)(param_5 + lVar21) = uVar25;
          _objc_release(uVar19);
          _objc_release(uVar11);
          _objc_release(uVar9);
          func_0x00010c18e660(*(undefined8 *)(param_5 + lVar21));
          func_0x00010c2009a0(*(undefined8 *)(param_5 + lVar21));
          lVar3 = *(long *)(param_5 + lVar23);
          func_0x00010bf5c9c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar3 != 0) {
            lVar3 = *(long *)(param_5 + lVar23);
            func_0x00010bf5c9c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf5c940(*(undefined8 *)(param_5 + lVar23));
            uVar25 = uVar8;
            func_0x00010c0c2640(PTR_PTR_1126bf720);
            func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar27));
            if (lVar3 == 0) {
              uStack_368 = 0;
              dStack_370 = 0.0;
              uStack_358 = 0;
              dStack_360 = 0.0;
              uStack_378 = 0;
              uStack_380 = 0;
            }
            else {
              dVar35 = param_3;
              func_0x00010bf27a80(&uStack_380,uVar8,uVar25,param_2,param_3,param_4,lVar3);
              param_3 = param_2;
              param_4 = dVar35;
            }
            _objc_release(lVar3);
            uStack_3a8 = uStack_378;
            uStack_3b0 = uStack_380;
            uStack_398 = uStack_368;
            dStack_3a0 = dStack_370;
            uStack_388 = uStack_358;
            dStack_390 = dStack_360;
            param_2 = dStack_370;
            func_0x00010c2235a0(*(undefined8 *)(param_5 + lVar21));
          }
          func_0x00010c1ddae0(uVar39,*(undefined8 *)(param_5 + lVar21));
          func_0x00010c10a180(*(undefined8 *)(param_5 + lVar21));
          func_0x00010c1ede00(*(undefined8 *)(param_5 + lVar21));
          func_0x00010c1573a0(*(undefined8 *)(param_5 + lVar21));
          _objc_release(puVar10);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(lVar24);
          _objc_release(lVar22);
          _objc_release(lVar12);
          _objc_release(puVar7);
          _objc_release(uVar13);
          _objc_release(uVar20);
          _objc_release(puStack_540);
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
        _objc_release(lVar2);
      }
    }
    lVar12 = *(long *)(param_5 + lVar23);
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar12;
    func_0x00010bfc1460();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar12);
    do {
      lStack_538 = lVar2;
      lVar2 = lStack_538 + -1;
      if (lVar2 < 0) break;
      uVar9 = *(undefined8 *)(param_5 + lVar23);
      func_0x00010bfaee40();
      _objc_retainAutoreleasedReturnValue();
      uVar39 = uVar9;
      func_0x00010bfc1460();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar39;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar8;
      func_0x00010c06c000();
      _objc_release(uVar8);
      _objc_release(uVar39);
      _objc_release(uVar9);
    } while ((int)uVar25 == 0);
    dVar35 = 0.0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    lStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    plStack_3e0 = (long *)0x0;
    lVar12 = *(long *)(param_5 + lVar23);
    func_0x00010c255460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar12;
    func_0x00010bf52a60();
    uStack_550 = (uint)((ulong)lVar2 >> 0x3f) ^ 1;
    if (lVar3 != 0) {
      lVar22 = *plStack_3e0;
      do {
        lVar24 = 0;
        do {
          if (*plStack_3e0 != lVar22) {
            _objc_enumerationMutation(lVar12);
          }
          uVar13 = *(ulong *)(lStack_3e8 + lVar24 * 8);
          func_0x00010c06c000();
          if ((uVar13 & 1) != 0) {
            uStack_550 = 1;
            goto LAB_107170e7c;
          }
          lVar24 = lVar24 + 1;
        } while (lVar3 != lVar24);
        lVar3 = lVar12;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
LAB_107170e7c:
    _objc_release(lVar12);
    puVar14 = *(undefined **)(param_5 + lVar23);
    func_0x00010c255460();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar14;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    lVar12 = *(long *)(param_5 + lVar23);
    func_0x00010bf30960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar12;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    puStack_558 = puVar14;
    if (uStack_550 != 0) {
      puVar15 = *(undefined **)(param_5 + lVar23);
      func_0x00010c255460();
      _objc_retainAutoreleasedReturnValue();
      puStack_558 = puVar15;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar15);
    }
    puVar14 = puVar7;
    func_0x00010bf529e0();
    if ((puVar14 != (undefined *)0x0) || (lVar12 = lVar3, func_0x00010bf529e0(), lVar12 != 0)) {
      func_0x00010bf20c00(param_5);
      dVar36 = dVar35;
      dVar30 = param_2;
      dVar34 = param_3;
      dVar37 = param_4;
      func_0x00010bf20c00(param_5);
      lVar12 = *(long *)(param_5 + lVar23);
      dVar28 = dVar36;
      dVar31 = dVar30;
      dVar29 = dVar34;
      dVar32 = dVar37;
      func_0x00010bf5c9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      dVar33 = param_3;
      dVar38 = param_4;
      if (lVar12 != 0) {
        func_0x00010bf20c00(param_5);
        dVar38 = dVar32;
        func_0x00010c0c2640(PTR_PTR_1126bf720);
        dVar33 = 0.0;
        if (dVar28 != 0.0) {
          if (dVar31 == 0.0) {
            dVar33 = INFINITY;
          }
          else {
            dVar33 = dVar28 / dVar31;
          }
        }
        func_0x00010b690c04(dVar29,dVar32,dVar33);
        func_0x000100841590();
        uVar39 = *(undefined8 *)(param_5 + lVar23);
        dVar35 = dVar29;
        dVar36 = dVar32;
        dVar37 = dVar38;
        func_0x00010bf5c9c0(uVar39);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c80();
        dVar34 = 0.0;
        if (dVar35 != 0.0) {
          if (dVar36 == 0.0) {
            dVar34 = INFINITY;
          }
          else {
            dVar34 = dVar35 / dVar36;
          }
        }
        dVar36 = dVar33;
        dVar30 = dVar38;
        func_0x00010b690c04(dVar33,dVar38,dVar34);
        func_0x000100841590();
        _objc_release(uVar39);
        dVar35 = dVar29;
        param_2 = dVar32;
      }
      puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      param_3 = dVar34;
      param_4 = dVar37;
      func_0x00010c013de0(dVar36,dVar30,dVar34,dVar37);
      lVar12 = (long)_DAT_112764750;
      uVar39 = *(undefined8 *)(param_5 + lVar12);
      *(undefined **)(param_5 + lVar12) = puVar14;
      _objc_release(uVar39);
      func_0x00010befbb60();
      puVar14 = puVar7;
      func_0x00010bf529e0();
      if (puVar14 != (undefined *)0x0) {
        puVar14 = PTR_PTR_1126c4a00;
        _objc_alloc();
        func_0x00010c014e60(dVar35,param_2,dVar33,dVar38);
        lVar22 = (long)_DAT_112764754;
        uVar39 = *(undefined8 *)(param_5 + lVar22);
        *(undefined **)(param_5 + lVar22) = puVar14;
        _objc_release(uVar39);
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar12));
        uVar39 = *(undefined8 *)(param_5 + lVar22);
        func_0x00010c2790a0(uVar39);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19f0e0(dVar35,param_2,dVar33,dVar38);
        _objc_release(uVar39);
        uVar8 = *(undefined8 *)(param_5 + lVar12);
        uVar39 = *(undefined8 *)(param_5 + lVar22);
        func_0x00010c2790a0(uVar39);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(uVar8);
        _objc_release(uVar39);
        _objc_initWeak(&uStack_380,param_5);
        uVar39 = *(undefined8 *)(param_5 + lVar22);
        puStack_418 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_410 = 0xc2000000;
        pcStack_408 = FUN_107171f68;
        puStack_400 = &UNK_1108e8f60;
        param_6 = &uStack_380;
        _objc_copyWeak(auStack_3f8,param_6);
        func_0x00010c20bdc0(uVar39);
        _objc_destroyWeak(auStack_3f8);
        _objc_destroyWeak(&uStack_380);
        dVar30 = param_2;
        param_3 = dVar33;
        param_4 = dVar38;
      }
      lVar22 = lVar3;
      func_0x00010bf529e0();
      if (lVar22 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar24 = (long)_DAT_112764758;
      _objc_retain(puVar14);
      uVar39 = *(undefined8 *)(param_5 + lVar24);
      *(undefined **)(param_5 + lVar24) = puVar14;
      _objc_release(uVar39);
      if (lVar22 != 0) {
        _objc_release(puVar14);
      }
      dVar35 = 0.0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      lStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      plStack_450 = (long *)0x0;
      _objc_retain(lVar3);
      lVar22 = lVar3;
      func_0x00010bf52a60();
      if (lVar22 != 0) {
        lVar21 = *plStack_450;
        do {
          lVar27 = 0;
          do {
            if (*plStack_450 != lVar21) {
              _objc_enumerationMutation(lVar3);
            }
            uVar9 = *(undefined8 *)(lStack_458 + lVar27 * 8);
            func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar12));
            uVar8 = *(undefined8 *)(param_5 + _DAT_11276471c);
            func_0x00010bf2ff00(uVar8);
            _objc_retainAutoreleasedReturnValue();
            param_6 = (undefined8 *)0x0;
            uVar39 = uVar9;
            func_0x000108e23a3c(dVar35,dVar30,param_3,param_4,uVar9,0,uVar8,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            uVar25 = *(undefined8 *)(param_5 + lVar12);
            uVar8 = uVar39;
            func_0x00010c29bf00(uVar39);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befbb60(uVar25);
            _objc_release(uVar8);
            func_0x00010befa120(*(undefined8 *)(param_5 + lVar24));
            puVar14 = PTR_PTR_1126c4a10;
            uVar8 = uVar9;
            func_0x00010c2790e0(uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c081160(uVar9);
            uVar25 = *(undefined8 *)(param_5 + lVar23);
            func_0x00010bf20900(uVar25);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c279700(puVar14);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar25);
            _objc_release(uVar8);
            uVar8 = uVar39;
            func_0x00010c26ba60(uVar39);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf921e0();
            _objc_release(uVar8);
            _objc_release(puVar14);
            _objc_release(uVar39);
            lVar27 = lVar27 + 1;
          } while (lVar22 != lVar27);
          lVar22 = lVar3;
          func_0x00010bf52a60();
        } while (lVar22 != 0);
      }
      _objc_release(lVar3);
      lVar22 = *(long *)(param_5 + lVar23);
      func_0x00010bf5c9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      param_2 = dVar30;
      if (lVar22 != 0) {
        func_0x00010bf20c00(param_5);
        _CGRectGetMidX();
        uVar39 = *(undefined8 *)(param_5 + lVar23);
        dVar36 = dVar35;
        func_0x00010bf5c9c0(uVar39);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27ade0();
        dVar28 = dVar36;
        func_0x00010bf20c00(param_5);
        _CGRectGetMidY();
        uVar8 = *(undefined8 *)(param_5 + lVar23);
        dVar30 = dVar28;
        func_0x00010bf5c9c0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27ae20();
        dVar35 = dVar35 + dVar34 * dVar36;
        param_3 = dVar35;
        func_0x00010c17a6a0(dVar35,dVar28 + dVar37 * dVar30,*(undefined8 *)(param_5 + lVar12));
        _objc_release(uVar8);
        _objc_release(uVar39);
        uVar39 = *(undefined8 *)(param_5 + lVar23);
        func_0x00010bf5c9c0(uVar39);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        uVar8 = *(undefined8 *)(param_5 + lVar23);
        dVar36 = dVar35;
        func_0x00010bf5c9c0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        _CGAffineTransformMakeScale(&uStack_380,dVar35,dVar36);
        uVar25 = *(undefined8 *)(param_5 + lVar23);
        func_0x00010bf5c9c0(uVar25);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c141a80();
        _CGAffineTransformMakeRotation(&uStack_3b0);
        param_6 = &uStack_3b0;
        _CGAffineTransformConcat(&uStack_490,&uStack_380,param_6);
        uStack_378 = uStack_488;
        uStack_380 = uStack_490;
        uStack_368 = uStack_478;
        dStack_370 = dStack_480;
        uStack_358 = uStack_468;
        dStack_360 = dStack_470;
        func_0x00010c219960(*(undefined8 *)(param_5 + lVar12));
        _objc_release(uVar25);
        _objc_release(uVar8);
        _objc_release(uVar39);
        dVar35 = dStack_470;
        param_2 = dStack_480;
      }
    }
    if (uStack_550 != 0) {
      bVar1 = param_5[_DAT_112764710];
      func_0x00010bf20c00();
      dVar36 = param_3;
      dVar28 = param_4;
      if ((bVar1 & 1) == 0) {
        func_0x00010c0c2640(PTR_PTR_1126bf720);
        dVar36 = 0.0;
        if (dVar35 != 0.0) {
          if (param_2 == 0.0) {
            dVar36 = INFINITY;
          }
          else {
            dVar36 = dVar35 / param_2;
          }
        }
        func_0x00010b690c04(param_3,param_4,dVar36);
        dVar35 = param_3;
        param_2 = param_4;
      }
      puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010bf20c00(param_5);
      dVar30 = dVar35;
      _CGRectGetMidX();
      _CGRectGetMidY(dVar35,param_2,dVar36,dVar28);
      func_0x00010b690910(dVar30,dVar35,param_3,param_4);
      func_0x00010c013de0();
      lVar12 = (long)_DAT_11276475c;
      uVar39 = *(undefined8 *)(param_5 + lVar12);
      *(undefined **)(param_5 + lVar12) = puVar14;
      _objc_release(uVar39);
      func_0x00010befbb60();
      puVar14 = PTR_PTR_1126c4a00;
      _objc_alloc(PTR_PTR_1126c4a00);
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar12));
      func_0x00010c014e60(puVar14);
      uVar39 = *(undefined8 *)(param_5 + lVar12);
      puVar15 = puVar14;
      func_0x00010c252ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar39);
      _objc_release(puVar15);
      func_0x00010c20bdc0(puVar14);
      _objc_release(puVar14);
    }
    if (-1 < lVar2) {
      lVar2 = 0;
      do {
        puVar14 = PTR_PTR_1126d4e30;
        uVar25 = *(undefined8 *)(param_5 + lVar23);
        func_0x00010bfaee40(uVar25);
        _objc_retainAutoreleasedReturnValue();
        uVar39 = uVar25;
        func_0x00010bfc1460();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar39;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befca20(puVar14);
        _objc_release(uVar8);
        _objc_release(uVar39);
        _objc_release(uVar25);
        lVar2 = lVar2 + 1;
      } while (lStack_538 != lVar2);
    }
    puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(param_5);
    func_0x00010c013de0();
    lVar24 = (long)_DAT_112764760;
    uVar39 = *(undefined8 *)(param_5 + lVar24);
    *(undefined **)(param_5 + lVar24) = puVar14;
    _objc_release(uVar39);
    ppuStack_248 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca168;
    ppuStack_240 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca198;
    ppuStack_218 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca180;
    ppuStack_210 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca1b0;
    ppuStack_238 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca1c8;
    ppuStack_230 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca1f8;
    ppuStack_208 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca1e0;
    ppuStack_200 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca210;
    ppuStack_228 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca228;
    ppuStack_220 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca258;
    ppuStack_1f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca240;
    ppuStack_1f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca270;
    puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = *(long *)(param_5 + lVar23);
    func_0x00010c0c5d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar22;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar21 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar22);
        }
        lVar26 = *(long *)(lVar21 * 8);
        lVar27 = lVar26;
        func_0x00010c268120();
        if ((((lVar27 != 5) && (lVar27 = lVar26, func_0x00010c268120(), lVar27 != 6)) &&
            (lVar27 = lVar26, func_0x00010c268120(), lVar27 != 3)) &&
           (lVar27 = lVar26, func_0x00010c268120(), lVar27 != 7)) {
          puVar10 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
          func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar24));
          func_0x00010c013de0(puVar10);
          func_0x00010c16d4a0();
          func_0x00010c182220(puVar10);
          lVar27 = lVar26;
          func_0x00010bfe6ac0(lVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a9f00(puVar10);
          _objc_release(lVar27);
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c268120(lVar26);
          func_0x00010c0df780(puVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar14;
          func_0x00010c0e00e0(puVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010c067ec0();
          puVar18 = puVar10;
          func_0x00010c08c0e0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c227960((double)(int)puVar17);
          _objc_release(puVar18);
          _objc_release(puVar16);
          _objc_release(puVar15);
          func_0x00010befbb60(*(undefined8 *)(param_5 + lVar24));
          _objc_release(puVar10);
        }
        lVar21 = lVar21 + 1;
      } while (lVar2 != lVar21);
      lVar2 = lVar22;
      func_0x00010bf52a60();
    }
    _objc_release(lVar22);
    lVar12 = *(long *)(param_5 + lVar23);
    func_0x00010c130580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar12;
    func_0x00010bf52a60();
    lVar23 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar22 = 0;
      do {
        if (lRam0000000000000000 != lVar23) {
          _objc_enumerationMutation(lVar12);
        }
        uVar8 = *(undefined8 *)(lVar22 * 8);
        puVar10 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar24));
        func_0x00010c013de0(puVar10);
        func_0x00010c16d4a0();
        func_0x00010c182220(puVar10);
        uVar39 = uVar8;
        func_0x00010bfe6ac0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(puVar10);
        _objc_release(uVar39);
        puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c268120(uVar8);
        func_0x00010c0df780(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar14;
        func_0x00010c0e00e0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010c067ec0();
        puVar18 = puVar10;
        func_0x00010c08c0e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c227960((double)(int)puVar17);
        _objc_release(puVar18);
        _objc_release(puVar16);
        _objc_release(puVar15);
        func_0x00010befbb60(*(undefined8 *)(param_5 + lVar24));
        _objc_release(puVar10);
        lVar22 = lVar22 + 1;
      } while (lVar2 != lVar22);
      lVar2 = lVar12;
      func_0x00010bf52a60();
    }
    _objc_release(lVar12);
    func_0x00010befbb60();
    if (param_5[_DAT_112764714] == '\x01') {
      puVar15 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar2 = (long)_DAT_112764764;
      uVar39 = *(undefined8 *)(param_5 + lVar2);
      *(undefined **)(param_5 + lVar2) = puVar15;
      _objc_release(uVar39);
      _objc_release(puVar10);
      puVar15 = *(undefined **)(param_5 + lVar2);
      func_0x00010c08c0e0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = param_5;
      func_0x00010c08c0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(unaff_x20);
    }
    else {
      puVar15 = param_5;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4008000000000000);
      _objc_release(puVar15);
      puVar15 = param_5;
      func_0x00010c08c0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar15);
      puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar15;
      func_0x00010bf414e0(0x3fe0000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      unaff_x20 = puVar10;
      func_0x00010bdc0fe0(puVar10);
      puVar16 = param_5;
      func_0x00010c08c0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
      _objc_release(puVar16);
      _objc_release(puVar10);
      _objc_release(puVar15);
      puVar15 = param_5;
      func_0x00010c08c0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1733a0(0x3fe0000000000000);
    }
    _objc_release(puVar15);
    if (param_5[_DAT_112764738] == '\x01') {
      func_0x00010c0fe360();
    }
    _objc_release(puVar14);
    _objc_release(puStack_558);
    _objc_release(lVar3);
    _objc_release(puVar7);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 0x20);
  _objc_destroyWeak(&uStack_380);
  __Unwind_Resume(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bf97970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d8,PTR_s_entryWithLensId__1125c3800,param_6)
  ;
  return;
}



/* Entry: 107171f24; end: 107171f4b;  */

void FUN_107171f24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d8,PTR_s_entryWithLensId__1125c3800,param_2)
  ;
  return;
}



/* Entry: 107171f4c; end: 107171f67;  */

uint FUN_107171f4c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c081660(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 107171f68; end: 107172073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107171f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf20900(*(undefined8 *)(param_1 + _DAT_112764708));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126c4a10;
    uVar1 = param_2;
    func_0x00010c2790e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081160(param_2);
    func_0x00010c279700(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bf921e0(param_3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107172074; end: 107172077;  */

void FUN_107172074(void)

{
  return;
}



/* Entry: 107172078; end: 107172153; -[SCPreviewBlobMediaView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107172078(long param_1)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8a70;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010beb1380(param_1);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c220220(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112764748));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112764744));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112764760));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112764764));
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  return;
}



/* Entry: 107172154; end: 10717218b; -[SCPreviewBlobMediaView SCAMediaTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_107172154(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112764708);
  func_0x00010c0c6c20();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111815c8;
  if (lVar2 != 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111815e0;
  }
  return ppuVar1;
}



/* Entry: 10717218c; end: 10717227f; -[SCPreviewBlobMediaView play] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10717218c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined1 *)(param_1 + _DAT_112764738) = 1;
  lVar1 = *(long *)(param_1 + _DAT_112764708);
  func_0x00010c26f620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = (long)_DAT_11276473c;
  }
  else {
    func_0x00010bdc1120(&uStack_60,lVar1);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    uStack_70 = uStack_50;
    lVar2 = (long)_DAT_11276473c;
    func_0x00010c209aa0(*(undefined8 *)(param_1 + lVar2));
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    uStack_70 = uStack_50;
    uStack_a8 = uStack_40;
    uStack_b0 = uStack_48;
    uStack_a0 = uStack_38;
    _CMTimeAdd(&uStack_98,&uStack_80,&uStack_b0);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    func_0x00010c196240(*(undefined8 *)(param_1 + lVar2));
  }
  func_0x00010c2504a0(*(undefined8 *)(param_1 + lVar2));
  _objc_release(lVar1);
  return;
}



/* Entry: 107172280; end: 10717229b; -[SCPreviewBlobMediaView pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107172280(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112764738) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c2568b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276473c),PTR_s_stopRunning_112673450);
  return;
}



/* Entry: 10717229c; end: 1071722c7; -[SCPreviewBlobMediaView start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10717229c(long param_1)

{
  if (*(char *)(param_1 + _DAT_112764740) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_play_11261d2f8);
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112764738) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010beb1390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupViewIfNeeded_112589e88);
  return;
}



/* Entry: 1071722c8; end: 107172337; -[SCPreviewBlobMediaView stop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071722c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_112764740) = 0;
  *(undefined1 *)(param_1 + _DAT_112764738) = 0;
  lVar2 = (long)_DAT_11276473c;
  func_0x00010c2568a0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276474c);
  *(undefined8 *)(param_1 + _DAT_11276474c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764748);
  *(undefined8 *)(param_1 + _DAT_112764748) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107172338; end: 107172487; -[SCPreviewBlobMediaView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107172338(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112764734,0);
  _objc_storeStrong(param_1 + _DAT_112764730,0);
  _objc_storeStrong(param_1 + _DAT_11276472c,0);
  _objc_storeStrong(param_1 + _DAT_112764728,0);
  _objc_storeStrong(param_1 + _DAT_112764724,0);
  _objc_storeStrong(param_1 + _DAT_112764720,0);
  _objc_storeStrong(param_1 + _DAT_112764764,0);
  _objc_storeStrong(param_1 + _DAT_112764760,0);
  _objc_storeStrong(param_1 + _DAT_11276471c,0);
  _objc_storeStrong(param_1 + _DAT_11276475c,0);
  _objc_storeStrong(param_1 + _DAT_112764750,0);
  _objc_storeStrong(param_1 + _DAT_112764758,0);
  _objc_storeStrong(param_1 + _DAT_112764754,0);
  _objc_storeStrong(param_1 + _DAT_112764748,0);
  _objc_storeStrong(param_1 + _DAT_11276474c,0);
  _objc_storeStrong(param_1 + _DAT_11276473c,0);
  _objc_storeStrong(param_1 + _DAT_112764744,0);
  _objc_storeStrong(param_1 + _DAT_112764718,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112764708,0);
  return;
}



/* Entry: 107172488; end: 1071726a7; +[SCPreviewMediaViewGeofilterHelper addViewForGeofilter:container:userSession:] */

void FUN_107172488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126d4e38;
  _objc_retain(param_9);
  _objc_alloc();
  func_0x00010bf20c00(param_8);
  func_0x00010c06c000(param_7);
  func_0x00010c013e80(param_1,param_2,param_3,param_4);
  uVar2 = param_7;
  func_0x00010c2306a0();
  if ((uVar2 & 1) == 0) {
    puVar7 = PTR_PTR_1126d4e38;
    _objc_alloc();
    func_0x00010bf20c00(param_8);
    func_0x00010c013e80();
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  puVar3 = PTR_PTR_1126b2718;
  _objc_alloc();
  func_0x00010c0044c0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  func_0x00010bfa7640(puVar3);
  _objc_release(param_9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010befbb60(param_8);
  if (puVar7 != (undefined *)0x0) {
    func_0x00010befbb60(param_8);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  lVar5 = param_6;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_7 + 0x20);
    lVar5 = param_6;
    func_0x00010bfe7300(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e3c0(param_6);
    func_0x00010c104360(param_6);
    func_0x00010c1aa320(uVar6);
    _objc_release(lVar5);
    if (*(long *)(param_7 + 0x28) != 0) {
      lVar5 = param_6;
      func_0x00010bf8ba20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(param_7 + 0x28);
        lVar5 = param_6;
        func_0x00010bf8ba20(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e3c0(param_6);
        func_0x00010c104360(param_6);
        func_0x00010c1aa320(uVar6);
        _objc_release(lVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1071726a8; end: 1071727b3;  */

void FUN_1071726a8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bfe7300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e3c0(param_2);
    func_0x00010c104360(param_2);
    func_0x00010c1aa320(uVar2);
    _objc_release(lVar1);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar1 = param_2;
      func_0x00010bf8ba20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        lVar1 = param_2;
        func_0x00010bf8ba20(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e3c0(param_2);
        func_0x00010c104360(param_2);
        func_0x00010c1aa320(uVar2);
        _objc_release(lVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071727b4; end: 107172a3f; -[SCSendPreviewBlobPreviewModel initWithPreviewBlob:userSession:previewConfiguration:captionDataProvider:videoTrackingServices:contentDeliveryServices:stickerInjector:creativeToolsABProvider:itemViewService:imageProcessRenderingSessionFactory:] */

undefined8 ***
FUN_1071727b4(undefined8 ***param_1,undefined8 param_2,undefined8 **param_3,undefined8 **param_4,
             undefined8 **param_5,undefined8 **param_6,undefined8 **param_7,undefined8 **param_8,
             undefined8 **param_9,undefined8 **param_10,undefined8 **param_11,undefined8 **param_12)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  if (param_3 == (undefined8 **)0x0) {
    pppuVar1 = (undefined8 ***)0x0;
  }
  else {
    puStack_68 = PTR_PTR_1126f8a78;
    pppuVar1 = &ppuStack_70;
    ppuStack_70 = param_1;
    _objc_msgSendSuper2(pppuVar1,PTR_s_init_1125d9248);
    if (pppuVar1 != (undefined8 ***)0x0) {
      _objc_retain(param_3);
      ppuVar2 = pppuVar1[1];
      pppuVar1[1] = param_3;
      _objc_release(ppuVar2);
      _objc_retain(param_4);
      ppuVar2 = pppuVar1[2];
      pppuVar1[2] = param_4;
      _objc_release(ppuVar2);
      _objc_retain(param_5);
      ppuVar2 = pppuVar1[3];
      pppuVar1[3] = param_5;
      _objc_release(ppuVar2);
      _objc_retain(param_6);
      ppuVar2 = pppuVar1[4];
      pppuVar1[4] = param_6;
      _objc_release(ppuVar2);
      _objc_retain(param_7);
      ppuVar2 = pppuVar1[6];
      pppuVar1[6] = param_7;
      _objc_release(ppuVar2);
      _objc_retain(param_8);
      ppuVar2 = pppuVar1[7];
      pppuVar1[7] = param_8;
      _objc_release(ppuVar2);
      _objc_retain(param_9);
      ppuVar2 = pppuVar1[8];
      pppuVar1[8] = param_9;
      _objc_release(ppuVar2);
      _objc_retain(param_10);
      ppuVar2 = pppuVar1[9];
      pppuVar1[9] = param_10;
      _objc_release(ppuVar2);
      _objc_retain(param_11);
      ppuVar2 = pppuVar1[10];
      pppuVar1[10] = param_11;
      _objc_release(ppuVar2);
      _objc_retain(param_12);
      ppuVar2 = pppuVar1[0xb];
      pppuVar1[0xb] = param_12;
      _objc_release(ppuVar2);
      ppuVar2 = param_5;
      func_0x00010c2485a0();
      _objc_retainAutoreleasedReturnValue();
      *(bool *)(pppuVar1 + 5) = ppuVar2 != (undefined8 **)0x0;
      _objc_release();
      func_0x00010be9aaa0(pppuVar1);
    }
    _objc_retain(pppuVar1);
    param_1 = pppuVar1;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return pppuVar1;
}



/* Entry: 107172a40; end: 107172c13; -[SCSendPreviewBlobPreviewModel _scalePreviewBlobIfNeeded:] */

void FUN_107172a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c232fa0();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    uVar1 = uVar3;
    func_0x00010c06e860();
    if ((int)uVar1 != 0) {
      lVar4 = *(long *)(param_1 + 8);
      func_0x00010bf5c9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar3);
      if (lVar4 != 0) goto LAB_107172bfc;
      uVar1 = param_3;
      func_0x00010c2440e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x000107ff9dd8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar1);
      uVar1 = uVar3;
      func_0x00010c130740(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c186260(*(undefined8 *)(param_1 + 8));
      goto LAB_107172b50;
    }
  }
  else {
    uVar1 = uVar3;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x000107ff9fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c130740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(*(undefined8 *)(param_1 + 8));
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe6ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c2440e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e180();
    uVar5 = uVar3;
    func_0x00010bf5c820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 8));
    _objc_release(uVar5);
LAB_107172b50:
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
LAB_107172bfc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107172c14; end: 107172c1b; -[SCSendPreviewBlobPreviewModel chatMessage] */

void FUN_107172c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_prefilledChatMessageInSendTo_11261fb38);
  return;
}



/* Entry: 107172c1c; end: 107172c23; -[SCSendPreviewBlobPreviewModel viewStyle] */

undefined8 FUN_107172c1c(void)

{
  return 0;
}



/* Entry: 107172c24; end: 107172c2b; -[SCSendPreviewBlobPreviewModel mediaViewAspectRatio] */

void FUN_107172c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c40b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_mediaAspectRatioForDisplay_11260ea40);
  return;
}



/* Entry: 107172c2c; end: 107172d0b; -[SCSendPreviewBlobPreviewModel mediaView] */

void FUN_107172c2c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c2485a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b8420();
    bVar2 = lVar4 == 2;
    _objc_release(lVar3);
  }
  else {
    bVar2 = false;
  }
  puVar5 = PTR_PTR_1126d2678;
  _objc_alloc(PTR_PTR_1126d2678);
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2485a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf91760();
  func_0x00010c039720(puVar5,param_2,uVar8,uVar1,uVar7,bVar2,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58));
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107172d0c; end: 107172d1f; -[SCSendPreviewBlobPreviewModel shareType] */

void FUN_107172d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d4e40,PTR_s_shareTypeFromPreviewConfiguratio_112668698,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 107172d20; end: 107172d27; -[SCSendPreviewBlobPreviewModel setPreviewBlobImage:] */

void FUN_107172d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 107172d28; end: 107172db7; -[SCSendPreviewBlobPreviewModel .cxx_destruct] */

void FUN_107172d28(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107172db8; end: 107172ddb; +[SCSendPreviewLogger shareTypeFromPreviewConfiguration:] */

undefined8 FUN_107172db8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010c07e920();
  uVar1 = 7;
  if (param_3 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107172ddc; end: 107172e3b;  */

void FUN_107172ddc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea0bd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ea0bd8,
                      &PTR____CFConstantStringClassReference_110ea0bf8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107172e3c; end: 107172e47; -[SCPreviewExportDefaultPolicy needToEmbedOverlay] */

void FUN_107172e3c(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 107172e48; end: 107172e4f; -[SCPreviewExportDefaultPolicy overlayShouldBeEmbedded] */

undefined1 FUN_107172e48(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107172e50; end: 107172e87; -[SCPreviewExportDefaultPolicy needToWatermarkWithText:] */

void FUN_107172e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 9) = 1;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107172e88; end: 107172e8f; -[SCPreviewExportDefaultPolicy snapShouldBeWatermarked] */

undefined1 FUN_107172e88(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107172e90; end: 107172eb7; -[SCPreviewExportDefaultPolicy watermarkText] */

void FUN_107172e90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107172eb8; end: 107172ec3; -[SCPreviewExportDefaultPolicy setIsAnimatedLensSave] */

void FUN_107172eb8(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107172ec4; end: 107172ecb; -[SCPreviewExportDefaultPolicy isAnimatedLensSave] */

undefined1 FUN_107172ec4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 107172ecc; end: 107172f8f; -[SCPreviewExportDefaultPolicy initWithCoder:] */

undefined1 * FUN_107172ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8a80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x18) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107172f90; end: 107173017; -[SCPreviewExportDefaultPolicy encodeWithCoder:] */

void FUN_107172f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea0c18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110ea0c38);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ea0c58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ea0c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107173018; end: 107173023; -[SCPreviewExportDefaultPolicy .cxx_destruct] */

void FUN_107173018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107173024; end: 10717311b;  */

void FUN_107173024(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bcf38;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126bcf40;
  _objc_opt_new(PTR_PTR_1126bcf40);
  lVar3 = param_1;
  func_0x00010c067fc0();
  _objc_release(param_1);
  if (lVar3 != 0) {
    puVar4 = puVar2;
    func_0x00010c094680(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(puVar4);
  }
  if (param_2 != 0) {
    func_0x00010c1ca440(puVar2);
  }
  func_0x00010c176b80(puVar2);
  puVar4 = PTR_PTR_1126b0380;
  func_0x00010c291260(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dea0(puVar2);
  _objc_release(puVar4);
  func_0x00010c1ad820(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10717311c; end: 1071737bb; -[SCPreviewExporter initWithOverlayComposition:previewScopeServices:filterOverlayComposition:filterApplicationMetadataProvider:snapVideoFilterFactory:music:voiceover:timer:bounce:viewportController:videoPlayback:snapCrop:videoPlaybackControls:videoPlaybackControlsLegacy:spectaclesAuxiliaryContentServices:uco:ucoInMemories:previewLoggingServices:commonLoggingParamsBuilder:memoriesPreviewShareSheetExportScopeExposer:spectaclesCustomExportScopeExposer:memoriesActivityController:captionDataProvider:dialogCoordinator:configuration:userSession:snapVideoFilterAdaptor:bundledLensProvider:previewAssetVideoProviderFactory:snapVideoFilterScopeExposer:memoriesActivityItemProviderBuilder:memoriesCloudFS:galleryLogger:videoTrackingServices:contentDeliveryServices:stickerInjector:previewABProvider:creativeToolsABProvider:textToSpeech:imagePlayback:itemViewService:imageProcessRenderingSessionFactory:] */

undefined8 *
FUN_10717311c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  puStack_70 = PTR_PTR_1126f8a88;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_5);
    _objc_storeWeak(puVar1 + 0xe,param_6);
    _objc_storeWeak(puVar1 + 0xf,param_7);
    _objc_storeWeak(puVar1 + 0x12,param_8);
    _objc_storeWeak(puVar1 + 0x13,param_9);
    _objc_storeWeak(puVar1 + 0x14,param_10);
    _objc_storeWeak(puVar1 + 0x15,param_11);
    _objc_storeWeak(puVar1 + 0x10,param_12);
    _objc_storeWeak(puVar1 + 0x16,param_13);
    _objc_retain(param_14);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_14;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x18,param_15);
    _objc_storeWeak(puVar1 + 0x19,param_16);
    _objc_storeWeak(puVar1 + 0x1a,param_17);
    _objc_storeWeak(puVar1 + 0x1b,param_18);
    _objc_storeWeak(puVar1 + 0x1c,param_19);
    _objc_storeWeak(puVar1 + 0x1d,param_20);
    _objc_storeWeak(puVar1 + 0x1e,param_21);
    _objc_storeWeak(puVar1 + 0x1f,param_22);
    _objc_storeWeak(puVar1 + 0x20,param_23);
    _objc_storeWeak(puVar1 + 0x21,param_24);
    _objc_storeWeak(puVar1 + 0x22,param_25);
    _objc_retain(param_26);
    uVar2 = puVar1[7];
    puVar1[7] = param_26;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x23,param_27);
    _objc_storeWeak(puVar1 + 0x24,param_28);
    _objc_retain(param_29);
    uVar2 = puVar1[1];
    puVar1[1] = param_29;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_30);
    _objc_retain(param_31);
    uVar2 = puVar1[2];
    puVar1[2] = param_31;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_32);
    _objc_storeWeak(puVar1 + 8,param_33);
    _objc_storeWeak(puVar1 + 9,param_34);
    _objc_storeWeak(puVar1 + 10,param_35);
    _objc_storeWeak(puVar1 + 0x25,param_36);
    _objc_storeWeak(puVar1 + 0x26,param_37);
    _objc_storeWeak(puVar1 + 0x27,param_38);
    _objc_storeWeak(puVar1 + 0x28,param_39);
    _objc_storeWeak(puVar1 + 0x29,param_40);
    _objc_storeWeak(puVar1 + 0x2a,param_41);
    _objc_storeWeak(puVar1 + 0x11,param_42);
    _objc_storeWeak(puVar1 + 0x2b,param_43);
    _objc_storeWeak(puVar1 + 0x2c,param_44);
  }
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1071737bc; end: 10717396b; -[SCPreviewExporter imageWithExportPolicy:completion:] */

void FUN_1071737bc(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c242d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if ((param_4 == 0) || (lVar2 == 0)) {
    if (lVar2 == 0) {
LAB_107173858:
      uVar5 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be98560(param_2);
      _objc_retain(param_5);
      func_0x00010bfc9ec0(param_1,uVar5);
      _objc_release(uVar5);
      lVar2 = param_5;
      goto LAB_10717393c;
    }
  }
  else {
    uVar3 = param_4;
    func_0x00010c0efd60();
    if ((uVar3 & 1) != 0) {
      uVar3 = param_2 + 0x140;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010bf8dba0();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) goto LAB_107173858;
    }
  }
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c242d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
  (**(code **)(param_5 + 0x10))(param_5,lVar2,0);
LAB_10717393c:
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10717396c; end: 10717397b;  */

void FUN_10717396c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107173978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 10717397c; end: 107173a27; -[SCPreviewExporter videoURLWithExportPolicy:completion:] */

void FUN_10717397c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0d7160(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107173a28;
  puStack_40 = &UNK_1109908e8;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c29a0e0(param_1,param_2,param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 107173a28; end: 107173a9b;  */

void FUN_107173a28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bfae700(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107173a9c; end: 107173b17;  */

void FUN_107173a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 107173b18; end: 1071751c3; -[SCPreviewExporter videoFilterAtCurrentStateWithExportPolicy:completion:] */

void FUN_107173b18(double *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  ulong uVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  undefined *puVar12;
  double dVar13;
  double *pdVar14;
  double *pdVar15;
  double dVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  double *pdVar20;
  double *pdVar21;
  double *pdVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  double *pdVar27;
  double *unaff_x27;
  float fVar28;
  double dVar29;
  double dVar30;
  undefined *puStack_220;
  undefined *puStack_1f0;
  double *pdStack_1e8;
  undefined *puStack_1e0;
  double *pdStack_1d8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  double *pdStack_188;
  double *pdStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  double *pdStack_150;
  ulong uStack_148;
  double *pdStack_140;
  double *pdStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  double *pdStack_110;
  double *pdStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double *pdStack_98;
  double *pdStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  pdVar2 = param_1 + 0x23;
  _objc_loadWeakRetained();
  pdVar3 = pdVar2;
  func_0x00010c075080();
  _objc_release(pdVar2);
  pdVar2 = param_1 + 0x23;
  _objc_loadWeakRetained();
  pdVar4 = pdVar2;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(pdVar2);
  if (((int)pdVar3 == 0) && (pdVar4 == (double *)0x0)) {
    pdVar2 = param_1 + 0x23;
    _objc_loadWeakRetained();
    func_0x00010c07e920();
    _objc_release(pdVar2);
  }
  uVar5 = param_3;
  func_0x00010c06c060();
  if (((int)uVar5 == 0) || (uVar5 = param_3, func_0x00010c0efd60(), (uVar5 & 1) == 0)) {
    func_0x00010c0efd60();
  }
  pdVar3 = &dStack_100;
  pdVar2 = param_1 + 0xf;
  _objc_loadWeakRetained();
  pdVar4 = pdVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar6 = pdVar4;
  func_0x00010bf58fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pdVar4);
  _objc_release(pdVar2);
  pdVar2 = param_1 + 0x23;
  _objc_loadWeakRetained(pdVar2);
  func_0x00010c242400();
  func_0x00010c2056c0(pdVar6);
  _objc_release(pdVar2);
  pdVar2 = param_1;
  func_0x00010c2a0940();
  _objc_retainAutoreleasedReturnValue();
  pdVar4 = pdVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar7 = pdVar4;
  func_0x00010bf08020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(pdVar4);
  _objc_release(pdVar2);
  puVar12 = PTR__kCMTimeZero_110348670;
  if (pdVar7 == (double *)0x0) {
    puStack_1e0 = (undefined *)0x0;
  }
  else {
    puStack_1e0 = PTR_PTR_1126d4db0;
    _objc_alloc();
    pdVar2 = param_1;
    func_0x00010c2a0940(param_1);
    _objc_retainAutoreleasedReturnValue();
    pdVar4 = pdVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdVar7 = pdVar4;
    func_0x00010bf08020();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = *(undefined8 *)(puVar12 + 8);
    dStack_e0 = *(double *)puVar12;
    uStack_d0 = *(undefined8 *)(puVar12 + 0x10);
    func_0x00010bff51c0();
    _objc_release(pdVar7);
    _objc_release(pdVar4);
    _objc_release(pdVar2);
  }
  pdVar2 = param_1;
  func_0x00010c26c8e0();
  _objc_retainAutoreleasedReturnValue();
  pdVar4 = pdVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar7 = pdVar4;
  func_0x00010bf60820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(pdVar4);
  _objc_release(pdVar2);
  if (pdVar7 == (double *)0x0) {
    puStack_220 = (undefined *)0x0;
  }
  else {
    puStack_220 = PTR_PTR_1126c4a68;
    _objc_alloc();
    pdVar2 = param_1;
    func_0x00010c26c8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    pdVar4 = pdVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdVar7 = pdVar4;
    func_0x00010bf60820();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = *(undefined8 *)(puVar12 + 8);
    dStack_e0 = *(double *)puVar12;
    uStack_d0 = *(undefined8 *)(puVar12 + 0x10);
    func_0x00010b056d1c(puStack_220,pdVar7,&dStack_e0);
    _objc_release(pdVar7);
    _objc_release(pdVar4);
    _objc_release(pdVar2);
  }
  pdVar2 = param_1 + 0x16;
  _objc_loadWeakRetained();
  pdVar4 = pdVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar7 = pdVar4;
  func_0x00010c0d24a0();
  _objc_retainAutoreleasedReturnValue();
  pdVar8 = pdVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pdVar7);
  _objc_release(pdVar4);
  _objc_release(pdVar2);
  uStack_a8 = *(undefined8 *)(puVar12 + 8);
  dStack_b0 = *(double *)puVar12;
  uStack_a0 = *(undefined8 *)(puVar12 + 0x10);
  if (pdVar8 != (double *)0x0) {
    func_0x00010bdc1120(&dStack_e0,pdVar8);
    uStack_a8 = uStack_d8;
    dStack_b0 = dStack_e0;
    uStack_a0 = uStack_d0;
  }
  uVar5 = param_3;
  func_0x00010c06c060();
  if ((uVar5 & 1) == 0) {
    pdVar2 = param_1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    pdVar4 = pdVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdStack_1e8 = pdVar4;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pdVar4);
    _objc_release(pdVar2);
    _objc_retain(puStack_220);
    puStack_1f0 = puStack_220;
  }
  else {
    puStack_1f0 = (undefined *)0x0;
    pdStack_1e8 = (double *)0x0;
  }
  pdVar2 = param_1 + 0x16;
  _objc_loadWeakRetained(pdVar2);
  pdVar9 = pdVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar27 = pdVar9;
  func_0x00010c0cece0();
  _objc_retainAutoreleasedReturnValue();
  pdVar10 = pdVar27;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  pdVar4 = param_1 + 0x16;
  _objc_loadWeakRetained(pdVar4);
  pdVar7 = pdVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar11 = pdVar7;
  func_0x00010c2a0fe0();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uStack_a8;
  dStack_100 = dStack_b0;
  uStack_f0 = uStack_a0;
  dVar30 = dStack_b0;
  func_0x000108453a1c(&dStack_e0,pdStack_1e8,puStack_1e0,puStack_1f0,0,pdVar10,pdVar11,&dStack_100);
  _objc_release(pdVar11);
  _objc_release(pdVar7);
  _objc_release(pdVar4);
  _objc_release(pdVar10);
  _objc_release(pdVar27);
  _objc_release(pdVar9);
  _objc_release(pdVar2);
  func_0x00010c1c8720(pdVar6);
  func_0x00010c16f280(pdVar6);
  func_0x00010c16bf80(pdVar6);
  func_0x00010c16bfa0(pdVar6);
  pdVar2 = param_1 + 3;
  _objc_loadWeakRetained();
  func_0x00010c110c60();
  _objc_release();
  _dispatch_group_create();
  pdVar4 = param_1 + 0x23;
  _objc_loadWeakRetained();
  pdVar9 = pdVar4;
  func_0x00010c075080();
  _objc_release(pdVar4);
  if ((int)pdVar9 != 0) {
    pdVar3 = param_1 + 0xe;
    _objc_loadWeakRetained();
    pdVar4 = pdVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdVar9 = pdVar4;
    func_0x00010c06c200();
    _objc_release(pdVar4);
    _objc_release(pdVar3);
    dVar30 = 5.0;
    if ((int)pdVar9 == 0) {
      dVar30 = 3.0;
    }
    pdVar3 = pdVar6;
    func_0x00010bf0f680();
    _objc_retainAutoreleasedReturnValue();
    pdVar4 = pdVar3;
    func_0x00010bf529e0();
    dVar29 = 10.0;
    if (pdVar4 != (double *)0x0) {
      dVar30 = 10.0;
    }
    _objc_release(pdVar3);
    pdVar3 = param_1 + 0x14;
    _objc_loadWeakRetained();
    pdVar27 = pdVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdVar4 = pdVar27;
    func_0x00010c081200();
    if (((ulong)pdVar4 & 1) == 0) {
      pdVar7 = param_1 + 0x14;
      _objc_loadWeakRetained(pdVar7);
      pdVar10 = pdVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe75c0();
      dVar30 = dVar29;
    }
    func_0x00010c1aa220(dVar30,pdVar6);
    if (((ulong)pdVar4 & 1) == 0) {
      _objc_release(pdVar10);
      _objc_release(pdVar7);
    }
    _objc_release(pdVar27);
    _objc_release(pdVar3);
    func_0x00010c0efd60(param_3);
    func_0x00010c21d9a0(pdVar6);
    pdVar3 = param_1 + 0xe;
    _objc_loadWeakRetained();
    pdVar7 = pdVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdStack_1d8 = pdVar7;
    func_0x00010bf08000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pdVar7);
    _objc_release(pdVar3);
    puVar12 = PTR_PTR_1126c4798;
    func_0x00010c0b7b40(PTR_PTR_1126c4798);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b160(pdVar6);
    _objc_release(puVar12);
    if ((int)pdVar9 == 0) {
      _dispatch_group_enter(pdVar2);
      pdVar3 = param_1 + 0xd;
      _objc_loadWeakRetained(pdVar3);
      pdVar4 = pdVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be98560(param_1);
      pdVar7 = pdVar4;
      func_0x00010bfbf520(pdVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pdVar4);
      _objc_release(pdVar3);
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      dVar30 = 1.60807493534087e-314;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_1071751c4;
      puStack_118 = &UNK_1108be268;
      _objc_retain(pdVar6);
      pdVar3 = pdVar2;
      pdStack_110 = pdVar6;
      _objc_retain(pdVar2);
      pdStack_108 = pdVar2;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(pdVar7);
      _objc_release(pdVar3);
      _objc_release(pdStack_108);
      pdVar4 = pdStack_110;
    }
    else {
      pdVar3 = param_1 + 0x1b;
      _objc_loadWeakRetained(pdVar3);
      pdVar7 = pdVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf475c0();
      _objc_release(pdVar7);
      _objc_release(pdVar3);
      pdVar3 = param_1 + 0x23;
      _objc_loadWeakRetained();
      pdVar7 = pdVar3;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      pdVar9 = pdVar7;
      func_0x00010c081be0();
      _objc_release(pdVar7);
      _objc_release(pdVar3);
      pdVar7 = (double *)PTR_PTR_1126c3c98;
      _objc_alloc(PTR_PTR_1126c3c98);
      pdVar3 = param_1 + 0x23;
      _objc_loadWeakRetained(pdVar3);
      if ((int)pdVar9 == 0) {
        pdVar27 = (double *)0x0;
      }
      else {
        pdVar4 = param_1 + 0x1a;
        _objc_loadWeakRetained(pdVar4);
        pdVar11 = pdVar4;
        func_0x00010c1307e0();
        _objc_retainAutoreleasedReturnValue();
        pdVar27 = pdVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
      }
      pdVar10 = param_1;
      func_0x00010c27e760(param_1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = pdVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c001ea0(pdVar7);
      _objc_release(unaff_x27);
      _objc_release(pdVar10);
      if ((int)pdVar9 != 0) {
        _objc_release(pdVar27);
        _objc_release(pdVar11);
        _objc_release(pdVar4);
      }
      _objc_release(pdVar3);
      pdVar3 = pdVar7;
      func_0x00010c0918c0(pdVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bb2c0(pdVar6);
      _objc_release(pdVar3);
      dVar16 = param_1[0x17];
      func_0x00010c269d40(dVar16);
      _objc_retainAutoreleasedReturnValue();
      dVar29 = dVar16;
      func_0x00010bf5e580();
      _objc_retainAutoreleasedReturnValue();
      dVar13 = dVar29;
      func_0x00010bf52160();
      func_0x00010c186260(pdVar6);
      _objc_release(dVar13);
      _objc_release(dVar29);
      _objc_release(dVar16);
      pdVar4 = param_1;
      func_0x00010bfe8440(param_1);
      _objc_retainAutoreleasedReturnValue();
      pdVar3 = pdVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pdVar11 = pdVar3;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be94780(param_1);
      _objc_release(pdVar11);
      _objc_release(pdVar3);
    }
    goto LAB_107174da0;
  }
  pdVar4 = param_1 + 0x15;
  _objc_loadWeakRetained();
  pdVar7 = pdVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar9 = pdVar7;
  func_0x00010bf208a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(pdVar7);
  _objc_release(pdVar4);
  if (pdVar9 != (double *)0x0) {
    pdVar4 = param_1 + 0x23;
    _objc_loadWeakRetained(pdVar4);
    fVar28 = SUB84(dVar30,0);
    pdVar7 = pdVar4;
    func_0x00010c29ae80();
    _objc_retainAutoreleasedReturnValue();
    pdVar9 = pdVar7;
    func_0x00010c0d9500();
    _objc_release(pdVar7);
    _objc_release(pdVar4);
    pdVar4 = param_1 + 0x15;
    _objc_loadWeakRetained(pdVar4);
    pdVar7 = pdVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdVar27 = pdVar7;
    func_0x00010bf208a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(pdVar27);
    _objc_release(pdVar7);
    _objc_release(pdVar4);
    dVar30 = (double)fVar28;
    dVar29 = param_1[2];
    func_0x00010bf209a0(dVar30,dVar29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221d20(pdVar6);
    _objc_release(dVar29);
    _objc_release(pdVar9);
  }
  pdVar4 = pdVar6;
  func_0x00010c29ae80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (pdVar4 == (double *)0x0) {
    pdVar4 = param_1 + 0x23;
    _objc_loadWeakRetained(pdVar4);
    pdVar7 = pdVar4;
    func_0x00010c29ae80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221d20(pdVar6);
    _objc_release(pdVar7);
    _objc_release(pdVar4);
  }
  pdVar4 = param_1 + 0x23;
  _objc_loadWeakRetained();
  pdVar7 = pdVar4;
  func_0x00010c0811c0();
  if ((int)pdVar7 == 0) {
LAB_107174534:
    _objc_release(pdVar4);
  }
  else {
    pdVar7 = param_1 + 0x23;
    _objc_loadWeakRetained();
    pdVar9 = pdVar7;
    func_0x00010c07e920();
    _objc_release(pdVar7);
    _objc_release(pdVar4);
    if ((int)pdVar9 != 0) {
      pdVar7 = param_1 + 0x23;
      _objc_loadWeakRetained(pdVar7);
      pdVar9 = pdVar7;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      pdVar27 = pdVar9;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      pdVar4 = pdVar27;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pdVar27);
      _objc_release(pdVar9);
      _objc_release(pdVar7);
      puVar12 = PTR_PTR_1126d2640;
      _objc_alloc(PTR_PTR_1126d2640);
      func_0x00010c0613e0();
      func_0x00010c221d20(pdVar6);
      _objc_release(puVar12);
      goto LAB_107174534;
    }
  }
  pdVar4 = param_1 + 3;
  _objc_loadWeakRetained(pdVar4);
  func_0x00010c2284a0();
  _objc_release(pdVar4);
  pdVar4 = param_1 + 0xe;
  _objc_loadWeakRetained();
  pdVar7 = pdVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar9 = pdVar7;
  func_0x00010bf07e20();
  _objc_retainAutoreleasedReturnValue();
  pdStack_1d8 = pdVar9;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pdVar9);
  _objc_release(pdVar7);
  _objc_release(pdVar4);
  pdVar4 = pdStack_1d8;
  func_0x00010c08fa60();
  if (pdVar4 != (double *)0x0) {
    func_0x00010c19c2e0(pdVar6);
  }
  pdVar4 = param_1 + 0xe;
  _objc_loadWeakRetained(pdVar4);
  pdVar7 = pdVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar9 = pdVar7;
  func_0x00010bf07e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb040(pdVar6);
  _objc_release(pdVar9);
  _objc_release(pdVar7);
  _objc_release(pdVar4);
  pdVar4 = param_1 + 0xe;
  _objc_loadWeakRetained(pdVar4);
  pdVar9 = pdVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar7 = pdVar9;
  func_0x00010bf08000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pdVar9);
  _objc_release(pdVar4);
  puVar12 = PTR_PTR_1126c4798;
  func_0x00010c0b7b40(PTR_PTR_1126c4798);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b160(pdVar6);
  _objc_release(puVar12);
  func_0x00010c1a8660(pdVar6);
  func_0x00010c1f5d00(pdVar6);
  func_0x00010be98580(param_1);
  func_0x00010c2220a0(pdVar6);
  pdVar4 = param_1 + 3;
  _objc_loadWeakRetained(pdVar4);
  func_0x00010bf4d820();
  func_0x00010c222080(pdVar6);
  _objc_release(pdVar4);
  pdVar4 = param_1 + 0x16;
  _objc_loadWeakRetained(pdVar4);
  pdVar9 = pdVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60b40();
  func_0x00010c221cc0(pdVar6);
  _objc_release(pdVar9);
  _objc_release(pdVar4);
  dVar16 = param_1[0x17];
  func_0x00010c269d40(dVar16);
  _objc_retainAutoreleasedReturnValue();
  dVar29 = dVar16;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  dVar13 = dVar29;
  func_0x00010bf52160();
  func_0x00010c186260(pdVar6);
  _objc_release(dVar13);
  _objc_release(dVar29);
  _objc_release(dVar16);
  func_0x00010be98560(param_1);
  func_0x00010c186240(pdVar6);
  pdVar4 = param_1 + 0x10;
  _objc_loadWeakRetained();
  pdVar9 = pdVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar27 = pdVar9;
  func_0x00010bf14000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(pdVar9);
  _objc_release(pdVar4);
  if (pdVar27 != (double *)0x0) {
    pdVar4 = param_1 + 0x10;
    _objc_loadWeakRetained();
    pdVar9 = pdVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdVar27 = pdVar9;
    func_0x00010bf14000();
    _objc_retainAutoreleasedReturnValue();
    pdVar11 = pdVar27;
    func_0x00010c274320();
    _objc_retainAutoreleasedReturnValue();
    pdVar3 = param_1 + 0x10;
    pdStack_98 = pdVar11;
    _objc_loadWeakRetained();
    pdVar10 = pdVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdVar14 = pdVar10;
    func_0x00010bf14000();
    _objc_retainAutoreleasedReturnValue();
    pdVar15 = pdVar14;
    func_0x00010bf20040();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pdStack_90 = pdVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e4e0(pdVar6);
    _objc_release(puVar12);
    _objc_release(pdVar15);
    _objc_release(pdVar14);
    _objc_release(pdVar10);
    _objc_release(pdVar3);
    _objc_release(pdVar11);
    _objc_release(pdVar27);
    _objc_release(pdVar9);
    _objc_release(pdVar4);
  }
  pdVar4 = param_1 + 0x18;
  _objc_loadWeakRetained();
  pdVar9 = pdVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pdVar27 = pdVar9;
  func_0x00010c0818c0();
  _objc_release(pdVar9);
  _objc_release(pdVar4);
  if ((int)pdVar27 == 0) {
    pdVar4 = param_1 + 0x19;
    _objc_loadWeakRetained();
    pdVar9 = pdVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdVar27 = pdVar9;
    func_0x00010c0818a0();
    if ((int)pdVar27 == 0) goto LAB_107174adc;
    pdVar27 = param_1 + 0x19;
    _objc_loadWeakRetained();
    pdVar10 = pdVar27;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdVar14 = pdVar10;
    func_0x00010c0778e0();
    _objc_release(pdVar10);
    _objc_release(pdVar27);
    _objc_release(pdVar9);
    _objc_release(pdVar4);
    if ((int)pdVar14 != 0) {
      pdVar4 = param_1 + 0x19;
      _objc_loadWeakRetained(pdVar4);
      pdVar9 = pdVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pdVar27 = pdVar9;
      func_0x00010c100500();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214ee0(pdVar6);
      goto LAB_107174940;
    }
  }
  else {
    pdVar4 = param_1 + 0x18;
    _objc_loadWeakRetained(pdVar4);
    pdVar9 = pdVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdVar27 = pdVar9;
    func_0x00010c27c960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214ee0(pdVar6);
LAB_107174940:
    _objc_release(pdVar27);
LAB_107174adc:
    _objc_release(pdVar9);
    _objc_release(pdVar4);
  }
  pdVar4 = param_1 + 0x23;
  _objc_loadWeakRetained();
  pdVar9 = pdVar4;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  pdVar27 = pdVar9;
  func_0x00010c081be0();
  _objc_release(pdVar9);
  _objc_release(pdVar4);
  iVar26 = (int)pdVar27;
  if (iVar26 != 0) {
    pdVar4 = param_1 + 0x23;
    _objc_loadWeakRetained(pdVar4);
    pdVar9 = pdVar4;
    func_0x00010c249660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207a40(pdVar6);
    _objc_release(pdVar9);
    _objc_release(pdVar4);
  }
  pdVar4 = (double *)PTR_PTR_1126c3c98;
  _objc_alloc(PTR_PTR_1126c3c98);
  pdVar9 = param_1 + 0x23;
  _objc_loadWeakRetained(pdVar9);
  if (iVar26 == 0) {
    unaff_x27 = (double *)0x0;
  }
  else {
    pdVar11 = param_1 + 0x1a;
    _objc_loadWeakRetained(pdVar11);
    pdVar3 = pdVar11;
    func_0x00010c1307e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = pdVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  pdVar27 = param_1;
  func_0x00010c27e760(param_1);
  _objc_retainAutoreleasedReturnValue();
  pdVar10 = pdVar27;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001ea0(pdVar4);
  _objc_release(pdVar10);
  _objc_release(pdVar27);
  if (iVar26 != 0) {
    _objc_release(unaff_x27);
    _objc_release(pdVar3);
    _objc_release(pdVar11);
  }
  _objc_release(pdVar9);
  pdVar3 = pdVar4;
  func_0x00010c0918c0(pdVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb2c0(pdVar6);
  _objc_release(pdVar3);
LAB_107174da0:
  _objc_release(pdVar4);
  _objc_release(pdVar7);
  _objc_release(pdStack_1d8);
  pdVar3 = param_1 + 0x23;
  _objc_loadWeakRetained();
  pdVar9 = pdVar3;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  pdVar27 = pdVar9;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  pdVar10 = pdVar27;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  pdVar14 = param_1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  pdVar15 = pdVar14;
  func_0x00010c269d40(pdVar14);
  _objc_retainAutoreleasedReturnValue();
  pdVar17 = pdVar15;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  pdVar18 = pdVar17;
  func_0x00010c277e80();
  pdVar4 = param_1 + 0x23;
  _objc_loadWeakRetained();
  pdVar19 = pdVar4;
  func_0x00010bfbabe0();
  pdVar7 = param_1 + 0x23;
  _objc_loadWeakRetained();
  pdVar20 = pdVar7;
  func_0x00010c078020();
  pdVar11 = param_1 + 0x23;
  _objc_loadWeakRetained();
  pdVar21 = pdVar11;
  func_0x00010c07e620();
  if ((int)pdVar21 == 0) {
    uVar25 = 0;
  }
  else {
    unaff_x27 = param_1 + 0x23;
    _objc_loadWeakRetained();
    pdVar22 = unaff_x27;
    func_0x00010c075060();
    bVar1 = (int)pdVar20 == 0;
    uVar24 = 3;
    if (bVar1) {
      uVar24 = 1;
    }
    uVar25 = 4;
    if (bVar1) {
      uVar25 = 2;
    }
    if ((int)pdVar19 == 0) {
      uVar24 = uVar25;
    }
    uVar25 = 0;
    if (((ulong)pdVar22 & 1) == 0) {
      uVar25 = uVar24;
    }
  }
  pdVar19 = pdVar10;
  FUN_107173024(pdVar10,pdVar18,uVar25);
  _objc_retainAutoreleasedReturnValue();
  pdVar18 = pdVar19;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  pdVar20 = pdVar18;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pdVar18);
  _objc_release(pdVar19);
  func_0x00010c19baa0(pdVar6);
  _objc_release(pdVar20);
  if ((int)pdVar21 != 0) {
    _objc_release(unaff_x27);
  }
  _objc_release(pdVar11);
  _objc_release(pdVar7);
  _objc_release(pdVar4);
  _objc_release(pdVar17);
  _objc_release(pdVar15);
  _objc_release(pdVar14);
  _objc_release(pdVar10);
  _objc_release(pdVar27);
  _objc_release(pdVar9);
  _objc_release(pdVar3);
  _dispatch_group_enter(pdVar2);
  dVar29 = param_1[0xc];
  func_0x00010c269d40(dVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be98560(param_1);
  uVar23 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1071751f8;
  puStack_158 = &UNK_110990958;
  pdStack_150 = param_1;
  _objc_retain(param_3);
  uStack_148 = param_3;
  _objc_retain(pdVar6);
  pdStack_140 = pdVar6;
  _objc_retain(pdVar2);
  pdStack_138 = pdVar2;
  func_0x00010bfc8660(dVar30,dVar29);
  _objc_release(uVar23);
  _objc_release(dVar29);
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_1071754b0;
  puStack_190 = &UNK_11084a9e8;
  pdStack_188 = param_1;
  pdStack_180 = pdVar6;
  uStack_178 = param_4;
  _objc_retain();
  _objc_retain(pdVar6);
  func_0x000100bc0718(pdVar2,PTR___dispatch_main_q_11034be20,&puStack_1a8);
  _objc_release(uStack_178);
  _objc_release(pdStack_180);
  _objc_release(pdStack_138);
  _objc_release(pdStack_140);
  _objc_release(uStack_148);
  _objc_release(param_4);
  _objc_release(pdVar6);
  _objc_release(pdVar2);
  FUN_10715c0ec(&dStack_e0);
  _objc_release(puStack_1f0);
  _objc_release(pdStack_1e8);
  _objc_release(pdVar8);
  _objc_release(puStack_220);
  _objc_release(puStack_1e0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  FUN_10715c0ec(&dStack_e0);
  __Unwind_Resume();
  func_0x00010c204760(*(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x28));
  return;
}


