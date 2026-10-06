/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100995910; end: 100995937;  */

undefined ** FUN_100995910(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100995938; end: 100995977;  */

void FUN_100995938(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099591c();
  FUN_100082720("SpotlightUsageTrackingServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100995978; end: 10099597f;  */

void FUN_100995978(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef98c8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100995980; end: 100995a03;  */

void FUN_100995980(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef98c8,param_2,&UNK_101ef98cc,param_2,&UNK_101ef98f4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100995a04; end: 100995a27;  */

undefined ** FUN_100995a04(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100995a28; end: 100995aa7;  */

void FUN_100995a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106ca9a0;
  func_0x000107c613fc(&UNK_1106ca9a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100995aa8,puVar1);
  return;
}



/* Entry: 100995aa8; end: 100995aaf;  */

void FUN_100995aa8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fe53d8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fe53d8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106caa38;
  func_0x000107c613fc(&UNK_1106caa38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103ab658c;
  FUN_10058fa64(&UNK_103ab658c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100995ab0; end: 100995ba7;  */

void FUN_100995ab0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fe53d8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fe53d8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106caa38;
  func_0x000107c613fc(&UNK_1106caa38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103ab658c;
  FUN_10058fa64(&UNK_103ab658c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100995ba8; end: 100995bcb;  */

void FUN_100995ba8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100995bcc; end: 100995fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100995bcc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_1002cc070();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fe53e8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fe53f0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fe53f8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fe5400) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fe5408) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fe5410) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fe5418) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fe5420) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112fe5428) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112fe5430) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112fe5438) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112fe5440) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112fe5448) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112fe5450) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112fe5458) = param_16;
  *(undefined8 *)(lVar3 + _DAT_112fe5460) = param_17;
  *(undefined8 *)(lVar3 + _DAT_112fe5468) = param_18;
  *(undefined8 *)(lVar3 + _DAT_112fe5470) = param_19;
  *(undefined8 *)(lVar3 + _DAT_112fe5478) = param_20;
  *(undefined8 *)(lVar3 + _DAT_112fe5480) = param_21;
  *(undefined8 *)(lVar3 + _DAT_112fe5488) = param_22;
  *(undefined8 *)(lVar3 + _DAT_112fe5490) = param_23;
  *(undefined8 *)(lVar3 + _DAT_112fe5498) = param_24;
  *(undefined8 *)(lVar3 + _DAT_112fe54a0) = param_25;
  *(undefined8 *)(lVar3 + _DAT_112fe54a8) = param_26;
  *(undefined8 *)(lVar3 + _DAT_112fe54b0) = param_27;
  *(undefined8 *)(lVar3 + _DAT_112fe54b8) = param_28;
  *(undefined8 *)(lVar3 + _DAT_112fe54c0) = param_29;
  *(undefined8 *)(lVar3 + _DAT_112fe54c8) = param_30;
  *(undefined8 *)(lVar3 + _DAT_112fe54d0) = param_31;
  *(undefined8 *)(lVar3 + _DAT_112fe54d8) = param_32;
  *(undefined8 *)(lVar3 + _DAT_112fe54e0) = param_33;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 100995fa4; end: 10099614f;  */

void FUN_100995fa4(void)

{
  long unaff_x20;
  
  FUN_100995bcc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108));
  return;
}



/* Entry: 100996150; end: 100996177;  */

