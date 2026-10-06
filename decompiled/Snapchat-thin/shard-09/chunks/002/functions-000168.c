/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b17bcc; end: 106b17bd3; -[SCMapStoryPlaybackViewController preferredStatusBarUpdateAnimation] */

undefined8 FUN_106b17bcc(void)

{
  return 1;
}



/* Entry: 106b17bd4; end: 106b17bdb; -[SCMapStoryPlaybackViewController prefersStatusBarHidden] */

undefined8 FUN_106b17bd4(void)

{
  return 0;
}



/* Entry: 106b17bdc; end: 106b17bef; -[SCMapStoryPlaybackViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b17bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758424,0);
  return;
}



/* Entry: 106b17bf0; end: 106b17c97; -[SCMapStoryPlaybackEntryPoint begin] */

void FUN_106b17bf0(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106b17c98;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106b17c98; end: 106b17cc3;  */

void FUN_106b17c98(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd38a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b17cc4; end: 106b18937; -[SCMapStoryPlaybackEntryPoint _beginOnMainThread] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b17cc4(undefined8 param_1,long param_2)

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
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  undefined8 uVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_PTR_1126d08f0;
  _objc_opt_new();
  lVar76 = (long)_DAT_112758428;
  uVar72 = *(undefined8 *)(param_2 + lVar76);
  *(undefined **)(param_2 + lVar76) = puVar1;
  _objc_release(uVar72);
  lVar15 = param_2 + _DAT_11275842c;
  lVar2 = lVar15;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = lVar3;
  func_0x000109022308();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((int)lVar75 != 0) {
    puVar1 = PTR_PTR_1126c5b70;
    _objc_alloc(PTR_PTR_1126c5b70);
    lVar15 = param_2 + _DAT_112758430;
    _objc_loadWeakRetained(lVar15);
    lVar2 = lVar15;
    func_0x00010c10fcc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0582c0(puVar1);
    _objc_release(lVar2);
    _objc_release(lVar15);
    lVar15 = param_2 + _DAT_112758434;
    _objc_loadWeakRetained();
    lVar2 = lVar15;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    lVar75 = (long)_DAT_112758438;
    uVar72 = *(undefined8 *)(param_2 + lVar75);
    *(long *)(param_2 + lVar75) = lVar3;
    _objc_release(uVar72);
    _objc_release(lVar2);
    _objc_release(lVar15);
    func_0x00010c10ae00(*(undefined8 *)(param_2 + lVar75));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  *(undefined8 *)(param_2 + _DAT_11275843c) = param_1;
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d08f8;
  _objc_alloc();
  lVar2 = param_2 + _DAT_112758440;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2 + _DAT_112758444;
  _objc_loadWeakRetained();
  lVar75 = param_2 + _DAT_112758448;
  _objc_loadWeakRetained();
  lVar5 = param_2 + _DAT_11275844c;
  _objc_loadWeakRetained();
  lVar6 = param_2 + _DAT_112758450;
  _objc_loadWeakRetained();
  lVar7 = param_2 + _DAT_112758454;
  _objc_loadWeakRetained();
  lVar8 = param_2 + _DAT_112758458;
  _objc_loadWeakRetained();
  lVar9 = param_2 + _DAT_11275845c;
  _objc_loadWeakRetained();
  lVar73 = (long)_DAT_112758430;
  lVar10 = param_2 + lVar73;
  _objc_loadWeakRetained();
  lVar11 = param_2 + _DAT_112758460;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2 + _DAT_112758464;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2 + _DAT_112758468;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_2 + _DAT_11275846c;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2 + _DAT_112758470;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_2 + _DAT_112758474;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c2814a0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_2 + _DAT_112758478;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_2 + _DAT_11275847c;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_2 + _DAT_112758480;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_2 + _DAT_112758484;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c08f6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_2 + _DAT_112758488;
  _objc_loadWeakRetained();
  lVar36 = param_2 + _DAT_11275848c;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_2 + _DAT_112758490;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_2 + _DAT_112758494;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_2 + _DAT_112758500;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010bf0b640();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar44;
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_2 + _DAT_1127584fc;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_2 + _DAT_1127584a0;
  _objc_loadWeakRetained();
  lVar49 = lVar48;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_2 + _DAT_1127584a4;
  _objc_loadWeakRetained();
  lVar51 = lVar50;
  func_0x00010c0ffb20();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_2 + _DAT_1127584a8;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_2 + _DAT_1127584ac;
  _objc_loadWeakRetained();
  lVar55 = lVar54;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_2 + _DAT_1127584b0;
  _objc_loadWeakRetained();
  lVar57 = param_2 + _DAT_1127584b4;
  _objc_loadWeakRetained();
  lVar58 = lVar57;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = (long)_DAT_1127584b8;
  lVar59 = param_2 + lVar74;
  _objc_loadWeakRetained();
  lVar60 = lVar59;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = param_2 + lVar74;
  _objc_loadWeakRetained();
  lVar61 = lVar74;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_2 + _DAT_1127584bc;
  _objc_loadWeakRetained();
  lVar63 = lVar62;
  func_0x00010bf4be60();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_2 + _DAT_1127584c0;
  _objc_loadWeakRetained();
  lVar65 = lVar64;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = param_2 + _DAT_1127584c4;
  _objc_loadWeakRetained();
  lVar67 = lVar66;
  func_0x00010c0b8d40();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = param_2 + _DAT_1127584c8;
  _objc_loadWeakRetained();
  lVar69 = lVar68;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = param_2 + _DAT_1127584cc;
  _objc_loadWeakRetained();
  lVar71 = lVar70;
  func_0x00010c258e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e8c0();
  uVar72 = *(undefined8 *)(param_2 + _DAT_1127584d0);
  *(undefined **)(param_2 + _DAT_1127584d0) = puVar1;
  _objc_release(uVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar74);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
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
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar75);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar15 = param_2 + lVar73;
  _objc_loadWeakRetained();
  lVar2 = lVar15;
  func_0x00010c100400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = lVar15;
    func_0x00010c100420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      _objc_initWeak(auStack_70,param_2);
      lVar2 = param_2 + _DAT_1127584d8;
      _objc_loadWeakRetained(lVar2);
      lVar75 = lVar2;
      func_0x00010c0b9f40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar75;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2 + lVar73;
      _objc_loadWeakRetained(lVar3);
      lVar6 = lVar3;
      func_0x00010c101720();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar15;
      func_0x00010c259cc0(lVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar15);
      _objc_copyWeak(auStack_a0,auStack_70);
      func_0x00010bfa9560(lVar5);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(lVar5);
      _objc_release(lVar75);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_a0);
      _objc_release(lVar15);
    }
    else {
      _objc_initWeak(auStack_70,param_2);
      lVar2 = lVar15;
      func_0x00010c100420();
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_106b18938;
      puStack_80 = &UNK_110842c58;
      _objc_copyWeak(auStack_78,auStack_70);
      lVar3 = lVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar72 = *(undefined8 *)(param_2 + _DAT_1127584d4);
      *(long *)(param_2 + _DAT_1127584d4) = lVar3;
      _objc_release(uVar72);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_78);
    }
    _objc_destroyWeak(auStack_70);
  }
  else {
    lVar2 = lVar15;
    func_0x00010c100400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7d100(param_2);
    _objc_release(lVar2);
  }
  lVar2 = param_2 + lVar73;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = lVar3;
  func_0x00010c0ba060();
  func_0x00010bb02098();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar73 = param_2 + lVar73;
  _objc_loadWeakRetained(lVar73);
  lVar2 = lVar73;
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b9de0();
  func_0x00010bb01b4c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar73);
  FUN_106b1ce1c(*(undefined8 *)(param_2 + lVar76),lVar3,lVar75,1);
  _objc_release(lVar3);
  _objc_release(lVar75);
  _objc_release(lVar15);
  return;
}



