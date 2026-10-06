/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105679408; end: 10567940f; -[SCPercMLFastDNNImageClassificationModel loggingDisabled] */

undefined1 FUN_105679408(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 105679410; end: 10567947b; -[SCPercMLFastDNNImageClassificationModel .cxx_destruct] */

void FUN_105679410(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10567947c; end: 10567968b; -[SCPercMLFastDNNImageEmbeddingModel initWithModelKey:modelId:deliverableModel:logger:error:] */

/* WARNING: Removing unreachable block (ram,0x000105679564) */
/* WARNING: Removing unreachable block (ram,0x000105679568) */
/* WARNING: Removing unreachable block (ram,0x000105679574) */

undefined8 *
FUN_10567947c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e98b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bcaa8;
    _objc_alloc();
    uVar4 = param_5;
    func_0x00010bfa0d60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02c700();
    _objc_retain(0);
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = puVar1[1];
    func_0x00010c0cff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[2];
    puVar1[2] = uVar4;
    _objc_release(uVar3);
    uVar4 = puVar1[1];
    func_0x00010c0cff20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[3];
    puVar1[3] = uVar4;
    _objc_release(uVar3);
    uVar4 = puVar1[1];
    func_0x00010bf08ce0();
    puVar1[6] = uVar4;
    uVar4 = puVar1[1];
    func_0x00010bfe91a0();
    puVar1[4] = uVar4;
    uVar4 = puVar1[1];
    func_0x00010bfe7e00();
    puVar1[5] = uVar4;
  }
  _objc_retain(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 10567968c; end: 1056798a3; -[SCPercMLFastDNNImageEmbeddingModel runFeatureExtraction:] */

void FUN_10567968c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  ulong auStack_b8 [3];
  undefined1 uStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  long lStack_58;
  char cStack_48;
  
  _objc_retain(param_3);
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_98 = 0;
  ppuStack_90 = &PTR_FUN_1108a5c28;
  uStack_78 = 0x100000001;
  cStack_48 = '\0';
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  func_0x00010c1065a0(*(undefined8 *)(param_1 + 8));
  lVar3 = lStack_98;
  _objc_retain(lStack_98);
  puVar6 = PTR_PTR_1126ae750;
  if (lVar3 == 0) {
    puVar5 = PTR_PTR_1126bcab0;
    _objc_alloc(PTR_PTR_1126bcab0);
    ppuStack_e8 = &PTR_FUN_1108a5c28;
    uStack_d8 = uStack_80;
    uStack_e0 = uStack_88;
    uStack_d0 = uStack_78;
    lStack_c0 = lStack_68;
    uStack_c8 = uStack_70;
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    auStack_b8[0] = auStack_b8[0] & 0xffffffffffffff00;
    uStack_a0 = 0;
    bVar4 = cStack_48 == '\x01';
    if (bVar4) {
      auStack_b8[0] = 0;
      auStack_b8[1] = 0;
      auStack_b8[2] = 0;
      FUN_105536ef4(auStack_b8,CONCAT71(uStack_5f,uStack_60),lStack_58,
                    lStack_58 - CONCAT71(uStack_5f,uStack_60) >> 2);
    }
    uStack_a0 = bVar4;
    func_0x00010c051140(puVar5);
    func_0x00010c2468a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    FUN_105675c90(&ppuStack_e8);
  }
  else {
    FUN_10568c5fc(lVar3);
    func_0x00010bf993e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  FUN_105675c90(&ppuStack_90);
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1056798a4; end: 1056798ab; -[SCPercMLFastDNNImageEmbeddingModel modelKey] */

undefined8 FUN_1056798a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056798ac; end: 1056798b3; -[SCPercMLFastDNNImageEmbeddingModel modelId] */

undefined8 FUN_1056798ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056798b4; end: 1056798bb; -[SCPercMLFastDNNImageEmbeddingModel imageWidth] */

undefined8 FUN_1056798b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1056798bc; end: 1056798c3; -[SCPercMLFastDNNImageEmbeddingModel imageHeight] */

undefined8 FUN_1056798bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1056798c4; end: 1056798cb; -[SCPercMLFastDNNImageEmbeddingModel approximateSizeInBytes] */

undefined8 FUN_1056798c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1056798cc; end: 105679907; -[SCPercMLFastDNNImageEmbeddingModel .cxx_destruct] */

void FUN_1056798cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105679908; end: 10567a0b7; -[SCPercMLFastDNNImageInferenceModel initWithModelKey:modelId:fastDNNDeliverableModel:logger:error:] */

undefined8 *
FUN_105679908(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uStack_1d4;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_178 = PTR_PTR_1126e98b8;
  puVar1 = &uStack_180;
  uStack_180 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
LAB_105679e68:
    _objc_retain(puVar1);
    puVar8 = puVar1;
  }
  else {
    _objc_retain(param_7);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_5;
    _objc_release(uVar2);
    puVar3 = param_6;
    func_0x00010bf51e00(param_6);
    puVar4 = puVar3;
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0ec860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194e80();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c0cfdc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = puVar4;
    func_0x00010c0ec860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195180();
    _objc_release(unaff_x27);
    _objc_release(puVar4);
    puStack_188 = (undefined8 *)0x0;
    func_0x00010bfa0cc0(PTR_PTR_1126bcaa0);
    puVar8 = puStack_188;
    _objc_retain(puStack_188);
    if (puVar8 == (undefined8 *)0x0) {
      puVar6 = puVar1;
      func_0x00010bee7ac0();
      if (((ulong)puVar6 & 1) != 0) {
        puVar4 = param_6;
        func_0x00010c0cfdc0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0ec860();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0db380();
        *(int *)(puVar1 + 0x1b) = (int)puVar7;
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar4 = param_6;
        func_0x00010c0cfdc0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0ec860();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010bf90c00();
        *(char *)((long)puVar1 + 0xdc) = (char)puVar7;
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar4 = param_6;
        func_0x00010c0cfdc0(param_6);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0ec860();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010bf356c0();
        _objc_retainAutoreleasedReturnValue();
        puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
        uVar9 = 0xc2000000;
        uStack_1a8 = 0xc2000000;
        pcStack_1a0 = FUN_10567a0b8;
        puStack_198 = &UNK_1108a5f18;
        _objc_retain(puVar1);
        puStack_190 = puVar1;
        func_0x00010bf980c0(puVar7);
        _objc_release(puVar7);
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar4 = param_6;
        func_0x00010c0cfdc0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0ec860();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010bf918c0();
        *(char *)(puVar1 + 0x1f) = (char)puVar7;
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar4 = param_6;
        func_0x00010c0cfdc0(param_6);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0ec860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        *(undefined4 *)((long)puVar1 + 0xfc) = uVar9;
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar4 = param_6;
        func_0x00010c0cfdc0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0cfdc0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c08fa60();
        puVar1[0x2b] = (long)puVar7 << 2;
        _objc_release(puVar5);
        _objc_release(puVar4);
        uVar10 = *(ulong *)(puVar1[0x11] + 0x18);
        uVar11 = uVar10 & 0xffffffff;
        puVar1[0x2a] = uVar10 >> 0x20;
        puVar1[0x29] = uVar11;
        puVar1[0x23] = (ulong)*(uint *)(puVar1[0x11] + 0x20);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (puVar1 + 0x20,puVar1[0x14]);
        param_1 = (undefined4)uVar11;
        ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0ee0;
        ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f10;
        ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0ef8;
        ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f28;
        ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f40;
        ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f58;
        ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0ee0;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f10;
        ppuStack_100 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0ee0;
        ppuStack_f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f10;
        ppuStack_e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f70;
        ppuStack_e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0ef8;
        ppuStack_f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f40;
        ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f88;
        unaff_x27 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_1b8 = puVar4;
        puStack_88 = puVar4;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f40;
        ppuStack_130 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0ee0;
        ppuStack_128 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f10;
        ppuStack_118 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0fa0;
        ppuStack_110 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0fb8;
        ppuStack_120 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0f40;
        ppuStack_108 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0ef8;
        unaff_x28 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_80 = unaff_x27;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puStack_1b8;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_78 = unaff_x28;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = puVar1[0x24];
        puVar1[0x24] = puVar5;
        _objc_release(uVar2);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        _objc_release(puVar4);
        ppuStack_170 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0fd0;
        ppuStack_168 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1000;
        ppuStack_150 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0fe8;
        ppuStack_148 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1018;
        ppuStack_160 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1030;
        ppuStack_158 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1060;
        ppuStack_140 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1048;
        ppuStack_138 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1078;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = puVar1[0x25];
        puVar1[0x25] = puVar4;
        _objc_release(uVar2);
        _objc_release(puStack_190);
        _objc_release(puVar3);
        goto LAB_105679e68;
      }
      if (param_8 != (undefined8 *)0x0) {
        func_0x0001056730d4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        goto LAB_105679e8c;
      }
    }
    else if (param_8 != (undefined8 *)0x0) {
      _objc_retainAutorelease(puVar8);
      puVar6 = puVar8;
LAB_105679e8c:
      *param_8 = puVar6;
    }
    _objc_release(puVar3);
    _objc_release(puVar8);
    puVar8 = (undefined8 *)0x0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x28);
  _objc_release(unaff_x27);
  _objc_release(puStack_1b8);
  _objc_release(puStack_190);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  __Unwind_Resume();
  pcStack_1c8 = FUN_10567a0b8;
  puVar1 = (undefined8 *)(puVar6[4] + 0xe0);
  uStack_1d4 = param_1;
  puStack_1d0 = &stack0xfffffffffffffff0;
  FUN_1056743c4(puVar1,&uStack_1d4);
  return puVar1;
}



/* Entry: 10567a0b8; end: 10567a0e3;  */

void FUN_10567a0b8(undefined4 param_1,long param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  FUN_1056743c4(*(long *)(param_2 + 0x20) + 0xe0,&uStack_14);
  return;
}



/* Entry: 10567a0e4; end: 10567aa3f; -[SCPercMLFastDNNImageInferenceModel predictWithImage:error:output:imageProcessingConfig:] */

void FUN_10567a0e4(ulong param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,long param_5,
                  undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  float *pfVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float *pfVar13;
  long *plVar14;
  long *plVar15;
  float *pfVar16;
  undefined8 uVar17;
  float *pfVar18;
  ulong uVar19;
  long lVar20;
  long lStack_198;
  float *pfStack_190;
  long *plStack_188;
  ulong uStack_180;
  float fStack_178;
  undefined1 auStack_170 [80];
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulong uStack_108;
  undefined8 uStack_100;
  long **pplStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  float *pfStack_98;
  long *plStack_90;
  ulong uStack_88;
  float afStack_80 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  pfStack_98 = (float *)0x0;
  lStack_a0 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  afStack_80[0] = 1.0;
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    pfVar16 = *(float **)(param_1 + 0xd0);
    func_0x00010c0b3dc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    pfVar16 = (float *)0x0;
  }
  uStack_108 = 0;
  func_0x00010be79ac0(&uStack_100,param_1);
  uVar19 = uStack_108;
  _objc_retain(uStack_108);
  if (uVar19 == 0) {
    uVar7 = param_1;
    func_0x00010bee7a00();
    if ((uVar7 & 1) != 0) {
      uStack_118 = (undefined4)*(undefined8 *)(param_1 + 0x148);
      uStack_114 = (undefined4)*(undefined8 *)(param_1 + 0x150);
      uStack_110 = (undefined4)*(undefined8 *)(param_1 + 0x118);
      uStack_10c = 1;
      uStack_120 = 0x100000001;
      func_0x000109d0f600(auStack_170,&uStack_118,&uStack_120,uStack_f0);
      uVar19 = param_1;
      func_0x00010bee7a20();
      if ((uVar19 & 1) == 0) {
        if (param_4 != (ulong *)0x0) {
          uVar7 = uVar19;
          func_0x000105673064();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_4 = uVar7;
        }
      }
      else {
        func_0x00010bf880e0(pfVar16);
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
          uVar17 = *(undefined8 *)(param_1 + 0xd0);
          func_0x00010c0b3dc0(uVar17);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar17 = 0;
        }
        func_0x000109cdb2c4(&lStack_198,param_1 + 8,auStack_170,1);
        if (uStack_88 != 0) {
          func_0x00010567bec8(plStack_90);
          plStack_90 = (long *)0x0;
          if (pfStack_98 != (float *)0x0) {
            _bzero(lStack_a0,(long)pfStack_98 << 3);
          }
          uStack_88 = 0;
        }
        lVar8 = lStack_a0;
        lStack_a0 = lStack_198;
        lStack_198 = 0;
        if (lVar8 != 0) {
          __ZdlPv();
        }
        pfStack_98 = pfStack_190;
        pfStack_190 = (float *)0x0;
        plStack_90 = plStack_188;
        uStack_88 = uStack_180;
        afStack_80[0] = fStack_178;
        if (uStack_180 != 0) {
          pfVar13 = (float *)plStack_188[1];
          if (((ulong)pfStack_98 & (long)pfStack_98 - 1U) == 0) {
            pfVar13 = (float *)((ulong)pfVar13 & (long)pfStack_98 - 1U);
          }
          else if (pfStack_98 <= pfVar13) {
            uVar7 = 0;
            if (pfStack_98 != (float *)0x0) {
              uVar7 = (ulong)pfVar13 / (ulong)pfStack_98;
            }
            pfVar13 = (float *)((long)pfVar13 - uVar7 * (long)pfStack_98);
          }
          *(long ***)(lStack_a0 + (long)pfVar13 * 8) = &plStack_90;
          plStack_188 = (long *)0x0;
          uStack_180 = 0;
        }
        func_0x00010567bec8(plStack_188);
        lVar8 = lStack_198;
        lStack_198 = 0;
        if (lVar8 != 0) {
          __ZdlPv();
        }
        func_0x00010bf880e0(uVar17);
        _objc_release(uVar17);
      }
      FUN_105675c90(auStack_170);
      if (lStack_c8 != 0) {
        piVar1 = (int *)(lStack_c8 + 0x14);
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
          func_0x000109a848d4(&uStack_100);
        }
      }
      lStack_c8 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      if (0 < uStack_100._4_4_) {
        lVar8 = 0;
        do {
          *(undefined4 *)(lStack_c0 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < uStack_100._4_4_);
      }
      if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_b8 + -8));
      }
      _objc_release();
      pfVar13 = pfStack_98;
      if ((uVar19 & 1) != 0) {
        if ((pfStack_98 != (float *)0x0) && (uStack_88 != 0)) {
          pfVar12 = (float *)&uStack_88;
          func_0x000100102e7c(pfVar12,param_1 + 0x100);
          uVar19 = (long)pfVar13 - 1;
          if (((ulong)pfVar13 & uVar19) == 0) {
            pfVar18 = (float *)((ulong)pfVar12 & uVar19);
          }
          else {
            pfVar18 = pfVar12;
            if (pfVar13 <= pfVar12) {
              uVar7 = 0;
              if (pfVar13 != (float *)0x0) {
                uVar7 = (ulong)pfVar12 / (ulong)pfVar13;
              }
              pfVar18 = (float *)((long)pfVar12 - uVar7 * (long)pfVar13);
            }
          }
          plVar9 = *(long **)(lStack_a0 + (long)pfVar18 * 8);
          pfVar16 = pfVar12;
          if (plVar9 != (long *)0x0) {
            for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
              pfVar10 = (float *)plVar9[1];
              if (pfVar10 == pfVar12) {
                pfVar16 = afStack_80;
                func_0x000100105738(pfVar16,plVar9 + 2,param_1 + 0x100);
                if (((ulong)pfVar16 & 1) != 0) {
                  pfVar16 = (float *)&uStack_88;
                  func_0x000100102e7c(pfVar16,param_1 + 0x100);
                  pfVar13 = pfStack_98;
                  if (pfStack_98 == (float *)0x0) goto LAB_10567a630;
                  uVar19 = (long)pfStack_98 - 1;
                  if (((ulong)pfStack_98 & uVar19) == 0) {
                    pfVar18 = (float *)(uVar19 & (ulong)pfVar16);
                  }
                  else {
                    pfVar18 = pfVar16;
                    if (pfStack_98 <= pfVar16) {
                      uVar7 = 0;
                      if (pfStack_98 != (float *)0x0) {
                        uVar7 = (ulong)pfVar16 / (ulong)pfStack_98;
                      }
                      pfVar18 = (float *)((long)pfVar16 - uVar7 * (long)pfStack_98);
                    }
                  }
                  puVar11 = *(undefined8 **)(lStack_a0 + (long)pfVar18 * 8);
                  if ((puVar11 == (undefined8 *)0x0) ||
                     (plVar9 = (long *)*puVar11, plVar9 == (long *)0x0)) goto LAB_10567a630;
                  goto LAB_10567a5d8;
                }
              }
              else {
                if (((ulong)pfVar13 & uVar19) == 0) {
                  pfVar10 = (float *)((ulong)pfVar10 & uVar19);
                }
                else if (pfVar13 <= pfVar10) {
                  uVar7 = 0;
                  if (pfVar13 != (float *)0x0) {
                    uVar7 = (ulong)pfVar10 / (ulong)pfVar13;
                  }
                  pfVar10 = (float *)((long)pfVar10 - uVar7 * (long)pfVar13);
                }
                if (pfVar10 != pfVar18) break;
              }
            }
          }
        }
        if (param_4 != (ulong *)0x0) {
          func_0x0001056730b8();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_4 = (ulong)pfVar16;
        }
      }
      goto LAB_10567a2b4;
    }
    if (param_4 != (ulong *)0x0) {
      func_0x000105673064();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      goto LAB_10567a224;
    }
  }
  else if (param_4 != (ulong *)0x0) {
    uVar7 = uVar19;
    _objc_retainAutorelease();
LAB_10567a224:
    *param_4 = uVar7;
  }
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
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
      func_0x000109a848d4(&uStack_100);
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < uStack_100._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_100._4_4_);
  }
  if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_b8 + -8));
  }
  _objc_release(uVar19);
  _objc_release(pfVar16);