undefined ** FUN_100996150(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100996178; end: 1009961b7;  */

void FUN_100996178(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099615c();
  FUN_100082720("TalkConfigServiceProviderWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009961b8; end: 1009961bf;  */

void FUN_1009961b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c8c5a8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009961c0; end: 100996243;  */

void FUN_1009961c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c8c5a8,param_2,&UNK_101c8c5ac,param_2,&UNK_101c8c5d4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100996244; end: 10099626b;  */

undefined ** FUN_100996244(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10099626c; end: 1009962ab;  */

void FUN_10099626c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100996250();
  FUN_100082720("TemplateServiceProviderWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009962ac; end: 1009962b3;  */

void FUN_1009962ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e25210);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009962b4; end: 100996337;  */

void FUN_1009962b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e25210,param_2,&UNK_101e25214,param_2,&UNK_101e2523c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100996338; end: 10099635f;  */

undefined ** FUN_100996338(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100996360; end: 10099639f;  */

void FUN_100996360(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100996344();
  FUN_100082720("ThirdPartyLoginServicesProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009963a0; end: 1009963a7;  */

void FUN_1009963a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c74b6c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009963a8; end: 10099642b;  */

void FUN_1009963a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c74b6c,param_2,&UNK_101c74b70,param_2,&UNK_101c74b98,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099642c; end: 100996453;  */

undefined ** FUN_10099642c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100996454; end: 100996493;  */

void FUN_100996454(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100996438();
  FUN_100082720("UcoLensMediaAssetSaverServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100996494; end: 10099649b;  */

void FUN_100996494(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ea0e30);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099649c; end: 10099651f;  */

void FUN_10099649c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ea0e30,param_2,&UNK_101ea0e34,param_2,&UNK_101ea0e5c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100996520; end: 100996547;  */

undefined ** FUN_100996520(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100996548; end: 100996587;  */

void FUN_100996548(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099652c();
  FUN_100082720("UserSessionServicesHookEntryPointWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100996588; end: 10099660b;  */

void FUN_100996588(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101e696a4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099660c; end: 100996633;  */

void FUN_10099660c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100996634; end: 1009966d3;  */

void FUN_100996634(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002ac60c();
  func_0x000107c613fc();
  FUN_1009966d4(0);
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1009966f4();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c6157c(uVar1);
  FUN_100996700();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 1009966d4; end: 1009966f3;  */

void FUN_1009966d4(void)

{
  func_0x000107c61168(&PTR_PTR_112f92650);
  return;
}



/* Entry: 1009966f4; end: 1009966ff;  */

void FUN_1009966f4(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 100996700; end: 100996767;  */

void FUN_100996700(void)

{
  long unaff_x20;
  
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,FUN_100996768);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
            (lRam000000011380bb38 + 0x18,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100996768; end: 10099679f;  */

void FUN_100996768(undefined8 param_1)

{
  func_0x000100996748();
  func_0x000107c613fc();
  FUN_1009967a0();
  uRam000000011380bb38 = param_1;
  return;
}



/* Entry: 1009967a0; end: 100996807;  */

void FUN_1009967a0(void)

{
  long unaff_x20;
  
  func_0x000107c61614(unaff_x20 + 0x10,0);
  func_0x000107c61614(unaff_x20 + 0x18,0);
  func_0x000107c61614(unaff_x20 + 0x20,0);
  func_0x000107c61614(unaff_x20 + 0x28,0);
  func_0x000107c61614(unaff_x20 + 0x30,0);
  func_0x000107c61614(unaff_x20 + 0x38,0);
  func_0x000107c61614(unaff_x20 + 0x40,0);
  return;
}



/* Entry: 100996808; end: 100996813;  */

undefined ** FUN_100996808(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100996814; end: 10099683f;  */

void FUN_100996814(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 100996840; end: 100996847;  */

void FUN_100996840(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ab9ed8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100996848; end: 1009968cb;  */

void FUN_100996848(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ab9ed8,param_2,&UNK_101ab9edc,param_2,&UNK_101ab9f04,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009968cc; end: 1009968f3;  */

undefined ** FUN_1009968cc(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009968f4; end: 100996933;  */

void FUN_1009968f4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009968d8();
  FUN_100082720("VideoSuperResolutionModelServiceEntryPointWrapperScopeInitializationPluginProvider"
                ,0x52,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100996934; end: 10099693b;  */

void FUN_100996934(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101e6aeac);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099693c; end: 1009969bf;  */

void FUN_10099693c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101e6aeac,param_2,FUN_1009969c0,param_2,&UNK_101e6aeb0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009969c0; end: 1009969e7;  */

void FUN_1009969c0(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009969e8; end: 1009969f3;  */

void FUN_1009969e8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002ac8ac();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  FUN_100996b98(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_100996bb8();
  *(undefined8 *)(lVar2 + 0x10) = uVar8;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined **)(lVar2 + 0x38) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100996b98);
  (*pcVar1)();
}



/* Entry: 1009969f4; end: 100996b97;  */

void FUN_1009969f4(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002ac8ac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  FUN_100996b98(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_100996bb8();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    *(undefined **)(param_2 + 0x38) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100996b98);
  (*pcVar1)();
}



/* Entry: 100996b98; end: 100996bb7;  */

void FUN_100996b98(void)

{
  func_0x000107c61168(&PTR_PTR_112e35b38);
  return;
}



/* Entry: 100996bb8; end: 100996d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100996bb8(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined8 uVar6;
  undefined8 **appuStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  FUN_1006bf3cc(param_4 + _DAT_112ff7af0,appuStack_88);
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0;
    FUN_100996d0c();
    lVar4 = lVar2;
    func_0x000107c614f0(lVar2);
    uVar6 = *(undefined8 *)(param_2 + _DAT_113091b70);
    func_0x000107c615f0(uVar6);
    pppuVar5 = appuStack_88;
    FUN_100996d2c(pppuVar5,lVar2,uVar6,uVar3,lVar4);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(uVar6);
    ppuStack_68 = &PTR_DAT_1104927c8;
    appuStack_88[0] = pppuVar5;
    uStack_70 = uVar3;
    FUN_1002b5950(0);
    func_0x000107c610f8();
    pppuVar5 = appuStack_88;
    FUN_100996ee8(pppuVar5);
    func_0x000107c42c20(param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(pppuVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100996d0c);
  (*pcVar1)();
}



/* Entry: 100996d0c; end: 100996d2b;  */

void FUN_100996d0c(void)

{
  func_0x000107c61168(&PTR_PTR_112e35a30);
  return;
}



/* Entry: 100996d2c; end: 100996d7f;  */

long FUN_100996d2c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1;
  FUN_100996d0c();
  func_0x000107c613fc();
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined1 *)(lVar1 + 0x14) = 1;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  FUN_1006bf3cc(param_1,lVar1 + 0x28);
  FUN_1000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c615f0(param_2);
  func_0x000107c41b80();
  func_0x000107c61180();
  plVar3 = param_3;
  func_0x0001000b637c();
  func_0x000107c61170(param_3);
  puVar4 = &UNK_1104927e8;
  func_0x000107c613fc(&UNK_1104927e8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,lVar1);
  puVar5 = &UNK_101e9b54c;
  puVar6 = puVar4;
  (**(code **)(*plVar3 + 0x60))(&UNK_101e9b54c);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c614f0(puVar5);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(lVar1 + 0x50),puVar4,puVar6);
  func_0x000107c615e8(puVar5);
  func_0x0001000834e4(param_1);
  return lVar1;
}



/* Entry: 100996d80; end: 100996ec3;  */

long FUN_100996d80(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  *(undefined4 *)(param_4 + 0x10) = 0;
  *(undefined1 *)(param_4 + 0x14) = 1;
  *(undefined8 *)(param_4 + 0x18) = 0;
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(param_4 + 0x50) = uVar1;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  FUN_1006bf3cc(param_1,param_4 + 0x28);
  FUN_1000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c615f0(param_2);
  func_0x000107c41b80();
  func_0x000107c61180();
  plVar2 = param_3;
  func_0x0001000b637c();
  func_0x000107c61170(param_3);
  puVar3 = &UNK_1104927e8;
  func_0x000107c613fc(&UNK_1104927e8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_4);
  puVar4 = &UNK_101e9b54c;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(&UNK_101e9b54c);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c614f0(puVar4);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(param_4 + 0x50),puVar3,puVar5);
  func_0x000107c615e8(puVar4);
  func_0x0001000834e4(param_1);
  return param_4;
}



/* Entry: 100996ec4; end: 100996ee7;  */

void FUN_100996ec4(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100996ee8; end: 100996f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100996ee8(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  FUN_100996f58(param_1,unaff_x20 + _DAT_112fdcd30);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 100996f58; end: 100996f9b;  */

long FUN_100996f58(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100996f9c; end: 100996fd7;  */

void FUN_100996f9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100996fd8; end: 100996fff;  */

undefined ** FUN_100996fd8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100997000; end: 10099703f;  */

void FUN_100997000(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100996fe4();
  FUN_100082720("VideoWatermarkServicesServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100997040; end: 100997047;  */

void FUN_100997040(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ed96f0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100997048; end: 1009970cb;  */

void FUN_100997048(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ed96f0,param_2,&UNK_101ed96f4,param_2,&UNK_101ed971c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009970cc; end: 1009970d7;  */

undefined ** FUN_1009970cc(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009970d8; end: 100997163;  */

void FUN_1009970d8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100997164,param_1);
  return;
}



/* Entry: 100997164; end: 10099716b;  */

void FUN_100997164(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ccb5e0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099716c; end: 1009971ef;  */

void FUN_10099716c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ccb5e0,param_2,FUN_1009971f0,param_2,&UNK_101ccb5e4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009971f0; end: 100997217;  */

void FUN_1009971f0(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100997218; end: 10099721f;  */

void FUN_100997218(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1002aca10();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1009972c8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_1009972e8(uStack_48,uStack_50);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 100997220; end: 1009972c7;  */

void FUN_100997220(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1002aca10();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1009972c8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_1009972e8(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1009972c8; end: 1009972e7;  */

void FUN_1009972c8(void)

{
  func_0x000107c61168(&PTR_PTR_112e17c80);
  return;
}



/* Entry: 1009972e8; end: 10099736f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009972e8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x00010099732c(param_2 + _DAT_112e18038,unaff_x20 + 0x10);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100997370; end: 10099739b;  */

void FUN_100997370(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10099739c; end: 1009973a7;  */

undefined ** FUN_10099739c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009973a8; end: 100997433;  */

void FUN_1009973a8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100997434,param_1);
  return;
}



/* Entry: 100997434; end: 10099743b;  */

void FUN_100997434(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ccb78c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099743c; end: 1009974bf;  */

void FUN_10099743c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ccb78c,param_2,FUN_1009974c0,param_2,&UNK_101ccb790,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009974c0; end: 1009974e7;  */

void FUN_1009974c0(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009974e8; end: 1009974f7;  */

void FUN_1009974e8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002acaf8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  FUN_100997648(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uStack_90);
  FUN_100997668(uStack_68,uVar2,uVar3,uVar4,uVar5,uStack_90);
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 1009974f8; end: 100997647;  */

void FUN_1009974f8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002acaf8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_100997648(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uStack_90);
  FUN_100997668(uStack_68,uVar1,uVar2,uVar3,uVar4,uStack_90);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 100997648; end: 100997667;  */

void FUN_100997648(void)

{
  func_0x000107c61168(&PTR_PTR_112e17dd0);
  return;
}



/* Entry: 100997668; end: 100997a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100997668(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  long extraout_x8;
  long lVar12;
  long unaff_x20;
  long *plVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  lStack_80 = param_4;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x0001000c6560();
  uVar11 = 0x20;
  uStack_98 = uVar4;
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + _DAT_113083f78);
  lStack_90 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar4 = uVar5;
  func_0x000107c5faec();
  uStack_a8 = uVar11;
  uStack_a0 = uVar4;
  func_0x000107c61170(uVar5);
  lStack_88 = param_2;
  func_0x000107c5b478();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar4 = param_3;
    func_0x000107c43a58();
    func_0x000107c61180();
    uVar5 = param_5;
    uStack_b0 = param_3;
    func_0x000107c5e12c();
    func_0x000107c61180();
    uVar11 = param_6;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    uStack_b8 = param_6;
    (**(code **)(lVar12 + 0x68))
              (lVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
               lVar3);
    puVar6 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar7 = 0xd000000000000018;
    uStack_c0 = param_5;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f00aa00);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar7);
    (**(code **)(lVar12 + 8))(lVar8,lVar3);
    lVar8 = 0;
    FUN_100997a94();
    lVar12 = lVar8;
    func_0x000107c610f8();
    lVar3 = _DAT_112e17d18;
    uVar7 = uStack_98;
    func_0x000107c613fc(uStack_98,0x20,7);
    FUN_1000c6580();
    *(undefined8 *)(lVar12 + lVar3) = uVar7;
    puVar1 = (undefined8 *)(lVar12 + _DAT_112e17ce0);
    *puVar1 = uStack_a0;
    puVar1[1] = uStack_a8;
    *(long *)(lVar12 + _DAT_112e17ce8) = param_2;
    *(undefined8 *)(lVar12 + _DAT_112e17cf0) = uVar4;
    *(undefined8 *)(lVar12 + _DAT_112e17cf8) = uVar5;
    *(undefined8 *)(lVar12 + _DAT_112e17d00) = uVar11;
    *(undefined **)(lVar12 + _DAT_112e17d08) = puVar6;
    puVar9 = PTR_PTR_1126a9000;
    func_0x000107c610f8();
    func_0x000107c61174(param_2);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar11);
    func_0x000107c61174(puVar6);
    func_0x000107c453e4();
    *(undefined **)(lVar12 + _DAT_112e17d10) = puVar9;
    plVar13 = &lStack_70;
    lStack_70 = lVar12;
    lStack_68 = lVar8;
    func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar6);
    lVar3 = lStack_80;
    *(long **)(unaff_x20 + 0x10) = plVar13;
    plVar13 = *(long **)(lStack_80 + _DAT_112e18028);
    *(long **)(unaff_x20 + 0x18) = plVar13;
    FUN_1000285a8(0x112d3b7d0,&UNK_10d904cc0);
    func_0x000107c61174();
    func_0x0001000b637c();
    puVar6 = &UNK_11046b3f0;
    func_0x000107c613fc(&UNK_11046b3f0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,unaff_x20);
    pcVar2 = FUN_100997b28;
    puVar9 = puVar6;
    (**(code **)(*plVar13 + 0x60))(FUN_100997b28);
    func_0x000107c61574(plVar13);
    func_0x000107c61574(puVar6);
    pcVar10 = pcVar2;
    func_0x000107c614f0(pcVar2);
    (**(code **)(puVar9 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20),pcVar10,puVar9);
    func_0x000107c61170(lStack_90);
    func_0x000107c61170(lStack_88);
    func_0x000107c61170(uStack_b0);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(uStack_b8);
    func_0x000107c615e8(pcVar2);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100997a68);
  (*pcVar2)();
}



/* Entry: 100997a68; end: 100997a8b;  */

void FUN_100997a68(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100997a8c; end: 100997a93; -[SCFriendmojiServices friendmojiRegistry] */

undefined8 FUN_100997a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100997a94; end: 100997ab3;  */

void FUN_100997a94(void)

{
  func_0x000107c61168(&PTR_PTR_112800ea8);
  return;
}



/* Entry: 100997ab4; end: 100997b27; -[SCGrapheneWatchAppMetric2 init] */

undefined1 * FUN_100997ab4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea5f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100997b28; end: 100997b33;  */

void FUN_100997b28(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  
  ppuVar1 = &puStack_60;
  uVar2 = *param_1;
  puStack_40 = &UNK_101cd001c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101ccfee0;
  puStack_48 = &UNK_11046b420;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c4c6bc(uVar2);
  func_0x000107c60bd0(ppuVar1);
  return;
}



/* Entry: 100997b34; end: 100997bd3;  */

void FUN_100997b34(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *param_1;
  puStack_40 = &UNK_101cd001c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101ccfee0;
  puStack_48 = &UNK_11046b420;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c4c6bc(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100997bd4; end: 100997bef;  */

void FUN_100997bd4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100997bf0; end: 100997c3b;  */

void FUN_100997bf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100997c3c; end: 100997c47;  */

undefined ** FUN_100997c3c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100997c48; end: 100997cd3;  */

void FUN_100997c48(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100997cd4,param_1);
  return;
}



/* Entry: 100997cd4; end: 100997cdb;  */

void FUN_100997cd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ccb8ac);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100997cdc; end: 100997d5f;  */

void FUN_100997cdc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ccb8ac,param_2,FUN_100997d60,param_2,&UNK_101ccb8b0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100997d60; end: 100997d87;  */

void FUN_100997d60(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100997d88; end: 100997d93;  */

void FUN_100997d88(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002acd3c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_100997e90(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_100997eb0(uStack_58,uVar2,uVar3,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 100997d94; end: 100997e8f;  */

void FUN_100997d94(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002acd3c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_100997e90(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_100997eb0(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 100997e90; end: 100997eaf;  */

void FUN_100997e90(void)

{
  func_0x000107c61168(&PTR_PTR_112e17ed0);
  return;
}



/* Entry: 100997eb0; end: 100998057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100997eb0(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_88 [40];
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar1 = param_4;
  lVar6 = param_2;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x000107c5e128();
    func_0x000107c615e8(uVar2);
    if ((uVar1 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_113083f78);
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      FUN_1000285a8(0x112d39420,&UNK_10d979900);
      uVar5 = *(undefined8 *)(param_2 + _DAT_113083868);
      func_0x000107c61174(uVar5);
      uVar3 = uVar5;
      FUN_1000bda74();
      func_0x000107c61170(uVar5);
      func_0x000101cd0adc(param_3 + _DAT_112e18040,auStack_88);
      uVar5 = 0;
      func_0x000101cd07fc(0);
      func_0x000107c610f8();
      func_0x000101cd00c4(uVar4,lVar6,uVar3,auStack_88,uVar5);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      param_4 = *(ulong *)(unaff_x20 + 0x10);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
      goto LAB_100998030;
    }
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
LAB_100998030:
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100998058; end: 10099806f; -[SCMessagingExperimentServiceImpl watchAppDauMetrics] */

void FUN_100998058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de8ab8,0,0);
  return;
}



/* Entry: 100998070; end: 1009980ab;  */

void FUN_100998070(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009980ac; end: 1009980b7;  */

undefined ** FUN_1009980ac(void)

{
  return &PTR_DAT_113082b10;
}