/* Entry: 106b18938; end: 106b189cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b18938(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_1127584dc);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (lVar2 == 0) {
    func_0x00010be7d100();
  }
  else {
    func_0x00010be888a0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b189cc; end: 106b18ac7;  */

void FUN_106b189cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b18ac8;
  puStack_58 = &UNK_110850cf8;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106b18ac8; end: 106b18b2b;  */

void FUN_106b18ac8(long param_1)

{
  long lVar1;
  
  if (((*(long *)(param_1 + 0x20) == 0) && (lVar1 = *(long *)(param_1 + 0x28), lVar1 != 0)) &&
     (func_0x00010bf529e0(), lVar1 != 0)) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7d100();
  }
  else {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7f760();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b18b2c; end: 106b18baf; -[SCMapStoryPlaybackEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b18b2c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_1127584dc;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puStack_38 = PTR_PTR_1126f4f68;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b18bb0; end: 106b18c6b; -[SCMapStoryPlaybackEntryPoint _presentationDidFailWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b18bb0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112758430;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0ba040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c0ba040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b9f60();
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106b18c6c; end: 106b194e7; -[SCMapStoryPlaybackEntryPoint _presentOperaWithStorySequences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b18c6c(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = (long)_DAT_112758430;
    uVar9 = param_1 + lVar3;
    _objc_loadWeakRetained();
    uVar10 = uVar9;
    func_0x00010c0ba040();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    param_2 = PTR_s_mapStoryManifestRequestDidFailWi_11260c1f0;
    _objc_opt_respondsToSelector();
    _objc_release(uVar10);
    _objc_release(uVar9);
    if ((uVar11 & 1) != 0) {
      uVar10 = param_1 + lVar3;
      _objc_loadWeakRetained();
      uVar9 = uVar10;
      func_0x00010c0ba040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b9f60();
      _objc_release(uVar9);
      _objc_release(uVar10);
    }
  }
  else {
    puVar1 = PTR_PTR_1126d0900;
    _objc_alloc();
    func_0x00010c037000();
    lVar19 = (long)_DAT_1127584e0;
    uVar12 = *(undefined8 *)(param_1 + lVar19);
    *(undefined **)(param_1 + lVar19) = puVar1;
    _objc_release(uVar12);
    lVar16 = (long)_DAT_1127584d0;
    uVar12 = *(undefined8 *)(param_1 + lVar16);
    lVar20 = (long)_DAT_112758430;
    lVar3 = param_1 + lVar20;
    _objc_loadWeakRetained(lVar3);
    lVar17 = lVar3;
    func_0x00010c063c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf592a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_1127584e4;
    uVar13 = *(undefined8 *)(param_1 + lVar18);
    *(undefined8 *)(param_1 + lVar18) = uVar12;
    _objc_release(uVar13);
    _objc_release(lVar17);
    _objc_release(lVar3);
    uVar12 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf556e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined8 *)(param_1 + lVar18);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    uVar13 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf55560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0(uVar13);
    func_0x00010befa120(puVar2);
    lVar3 = param_1 + lVar20;
    _objc_loadWeakRetained();
    lVar17 = lVar3;
    func_0x00010c1005c0();
    if (lVar17 != 1) {
      _objc_release(lVar3);
      lVar3 = *(long *)(param_1 + lVar16);
      func_0x00010bf59120(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      lVar17 = param_1 + lVar20;
      _objc_loadWeakRetained();
      lVar18 = lVar17;
      func_0x00010bf024c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar18;
      func_0x00010c0ba060();
      _objc_release(lVar18);
      _objc_release();
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + _DAT_1127584e8);
      *(long *)(param_1 + _DAT_1127584e8) = lVar17;
      _objc_release(uVar14);
      func_0x00010be532c0(param_1);
      func_0x000106b1c898(lVar4);
      lVar17 = param_1 + lVar20;
      _objc_loadWeakRetained();
      lVar18 = lVar17;
      func_0x00010bf024c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247d20();
      _objc_release(lVar18);
      _objc_release(lVar17);
      uVar5 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010bf55e20();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1 + _DAT_112758464;
      _objc_loadWeakRetained(lVar17);
      lVar18 = lVar17;
      func_0x00010c08d460();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar18;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9980(uVar5);
      _objc_release(lVar4);
      _objc_release(lVar18);
      _objc_release(lVar17);
      param_2 = PTR_DAT_1126a5260;
      _objc_retain(uVar5);
      uVar15 = uVar5;
      func_0x00010010fab4(uVar5,param_2);
      uVar14 = uVar5;
      if ((int)uVar15 == 0) {
        uVar14 = 0;
      }
      _objc_retain(uVar14);
      _objc_release(uVar5);
      func_0x00010befa140(puVar2);
      _objc_release(uVar14);
      _objc_release(uVar5);
    }
    _objc_release(lVar3);
    lVar3 = param_1 + lVar20;
    _objc_loadWeakRetained();
    lVar17 = lVar3;
    func_0x00010c1005c0();
    _objc_release(lVar3);
    if (lVar17 == 1) {
      uVar14 = *(undefined8 *)(param_1 + lVar16);
      lVar3 = param_1 + lVar20;
      _objc_loadWeakRetained(lVar3);
      lVar16 = lVar3;
      func_0x00010bf16300();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1 + lVar20;
      _objc_loadWeakRetained(lVar17);
      func_0x00010c22e060();
      func_0x00010bf57080(uVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar3);
      func_0x00010befa120(puVar2);
      _objc_initWeak(auStack_80,uVar14);
      lVar3 = param_1 + lVar20;
      _objc_loadWeakRetained();
      lVar17 = lVar3;
      func_0x00010c0fefe0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = auStack_80;
      _objc_copyWeak(auStack_88,param_2);
      lVar16 = lVar17;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + _DAT_1127584ec);
      *(long *)(param_1 + _DAT_1127584ec) = lVar16;
      _objc_release(uVar15);
      _objc_release(lVar17);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_release(uVar14);
    }
    puVar1 = PTR_PTR_1126b23f0;
    _objc_alloc(PTR_PTR_1126b23f0);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011ae0(puVar1);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b23f8;
    _objc_alloc(PTR_PTR_1126b23f8);
    uVar15 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010bf63f20(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010bf63f20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0087a0(puVar6);
    _objc_release(uVar14);
    _objc_release(uVar5);
    _objc_release(uVar15);
    lVar17 = (long)_DAT_11275842c;
    lVar3 = param_1 + lVar17;
    _objc_loadWeakRetained(lVar3);
    lVar16 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000109021fdc();
    _objc_release(lVar16);
    _objc_release(lVar3);
    puVar7 = PTR_PTR_1126b2400;
    _objc_alloc(PTR_PTR_1126b2400);
    lVar3 = param_1 + lVar20;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c27aa00();
    func_0x00010c018aa0(0,puVar7);
    _objc_release(lVar3);
    puVar8 = PTR_PTR_1126d0908;
    _objc_alloc();
    lVar17 = param_1 + lVar17;
    _objc_loadWeakRetained(lVar17);
    lVar3 = lVar17;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffe1e0();
    lVar16 = (long)_DAT_1127584f0;
    uVar14 = *(undefined8 *)(param_1 + lVar16);
    *(undefined **)(param_1 + lVar16) = puVar8;
    _objc_release(uVar14);
    _objc_release(lVar3);
    _objc_release(lVar17);
    lVar3 = param_1 + lVar20;
    _objc_loadWeakRetained();
    lVar17 = lVar3;
    func_0x00010c1005c0();
    _objc_release(lVar3);
    if (lVar17 == 0) {
      func_0x00010c1c8b80(*(undefined8 *)(param_1 + lVar16));
    }
    lVar3 = param_1 + lVar20;
    _objc_loadWeakRetained(lVar3);
    lVar17 = lVar3;
    func_0x00010c10fcc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar17);
    _objc_release(lVar3);
    uVar10 = param_1 + _DAT_112758504;
    _objc_loadWeakRetained(uVar10);
    lVar20 = param_1 + lVar20;
    _objc_loadWeakRetained(lVar20);
    lVar3 = lVar20;
    func_0x00010bf16300();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010be6dec0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf23920(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar17);
    _objc_release(lVar3);
    _objc_release(lVar20);
    _objc_release(uVar10);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127584dc));
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(uVar13);
    _objc_release(puVar2);
    _objc_release(uVar12);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(uVar9 + 0x20);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(param_3);
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bfd08c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b194e8; end: 106b1952f;  */

void FUN_106b194e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd08c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b19530; end: 106b195f3; -[SCMapStoryPlaybackEntryPoint _operaTransitionAnimator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19530(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112758430;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1005c0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    lVar5 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar5);
    lVar1 = lVar5;
    func_0x00010bf16300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar3 = PTR_PTR_1126d0910;
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127584f0);
    _objc_retain(uVar4);
    _objc_alloc(puVar3);
    func_0x00010c033f80();
    _objc_release(uVar4);
    _objc_release(lVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b195f4; end: 106b195f7; -[SCMapStoryPlaybackEntryPoint _refreshPlaylistWithSequences:] */

void FUN_106b195f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshPlaylist__11257fbc0);
  return;
}



