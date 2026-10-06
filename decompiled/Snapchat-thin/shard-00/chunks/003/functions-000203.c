/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10049435c; end: 100494363; -[SCNGrpcAuthContextRequest networkRequestId] */

undefined8 FUN_10049435c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100494364; end: 1004948bf; -[SCSnapTokenManager fetchAccessTokenTrySyncFirstWithLoggingParams:requestId:accessType:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_100494364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puVar1 = &UNK_10f6ed815;
  FUN_1000ba800();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_8 == 0) {
    ppuStack_178 = (undefined **)0x0;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1004a1298;
    puStack_78 = &UNK_110c9af80;
    func_0x000107c61174(param_8);
    ppuStack_178 = &puStack_90;
    lStack_70 = param_8;
    func_0x000107c61184();
    func_0x000107c61170(lStack_70);
  }
  if (param_9 == 0) {
    ppuStack_180 = (undefined **)0x0;
  }
  else {
    puStack_b8 = puVar6;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_10af7b0ac;
    puStack_a0 = &UNK_110c72a10;
    func_0x000107c61174(param_9);
    lStack_98 = param_9;
    ppuStack_180 = &puStack_b8;
    func_0x000107c61184();
    func_0x000107c61170(lStack_98);
  }
  puVar2 = PTR_PTR_1126ded28;
  func_0x000107c610f4();
  func_0x000107c454ac();
  puVar4 = puVar2;
  func_0x000107c4ce8c();
  func_0x000107c61180();
  func_0x000107c57df4();
  func_0x000107c61170(puVar4);
  puVar4 = puVar2;
  func_0x000107c4ce8c(puVar2);
  func_0x000107c61180();
  func_0x000107c57dd8();
  func_0x000107c61170(puVar4);
  lVar3 = param_1;
  func_0x000107c49920();
  if ((int)lVar3 == 0) {
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x000107c3e804(puVar4,param_2,&PTR____CFConstantStringClassReference_110f3dfd8);
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c5cb8c();
    func_0x000107c61180();
    lVar5 = param_1;
    func_0x000107c5d984(param_1);
    func_0x000107c61180();
    if (lVar3 == 0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
    }
    else {
      func_0x000107c4413c(&uStack_120,lVar3,param_2,puVar2,lVar5);
    }
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c427dc(puVar4);
    if ((char)uStack_c8 == '\x01') {
      puVar6 = puVar2;
      func_0x000107c4ce8c(puVar2);
      func_0x000107c61180();
      func_0x000107c55588();
      func_0x000107c61170(puVar6);
      puVar6 = puVar2;
      func_0x000107c4ce8c(puVar2);
      func_0x000107c61180();
      func_0x000107c54ec0();
      func_0x000107c61170(puVar6);
      func_0x000107c3ac80(param_1,param_2,puVar2,&uStack_120);
    }
    else {
      func_0x000107c5587c(puVar2,param_2,0);
      puVar7 = puVar2;
      func_0x000107c5c3b8();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar7 != (undefined *)0x0) {
        puStack_148 = puVar6;
        uStack_140 = 0xc2000000;
        puStack_138 = &UNK_10af7b0bc;
        puStack_130 = &UNK_110c9af80;
        func_0x000107c61174(param_8);
        lStack_128 = param_8;
        func_0x000107c59aac(puVar2,param_2,&puStack_148);
        func_0x000107c61170(lStack_128);
      }
      puVar7 = puVar2;
      func_0x000107c42d6c();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar7 != (undefined *)0x0) {
        puStack_170 = puVar6;
        uStack_168 = 0xc2000000;
        puStack_160 = &UNK_10af7b0cc;
        puStack_158 = &UNK_110c72a10;
        func_0x000107c61174(param_9);
        lStack_150 = param_9;
        func_0x000107c54870(puVar2,param_2,&puStack_170);
        func_0x000107c61170(lStack_150);
      }
      func_0x000107c3c8a8(param_1,param_2,puVar2);
    }
    if ((char)uStack_c8 == '\x01') {
      FUN_100361bc4(&uStack_120);
    }
  }
  else {
    func_0x000107c4be84(*(undefined8 *)(param_1 + 8));
    puVar4 = PTR_PTR_1126b65d0;
    func_0x000107c3b2dc(PTR_PTR_1126b65d0,param_2,6,&PTR____CFConstantStringClassReference_110f3dfb8
                        ,0);
    func_0x000107c61180();
    func_0x000107c3ac7c(param_1,param_2,puVar2,puVar4);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuStack_180);
  func_0x000107c61170(ppuStack_178);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004948c0; end: 1004948e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004948c0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11274aec4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004948e4; end: 100495dbf; -[SCConversationServicesEntryPoint _chatConversationManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004948e4(long param_1)

{
  long lVar1;
  long lVar2;
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
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  long lVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  long lVar58;
  undefined *puVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  undefined8 uVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  undefined *puStack_340;
  undefined *puStack_338;
  long lStack_2e8;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar66 = param_1;
  FUN_1004948c0();
  func_0x000107c61180();
  lVar1 = lVar66;
  func_0x000107c45070();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_1004948c0();
  func_0x000107c61180();
  lVar2 = lVar66;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274ae9c;
    func_0x000107c61148();
  }
  lVar3 = lVar66;
  func_0x000107c40688();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495dd0();
  func_0x000107c61180();
  lVar4 = lVar66;
  func_0x000107c412dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495dfc();
  func_0x000107c61180();
  lVar5 = lVar66;
  func_0x000107c43ac0();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aea0;
    func_0x000107c61148();
  }
  lVar6 = lVar66;
  func_0x000107c3e188();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495dfc();
  func_0x000107c61180();
  lVar7 = lVar66;
  func_0x000107c443dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495e28();
  func_0x000107c61180();
  lVar8 = lVar66;
  func_0x000107c44568();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495e28();
  func_0x000107c61180();
  lVar9 = lVar66;
  func_0x000107c4456c();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495e28();
  func_0x000107c61180();
  lVar10 = lVar66;
  func_0x000107c44570();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495e28();
  func_0x000107c61180();
  lVar11 = lVar66;
  func_0x000107c44574();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495e64();
  func_0x000107c61180();
  lVar12 = lVar66;
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aec8;
    func_0x000107c61148();
  }
  lVar13 = lVar66;
  func_0x000107c4b748();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495dd0();
  func_0x000107c61180();
  lVar14 = lVar66;
  func_0x000107c4d460();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495dd0();
  func_0x000107c61180();
  lVar15 = lVar66;
  func_0x000107c4d48c();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495dd0();
  func_0x000107c61180();
  lVar16 = lVar66;
  func_0x000107c40668();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495dd0();
  func_0x000107c61180();
  lVar17 = lVar66;
  func_0x000107c406f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aec0;
    func_0x000107c61148();
  }
  lVar18 = lVar66;
  func_0x000107c4d498();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495ea0();
  func_0x000107c61180();
  lVar19 = lVar66;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495ea0();
  func_0x000107c61180();
  lVar20 = lVar66;
  func_0x000107c5b4b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495ea0();
  func_0x000107c61180();
  lVar21 = lVar66;
  func_0x000107c5b4bc();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495ea0();
  func_0x000107c61180();
  lVar22 = lVar66;
  func_0x000107c5b484();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aed8;
    func_0x000107c61148();
  }
  lVar23 = lVar66;
  func_0x000107c5cb84();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aedc;
    func_0x000107c61148();
  }
  lVar24 = lVar66;
  func_0x000107c5bd34();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aeb8;
    func_0x000107c61148();
  }
  lVar25 = lVar66;
  func_0x000107c436a8();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aeb4;
    func_0x000107c61148();
  }
  lVar26 = lVar66;
  func_0x000107c5d9b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495e64();
  func_0x000107c61180();
  lVar27 = lVar66;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274ae6c;
    func_0x000107c61148();
  }
  lVar28 = lVar66;
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lStack_2e8 = 0;
    lVar66 = 0;
  }
  else {
    lStack_2e8 = param_1 + _DAT_11274aee0;
    func_0x000107c61148();
    lVar66 = param_1 + _DAT_11274aea4;
    func_0x000107c61148();
  }
  lVar29 = lVar66;
  func_0x000107c3f81c();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495ea0();
  func_0x000107c61180();
  lVar30 = lVar66;
  func_0x000107c439d8();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aef4;
    func_0x000107c61148();
  }
  lVar31 = lVar66;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aef8;
    func_0x000107c61148();
  }
  lVar32 = lVar66;
  func_0x000107c4ad14();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aefc;
    func_0x000107c61148();
  }
  lVar33 = lVar66;
  func_0x000107c3f8f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495dd0();
  func_0x000107c61180();
  lVar34 = lVar66;
  func_0x000107c40664();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  lVar66 = param_1;
  FUN_100495ea0();
  func_0x000107c61180();
  lVar35 = lVar66;
  func_0x000107c5b478();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aed0;
    func_0x000107c61148();
  }
  lVar36 = lVar66;
  func_0x000107c3f86c();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  func_0x000107c61144(auStack_80,param_1);
  puVar37 = PTR_PTR_1126ae720;
  puVar43 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1065a2e34;
  puStack_90 = &UNK_11084d4a8;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar38 = PTR_PTR_1126ae720;
  puStack_d0 = puVar43;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_1065a2edc;
  puStack_b8 = &UNK_110929880;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar39 = PTR_PTR_1126ae720;
  puStack_f8 = puVar43;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_1065a2ff8;
  puStack_e0 = &UNK_11084d4a8;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar40 = PTR_PTR_1126ae720;
  puStack_120 = puVar43;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_1065a30a0;
  puStack_108 = &UNK_11084d4a8;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar41 = PTR_PTR_1126ae720;
  puStack_158 = puVar43;
  uStack_150 = 0xc2000000;
  puStack_148 = &UNK_1065a3148;
  puStack_140 = &UNK_11092d2f8;
  func_0x000107c6111c(auStack_128,auStack_80);
  lStack_138 = lVar32;
  lStack_130 = lVar6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11274aeec;
    func_0x000107c61148();
  }
  lVar42 = lVar66;
  func_0x000107c4eaf8();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  puVar43 = PTR_PTR_1126cbb08;
  func_0x000107c61160();
  puVar44 = PTR_PTR_1126cbb10;
  func_0x000107c610f4();
  func_0x000107c47698();
  puVar45 = PTR_PTR_1126cbb18;
  func_0x000107c610f4();
  lVar63 = (long)_DAT_11274ae60;
  lVar66 = param_1 + lVar63;
  func_0x000107c61148(lVar66);
  lVar46 = lVar66;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c476a8();
  uVar64 = *(undefined8 *)(param_1 + _DAT_11274ae84);
  *(undefined **)(param_1 + _DAT_11274ae84) = puVar45;
  func_0x000107c61170(uVar64);
  func_0x000107c61170(lVar46);
  func_0x000107c61170(lVar66);
  puVar45 = PTR_PTR_1126cbb20;
  func_0x000107c610f4();
  lVar47 = lVar28;
  func_0x000107c5d984(lVar28);
  func_0x000107c61180();
  lVar66 = param_1 + _DAT_11274aebc;
  func_0x000107c61148(lVar66);
  lVar48 = lVar66;
  func_0x000107c4f9bc();
  func_0x000107c61180();
  lVar46 = param_1 + _DAT_11274ae80;
  func_0x000107c61148();
  lVar49 = lVar46;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c4921c();
  lVar67 = (long)_DAT_11274ae88;
  uVar64 = *(undefined8 *)(param_1 + lVar67);
  *(undefined **)(param_1 + lVar67) = puVar45;
  func_0x000107c61170(uVar64);
  func_0x000107c61170(lVar49);
  func_0x000107c61170(lVar46);
  func_0x000107c61170(lVar48);
  func_0x000107c61170(lVar66);
  func_0x000107c61170(lVar47);
  func_0x000107c53fcc(*(undefined8 *)(param_1 + lVar67));
  puVar45 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  puVar50 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  puVar51 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  puVar52 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  puVar53 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  func_0x000107c61174(lVar29);
  lVar66 = param_1 + lVar63;
  func_0x000107c61148();
  lVar46 = lVar66;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar47 = lVar46;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar48 = lVar47;
  func_0x000107c4a07c();
  func_0x000107c61170(lVar47);
  func_0x000107c61170(lVar46);
  func_0x000107c61170(lVar66);
  if ((int)lVar48 == 0) {
    puVar55 = PTR_PTR_1126cbb30;
    func_0x000107c610f4();
    lVar46 = lVar28;
    func_0x000107c5d984(lVar28);
    func_0x000107c61180();
    lVar66 = param_1 + lVar63;
    func_0x000107c61148();
    lVar47 = lVar66;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    func_0x000107c47974();
    func_0x000107c61170(lVar47);
    func_0x000107c61170(lVar66);
    func_0x000107c61170(lVar46);
    lVar66 = lVar16;
    func_0x000107c5c734(lVar16);
    func_0x000107c61180();
    func_0x000107c3d740();
    puStack_340 = (undefined *)0x0;
    puStack_338 = puVar55;
  }
  else {
    puVar55 = PTR_PTR_1126cbb28;
    func_0x000107c610f4();
    lVar66 = lVar28;
    func_0x000107c5d984(lVar28);
    func_0x000107c61180();
    lVar46 = param_1 + _DAT_11274af00;
    func_0x000107c61148(lVar46);
    lVar48 = lVar46;
    func_0x000107c4e604();
    func_0x000107c61180();
    puVar54 = PTR_PTR_1126b4990;
    func_0x000107c61160(PTR_PTR_1126b4990);
    lVar47 = param_1 + lVar63;
    func_0x000107c61148();
    lVar49 = lVar47;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    func_0x000107c49220();
    func_0x000107c61170(lVar49);
    func_0x000107c61170(lVar47);
    func_0x000107c61170(puVar54);
    func_0x000107c61170(lVar48);
    func_0x000107c61170(lVar46);
    puStack_338 = (undefined *)0x0;
    puStack_340 = puVar55;
  }
  func_0x000107c61170(lVar66);
  func_0x000107c61174(puVar55);
  puVar56 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar57 = PTR_PTR_1126cbb40;
  func_0x000107c610f4();
  lVar48 = lVar28;
  func_0x000107c5d984(lVar28);
  func_0x000107c61180();
  lVar66 = param_1 + lVar63;
  func_0x000107c61148();
  lVar49 = lVar66;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar65 = (long)_DAT_11274ae7c;
  lVar46 = param_1 + lVar65;
  func_0x000107c61148();
  lVar67 = lVar46;
  func_0x000107c51714();
  func_0x000107c61180();
  lVar47 = param_1 + _DAT_11274ae8c;
  func_0x000107c61148();
  lVar58 = lVar47;
  func_0x000107c3d3c8();
  func_0x000107c61180();
  func_0x000107c47984();
  func_0x000107c61170(lVar58);
  func_0x000107c61170(lVar47);
  func_0x000107c61170(lVar67);
  func_0x000107c61170(lVar46);
  func_0x000107c61170(lVar49);
  func_0x000107c61170(lVar66);
  func_0x000107c61170(lVar48);
  func_0x000107c52168(puVar44);
  puVar54 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_160,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar66 = param_1 + _DAT_11274af00;
  func_0x000107c61148();
  lVar48 = lVar66;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar66);
  puVar59 = PTR_PTR_1126cbb48;
  func_0x000107c610f4();
  lVar49 = lVar17;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar67 = lVar49;
  func_0x000107c51dc8();
  func_0x000107c61180();
  lVar66 = param_1 + _DAT_11274ae90;
  func_0x000107c61148();
  lVar58 = lVar66;
  func_0x000107c5da50();
  func_0x000107c61180();
  lVar63 = param_1 + lVar63;
  func_0x000107c61148();
  lVar60 = lVar63;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar46 = param_1 + _DAT_11274ae94;
  func_0x000107c61148();
  lVar61 = lVar46;
  func_0x000107c439f4();
  func_0x000107c61180();
  lVar47 = param_1 + _DAT_11274ae98;
  func_0x000107c61148();
  lVar62 = lVar47;
  func_0x000107c3ddd8();
  func_0x000107c61180();
  param_1 = param_1 + lVar65;
  func_0x000107c61148();
  lVar65 = param_1;
  func_0x000107c51714();
  func_0x000107c61180();
  func_0x000107c493bc(puVar59);
  func_0x000107c61170(lVar65);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar62);
  func_0x000107c61170(lVar47);
  func_0x000107c61170(lVar61);
  func_0x000107c61170(lVar46);
  func_0x000107c61170(lVar60);
  func_0x000107c61170(lVar63);
  func_0x000107c61170(lVar58);
  func_0x000107c61170(lVar66);
  func_0x000107c61170(lVar67);
  func_0x000107c61170(lVar49);
  func_0x000107c61170(lVar48);
  func_0x000107c61170(puVar54);
  func_0x000107c61120(auStack_160);
  func_0x000107c61170(puVar57);
  func_0x000107c61170(puVar56);
  func_0x000107c61170(puVar55);
  func_0x000107c61170(puStack_340);
  func_0x000107c61170(puStack_338);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(puVar53);
  func_0x000107c61170(puVar52);
  func_0x000107c61170(puVar51);
  func_0x000107c61170(puVar50);
  func_0x000107c61170(puVar45);
  func_0x000107c61170(puVar44);
  func_0x000107c61170(puVar43);
  func_0x000107c61170(lVar42);
  func_0x000107c61170(puVar41);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(puVar40);
  func_0x000107c61120(auStack_100);
  func_0x000107c61170(puVar39);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar38);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar37);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lStack_2e8);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar59);
  return;
}