LAB_10567a2b4:
  func_0x00010567bec8(plStack_90);
  lVar8 = lStack_a0;
  lStack_a0 = 0;
  if (lVar8 != 0) {
    __ZdlPv();
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return;
LAB_10567a5d8:
  do {
    pfVar12 = (float *)plVar9[1];
    if (pfVar12 == pfVar16) {
      pfVar12 = afStack_80;
      func_0x000100105738(pfVar12,plVar9 + 2,param_1 + 0x100);
      if (((ulong)pfVar12 & 1) != 0) goto LAB_10567a908;
    }
    else {
      if (((ulong)pfVar13 & uVar19) == 0) {
        pfVar12 = (float *)((ulong)pfVar12 & uVar19);
      }
      else if (pfVar13 <= pfVar12) {
        uVar7 = 0;
        if (pfVar13 != (float *)0x0) {
          uVar7 = (ulong)pfVar12 / (ulong)pfVar13;
        }
        pfVar12 = (float *)((long)pfVar12 - uVar7 * (long)pfVar13);
      }
      if (pfVar12 != pfVar18) break;
    }
    plVar9 = (long *)*plVar9;
  } while (plVar9 != (long *)0x0);
LAB_10567a630:
  plVar9 = (long *)0x78;
  __Znwm();
  uStack_f0 = 0;
  *plVar9 = 0;
  plVar9[1] = (long)pfVar16;
  uStack_100 = plVar9;
  pplStack_f8 = &plStack_90;
  if (*(char *)(param_1 + 0x117) < '\0') {
    func_0x000100033dac(plVar9 + 2,*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x108)
                       );
  }
  else {
    lVar8 = *(long *)(param_1 + 0x100);
    plVar9[3] = *(long *)(param_1 + 0x108);
    plVar9[2] = lVar8;
    plVar9[4] = *(long *)(param_1 + 0x110);
  }
  plVar9[0xc] = 0;
  plVar9[0xb] = 0;
  plVar9[0xe] = 0;
  plVar9[0xd] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[5] = (long)&PTR_FUN_1108a5c28;
  plVar9[8] = 0x100000001;
  plVar9[9] = 0;
  plVar9[10] = 0;
  *(undefined1 *)(plVar9 + 0xb) = 0;
  uStack_f0 = CONCAT71(uStack_f0._1_7_,1);
  if ((pfVar13 == (float *)0x0) || (afStack_80[0] * (float)pfVar13 < (float)(uStack_88 + 1))) {
    uVar19 = 1;
    if ((float *)0x2 < pfVar13) {
      uVar19 = (ulong)(((ulong)pfVar13 & (long)pfVar13 - 1U) != 0);
    }
    pfVar12 = (float *)(uVar19 | (long)pfVar13 << 1);
    pfVar13 = (float *)(long)((float)(uStack_88 + 1) / afStack_80[0]);
    if (pfVar12 <= pfVar13) {
      pfVar12 = pfVar13;
    }
    if ((long)pfVar12 - 1U == 0) {
      pfVar12 = (float *)0x2;
    }
    else if (((ulong)pfVar12 & (long)pfVar12 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    pfVar18 = pfStack_98;
    if (pfStack_98 < pfVar12) {
LAB_10567a734:
      if ((ulong)pfVar12 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10567a978);
        (*pcVar6)();
      }
      lVar8 = (long)pfVar12 << 3;
      __Znwm();
      bVar4 = lStack_a0 != 0;
      lStack_a0 = lVar8;
      if (bVar4) {
        __ZdlPv();
      }
      lVar8 = lStack_a0;
      pfStack_98 = pfVar12;
      _bzero(lStack_a0,(long)pfVar12 << 3);
      pfVar13 = pfVar12;
      if (plStack_90 != (long *)0x0) {
        pfVar18 = (float *)plStack_90[1];
        uVar19 = (long)pfVar12 - 1;
        if (((ulong)pfVar12 & uVar19) == 0) {
          pfVar18 = (float *)((ulong)pfVar18 & uVar19);
        }
        else if (pfVar12 <= pfVar18) {
          uVar7 = 0;
          if (pfVar12 != (float *)0x0) {
            uVar7 = (ulong)pfVar18 / (ulong)pfVar12;
          }
          pfVar18 = (float *)((long)pfVar18 - uVar7 * (long)pfVar12);
        }
        *(long ***)(lVar8 + (long)pfVar18 * 8) = &plStack_90;
        plVar14 = (long *)*plStack_90;
        plVar5 = plStack_90;
        while (plVar14 != (long *)0x0) {
          pfVar10 = (float *)plVar14[1];
          if (((ulong)pfVar12 & uVar19) == 0) {
            pfVar10 = (float *)((ulong)pfVar10 & uVar19);
          }
          else if (pfVar12 <= pfVar10) {
            uVar7 = 0;
            if (pfVar12 != (float *)0x0) {
              uVar7 = (ulong)pfVar10 / (ulong)pfVar12;
            }
            pfVar10 = (float *)((long)pfVar10 - uVar7 * (long)pfVar12);
          }
          plVar15 = plVar14;
          if (pfVar10 != pfVar18) {
            if (*(long *)(lVar8 + (long)pfVar10 * 8) == 0) {
              *(long **)(lVar8 + (long)pfVar10 * 8) = plVar5;
              pfVar18 = pfVar10;
            }
            else {
              *plVar5 = *plVar14;
              *plVar14 = **(long **)(lVar8 + (long)pfVar10 * 8);
              **(undefined8 **)(lVar8 + (long)pfVar10 * 8) = plVar14;
              plVar15 = plVar5;
            }
          }
          plVar5 = plVar15;
          plVar14 = (long *)*plVar15;
        }
      }
    }
    else {
      pfVar13 = pfStack_98;
      if (pfVar12 < pfStack_98) {
        pfVar13 = (float *)(long)((float)uStack_88 / afStack_80[0]);
        if ((pfStack_98 < (float *)0x3) || (((ulong)pfStack_98 & (long)pfStack_98 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((float *)0x1 < pfVar13) {
          pfVar13 = (float *)(1L << (-LZCOUNT((long)pfVar13 + -1) & 0x3fU));
        }
        lVar8 = lStack_a0;
        if (pfVar12 <= pfVar13) {
          pfVar12 = pfVar13;
        }
        pfVar13 = pfStack_98;
        if (pfVar12 < pfVar18) {
          if (pfVar12 != (float *)0x0) goto LAB_10567a734;
          lStack_a0 = 0;
          if (lVar8 != 0) {
            __ZdlPv();
          }
          pfStack_98 = (float *)0x0;
          pfVar13 = (float *)0x0;
        }
      }
    }
    if (((ulong)pfVar13 & (long)pfVar13 - 1U) == 0) {
      pfVar18 = (float *)((long)pfVar13 - 1U & (ulong)pfVar16);
    }
    else {
      pfVar18 = pfVar16;
      if (pfVar13 <= pfVar16) {
        uVar19 = 0;
        if (pfVar13 != (float *)0x0) {
          uVar19 = (ulong)pfVar16 / (ulong)pfVar13;
        }
        pfVar18 = (float *)((long)pfVar16 - uVar19 * (long)pfVar13);
      }
    }
  }
  plVar14 = *(long **)(lStack_a0 + (long)pfVar18 * 8);
  if (plVar14 == (long *)0x0) {
    *plVar9 = (long)plStack_90;
    *(long ***)(lStack_a0 + (long)pfVar18 * 8) = &plStack_90;
    plStack_90 = plVar9;
    if (*plVar9 != 0) {
      pfVar16 = *(float **)(*plVar9 + 8);
      if (((ulong)pfVar13 & (long)pfVar13 - 1U) == 0) {
        pfVar16 = (float *)((ulong)pfVar16 & (long)pfVar13 - 1U);
      }
      else if (pfVar13 <= pfVar16) {
        uVar19 = 0;
        if (pfVar13 != (float *)0x0) {
          uVar19 = (ulong)pfVar16 / (ulong)pfVar13;
        }
        pfVar16 = (float *)((long)pfVar16 - uVar19 * (long)pfVar13);
      }
      *(long **)(lStack_a0 + (long)pfVar16 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar14;
    *plVar14 = (long)plVar9;
  }
  uStack_88 = uStack_88 + 1;
LAB_10567a908:
  lVar20 = plVar9[7];
  lVar8 = plVar9[6];
  *(long *)(param_5 + 0x18) = plVar9[8];
  *(long *)(param_5 + 0x10) = lVar20;
  *(long *)(param_5 + 8) = lVar8;
  FUN_1056759f4(param_5 + 0x20,plVar9 + 9);
  func_0x000105675ac8(param_5 + 0x30,plVar9 + 0xb);
  goto LAB_10567a2b4;
}



/* Entry: 10567aa40; end: 10567aadb;  */

long FUN_10567aa40(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10567aadc; end: 10567ad43; -[SCPercMLFastDNNImageInferenceModel _preprocessImage:error:imageProcessingConfig:] */

void FUN_10567aadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 auStack_70 [2];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_6 != 0) {
    func_0x00010bf081c0(param_6);
  }
  func_0x00010be79a80(&uStack_c0,param_2);
  uStack_120 = CONCAT44(iStack_bc,uStack_c0);
  uStack_e0 = (ulong)&uStack_120 | 8;
  uStack_118 = uStack_b8;
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  lStack_e8 = lStack_88;
  uStack_f0 = uStack_90;
  uStack_d0 = 0;
  uStack_c8 = 0;
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_d8 = &uStack_d0;
  if (iStack_bc < 3) {
    uStack_d0 = *puStack_78;
    uStack_c8 = puStack_78[1];
  }
  else {
    uStack_120 = (ulong)uStack_c0;
    func_0x000109a84868(&uStack_120,&uStack_c0);
  }
  func_0x00010bde8ea0(param_1,param_2);
  if (lStack_e8 != 0) {
    piVar1 = (int *)(lStack_e8 + 0x14);
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
      func_0x000109a848d4(&uStack_120);
    }
  }
  lStack_e8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (0 < uStack_120._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_e0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_120._4_4_);
  }
  if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
    _free(puStack_d8[-1]);
  }
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 0x14);
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
      func_0x000109a848d4(&uStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0 < iStack_bc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_80 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_bc);
  }
  if (puStack_78 != auStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10567ad44; end: 10567b1af; -[SCPercMLFastDNNImageInferenceModel _preprocessAndConvertImage:rotationNeeded:] */

void FUN_10567ad44(undefined4 *param_1,double param_2,double param_3,long param_4,undefined8 param_5
                  ,long param_6,uint param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_6);
  func_0x00010c23d0a0(param_6);
  dVar12 = param_2;
  func_0x00010c23d0a0(param_6);
  if (param_7 == 0) {
    func_0x00010c14e120(param_6);
    dVar8 = (double)NEON_ucvtf(*(undefined8 *)(param_4 + 0x148));
    if (param_2 * dVar12 == dVar8) {
      func_0x00010c14e120(param_6);
      dVar8 = param_3 * dVar8;
      dVar12 = (double)NEON_ucvtf(*(undefined8 *)(param_4 + 0x150));
      if (dVar8 == dVar12) goto LAB_10567ae64;
      uVar11 = *(undefined8 *)(param_4 + 0x148);
      goto LAB_10567ae2c;
    }
    uVar11 = *(undefined8 *)(param_4 + 0x150);
LAB_10567ade0:
    dVar12 = (double)NEON_ucvtf(uVar11);
  }
  else {
    func_0x00010c14e120(param_6);
    dVar8 = (double)NEON_ucvtf(*(undefined8 *)(param_4 + 0x150));
    if (param_2 * dVar12 != dVar8) {
      uVar11 = *(undefined8 *)(param_4 + 0x148);
      goto LAB_10567ade0;
    }
    func_0x00010c14e120(param_6);
    dVar8 = param_3 * dVar8;
    dVar12 = (double)NEON_ucvtf(*(undefined8 *)(param_4 + 0x148));
    if (dVar8 == dVar12) goto LAB_10567ae64;
    uVar11 = *(undefined8 *)(param_4 + 0x150);
LAB_10567ae2c:
    dVar8 = (double)NEON_ucvtf(uVar11);
  }
  lVar5 = param_6;
  func_0x00010c14e720(dVar8,dVar12,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  param_6 = lVar5;
LAB_10567ae64:
  func_0x00010c14e120(param_6);
  dVar12 = 1.0;
  lVar5 = param_6;
  if (dVar8 != 1.0) {
    func_0x00010c23d0a0(param_6);
    dVar9 = dVar8;
    func_0x00010c14e120(param_6);
    dVar10 = dVar9;
    func_0x00010c23d0a0(param_6);
    func_0x00010c14e120(param_6);
    func_0x00010c14e6c0((long)(dVar8 * dVar9),(long)(dVar12 * dVar10),0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
  }
  if (lVar5 == 0) {
    puStack_88 = (undefined8 *)0x0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_d0 = 0;
    iStack_cc = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010c271aa0(&uStack_d0,lVar5);
  }
  if ((param_7 & 1) == 0) {
    puVar6 = (undefined8 *)((ulong)&uStack_d0 | 4);
    *param_1 = uStack_d0;
    *(ulong *)(param_1 + 1) = CONCAT44(uStack_c8,iStack_cc);
    param_1[3] = uStack_c4;
    *(undefined8 *)(param_1 + 6) = uStack_b8;
    *(undefined8 *)(param_1 + 4) = uStack_c0;
    *(undefined8 *)(param_1 + 10) = uStack_a8;
    *(undefined8 *)(param_1 + 8) = uStack_b0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(long *)(param_1 + 0xe) = lStack_98;
    *(undefined8 *)(param_1 + 0xc) = uStack_a0;
    *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
    *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
    *(undefined8 *)(param_1 + 0x16) = 0;
    if (iStack_cc < 3) {
      *(undefined8 *)(param_1 + 0x14) = *puStack_88;
      *(undefined8 *)(param_1 + 0x16) = puStack_88[1];
    }
    else {
      *(ulong *)(param_1 + 0x10) = uStack_90;
      *(undefined8 **)(param_1 + 0x12) = puStack_88;
      puStack_88 = &uStack_80;
      uStack_90 = (ulong)&uStack_d0 | 8;
    }
    uStack_d0 = 0x42ff0000;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  }
  else {
    lStack_f0 = (long)&uStack_12c + 4;
    uStack_12c = CONCAT44(uStack_c8,iStack_cc);
    uStack_124 = uStack_c4;
    uStack_118 = uStack_b8;
    uStack_120 = uStack_c0;
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    lStack_f8 = lStack_98;
    uStack_100 = uStack_a0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    if (lStack_98 != 0) {
      piVar1 = (int *)(lStack_98 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_130 = uStack_d0;
    puStack_e8 = &uStack_e0;
    if (iStack_cc < 3) {
      uStack_e0 = *puStack_88;
      uStack_d8 = puStack_88[1];
    }
    else {
      uStack_12c = (ulong)uStack_c8 << 0x20;
      func_0x000109a84868(&uStack_130,&uStack_d0);
    }
    func_0x00010be97720(param_1,param_4);
    if (lStack_f8 != 0) {
      piVar1 = (int *)(lStack_f8 + 0x14);
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
        func_0x000109a848d4(&uStack_130);
      }
    }
    lStack_f8 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    if (0 < (int)uStack_12c) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lStack_f0 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)uStack_12c);
    }
    if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
      _free(puStack_e8[-1]);
    }
  }
  if (lStack_98 != 0) {
    piVar1 = (int *)(lStack_98 + 0x14);
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
      func_0x000109a848d4(&uStack_d0);
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < iStack_cc) {
    lVar7 = 0;
    do {
      *(undefined4 *)(uStack_90 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_cc);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    _free(puStack_88[-1]);
  }
  _objc_release(lVar5);
  return;
}