/* Entry: 106b195f8; end: 106b19687; -[SCMapStoryPlaybackEntryPoint _refreshPlaylist:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b195f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1dd920(*(undefined8 *)(param_1 + _DAT_1127584e0),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c128d00(*(undefined8 *)(param_1 + _DAT_1127584e4),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b19688; end: 106b19817; -[SCMapStoryPlaybackEntryPoint _onMapStoryPlaybackBeginPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19688(double param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar2);
  dVar9 = *(double *)(param_2 + _DAT_11275843c);
  lVar8 = (long)_DAT_112758430;
  lVar3 = param_2 + lVar8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0ba060();
  func_0x00010bb02098();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2 + lVar8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0b9de0();
  func_0x00010bb01b4c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2 + lVar8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c100400();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar8 = param_2 + lVar8;
    _objc_loadWeakRetained(lVar8);
    lVar7 = lVar8;
    func_0x00010c101720();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar7 != 0;
    _objc_release();
    _objc_release(lVar8);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  FUN_106b1cba8(*(undefined8 *)(param_2 + _DAT_112758428),lVar6,lVar5,bVar1,
                (long)((param_1 - dVar9) * 1000.0));
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106b19818; end: 106b198ff; -[SCMapStoryPlaybackEntryPoint _logFeedPageOpenForMapStoryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1127584e8);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x000106b1c898(param_3);
    func_0x000107cb3664();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_112758464;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c08d460();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106b19900; end: 106b19a0b; -[SCMapStoryPlaybackEntryPoint _logFeedPageViewForMapStoryType:swipeDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19900(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127584e8;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    if (param_4 + 1U < 5) {
      uVar2 = *(undefined8 *)(&UNK_10dde6370 + (param_4 + 1U) * 8);
    }
    else {
      uVar2 = 0;
    }
    func_0x000106b1c898(param_3);
    func_0x000107cb3d20(uVar2,param_3,0,*(undefined8 *)(param_1 + lVar3),0,0,0);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_112758464;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c08d460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106b19a0c; end: 106b19a1f; -[SCMapStoryPlaybackEntryPoint operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127584f8,param_3);
  return;
}



/* Entry: 106b19a20; end: 106b19a23; -[SCMapStoryPlaybackEntryPoint operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_106b19a20(void)

{
  return;
}



/* Entry: 106b19a24; end: 106b19a27; -[SCMapStoryPlaybackEntryPoint operaPresenterDidCancelDismissing:] */