/* Entry: 100495dc0; end: 100495dc7; -[SCBitmojiFetchServices imageFetcher] */

undefined8 FUN_100495dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100495dc8; end: 100495dcf; -[SCConversationIdServices conversationIdResolver] */

undefined8 FUN_100495dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100495dd0; end: 100495df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100495dd0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11274ae70);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100495df4; end: 100495dfb; -[SCNativeMessagingServices dataWiped] */

undefined8 FUN_100495df4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100495dfc; end: 100495e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100495dfc(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11274aecc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100495e20; end: 100495e27; -[SCArroyoChatLoggingServices arroyoChatLogger] */

undefined8 FUN_100495e20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100495e28; end: 100495e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100495e28(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11274ae74);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100495e4c; end: 100495e53; -[SCGroupServices groupsDataCreator] */

undefined8 FUN_100495e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100495e54; end: 100495e5b; -[SCGroupServices groupsDataMutator] */

undefined8 FUN_100495e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100495e5c; end: 100495e63; -[SCGroupServices groupsDataTracker] */

undefined8 FUN_100495e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100495e64; end: 100495e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100495e64(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11274aeb0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100495e88; end: 100495e8f; -[SCNativeMessagingServices nativeFeedManager] */

undefined8 FUN_100495e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100495e90; end: 100495e9f; -[_TtC26NativeConversationServices26NativeConversationServices nativeSnapManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100495e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071110));
  return;
}