/* Entry: 10567b1b0; end: 10567b267; -[SCPercMLFastDNNImageInferenceModel _rotateMatrixRight:] */

void FUN_10567b1b0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStack_60 [2];
  undefined4 *puStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
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
  uStack_38 = 0;
  auStack_48[0] = 0x1010000;
  auStack_60[0] = 0x2010000;
  uStack_50 = 0;
  puStack_58 = param_1;
  puStack_40 = (undefined4 *)param_4;
  func_0x000109a895d0(auStack_48,auStack_60);
  uStack_38 = 0;
  auStack_48[0] = 0x1010000;
  auStack_60[0] = 0x2010000;
  uStack_50 = 0;
  puStack_58 = param_1;
  puStack_40 = param_1;
  func_0x000109a491e0(auStack_48,auStack_60,1);
  return;
}



/* Entry: 10567b268; end: 10567b407; -[SCPercMLFastDNNImageInferenceModel _preprocessFromImage:] */

void FUN_10567b268(undefined8 *param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  dVar2 = param_2;
  func_0x00010c14e120(param_5);
  param_2 = param_2 * dVar2;
  dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_3 + 0x148));
  if (param_2 == dVar2) {
    func_0x00010c23d0a0(param_5);
    func_0x00010c14e120(param_5);
    dVar2 = param_2 * dVar2;
    dVar5 = (double)NEON_ucvtf(*(undefined8 *)(param_3 + 0x150));
    if (dVar2 == dVar5) goto LAB_10567b32c;
    dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_3 + 0x148));
  }
  else {
    dVar5 = (double)NEON_ucvtf(*(undefined8 *)(param_3 + 0x150));
  }
  lVar1 = param_5;
  func_0x00010c14e720(dVar2,dVar5,0x3ff0000000000000,param_5,param_4,0,0,0,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  param_5 = lVar1;
LAB_10567b32c:
  func_0x00010c14e120(param_5);
  dVar5 = 1.0;
  lVar1 = param_5;
  if (dVar2 != 1.0) {
    func_0x00010c23d0a0(param_5);
    dVar3 = dVar2;
    func_0x00010c14e120(param_5);
    dVar4 = dVar3;
    func_0x00010c23d0a0(param_5);
    func_0x00010c14e120(param_5);
    func_0x00010c14e6c0((long)(dVar2 * dVar3),(long)(dVar5 * dVar4),0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
  }
  if (lVar1 == 0) {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010c271aa0(param_1,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10567b408; end: 10567bb9f; -[SCPercMLFastDNNImageInferenceModel _convertAndNormalizeImage:error:] */

/* WARNING: Removing unreachable block (ram,0x00010567b548) */
/* WARNING: Removing unreachable block (ram,0x00010567b54c) */
/* WARNING: Removing unreachable block (ram,0x00010567b554) */
/* WARNING: Removing unreachable block (ram,0x00010567b55c) */
/* WARNING: Removing unreachable block (ram,0x00010567b560) */
/* WARNING: Removing unreachable block (ram,0x00010567b580) */
/* WARNING: Removing unreachable block (ram,0x00010567b588) */
/* WARNING: Removing unreachable block (ram,0x00010567b59c) */
/* WARNING: Removing unreachable block (ram,0x00010567b5ac) */

ulong FUN_10567b408(undefined8 *param_1,long param_2,undefined8 param_3,uint *param_4,
                   undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  unkuint9 Var5;
  undefined *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  double dStack_1a0;
  uint *puStack_198;
  double dStack_190;
  double dStack_188;
  uint uStack_180;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long lStack_148;
  ulong uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  undefined4 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 auStack_c0 [2];
  uint *puStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined4 auStack_90 [2];
  uint *puStack_88;
  undefined8 uStack_80;
  uint auStack_78 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(ulong *)(param_2 + 0x120);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(*param_4 >> 3 & 0x1ff) + 1);
  iVar10 = (int)param_3;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined4 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  puVar11 = puVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar14);
  _objc_release();
  if (uVar8 == 0) {
    func_0x000105673064();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = puVar6;
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    goto LAB_10567ba98;
  }
  uVar14 = uVar8;
  func_0x00010c282760();
  uStack_120 = 0x42ff0000;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  puStack_e0 = &uStack_118;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_f4 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  lStack_e8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puStack_d8 = &uStack_d0;
  if ((int)uVar14 == 0x8b) {
    if (&uStack_120 != param_4) {
      if (*(long *)(param_4 + 0xe) != 0) {
        piVar1 = (int *)(*(long *)(param_4 + 0xe) + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_e8 = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_120 = *param_4;
      if ((int)param_4[1] < 3) {
        uStack_118 = (undefined4)*(undefined8 *)(param_4 + 2);
        uStack_114 = (undefined4)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
        uStack_d0 = **(undefined8 **)(param_4 + 0x12);
        uStack_c8 = (*(undefined8 **)(param_4 + 0x12))[1];
        uStack_11c = param_4[1];
      }
      else {
        puVar9 = param_4;
        func_0x000109a84868(&uStack_120);
        iVar10 = (int)puVar9;
      }
      uStack_108 = (undefined4)*(undefined8 *)(param_4 + 6);
      uStack_104 = (undefined4)((ulong)*(undefined8 *)(param_4 + 6) >> 0x20);
      uStack_110 = (undefined4)*(undefined8 *)(param_4 + 4);
      uStack_10c = (undefined4)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
      uStack_f8 = (undefined4)*(undefined8 *)(param_4 + 10);
      uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_4 + 10) >> 0x20);
      uStack_100 = (undefined4)*(undefined8 *)(param_4 + 8);
      uStack_fc = (undefined4)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
      lStack_e8 = *(long *)(param_4 + 0xe);
      uStack_f0 = (undefined4)*(undefined8 *)(param_4 + 0xc);
      uStack_ec = (undefined4)((ulong)*(undefined8 *)(param_4 + 0xc) >> 0x20);
    }
  }
  else {
    uStack_178 = SUB84(param_4,0);
    uStack_174 = (undefined4)((ulong)param_4 >> 0x20);
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_180 = 0x1010000;
    dStack_1a0 = (double)CONCAT44(dStack_1a0._4_4_,0x2010000);
    dStack_190 = 0.0;
    puStack_198 = &uStack_120;
    iVar10 = (int)&dStack_1a0;
    func_0x000109ac9fc8(&uStack_180,&dStack_1a0,uVar14,0);
  }
  param_4 = *(uint **)(param_2 + 0x128);
  puVar7 = (undefined4 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df860();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_4 == (uint *)0x0) {
    func_0x000105673064();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = puVar7;
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
  }
  else {
    puVar9 = param_4;
    func_0x00010c282800();
    uStack_180 = 0x42ff0000;
    uVar14 = (ulong)&uStack_180 | 8;
    uStack_174 = 0;
    uStack_170 = 0;
    iStack_17c = 0;
    uStack_178 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_16c = 0;
    uStack_168 = 0;
    uStack_154 = 0;
    uStack_15c = 0;
    uStack_158 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    iVar2 = *(int *)(param_2 + 0xd8);
    uStack_140 = uVar14;
    puStack_138 = &uStack_130;
    if (iVar2 < 1) {
      if (iVar2 != -0x4524111) {
        if (iVar2 == 0) {
          dStack_1a0 = (double)CONCAT44(dStack_1a0._4_4_,0x2010000);
          puStack_198 = &uStack_180;
          dStack_190 = 0.0;
          puVar9 = &uStack_120;
          puVar11 = (undefined4 *)0x5;
          iVar10 = (int)&dStack_1a0;
          func_0x000109a41858(0x3ff0000000000000,0,puVar9);
        }
        goto LAB_10567b8b4;
      }
      func_0x000105673064();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar9;
      *(undefined4 *)param_1 = 0x42ff0000;
      *(undefined8 *)((long)param_1 + 0xc) = 0;
      *(undefined8 *)((long)param_1 + 4) = 0;
      *(undefined8 *)((long)param_1 + 0x1c) = 0;
      *(undefined8 *)((long)param_1 + 0x14) = 0;
      *(undefined8 *)((long)param_1 + 0x2c) = 0;
      *(undefined8 *)((long)param_1 + 0x24) = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[10] = 0;
      param_1[8] = param_1 + 1;
      param_1[9] = param_1 + 10;
      param_1[0xb] = 0;
      if (lStack_148 != 0) {
        piVar1 = (int *)(lStack_148 + 0x14);
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
          func_0x000109a848d4(&uStack_180);
        }
      }
      lStack_148 = 0;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      if (0 < iStack_17c) {
        lVar13 = 0;
        do {
          *(undefined4 *)(uStack_140 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iStack_17c);
      }
    }
    else {
      if (iVar2 == 1) {
        dStack_1a0 = (double)CONCAT44(dStack_1a0._4_4_,0x2010000);
        puStack_198 = &uStack_180;
        dStack_190 = 0.0;
        Var5 = ZEXT89(puVar9);
        puVar9 = &uStack_120;
        puVar11 = (undefined4 *)0x5;
        iVar10 = (int)&dStack_1a0;
        func_0x000109a41858(1.0 / (double)(unkint9)Var5,0,puVar9);
      }
      else if (iVar2 == 2) {
        dStack_1a0 = (double)CONCAT44(dStack_1a0._4_4_,0x2010000);
        puStack_198 = &uStack_180;
        dStack_190 = 0.0;
        Var5 = ZEXT89(puVar9);
        puVar9 = &uStack_120;
        puVar11 = (undefined4 *)0x5;
        iVar10 = (int)&dStack_1a0;
        func_0x000109a41858(2.0 / (double)(unkint9)Var5,0xbff0000000000000,puVar9);
      }
LAB_10567b8b4:
      if (*(char *)(param_2 + 0xdc) == '\x01') {
        auStack_78[0] = 0;
        auStack_78[1] = 0;
        auStack_78[2] = 0;
        auStack_78[3] = 0;
        lVar13 = *(long *)(param_2 + 0xe8) - *(long *)(param_2 + 0xe0);
        if (lVar13 == 0) {
          dStack_1a0 = 0.0;
          puStack_198 = (uint *)0x0;
          dStack_190 = 0.0;
          dStack_188 = 0.0;
        }
        else {
          puVar9 = auStack_78;
          _memcpy(puVar9,*(long *)(param_2 + 0xe0),lVar13);
          dStack_1a0 = (double)(float)auStack_78._0_8_;
          puStack_198 = (uint *)(double)SUB84(auStack_78._0_8_,4);
          dStack_190 = (double)(float)auStack_78._8_8_;
          dStack_188 = (double)SUB84(auStack_78._8_8_,4);
        }
        auStack_90[0] = 0x1010000;
        puStack_b8 = &uStack_180;
        uStack_80 = 0;
        auStack_a8[0] = 0xc1020006;
        uStack_98 = 0x400000001;
        auStack_c0[0] = 0x2010000;
        uStack_b0 = 0;
        puStack_a0 = (undefined1 *)&dStack_1a0;
        puStack_88 = puStack_b8;
        func_0x000109a91d90();
        puVar7 = auStack_a8;
        puVar11 = auStack_c0;
        func_0x000109a293c4(auStack_90,puVar7,puVar11,puVar9,0xffffffff,&PTR_DAT_1132e8c10,0,0);
        iVar10 = (int)puVar7;
      }
      if (*(char *)(param_2 + 0xf8) == '\x01') {
        dStack_1a0 = (double)CONCAT44(dStack_1a0._4_4_,0x2010000);
        puStack_198 = &uStack_180;
        dStack_190 = 0.0;
        puVar11 = (undefined4 *)0xffffffff;
        iVar10 = (int)&dStack_1a0;
        func_0x000109a41858((double)*(float *)(param_2 + 0xfc),0,&uStack_180);
      }
      puVar12 = (undefined8 *)((ulong)&uStack_180 | 4);
      param_1[1] = CONCAT44(uStack_174,uStack_178);
      *param_1 = CONCAT44(iStack_17c,uStack_180);
      param_1[3] = CONCAT44(uStack_164,uStack_168);
      param_1[2] = CONCAT44(uStack_16c,uStack_170);
      param_1[10] = 0;
      param_1[5] = CONCAT44(uStack_154,uStack_158);
      param_1[4] = CONCAT44(uStack_15c,uStack_160);
      param_1[7] = lStack_148;
      param_1[6] = CONCAT44(uStack_14c,uStack_150);
      param_1[8] = param_1 + 1;
      param_1[9] = param_1 + 10;
      param_1[0xb] = 0;
      if (iStack_17c < 3) {
        param_1[10] = *puStack_138;
        param_1[0xb] = puStack_138[1];
      }
      else {
        param_1[8] = uStack_140;
        param_1[9] = puStack_138;
        uStack_140 = uVar14;
        puStack_138 = &uStack_130;
      }
      uStack_180 = 0x42ff0000;
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      *(undefined8 *)((long)puVar12 + 0x34) = 0;
      *(undefined8 *)((long)puVar12 + 0x2c) = 0;
    }
    if (puStack_138 != &uStack_130 && puStack_138 != (undefined8 *)0x0) {
      _free(puStack_138[-1]);
    }
  }
  _objc_release(param_4);
  if (lStack_e8 != 0) {
    piVar1 = (int *)(lStack_e8 + 0x14);
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
      func_0x000109a848d4(&uStack_120);
    }
  }
  lStack_e8 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  if (0 < (int)uStack_11c) {
    lVar13 = 0;
    do {
      puStack_e0[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)uStack_11c);
  }
  if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
    _free(puStack_d8[-1]);
  }
LAB_10567ba98:
  uVar14 = uVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar14;
  }
  ___stack_chk_fail();
  if (iVar10 != 0) {
    func_0x000104bd46a0();
    _objc_release(param_4);
    FUN_10567aa40(&uStack_120);
    _objc_release(uVar8);
  }
  __Unwind_Resume();
  if (*(long *)(uVar14 + 0x148) == (long)(int)puVar11[3]) {
    return (ulong)(*(long *)(uVar14 + 0x150) == (long)(int)puVar11[2]);
  }
  return 0;
}