void FUN_106b19a24(void)

{
  return;
}



/* Entry: 106b19a28; end: 106b19ab3; -[SCMapStoryPlaybackEntryPoint operaPresenterDidFailToPresent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19a28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112758430;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ba040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b9f00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10fcc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b19ab4; end: 106b19ab7; -[SCMapStoryPlaybackEntryPoint operaPresenterDidFinishDismissing:] */

void FUN_106b19ab4(void)

{
  return;
}



/* Entry: 106b19ab8; end: 106b19b6f; -[SCMapStoryPlaybackEntryPoint operaPresenterDidFinishPresenting:transitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19ab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = (long)_DAT_112758430;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0ba040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c0ba040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b9f20();
    _objc_release(lVar4);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b19b70; end: 106b19c7f; -[SCMapStoryPlaybackEntryPoint operaPresenterDidTearDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112758430;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ba040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b9f00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c10fcc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ba060();
  uVar3 = param_3;
  func_0x00010c27a6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf84f40(uVar3);
  func_0x00010be53340(param_1,param_2,lVar2,uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106b19c80; end: 106b19c83; -[SCMapStoryPlaybackEntryPoint operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_106b19c80(void)

{
  return;
}



/* Entry: 106b19c84; end: 106b19c87; -[SCMapStoryPlaybackEntryPoint operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_106b19c84(void)

{
  return;
}



/* Entry: 106b19c88; end: 106b19d47; -[SCMapStoryPlaybackEntryPoint operaPresenterWillBeginPresenting:transitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19c88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_112758430;
  uVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0ba040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    lVar5 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar5);
    lVar4 = lVar5;
    func_0x00010c0ba040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba080();
    _objc_release(lVar4);
    _objc_release(lVar5);
  }
  func_0x00010be69fe0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b19d48; end: 106b19e23; -[SCMapStoryPlaybackEntryPoint didStartPlayingPlaylistItemDataModel:groupDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19d48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112758430;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ba060();
  func_0x00010bb02098();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b9de0();
  func_0x00010bb01b4c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  FUN_106b1c978(*(undefined8 *)(param_1 + _DAT_112758428),lVar2,lVar3,1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106b19e24; end: 106b19e87; -[SCMapStoryPlaybackEntryPoint mapsStateComplianceTakeoverDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19e24(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758438);
  *(undefined8 *)(param_1 + _DAT_112758438) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112758430;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0ba040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b9f00();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b19e88; end: 106b19f7b; -[SCMapStoryPlaybackEntryPoint removeContentForCreatorId:playlistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b19e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127584e0);
  func_0x00010c100400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b19f7c;
  puStack_48 = &UNK_110961380;
  uStack_40 = param_3;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar2,param_2,&puStack_60);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010be88880(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b19f7c; end: 106b1a0ab;  */

void FUN_106b19f7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b1a0ac;
  puStack_50 = &UNK_1108ddb28;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar2 = uVar1;
  uStack_48 = uVar4;
  func_0x0001006372a4(uVar1,&puStack_68);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d0918;
  _objc_alloc(PTR_PTR_1126d0918);
  uVar1 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c04d8a0(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_48);
  return;
}



/* Entry: 106b1a0ac; end: 106b1a113;  */

