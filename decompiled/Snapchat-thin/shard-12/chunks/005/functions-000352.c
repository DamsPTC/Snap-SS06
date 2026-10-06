/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091efe90; end: 1091eff93;  */

void FUN_1091efe90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010be8f120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  uVar3 = param_3;
  func_0x00010c06d820(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1afa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             PTR_s_setIsBottomSnapCamera__1126498a8,uVar3);
  return;
}



/* Entry: 1091eff94; end: 1091effd7;  */

void FUN_1091eff94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be8f120(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091effd8; end: 1091f0107;  */

void FUN_1091effd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010be8f120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  func_0x00010bde5720(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091f0108; end: 1091f0443; -[SCReplyConfiguration _replyParametersFromBasicReplyParameters:] */

void FUN_1091f0108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1091ef9d8;
  uStack_40 = 0x1091ef9e8;
  puVar1 = PTR_PTR_1126b1010;
  _objc_alloc();
  func_0x00010c0d6ca0(param_3);
  func_0x00010c02ec80();
  uVar3 = param_3;
  puStack_38 = puVar1;
  func_0x00010c131c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1200();
  _objc_release(uVar3);
  func_0x00010c243400(param_3);
  func_0x0001091ef74c();
  func_0x00010c1d86a0(puStack_58[5]);
  func_0x00010c132020();
  func_0x00010c1eb220(puStack_58[5]);
  func_0x00010c0d6ca0(param_3);
  func_0x00010c1cba40(puStack_58[5]);
  uVar3 = param_3;
  func_0x00010c0ec740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c131ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb080(puStack_58[5]);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0ec740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1322a0();
  func_0x00010c1eb2c0(puStack_58[5]);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0ec740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d40(puStack_58[5]);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0ec740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c1322c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb2e0(puStack_58[5]);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0ec740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c11ecc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6d00(puStack_58[5]);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0ec740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d2e0();
  func_0x00010c1af8a0(puStack_58[5]);
  _objc_release(uVar3);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1091f0444; end: 1091f0457;  */

void FUN_1091f0444(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1eb310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_setReplyUsername__1126586e8,param_2);
  return;
}



/* Entry: 1091f0458; end: 1091f0497;  */

void FUN_1091f0458(long param_1,undefined8 param_2)

{
  func_0x00010c1eb300(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),param_2,
                      param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1b2910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_setIsMischief__11264a468,1);
  return;
}



/* Entry: 1091f0498; end: 1091f0563;  */

void FUN_1091f0498(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_2);
  func_0x00010c1eb2e0(uVar1);
  func_0x00010c1eb300(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(param_2);
  func_0x00010c165620(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  func_0x00010c165640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  func_0x00010c165660(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1b2950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_setIsMobStory__11264a478,(param_3 | param_4 | param_5) ^ 1);
  return;
}



/* Entry: 1091f0564; end: 1091f05db;  */

void FUN_1091f0564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_3);
  func_0x00010c21e6e0(uVar1);
  func_0x00010c1a47a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1b2a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_setIsMultiRecipient__11264a4b0,1);
  return;
}



/* Entry: 1091f05dc; end: 1091f066f; -[SCReplyConfiguration _configureReplyParameters:topicParameters:] */

