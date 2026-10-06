/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0f5cc0; end: 10b0f5ea3;  */

void FUN_10b0f5cc0(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 *unaff_x19;
  long *unaff_x20;
  long *plVar2;
  undefined1 *unaff_x22;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [72];
  undefined1 *puStack_190;
  long lStack_188;
  undefined1 auStack_160 [32];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  long lStack_f0;
  long lStack_58;
  
  func_0x00010b0f8318();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00010bf529e0();
  FUN_10b0f7b44();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain();
  func_0x00010b0f81a4();
  if (unaff_x19 != (undefined1 *)0x0) {
    lVar3 = *plStack_130;
    do {
      puVar4 = (undefined1 *)0x0;
      do {
        if (*plStack_130 != lVar3) {
          _objc_enumerationMutation();
        }
        unaff_x22 = *(undefined1 **)(lStack_138 + (long)puVar4 * 8);
        func_0x00010b0f812c();
        puVar1 = unaff_x22;
        FUN_10b0f571c(auStack_160);
        if ((ulong)unaff_x20[1] < (ulong)unaff_x20[2]) {
          func_0x00010b0f8180();
          lVar5 = extraout_x8 + 0x20;
        }
        else {
          plVar2 = unaff_x20;
          FUN_10b0f7e84();
          FUN_10b0f7c50(auStack_100,plVar2,unaff_x20[1] - *unaff_x20 >> 5,unaff_x20 + 2);
          func_0x00010b0f8180(lStack_f0);
          lStack_f0 = lStack_f0 + 0x20;
          FUN_10b0f7bd4();
          lVar5 = unaff_x20[1];
          puVar1 = auStack_100;
          func_0x00010b0f7e1c();
        }
        unaff_x20[1] = lVar5;
        func_0x00010b0f814c();
        func_0x00010b0f80a8();
        puVar4 = puVar4 + 1;
      } while (puVar4 < unaff_x19);
      func_0x00010b0f81a4();
      unaff_x19 = puVar1;
    } while (puVar1 != (undefined1 *)0x0);
  }
  lVar3 = 0;
  func_0x00010b0f8038();
  func_0x00010b0f8038();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b0f8038();
  func_0x00010b0f79e0();
  func_0x00010b0f8038();
  func_0x00010b0f80c0();
  puStack_190 = unaff_x22;
  lStack_188 = lVar3;
  func_0x00010b0f7fe4();
  func_0x00010b0f8090();
  plVar2 = *(long **)(lVar3 + 0x18);
  func_0x000107c27f20(auStack_1f0);
  func_0x00010b0f81cc();
  FUN_10b0f571c();
  (**(code **)(*plVar2 + 0x28))(auStack_1d8,plVar2,auStack_1f0,auStack_210);
  func_0x00010b0f814c();
  func_0x00010b0f813c();
  func_0x00010563299c(auStack_1d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f80f4();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 10b0f5ea4; end: 10b0f5f83; -[SCNContentManagerContentManager claimContent:claimingContentKey:] */

void FUN_10b0f5ea4(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [72];
  
  FUN_10b0f7fe4();
  func_0x00010b0f8090();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000107c27f20(auStack_90);
  func_0x00010b0f81cc();
  FUN_10b0f571c();
  (**(code **)(*plVar1 + 0x28))(auStack_78,plVar1,auStack_90,auStack_b0);
  func_0x00010b0f814c();
  func_0x00010b0f813c();
  func_0x00010563299c(auStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f80f4();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b0f5f84; end: 10b0f605b; -[SCNContentManagerContentManager claimContentBundle:claimingContentKey:] */

void FUN_10b0f5f84(void)

{
  long unaff_x21;
  undefined8 uVar1;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [72];
  
  FUN_10b0f7fe4();
  func_0x00010b0f8090();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_10b1088f8(auStack_88);
  func_0x00010b0f8260();
  FUN_10b0f571c();
  func_0x00010b0f8174(auStack_78);
  func_0x00010b0f8248();
  func_0x00010529fde0(auStack_88);
  func_0x00010563299c(auStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f80f4();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0f605c; end: 10b0f615f; -[SCNContentManagerContentManager linkContent:contentReference:mediaContextType:] */

void FUN_10b0f605c(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [72];
  
  func_0x00010b0f8040();
  func_0x00010b0f8088();
  func_0x00010b0f8090();
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_90);
  func_0x00010b0f81cc();
  FUN_10b0f8900();
  (**(code **)(*plVar2 + 0x38))(auStack_78,plVar2,auStack_90,auStack_d0);
  func_0x00010b0f7a8c(auStack_d0);
  func_0x00010b0f8238();
  puVar1 = auStack_78;
  func_0x00010563299c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a038c(auStack_78);
  func_0x00010b0f8060();
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f6160; end: 10b0f624f; -[SCNContentManagerContentManager claimExistingContent:newContentKey:] */

void FUN_10b0f6160(void)

{
  undefined1 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [72];
  
  FUN_10b0f7fe4();
  func_0x00010b0f8090();
  func_0x00010b0f80b8(auStack_98);
  func_0x00010b0f8260();
  FUN_10b0f571c();
  func_0x00010b0f8174(auStack_78);
  func_0x00010b0f8248();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  puVar1 = auStack_78;
  FUN_10b0f1adc(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a51d4(auStack_78);
  func_0x00010b0f8060();
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f6250; end: 10b0f63ab; -[SCNContentManagerContentManager registerLocalContent:expirationDate:readStream:isAuthoritative:serializedFeatureMetadata:callback:] */

void FUN_10b0f6250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [32];
  
  func_0x00010b0f8088();
  func_0x00010b0f8090();
  func_0x00010b0f8134();
  func_0x00010b0f812c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0f80b8(auStack_70);
  FUN_10b101b80(auStack_80,param_5);
  func_0x000107c28248(auStack_a0,param_7);
  FUN_10b1022c0(auStack_b0,param_8);
  (**(code **)(*plVar1 + 0x48))(plVar1,auStack_70,param_4,auStack_80,param_6,auStack_a0,auStack_b0);
  func_0x00010b0f8240();
  func_0x000107c279c4(auStack_a0);
  FUN_10b0f7ec4(auStack_80);
  func_0x00010b0f8238();
  func_0x00010b0f80a8();
  func_0x00010b0f80b0();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f63ac; end: 10b0f657f; -[SCNContentManagerContentManager registerUrl:encryptionKey:encryptionIv:expirationDate:urlRequest:isEligibleForStreaming:serializedFeatureMetadata:callback:] */

void FUN_10b0f63ac(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar1;
  undefined8 in_stack_00000008;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  func_0x00010b0f8040();
  func_0x00010b0f8088();
  func_0x00010b0f8090();
  func_0x00010b0f8134();
  func_0x00010b0f812c();
  func_0x00010b0f8298();
  func_0x00010b0f8290();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0f80b8(auStack_88);
  func_0x000107c27f20(auStack_a0);
  func_0x00010b0f82b4(auStack_b8);
  FUN_10b1104f8(auStack_c8,in_x6);
  func_0x00010b0f82a0(auStack_e8);
  FUN_10b1022c0(auStack_f8,in_stack_00000008);
  (**(code **)(*plVar1 + 0x50))
            (plVar1,auStack_88,auStack_a0,auStack_b8,in_x5,auStack_c8,in_x7,auStack_e8,auStack_f8);
  func_0x00010b0f7ee8(auStack_f8);
  func_0x000107c279c4(auStack_e8);
  func_0x0001052ac684(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  func_0x00010b0f826c();
  func_0x00010b0f8154();
  func_0x00010b0f815c();
  func_0x00010b0f80a8();
  func_0x00010b0f80b0();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f6580; end: 10b0f67ab; -[SCNContentManagerContentManager registerContentObject:serializedContentObject:mediaType:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:transformParams:serializedFeatureMetadata:callback:] */

void FUN_10b0f6580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  long *plVar1;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  func_0x00010b0f8088();
  func_0x00010b0f8090();
  func_0x00010b0f8134();
  func_0x00010b0f812c();
  func_0x00010b0f8298();
  func_0x00010b0f8290();
  _objc_retain(in_stack_00000018);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0f80b8(auStack_88);
  func_0x000107c28040(auStack_a0,param_4);
  func_0x00010b0f82b4(auStack_b8);
  func_0x000107c27f20(auStack_d0,param_7);
  func_0x00010b0f82a0(auStack_f0);
  func_0x000107c28248(auStack_110,in_stack_00000010);
  FUN_10b1022c0(auStack_120,in_stack_00000018);
  (**(code **)(*plVar1 + 0x58))
            (plVar1,auStack_88,auStack_a0,param_5,auStack_b8,auStack_d0,param_8,param_9,auStack_f0,
             auStack_110,auStack_120);
  func_0x00010b0f7ee8(auStack_120);
  func_0x000107c279c4(auStack_110);
  func_0x000107c279c4(auStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  func_0x000107c27914(auStack_a0);
  func_0x00010b0f8228();
  func_0x00010b0f8220();
  func_0x00010b0f8154();
  func_0x00010b0f815c();
  func_0x00010b0f80a8();
  func_0x00010b0f80b0();
  func_0x00010b0f8060();
  _objc_release(param_3);
  return;
}



/* Entry: 10b0f67ac; end: 10b0f69bf; -[SCNContentManagerContentManager registerUrlWithTransformationParams:encryptionKey:encryptionIv:expirationDate:urlRequest:isEligibleForStreaming:transformParams:serializedFeatureMetadata:callback:] */

void FUN_10b0f67ac(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x19;
  long *plVar1;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  func_0x00010b0f8040();
  func_0x00010b0f8088();
  func_0x00010b0f8090();
  func_0x00010b0f8134();
  func_0x00010b0f812c();
  func_0x00010b0f8298();
  func_0x00010b0f8290();
  _objc_retain(in_stack_00000010);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0f80b8(auStack_88);
  func_0x000107c27f20(auStack_a0);
  func_0x00010b0f82b4(auStack_b8);
  FUN_10b1104f8(auStack_c8,in_x6);
  func_0x00010b0f82a0(auStack_e8);
  func_0x000107c28248(auStack_108,in_stack_00000008);
  FUN_10b1022c0(auStack_118,in_stack_00000010);
  (**(code **)(*plVar1 + 0x60))
            (plVar1,auStack_88,auStack_a0,auStack_b8,in_x5,auStack_c8,in_x7,auStack_e8,auStack_108,
             auStack_118);
  func_0x00010b0f7ee8(auStack_118);
  func_0x000107c279c4(auStack_108);
  func_0x000107c279c4(auStack_e8);
  func_0x0001052ac684(auStack_c8);
  func_0x00010b0f826c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  func_0x00010b0f8228();
  func_0x00010b0f8220();
  func_0x00010b0f8154();
  func_0x00010b0f815c();
  func_0x00010b0f80a8();
  func_0x00010b0f80b0();
  func_0x00010b0f8060();
  _objc_release(unaff_x19);
  return;
}



/* Entry: 10b0f69c0; end: 10b0f6a63; -[SCNContentManagerContentManager releaseAuthoritativeLocalContent:callback:] */

void FUN_10b0f69c0(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_50 [32];
  
  FUN_10b0f7fe4();
  func_0x00010b0f8090();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010b0f80b8(auStack_50);
  func_0x00010b0f81cc();
  FUN_10b1022c0();
  func_0x00010b0f8018(*(undefined8 *)(*plVar1 + 0x68));
  func_0x00010b0f8240();
  func_0x00010b0f8144();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f6a64; end: 10b0f6b97; -[SCNContentManagerContentManager retrieveContent:context:prefetchSignals:callback:] */

void FUN_10b0f6a64(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [16];
  
  func_0x00010b0f8040();
  func_0x00010b0f8088();
  func_0x00010b0f8090();
  func_0x00010b0f8134();
  func_0x00010b0f812c();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010b0f80b8(auStack_80);
  func_0x00010b0f82c8();
  func_0x00010b0f8284();
  func_0x00010b0f8300();
  func_0x00010b0f81b8(auStack_60);
  func_0x00010b0f8258();
  func_0x00010b0f8230();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  FUN_10b49b48c(auStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f80e8();
  func_0x00010b0f80a8();
  func_0x00010b0f80b0();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0f6b98; end: 10b0f6cc7; -[SCNContentManagerContentManager retrieveContentWithContentBundle:context:prefetchSignals:callback:] */

void FUN_10b0f6b98(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  func_0x00010b0f8040();
  func_0x00010b0f8088();
  func_0x00010b0f8090();
  func_0x00010b0f8134();
  func_0x00010b0f812c();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b1088f8(auStack_70);
  func_0x00010b0f82c8();
  func_0x00010b0f8284();
  func_0x00010b0f8300();
  func_0x00010b0f81b8(auStack_60);
  func_0x00010b0f8258();
  func_0x00010b0f8230();
  func_0x00010529fde0(auStack_70);
  FUN_10b49b48c(auStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f80e8();
  func_0x00010b0f80a8();
  func_0x00010b0f80b0();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0f6cc8; end: 10b0f6daf; -[SCNContentManagerContentManager retrieveCachedContent:pageInfo:] */

void FUN_10b0f6cc8(void)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  FUN_10b0f7fe4();
  func_0x00010b0f8090();
  func_0x00010b0f80b8(auStack_60);
  func_0x00010b0f8260();
  FUN_10b49b6b4();
  func_0x00010b0f8174(auStack_40);
  func_0x00010b0f8250();
  func_0x00010b0f813c();
  puVar1 = auStack_40;
  FUN_10b0fae60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f7f30(auStack_40);
  func_0x00010b0f8060();
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f6db0; end: 10b0f6e57; -[SCNContentManagerContentManager monitorDownloadProgress:callback:] */

void FUN_10b0f6db0(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  
  FUN_10b0f7fe4();
  func_0x00010b0f8090();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010b0f80b8(auStack_50);
  func_0x00010b0f81cc();
  FUN_10b10e884();
  func_0x00010b0f8018(*(undefined8 *)(*plVar1 + 0x88));
  func_0x0001052b81f4(auStack_60);
  func_0x00010b0f8144();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f6e58; end: 10b0f6ef7; -[SCNContentManagerContentManager queryContentStatus:] */

long FUN_10b0f6e58(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_50 [32];
  
  func_0x00010b0f8028();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b0f80b8(auStack_50);
  (**(code **)(*plVar1 + 0x90))(plVar1,auStack_50);
  func_0x00010b0f814c();
  func_0x00010b0f8038();
  return (long)(int)plVar1;
}



/* Entry: 10b0f6ef8; end: 10b0f6f9f; -[SCNContentManagerContentManager queryContentStatusAsync:callback:] */

void FUN_10b0f6ef8(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  
  FUN_10b0f7fe4();
  func_0x00010b0f8090();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010b0f80b8(auStack_50);
  func_0x00010b0f81cc();
  FUN_10b1014fc();
  func_0x00010b0f8018(*(undefined8 *)(*plVar1 + 0x98));
  func_0x00010b0f7f54(auStack_60);
  func_0x00010b0f8144();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f6fa0; end: 10b0f7067; -[SCNContentManagerContentManager queryZipEntryContentStatus:zipEntryNamePrefixes:] */

long FUN_10b0f6fa0(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  FUN_10b0f7fe4();
  func_0x00010b0f8090();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010b0f80b8(auStack_50);
  func_0x00010b0f8260();
  func_0x000107c281ac();
  (**(code **)(*plVar1 + 0xa0))(plVar1,auStack_50,auStack_68);
  func_0x00010b0f8250();
  func_0x00010b0f813c();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
  return (long)(int)plVar1;
}



/* Entry: 10b0f7068; end: 10b0f7183; -[SCNContentManagerContentManager queryZipEntryContentStatusAsync:zipEntryNamePrefixes:callback:] */

void FUN_10b0f7068(long param_1)

{
  long *plVar1;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [32];
  
  func_0x00010b0f8040();
  func_0x00010b0f8088();
  func_0x00010b0f8090();
  func_0x00010b0f8134();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0f80b8(auStack_60);
  func_0x000107c281ac(auStack_78);
  FUN_10b1014fc(auStack_88);
  (**(code **)(*plVar1 + 0xa8))(plVar1,auStack_60,auStack_78,auStack_88);
  func_0x00010b0f7f54(auStack_88);
  func_0x000107c278a8(auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  func_0x00010b0f80b0();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f7184; end: 10b0f722b; -[SCNContentManagerContentManager queryContentRetrievalMetricsAsync:callback:] */

void FUN_10b0f7184(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  
  FUN_10b0f7fe4();
  func_0x00010b0f8090();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010b0f80b8(auStack_50);
  func_0x00010b0f81cc();
  FUN_10b0fbc6c();
  func_0x00010b0f8018(*(undefined8 *)(*plVar1 + 0xb0));
  func_0x00010b0f7f78(auStack_60);
  func_0x00010b0f8144();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f722c; end: 10b0f72f7; -[SCNContentManagerContentManager createContentWriter:contentKey:] */

void FUN_10b0f722c(void)

{
  undefined1 *puVar1;
  long unaff_x21;
  long *plVar2;
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [16];
  
  func_0x00010b0f8068();
  plVar2 = *(long **)(unaff_x21 + 0x18);
  FUN_10b0f72f8(auStack_68);
  (**(code **)(*plVar2 + 0xb8))(auStack_40,plVar2);
  FUN_10b0f7ab4(auStack_68);
  puVar1 = auStack_40;
  FUN_10b0fc8f8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f7f9c(auStack_40);
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f72f8; end: 10b0f736f;  */

void FUN_10b0f72f8(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  func_0x00010b0f82dc();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 4) = 0;
  }
  else {
    func_0x00010b0f80b8(&uStack_40);
    unaff_x20[1] = uStack_38;
    *unaff_x20 = uStack_40;
    unaff_x20[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined4 *)(unaff_x20 + 3) = uStack_28;
    *(undefined1 *)(unaff_x20 + 4) = 1;
    func_0x00010b0f814c();
  }
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f7370; end: 10b0f7433; -[SCNContentManagerContentManager removeContents:callback:] */

void FUN_10b0f7370(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  FUN_10b0f7fe4();
  func_0x00010b0f8090();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_10b0f5cc0(auStack_48);
  func_0x00010b0f8260();
  FUN_10b104510();
  (**(code **)(*plVar1 + 0xc0))(plVar1,auStack_48,auStack_58);
  func_0x0001052a6df8(auStack_58);
  func_0x00010b0f79e0(auStack_48);
  func_0x00010b0f8060();
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f7434; end: 10b0f74b7; -[SCNContentManagerContentManager removeAllContentsForContextType:callback:] */

void FUN_10b0f7434(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b0f8068();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010b0f81d8();
  FUN_10b104510();
  func_0x00010b0f8200(*(undefined8 *)(*plVar1 + 200));
  func_0x0001052a6df8(auStack_40);
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f74b8; end: 10b0f7513; -[SCNContentManagerContentManager appStateChanged:] */

void FUN_10b0f74b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0xd0))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10b0f7514; end: 10b0f7597; -[SCNContentManagerContentManager queryCachedContentMetadata:callback:] */

void FUN_10b0f7514(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b0f8068();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010b0f81d8();
  FUN_10b1010e4();
  func_0x00010b0f8200(*(undefined8 *)(*plVar1 + 0xd8));
  func_0x00010b0f7fc0(auStack_40);
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f7598; end: 10b0f763f; -[SCNContentManagerContentManager queryCachedContentMetadataWithAttribution:contentAttribution:callback:] */

void FUN_10b0f7598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0f81d8();
  FUN_10b1010e4();
  (**(code **)(*plVar1 + 0xe0))(plVar1,param_3,param_4,auStack_40);
  func_0x00010b0f7fc0(auStack_40);
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f7640; end: 10b0f76fb; +[SCNContentManagerContentManager getContentIdFromContentObject:] */

void FUN_10b0f7640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x00010b0f8088();
  func_0x000107c28040(auStack_68,param_3);
  FUN_10b235f64(auStack_50,auStack_68);
  func_0x000107c27914(auStack_68);
  puVar1 = auStack_50;
  func_0x000107c27f68(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c279a4(auStack_50);
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f76fc; end: 10b0f778b; -[SCNContentManagerContentManager getContentFetcher] */

void FUN_10b0f76fc(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0xe8))(auStack_30);
  FUN_10b0f5188(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f82f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f778c; end: 10b0f784b; -[SCNContentManagerContentManager logConsumed:useCase:bytesRange:] */

void FUN_10b0f778c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x00010b0f8088();
  func_0x00010b0f8090();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0f80b8(auStack_50);
  func_0x00010b0f8260();
  FUN_10b0effc0();
  (**(code **)(*plVar1 + 0xf0))(plVar1,auStack_50,param_4,auStack_68);
  func_0x00010b0f813c();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f784c; end: 10b0f78cb;  */

void FUN_10b0f784c(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  func_0x00010b0f82dc();
  if (unaff_x19 == 0) {
    plVar1 = (long *)0x10;
    ___cxa_allocate_exception();
    func_0x00010527a174();
    plVar2 = plVar1;
    ___cxa_throw(plVar1,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
    plVar3 = plVar1;
    ___cxa_free_exception();
    func_0x00010b0f8100();
    pcStack_28 = FUN_10b0f78cc;
    lVar4 = *plVar3;
    plStack_40 = plVar2;
    plStack_38 = plVar1;
    puStack_30 = &stack0xfffffffffffffff0;
    if (lVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      lStack_50 = plVar3[1];
      ppuStack_48 = &PTR_DAT_110cba020;
      lStack_58 = lVar4;
      if (lStack_50 != 0) {
        do {
          func_0x00010b0f8114();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c31700(&ppuStack_48,&lStack_58,FUN_10b0f7ad4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b0f82e8();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
    return;
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
  unaff_x20[1] = *(undefined8 *)(unaff_x19 + 0x20);
  *unaff_x20 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010b0f8114();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0f78cc; end: 10b0f794b;  */

void FUN_10b0f78cc(long *param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    unaff_x19 = 0;
  }
  else {
    lStack_30 = param_1[1];
    ppuStack_28 = &PTR_DAT_110cba020;
    lStack_38 = lVar1;
    if (lStack_30 != 0) {
      do {
        func_0x00010b0f8114();
      } while (extraout_w10 != 0);
    }
    func_0x000107c31700(&ppuStack_28,&lStack_38,FUN_10b0f7ad4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b0f82e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10b0f794c; end: 10b0f799f; -[SCNContentManagerContentManager .cxx_destruct] */

void FUN_10b0f794c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba020;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2789c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0f79a0; end: 10b0f7a4f; -[SCNContentManagerContentManager .cxx_construct] */

undefined8 * FUN_10b0f79a0(undefined8 *param_1)

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
      func_0x00010b0f8114();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0f7a50; end: 10b0f7a57;  */

void FUN_10b0f7a50(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b0f8318(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b0f7a58; end: 10b0f7ab3;  */

void FUN_10b0f7a58(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b0f8318();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b0f7ab4; end: 10b0f7ad3;  */

void FUN_10b0f7ab4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b0f7ad4; end: 10b0f7b43;  */

void FUN_10b0f7ad4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b7f48;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b0f8114();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c2789c(&uStack_30);
  return;
}



/* Entry: 10b0f7b44; end: 10b0f7bbf;  */

void FUN_10b0f7b44(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_48 [40];
  
  if ((ulong)(param_1[2] - *param_1 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      FUN_10b0f7bc0();
      func_0x00010b0f7e1c(auStack_48);
      func_0x00010b0f8164();
      plVar1 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      func_0x00010b0f8318();
      lVar2 = *(long *)(param_2 + 8) + (*plVar1 - plVar1[1]);
      FUN_10b0f7cd8(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_1[1] = lVar2;
      lVar2 = *unaff_x20;
      unaff_x20[1] = lVar2;
      *unaff_x20 = param_1[1];
      param_1[1] = lVar2;
      lVar2 = unaff_x20[1];
      unaff_x20[1] = param_1[2];
      param_1[2] = lVar2;
      lVar2 = unaff_x20[2];
      unaff_x20[2] = param_1[3];
      param_1[3] = lVar2;
      *param_1 = param_1[1];
      return;
    }
    FUN_10b0f7c50(auStack_48,param_2,param_1[1] - *param_1 >> 5);
    FUN_10b0f7bd4(param_1,auStack_48);
    func_0x00010b0f7e1c(auStack_48);
  }
  return;
}



/* Entry: 10b0f7bc0; end: 10b0f7bd3;  */

void FUN_10b0f7bc0(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x00010b0f8318();
  lVar1 = *(long *)(param_2 + 8) + (*plVar2 - plVar2[1]);
  FUN_10b0f7cd8(plVar2 + 2,*plVar2,plVar2[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar3 = *unaff_x20;
  unaff_x20[1] = uVar3;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar3;
  uVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar3;
  uVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b0f7bd4; end: 10b0f7c4f;  */

void FUN_10b0f7bd4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b0f8318();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_10b0f7cd8(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b0f7c50; end: 10b0f7cbb;  */

long * FUN_10b0f7c50(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b0f7c98();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 10b0f7cbc; end: 10b0f7cd7;  */

void FUN_10b0f7cbc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if ((ulong)param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_38[2] = param_2[2];
    puStack_38[1] = uVar2;
    *puStack_38 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined4 *)(puStack_38 + 3) = *(undefined4 *)(param_2 + 3);
    puStack_38 = puStack_38 + 4;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_10b0f7d6c();
  FUN_10b0f7d9c(&uStack_60);
  return;
}



/* Entry: 10b0f7cd8; end: 10b0f7d6b;  */

void FUN_10b0f7cd8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_28[2] = param_2[2];
    puStack_28[1] = uVar2;
    *puStack_28 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined4 *)(puStack_28 + 3) = *(undefined4 *)(param_2 + 3);
    puStack_28 = puStack_28 + 4;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_10b0f7d6c();
  FUN_10b0f7d9c(&uStack_50);
  return;
}



/* Entry: 10b0f7d6c; end: 10b0f7d9b;  */

void FUN_10b0f7d6c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b0f7d9c; end: 10b0f7dcb;  */

long FUN_10b0f7d9c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10b0f7dcc(param_1);
  }
  return param_1;
}



/* Entry: 10b0f7dcc; end: 10b0f7deb;  */

void FUN_10b0f7dcc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b0f7dec; end: 10b0f7e47;  */

void FUN_10b0f7dec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b0f7e48; end: 10b0f7e4f;  */

void FUN_10b0f7e48(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b0f8318(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b0f7e50; end: 10b0f7e83;  */

void FUN_10b0f7e50(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b0f8318();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b0f7e84; end: 10b0f7ec3;  */

ulong FUN_10b0f7e84(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    uVar1 = param_1[2] - *param_1 >> 4;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x7ffffffffffffff;
    }
    return uVar1;
  }
  FUN_10b0f7bc0();
  func_0x000107c3503c();
  if (param_1 != (long *)0x0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b0f7ec4; end: 10b0f7fe3;  */

void FUN_10b0f7ec4(long param_1)

{
  func_0x000107c3503c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b0f7fe4; end: 10b0f8323;  */

void FUN_10b0f7fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b0f8324; end: 10b0f83a3; -[SCNContentManagerContentManagerDependencyInjection initWithCpp:] */

undefined1 * FUN_10b0f8324(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705cd8;
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
    func_0x00010b0f844c(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10b0f83a4; end: 10b0f83ff; -[SCNContentManagerContentManagerDependencyInjection .cxx_destruct] */

void FUN_10b0f83a4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba030;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b0f844c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0f8400; end: 10b0f8477; -[SCNContentManagerContentManagerDependencyInjection .cxx_construct] */

undefined8 * FUN_10b0f8400(undefined8 *param_1)

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



/* Entry: 10b0f8478; end: 10b0f847b;  */

void FUN_10b0f8478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba0d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0f847c; end: 10b0f848f;  */

void FUN_10b0f847c(void)

{
  FUN_10b0f88d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0f8490; end: 10b0f849b;  */

void FUN_10b0f8490(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c3505c(param_1);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 10b0f849c; end: 10b0f84db;  */

void FUN_10b0f849c(void)

{
  func_0x00010b0f88f4();
  return;
}



/* Entry: 10b0f84dc; end: 10b0f8523;  */

void FUN_10b0f84dc(void)

{
  func_0x000107c35044();
  func_0x000107c35058();
  func_0x00010bfc8a00();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0fe3e8();
  func_0x000107c3504c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b0f8524; end: 10b0f856b;  */

void FUN_10b0f8524(void)

{
  func_0x000107c35044();
  func_0x000107c35058();
  func_0x00010bfc7f60();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10d504();
  func_0x000107c3504c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b0f856c; end: 10b0f85b3;  */

void FUN_10b0f856c(void)

{
  func_0x000107c35044();
  func_0x000107c35058();
  func_0x00010bfc4840();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20();
  func_0x000107c3504c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b0f85b4; end: 10b0f8667;  */

void FUN_10b0f85b4(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c35044();
  func_0x000107c35058();
  func_0x00010bfc33e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_1 == 0) {
    *(undefined1 *)unaff_x21 = 0;
    *(undefined1 *)(unaff_x21 + 6) = 0;
  }
  else {
    FUN_10b0f38c4(&uStack_60,param_1);
    uVar1 = uStack_48;
    unaff_x21[1] = uStack_58;
    *unaff_x21 = uStack_60;
    unaff_x21[2] = uStack_50;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    unaff_x21[4] = uStack_40;
    unaff_x21[3] = uVar1;
    unaff_x21[5] = uStack_38;
    uStack_40 = 0;
    uStack_38 = 0;
    *(undefined1 *)(unaff_x21 + 6) = 1;
    func_0x0001052a71ac(&uStack_60);
  }
  func_0x000107c3504c();
  func_0x000107c3504c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b0f8668; end: 10b0f86e7;  */

void FUN_10b0f8668(void)

{
  func_0x000107c3505c();
  func_0x000107c35064();
  func_0x00010bfc6820();
  func_0x000107c35054();
  return;
}



/* Entry: 10b0f86e8; end: 10b0f872f;  */

void FUN_10b0f86e8(void)

{
  func_0x000107c35044();
  func_0x000107c35058();
  func_0x00010bfc7f80();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0ff01c();
  func_0x000107c3504c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b0f8730; end: 10b0f8777;  */

void FUN_10b0f8730(void)

{
  func_0x000107c35044();
  func_0x000107c35058();
  func_0x00010bfc2a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27e34();
  func_0x000107c3504c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b0f8778; end: 10b0f87db;  */

undefined1  [16] FUN_10b0f8778(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  _objc_autoreleasePoolPush();
  func_0x000107c35058();
  func_0x00010bfc4360();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28134();
  func_0x000107c3504c();
  _objc_autoreleasePoolPop();
  auVar1._8_8_ = param_2 & 0xff;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10b0f87dc; end: 10b0f883f;  */

void FUN_10b0f87dc(long param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000107c35044();
  func_0x000107c35058();
  func_0x00010bfcad60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_1 == 0) {
    *unaff_x21 = 0;
    unaff_x21[1] = 0;
  }
  else {
    FUN_10b103a04(param_1);
  }
  func_0x000107c3504c();
  func_0x000107c3504c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b0f8840; end: 10b0f88cf;  */

void FUN_10b0f8840(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x000107c3505c();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 10b0f88d0; end: 10b0f88ff;  */

void FUN_10b0f88d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba0d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0f8900; end: 10b0f89e7;  */

void FUN_10b0f8900(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_50);
  uVar2 = param_2;
  func_0x00010bf4cce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_70);
  FUN_10b0f89e8(param_1,auStack_50,auStack_70);
  func_0x000107c279c4(auStack_70);
  _objc_release(uVar2);
  func_0x000107c279a4(auStack_50);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b0f89e8; end: 10b0f8a47;  */

undefined8 * FUN_10b0f89e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  func_0x000107c27b7c(param_1 + 4,param_3);
  return param_1;
}



/* Entry: 10b0f8a48; end: 10b0f8af3;  */

void FUN_10b0f8a48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dfb50;
  _objc_alloc(PTR_PTR_1126dfb50);
  lVar2 = param_1;
  func_0x00010539dccc(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 600) == '\x01') {
    param_1 = param_1 + 0x230;
    FUN_10b0ff368(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00010c0606a0(puVar1,param_2,lVar2,param_1);
  FUN_10b0f8af4();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f8af4; end: 10b0f8aff;  */

void FUN_10b0f8af4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0f8b00; end: 10b0f8bfb;  */

void FUN_10b0f8b00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cba280;
    lStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&lStack_50,FUN_10b0f8bfc);
    uVar1 = uStack_38;
    uVar3 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(lStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar3;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b0f8ea4(&uStack_60);
    func_0x00010b0f8ed8();
    return;
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x00010527a174();
  ___cxa_throw(uVar3,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b0f8bcc);
  (*pcVar2)();
}



/* Entry: 10b0f8bfc; end: 10b0f8cf3;  */

void FUN_10b0f8bfc(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_110cba2c0;
  puVar4[3] = &PTR_DAT_110cba338;
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
  FUN_10b0f8ed0();
  puVar4[3] = &PTR_FUN_110cba310;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b0f8ea4(&uStack_50);
  return;
}



/* Entry: 10b0f8cf4; end: 10b0f8cf7;  */

void FUN_10b0f8cf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba2c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0f8cf8; end: 10b0f8d0b;  */

void FUN_10b0f8cf8(void)

{
  FUN_10b0f8e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0f8d0c; end: 10b0f8d17;  */

long FUN_10b0f8d0c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cba280;
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



/* Entry: 10b0f8d18; end: 10b0f8d57;  */

void FUN_10b0f8d18(void)

{
  func_0x00010b0f8ee0();
  return;
}



/* Entry: 10b0f8d58; end: 10b0f8dff;  */

void FUN_10b0f8d58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b0f57d4(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b109884(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dd760(uVar2);
  FUN_10b0f8ed0();
  func_0x00010b0f8ed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b0f8e00; end: 10b0f8e93;  */

long FUN_10b0f8e00(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cba280;
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



/* Entry: 10b0f8e94; end: 10b0f8ea3;  */

void FUN_10b0f8e94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba2c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0f8ea4; end: 10b0f8ecf;  */

long FUN_10b0f8ea4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b0f8ed0; end: 10b0f8eeb;  */

void FUN_10b0f8ed0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0f8eec; end: 10b0f8f63; -[SCNContentManagerContentResolutionMonitor initWithCpp:] */

undefined1 * FUN_10b0f8eec(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705ce0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b0f9b8c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b0f964c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0f8f64; end: 10b0f9033; +[SCNContentManagerContentResolutionMonitor getUserScoped:] */

void FUN_10b0f8f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  func_0x000107c27f20(auStack_58,param_3);
  FUN_10b18ad04(&uStack_40,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10b0f9034(&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f9bb0();
  func_0x00010b0f9c00();
  func_0x00010b0f9bcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f9034; end: 10b0f926b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b0f9034(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long alStack_68 [7];
  
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  alStack_68[5] = 0;
  alStack_68[6] = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  FUN_10b0f9670(alStack_68 + 3,param_1,alStack_68 + 1);
  FUN_10b0f96cc(alStack_68 + 5,alStack_68 + 3);
  func_0x00010b0f95bc(alStack_68 + 3);
  func_0x00010b0f95bc(alStack_68 + 1);
  func_0x000107c27b48(alStack_68);
  func_0x000107c27b4c(alStack_68 + 3,alStack_68[0]);
  lStack_78 = alStack_68[0];
  alStack_68[0] = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_a0 = alStack_68[5] + 0x48;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  puStack_80 = puVar1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = alStack_68[5];
  func_0x00010b0f970c();
  if ((int)lVar3 == 0) {
    puVar4 = (undefined8 *)0x18;
    __Znwm();
    lVar3 = lStack_78;
    puVar1 = puStack_80;
    *puVar4 = &PTR_FUN_110cba370;
    puStack_80 = (undefined *)0x0;
    lStack_78 = 0;
    puVar4[2] = lVar3;
    puVar4[1] = puVar1;
    plVar5 = *(long **)(alStack_68[5] + 0x90);
    *(undefined8 **)(alStack_68[5] + 0x90) = puVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  else {
    FUN_10b0f96cc(&lStack_90,alStack_68 + 5);
  }
  func_0x000107c2798c(&lStack_a0);
  if (lStack_90 != 0) {
    lStack_a0 = lStack_90;
    lStack_98 = lStack_88;
    if (lStack_88 != 0) {
      do {
        FUN_10b0f9b8c();
      } while (extraout_w10 != 0);
    }
    FUN_10b0f9754(&puStack_80);
    func_0x00010b0f9bb8();
  }
  uStack_a8 = alStack_68[4];
  uStack_b0 = alStack_68[3];
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  func_0x00010b0f9c08();
  func_0x00010b0f9af4(&puStack_80);
  func_0x000107c27b58(alStack_68 + 3);
  lVar3 = alStack_68[0];
  alStack_68[0] = 0;
  if (lVar3 != 0) {
    func_0x00010b0f9c38();
  }
  func_0x00010b0f95bc(alStack_68 + 5);
  func_0x000107c27b58(&uStack_b0);
  _objc_release(0);
  func_0x00010b0f9bcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0f926c; end: 10b0f92ff; +[SCNContentManagerContentResolutionMonitor getGlobalScoped] */

void FUN_10b0f926c(void)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  FUN_10b18b638(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b0f9034(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f9bb0();
  func_0x00010b0f9bb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f9300; end: 10b0f9417; -[SCNContentManagerContentResolutionMonitor requestMonitoringContent:observer:] */

void FUN_10b0f9300(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b0f571c(auStack_60,param_3);
  FUN_10b0f8b00(auStack_70,param_4);
  (**(code **)(*plVar1 + 0x10))(auStack_40,plVar1,auStack_60,auStack_70);
  func_0x00010b0f9b20(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  FUN_10b49b48c(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f9c44();
  func_0x00010b0f9c28();
  func_0x00010b0f9bcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b0f9418; end: 10b0f949f; -[SCNContentManagerContentResolutionMonitor getSignalCollector] */

void FUN_10b0f9418(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_30);
  FUN_10b0f9f54(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f9bd4();
  func_0x00010b0f9b44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f94a0; end: 10b0f9527; -[SCNContentManagerContentResolutionMonitor getPlaylistScopedAnalyticsInfoAccessor] */

void FUN_10b0f94a0(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(auStack_30);
  FUN_10b0ff5c8(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f9bd4();
  func_0x00010b0f9b68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f9528; end: 10b0f957b; -[SCNContentManagerContentResolutionMonitor .cxx_destruct] */

void FUN_10b0f9528(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba350;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10b0f964c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0f957c; end: 10b0f95df; -[SCNContentManagerContentResolutionMonitor .cxx_construct] */

undefined8 * FUN_10b0f957c(undefined8 *param_1)

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
      FUN_10b0f9b8c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0f95e0; end: 10b0f964b;  */

void FUN_10b0f95e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfb58;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b0f9b8c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10b0f964c(&uStack_30);
  return;
}



/* Entry: 10b0f964c; end: 10b0f966f;  */

void FUN_10b0f964c(long param_1)

{
  func_0x00010b0f9c1c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b0f9670; end: 10b0f96cb;  */

void FUN_10b0f9670(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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



/* Entry: 10b0f96cc; end: 10b0f9753;  */

undefined8 * FUN_10b0f96cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b0f9bb0();
  return param_1;
}



/* Entry: 10b0f9754; end: 10b0f9a5f;  */

void FUN_10b0f9754(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar5;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined1 uStack_48;
  
  if (param_3 != 0) {
    do {
      FUN_10b0f9b8c();
    } while (extraout_w10 != 0);
    do {
      FUN_10b0f9b8c();
    } while (extraout_w10_00 != 0);
  }
  uVar5 = *param_1;
  puStack_a0 = (undefined8 *)0x0;
  lStack_98 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_b0 = param_2;
  lStack_a8 = param_3;
  FUN_10b0f9670(&ppuStack_50,&uStack_b0,&uStack_60);
  FUN_10b0f96cc(&puStack_a0,&ppuStack_50);
  func_0x00010b0f95bc(&ppuStack_50);
  func_0x00010b0f95bc(&uStack_60);
  ppuStack_50 = (undefined **)(puStack_a0 + 9);
  uStack_48 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar1 = puStack_a0;
  puStack_70 = puStack_a0;
  lStack_68 = lStack_98;
  if (lStack_98 != 0) {
    do {
      FUN_10b0f9b8c();
    } while (extraout_w10_01 != 0);
  }
  while (puVar4 = puVar1, func_0x00010b0f970c(), ((ulong)puVar4 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar1 + 3,&ppuStack_50);
  }
  func_0x00010b0f95bc(&puStack_70);
  if (puStack_a0[0x11] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_78);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_78);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10b0f98e4);
    (*pcVar3)();
  }
  puVar1 = (undefined8 *)*puStack_a0;
  lVar2 = puStack_a0[1];
  *puStack_a0 = 0;
  puStack_a0[1] = 0;
  puStack_88 = puVar1;
  lStack_80 = lVar2;
  func_0x000107c2798c(&ppuStack_50);
  func_0x00010b0f9c00();
  if (puVar1 != (undefined8 *)0x0) {
    ppuStack_50 = &PTR_DAT_110cba350;
    puStack_a0 = puVar1;
    lStack_98 = lVar2;
    if (lVar2 != 0) {
      do {
        FUN_10b0f9b8c();
      } while (extraout_w10_02 != 0);
    }
    func_0x000107c31700(&ppuStack_50,&puStack_a0,FUN_10b0f95e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c27d28(&puStack_a0);
  }
  func_0x00010c220160(uVar5);
  func_0x00010b0f9be0();
  FUN_10b0f964c(&puStack_88);
  func_0x00010b0f9c08();
  func_0x00010b0f9bb8();
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 10b0f9a60; end: 10b0f9a63;  */

undefined8 * FUN_10b0f9a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba370;
  func_0x00010b0f9af4(param_1 + 1);
  return param_1;
}