uint FUN_106b1a0ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5b080(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 106b1a114; end: 106b1a3fb; -[SCMapStoryPlaybackEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b1a114(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127584cc);
  _objc_storeStrong(param_1 + _DAT_11275849c,0);
  _objc_storeStrong(param_1 + _DAT_112758498,0);
  _objc_storeStrong(param_1 + _DAT_1127584dc,0);
  _objc_destroyWeak(param_1 + _DAT_112758434);
  _objc_destroyWeak(param_1 + _DAT_112758504);
  _objc_destroyWeak(param_1 + _DAT_1127584c8);
  _objc_destroyWeak(param_1 + _DAT_1127584c4);
  _objc_destroyWeak(param_1 + _DAT_1127584c0);
  _objc_destroyWeak(param_1 + _DAT_1127584bc);
  _objc_destroyWeak(param_1 + _DAT_1127584b8);
  _objc_destroyWeak(param_1 + _DAT_1127584b4);
  _objc_destroyWeak(param_1 + _DAT_1127584b0);
  _objc_destroyWeak(param_1 + _DAT_1127584ac);
  _objc_destroyWeak(param_1 + _DAT_1127584a4);
  _objc_destroyWeak(param_1 + _DAT_112758500);
  _objc_destroyWeak(param_1 + _DAT_112758490);
  _objc_destroyWeak(param_1 + _DAT_11275848c);
  _objc_destroyWeak(param_1 + _DAT_112758488);
  _objc_destroyWeak(param_1 + _DAT_112758484);
  _objc_destroyWeak(param_1 + _DAT_112758460);
  _objc_destroyWeak(param_1 + _DAT_1127584d8);
  _objc_destroyWeak(param_1 + _DAT_1127584a0);
  _objc_destroyWeak(param_1 + _DAT_112758494);
  _objc_destroyWeak(param_1 + _DAT_112758454);
  _objc_destroyWeak(param_1 + _DAT_112758450);
  _objc_destroyWeak(param_1 + _DAT_11275844c);
  _objc_destroyWeak(param_1 + _DAT_112758458);
  _objc_destroyWeak(param_1 + _DAT_112758448);
  _objc_destroyWeak(param_1 + _DAT_112758444);
  _objc_destroyWeak(param_1 + _DAT_11275845c);
  _objc_destroyWeak(param_1 + _DAT_11275842c);
  _objc_destroyWeak(param_1 + _DAT_112758480);
  _objc_destroyWeak(param_1 + _DAT_112758440);
  _objc_destroyWeak(param_1 + _DAT_11275847c);
  _objc_destroyWeak(param_1 + _DAT_112758464);
  _objc_destroyWeak(param_1 + _DAT_1127584fc);
  _objc_destroyWeak(param_1 + _DAT_112758468);
  _objc_destroyWeak(param_1 + _DAT_11275846c);
  _objc_destroyWeak(param_1 + _DAT_1127584a8);
  _objc_destroyWeak(param_1 + _DAT_112758470);
  _objc_destroyWeak(param_1 + _DAT_112758474);
  _objc_destroyWeak(param_1 + _DAT_112758478);
  _objc_destroyWeak(param_1 + _DAT_112758430);
  _objc_storeStrong(param_1 + _DAT_112758438,0);
  _objc_storeStrong(param_1 + _DAT_112758428,0);
  _objc_storeStrong(param_1 + _DAT_1127584e8,0);
  _objc_destroyWeak(param_1 + _DAT_1127584f8);
  _objc_storeStrong(param_1 + _DAT_1127584f4,0);
  _objc_storeStrong(param_1 + _DAT_1127584f0,0);
  _objc_storeStrong(param_1 + _DAT_1127584ec,0);
  _objc_storeStrong(param_1 + _DAT_1127584d4,0);
  _objc_storeStrong(param_1 + _DAT_1127584e0,0);
  _objc_storeStrong(param_1 + _DAT_1127584e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127584d0,0);
  return;
}



/* Entry: 106b1a3fc; end: 106b1a75f; -[SCMapTapToPlayAnywhereV2 initWithTapToPlayLogger:mapSessionInfoProvider:delegate:mapViewport:mapView:mapStoryPlaybackScopeExposer:mapStoryPlaybackScopeServices:mapStoryFetcher:mapStoryMediaFetcher:] */

undefined8 *
FUN_106b1a3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_80 = PTR_PTR_1126f4f70;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 1,param_5);
    _objc_storeWeak(puVar1 + 2,param_6);
    _objc_storeWeak(puVar1 + 3,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_7;
    func_0x00010bf06540();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d0920);
    uVar3 = uVar2;
    func_0x00010c27c040();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106b1a760;
    puStack_a0 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar5 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x14];
    puVar1[0x14] = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c29f500();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x15];
    puVar1[0x15] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 106b1a760; end: 106b1a7eb;  */

void FUN_106b1a760(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126d0920;
  _objc_opt_class(PTR_PTR_1126d0920);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1510e0(param_2);
    func_0x00010be71e80(param_1);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b1a7ec; end: 106b1a90b;  */

void FUN_106b1a7ec(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106b1a90c;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bec60(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106b1a90c; end: 106b1a93f;  */

void FUN_106b1a90c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b1a940; end: 106b1a947;  */

void FUN_106b1a940(void)

{
  return;
}



/* Entry: 106b1a948; end: 106b1a97b;  */

void FUN_106b1a948(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b1a97c; end: 106b1a98b;  */

void FUN_106b1a97c(void)

{
  return;
}



/* Entry: 106b1a98c; end: 106b1aadf; -[SCMapTapToPlayAnywhereV2 _performHeatmapTapAtPoint:] */

void FUN_106b1a98c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x00010bfe1840(*(undefined8 *)(param_3 + 0x98),param_4,1);
  uVar1 = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(param_3 + 0x98) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_3 + 0x58) != 0) {
    uVar2 = param_3;
    func_0x00010be437a0(param_1,param_2);
    if (((uVar2 & 1) != 0) || (*(long *)(param_3 + 0x58) == 3)) {
      return;
    }
    func_0x00010bddb060(param_3);
  }
  lVar3 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_3 + 0x18;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf51220(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c2bf200();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_3 + 0x60);
  *(undefined **)(param_3 + 0x60) = puVar5;
  _objc_release(uVar1);
  _objc_retain(puVar5);
  uVar1 = *(undefined8 *)(param_3 + 0x60);
  *(undefined **)(param_3 + 0x60) = puVar5;
  _objc_release(uVar1);
  _objc_release(lVar3);
  *(undefined8 *)(param_3 + 0x68) = param_1;
  *(undefined8 *)(param_3 + 0x70) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010be61510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__moveToRequestingManifest_112575ee0);
  return;
}



/* Entry: 106b1aae0; end: 106b1acd7; -[SCMapTapToPlayAnywhereV2 _moveToRequestingManifest] */

void FUN_106b1aae0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x60) != 0) {
    ppuVar4 = &puStack_70;
    lVar1 = param_1;
    _CLLocationCoordinate2DIsValid(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
    if ((int)lVar1 != 0) {
      func_0x00010bea7e40(param_1);
      func_0x00010bdc5440(param_1);
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar2;
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010bf51e00();
      puVar2 = PTR_PTR_1126ae560;
      _objc_alloc_init();
      puVar3 = puVar2;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = puVar3;
      _objc_release(uVar6);
      _objc_initWeak(auStack_38,param_1);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      uStack_60 = 0x106b1ac50;
      puStack_58 = &UNK_110848218;
      _objc_copyWeak(auStack_40,auStack_38);
      uStack_50 = uVar5;
      puStack_48 = puVar2;
      _objc_retain(puVar2);
      _objc_retain(uVar5);
      _objc_retainBlock(&puStack_70);
      _dispatch_time(0,300000000);
      func_0x00010058c530();
      _objc_release(ppuVar4);
      _objc_release(puStack_48);
      _objc_release(uStack_50);
      _objc_release(puVar2);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 106b1acd8; end: 106b1af47; -[SCMapTapToPlayAnywhereV2 _actuallyRequestManifestOrStartPlayback] */

void FUN_106b1acd8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar1 = param_1,
     _CLLocationCoordinate2DIsValid(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70))
     , (int)lVar1 != 0)) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    dVar6 = *(double *)(param_1 + 0x68);
    dVar8 = *(double *)(param_1 + 0x70);
    _objc_retain();
    lVar2 = lVar1;
    func_0x00010c0baae0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = dVar6;
    dVar11 = dVar8;
    func_0x00010bf50ea0(dVar6,dVar8);
    dVar5 = dVar4;
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0baae0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf200();
    fVar10 = 1.03;
    _powf(0x3f83d70a,(float)dVar5);
    dVar11 = dVar11 + (double)(fVar10 * 40.0);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0baae0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51220(dVar4,dVar11);
    _objc_release(lVar1);
    _objc_release(lVar2);
    func_0x000108d312a8(dVar6,dVar8,dVar4,dVar11);
    fVar10 = (float)dVar6;
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b1e48;
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    uVar9 = *(undefined8 *)(param_1 + 0x70);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2bf200();
    func_0x00010bfe0580(uVar7,uVar9,(double)fVar10,0,dVar6,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar9);
    _objc_initWeak(auStack_68,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar9);
    func_0x00010bfa9560(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar9);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 106b1af48; end: 106b1afaf;  */