void FUN_1091f05dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c2757e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2179c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf4f080(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1833c0(param_3,param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091f0670; end: 1091f0753; -[SCReplyConfiguration _configureReplyParameters:impalaParameters:] */

void FUN_1091f0670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c11ee60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6d60(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf25140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1745a0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0f1d00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d86c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf252a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1746a0(param_3,param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091f0754; end: 1091f093b; -[SCReplyConfiguration _configureReplyParameters:contextParameters:] */

void FUN_1091f0754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c073aa0(param_4);
  func_0x00010c1b13e0(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010c129860(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea020(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c129a00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea120(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c129a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea160(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c1297c0(param_4);
  func_0x00010c1e9fa0(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010c129640(param_4);
  func_0x00010c1e9ea0(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010c1298a0(param_4);
  func_0x00010c1ea060(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010bf4f080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c07c520(param_4);
  func_0x00010c1b3e00(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010c07b040(param_4);
  func_0x00010c1b38e0(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010c076240(param_4);
  func_0x00010c1b2220(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010bf29f40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176a00(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c129780(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9f60(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c25ade0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c20d900(param_3,param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091f093c; end: 1091f097b; -[SCReplyConfiguration _configureReplyParameters:discoverFeedReplyParameters:] */

void FUN_1091f093c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010c077e60(param_4);
  func_0x00010c1b2940(param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091f097c; end: 1091f09cf; -[SCReplyConfiguration _configureReplyParameters:commentsSnapReplyParameters:] */

void FUN_1091f097c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010c0ed440(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6580(param_3,param_2,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091f09d0; end: 1091f0a0b; -[SCReplyConfiguration snapSource] */

undefined8 FUN_1091f09d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdd2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c243400();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091f0a0c; end: 1091f0a47; -[SCReplyConfiguration navigationType] */

undefined8 FUN_1091f0a0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdd2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d6ca0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091f0a48; end: 1091f0c5b; -[SCReplyConfiguration _basicParameters] */

void FUN_1091f0a48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_1e8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1091ef9d8;
  uStack_30 = 0x1091ef9e8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1091f0c5c;
  puStack_60 = &UNK_110911d98;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1091f0c94;
  puStack_88 = &UNK_11084eb40;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1091f0ccc;
  puStack_b0 = &UNK_110911dc8;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1091f0d04;
  puStack_d8 = &UNK_110911df8;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x1091f0d3c;
  puStack_100 = &UNK_11084dda0;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x1091f0d74;
  puStack_128 = &UNK_1108ddaf8;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x1091f0dac;
  puStack_150 = &UNK_110911e58;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x1091f0de4;
  puStack_178 = &UNK_11084eb70;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  uStack_1a8 = 0x1091f0e1c;
  puStack_1a0 = &UNK_110960c40;
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  uStack_1d0 = 0x1091f0e54;
  puStack_1c8 = &UNK_110911e88;
  puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_200 = 0xc2000000;
  uStack_1f8 = 0x1091f0e8c;
  puStack_1f0 = &UNK_110911eb8;
  puStack_1c0 = puStack_1e8;
  puStack_198 = puStack_1e8;
  puStack_170 = puStack_1e8;
  puStack_148 = puStack_1e8;
  puStack_120 = puStack_1e8;
  puStack_f8 = puStack_1e8;
  puStack_d0 = puStack_1e8;
  puStack_a8 = puStack_1e8;
  puStack_80 = puStack_1e8;
  puStack_58 = puStack_1e8;
  puStack_48 = puStack_1e8;
  func_0x00010c0bcaa0(param_1,param_2,&puStack_78,&puStack_a0,&puStack_c8,&puStack_f0,&puStack_118,
                      &puStack_140,&puStack_168,&puStack_190,&puStack_1b8,&puStack_1e0,&puStack_208)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091f0c5c; end: 1091f0ec3;  */

void FUN_1091f0c5c(long param_1,undefined8 param_2)

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



/* Entry: 1091f0ec4; end: 1091f0f17; -[SCReplyParameters toBasicReplyConfiguration] */

void FUN_1091f0ec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1bb0;
  func_0x00010bdeb3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf165e0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091f0f18; end: 1091f10ab; -[SCReplyParameters toLensReplyConfiguration] */

void FUN_1091f0f18(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  uVar1 = param_1;
  func_0x00010bdeb3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6d8;
  _objc_alloc(PTR_PTR_1126ae6d8);
  uVar3 = param_1;
  func_0x00010c230d60(param_1);
  uVar4 = param_1;
  func_0x00010c1413e0();
  if (4 < uVar4) {
    uVar4 = 0xffffffffffffffff;
  }
  uVar5 = param_1;
  func_0x00010c281320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0460c0(puVar2,param_2,uVar3,uVar4,uVar5);
  _objc_release(uVar5);
  uVar4 = param_1;
  func_0x00010bdec740(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfbe3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bdeea80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c091bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf51e00();
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126b1bb0;
  func_0x00010bdf4ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0967c0(puVar8,param_2,uVar1,puVar2,uVar3,uVar5,uVar4,param_1,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1091f10ac; end: 1091f1127; -[SCReplyParameters toContextReplyConfiguration] */

void FUN_1091f10ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bdeb3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdec740(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1bb0;
  func_0x00010bf4efa0(PTR_PTR_1126b1bb0,param_2,uVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091f1128; end: 1091f11a3; -[SCReplyParameters toDiscoverFeedReplyConfiguration] */

void FUN_1091f1128(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bdeb3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bded240(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1bb0;
  func_0x00010bf81d20(PTR_PTR_1126b1bb0,param_2,uVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091f11a4; end: 1091f12a3; -[SCReplyParameters toFeedReplyConfiguration] */

void FUN_1091f11a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar1 = param_1;
  func_0x00010bdeb3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf720;
  _objc_alloc(PTR_PTR_1126cf720);
  uVar3 = param_1;
  func_0x00010bf343e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c070d40(param_1);
  uVar5 = param_1;
  func_0x00010c073a40(param_1);
  uVar6 = param_1;
  func_0x00010bfba2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07c4e0(param_1);
  func_0x00010bffd320(puVar2,param_2,uVar3,uVar4,uVar5,uVar6,param_1);
  _objc_release(uVar6);
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126b1bb0;
  func_0x00010bfa4160(PTR_PTR_1126b1bb0,param_2,uVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1091f12a4; end: 1091f131f; -[SCReplyParameters toImpalaReplyConfiguration] */

void FUN_1091f12a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bdeb3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdeea80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1bb0;
  func_0x00010bfea1a0(PTR_PTR_1126b1bb0,param_2,uVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091f1320; end: 1091f13d3; -[SCReplyParameters toCreatorSubscriptionsReplyConfiguration] */

void FUN_1091f1320(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010bdeb3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dde10;
  _objc_alloc(PTR_PTR_1126dde10);
  uVar3 = param_1;
  func_0x00010c0729c0(param_1);
  func_0x00010bfa09a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01f240(puVar2,param_2,uVar3,param_1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126b1bb0;
  func_0x00010bf5bac0(PTR_PTR_1126b1bb0,param_2,uVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091f13d4; end: 1091f1497; -[SCReplyParameters toTopicsReplyConfiguration] */

void FUN_1091f13d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010bdeb3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c20e0;
  _objc_alloc(PTR_PTR_1126c20e0);
  uVar3 = param_1;
  func_0x00010c2757e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4f080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054660(puVar2,param_2,uVar3,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b1bb0;
  func_0x00010c275ae0(PTR_PTR_1126b1bb0,param_2,uVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091f1498; end: 1091f1527; -[SCReplyParameters toOperaReplyConfiguration] */

void FUN_1091f1498(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010bdeb3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dde18;
  _objc_alloc(PTR_PTR_1126dde18);
  func_0x00010c06d820(param_1);
  func_0x00010c01ed40(puVar2,param_2,param_1);
  puVar3 = PTR_PTR_1126b1bb0;
  func_0x00010c0eb140(PTR_PTR_1126b1bb0,param_2,uVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091f1528; end: 1091f15ab; -[SCReplyParameters _createTopicReplyParameters] */

void FUN_1091f1528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c20e0;
  _objc_alloc(PTR_PTR_1126c20e0);
  uVar2 = param_1;
  func_0x00010c2757e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4f080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054660(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091f15ac; end: 1091f18df; -[SCReplyParameters _createBasicReplyParameters] */

void FUN_1091f15ac(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  
  ppuVar1 = param_1;
  func_0x00010befc200();
  ppuVar8 = param_1;
  if (((((ulong)ppuVar1 & 1) == 0) &&
      (ppuVar1 = param_1, func_0x00010befc240(), ((ulong)ppuVar1 & 1) == 0)) &&
     (ppuVar1 = param_1, func_0x00010befc300(), (int)ppuVar1 == 0)) {
    ppuVar1 = param_1;
    func_0x00010c077de0();
    puVar9 = PTR_PTR_1126ae6c0;
    if ((int)ppuVar1 == 0) {
      ppuVar1 = param_1;
      func_0x00010c0780a0();
      puVar9 = PTR_PTR_1126ae6c0;
      if ((int)ppuVar1 == 0) {
        func_0x00010c1322e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar8 != (undefined **)0x0) {
          ppuVar1 = ppuVar8;
        }
        func_0x00010c294300(puVar9,param_2,ppuVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c292720();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = (undefined **)PTR____NSArray0__struct_11034ab48;
        ppuVar1 = (undefined **)PTR____NSArray0__struct_11034ab48;
        if (ppuVar8 != (undefined **)0x0) {
          ppuVar1 = ppuVar8;
        }
        ppuVar7 = param_1;
        func_0x00010bfceb60();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar2 = ppuVar7;
        }
        func_0x00010c0d2880(puVar9,param_2,ppuVar1,ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
      }
    }
    else {
      func_0x00010c1322e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar1 = ppuVar8;
      }
      func_0x00010bfcf5a0(puVar9,param_2,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar1 = param_1;
    func_0x00010c1322c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar1 == (undefined **)0x0) {
      func_0x00010c1322e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(ppuVar1);
      ppuVar8 = ppuVar1;
    }
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar8;
    func_0x00010c08fa60();
    if (ppuVar1 == (undefined **)0x0) {
      _objc_release(ppuVar8);
      ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    puVar9 = PTR_PTR_1126ae6c0;
    ppuVar1 = param_1;
    func_0x00010befc300(param_1);
    ppuVar2 = param_1;
    func_0x00010befc240(param_1);
    ppuVar7 = param_1;
    func_0x00010befc200(param_1);
    func_0x00010c25bbc0(puVar9,param_2,ppuVar8,ppuVar1,ppuVar2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar8);
  puVar3 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  ppuVar8 = param_1;
  func_0x00010c1322a0(param_1);
  ppuVar1 = param_1;
  func_0x00010bf4e080(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010c1322c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010c131ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_1;
  func_0x00010c11ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_1;
  func_0x00010c06d2e0(param_1);
  func_0x00010c03e6c0(puVar3,param_2,ppuVar8,ppuVar1,ppuVar2,ppuVar7,ppuVar4,ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar7);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar6 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  ppuVar8 = param_1;
  func_0x00010c0f1ce0(param_1);
  ppuVar1 = param_1;
  func_0x00010c0d6ca0(param_1);
  func_0x00010c132120();
  if (3 < (long)param_1 - 1U) {
    param_1 = (undefined **)0x0;
  }
  func_0x0001091ef76c(ppuVar8);
  func_0x00010c03e5a0(puVar6,param_2,puVar9,ppuVar8,ppuVar1,param_1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1091f18e0; end: 1091f19ab; -[SCReplyParameters _createImpalaReplyParameters] */

void FUN_1091f18e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b47d0;
  _objc_alloc(PTR_PTR_1126b47d0);
  uVar2 = param_1;
  func_0x00010c11ee60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf25140(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0f1d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf252a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ca00(puVar1,param_2,uVar2,uVar3,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091f19ac; end: 1091f1b57; -[SCReplyParameters _createContextReplyParameters] */

void FUN_1091f19ac(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar1 = PTR_PTR_1126b5b50;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c073aa0();
  uVar3 = param_1;
  func_0x00010c129860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c129a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c129a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c1297c0();
  uVar7 = param_1;
  func_0x00010c129640();
  uVar8 = param_1;
  func_0x00010c1298a0();
  uVar9 = param_1;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c07c520();
  func_0x00010c07b040();
  func_0x00010c076240();
  uVar11 = param_1;
  func_0x00010bf29f40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c129780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01f080(puVar1,param_2,uVar2 & 0xffffffff,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
                      (char)uVar10);
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091f1b58; end: 1091f1b97; -[SCReplyParameters _createDiscoverFeedReplyParameters] */

void FUN_1091f1b58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b47c8;
  _objc_alloc(PTR_PTR_1126b47c8);
  func_0x00010c077e60(param_1);
  func_0x00010c01f260(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091f1b98; end: 1091f1bfb; -[SCReplyParameters promptInfoLensId] */

void FUN_1091f1b98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c091bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c118700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091f1bfc; end: 1091f1cab; -[SCReplyParameters isATurnBasedReply] */

bool FUN_1091f1bfc(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c091bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c118700();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c1185e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar2;
      func_0x00010bfb2f00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c067ec0();
      bVar1 = (int)lVar4 == 3;
      _objc_release(lVar3);
      goto LAB_1091f1c88;
    }
  }
  bVar1 = false;
LAB_1091f1c88:
  _objc_release(lVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1091f1cac; end: 1091f1cf3; -[SCReplyParameters initWithNavigationType:] */

void FUN_1091f1cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700f28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x140) = param_3;
  }
  return;
}



/* Entry: 1091f1cf4; end: 1091f1d2b; -[SCReplyParameters isMischiefSnap] */

long FUN_1091f1cf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c1322a0();
  if (lVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c077df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isMischief_1125fb988);
  return param_1;
}



/* Entry: 1091f1d2c; end: 1091f290b; -[SCReplyParameters isEqual:] */

undefined8 FUN_1091f1d2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar3 = 1;
    goto LAB_1091f233c;
  }
  uVar3 = 0;
  if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091f233c;
  uVar2 = param_1;
  _objc_opt_class(param_1);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar2);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    uVar2 = param_3;
    func_0x00010c1322e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x28);
      uVar5 = param_3;
      func_0x00010c1322e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0x30);
    uVar2 = param_3;
    func_0x00010c1322c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x30);
      uVar5 = param_3;
      func_0x00010c1322c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0x38);
    uVar2 = param_3;
    func_0x00010c131ca0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x38);
      uVar5 = param_3;
      func_0x00010c131ca0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0x58);
    uVar2 = param_3;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x58);
      uVar5 = param_3;
      func_0x00010bf4e080(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0x68);
    uVar2 = param_3;
    func_0x00010c0f1d00();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x68);
      uVar5 = param_3;
      func_0x00010c0f1d00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0x70);
    uVar2 = param_3;
    func_0x00010c0fd0c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x70);
      uVar5 = param_3;
      func_0x00010c0fd0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0x78);
    uVar2 = param_3;
    func_0x00010c0fd260();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x78);
      uVar5 = param_3;
      func_0x00010c0fd260(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0x80);
    uVar2 = param_3;
    func_0x00010bf343e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x80);
      uVar5 = param_3;
      func_0x00010bf343e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071f40();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0x88);
    uVar2 = param_3;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x88);
      uVar5 = param_3;
      func_0x00010bf25140(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0x98);
    uVar2 = param_3;
    func_0x00010c11ee60();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x98);
      uVar5 = param_3;
      func_0x00010c11ee60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0xd0);
    uVar2 = param_3;
    func_0x00010c129a00();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0xd0);
      uVar5 = param_3;
      func_0x00010c129a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0xd8);
    uVar2 = param_3;
    func_0x00010c129a20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar2) {
      _objc_release(uVar2);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0xd8);
      uVar5 = param_3;
      func_0x00010c129a20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (iVar4 == 0) goto LAB_1091f2338;
    }
    uVar5 = *(ulong *)(param_1 + 0xe0);
    uVar2 = param_3;
    func_0x00010c1297c0();
    if (((uVar5 == uVar2) &&
        (uVar5 = *(ulong *)(param_1 + 0xe8), uVar2 = param_3, func_0x00010c129640(), uVar5 == uVar2)
        ) && (uVar5 = *(ulong *)(param_1 + 0xf0), uVar2 = param_3, func_0x00010c1298a0(),
             uVar5 == uVar2)) {
      uVar5 = *(ulong *)(param_1 + 0xf8);
      uVar2 = param_3;
      func_0x00010c129860();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 == uVar2) {
        _objc_release(uVar2);
      }
      else {
        iVar4 = (int)*(undefined8 *)(param_1 + 0xf8);
        uVar5 = param_3;
        func_0x00010c129860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071b60();
        _objc_release(uVar5);
        _objc_release(uVar2);
        if (iVar4 == 0) goto LAB_1091f2338;
      }
      uVar5 = *(ulong *)(param_1 + 0x100);
      uVar2 = param_3;
      func_0x00010c129780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 == uVar2) {
        uVar5 = *(ulong *)(param_1 + 0x48);
        uVar2 = param_3;
        func_0x00010c281320();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == uVar2) {
          _objc_release(uVar2);
        }
        else {
          iVar4 = (int)*(undefined8 *)(param_1 + 0x48);
          uVar5 = param_3;
          func_0x00010c281320(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar2);
          if (iVar4 == 0) goto LAB_1091f2338;
        }
        uVar5 = *(ulong *)(param_1 + 0x130);
        uVar2 = param_3;
        func_0x00010bf4f080();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == uVar2) {
          _objc_release(uVar2);
        }
        else {
          iVar4 = (int)*(undefined8 *)(param_1 + 0x130);
          uVar5 = param_3;
          func_0x00010bf4f080(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar2);
          if (iVar4 == 0) goto LAB_1091f2338;
        }
        uVar5 = *(ulong *)(param_1 + 0x118);
        uVar2 = param_3;
        func_0x00010c292720();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == uVar2) {
          _objc_release(uVar2);
        }
        else {
          iVar4 = (int)*(undefined8 *)(param_1 + 0x118);
          uVar5 = param_3;
          func_0x00010c292720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c071b60();
          _objc_release(uVar5);
          _objc_release(uVar2);
          if (iVar4 == 0) goto LAB_1091f2338;
        }
        uVar5 = *(ulong *)(param_1 + 0x120);
        uVar2 = param_3;
        func_0x00010bfceb60();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == uVar2) {
          _objc_release(uVar2);
        }
        else {
          iVar4 = (int)*(undefined8 *)(param_1 + 0x120);
          uVar5 = param_3;
          func_0x00010bfceb60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c071b60();
          _objc_release(uVar5);
          _objc_release(uVar2);
          if (iVar4 == 0) goto LAB_1091f2338;
        }
        uVar5 = *(ulong *)(param_1 + 0x128);
        uVar2 = param_3;
        func_0x00010bfba2a0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == uVar2) {
          _objc_release(uVar2);
        }
        else {
          iVar4 = (int)*(undefined8 *)(param_1 + 0x128);
          uVar5 = param_3;
          func_0x00010bfba2a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar2);
          if (iVar4 == 0) goto LAB_1091f2338;
        }
        uVar5 = *(ulong *)(param_1 + 0x108);
        uVar2 = param_3;
        func_0x00010c11ecc0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == uVar2) {
          _objc_release(uVar2);
        }
        else {
          iVar4 = (int)*(undefined8 *)(param_1 + 0x108);
          uVar5 = param_3;
          func_0x00010c11ecc0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar2);
          if (iVar4 == 0) goto LAB_1091f2338;
        }
        uVar5 = *(ulong *)(param_1 + 0xb8);
        uVar2 = param_3;
        func_0x00010c2757e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar5 == uVar2) {
          uVar5 = *(ulong *)(param_1 + 0x110);
          uVar2 = param_3;
          func_0x00010c25ade0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar5 == uVar2) {
            _objc_release(uVar2);
          }
          else {
            iVar4 = (int)*(undefined8 *)(param_1 + 0x110);
            uVar5 = param_3;
            func_0x00010c25ade0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c071ae0();
            _objc_release(uVar5);
            _objc_release(uVar2);
            if (iVar4 == 0) goto LAB_1091f2338;
          }
          uVar5 = *(ulong *)(param_1 + 0xc0);
          uVar2 = param_3;
          func_0x00010bfbe3e0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar5 == uVar2) {
            _objc_release(uVar2);
          }
          else {
            iVar4 = (int)*(undefined8 *)(param_1 + 0xc0);
            uVar5 = param_3;
            func_0x00010bfbe3e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c071ae0();
            _objc_release(uVar5);
            _objc_release(uVar2);
            if (iVar4 == 0) goto LAB_1091f2338;
          }
          uVar5 = *(ulong *)(param_1 + 200);
          uVar2 = param_3;
          func_0x00010c091bc0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar5 == uVar2) {
            _objc_release(uVar2);
          }
          else {
            iVar4 = (int)*(undefined8 *)(param_1 + 200);
            uVar5 = param_3;
            func_0x00010c091bc0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c071ae0();
            _objc_release(uVar5);
            _objc_release(uVar2);
            if (iVar4 == 0) goto LAB_1091f2338;
          }
          bVar1 = *(byte *)(param_1 + 8);
          uVar2 = param_3;
          func_0x00010c077de0();
          if (((((((uint)bVar1 == (uint)uVar2) &&
                 (bVar1 = *(byte *)(param_1 + 0x10), uVar2 = param_3, func_0x00010befc240(),
                 (uint)bVar1 == (uint)uVar2)) &&
                ((bVar1 = *(byte *)(param_1 + 0x15), uVar2 = param_3, func_0x00010c07c520(),
                 (uint)bVar1 == (uint)uVar2 &&
                 ((bVar1 = *(byte *)(param_1 + 0x14), uVar2 = param_3, func_0x00010c07b040(),
                  (uint)bVar1 == (uint)uVar2 &&
                  (bVar1 = *(byte *)(param_1 + 0x13), uVar2 = param_3, func_0x00010c230d60(),
                  (uint)bVar1 == (uint)uVar2)))))) &&
               (bVar1 = *(byte *)(param_1 + 0xd), uVar2 = param_3, func_0x00010c073aa0(),
               (uint)bVar1 == (uint)uVar2)) &&
              ((((bVar1 = *(byte *)(param_1 + 0xc), uVar2 = param_3, func_0x00010c06d2e0(),
                 (uint)bVar1 == (uint)uVar2 &&
                 (bVar1 = *(byte *)(param_1 + 0x12), uVar2 = param_3, func_0x00010c06d820(),
                 (uint)bVar1 == (uint)uVar2)) &&
                (bVar1 = *(byte *)(param_1 + 9), uVar2 = param_3, func_0x00010befc200(),
                (uint)bVar1 == (uint)uVar2)) &&
               ((bVar1 = *(byte *)(param_1 + 0xb), uVar2 = param_3, func_0x00010c070d40(),
                (uint)bVar1 == (uint)uVar2 &&
                (bVar1 = *(byte *)(param_1 + 0x18), uVar2 = param_3, func_0x00010c0780a0(),
                (uint)bVar1 == (uint)uVar2)))))) &&
             (((bVar1 = *(byte *)(param_1 + 10), uVar2 = param_3, func_0x00010c077e60(),
               (uint)bVar1 == (uint)uVar2 &&
               ((uVar5 = *(ulong *)(param_1 + 0x60), uVar2 = param_3, func_0x00010c0f1ce0(),
                uVar5 == uVar2 &&
                (uVar5 = *(ulong *)(param_1 + 0x40), uVar2 = param_3, func_0x00010c1322a0(),
                uVar5 == uVar2)))) &&
              ((uVar5 = *(ulong *)(param_1 + 0x50), uVar2 = param_3, func_0x00010c132120(),
               uVar5 == uVar2 &&
               (((bVar1 = *(byte *)(param_1 + 0x11), uVar2 = param_3, func_0x00010befc300(),
                 (uint)bVar1 == (uint)uVar2 &&
                 (uVar5 = *(ulong *)(param_1 + 0x90), uVar2 = param_3, func_0x00010c1413e0(),
                 uVar5 == uVar2)) &&
                (uVar5 = *(ulong *)(param_1 + 0x140), uVar2 = param_3, func_0x00010c0d6ca0(),
                uVar5 == uVar2)))))))) {
            uVar5 = *(ulong *)(param_1 + 0x148);
            uVar2 = param_3;
            func_0x00010c0ed440();
            _objc_retainAutoreleasedReturnValue();
            if (uVar5 == uVar2) {
              uVar3 = 1;
            }
            else {
              uVar3 = *(undefined8 *)(param_1 + 0x148);
              uVar5 = param_3;
              func_0x00010c0ed440(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0720c0(uVar3);
              _objc_release(uVar5);
            }
            _objc_release(uVar2);
            goto LAB_1091f233c;
          }
        }
      }
    }
  }
LAB_1091f2338:
  uVar3 = 0;
LAB_1091f233c:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1091f290c; end: 1091f2913; -[SCReplyParameters replyConfiguration] */

undefined8 FUN_1091f290c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091f2914; end: 1091f291b; -[SCReplyParameters setReplyConfiguration:] */

void FUN_1091f2914(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f291c; end: 1091f2923; -[SCReplyParameters replyUsername] */

undefined8 FUN_1091f291c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091f2924; end: 1091f292b; -[SCReplyParameters setReplyUsername:] */

void FUN_1091f2924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f292c; end: 1091f2933; -[SCReplyParameters replyUserId] */

undefined8 FUN_1091f292c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091f2934; end: 1091f293b; -[SCReplyParameters setReplyUserId:] */

void FUN_1091f2934(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f293c; end: 1091f2943; -[SCReplyParameters replyDisplayName] */

undefined8 FUN_1091f293c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1091f2944; end: 1091f294b; -[SCReplyParameters setReplyDisplayName:] */

void FUN_1091f2944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f294c; end: 1091f2953; -[SCReplyParameters isMischief] */

undefined1 FUN_1091f294c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1091f2954; end: 1091f295b; -[SCReplyParameters setIsMischief:] */

void FUN_1091f2954(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1091f295c; end: 1091f2963; -[SCReplyParameters addToMyStory] */

undefined1 FUN_1091f295c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1091f2964; end: 1091f296b; -[SCReplyParameters setAddToMyStory:] */

void FUN_1091f2964(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1091f296c; end: 1091f2973; -[SCReplyParameters isMobStory] */

undefined1 FUN_1091f296c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1091f2974; end: 1091f297b; -[SCReplyParameters setIsMobStory:] */

void FUN_1091f2974(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 1091f297c; end: 1091f2983; -[SCReplyParameters replyType] */

undefined8 FUN_1091f297c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091f2984; end: 1091f298b; -[SCReplyParameters setReplyType:] */

void FUN_1091f2984(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1091f298c; end: 1091f2993; -[SCReplyParameters unlockableSnapInfo] */

undefined8 FUN_1091f298c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091f2994; end: 1091f299b; -[SCReplyParameters setUnlockableSnapInfo:] */

void FUN_1091f2994(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f299c; end: 1091f29a3; -[SCReplyParameters replyStateType] */

undefined8 FUN_1091f299c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1091f29a4; end: 1091f29ab; -[SCReplyParameters setReplyStateType:] */

void FUN_1091f29a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1091f29ac; end: 1091f29b3; -[SCReplyParameters isDoubleTap] */

undefined1 FUN_1091f29ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1091f29b4; end: 1091f29bb; -[SCReplyParameters setIsDoubleTap:] */

void FUN_1091f29b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 1091f29bc; end: 1091f29c3; -[SCReplyParameters isBirthday] */

undefined1 FUN_1091f29bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1091f29c4; end: 1091f29cb; -[SCReplyParameters setIsBirthday:] */

void FUN_1091f29c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 1091f29cc; end: 1091f29d3; -[SCReplyParameters isFromContextMenu] */

undefined1 FUN_1091f29cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1091f29d4; end: 1091f29db; -[SCReplyParameters setIsFromContextMenu:] */

void FUN_1091f29d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 1091f29dc; end: 1091f29e3; -[SCReplyParameters isFromChatActionMenu] */

undefined1 FUN_1091f29dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 1091f29e4; end: 1091f29eb; -[SCReplyParameters setIsFromChatActionMenu:] */

void FUN_1091f29e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 1091f29ec; end: 1091f29f3; -[SCReplyParameters context] */

undefined8 FUN_1091f29ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1091f29f4; end: 1091f29fb; -[SCReplyParameters setContext:] */

void FUN_1091f29f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f29fc; end: 1091f2a03; -[SCReplyParameters pageSource] */

undefined8 FUN_1091f29fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1091f2a04; end: 1091f2a0b; -[SCReplyParameters setPageSource:] */

void FUN_1091f2a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 1091f2a0c; end: 1091f2a13; -[SCReplyParameters isReplyCta] */

undefined1 FUN_1091f2a0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 1091f2a14; end: 1091f2a1b; -[SCReplyParameters setIsReplyCta:] */

void FUN_1091f2a14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf) = param_3;
  return;
}



/* Entry: 1091f2a1c; end: 1091f2a23; -[SCReplyParameters pageSourceSessionId] */

undefined8 FUN_1091f2a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1091f2a24; end: 1091f2a2b; -[SCReplyParameters setPageSourceSessionId:] */

void FUN_1091f2a24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2a2c; end: 1091f2a33; -[SCReplyParameters addToOurStory] */

undefined1 FUN_1091f2a2c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1091f2a34; end: 1091f2a3b; -[SCReplyParameters setAddToOurStory:] */

void FUN_1091f2a34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1091f2a3c; end: 1091f2a43; -[SCReplyParameters addToSpotlight] */

undefined1 FUN_1091f2a3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 1091f2a44; end: 1091f2a4b; -[SCReplyParameters setAddToSpotlight:] */

void FUN_1091f2a44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 1091f2a4c; end: 1091f2a53; -[SCReplyParameters placeID] */

undefined8 FUN_1091f2a4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1091f2a54; end: 1091f2a5b; -[SCReplyParameters setPlaceID:] */

void FUN_1091f2a54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2a5c; end: 1091f2a63; -[SCReplyParameters placeName] */

undefined8 FUN_1091f2a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1091f2a64; end: 1091f2a6b; -[SCReplyParameters setPlaceName:] */

void FUN_1091f2a64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2a6c; end: 1091f2a73; -[SCReplyParameters cellViewPosition] */

undefined8 FUN_1091f2a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1091f2a74; end: 1091f2a7b; -[SCReplyParameters setCellViewPosition:] */

void FUN_1091f2a74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2a7c; end: 1091f2a83; -[SCReplyParameters isBottomSnapCamera] */

undefined1 FUN_1091f2a7c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 1091f2a84; end: 1091f2a8b; -[SCReplyParameters setIsBottomSnapCamera:] */

void FUN_1091f2a84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 1091f2a8c; end: 1091f2a93; -[SCReplyParameters businessProfileId] */

undefined8 FUN_1091f2a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1091f2a94; end: 1091f2a9b; -[SCReplyParameters setBusinessProfileId:] */

void FUN_1091f2a94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2a9c; end: 1091f2aa3; -[SCReplyParameters roleType] */

undefined8 FUN_1091f2a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1091f2aa4; end: 1091f2aab; -[SCReplyParameters setRoleType:] */

void FUN_1091f2aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 1091f2aac; end: 1091f2ab3; -[SCReplyParameters shouldHideRecipientNameView] */

undefined1 FUN_1091f2aac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 1091f2ab4; end: 1091f2abb; -[SCReplyParameters setShouldHideRecipientNameView:] */

void FUN_1091f2ab4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 1091f2abc; end: 1091f2ac3; -[SCReplyParameters isPreviewSavingDisabled] */

undefined1 FUN_1091f2abc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 1091f2ac4; end: 1091f2acb; -[SCReplyParameters setIsPreviewSavingDisabled:] */

void FUN_1091f2ac4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 1091f2acc; end: 1091f2ad3; -[SCReplyParameters isReplyToStory] */

undefined1 FUN_1091f2acc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 1091f2ad4; end: 1091f2adb; -[SCReplyParameters setIsReplyToStory:] */

void FUN_1091f2ad4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x15) = param_3;
  return;
}



/* Entry: 1091f2adc; end: 1091f2ae3; -[SCReplyParameters quotedUserId] */

undefined8 FUN_1091f2adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1091f2ae4; end: 1091f2aeb; -[SCReplyParameters setQuotedUserId:] */

void FUN_1091f2ae4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2aec; end: 1091f2af3; -[SCReplyParameters repostedMentionUserId] */

undefined8 FUN_1091f2aec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1091f2af4; end: 1091f2afb; -[SCReplyParameters setRepostedMentionUserId:] */

void FUN_1091f2af4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2afc; end: 1091f2b03; -[SCReplyParameters businessStoryVariant] */

undefined8 FUN_1091f2afc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1091f2b04; end: 1091f2b0b; -[SCReplyParameters setBusinessStoryVariant:] */

void FUN_1091f2b04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