/* Entry: 10567bba0; end: 10567bbcb; -[SCPercMLFastDNNImageInferenceModel _validateInputDimensions:] */

bool FUN_10567bba0(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x148) == (long)*(int *)(param_3 + 0xc)) {
    return *(long *)(param_1 + 0x150) == (long)*(int *)(param_3 + 8);
  }
  return false;
}



/* Entry: 10567bbcc; end: 10567bc2b; -[SCPercMLFastDNNImageInferenceModel _validateInputTensor:] */

bool FUN_10567bbcc(long param_1,undefined8 param_2,long param_3)

{
  if ((((*(long *)(param_3 + 0x20) != 0) && (*(int *)(param_3 + 0x14) == 1)) &&
      (*(ulong *)(param_1 + 0x148) == (ulong)*(uint *)(param_3 + 8))) &&
     ((*(ulong *)(param_1 + 0x150) == (ulong)*(uint *)(param_3 + 0xc) &&
      (*(ulong *)(param_1 + 0x118) == (ulong)*(uint *)(param_3 + 0x10))))) {
    return *(int *)(param_3 + 0x18) == 1 && *(int *)(param_3 + 0x1c) == 1;
  }
  return false;
}



/* Entry: 10567bc2c; end: 10567bcab; -[SCPercMLFastDNNImageInferenceModel _validateModel:] */