void FUN_106b1af48(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((uVar1 != 0) && (uVar2 = uVar1, func_0x00010c075aa0(), (uVar2 & 1) == 0)) {
    func_0x00010be771a0(uVar1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b1afb0; end: 106b1b12f; -[SCMapTapToPlayAnywhereV2 _emitPlaybackInitiatedTrigger] */

void FUN_106b1afb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = param_1;
  _CLLocationCoordinate2DIsValid(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126b2070;
    _objc_alloc_init(PTR_PTR_1126b2070);
    func_0x00010c1910c0(*(undefined8 *)(param_1 + 0x68));
    puVar3 = PTR_PTR_1126b2078;
    _objc_alloc_init(PTR_PTR_1126b2078);
    func_0x00010c1b6b40();
    func_0x00010c21ad80(puVar3,param_2,puVar2);
    puVar4 = PTR_PTR_1126b2070;
    _objc_alloc_init(PTR_PTR_1126b2070);
    func_0x00010c1910c0(*(undefined8 *)(param_1 + 0x70));
    puVar5 = PTR_PTR_1126b2078;
    _objc_alloc_init();
    func_0x00010c1b6b40();
    func_0x00010c21ad80(puVar5,param_2,puVar4);
    puVar6 = PTR_PTR_1126b2080;
    _objc_alloc_init(PTR_PTR_1126b2080);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a120(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182e60(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1530a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e160();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106b1b130; end: 106b1b177; -[SCMapTapToPlayAnywhereV2 didCancelTouchOnMapWithReason:] */

void FUN_106b1b130(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x58) != 0 && *(long *)(param_1 + 0x58) != 3) {
    func_0x00010bddb060(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b1b178; end: 106b1b1b7; -[SCMapTapToPlayAnywhereV2 _cancelWithReason:] */

void FUN_106b1b178(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010be57100(param_1,param_2,0);
    func_0x00010be983c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
    return;
  }
  return;
}



/* Entry: 106b1b1b8; end: 106b1b1c7; -[SCMapTapToPlayAnywhereV2 isActive] */

bool FUN_106b1b1b8(long param_1)

{
  return *(long *)(param_1 + 0x58) != 0;
}



/* Entry: 106b1b1c8; end: 106b1b20f; -[SCMapTapToPlayAnywhereV2 dismissStory] */

void FUN_106b1b1c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106b1b210; end: 106b1b21f; -[SCMapTapToPlayAnywhereV2 isPresentingStory] */

bool FUN_106b1b210(long param_1)

{
  return *(long *)(param_1 + 0x58) == 3;
}



/* Entry: 106b1b220; end: 106b1b273; -[SCMapTapToPlayAnywhereV2 shakeLogDescription] */

void FUN_106b1b220(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e73718);
  return;
}



/* Entry: 106b1b274; end: 106b1b377; -[SCMapTapToPlayAnywhereV2 baseViewForStoryId:] */

void FUN_106b1b274(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf50ea0(uVar5,uVar6,lVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c19f0e0(0,0,0x3ff0000000000000,0x3ff0000000000000);
  func_0x00010c17a6a0(uVar5,uVar6,puVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb68e0(puVar3);
  func_0x00010bf51460(param_1,param_2,0);
  func_0x00010c19f0e0(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b1b378; end: 106b1b59f; -[SCMapTapToPlayAnywhereV2 _prefetchFirstSnapForPlaybackSequence:] */

void FUN_106b1b378(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      func_0x00010bea7e40(param_1);
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      *(long *)(param_1 + 0x78) = param_3;
      _objc_release(uVar4);
      lVar1 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010bf267e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      *(long *)(param_1 + 0x80) = lVar5;
      _objc_release(uVar4);
      _objc_initWeak(auStack_58,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c259cc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(lVar2);
      func_0x00010c107a20(uVar4);
      _objc_release(lVar5);
      _objc_release(uVar4);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar1);
      goto LAB_106b1b558;
    }
  }
  func_0x00010be0e280(param_1);
LAB_106b1b558:
  _objc_release(param_3);
  return;
}



/* Entry: 106b1b5a0; end: 106b1b5f3;  */

void FUN_106b1b5a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be170a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b1b5f4; end: 106b1b707; -[SCMapTapToPlayAnywhereV2 _finishPrefetchForMediaInfo:error:] */

void FUN_106b1b5f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    *(undefined1 *)(param_1 + 0x88) = 1;
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106b1b708;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b1b708; end: 106b1b73f;  */

void FUN_106b1b708(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec4ba0(param_1,param_2,*(undefined8 *)(param_1 + 0x78));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b1b740; end: 106b1b7bf; -[SCMapTapToPlayAnywhereV2 _storyRequestCompletedWithPlaybackSequences:error:] */

void FUN_106b1b740(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) {
      func_0x00010be0e280(param_1);
    }
    else {
      func_0x00010bec4ba0(param_1,param_2,param_3);
    }
  }
  else {
    func_0x00010be0e260(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b1b7c0; end: 106b1b863; -[SCMapTapToPlayAnywhereV2 _failWithManifestErrorFailure] */

void FUN_106b1b7c0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106b1b864;
  puStack_30 = &UNK_110842e18;
  uVar1 = param_1;
  uStack_28 = param_1;
  func_0x00010be62800(param_1,param_2,&puStack_48);
  if ((uVar1 & 1) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e73738;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e73738,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb8fe0(param_1);
    _objc_release(ppuVar2);
    func_0x00010be71e60(param_1);
    func_0x00010be7f760(param_1);
  }
  return;
}



/* Entry: 106b1b864; end: 106b1b86b;  */

void FUN_106b1b864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__failWithManifestErrorFailure_112561238);
  return;
}



/* Entry: 106b1b86c; end: 106b1b993; -[SCMapTapToPlayAnywhereV2 _storyMediaRequestCompletedWithPlaybackSequences:] */

void FUN_106b1b86c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf51e00();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  uVar2 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106b1b994; end: 106b1ba07;  */

void FUN_106b1b994(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) && (uVar3 = param_2, func_0x00010bf1f3c0(), (int)uVar3 != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      func_0x00010bec4bc0(lVar2);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b1ba08; end: 106b1bbeb; -[SCMapTapToPlayAnywhereV2 _storyMediaRequestCompletedWithPlaybackSequencesAfterDoubleTapExpired:] */

void FUN_106b1ba08(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106b1bbec;
  puStack_68 = &UNK_110841f80;
  uStack_60 = param_1;
  _objc_retain(param_3);
  uVar1 = param_1;
  uStack_58 = param_3;
  func_0x00010be62800(param_1,param_2,&puStack_80);
  _objc_release(uStack_58);
  if ((uVar1 & 1) == 0) {
    func_0x00010bea7e40(param_1,param_2,3);
    func_0x00010be983c0(param_1,param_2,0);
    func_0x00010be57100(param_1,param_2,3);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c10fe40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126b1e50;
    _objc_alloc(PTR_PTR_1126b1e50);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c15ffa0(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0bac20(uVar6);
    func_0x00010c028600(puVar4,param_2,uVar5,uVar6,0,0x22,0x22,0,0,0);
    puVar7 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = param_1;
    func_0x00010bf163c0(param_1,param_2,*(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23580(uVar5,param_2,puVar7,uVar1,1,*(undefined8 *)(param_1 + 0x60),puVar4,0,
                        param_1,0,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106b1bbec; end: 106b1bbf7;  */

void FUN_106b1bbec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec4bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__storyMediaRequestCompletedWithP_11258ec90,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106b1bbf8; end: 106b1bc9f; -[SCMapTapToPlayAnywhereV2 _failWithNoSnapsFoundFailure] */

void FUN_106b1bbf8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106b1bca0;
  puStack_30 = &UNK_110842e18;
  uVar1 = param_1;
  uStack_28 = param_1;
  func_0x00010be62800(param_1,param_2,&puStack_48);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010be71e60();
    if ((uVar1 & 1) == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e73758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e73758,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb8fe0(param_1);
      _objc_release(ppuVar2);
    }
    func_0x00010be7f760(param_1);
  }
  return;
}



/* Entry: 106b1bca0; end: 106b1bca7;  */

void FUN_106b1bca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0e290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__failWithNoSnapsFoundFailure_112561240);
  return;
}



/* Entry: 106b1bca8; end: 106b1bdbb; -[SCMapTapToPlayAnywhereV2 _needsScheduleBlockAfterAnimation:] */

bool FUN_106b1bca8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  func_0x00010bdcb520(param_2);
  if (0.0 < param_1) {
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010bf51e00();
    _objc_initWeak(auStack_48,param_2);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106b1bdbc;
    puStack_68 = &UNK_110848378;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar1);
    uStack_60 = uVar1;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_80);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return 0.0 < param_1;
}



/* Entry: 106b1bdbc; end: 106b1be0b;  */

void FUN_106b1bdbc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((uVar1 != 0) &&
      (uVar2 = uVar1, func_0x00010c075aa0(uVar1,param_2,*(undefined8 *)(param_1 + 0x20)),
      (uVar2 & 1) == 0)) && (*(long *)(param_1 + 0x28) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b1be0c; end: 106b1be43; -[SCMapTapToPlayAnywhereV2 _presentationDidFailWithResult:] */

void FUN_106b1be0c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be983c0(param_1,param_2,1);
  func_0x00010be57100(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
  return;
}



/* Entry: 106b1be44; end: 106b1bed7; -[SCMapTapToPlayAnywhereV2 _cleanup] */

void FUN_106b1be44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bea7e40(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
  *(undefined8 *)(param_1 + 0x70) =
       *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x88) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x58) == 3) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  return;
}



/* Entry: 106b1bed8; end: 106b1bfa7; -[SCMapTapToPlayAnywhereV2 _showErrorWithText:] */

void FUN_106b1bed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126afca8;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126afca8;
  func_0x00010c0cb260(PTR_PTR_1126afca8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c212f20(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c235d80(0x4010000000000000,puVar1,param_2,1);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106b1bfa8; end: 106b1c00f; -[SCMapTapToPlayAnywhereV2 _performHapticError] */

undefined * FUN_106b1bfa8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07e1c0();
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UINotificationFeedbackGenerator_1126d0928;
    _objc_alloc_init(PTR__OBJC_CLASS___UINotificationFeedbackGenerator_1126d0928);
    func_0x00010c0dc440();
    _objc_release(puVar1);
  }
  return puVar2;
}



/* Entry: 106b1c010; end: 106b1c047; -[SCMapTapToPlayAnywhereV2 _setState:] */

void FUN_106b1c010(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(long *)(param_1 + 0x58) != param_3) && (func_0x00010bee7860(), iVar1 != 0)) {
    *(long *)(param_1 + 0x58) = param_3;
  }
  return;
}



/* Entry: 106b1c048; end: 106b1c09f; -[SCMapTapToPlayAnywhereV2 _validateChangeToState:] */

uint FUN_106b1c048(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x58);
  uVar1 = (uint)(param_3 == 0);
  if (lVar4 != 3) {
    uVar1 = (uint)lVar4;
  }
  uVar3 = (uint)(param_3 == 3 || param_3 == 0);
  if (lVar4 != 2) {
    uVar3 = uVar1;
  }
  uVar1 = (uint)((param_3 & 0xfffffffffffffffd) == 0);
  if (lVar4 != 1) {
    uVar1 = (uint)lVar4;
  }
  uVar2 = (uint)(param_3 == 1);
  if (lVar4 != 0) {
    uVar2 = uVar1;
  }
  if (lVar4 < 2) {
    uVar3 = uVar2;
  }
  return uVar3 & 1;
}



/* Entry: 106b1c0a0; end: 106b1c0bb; -[SCMapTapToPlayAnywhereV2 isInstanceTerminated:] */

uint FUN_106b1c0a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0720c0(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106b1c0bc; end: 106b1c0e7; -[SCMapTapToPlayAnywhereV2 _animationDelayRequired] */

double FUN_106b1c0bc(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x50));
  dVar1 = 0.0;
  if (0.0 < param_1 + 0.75) {
    dVar1 = param_1 + 0.75;
  }
  return dVar1;
}



/* Entry: 106b1c0e8; end: 106b1c15b; -[SCMapTapToPlayAnywhereV2 _centerScreenPoint] */

undefined1  [16] FUN_106b1c0e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf50ea0(uVar3,uVar4,lVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 106b1c15c; end: 106b1c1e7; -[SCMapTapToPlayAnywhereV2 _isScreenPointInsideAnimation:] */

bool FUN_106b1c15c(double param_1,double param_2,long param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1;
  dVar3 = param_2;
  func_0x00010bddc6c0();
  param_1 = param_1 - dVar2;
  param_3 = param_3 + 0x10;
  _objc_loadWeakRetained(param_3);
  func_0x00010c2bf200();
  fVar1 = 1.03;
  _powf(0x3f83d70a,(float)dVar2);
  _objc_release(param_3);
  return (param_2 - dVar3) * (param_2 - dVar3) + param_1 * param_1 <=
         (double)(fVar1 * 40.0) * (double)(fVar1 * 40.0);
}



/* Entry: 106b1c1e8; end: 106b1c233; -[SCMapTapToPlayAnywhereV2 _safeAnimationCompletionShowingFailure:] */

void FUN_106b1c1e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8e140();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b1c234; end: 106b1c29f; -[SCMapTapToPlayAnywhereV2 _logPlayAttemptWithResult:] */

void FUN_106b1c234(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c2bf200();
  func_0x00010bf72680(*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70),param_1,uVar1,
                      param_3,param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b1c2a0; end: 106b1c2eb; -[SCMapTapToPlayAnywhereV2 mapStoryDidDismiss] */

void FUN_106b1c2a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
  return;
}



/* Entry: 106b1c2ec; end: 106b1c307; -[SCMapTapToPlayAnywhereV2 mapStoryManifestRequestDidFailWithResult:] */

void FUN_106b1c2ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be0e290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__failWithNoSnapsFoundFailure_112561240);
    return;
  }
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be0e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__failWithManifestErrorFailure_112561238);
    return;
  }
  return;
}