/* Entry: 100495ea0; end: 100495ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100495ea0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11274ae78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100495ec4; end: 100495ecb; -[SCChatStatusSendingServices statusSender] */

undefined8 FUN_100495ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100495ecc; end: 100495f13; -[_TtC29SCContextPostSnapDataServices29SCContextPostSnapDataServices chatActionResetDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100495ecc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113078520;
  func_0x000107c61428(param_1 + _DAT_113078520,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100495f14; end: 100495f1b; -[SCSnapchatterServices friendStatusManagerCreator] */

undefined8 FUN_100495f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 100495f1c; end: 100495f23; -[SCChatLegacyContentDeliveryServices legacyChatContentDelivery] */

undefined8 FUN_100495f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100495f24; end: 100495f2b; -[SCChatReactionServices chatReactionMetadataProvider] */

undefined8 FUN_100495f24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100495f2c; end: 100495f33; -[SCSnapchatterServices snapchatterObservableRepository] */

undefined8 FUN_100495f2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100495f34; end: 100495f3b; -[SCChatDisplayReadyLoggingServices chatDisplayReadyLogger] */

undefined8 FUN_100495f34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100495f3c; end: 100495f43; -[SCPolaroidViewTransitionServices polaroidViewTransitionManager] */

undefined8 FUN_100495f3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100495f44; end: 100495fa3; -[SCChatMediaReferenceManager init] */

undefined8 FUN_100495f44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
  func_0x000107c47de8(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100495fa4; end: 100496063; -[SCChatMediaReferenceManager initWithPerformer:] */

undefined1 * FUN_100495fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f3be0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100496064; end: 1004960cf; -[SCChatMediaStateManager initWithMediaReferenceManager:] */

undefined1 * FUN_100496064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f3bf0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004960d0; end: 100496237; -[SCChatMediaRequestManager initWithMediaRequestAPI:mediaStateManager:chatLogger:loadMessageLogger:chatGraphene:messagingExperimentService:] */

undefined8
FUN_1004960d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1068f25f8;
  puStack_70 = &UNK_110949190;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_88);
  func_0x000107c61180();
  func_0x000107c476a4(param_1,param_2,param_3,param_5,param_6,param_7,puVar1,param_8);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 100496238; end: 100496497; -[SCChatMediaRequestManager initWithMediaRequestAPI:chatLogger:loadMessageLogger:chatGraphene:mediaContentDownloadHandler:messagingExperimentService:] */

undefined8 *
FUN_100496238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126f3be8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = puVar1[5];
    puVar1[5] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(param_3);
    uVar4 = puVar1[4];
    puVar1[4] = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = puVar1[6];
    puVar1[6] = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_5);
    uVar4 = puVar1[7];
    puVar1[7] = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = puVar1[9];
    puVar1[9] = param_6;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_7);
    uVar4 = puVar1[8];
    puVar1[8] = param_7;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_8);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = puVar1[10];
    puVar1[10] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_8);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100496498; end: 1004966c3; -[SCChatMediaExtensionCacheHandler initWithUserId:nativeSessionManager:chatGraphene:loadMessageLogger:contentDelivery:prefetchedMediaReader:circumstanceEngine:] */