bool FUN_10567bc2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x80);
  if ((((*(long *)(param_3 + 0x88) - lVar1 == 0x58) &&
       (*(long *)(param_3 + 0xa0) - *(long *)(param_3 + 0x98) == 0x58)) &&
      (*(int *)(lVar1 + 0x24) == 1)) &&
     ((*(int *)(*(long *)(param_3 + 0x98) + 0x24) == 1 &&
      (*(uint *)(lVar1 + 0x20) < 5 && (1 << (ulong)(*(uint *)(lVar1 + 0x20) & 0x1f) & 0x1aU) != 0)))
     ) {
    func_0x000109cdb550(param_3);
    return (int)param_3 != 0;
  }
  return false;
}



/* Entry: 10567bcac; end: 10567bcb3; -[SCPercMLFastDNNImageInferenceModel modelKey] */

undefined8 FUN_10567bcac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 10567bcb4; end: 10567bcbb; -[SCPercMLFastDNNImageInferenceModel modelId] */

undefined8 FUN_10567bcb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 10567bcbc; end: 10567bcc3; -[SCPercMLFastDNNImageInferenceModel imageWidth] */

undefined8 FUN_10567bcbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 10567bcc4; end: 10567bccb; -[SCPercMLFastDNNImageInferenceModel imageHeight] */

