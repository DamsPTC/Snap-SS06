/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b082dac; end: 10b082db3; -[SCLensConfigLogParams rankingData] */

undefined8 FUN_10b082dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10b082db4; end: 10b082dbb; -[SCLensConfigLogParams adId] */

undefined8 FUN_10b082db4(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10b082dbc; end: 10b082dc3; -[SCLensConfigLogParams lensSwipeId] */

undefined8 FUN_10b082dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10b082dc4; end: 10b082dcb; -[SCLensConfigLogParams isSnapchatExclusiveLens] */

undefined1 FUN_10b082dc4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b082dcc; end: 10b082eaf; -[SCLensConfigLogParams .cxx_destruct] */

void FUN_10b082dcc(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b082eb0; end: 10b082ecb; +[SCLensConfigLogParamsBuilder lensConfigLogParams] */

void FUN_10b082eb0(void)

{
  _objc_alloc_init(PTR_PTR_1126c4328);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b082ecc; end: 10b0834ff; +[SCLensConfigLogParamsBuilder lensConfigLogParamsFromExistingLensConfigLogParams:] */

void FUN_10b082ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined8 uVar42;
  undefined *puVar43;
  undefined8 uVar44;
  undefined *puVar45;
  
  puVar1 = PTR_PTR_1126c4328;
  _objc_retain(param_3);
  func_0x00010c091ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b2880(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c095a20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b2ac0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c08fde0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b2680(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c14fae0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b7a20(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c14ef20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b7980(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c14f140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2b79a0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c14eee0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2b7940(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c14eec0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2b7920(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c14ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2b78e0(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c26a320();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2bad80(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c14ef00(param_3);
  puVar23 = puVar21;
  func_0x00010c2b7960(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf9f040(param_3);
  puVar24 = puVar23;
  func_0x00010c2ad9e0(puVar23,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf9f120(param_3);
  puVar25 = puVar24;
  func_0x00010c2ada00(puVar24,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c090320();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c2b26c0(puVar25,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010c0947c0(param_3);
  puVar28 = puVar26;
  func_0x00010c2b28c0(puVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010c094800(param_3);
  puVar29 = puVar28;
  func_0x00010c2b28e0(puVar28,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010c095800();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar29;
  func_0x00010c2b2aa0(puVar29,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010c095a80(param_3);
  puVar32 = puVar30;
  func_0x00010c2b2ae0(puVar30,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010c096ca0(param_3);
  puVar33 = puVar32;
  func_0x00010c2b2ca0(puVar32,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010c097820(param_3);
  puVar34 = puVar33;
  func_0x00010c2b2d60(puVar33,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010c270160();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar34;
  func_0x00010c2bb2a0(puVar34,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_3;
  func_0x00010c11fae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar35;
  func_0x00010c2b6760(puVar35,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_3;
  func_0x00010c11fa40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar37;
  func_0x00010c2b6740(puVar37,param_2,uVar38);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar41 = puVar39;
  func_0x00010c2a7840(puVar39,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = param_3;
  func_0x00010c0972c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar43 = puVar41;
  func_0x00010c2b2d20(puVar41,param_2,uVar42);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = param_3;
  func_0x00010c07ed60(param_3);
  _objc_release(param_3);
  puVar45 = puVar43;
  func_0x00010c2b15e0(puVar43,param_2,uVar44);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar43);
  _objc_release(uVar42);
  _objc_release(puVar41);
  _objc_release(uVar40);
  _objc_release(puVar39);
  _objc_release(uVar38);
  _objc_release(puVar37);
  _objc_release(uVar36);
  _objc_release(puVar35);
  _objc_release(uVar31);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar30);
  _objc_release(uVar27);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar26);
  _objc_release(uVar22);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar45);
  return;
}



/* Entry: 10b083500; end: 10b083587; -[SCLensConfigLogParamsBuilder build] */

void FUN_10b083500(void)

{
  _objc_alloc(PTR_PTR_1126d9648);
  func_0x00010c024660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b083588; end: 10b0835bf; -[SCLensConfigLogParamsBuilder withLensId:] */

long FUN_10b083588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0835c0; end: 10b0835f7; -[SCLensConfigLogParamsBuilder withLensOptionId:] */

long FUN_10b0835c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0835f8; end: 10b08362f; -[SCLensConfigLogParamsBuilder withLensApplicableContext:] */

long FUN_10b0835f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b083630; end: 10b083667; -[SCLensConfigLogParamsBuilder withSceneIntelligenceRequestId:] */

long FUN_10b083630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b083668; end: 10b08369f; -[SCLensConfigLogParamsBuilder withScanResultId:] */

long FUN_10b083668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0836a0; end: 10b0836d7; -[SCLensConfigLogParamsBuilder withScanSessionId:] */

long FUN_10b0836a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0836d8; end: 10b08370f; -[SCLensConfigLogParamsBuilder withScanRequestId:] */

long FUN_10b0836d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b083710; end: 10b083747; -[SCLensConfigLogParamsBuilder withScanQueryId:] */

long FUN_10b083710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b083748; end: 10b08377f; -[SCLensConfigLogParamsBuilder withScanHistorySessionId:] */

long FUN_10b083748(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b083780; end: 10b0837b7; -[SCLensConfigLogParamsBuilder withTargetingCampaignId:] */

long FUN_10b083780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0837b8; end: 10b0837bf; -[SCLensConfigLogParamsBuilder withScanResponseTimestampMs:] */

void FUN_10b0837b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b0837c0; end: 10b0837c7; -[SCLensConfigLogParamsBuilder withFaceBackCameraCount:] */

void FUN_10b0837c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10b0837c8; end: 10b0837cf; -[SCLensConfigLogParamsBuilder withFaceFrontCameraCount:] */

void FUN_10b0837c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10b0837d0; end: 10b083807; -[SCLensConfigLogParamsBuilder withLensBundleUrl:] */

long FUN_10b0837d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b083808; end: 10b08380f; -[SCLensConfigLogParamsBuilder withLensIndexCount:] */

void FUN_10b083808(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10b083810; end: 10b083817; -[SCLensConfigLogParamsBuilder withLensIndexPos:] */

void FUN_10b083810(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 10b083818; end: 10b08384f; -[SCLensConfigLogParamsBuilder withLensNamespace:] */

long FUN_10b083818(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b083850; end: 10b083857; -[SCLensConfigLogParamsBuilder withLensOptionSourceType:] */

void FUN_10b083850(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10b083858; end: 10b08385f; -[SCLensConfigLogParamsBuilder withLensSource:] */

void FUN_10b083858(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 10b083860; end: 10b083867; -[SCLensConfigLogParamsBuilder withLensType:] */

void FUN_10b083860(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 10b083868; end: 10b08389f; -[SCLensConfigLogParamsBuilder withTimelineLensIds:] */

long FUN_10b083868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0838a0; end: 10b0838d7; -[SCLensConfigLogParamsBuilder withRankingId:] */

long FUN_10b0838a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0838d8; end: 10b08390f; -[SCLensConfigLogParamsBuilder withRankingData:] */

long FUN_10b0838d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b083910; end: 10b083947; -[SCLensConfigLogParamsBuilder withAdId:] */

long FUN_10b083910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b083948; end: 10b08397f; -[SCLensConfigLogParamsBuilder withLensSwipeId:] */

long FUN_10b083948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b083980; end: 10b083987; -[SCLensConfigLogParamsBuilder withIsSnapchatExclusiveLens:] */

void FUN_10b083980(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 10b083988; end: 10b083a6b; -[SCLensConfigLogParamsBuilder .cxx_destruct] */

void FUN_10b083988(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 10b083a6c; end: 10b083deb; -[SCCreativeKitSnapMetadata initWithCoder:] */

undefined1 * FUN_10b083a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127051b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xf) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x11) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x12) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x13) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b083dec; end: 10b084157; -[SCCreativeKitSnapMetadata initWithKitPluginType:isSpotlightPostingPermitted:oAuthClientId:applicationId:attachmentUrl:snapKitCreativeKitProduct:creativeKitVersion:didDeleteAttachmentUrl:didDeleteCaption:didDeleteSticker:lensId:scannableLensId:creativeKitShareType:creativeKitStickerType:hasAttachmentUrl:hasCaption:hasLens:topicList:isUsingAutogeneratedSticker:isFromReactNativePlugin:requiresIdentityWebview:snapKitSessionId:deepLinkUrl:deepLinkHandlingId:hasLensLaunchData:isDraggableSticker:identifierForVendor:ipAddress:snapAdsId:] */

undefined8 *
FUN_10b083dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
             undefined4 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined4 param_24,
             undefined4 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  puStack_70 = PTR_PTR_1127051b8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = param_3;
    *(undefined1 *)(puVar1 + 1) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[7] = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 10) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_10._2_1_;
    puVar1[9] = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    puVar1[0xb] = param_14;
    puVar1[0xc] = param_15;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_16;
    *(undefined1 *)((long)puVar1 + 0xd) = param_16._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_16._2_1_;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xf) = (undefined1)param_19;
    *(undefined1 *)(puVar1 + 2) = param_19._1_1_;
    *(undefined1 *)((long)puVar1 + 0x11) = param_19._2_1_;
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    puVar1[0x10] = param_23;
    *(undefined1 *)((long)puVar1 + 0x12) = (undefined1)param_24;
    *(undefined1 *)((long)puVar1 + 0x13) = param_24._1_1_;
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_18);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b084158; end: 10b08417b; -[SCCreativeKitSnapMetadata copyWithZone:] */

undefined8 FUN_10b084158(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b08417c; end: 10b0843f7; -[SCCreativeKitSnapMetadata encodeWithCoder:] */

void FUN_10b08417c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f58958);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f58978);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ed8f18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f58998);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110e287d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f589b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f589d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f589f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f58a18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f58a38);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110eeb138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f58a58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f58a78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f58a98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f58ab8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110f58ad8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110f58af8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f58b18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xf),
                      &PTR____CFConstantStringClassReference_110f58b38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f58b58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x11),
                      &PTR____CFConstantStringClassReference_110f58b78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f58b98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f58bb8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f58bd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x12),
                      &PTR____CFConstantStringClassReference_110f58bf8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x13),
                      &PTR____CFConstantStringClassReference_110f58c18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f58c38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110f58c58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110f58c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0843f8; end: 10b084557; -[SCCreativeKitSnapMetadata hash] */

long * FUN_10b0843f8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_110;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lStack_110 = -lVar5;
  if (-1 < lVar5) {
    lStack_110 = lVar5;
  }
  uStack_108 = (ulong)*(byte *)(param_1 + 8);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_100 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_f8 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  uStack_e0 = *(undefined8 *)(param_1 + 0x40);
  lStack_e8 = -lVar5;
  if (-1 < lVar5) {
    lStack_e8 = lVar5;
  }
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uStack_d8 = (ulong)*(byte *)(param_1 + 9);
  uStack_d0 = (ulong)*(byte *)(param_1 + 10);
  uStack_c8 = (ulong)*(byte *)(param_1 + 0xb);
  lVar5 = *(long *)(param_1 + 0x48);
  uStack_b8 = *(undefined8 *)(param_1 + 0x50);
  lStack_c0 = -lVar5;
  if (-1 < lVar5) {
    lStack_c0 = lVar5;
  }
  func_0x00010bfde980();
  uStack_b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uStack_a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uStack_a0 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_98 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_90 = (ulong)*(byte *)(param_1 + 0xe);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bfde980();
  uStack_80 = (ulong)*(byte *)(param_1 + 0xf);
  uStack_78 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_70 = (ulong)*(byte *)(param_1 + 0x11);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x80);
  uStack_40 = *(undefined8 *)(param_1 + 0x88);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_50 = (ulong)*(byte *)(param_1 + 0x12);
  uStack_48 = (ulong)*(byte *)(param_1 + 0x13);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&lStack_110,0x1d);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10b0847d0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0847dc;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((((ulong)puVar4 & 1) != 0) &&
          ((((*(long *)((long)plVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
             (*(char *)((long)plVar3 + 8) == param_3[8])) &&
            (*(long *)((long)plVar3 + 0x38) == *(long *)(param_3 + 0x38))) &&
           ((*(char *)((long)plVar3 + 9) == param_3[9] &&
            (*(char *)((long)plVar3 + 10) == param_3[10])))))) &&
         (*(char *)((long)plVar3 + 0xb) == param_3[0xb])) &&
        (((((*(long *)((long)plVar3 + 0x48) == *(long *)(param_3 + 0x48) &&
            (*(long *)((long)plVar3 + 0x58) == *(long *)(param_3 + 0x58))) &&
           ((*(long *)((long)plVar3 + 0x60) == *(long *)(param_3 + 0x60) &&
            (((*(char *)((long)plVar3 + 0xc) == param_3[0xc] &&
              (*(char *)((long)plVar3 + 0xd) == param_3[0xd])) &&
             (*(char *)((long)plVar3 + 0xe) == param_3[0xe])))))) &&
          ((*(char *)((long)plVar3 + 0xf) == param_3[0xf] &&
           (*(char *)((long)plVar3 + 0x10) == param_3[0x10])))) &&
         (*(char *)((long)plVar3 + 0x11) == param_3[0x11])))) &&
       (((*(long *)((long)plVar3 + 0x80) == *(long *)(param_3 + 0x80) &&
         (*(char *)((long)plVar3 + 0x12) == param_3[0x12])) &&
        (*(char *)((long)plVar3 + 0x13) == param_3[0x13])))) {
      lVar5 = *(long *)((long)plVar3 + 0x20);
      if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)plVar3 + 0x28);
        if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)plVar3 + 0x30);
          if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)plVar3 + 0x40);
            if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)plVar3 + 0x50);
              if ((lVar5 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)plVar3 + 0x68);
                if ((lVar5 == *(long *)(param_3 + 0x68)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)plVar3 + 0x70);
                  if ((lVar5 == *(long *)(param_3 + 0x70)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)plVar3 + 0x78);
                    if ((lVar5 == *(long *)(param_3 + 0x78)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)plVar3 + 0x88);
                      if ((lVar5 == *(long *)(param_3 + 0x88)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)plVar3 + 0x90);
                        if ((lVar5 == *(long *)(param_3 + 0x90)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          puVar6 = *(undefined1 **)((long)plVar3 + 0x98);
                          if (puVar6 != *(undefined1 **)(param_3 + 0x98)) {
                            func_0x00010c071ae0();
                            goto LAB_10b0847dc;
                          }
                          goto LAB_10b0847d0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0847dc:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10b084558; end: 10b0847f7; -[SCCreativeKitSnapMetadata isEqual:] */

long FUN_10b084558(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0847d0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0847dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
             (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
            (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
           ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
            (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
         (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) &&
        (((((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
            (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
           ((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
            (((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
              (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
             (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))))))) &&
          ((*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf) &&
           (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))) &&
         (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))))) &&
       (((*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80) &&
         (*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12))) &&
        (*(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13))))) {
      lVar3 = *(long *)(param_1 + 0x20);
      if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x50);
              if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x68);
                if ((lVar3 == *(long *)(param_3 + 0x68)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x70);
                  if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x78);
                    if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x88);
                      if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x90);
                        if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x98);
                          if (lVar3 != *(long *)(param_3 + 0x98)) {
                            func_0x00010c071ae0();
                            goto LAB_10b0847dc;
                          }
                          goto LAB_10b0847d0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0847dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0847f8; end: 10b0847ff; -[SCCreativeKitSnapMetadata kitPluginType] */

undefined8 FUN_10b0847f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b084800; end: 10b084807; -[SCCreativeKitSnapMetadata isSpotlightPostingPermitted] */

undefined1 FUN_10b084800(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b084808; end: 10b08480f; -[SCCreativeKitSnapMetadata oAuthClientId] */

undefined8 FUN_10b084808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b084810; end: 10b084817; -[SCCreativeKitSnapMetadata applicationId] */

undefined8 FUN_10b084810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b084818; end: 10b08481f; -[SCCreativeKitSnapMetadata attachmentUrl] */

undefined8 FUN_10b084818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b084820; end: 10b084827; -[SCCreativeKitSnapMetadata snapKitCreativeKitProduct] */

undefined8 FUN_10b084820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b084828; end: 10b08482f; -[SCCreativeKitSnapMetadata creativeKitVersion] */

undefined8 FUN_10b084828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b084830; end: 10b084837; -[SCCreativeKitSnapMetadata didDeleteAttachmentUrl] */

undefined1 FUN_10b084830(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b084838; end: 10b08483f; -[SCCreativeKitSnapMetadata didDeleteCaption] */

undefined1 FUN_10b084838(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b084840; end: 10b084847; -[SCCreativeKitSnapMetadata didDeleteSticker] */

undefined1 FUN_10b084840(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b084848; end: 10b08484f; -[SCCreativeKitSnapMetadata lensId] */

undefined8 FUN_10b084848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b084850; end: 10b084857; -[SCCreativeKitSnapMetadata scannableLensId] */

undefined8 FUN_10b084850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b084858; end: 10b08485f; -[SCCreativeKitSnapMetadata creativeKitShareType] */

undefined8 FUN_10b084858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b084860; end: 10b084867; -[SCCreativeKitSnapMetadata creativeKitStickerType] */

undefined8 FUN_10b084860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b084868; end: 10b08486f; -[SCCreativeKitSnapMetadata hasAttachmentUrl] */

undefined1 FUN_10b084868(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b084870; end: 10b084877; -[SCCreativeKitSnapMetadata hasCaption] */

undefined1 FUN_10b084870(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b084878; end: 10b08487f; -[SCCreativeKitSnapMetadata hasLens] */

undefined1 FUN_10b084878(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10b084880; end: 10b084887; -[SCCreativeKitSnapMetadata topicList] */

undefined8 FUN_10b084880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b084888; end: 10b08488f; -[SCCreativeKitSnapMetadata isUsingAutogeneratedSticker] */

undefined1 FUN_10b084888(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10b084890; end: 10b084897; -[SCCreativeKitSnapMetadata isFromReactNativePlugin] */

undefined1 FUN_10b084890(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b084898; end: 10b08489f; -[SCCreativeKitSnapMetadata requiresIdentityWebview] */

undefined1 FUN_10b084898(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 10b0848a0; end: 10b0848a7; -[SCCreativeKitSnapMetadata snapKitSessionId] */

undefined8 FUN_10b0848a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b0848a8; end: 10b0848af; -[SCCreativeKitSnapMetadata deepLinkUrl] */

undefined8 FUN_10b0848a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b0848b0; end: 10b0848b7; -[SCCreativeKitSnapMetadata deepLinkHandlingId] */

undefined8 FUN_10b0848b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b0848b8; end: 10b0848bf; -[SCCreativeKitSnapMetadata hasLensLaunchData] */

undefined1 FUN_10b0848b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 10b0848c0; end: 10b0848c7; -[SCCreativeKitSnapMetadata isDraggableSticker] */

undefined1 FUN_10b0848c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 10b0848c8; end: 10b0848cf; -[SCCreativeKitSnapMetadata identifierForVendor] */

undefined8 FUN_10b0848c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b0848d0; end: 10b0848d7; -[SCCreativeKitSnapMetadata ipAddress] */

undefined8 FUN_10b0848d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b0848d8; end: 10b0848df; -[SCCreativeKitSnapMetadata snapAdsId] */

undefined8 FUN_10b0848d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b0848e0; end: 10b08497b; -[SCCreativeKitSnapMetadata .cxx_destruct] */

void FUN_10b0848e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b08497c; end: 10b084997; +[SCCreativeKitSnapMetadataBuilder creativeKitSnapMetadata] */

void FUN_10b08497c(void)

{
  _objc_alloc_init(PTR_PTR_1126c3dd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b084998; end: 10b084fcb; +[SCCreativeKitSnapMetadataBuilder creativeKitSnapMetadataFromExistingCreativeKitSnapMetadata:] */

void FUN_10b084998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined *puVar41;
  
  puVar1 = PTR_PTR_1126c3dd0;
  _objc_retain(param_3);
  func_0x00010bf5ad40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c087180(param_3);
  puVar3 = puVar1;
  func_0x00010c2b1fa0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c07f460(param_3);
  puVar4 = puVar3;
  func_0x00010c2b16c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0dfa00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2b4b20(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf07940();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2a86a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2a8a40(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c241940(param_3);
  puVar11 = puVar9;
  func_0x00010c2b9480(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf5ada0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2ab480(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf74620(param_3);
  puVar14 = puVar12;
  func_0x00010c2ac3e0(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf74660(param_3);
  puVar15 = puVar14;
  func_0x00010c2ac400(puVar14,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf74740(param_3);
  puVar16 = puVar15;
  func_0x00010c2ac420(puVar15,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c094540(param_3);
  puVar17 = puVar16;
  func_0x00010c2b2880(puVar16,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c14f760();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c2b79e0(puVar17,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bf5ad20(param_3);
  puVar20 = puVar18;
  func_0x00010c2ab420(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bf5ad80(param_3);
  puVar21 = puVar20;
  func_0x00010c2ab460(puVar20,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bfd4400(param_3);
  puVar22 = puVar21;
  func_0x00010c2af0c0(puVar21,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bfd5180(param_3);
  puVar23 = puVar22;
  func_0x00010c2af180(puVar22,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bfd84e0(param_3);
  puVar24 = puVar23;
  func_0x00010c2af320(puVar23,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010c2752e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010c2bb640(puVar24,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c0829c0(param_3);
  puVar27 = puVar25;
  func_0x00010c2b1980(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c073d20(param_3);
  puVar28 = puVar27;
  func_0x00010c2b0920(puVar27,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c137880(param_3);
  puVar29 = puVar28;
  func_0x00010c2b7260(puVar28,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c241bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar29;
  func_0x00010c2b94c0(puVar29,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010bf68340();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar30;
  func_0x00010c2ac060(puVar30,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_3;
  func_0x00010bf67fa0(param_3);
  puVar34 = puVar32;
  func_0x00010c2abfe0(puVar32,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_3;
  func_0x00010bfd85e0(param_3);
  puVar35 = puVar34;
  func_0x00010c2af360(puVar34,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_3;
  func_0x00010c070e80(param_3);
  puVar36 = puVar35;
  func_0x00010c2b0600(puVar35,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_3;
  func_0x00010bfe5f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar36;
  func_0x00010c2af9c0(puVar36,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_3;
  func_0x00010c06afe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar37;
  func_0x00010c2b00c0(puVar37,param_2,uVar38);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_3;
  func_0x00010c23f300(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar41 = puVar39;
  func_0x00010c2b91a0(puVar39,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar40);
  _objc_release(puVar39);
  _objc_release(uVar38);
  _objc_release(puVar37);
  _objc_release(uVar33);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar32);
  _objc_release(uVar31);
  _objc_release(puVar30);
  _objc_release(uVar26);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar25);
  _objc_release(uVar19);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(uVar13);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(uVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar41);
  return;
}



/* Entry: 10b084fcc; end: 10b085087; -[SCCreativeKitSnapMetadataBuilder build] */

void FUN_10b084fcc(void)

{
  _objc_alloc(PTR_PTR_1126d9638);
  func_0x00010c021240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b085088; end: 10b08508f; -[SCCreativeKitSnapMetadataBuilder withKitPluginType:] */

void FUN_10b085088(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b085090; end: 10b085097; -[SCCreativeKitSnapMetadataBuilder withIsSpotlightPostingPermitted:] */

void FUN_10b085090(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b085098; end: 10b0850cf; -[SCCreativeKitSnapMetadataBuilder withOAuthClientId:] */

long FUN_10b085098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0850d0; end: 10b085107; -[SCCreativeKitSnapMetadataBuilder withApplicationId:] */

long FUN_10b0850d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b085108; end: 10b08513f; -[SCCreativeKitSnapMetadataBuilder withAttachmentUrl:] */

long FUN_10b085108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b085140; end: 10b085147; -[SCCreativeKitSnapMetadataBuilder withSnapKitCreativeKitProduct:] */

void FUN_10b085140(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b085148; end: 10b08517f; -[SCCreativeKitSnapMetadataBuilder withCreativeKitVersion:] */

long FUN_10b085148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b085180; end: 10b085187; -[SCCreativeKitSnapMetadataBuilder withDidDeleteAttachmentUrl:] */

void FUN_10b085180(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b085188; end: 10b08518f; -[SCCreativeKitSnapMetadataBuilder withDidDeleteCaption:] */

void FUN_10b085188(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x41) = param_3;
  return;
}



/* Entry: 10b085190; end: 10b085197; -[SCCreativeKitSnapMetadataBuilder withDidDeleteSticker:] */

void FUN_10b085190(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x42) = param_3;
  return;
}



/* Entry: 10b085198; end: 10b08519f; -[SCCreativeKitSnapMetadataBuilder withLensId:] */

void FUN_10b085198(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b0851a0; end: 10b0851d7; -[SCCreativeKitSnapMetadataBuilder withScannableLensId:] */

long FUN_10b0851a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0851d8; end: 10b0851df; -[SCCreativeKitSnapMetadataBuilder withCreativeKitShareType:] */

void FUN_10b0851d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b0851e0; end: 10b0851e7; -[SCCreativeKitSnapMetadataBuilder withCreativeKitStickerType:] */

void FUN_10b0851e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10b0851e8; end: 10b0851ef; -[SCCreativeKitSnapMetadataBuilder withHasAttachmentUrl:] */

void FUN_10b0851e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10b0851f0; end: 10b0851f7; -[SCCreativeKitSnapMetadataBuilder withHasCaption:] */

void FUN_10b0851f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x69) = param_3;
  return;
}



/* Entry: 10b0851f8; end: 10b0851ff; -[SCCreativeKitSnapMetadataBuilder withHasLens:] */

void FUN_10b0851f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x6a) = param_3;
  return;
}



/* Entry: 10b085200; end: 10b085237; -[SCCreativeKitSnapMetadataBuilder withTopicList:] */

long FUN_10b085200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b085238; end: 10b08523f; -[SCCreativeKitSnapMetadataBuilder withIsUsingAutogeneratedSticker:] */

void FUN_10b085238(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10b085240; end: 10b085247; -[SCCreativeKitSnapMetadataBuilder withIsFromReactNativePlugin:] */

void FUN_10b085240(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x79) = param_3;
  return;
}



/* Entry: 10b085248; end: 10b08524f; -[SCCreativeKitSnapMetadataBuilder withRequiresIdentityWebview:] */

void FUN_10b085248(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x7a) = param_3;
  return;
}



/* Entry: 10b085250; end: 10b085287; -[SCCreativeKitSnapMetadataBuilder withSnapKitSessionId:] */

long FUN_10b085250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b085288; end: 10b0852bf; -[SCCreativeKitSnapMetadataBuilder withDeepLinkUrl:] */

long FUN_10b085288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0852c0; end: 10b0852c7; -[SCCreativeKitSnapMetadataBuilder withDeepLinkHandlingId:] */

void FUN_10b0852c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10b0852c8; end: 10b0852cf; -[SCCreativeKitSnapMetadataBuilder withHasLensLaunchData:] */

void FUN_10b0852c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 10b0852d0; end: 10b0852d7; -[SCCreativeKitSnapMetadataBuilder withIsDraggableSticker:] */

void FUN_10b0852d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x99) = param_3;
  return;
}