undefined8 *
FUN_100496498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126f1d88;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_9);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_9);
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



/* Entry: 1004966c4; end: 1004966cf; -[SCChatMediaExtensionCacheHandler setDelegate:] */

void FUN_1004966c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 1004966d0; end: 100496847; -[SCChatArroyoConversationDataCoordinator initWithNativeSessionManager:nativeFeedManager:userId:chatDisplayReadyLogger:chatGraphene:pageLoadMetricsEmitter:messagingExperimentService:] */

undefined8
FUN_1004966d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3847f7);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x19,0,9);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126b4990;
  func_0x000107c61160(PTR_PTR_1126b4990);
  func_0x000107c47978(param_1,param_2,param_3,param_4,param_5,puVar1,puVar2,param_6,param_7,param_8,
                      param_9);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100496848; end: 100496867; -[SCDataCoordinatorListenerAnnouncer .cxx_construct] */

void FUN_100496848(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 100496868; end: 100496a73; -[SCChatArroyoConversationDataCoordinator initWithNativeSessionManager:nativeFeedManager:userId:performer:announcer:chatDisplayReadyLogger:chatGraphene:pageLoadMetricsEmitter:messagingExperimentService:] */

undefined1 *
FUN_100496868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126f1dd0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = param_11;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100496a74; end: 100496a83; -[_TtC20SCAdPrefetchServices20SCAdPrefetchServices adPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100496a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2370));
  return;
}



/* Entry: 100496a84; end: 100497033; -[SCArroyoMessageActionHandler initWithNativeSessionManager:nativeSnapManager:userId:statusMessageSender:mediaStateManager:mediaRequestManager:conversationDataCoordinator:arroyoChatLogger:chatResetDelegate:mediaExtensionCacheHandler:snapchatterDataFetcher:lastSnapConversationIdSubject:finishedViewingSnapConversationIdSubject:lastChatViewSubject:snapStateLifecycleEventsPublisher:polaroidViewTransitionResolver:conversationDataFetcher:messagingExperimentService:contentDelivery:snapCountdownManager:sponsoredSnapAdResponseParser:adPrefetcher:graphene:messageSaveActionEventsPublisher:] */

undefined8 *
FUN_100496a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  puStack_70 = PTR_PTR_1126f1d60;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[3];
    puVar1[3] = param_17;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x000107c3ac58();
    func_0x000107c61180();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c3d650(puVar1[0xb]);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_26;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b2e38;
    func_0x000107c61160();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_20);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_20);
  }
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100497034; end: 10049703b; -[SCChatArroyoConversationDataCoordinator addDataUpdateListener:] */

void FUN_100497034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10049703c; end: 1004972e7; -[SCDataCoordinatorListenerAnnouncer addListener:] */

undefined8 FUN_10049703c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  plVar3 = (long *)0x30;
  func_0x000107c60e20();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_DAT_110ab7e40;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    func_0x000107c61144(auStack_90,param_3);
    FUN_1004972e8(plVar10,auStack_90);
    func_0x000107c61120(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_100497428(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_1004971f0:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x000107c60d68(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        func_0x000107c61148();
        func_0x000107c61170();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_100497210;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      func_0x000107c61148();
      func_0x000107c61170();
      if (lVar5 != 0) {
        FUN_1004972e8(plVar10,lVar7);
      }
    }
    func_0x000107c61144(auStack_78,param_3);
    FUN_1004972e8(plVar10,auStack_78);
    func_0x000107c61120(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_100497428(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_1004971f0;
    }
  }
  uVar9 = 1;
LAB_100497210:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      func_0x000107c60d68(plVar3);
    }
  }
  func_0x000107c60d8c(param_1 + 8);
  func_0x000107c61170(param_3);
  return uVar9;
}



/* Entry: 1004972e8; end: 100497427;  */