undefined8 FUN_10567bcc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 10567bccc; end: 10567bcd3; -[SCPercMLFastDNNImageInferenceModel approximateSizeInBytes] */

undefined8 FUN_10567bccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 10567bcd4; end: 10567bcdb; -[SCPercMLFastDNNImageInferenceModel loggingDisabled] */

undefined1 FUN_10567bcd4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x130);
}



/* Entry: 10567bcdc; end: 10567bce3; -[SCPercMLFastDNNImageInferenceModel setLoggingDisabled:] */

void FUN_10567bcdc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x130) = param_3;
  return;
}



/* Entry: 10567bce4; end: 10567bd9b; -[SCPercMLFastDNNImageInferenceModel .cxx_destruct] */

void FUN_10567bce4(long param_1)

{
  long lStack_28;
  
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  if (*(char *)(param_1 + 0x117) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x100));
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe0);
    __ZdlPv();
  }
  _objc_storeStrong(param_1 + 0xd0,0);
  if (*(char *)(param_1 + 0xcf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb8));
  }
  lStack_28 = param_1 + 0xa0;
  FUN_1056748e8(&lStack_28);
  lStack_28 = param_1 + 0x88;
  FUN_1056748e8(&lStack_28);
  func_0x000109cda590(param_1 + 8);
  return;
}



/* Entry: 10567bd9c; end: 10567be8f; -[SCPercMLFastDNNImageInferenceModel .cxx_construct] */

long FUN_10567bd9c(long param_1)

{
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  uStack_90 = 0;
  uStack_88 = 0x3f800000;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0x200;
  uStack_60 = 1;
  uStack_58 = 0x1010000010000;
  puStack_50 = &UNK_101000000;
  uStack_48 = 0x100;
  uStack_40 = 100000;
  uStack_38 = 0x100000000;
  func_0x000109cda3ec(param_1 + 8,&lStack_a0);
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  return param_1;
}



/* Entry: 10567be90; end: 10567bf87;  */

long * FUN_10567be90(long *param_1)

{
  long lVar1;
  
  func_0x00010567bec8(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10567bf88; end: 10567c02b; -[SCPercMLLoggingBarcodeDetectionModel initWithBarcodeDetectionModel:logger:] */

undefined1 *
FUN_10567bf88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e98c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10567c02c; end: 10567c033; -[SCPercMLLoggingBarcodeDetectionModel modelKey] */

void FUN_10567c02c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_modelKey_1126119f8);
  return;
}



/* Entry: 10567c034; end: 10567c03b; -[SCPercMLLoggingBarcodeDetectionModel modelId] */

void FUN_10567c034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_modelId_1126119e0);
  return;
}



/* Entry: 10567c03c; end: 10567c043; -[SCPercMLLoggingBarcodeDetectionModel approximateSizeInBytes] */

void FUN_10567c03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf08cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_approximateSizeInBytes_11259fce0);
  return;
}



/* Entry: 10567c044; end: 10567c04b; -[SCPercMLLoggingBarcodeDetectionModel supportedSymbologies] */

void FUN_10567c044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2632d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_supportedSymbologies_1126766d8);
  return;
}