/* Entry: 106b1c308; end: 106b1c3df; -[SCMapTapToPlayAnywhereV2 .cxx_destruct] */

void FUN_106b1c308(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b1c3e0; end: 106b1c473; -[SCMapInlinePlaybackOperaTransitionAnimator initWithParentViewController:baseView:] */

undefined1 *
FUN_106b1c3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4f78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b1c474; end: 106b1c677; -[SCMapInlinePlaybackOperaTransitionAnimator present:] */

void FUN_106b1c474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_5 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c4e0();
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_5 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar3 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bef7700(lVar1,param_6,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2,param_6,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar3 = param_5 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf77e80(lVar1,param_6,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  param_5 = param_5 + 0x18;
  _objc_loadWeakRetained(param_5);
  func_0x00010c29c460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106b1c678; end: 106b1c74f; -[SCMapInlinePlaybackOperaTransitionAnimator dismiss:] */

void FUN_106b1c678(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c400();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c4c0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a6740();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c8e0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29c440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b1c750; end: 106b1c753; -[SCMapInlinePlaybackOperaTransitionAnimator updateBaseView:baseViewOrientation:topInset:transitionMode:] */

void FUN_106b1c750(void)

{
  return;
}



/* Entry: 106b1c754; end: 106b1c757; -[SCMapInlinePlaybackOperaTransitionAnimator updateTransitionMode:] */

void FUN_106b1c754(void)

{
  return;
}



/* Entry: 106b1c758; end: 106b1c75f; -[SCMapInlinePlaybackOperaTransitionAnimator transitionMode] */

undefined8 FUN_106b1c758(void)

{
  return 0;
}



/* Entry: 106b1c760; end: 106b1c763; -[SCMapInlinePlaybackOperaTransitionAnimator resetGestureIfNecessary] */

void FUN_106b1c760(void)

{
  return;
}



/* Entry: 106b1c764; end: 106b1c767; -[SCMapInlinePlaybackOperaTransitionAnimator enableFadeTransitionInDismissal:fadingViews:] */

void FUN_106b1c764(void)

{
  return;
}



/* Entry: 106b1c768; end: 106b1c76b; -[SCMapInlinePlaybackOperaTransitionAnimator disableFadeTransitionInDismissal] */

void FUN_106b1c768(void)

{
  return;
}



/* Entry: 106b1c76c; end: 106b1c76f; -[SCMapInlinePlaybackOperaTransitionAnimator updateDismissalAnimationVolumeControl:] */

void FUN_106b1c76c(void)

{
  return;
}



/* Entry: 106b1c770; end: 106b1c777; -[SCMapInlinePlaybackOperaTransitionAnimator dismissalSwipeDirection] */

undefined8 FUN_106b1c770(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 106b1c778; end: 106b1c78f; -[SCMapInlinePlaybackOperaTransitionAnimator parentVC] */

void FUN_106b1c778(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b1c790; end: 106b1c7a7; -[SCMapInlinePlaybackOperaTransitionAnimator childVC] */

void FUN_106b1c790(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b1c7a8; end: 106b1c7b3; -[SCMapInlinePlaybackOperaTransitionAnimator setChildVC:] */

void FUN_106b1c7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106b1c7b4; end: 106b1c7cb; -[SCMapInlinePlaybackOperaTransitionAnimator delegate] */

void FUN_106b1c7b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b1c7cc; end: 106b1c7d7; -[SCMapInlinePlaybackOperaTransitionAnimator setDelegate:] */

void FUN_106b1c7cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}