void FUN_1004972e8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    func_0x000107c6111c(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x000107c2a73c();
LAB_100497424:
      func_0x000104bd35f4();
      plVar5 = param_1;
      func_0x000107c60c40();
      func_0x000107c60dc4();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_100497424;
      lVar4 = uVar7 << 3;
      func_0x000107c60e20();
    }
    lVar9 = lVar4 + lVar9;
    func_0x000107c6111c(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        func_0x000107c6114c(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        func_0x000107c61120(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 100497428; end: 10049746f;  */

void FUN_100497428(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 100497470; end: 10049747b; -[SCChatMediaStateManager setActionHandler:] */

void FUN_100497470(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10049747c; end: 100497483; -[SCArroyoConversationDataUpdateAnnouncer sendCompletedEvent] */

undefined8 FUN_10049747c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100497484; end: 10049748b; -[SCUserSegmentsServices userSegmentsProvider] */

undefined8 FUN_100497484(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10049748c; end: 10049749b; -[_TtC28SCFriendStorySettingServices28SCFriendStorySettingServices friendStorySettingMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049748c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff1c58));
  return;
}



/* Entry: 10049749c; end: 1004980af; -[SCChatConversationManager initWithUserSession:userInfoServices:lazyDocObjectContext:chatRequestManager:conversationIdResolver:groupsDataCreator:groupsDataFetcher:groupsDataMutator:groupsDataTracker:userInfoProvider:snapchattersDataFetcher:snapchattersDataMutator:snapchattersDataTracker:snapchattersObservableRepository:friendStatusManagerCreator:snapchattersPublicInfoFetcher:storiesDataCoordinator:nativeSessionManager:nativeFeedManager:nativeSnapManager:bitmojiImageFetcher:userPreferences:loadMessageLogger:friendsFeedReadyLogger:ghostToFeedLogger:arroyoChatLogger:snapTokenProvider:statusMessageSender:contextPostSnapActionsDataProvider:arroyoGraphene:chatGraphene:pageLoadMetricsEmitter:friendsFeedGraphene:conversationDataUpdateAnnouncer:dataWiped:snapStateLifecycleEventsPublisher:conversationLifecycleEventPublisher:sendAttemptEventsPublisher:polaroidViewTransitionManager:reactionMetadataProvider:valdiRuntimeProvider:arroyoActionHandler:lastSnapConversationIdSubject:finishedViewingSnapConversationIdSubject:sentSnapConversationIdsSubject:sentMessageConversationIdsSubject:sendCompletedEventObservable:lastChatViewSubject:mediaExtensionCacheHandler:mediaReferenceManager:mediaStateManager:snapCountDownManager:arroyoDataCoordinator:windowingDataCoordinator:userSegmentsProvider:bitmojiAvatarProvider:chatDisplayReadyLogger:messagingExperimentService:friendStorySettingMutator:appInsightsMetadataStorage:sponsoredSnapAdResponseParser:performerProvider:] */

undefined8 *
FUN_10049749c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_43);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_47);
  func_0x000107c61174(param_48);
  func_0x000107c61174(param_49);
  func_0x000107c61174(param_50);
  func_0x000107c61174(param_51);
  func_0x000107c61174();
  func_0x000107c61174(param_53);
  func_0x000107c61174(param_54);
  func_0x000107c61174(param_55);
  func_0x000107c61174(param_56);
  func_0x000107c61174(param_57);
  func_0x000107c61174(param_58);
  func_0x000107c61174(param_59);
  func_0x000107c61174(param_60);
  func_0x000107c61174(param_61);
  func_0x000107c61174(param_62);
  func_0x000107c61174(param_63);
  func_0x000107c61174(param_64);
  puStack_80 = PTR_PTR_1126f1d80;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar4 = puVar1[0x22];
    puVar1[0x22] = puVar2;
    func_0x000107c61170(uVar4);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_10659dadc;
    puStack_a0 = &UNK_11092cea8;
    func_0x000107c61174(param_24);
    uStack_98 = param_24;
    func_0x000107c61174(param_5);
    uVar4 = param_37;
    uStack_90 = param_5;
    func_0x000107c5c320(param_37);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    puVar1[0x13] = 0xffffffffffffffff;
    puVar2 = PTR_PTR_1126b4990;
    func_0x000107c61160();
    uVar4 = puVar1[0x17];
    puVar1[0x17] = puVar2;
    func_0x000107c61170(uVar4);
    uVar4 = param_3;
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar5 = puVar1[1];
    puVar1[1] = uVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_12);
    uVar4 = puVar1[0x12];
    puVar1[0x12] = param_12;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_24);
    uVar4 = puVar1[2];
    puVar1[2] = param_24;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = puVar1[10];
    puVar1[10] = param_6;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_7);
    uVar4 = puVar1[3];
    puVar1[3] = param_7;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_13);
    uVar4 = puVar1[0x11];
    puVar1[0x11] = param_13;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_8);
    uVar4 = puVar1[0xe];
    puVar1[0xe] = param_8;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_9);
    uVar4 = puVar1[0xf];
    puVar1[0xf] = param_9;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_10);
    uVar4 = puVar1[0x10];
    puVar1[0x10] = param_10;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_32);
    uVar4 = puVar1[0x1c];
    puVar1[0x1c] = param_32;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_33);
    uVar4 = puVar1[0x1a];
    puVar1[0x1a] = param_33;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_34);
    uVar4 = puVar1[0x1b];
    puVar1[0x1b] = param_34;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_20);
    uVar4 = puVar1[0x14];
    puVar1[0x14] = param_20;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_52);
    uVar4 = puVar1[8];
    puVar1[8] = param_52;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_53);
    uVar4 = puVar1[6];
    puVar1[6] = param_53;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_45);
    uVar4 = puVar1[0x1d];
    puVar1[0x1d] = param_45;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_46);
    uVar4 = puVar1[0x1e];
    puVar1[0x1e] = param_46;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_47);
    uVar4 = puVar1[0x1f];
    puVar1[0x1f] = param_47;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_48);
    uVar4 = puVar1[0x20];
    puVar1[0x20] = param_48;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_c0,puVar1);
    func_0x000107c6111c(auStack_c8,auStack_c0);
    uVar4 = param_49;
    func_0x000107c5c320(param_49);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_50);
    uVar4 = puVar1[0x21];
    puVar1[0x21] = param_50;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_54);
    uVar4 = puVar1[0x15];
    puVar1[0x15] = param_54;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_57);
    uVar4 = puVar1[0x23];
    puVar1[0x23] = param_57;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_64);
    uVar4 = puVar1[0x24];
    puVar1[0x24] = param_64;
    func_0x000107c61170(uVar4);
    uVar4 = param_15;
    func_0x000107c5c734(param_15);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126cb380;
    func_0x000107c610f4();
    func_0x000107c47d18();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_19);
    uVar4 = puVar1[0xd];
    puVar1[0xd] = param_19;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126cba98;
    func_0x000107c610f4();
    func_0x000107c4769c();
    uVar4 = puVar1[0x19];
    puVar1[0x19] = puVar2;
    func_0x000107c61170(uVar4);
    uVar4 = param_36;
    func_0x000107c5c734(param_36);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_44);
    uVar4 = puVar1[7];
    puVar1[7] = param_44;
    func_0x000107c61170(uVar4);
    uVar4 = puVar1[1];
    FUN_1004982a4(uVar4,param_20,puVar1[0xd],puVar1[0xf],param_11,puVar1[0xc],puVar1[0x11],param_15,
                  param_18,puVar1[0x12],param_16,param_55,param_31,param_7,param_33,param_34,
                  param_39,param_17,param_42,param_58,param_60,param_59,param_61,param_62,param_63,
                  param_64,param_56);
    func_0x000107c61180();
    uVar5 = puVar1[4];
    puVar1[4] = uVar4;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_20);
    func_0x000107c61174(param_60);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126cbaa8;
    func_0x000107c610f4();
    func_0x000107c48008();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_5);
    uVar4 = puVar1[5];
    puVar1[5] = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_41);
    uVar4 = puVar1[0x16];
    puVar1[0x16] = param_41;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_60);
    func_0x000107c61170(param_20);
    func_0x000107c61120(auStack_c8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(uStack_98);
  }
  func_0x000107c61170(param_64);
  func_0x000107c61170(param_63);
  func_0x000107c61170(param_62);
  func_0x000107c61170(param_61);
  func_0x000107c61170(param_60);
  func_0x000107c61170(param_59);
  func_0x000107c61170(param_58);
  func_0x000107c61170(param_57);
  func_0x000107c61170(param_56);
  func_0x000107c61170(param_55);
  func_0x000107c61170(param_54);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1004980b0; end: 1004981a7; -[SCChatAnimationDataCoordinator initWithPageLoadMetricsEmitter:] */