/* Entry: 10567c04c; end: 10567c213; -[SCPercMLLoggingBarcodeDetectionModel detectBarcodesWithBatchImages:] */

void FUN_10567c04c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010bf6f920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar3);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 1;
    uStack_58 = param_1;
    func_0x00010c0bf0a0(uVar2);
    uVar4 = param_4;
    func_0x00010bf529e0();
    dVar5 = (double)puStack_68[3];
    if (uVar4 != 0) {
      uVar4 = param_4;
      func_0x00010bf529e0(param_4);
      dVar5 = dVar5 / (double)uVar4;
    }
    func_0x00010be59ac0(dVar5,param_2);
    __Block_object_dispose(&uStack_90,8);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10567c214; end: 10567c243;  */

void FUN_10567c214(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10567c244; end: 10567c347; -[SCPercMLLoggingBarcodeDetectionModel _logTaskWithTaskType:latency:status:reason:] */

void FUN_10567c244(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  if (0.0 < param_1) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0cff80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0cff20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aa6a0(param_1,uVar1,param_3,uVar2,uVar3,param_4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c0cff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0cff20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa6e0(uVar1,param_3,uVar2,uVar3,param_4,param_5,param_6);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10567c348; end: 10567c377; -[SCPercMLLoggingBarcodeDetectionModel .cxx_destruct] */

void FUN_10567c348(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10567c378; end: 10567c4e3; -[SCPercMLLoggingImageClassificationModel initWithImageClassificationModel:logger:] */

undefined1 *
FUN_10567c378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126e98c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10567c4e4; end: 10567c4eb; -[SCPercMLLoggingImageClassificationModel modelKey] */

void FUN_10567c4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_modelKey_1126119f8);
  return;
}



/* Entry: 10567c4ec; end: 10567c4f3; -[SCPercMLLoggingImageClassificationModel modelId] */

void FUN_10567c4ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_modelId_1126119e0);
  return;
}



/* Entry: 10567c4f4; end: 10567c4fb; -[SCPercMLLoggingImageClassificationModel approximateSizeInBytes] */

void FUN_10567c4f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf08cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_approximateSizeInBytes_11259fce0);
  return;
}



/* Entry: 10567c4fc; end: 10567c503; -[SCPercMLLoggingImageClassificationModel labels] */

void FUN_10567c4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c087930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_labels_1125ff858);
  return;
}



/* Entry: 10567c504; end: 10567c50b; -[SCPercMLLoggingImageClassificationModel imageWidth] */

void FUN_10567c504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_imageWidth_1125d7e30);
  return;
}



/* Entry: 10567c50c; end: 10567c513; -[SCPercMLLoggingImageClassificationModel imageHeight] */

void FUN_10567c50c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_imageHeight_1125d7948);
  return;
}



/* Entry: 10567c514; end: 10567c51b; -[SCPercMLLoggingImageClassificationModel supportPixelBufferFastInference] */

void FUN_10567c514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c262f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_supportPixelBufferFastInference_1126765f8);
  return;
}



/* Entry: 10567c51c; end: 10567c523; -[SCPercMLLoggingImageClassificationModel cancelInference] */

void FUN_10567c51c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelInference_1125a92f8);
  return;
}



/* Entry: 10567c524; end: 10567c52b; -[SCPercMLLoggingImageClassificationModel getMetricWithKey:] */

void FUN_10567c524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc7990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getMetricWithKey__1125cf808);
  return;
}



/* Entry: 10567c52c; end: 10567c533; -[SCPercMLLoggingImageClassificationModel getRawMetrics] */

void FUN_10567c52c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc95f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_getRawMetrics_1125cff20)
  ;
  return;
}



/* Entry: 10567c534; end: 10567c53b; -[SCPercMLLoggingImageClassificationModel getStatMetricMean:] */

void FUN_10567c534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcaa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getStatMetricMean__1125d0438);
  return;
}



/* Entry: 10567c53c; end: 10567c543; -[SCPercMLLoggingImageClassificationModel predictClassificationsWithBatchImages:] */

void FUN_10567c53c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1064b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_predictClassificationsWithBatchI_11261f348,param_3,0);
  return;
}



/* Entry: 10567c544; end: 10567c72b; -[SCPercMLLoggingImageClassificationModel predictClassificationsWithBatchImages:imageProcessingConfig:] */

void FUN_10567c544(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c1064a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar3);
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x2020000000;
    uStack_88 = 1;
    uStack_68 = param_1;
    func_0x00010c0bf0a0(uVar2);
    uVar4 = param_4;
    func_0x00010bf529e0();
    dVar5 = (double)puStack_78[3];
    if (uVar4 != 0) {
      uVar4 = param_4;
      func_0x00010bf529e0(param_4);
      dVar5 = dVar5 / (double)uVar4;
    }
    func_0x00010be59ac0(dVar5,param_2);
    __Block_object_dispose(&uStack_a0,8);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10567c72c; end: 10567c75b;  */

void FUN_10567c72c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10567c75c; end: 10567c923; -[SCPercMLLoggingImageClassificationModel predictAccumulatedClassificationsWithBatchImages:] */

void FUN_10567c75c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c106420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar3);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 1;
    uStack_58 = param_1;
    func_0x00010c0bf0a0(uVar2);
    uVar4 = param_4;
    func_0x00010bf529e0();
    dVar5 = (double)puStack_68[3];
    if (uVar4 != 0) {
      uVar4 = param_4;
      func_0x00010bf529e0(param_4);
      dVar5 = dVar5 / (double)uVar4;
    }
    func_0x00010be59ac0(dVar5,param_2);
    __Block_object_dispose(&uStack_90,8);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10567c924; end: 10567c953;  */

void FUN_10567c924(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10567c954; end: 10567c96b; -[SCPercMLLoggingImageClassificationModel predictScoresWithBatchImages:completionQueue:completion:] */

void FUN_10567c954(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c106550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_predictScoresWithBatchImages_com_11261f370);
    return;
  }
  return;
}



/* Entry: 10567c96c; end: 10567cb5b; -[SCPercMLLoggingImageClassificationModel predictClassificationsWithBatchPixelBuffers:imageProcessingConfig:] */

void FUN_10567c96c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c1064c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar4);
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x2020000000;
    uStack_88 = 1;
    uStack_68 = param_1;
    func_0x00010c0bf0a0(uVar3);
    uVar1 = param_4;
    func_0x00010bf529e0();
    dVar5 = (double)puStack_78[3];
    if (uVar1 != 0) {
      uVar1 = param_4;
      func_0x00010bf529e0(param_4);
      dVar5 = dVar5 / (double)uVar1;
    }
    func_0x00010be59ac0(dVar5,param_2);
    __Block_object_dispose(&uStack_a0,8);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10567cb5c; end: 10567cb8b;  */

void FUN_10567cb5c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10567cb8c; end: 10567cd8f; -[SCPercMLLoggingImageClassificationModel predictMultiClassificationsWithBatchPixelBuffers:imageProcessingConfig:] */

void FUN_10567cb8c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    _objc_opt_respondsToSelector(uVar1,PTR_s_predictClassificationsWithBatchP_11261f350);
    if ((uVar1 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x00010c106500(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x2020000000;
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar4);
      puStack_98 = &uStack_a0;
      uStack_a0 = 0;
      uStack_90 = 0x2020000000;
      uStack_88 = 1;
      uStack_68 = param_1;
      func_0x00010c0bf0a0(uVar3);
      uVar1 = param_4;
      func_0x00010bf529e0();
      dVar5 = (double)puStack_78[3];
      if (uVar1 != 0) {
        uVar1 = param_4;
        func_0x00010bf529e0(param_4);
        dVar5 = dVar5 / (double)uVar1;
      }
      func_0x00010be59ac0(dVar5,param_2);
      __Block_object_dispose(&uStack_a0,8);
      __Block_object_dispose(&uStack_80,8);
      _objc_release(puVar2);
      goto LAB_10567cd38;
    }
  }
  uVar3 = 0;
LAB_10567cd38:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10567cd90; end: 10567cdbf;  */

void FUN_10567cd90(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10567cdc0; end: 10567cefb; -[SCPercMLLoggingImageClassificationModel predictClassificationsWithBatchImages:completionQueue:completion:] */

void FUN_10567cdc0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10567cefc; end: 10567cf33;  */

void FUN_10567cefc(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10567cf34; end: 10567d06f; -[SCPercMLLoggingImageClassificationModel predictAccumulatedClassificationsWithBatchImages:completionQueue:completion:] */

void FUN_10567cf34(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10567d070; end: 10567d0a7;  */

void FUN_10567d070(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10567d0a8; end: 10567d12f; -[SCPercMLLoggingImageClassificationModel runDeepScanWithBatchImages:imageProcessingConfig:] */

void FUN_10567d0a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_runDeepScanWithBatchImages_image_11262e408);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c1427a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10567d130; end: 10567d1b7; -[SCPercMLLoggingImageClassificationModel runEmbeddingAndCaptionSearchForBatchImages:imageProcessingConfig:] */

void FUN_10567d130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_runEmbeddingAndCaptionSearchForB_11262e418);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c1427e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10567d1b8; end: 10567d1bf; -[SCPercMLLoggingImageClassificationModel runCoreMLWithPixelBuffer:coreMLProcessingConfig:error:] */

void FUN_10567d1b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c142790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runCoreMLWithPixelBuffer_coreMLP_11262e400);
  return;
}