undefined1 * FUN_1004980b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f8618;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126b4990;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004981a8; end: 1004982a3; -[SCArroyoMediaReferenceTracker initWithMediaReferenceManager:mediaExtensionCacheHandler:userId:polaroidViewTransitionResolver:] */

undefined1 *
FUN_1004981a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f1d58;
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
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004982a4; end: 1004986c7;  */

void FUN_1004982a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined4 param_26,undefined4 param_27,undefined8 param_28)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61174();
  func_0x000107c61174(param_19);
  puVar1 = PTR_PTR_1126cba70;
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  func_0x000107c46c28();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  puVar2 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_10659da90;
  puStack_80 = &UNK_11092ce48;
  uStack_78 = param_19;
  uStack_70 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_19);
  func_0x000107c3e4fc(puVar2,param_2,&puStack_98);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126cba80;
  func_0x000107c610f4();
  uVar4 = param_18;
  func_0x000107c5c734(param_18);
  func_0x000107c61180();
  func_0x000107c61170(param_18);
  uVar5 = uVar4;
  func_0x000107c40a1c(uVar4);
  func_0x000107c61180();
  func_0x000107c49244(puVar3,param_2,param_1,param_7,param_9,uVar5,param_11,param_8,param_10,
                      param_16,param_23);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  puVar6 = PTR_PTR_1126cba88;
  func_0x000107c610f4();
  func_0x000107c48a44();
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_19);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1004986c8; end: 100498833; -[SCChatGroupDataCoordinator initWithGroupsDataFetcher:groupsDataTracker:pageLoadMetricsEmitter:] */

undefined1 *
FUN_1004986c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126f1de0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4990;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100498834; end: 100498863;  */

void FUN_100498834(void)

{
  func_0x000107c610f4(PTR_PTR_1126bb660);
  func_0x000107c48850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100498864; end: 1004988df; -[SCFriendStatusManagerCreatorDefault initWithSnapchattersDataFetcher:snapchattersDataTracker:] */

long FUN_100498864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1004988e0; end: 10049890f; -[SCFriendStatusManagerCreatorDefault createFriendStatusManager] */

void FUN_1004988e0(void)

{
  func_0x000107c610f4(PTR_PTR_1126db070);
  func_0x000107c48850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100498910; end: 100498a5f; -[SCSnapchatterFriendStatusManagerDefault initWithSnapchattersDataFetcher:snapchattersDataTracker:] */

undefined1 *
FUN_100498910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126fdbf8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b45a0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100498a60; end: 100498b13; -[SCUpdateListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100498a60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_1130839a8;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_1130839b0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_113083998;
  uVar2 = 0x113083948;
  FUN_1000285a8(0x113083948,&UNK_10dd146d0);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_100498b14();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100498b14; end: 100498b33;  */

void FUN_100498b14(void)

{
  func_0x000107c61168(&PTR_PTR_1129cbb88);
  return;
}



/* Entry: 100498b34; end: 100498b3f; -[SCChatSnapchattersDataCoordinator initWithUserId:snapchattersDataFetcher:snapchattersPublicInfoFetcher:snapchatterFriendStatusManager:snapchattersObservableRepository:snapchattersDataTracker:snapchatterUserInfoProvider:pageLoadMetricsEmitter:friendStorySettingMutator:] */

void FUN_100498b34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithUserId_snapchattersDataF_1125f48d0);
  return;
}



/* Entry: 100498b40; end: 100498e63; -[SCChatSnapchattersDataCoordinator initWithUserId:snapchattersDataFetcher:snapchattersPublicInfoFetcher:snapchatterFriendStatusManager:snapchattersObservableRepository:snapchattersDataTracker:snapchatterUserInfoProvider:friendStorySettingMutator:pageLoadMetricsEmitter:] */

undefined8 *
FUN_100498b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126f1df0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4990;
    func_0x000107c61160();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(param_3);
    uVar4 = puVar1[3];
    puVar1[3] = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = puVar1[4];
    puVar1[4] = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_5);
    uVar4 = puVar1[6];
    puVar1[6] = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_9);
    uVar4 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_7);
    uVar4 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = puVar1[8];
    puVar1[8] = param_6;
    func_0x000107c61170(uVar4);
    func_0x000107c3d934(puVar1[8]);
    uVar4 = param_8;
    func_0x000107c5c734(param_8);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_10);
    uVar4 = puVar1[0x10];
    puVar1[0x10] = param_10;
    func_0x000107c61170(uVar4);
    uVar4 = param_10;
    func_0x000107c5c734(param_10);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar4 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_11);
    uVar4 = puVar1[0xf];
    puVar1[0xf] = param_11;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100498e64; end: 100498e6b; -[SCSnapchatterFriendStatusManagerDefault addUpdateListener:] */

void FUN_100498e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 100498e6c; end: 100498ebb; -[SCUpdateListenerAnnouncer addListener:] */