/* Entry: 10567d1c0; end: 10567d1c7; -[SCPercMLLoggingImageClassificationModel cleanupResources] */

void FUN_10567d1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cleanupResources_1125ac2f0);
  return;
}



/* Entry: 10567d1c8; end: 10567d3eb; -[SCPercMLLoggingImageClassificationModel _predictClassificationsWithBatchImages:completionQueue:completion:] */

void FUN_10567d1c8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(lVar1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c106480(uVar6);
  _objc_release(uVar3);
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar3 = 0;
  _dispatch_time(0,(long)((double)uVar4 * 2000000000.0));
  lVar5 = lVar1;
  _dispatch_group_wait(lVar1,uVar3);
  if (lVar5 != 0) {
    func_0x00010be59ac0(0,param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10567d3ec; end: 10567d547;  */

void FUN_10567d3ec(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  dVar7 = 0.0;
  if (param_4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar3);
    dVar7 = param_1;
  }
  lVar4 = param_2 + 0x48;
  _objc_loadWeakRetained(lVar4);
  lVar5 = *(long *)(param_2 + 0x28);
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(param_2 + 0x28);
    func_0x00010bf529e0(uVar6);
    dVar7 = dVar7 / (double)uVar6;
  }
  func_0x00010be59ac0(dVar7,lVar4);
  _objc_release(lVar4);
  _dispatch_group_leave(*(undefined8 *)(param_2 + 0x30));
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10567d548;
  puStack_60 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar2);
  uStack_58 = param_3;
  lStack_50 = param_4;
  uStack_48 = uVar2;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_78);
  _objc_release(lStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10567d548; end: 10567d55b;  */

void FUN_10567d548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010567d558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10567d55c; end: 10567d77f; -[SCPercMLLoggingImageClassificationModel _predictAccumulatedClassificationsWithBatchImages:completionQueue:completion:] */

void FUN_10567d55c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(lVar1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c106440(uVar6);
  _objc_release(uVar3);
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar3 = 0;
  _dispatch_time(0,(long)((double)uVar4 * 1500000000.0));
  lVar5 = lVar1;
  _dispatch_group_wait(lVar1,uVar3);
  if (lVar5 != 0) {
    func_0x00010be59ac0(0,param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10567d780; end: 10567d8db;  */

void FUN_10567d780(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  dVar7 = 0.0;
  if (param_4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar3);
    dVar7 = param_1;
  }
  lVar4 = param_2 + 0x48;
  _objc_loadWeakRetained(lVar4);
  lVar5 = *(long *)(param_2 + 0x28);
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(param_2 + 0x28);
    func_0x00010bf529e0(uVar6);
    dVar7 = dVar7 / (double)uVar6;
  }
  func_0x00010be59ac0(dVar7,lVar4);
  _objc_release(lVar4);
  _dispatch_group_leave(*(undefined8 *)(param_2 + 0x30));
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10567d8dc;
  puStack_60 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar2);
  uStack_58 = param_3;
  lStack_50 = param_4;
  uStack_48 = uVar2;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_78);
  _objc_release(lStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10567d8dc; end: 10567d8ef;  */

void FUN_10567d8dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010567d8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10567d8f0; end: 10567d9fb; -[SCPercMLLoggingImageClassificationModel _logTaskWithTaskType:latency:status:reason:] */

void FUN_10567d8f0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    if (0.0 < param_1) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c0cff80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x00010c0cff20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aa6a0(param_1,uVar1,param_3,uVar2,uVar3,param_4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0cff80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0cff20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aa6e0(uVar1,param_3,uVar2,uVar3,param_4,param_5,param_6);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10567d9fc; end: 10567da03; -[SCPercMLLoggingImageClassificationModel loggingDisabled] */

undefined1 FUN_10567d9fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 10567da04; end: 10567da0b; -[SCPercMLLoggingImageClassificationModel setLoggingDisabled:] */

void FUN_10567da04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10567da0c; end: 10567da53; -[SCPercMLLoggingImageClassificationModel .cxx_destruct] */

void FUN_10567da0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10567da54; end: 10567daf7; -[SCPercMLLoggingImageEmbeddingModel initWithImageEmbeddingModel:logger:] */

undefined1 *
FUN_10567da54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e98d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10567daf8; end: 10567daff; -[SCPercMLLoggingImageEmbeddingModel modelKey] */

void FUN_10567daf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_modelKey_1126119f8);
  return;
}



/* Entry: 10567db00; end: 10567db07; -[SCPercMLLoggingImageEmbeddingModel modelId] */

void FUN_10567db00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_modelId_1126119e0);
  return;
}



/* Entry: 10567db08; end: 10567db0f; -[SCPercMLLoggingImageEmbeddingModel approximateSizeInBytes] */

void FUN_10567db08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf08cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_approximateSizeInBytes_11259fce0);
  return;
}



/* Entry: 10567db10; end: 10567db17; -[SCPercMLLoggingImageEmbeddingModel imageWidth] */

void FUN_10567db10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_imageWidth_1125d7e30);
  return;
}



/* Entry: 10567db18; end: 10567db1f; -[SCPercMLLoggingImageEmbeddingModel imageHeight] */

void FUN_10567db18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_imageHeight_1125d7948);
  return;
}



/* Entry: 10567db20; end: 10567dd0f; -[SCPercMLLoggingImageEmbeddingModel runFeatureExtraction:] */

void FUN_10567db20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1;
  func_0x00010c0cff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0cff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c142800(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 1;
  _objc_retain(uVar4);
  _objc_retain(uVar4);
  func_0x00010c0bf0a0(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1;
  func_0x00010c0cff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa6c0(uVar5);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10567dd10; end: 10567dd3b;  */

void FUN_10567dd10(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10567dd3c; end: 10567dd6b; -[SCPercMLLoggingImageEmbeddingModel .cxx_destruct] */

void FUN_10567dd3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10567dd6c; end: 10567de0f; -[SCPercMLLoggingSnapcodeDetectionModel initWithSnapcodeDetectionModel:logger:] */

undefined1 *
FUN_10567dd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e98d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10567de10; end: 10567de17; -[SCPercMLLoggingSnapcodeDetectionModel modelKey] */

void FUN_10567de10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_modelKey_1126119f8);
  return;
}



/* Entry: 10567de18; end: 10567de1f; -[SCPercMLLoggingSnapcodeDetectionModel modelId] */

void FUN_10567de18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_modelId_1126119e0);
  return;
}



/* Entry: 10567de20; end: 10567de27; -[SCPercMLLoggingSnapcodeDetectionModel approximateSizeInBytes] */

void FUN_10567de20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf08cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_approximateSizeInBytes_11259fce0);
  return;
}



/* Entry: 10567de28; end: 10567de2f; -[SCPercMLLoggingSnapcodeDetectionModel snapcodeTypes] */

void FUN_10567de28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c245210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_snapcodeTypes_11266eea8)
  ;
  return;
}



/* Entry: 10567de30; end: 10567de37; -[SCPercMLLoggingSnapcodeDetectionModel isFalseAlarmCheckEnabled] */

void FUN_10567de30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isFalseAlarmCheckEnabled_1125fa468);
  return;
}



/* Entry: 10567de38; end: 10567de3f; -[SCPercMLLoggingSnapcodeDetectionModel isContourEnhancementEnabled] */

void FUN_10567de38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06f650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isContourEnhancementEnabled_1125f97a0);
  return;
}



/* Entry: 10567de40; end: 10567e0af; -[SCPercMLLoggingSnapcodeDetectionModel detectSnapcodesWithBatchImages:] */

void FUN_10567de40(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  double dStack_78;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf6fa40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uVar4 = param_4;
  func_0x00010bf529e0();
  if (uVar4 == 0) {
    dStack_78 = 0.0;
  }
  else {
    func_0x00010c26f380(puVar3);
    uVar4 = param_4;
    func_0x00010bf529e0();
    dStack_78 = param_1 / (double)uVar4;
  }
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 1;
  func_0x00010c0bf0a0(uVar2);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  lVar5 = param_2;
  func_0x00010c0cff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010c0cff20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa6c0(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  if (0.0 < (double)puStack_88[3]) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    lVar5 = param_2;
    func_0x00010c0cff80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cff20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aa6a0(puStack_88[3],uVar7);
    _objc_release(param_2);
    _objc_release(lVar5);
  }
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10567e0b0; end: 10567e0df;  */

void FUN_10567e0b0(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10567e0e0; end: 10567e10f; -[SCPercMLLoggingSnapcodeDetectionModel .cxx_destruct] */

void FUN_10567e0e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