undefined8 FUN_100498e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_100498ebc(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 100498ebc; end: 100498fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100498ebc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 uStack_49;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = &UNK_110784078;
  func_0x000107c613fc(&UNK_110784078,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uVar2 = 0x113083948;
  FUN_1000285a8(0x113083948,&UNK_10dd146d0);
  uVar3 = uVar2;
  FUN_100499000();
  puVar4 = &UNK_100c5a284;
  func_0x000107c5f21c(&UNK_100c5a284,puVar1,uVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c5f1d8(&puStack_48);
  func_0x000107c61574(puVar4);
  puVar1 = &UNK_1107840a0;
  func_0x000107c613fc(&UNK_1107840a0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uVar2 = 0x112d518a8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  ppuStack_60 = &puStack_48;
  FUN_1000285a8(0x112d518a8,&UNK_10d918730);
  FUN_100087bd4(&uStack_49,FUN_100499140,auStack_80,uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c6142c(puStack_48);
  return 1;
}



/* Entry: 100499000; end: 10049904f;  */

void FUN_100499000(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130839a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113083948;
  FUN_10002969c(0x113083948,&UNK_10dd146d0);
  puVar2 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
  func_0x000107c61520(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,uVar1);
  puRam00000001130839a0 = puVar2;
  return;
}



/* Entry: 100499050; end: 10049913f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100499050(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_1130839b0;
  if (param_2 != 0) {
    uVar4 = *param_4;
    func_0x000107c61428(param_2 + _DAT_1130839b0,auStack_80,0x21,0);
    func_0x000107c61434(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    func_0x000107c61558(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    FUN_10049915c(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 100499140; end: 10049915b;  */

void FUN_100499140(void)

{
  long unaff_x20;
  
  FUN_100499050(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10049915c; end: 10049928b;  */

void FUN_10049915c(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1000a7158();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100499220);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_10049928c(lVar5);
    uVar2 = param_2;
    FUN_1000a7158();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSON_11034d8b8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004991ec);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000103b8e018();
    lVar5 = *unaff_x20;
    goto joined_r0x000100499234;
  }
  lVar5 = *unaff_x20;
joined_r0x000100499234:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10049928c);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 10049928c; end: 1004994ef;  */

void FUN_10049928c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112ff1cd0;
  FUN_1000285a8(0x112ff1cd0,&UNK_10dc5ca40);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_1004994bc:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1004994ec);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_1004994bc;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1004994f0);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 1004994f0; end: 1004994f3;  */

void FUN_1004994f0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004994f4; end: 100499517;  */

void FUN_1004994f4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100499518; end: 100499557;  */

void FUN_100499518(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b258();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100499558; end: 100499723; -[SCFriendStorySettingServiceProvider _createFriendStorySettingMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100499558(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_11272d7d4;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + _DAT_11272d7d8;
  func_0x000107c61148(lVar2);
  lVar4 = lVar2;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  param_1 = param_1 + _DAT_11272d7dc;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c5bdf0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar5 = PTR_PTR_1126c1278;
  func_0x000107c610f4(PTR_PTR_1126c1278);
  lVar6 = lVar3;
  func_0x000107c5c734(lVar3);
  func_0x000107c61180();
  func_0x000107c4540c(puVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100499724; end: 10049972b; -[SCStoriesNetworkingServices stmsNetworkRequester] */

undefined8 FUN_100499724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10049972c; end: 10049992f; -[SCFriendStorySettingMutator initDocObjectContext:friendStorySettingNetworkRequster:stmsNetworkRequester:performerProvider:] */

undefined1 *
FUN_10049972c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126eb510;
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
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126c1230;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_6;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    uVar2 = param_6;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    uVar2 = param_6;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126c1238;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100499930; end: 1004999e3; -[SCFriendStorySettingUpdatesListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100499930(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112ff1c98;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_112ff1ca0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_112ff1c88;
  uVar2 = 0x112ff1c50;
  FUN_1000285a8(0x112ff1c50,&UNK_10dc5c9a0);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  func_0x000100499a04();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1004999e4; end: 100499a23;  */

void FUN_1004999e4(void)

{
  func_0x000107c61168(&PTR_PTR_112938be0);
  return;
}



/* Entry: 100499a24; end: 100499a2f; -[SCSnapTokenMetricsInfo setRequestPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100499a24(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_11307e068);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 100499a30; end: 100499a3b; -[SCSnapTokenMetricsInfo setRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100499a30(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_11307e070);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 100499a3c; end: 100499a3f; -[SCSnapTokenStorage getMemoryCachedAccessTokenSyncForOp:userId:] */

void FUN_100499a3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadInMemoryAccessTokenForOp__112571018);
  return;
}



/* Entry: 100499a40; end: 100499adb; -[SCSnapTokenStorage _loadInMemoryAccessTokenForOp:] */

void FUN_100499a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_4);
  puVar1 = &UNK_10f6ee19a;
  FUN_1000ba800(&UNK_10f6ee19a);
  func_0x000107c3bd8c(param_1,param_2,param_3,param_4,1);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100499adc; end: 100499b3f; -[SCFriendStorySettingUpdateLogger init] */

undefined1 * FUN_100499adc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eb520;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c1268;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100499b40; end: 100499bb3; -[SCGrapheneFriendStorySettingMetric2 init] */

undefined1 * FUN_100499b40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eb528;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100499bb4; end: 100499bbb; -[SCFriendStorySettingMutator addListener:] */

void FUN_100499bb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 100499bbc; end: 100499c0b; -[SCFriendStorySettingUpdatesListenerAnnouncer addListener:] */

undefined8 FUN_100499bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_100499c0c(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 100499c0c; end: 100499d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100499c0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 uStack_49;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = &UNK_1106dcaa8;
  func_0x000107c613fc(&UNK_1106dcaa8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1106dcad0;
  func_0x000107c613fc(&UNK_1106dcad0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_103b8d994;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x112ff1c50;
  FUN_1000285a8(0x112ff1c50,&UNK_10dc5c9a0);
  uVar4 = uVar3;
  func_0x000100499d98();
  puVar1 = &UNK_103b8d99c;
  func_0x000107c5f21c(&UNK_103b8d99c,puVar2,uVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5f1d8(&puStack_48);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_1106dcaf8;
  func_0x000107c613fc(&UNK_1106dcaf8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uVar3 = 0x112d518a8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  ppuStack_60 = &puStack_48;
  FUN_1000285a8(0x112d518a8,&UNK_10d918730);
  FUN_100087bd4(&uStack_49,FUN_10049a118,auStack_80,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c6142c(puStack_48);
  return 1;
}



/* Entry: 100499d74; end: 100499de7;  */

void FUN_100499d74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100499de8; end: 100499f77; +[SCSnapTokenMetricsUtil generateAccessTokenRetrievalLatencyBlizzardEvent:] */

void FUN_100499de8(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c61174(param_4);
  puVar2 = PTR_PTR_1126decc8;
  lVar1 = param_4;
  func_0x000107c4414c(param_4);
  func_0x000107c5c1fc(puVar2,param_3,lVar1);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126decf8;
  func_0x000107c610fc(PTR_PTR_1126decf8);
  lVar1 = param_4;
  func_0x000107c49adc(param_4);
  func_0x000107c52f08(puVar3,param_3,lVar1);
  puVar4 = PTR_PTR_1126bd360;
  lVar1 = param_4;
  func_0x000107c3ceec(param_4);
  func_0x000107c5aae8(puVar4,param_3,lVar1);
  func_0x000107c61180();
  func_0x000107c58c58(puVar3,param_3,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c4245c(param_4);
  func_0x000107c54960(puVar3,param_3,(long)(param_1 * 1000.0));
  func_0x000107c54ec0(puVar3,param_3,puVar2);
  lVar1 = param_4;
  func_0x000107c4a62c(param_4);
  func_0x000107c5a0c0(puVar3,param_3,lVar1);
  lVar1 = param_4;
  func_0x000107c503dc();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x000107c503dc(param_4);
    func_0x000107c61180();
    func_0x000107c57df4(puVar3,param_3,lVar1);
    func_0x000107c61170(lVar1);
  }
  lVar1 = param_4;
  func_0x000107c50374();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x000107c50374(param_4);
    func_0x000107c61180();
    func_0x000107c57dd8(puVar3,param_3,lVar1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100499f78; end: 100499fbb; -[SCSnapTokenMetricsInfo isCacheHit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100499f78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307e030;
  func_0x000107c61428(param_1 + _DAT_11307e030,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 100499fbc; end: 10049a00f; -[SCASnapAccessTokenFetch setCacheHit:] */

void FUN_100499fbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110de3a38,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10049a010; end: 10049a027; -[SCASnapAccessTokenFetch setScope:] */

void FUN_10049a010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db95d8,5,param_3,0);
  return;
}



/* Entry: 10049a028; end: 10049a117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049a028(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ff1ca0;
  if (param_2 != 0) {
    uVar4 = *param_4;
    func_0x000107c61428(param_2 + _DAT_112ff1ca0,auStack_80,0x21,0);
    func_0x000107c61434(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    func_0x000107c61558(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    FUN_10049915c(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 10049a118; end: 10049a133;  */

void FUN_10049a118(void)

{
  long unaff_x20;
  
  FUN_10049a028(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10049a134; end: 10049a137;  */

void FUN_10049a134(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10049a138; end: 10049a15b;  */

void FUN_10049a138(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10049a15c; end: 10049a72f; -[SCChatConversationDataCoordinator initWithStoriesDataCoordinator:groupCoordinator:arroyoCoordinator:conversationWindowCoordinator:animationDataCoordinator:snapchattersDataCoordinator:contextPostSnapActionsDataProvider:conversationIdResolver:snapchatterPublicInfoFetcher:reactionsDataProvider:graphene:conversationLifecycleEventPublisher:bitmojiAvatarProvider:chatDisplayReadyLogger:messagingExperimentService:appInsightsMetadataStorage:sponsoredSnapAdResponseParser:] */

undefined8 *
FUN_10049a15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  puStack_70 = PTR_PTR_1126f1dd8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61160();
    uVar7 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_3);
    uVar7 = puVar1[3];
    puVar1[3] = param_3;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_4);
    uVar7 = puVar1[7];
    puVar1[7] = param_4;
    func_0x000107c61170(uVar7);
    func_0x000107c3ad20(puVar1);
    if (param_5 != 0) {
      func_0x000107c61174(param_5);
      uVar7 = puVar1[8];
      puVar1[8] = param_5;
      func_0x000107c61170(uVar7);
      func_0x000107c3ad20(puVar1);
    }
    if (param_6 != 0) {
      func_0x000107c61174(param_6);
      uVar7 = puVar1[9];
      puVar1[9] = param_6;
      func_0x000107c61170(uVar7);
      func_0x000107c3ad20(puVar1);
    }
    func_0x000107c61174(param_7);
    uVar7 = puVar1[0xf];
    puVar1[0xf] = param_7;
    func_0x000107c61170(uVar7);
    func_0x000107c3ad20(puVar1);
    func_0x000107c61174(param_8);
    uVar7 = puVar1[10];
    puVar1[10] = param_8;
    func_0x000107c61170(uVar7);
    func_0x000107c3ad20(puVar1);
    func_0x000107c61174(param_9);
    uVar7 = puVar1[0x19];
    puVar1[0x19] = param_9;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_10);
    uVar7 = puVar1[0x10];
    puVar1[0x10] = param_10;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_11);
    uVar7 = puVar1[0x11];
    puVar1[0x11] = param_11;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126b4990;
    func_0x000107c61160();
    uVar7 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_13);
    uVar7 = puVar1[6];
    puVar1[6] = param_13;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_16);
    uVar7 = puVar1[0x20];
    puVar1[0x20] = param_16;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar7 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar7 = puVar1[0x15];
    puVar1[0x15] = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(param_14);
    uVar7 = puVar1[0x16];
    puVar1[0x16] = param_14;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar7 = puVar1[0x17];
    puVar1[0x17] = puVar2;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar7 = puVar1[0x18];
    puVar1[0x18] = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_12);
    uVar7 = puVar1[0x1c];
    puVar1[0x1c] = param_12;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_17);
    uVar7 = puVar1[0x21];
    puVar1[0x21] = param_17;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_18);
    uVar7 = puVar1[0x22];
    puVar1[0x22] = param_18;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_19);
    uVar7 = puVar1[0x23];
    puVar1[0x23] = param_19;
    func_0x000107c61170(uVar7);
    func_0x000107c61144(auStack_80,puVar1);
    uVar7 = param_15;
    func_0x000107c5c734(param_15);
    func_0x000107c61180();
    uVar4 = uVar7;
    func_0x000107c3e548();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c4da88();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar6 = uVar5;
    func_0x000107c5c320(uVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10049a730; end: 10049a79b; -[SCChatConversationDataCoordinator _addSubcoordinator:] */

/* WARNING: Possible PIC construction at 0x00010049a77c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010049a780) */

void FUN_10049a730(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c3d650(param_3,param_2,param_1);
    func_0x000107c3e160(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10049a79c; end: 10049a7a3; -[SCChatGroupDataCoordinator addDataUpdateListener:] */

void FUN_10049a79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10049a7a4; end: 10049a7f7; -[SCASnapAccessTokenFetch setFetchLatencyMs:] */

void FUN_10049a7a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_111022938,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10049a7f8; end: 10049a85f;  */

void FUN_10049a7f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        func_0x000107c61120(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10049a860; end: 10049a863;  */

void FUN_10049a860(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10049a864; end: 10049a86b; -[SCChatAnimationDataCoordinator addDataUpdateListener:] */

void FUN_10049a864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}


