/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f7a5fc; end: 104f7a5ff; -[SCMessagingPlaybackOriginStoryPageProvider setPlaylistItemController:] */

void FUN_104f7a5fc(void)

{
  return;
}



/* Entry: 104f7a600; end: 104f7a603; -[SCMessagingPlaybackOriginStoryPageProvider extraPropertiesProvider] */

void FUN_104f7a600(void)

{
  return;
}



/* Entry: 104f7a604; end: 104f7a607; -[SCMessagingPlaybackOriginStoryPageProvider operaViewDidSendEvent:page:params:] */

void FUN_104f7a604(void)

{
  return;
}



/* Entry: 104f7a608; end: 104f7a60f; -[SCMessagingPlaybackOriginStoryPageProvider registeredEventsForOperaSession] */

undefined8 FUN_104f7a608(void)

{
  return 0;
}



/* Entry: 104f7a610; end: 104f7a7df; -[SCMessagingPlaybackOriginStoryPageProvider extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f7a610(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2c68;
  if (param_6 != 0) {
    _objc_retain(param_6);
    _objc_opt_class(puVar1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar3 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    uVar2 = uVar3;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_104f77198();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = uVar4;
    func_0x00010c0ed940();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    if (uVar2 != 0) {
      uVar3 = uVar4;
      func_0x00010c0ed940(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b2d20;
      func_0x00010c0ed280(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar5);
      _objc_release(uVar3);
    }
    uVar3 = uVar4;
    func_0x00010c07b7c0();
    if ((int)uVar3 != 0) {
      puVar5 = PTR_PTR_1126b2d20;
      func_0x00010c0ed260(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar5);
    }
    puVar5 = puVar1;
    func_0x00010bf51e00(puVar1);
    (**(code **)(param_6 + 0x10))(param_6,puVar5,PTR____NSDictionary0__struct_11034ab58);
    _objc_release(param_6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f7a7e0; end: 104f7a883; -[SCMessagingPlaybackRemixPageProvider initWithConversationId:circumstanceEngine:] */

undefined1 *
FUN_104f7a7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5468;
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



/* Entry: 104f7a884; end: 104f7a887; -[SCMessagingPlaybackRemixPageProvider setPlaylistItemController:] */

void FUN_104f7a884(void)

{
  return;
}



/* Entry: 104f7a888; end: 104f7a88b; -[SCMessagingPlaybackRemixPageProvider extraPropertiesProvider] */

void FUN_104f7a888(void)

{
  return;
}



/* Entry: 104f7a88c; end: 104f7a88f; -[SCMessagingPlaybackRemixPageProvider operaViewDidSendEvent:page:params:] */

void FUN_104f7a88c(void)

{
  return;
}



/* Entry: 104f7a890; end: 104f7a897; -[SCMessagingPlaybackRemixPageProvider registeredEventsForOperaSession] */

undefined8 FUN_104f7a890(void)

{
  return 0;
}



/* Entry: 104f7a898; end: 104f7add7; -[SCMessagingPlaybackRemixPageProvider extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f7a898(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b2c68;
  if (param_6 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = uVar1;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_104f76c8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    uVar4 = uVar1;
    puStack_90 = &uStack_98;
    func_0x00010c0f4aa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104f7add8;
    puStack_a8 = &UNK_11085ec10;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x104f7adec;
    puStack_d0 = &UNK_11085a788;
    puStack_c8 = &uStack_98;
    puStack_a0 = &uStack_98;
    func_0x00010c0bf240();
    _objc_release(uVar4);
    uStack_108 = 0;
    uStack_f8 = 0x2020000000;
    uStack_f0 = 0;
    uVar4 = uVar3;
    puStack_100 = &uStack_108;
    func_0x00010c0cb340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_104f7adfc;
    puStack_128 = &UNK_11085ed70;
    puStack_148 = &uStack_98;
    puStack_178 = puVar2;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_104f7aee0;
    puStack_160 = &UNK_11085eda0;
    puStack_140 = puVar2;
    puStack_1a0 = puVar2;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_104f7afa4;
    puStack_188 = &UNK_11085ea70;
    puStack_180 = &uStack_108;
    uStack_158 = param_1;
    puStack_150 = &uStack_108;
    uStack_120 = param_1;
    puStack_118 = &uStack_108;
    puStack_110 = puStack_148;
    func_0x00010c0bfe80();
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    if (*(char *)(puStack_100 + 3) == '\x01') {
      uVar4 = uVar5;
      func_0x00010c242120();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c08fa60();
      _objc_release(uVar6);
      puVar8 = PTR_PTR_1126b2378;
      if (uVar7 == 0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        uVar6 = uVar4;
        func_0x00010bf4e840(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe3740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar6 = uVar5;
        func_0x00010c086560(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf43580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(puVar8);
      }
      puStack_1c8 = &uStack_1d0;
      uStack_1d0 = 0;
      uStack_1c0 = 0x3032000000;
      uStack_1b8 = 0x104f7afb4;
      uStack_1b0 = 0x104f7afc4;
      uStack_1a8 = 0;
      uVar6 = uVar1;
      func_0x00010c0f4aa0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar3);
      _objc_retain(uVar5);
      _objc_retain(puVar9);
      _objc_retain(uVar3);
      _objc_retain(uVar5);
      _objc_retain(puVar9);
      func_0x00010c0bf240(uVar6);
      _objc_release(uVar6);
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar9);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(puVar9);
      _objc_release(uVar5);
      _objc_release(uVar3);
      __Block_object_dispose(&uStack_1d0,8);
      _objc_release(uStack_1a8);
      _objc_release(uVar4);
      _objc_release(puVar9);
    }
    puVar8 = puVar2;
    func_0x00010bf51e00(puVar2);
    (**(code **)(param_6 + 0x10))(param_6,puVar8,PTR____NSDictionary0__struct_11034ab58);
    _objc_release(puVar8);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_108,8);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f7add8; end: 104f7adfb;  */

void FUN_104f7add8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104f7adfc; end: 104f7aedf;  */

void FUN_104f7adfc(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb2a0();
  uVar3 = param_2;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c6c20();
  uVar5 = param_2;
  func_0x00010bf2c580();
  _objc_release(param_2);
  if ((uVar4 + 1 < 0x17) && ((0x7ffff1U >> (ulong)((uint)(uVar4 + 1) & 0x1f) & 1) != 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = (byte)uVar5 & (0x2c < uVar2 | (byte)(0x11c0c >> (uVar2 & 0x3f)));
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = bVar6;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f7aee0; end: 104f7afa3;  */

void FUN_104f7aee0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0cba00();
  uVar2 = param_2;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c6c20();
  uVar4 = param_2;
  func_0x00010bf2c580();
  _objc_release(param_2);
  if ((uVar3 + 1 < 0x17) && ((0x7ffff1U >> (ulong)((uint)(uVar3 + 1) & 0x1f) & 1) != 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = (byte)uVar4 & (0x2c < uVar1 | (byte)(0x11c0c >> (uVar1 & 0x3f)));
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = bVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f7afa4; end: 104f7afcb;  */

void FUN_104f7afa4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 104f7afcc; end: 104f7b13f;  */

void FUN_104f7afcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126b23b0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar5 = PTR_PTR_1126b23b8;
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010901d7c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2942e0(puVar5,param_2,uVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb8c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c5180(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x0001090196c0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e660(puVar1,param_2,puVar5,uVar6,uVar7,1,uVar8,
                      &PTR____CFConstantStringClassReference_110daafd8);
  lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined **)(lVar10 + 0x28) = puVar1;
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f7b140; end: 104f7b22f;  */

void FUN_104f7b140(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b23b0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b23b8;
  func_0x00010bfcf600(PTR_PTR_1126b23b8,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb8c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c5180(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x0001090196c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e660(puVar1,param_2,puVar2,uVar3,uVar4,1,uVar5,
                      &PTR____CFConstantStringClassReference_110daafd8);
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f7b230; end: 104f7b25f; -[SCMessagingPlaybackRemixPageProvider .cxx_destruct] */

void FUN_104f7b230(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f7b260; end: 104f7b37f;  */

uint FUN_104f7b260(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bf240(param_2);
    uVar1 = 1;
    if (param_1 + 1U < 0x17) {
      uVar1 = 0x138102 >> (ulong)((uint)(param_1 + 1U) & 0x1f);
    }
    if ((*(byte *)(puStack_48 + 3) & 1) == 0) {
      uVar1 = 0;
    }
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_2);
  return uVar1 & 1;
}



/* Entry: 104f7b380; end: 104f7b407;  */

void FUN_104f7b380(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 == 0) ||
     ((*(char *)(param_1 + 0x28) == '\x01' &&
      (uVar1 = param_3, func_0x000100bec1f0(param_3,0), (uVar1 & 1) != 0)))) {
    bVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x000100bec434();
    bVar2 = (byte)uVar1 ^ 1;
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = bVar2;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f7b408; end: 104f7b41b;  */

void FUN_104f7b408(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104f7b41c; end: 104f7b50f; -[SCMessagingPlaybackSetAsWallpaperPageProvider initWithConversationId:presentingUiContainer:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:] */

undefined1 *
FUN_104f7b41c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5470;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f7b510; end: 104f7b51b; -[SCMessagingPlaybackSetAsWallpaperPageProvider setPlaylistItemController:] */

void FUN_104f7b510(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104f7b51c; end: 104f7b5b7; -[SCMessagingPlaybackSetAsWallpaperPageProvider operaViewDidSendEvent:page:params:] */

void FUN_104f7b51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c16a600(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010beaa320(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f7b5b8; end: 104f7b64b; -[SCMessagingPlaybackSetAsWallpaperPageProvider registeredEventsForOperaSession] */

void FUN_104f7b5b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar7 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c16a600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  puVar2 = puVar1 + 0x28;
  _objc_loadWeakRetained(puVar2);
  puVar3 = puVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1 + 0x28;
  _objc_loadWeakRetained();
  puVar4 = puVar2;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  puVar5 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar2);
  puVar2 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c0cb140(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_104f76c8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b2d38;
  func_0x00010bf36e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_88,puVar1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104f7b834;
  puStack_a0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(puVar5);
  puStack_98 = puVar5;
  func_0x0001000d76cc("APPSTORE",&puStack_b8);
  _objc_release(puStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(ppuVar7);
  return;
}



/* Entry: 104f7b64c; end: 104f7b833; -[SCMessagingPlaybackSetAsWallpaperPageProvider _setWallpaperForPageId:] */

void FUN_104f7b64c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c0cb140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  FUN_104f76c8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126b2d38;
  func_0x00010bf36e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104f7b834;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar5);
  puStack_68 = puVar5;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104f7b834; end: 104f7b8fb;  */

void FUN_104f7b834(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x18);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = lVar1 + 0x10;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x20);
        uVar4 = *(undefined8 *)(lVar1 + 8);
        lVar2 = lVar1 + 0x10;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bf22d80(uVar3,param_2,uVar4,0x57,lVar2,lVar1,*(undefined8 *)(param_1 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x18),param_2,uVar3);
        _objc_release(uVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f7b8fc; end: 104f7b8ff; -[SCMessagingPlaybackSetAsWallpaperPageProvider willDisplayChatCustomizationHubScope:] */

void FUN_104f7b8fc(void)

{
  return;
}



/* Entry: 104f7b900; end: 104f7b947; -[SCMessagingPlaybackSetAsWallpaperPageProvider didDismissChatCustomizationHubScope:] */

void FUN_104f7b900(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f7b948; end: 104f7ba03; -[SCMessagingPlaybackSetAsWallpaperPageProvider didRequestDismissal:] */

void FUN_104f7b948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104f7b9cc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104f7ba04; end: 104f7ba4f; -[SCMessagingPlaybackSetAsWallpaperPageProvider .cxx_destruct] */

void FUN_104f7ba04(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f7ba50; end: 104f7ba53; -[SCMessagingPlaybackSpectaclesPageProvider setPlaylistItemController:] */

void FUN_104f7ba50(void)

{
  return;
}



/* Entry: 104f7ba54; end: 104f7ba57; -[SCMessagingPlaybackSpectaclesPageProvider extraPropertiesProvider] */

void FUN_104f7ba54(void)

{
  return;
}



/* Entry: 104f7ba58; end: 104f7ba5b; -[SCMessagingPlaybackSpectaclesPageProvider operaViewDidSendEvent:page:params:] */

void FUN_104f7ba58(void)

{
  return;
}



/* Entry: 104f7ba5c; end: 104f7ba63; -[SCMessagingPlaybackSpectaclesPageProvider registeredEventsForOperaSession] */

undefined8 FUN_104f7ba5c(void)

{
  return 0;
}



/* Entry: 104f7ba64; end: 104f7bd43; -[SCMessagingPlaybackSpectaclesPageProvider extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f7ba64(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  double dVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  if (param_7 != 0) {
    puVar2 = PTR_PTR_1126b2c68;
    _objc_opt_class(PTR_PTR_1126b2c68);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar4 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    uVar3 = uVar4;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_104f76c8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar4 = uVar5;
    func_0x00010c0c6c20();
    if (uVar4 + 1 < 0xd && (1L << (uVar4 + 1 & 0x3f) & 0x129fU) != 0) {
      (**(code **)(param_7 + 0x10))
                (param_7,PTR____NSDictionary0__struct_11034ab58,
                 PTR____NSDictionary0__struct_11034ab58);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      uVar4 = uVar5;
      func_0x00010c0c6c20();
      if (uVar4 < 0x13 && (1L << (uVar4 & 0x3f) & 0x7f6b0U) != 0) {
        func_0x00010c141c40(uVar5);
      }
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar6);
      uVar4 = uVar5;
      func_0x00010c2a5040(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      uVar3 = uVar5;
      dVar7 = param_1;
      func_0x00010bfe0640(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar3);
      _objc_release(uVar4);
      bVar1 = false;
      if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
         (bVar1 = false, !NAN(dVar7) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
        bVar1 = dVar7 == *(double *)(PTR__CGSizeZero_110347620 + 8);
      }
      if (!bVar1) {
        puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c2971c0(param_1,dVar7,PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar6);
      }
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x0001085440bc();
      func_0x00010c0df840(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar6);
      puVar6 = puVar2;
      func_0x00010bf51e00(puVar2);
      (**(code **)(param_7 + 0x10))(param_7,puVar6,PTR____NSDictionary0__struct_11034ab58);
      _objc_release(puVar6);
      _objc_release(puVar2);
    }
    _objc_release(uVar5);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f7bd44; end: 104f7c207; -[SCChatMediaPlaybackPlugin initWithConversationId:isLockedConversation:userId:messageType:mediaType:isMixedMediaPlayback:loggingSource:playbackSource:presentingUiContainer:cachedSummaryInfoProvider:contentDelivery:conversationActionHandler:imageDownloader:notificationPool:musicContentRestrictionServices:playbackGrapheneLogger:reportDelegate:circumstanceEngine:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:featureSettingsService:messagingExperimentService:logger:lensPrefetchingFactory:snapProIdValidity:] */

undefined8 *
FUN_104f7bd44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
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
  puStack_70 = PTR_PTR_1126e5478;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 2) = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar1[4] = param_6;
    puVar1[5] = param_7;
    *(undefined1 *)(puVar1 + 0x1c) = param_8;
    puVar1[6] = param_9;
    puVar1[7] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[10];
    puVar1[10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_18;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_19);
    _objc_retain(param_20);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_27;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2d40;
    _objc_alloc();
    func_0x00010c0031e0();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_24);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_24);
  }
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
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f7c208; end: 104f7c263;  */

void FUN_104f7c208(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c070100();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f7c264; end: 104f7c26f; -[SCChatMediaPlaybackPlugin setPlaylistItemController:] */

void FUN_104f7c264(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 104f7c270; end: 104f7c27b; -[SCChatMediaPlaybackPlugin setOperaControlling:] */

void FUN_104f7c270(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 104f7c27c; end: 104f7c5bb; -[SCChatMediaPlaybackPlugin dependentPlugins] */

void FUN_104f7c27c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d48;
  _objc_alloc();
  func_0x00010c005120();
  puVar2 = PTR_PTR_1126b2d50;
  puStack_d0 = puVar1;
  _objc_alloc();
  func_0x00010c004c60();
  puVar3 = PTR_PTR_1126b2d58;
  puStack_c8 = puVar2;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126b2d60;
  puStack_c0 = puVar3;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126b2d68;
  puStack_b8 = puVar4;
  _objc_alloc();
  func_0x00010c004e80();
  puVar6 = PTR_PTR_1126b2d70;
  puStack_b0 = puVar5;
  _objc_alloc();
  func_0x00010c004c00();
  puVar7 = PTR_PTR_1126b2d78;
  puStack_a8 = puVar6;
  _objc_alloc();
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar17 = *(undefined8 *)(param_1 + 0x58);
  uVar18 = *(undefined8 *)(param_1 + 0xb0);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  lVar14 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar14);
  func_0x00010c004ca0(puVar7,param_2,uVar15,uVar17,uVar18,uVar16,lVar14,
                      *(undefined8 *)(param_1 + 0x78));
  puVar8 = PTR_PTR_1126b2d80;
  puStack_a0 = puVar7;
  _objc_alloc();
  func_0x00010bffaac0();
  puVar9 = PTR_PTR_1126b2d88;
  puStack_98 = puVar8;
  _objc_alloc();
  func_0x00010c0053e0();
  puVar10 = PTR_PTR_1126b2d90;
  puStack_90 = puVar9;
  _objc_alloc();
  func_0x00010c004cc0();
  puVar11 = PTR_PTR_1126b2d98;
  puStack_88 = puVar10;
  _objc_alloc();
  func_0x00010c0253e0();
  puVar12 = PTR_PTR_1126b2da0;
  puStack_80 = puVar11;
  _objc_opt_new();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,0xc);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar14);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2da8;
  _objc_alloc();
  func_0x00010c004c80();
  puVar2 = puVar13;
  func_0x00010c0d3c80();
  puVar3 = puVar1;
  func_0x00010befa120();
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    puVar4 = PTR_PTR_1126b2db0;
    _objc_alloc();
    func_0x00010c02b8c0();
    puVar3 = puVar4;
    func_0x00010befa120(puVar2);
    _objc_release(puVar4);
  }
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b23c0;
    _objc_retain(puVar3);
    func_0x00010c0ea1a0(puVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0da1c0();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c2b48a0(puVar2,param_2,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010c2bd1e0(puVar2,param_2,
                        (uint)(*(long *)(puVar1 + 0x20) != 2) &
                        ((uint)(0x15 < *(ulong *)(puVar1 + 0x28)) |
                        0x94fU >> (ulong)((uint)*(ulong *)(puVar1 + 0x28) & 0x1f)));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9060(puVar2,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c2b33a0(puVar2,param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8100(puVar2,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ae960(puVar2,param_2,(*(ulong *)(puVar1 + 0x20) & 0xfffffffffffffffe) != 2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a75e0(puVar2,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2afd20(puVar2,param_2,2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b5480(puVar2,param_2,0xb7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (((puVar1[0xe0] & 1) != 0) || (lVar14 = *(long *)(puVar1 + 0x20), lVar14 == 4)) {
      func_0x00010c2b5ea0(puVar2,param_2,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b4880(puVar2,param_2,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar14 = *(long *)(puVar1 + 0x20);
    }
    if ((lVar14 == 0) && ((puVar1[0xe0] & 1) == 0)) {
      func_0x00010c2b5b80(puVar2,param_2,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf414e0(0x3fc3333333333333);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b2db8;
    _objc_alloc(PTR_PTR_1126b2db8);
    func_0x00010c0328e0(0x4059000000000000);
    func_0x00010c2a9040(puVar2,param_2,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f7c5bc; end: 104f7c823; -[SCChatMediaPlaybackPlugin updateOperaConfiguration:] */

void FUN_104f7c5bc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b23c0;
  _objc_retain(param_3);
  func_0x00010c0ea1a0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c0da1c0();
  _objc_release(param_3);
  if (lVar5 == 0) {
    func_0x00010c2b48a0(puVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c2bd1e0(puVar1,param_2,
                      (uint)(*(long *)(param_1 + 0x20) != 2) &
                      ((uint)(0x15 < *(ulong *)(param_1 + 0x28)) |
                      0x94fU >> (ulong)((uint)*(ulong *)(param_1 + 0x28) & 0x1f)));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9060(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2b33a0(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8100(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ae960(puVar1,param_2,(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffe) != 2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a75e0(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afd20(puVar1,param_2,2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5480(puVar1,param_2,0xb7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (((*(byte *)(param_1 + 0xe0) & 1) != 0) || (lVar5 = *(long *)(param_1 + 0x20), lVar5 == 4)) {
    func_0x00010c2b5ea0(puVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b4880(puVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x20);
  }
  if ((lVar5 == 0) && ((*(byte *)(param_1 + 0xe0) & 1) == 0)) {
    func_0x00010c2b5b80(puVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fc3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2db8;
  _objc_alloc(PTR_PTR_1126b2db8);
  func_0x00010c0328e0(0x4059000000000000);
  func_0x00010c2a9040(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f7c824; end: 104f7c827; -[SCChatMediaPlaybackPlugin extraPropertiesProvider] */

void FUN_104f7c824(void)

{
  return;
}



/* Entry: 104f7c828; end: 104f7c88b; -[SCChatMediaPlaybackPlugin updateOperaDependencies:] */

void FUN_104f7c828(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b23c8;
  func_0x00010c0ea380(PTR_PTR_1126b23c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aee60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f7c88c; end: 104f7d8b3; -[SCChatMediaPlaybackPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f7c88c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126b2c68;
  if (param_6 == 0) goto LAB_104f7d6e8;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  puVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  puVar3 = param_3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_104f76c8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar6;
  func_0x00010c0c6c20();
  puVar7 = PTR_PTR_1126b2368;
  _objc_opt_new();
  puVar8 = puVar6;
  func_0x00010c0c5180(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b53a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = puVar9;
  func_0x00010c1531a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  FUN_104f76fac();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126b2dc0;
  _objc_alloc();
  puVar14 = puVar4;
  func_0x00010bf026e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010b62cb88(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff20();
  _objc_release(puVar11);
  _objc_release(puVar14);
  func_0x00010c1d0640(puVar7);
  puVar14 = puVar4;
  func_0x00010bf4d6e0();
  if (puVar14 == (undefined *)0x4) {
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_104f7d8b4;
    uStack_a8 = 0x104f7d8c4;
    uStack_a0 = 0;
    puVar14 = puVar4;
    puStack_c0 = &uStack_c8;
    puStack_90 = &uStack_98;
    func_0x00010c0cb340(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_104f7d8cc;
    puStack_e0 = &UNK_11085eb50;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x104f7d918;
    puStack_108 = &UNK_11085ea40;
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    uStack_138 = 0x104f7d948;
    puStack_130 = &UNK_11085ea70;
    puStack_128 = &uStack_98;
    puStack_100 = &uStack_98;
    puStack_d8 = &uStack_98;
    puStack_d0 = &uStack_c8;
    func_0x00010c0bfe80();
    _objc_release(puVar14);
    func_0x00010c1d0640(puVar7);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0c6c20(puVar6);
    func_0x0001085439dc();
    func_0x00010c0df780(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar14);
    puVar14 = puVar4;
    func_0x00010c0efbe0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar14;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    if (puVar11 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar7);
    }
    func_0x00010c1d0640(puVar7);
    puVar14 = puVar6;
    func_0x00010c0c6c20();
    if (puVar14 < (undefined *)0x16) {
      if ((1L << ((ulong)puVar14 & 0x3f) & 0x363e36U) == 0) {
        if ((1L << ((ulong)puVar14 & 0x3f) & 0x9c081U) == 0) {
          if (puVar14 == (undefined *)0x3) {
            func_0x00010c1d0640(puVar7);
            puVar22 = puVar6;
            func_0x00010c0c5180(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = (undefined *)0x1;
            func_0x0001085436d4(1,puVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            goto LAB_104f7d1b4;
          }
        }
        else {
          func_0x00010c1d0640(puVar7);
          puVar14 = puVar6;
          func_0x00010c0c5180(puVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = 1;
          func_0x0001085436d4(1,puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(uVar12);
          _objc_release(puVar14);
          iVar2 = 2;
          func_0x000100029b9c(2,0x11,0,0);
          if ((iVar2 != 0) &&
             (puVar14 = PTR_PTR_1126b2dc8, func_0x00010c06dc40(), (int)puVar14 != 0)) {
            puVar22 = PTR_PTR_1126b2dd0;
            _objc_alloc(PTR_PTR_1126b2dd0);
            puVar14 = puVar6;
            func_0x00010c0c5180(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar6;
            func_0x00010c0c5180(puVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = 1;
            func_0x0001085436d4(1,puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c029500(puVar22);
            _objc_release(uVar12);
            _objc_release(puVar13);
            _objc_release(puVar14);
            puVar14 = puVar7;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
            _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
            puVar15 = puVar14;
            _objc_opt_isKindOfClass(puVar14,puVar13);
            puVar13 = puVar14;
            if (((ulong)puVar15 & 1) == 0) {
              puVar13 = (undefined *)0x0;
            }
            _objc_retain(puVar13);
            _objc_release(puVar14);
            puVar14 = PTR____NSArray0__struct_11034ab48;
            if (puVar13 != (undefined *)0x0) {
              puVar14 = puVar13;
            }
            _objc_retain(puVar14);
            _objc_release(puVar13);
            puVar13 = puVar14;
            func_0x00010bf09f60(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            goto LAB_104f7d1ac;
          }
        }
      }
      else {
        func_0x00010c1d0640(puVar7);
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(0x4026000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar14);
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        FUN_104f6ebec(puVar6);
        func_0x00010c0df6e0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar14);
        puVar14 = puVar6;
        func_0x00010c0c5180(puVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = 3;
        func_0x0001085436d4(3,puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(uVar12);
        _objc_release(puVar14);
        puVar13 = *(undefined **)(param_1 + 0x48);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar6;
        func_0x00010c0c5180(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar13;
        func_0x00010c29bc40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar13);
        if (puVar22 != (undefined *)0x0) {
          func_0x00010c1d0640(puVar7);
        }
        func_0x00010c1d0640(puVar7);
        iVar2 = 2;
        func_0x000100029b9c(2,0x11,0,0);
        if ((iVar2 != 0) && (puVar14 = PTR_PTR_1126b2dc8, func_0x00010c06dc40(), (int)puVar14 != 0))
        {
          puVar13 = puVar6;
          func_0x00010c0c5180(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = (undefined *)0x3;
          func_0x0001085436d4(3,puVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          puVar13 = PTR_PTR_1126b2dd0;
          puVar15 = puVar6;
          if (puVar22 == (undefined *)0x0) {
            _objc_alloc(PTR_PTR_1126b2dd0);
            func_0x00010c0c5180(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c029500(puVar13);
          }
          else {
            _objc_alloc();
            func_0x00010c0c5180(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c029520(puVar13);
          }
          _objc_release(puVar15);
          puVar16 = puVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
          puVar17 = puVar16;
          _objc_opt_isKindOfClass(puVar16,puVar15);
          puVar15 = puVar16;
          if (((ulong)puVar17 & 1) == 0) {
            puVar15 = (undefined *)0x0;
          }
          _objc_retain(puVar15);
          _objc_release(puVar16);
          puVar16 = PTR____NSArray0__struct_11034ab48;
          if (puVar15 != (undefined *)0x0) {
            puVar16 = puVar15;
          }
          _objc_retain(puVar16);
          _objc_release(puVar15);
          puVar15 = puVar16;
          func_0x00010bf09f60(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar15);
          _objc_release(puVar16);
LAB_104f7d1ac:
          _objc_release(puVar13);
LAB_104f7d1b4:
          _objc_release(puVar14);
        }
        _objc_release(puVar22);
      }
    }
    puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar18 = puStack_c0[5];
    if ((lVar18 != 0) && (*(char *)(puStack_90 + 3) == '\x01')) {
      func_0x00010c14ba60();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010bf4b900();
      _objc_release(lVar18);
      ppuVar20 = &PTR____CFConstantStringClassReference_110dbdd38;
      if ((int)lVar19 == 0) {
        ppuVar20 = &PTR____CFConstantStringClassReference_110dbdd58;
      }
      func_0x00010bcbeaa8(ppuVar20,0);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR_PTR_1126b2dd8;
      _objc_alloc(PTR_PTR_1126b2dd8);
      func_0x00010c056260();
      func_0x00010befa120(puVar14);
      _objc_release(puVar22);
      _objc_release(ppuVar20);
    }
    if ((puVar10 < (undefined *)0x12) && ((1L << ((ulong)puVar10 & 0x3f) & 0x32c04U) != 0)) {
      puVar22 = puVar4;
      func_0x00010c0cb8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar22;
      func_0x00010c0720c0();
      _objc_release(puVar22);
      if (((ulong)puVar13 & 1) == 0) {
        puVar22 = PTR_PTR_1126b2dd8;
        _objc_alloc(PTR_PTR_1126b2dd8);
        puVar13 = puVar22;
        func_0x00010b75e404();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c056260(puVar22);
        _objc_release(puVar13);
        func_0x00010befa120(puVar14);
        _objc_release(puVar22);
      }
    }
    puStack_160 = &uStack_168;
    uStack_168 = 0;
    uStack_158 = 0x2020000000;
    uStack_150 = 0;
    puVar22 = puVar3;
    func_0x00010c0f4aa0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf240();
    _objc_release(puVar22);
    if (((((undefined *)0x12 < puVar5 + -3) && (puVar5 != (undefined *)0xffffffffffffffff)) &&
        ((undefined *)0x1b < puVar10 + -0x11)) &&
       ((((undefined *)0xf < puVar10 || ((1L << ((ulong)puVar10 & 0x3f) & 0xe3f3U) == 0)) &&
        (*(char *)(puStack_90 + 3) != '\0')))) {
      puVar10 = PTR_PTR_1126b2dd8;
      _objc_alloc(PTR_PTR_1126b2dd8);
      puVar22 = puVar10;
      func_0x00010723c9d0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056260(puVar10);
      _objc_release(puVar22);
      func_0x00010befa120(puVar14);
      _objc_release(puVar10);
    }
    puVar10 = puVar6;
    func_0x00010c0c6c20();
    puVar22 = puVar3;
    func_0x00010c0f4aa0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(puStack_90 + 3);
    uVar21 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar21;
    func_0x00010c080e80();
    FUN_104f7b260(puVar10,puVar22,uVar1,uVar12);
    _objc_release(uVar21);
    _objc_release(puVar22);
    if ((int)puVar10 != 0) {
      puVar10 = PTR_PTR_1126b2dd8;
      _objc_alloc(PTR_PTR_1126b2dd8);
      puVar22 = puVar10;
      func_0x00010509ac14();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056260(puVar10);
      _objc_release(puVar22);
      func_0x00010befa120(puVar14);
      _objc_release(puVar10);
    }
    puVar10 = puVar14;
    func_0x00010bf529e0();
    if (puVar10 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar7);
      func_0x00010c1d0640(puVar7);
      func_0x00010c1d0640(puVar7);
      func_0x00010c1d0640(puVar7);
      func_0x00010c1d0640(puVar7);
      func_0x00010c1d0640(puVar7);
      puVar10 = puVar14;
      func_0x00010bf51e00(puVar14);
      func_0x00010c1d0640(puVar7);
      _objc_release(puVar10);
    }
    puVar10 = puVar7;
    if (puVar5 + -1 < (undefined *)0x2) {
      uVar21 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar21;
      func_0x00010c07e2e0();
      _objc_release(uVar21);
      if ((int)uVar12 != 0) {
        func_0x00010c1d0640(puVar7);
        func_0x00010c100fa0(PTR_PTR_1126b2de0);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar5);
        func_0x00010c1d0640(puVar7);
        puVar5 = PTR_PTR_1126b2de0;
        func_0x00010befa320(PTR_PTR_1126b2de0);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar5;
        func_0x00010c0d3c80();
        _objc_release(puVar7);
        _objc_release(puVar5);
      }
    }
    puVar5 = puVar10;
    func_0x00010bf51e00(puVar10);
    (**(code **)(param_6 + 0x10))(param_6,puVar5,0);
    _objc_release(puVar5);
    __Block_object_dispose(&uStack_168,8);
    _objc_release(puVar14);
    _objc_release(puVar11);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
    __Block_object_dispose(&uStack_98,8);
    puVar7 = puVar10;
  }
  else {
    func_0x00010c1d0640(puVar7);
    func_0x00010c1d0640(puVar7);
    puVar5 = puVar7;
    func_0x00010bf51e00(puVar7);
    (**(code **)(param_6 + 0x10))(param_6,puVar5,0);
    _objc_release(puVar5);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_104f7d6e8:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f7d8b4; end: 104f7d8cb;  */

void FUN_104f7d8b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f7d8cc; end: 104f7d977;  */

void FUN_104f7d8cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf2c580();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f7d978; end: 104f7d99b;  */

void FUN_104f7d978(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104f7d99c; end: 104f7da7b; -[SCChatMediaPlaybackPlugin registeredEventsForOperaSession] */

void FUN_104f7d99c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar7 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_50 = puVar1;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_48 = puVar2;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)ppuVar7;
  func_0x00010c0720c0(ppuVar7,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)puVar5 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c4dc0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)ppuVar7;
    func_0x00010c0720c0(ppuVar7,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)puVar5 == 0) {
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined1 *)ppuVar7;
      func_0x00010c0720c0(ppuVar7,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)puVar5 == 0) goto LAB_104f7db98;
      uVar6 = *(undefined8 *)(puVar1 + 0x68);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b30e0();
    }
    else {
      uVar6 = *(undefined8 *)(puVar1 + 0x68);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3100();
    }
  }
  else {
    uVar6 = *(undefined8 *)(puVar1 + 0x68);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b30c0();
  }
  _objc_release(uVar6);
LAB_104f7db98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 104f7da7c; end: 104f7dbaf; -[SCChatMediaPlaybackPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f7da7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c0c4dc0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 == 0) goto LAB_104f7db98;
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b30e0();
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3100();
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b30c0();
  }
  _objc_release(uVar2);
LAB_104f7db98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f7dbb0; end: 104f7dccf; -[SCChatMediaPlaybackPlugin .cxx_destruct] */

void FUN_104f7dbb0(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f7dcd0; end: 104f7dd57; -[SCMessagingPlaybackDismissalPlugin initWithActionEvents:] */

undefined1 * FUN_104f7dcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5480;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x00010bec7180(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f7dd58; end: 104f7dd5b; -[SCMessagingPlaybackDismissalPlugin setPlaylistItemController:] */

void FUN_104f7dd58(void)

{
  return;
}



/* Entry: 104f7dd5c; end: 104f7dd67; -[SCMessagingPlaybackDismissalPlugin setOperaControlling:] */

void FUN_104f7dd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 104f7dd68; end: 104f7de23; -[SCMessagingPlaybackDismissalPlugin registeredEventsForOperaSession] */

void FUN_104f7dd68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c13a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_48 = puVar1;
  func_0x00010bf96a00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c13a0c0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar5;
  func_0x00010c0720c0(ppuVar5,param_2,puVar2);
  if ((int)ppuVar4 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf96a00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar5;
    func_0x00010c0720c0(ppuVar5,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)ppuVar4 == 0) goto LAB_104f7debc;
  }
  else {
    _objc_release(puVar2);
  }
  func_0x00010be02260(puVar1);
LAB_104f7debc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 104f7de24; end: 104f7ded3; -[SCMessagingPlaybackDismissalPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f7de24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c13a0c0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf96a00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_104f7debc;
  }
  else {
    _objc_release(puVar1);
  }
  func_0x00010be02260(param_1);
LAB_104f7debc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f7ded4; end: 104f7dfaf; -[SCMessagingPlaybackDismissalPlugin _subscribeToActionEvents:] */

void FUN_104f7ded4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f7dfb0; end: 104f7e09b;  */

void FUN_104f7dfb0(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_104f7e09c;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bd860(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 104f7e09c; end: 104f7e12b;  */

void FUN_104f7e09c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f7e12c;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f7e12c; end: 104f7e157;  */

void FUN_104f7e12c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f7e158; end: 104f7e1e7;  */

void FUN_104f7e158(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f7e1e8;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f7e1e8; end: 104f7e213;  */

void FUN_104f7e1e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f7e214; end: 104f7e24f; -[SCMessagingPlaybackDismissalPlugin _dismiss] */

void FUN_104f7e214(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2cd0;
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf83aa0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f7e250; end: 104f7e2fb; -[SCMessagingPlaybackDismissalPlugin _dismissIfFullScreenIsShown] */

void FUN_104f7e250(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c0834c0();
  if ((int)lVar1 != 0) {
    lVar1 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010be02260(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104f7e2fc; end: 104f7e327; -[SCMessagingPlaybackDismissalPlugin .cxx_destruct] */

void FUN_104f7e2fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104f7e328; end: 104f7e54b; -[SCMessagingPlaybackEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f7e328(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11271807c) = param_1;
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520();
  uVar4 = *(undefined8 *)(param_2 + _DAT_112718080);
  *(undefined **)(param_2 + _DAT_112718080) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_initWeak(auStack_58,param_2);
  puVar2 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f7e54c;
  puStack_68 = &UNK_11085eec0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + _DAT_11271808c);
  *(undefined **)(param_2 + _DAT_11271808c) = puVar2;
  _objc_release(uVar4);
  param_2 = param_2 + _DAT_112718084;
  _objc_loadWeakRetained(param_2);
  lVar3 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104f7e714;
  puStack_90 = &UNK_11085eef0;
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_copyWeak(auStack_b0,auStack_58);
  func_0x00010c0bffe0(lVar3);
  _objc_release(lVar3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104f7e54c; end: 104f7e6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f7e54c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    lVar1 = param_1 + _DAT_112718084;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bdfa0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112718088;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0cbe40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b2de8;
    _objc_alloc(PTR_PTR_1126b2de8);
    func_0x00010c02b9e0();
    _objc_release(lVar4);
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f7e6f0; end: 104f7e713;  */

void FUN_104f7e6f0(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 104f7e714; end: 104f7ea8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f7e714(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar10 = (long)_DAT_112718084;
    lVar2 = lVar1 + lVar10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112718090;
    lVar4 = lVar1 + lVar9;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(param_2);
    puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    if (lVar6 != 0) {
      func_0x00010befa120(puVar8);
    }
    if (param_2 != 0) {
      func_0x00010befa120(puVar8);
    }
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_98 = (undefined **)0xc2000000;
    uStack_90 = 0x104f807b8;
    puStack_88 = &UNK_11085f020;
    puStack_80 = puVar8;
    _objc_retain(puVar8);
    func_0x00010c0bdfa0(lVar3);
    puVar7 = puVar8;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_80);
    _objc_release(puVar8);
    _objc_release(param_2);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar10 = lVar1 + lVar10;
    _objc_loadWeakRetained(lVar10);
    lVar2 = lVar10;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1 + lVar9;
    _objc_loadWeakRetained();
    lVar4 = lVar9;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar2);
    _objc_retain(lVar3);
    _objc_retain(param_2);
    ppuStack_98 = &puStack_a0;
    puStack_a0 = (undefined *)0x0;
    uStack_90 = 0x3032000000;
    puStack_88 = (undefined *)0x104f807cc;
    puStack_80 = (undefined *)0x104f807dc;
    _objc_retain(param_2);
    lVar5 = param_2;
    lStack_78 = param_2;
    func_0x00010c0720c0();
    if ((int)lVar5 != 0) {
      _objc_retain(lVar3);
      func_0x00010c0bdfa0(lVar2);
      _objc_release(lVar3);
    }
    puVar8 = ppuStack_98[5];
    _objc_retain(puVar8);
    __Block_object_dispose(&puStack_a0,8);
    _objc_release(lStack_78);
    _objc_release(param_2);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar9);
    _objc_release(lVar2);
    _objc_release(lVar10);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be14300();
    _objc_release(puVar8);
    _objc_release(param_1);
    _objc_release(puVar7);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104f7ea8c; end: 104f7ead3;  */

void FUN_104f7ea8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be11840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f7ead4; end: 104f7ec9b; -[SCMessagingPlaybackEntryPoint _fetchSnapchattersForParticipants:senderUserId:replyUserId:isCampaignConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f7ead4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  lVar1 = param_1 + _DAT_112718094;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112718080);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_70 = param_6;
  func_0x00010c09d7c0(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f7ec9c; end: 104f7ee1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f7ec9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    if (param_3 == 0) {
      func_0x00010bf529e0(param_2);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lVar11 = (long)_DAT_112718098;
    lVar4 = lVar3 + lVar11;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf1ad00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3 + lVar11;
    _objc_loadWeakRetained(lVar11);
    lVar6 = lVar11;
    func_0x00010bf1c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3 + _DAT_112718090;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    FUN_104f77394(param_2,uVar1,uVar2,lVar5,lVar6,lVar9,*(undefined1 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar11);
    _objc_release(lVar5);
    _objc_release(lVar4);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdd3f20();
    _objc_release(param_1);
    _objc_release(uVar10);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f7ee1c; end: 104f7ef77; -[SCMessagingPlaybackEntryPoint _fetchGroupForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f7ee1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1 + _DAT_11271809c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112718080);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6120(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104f7ef78; end: 104f7efd3;  */

void FUN_104f7ef78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2ca8;
  func_0x00010bfcf5e0(PTR_PTR_1126b2ca8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3f20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f7efd4; end: 104f7f857; -[SCMessagingPlaybackEntryPoint _beginWorkflowWithParticipants:senderUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f7efd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  undefined8 uVar53;
  long lVar54;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_1127180a0) = param_1;
  puVar1 = PTR_PTR_1126b2df0;
  _objc_alloc();
  lVar54 = (long)_DAT_112718084;
  lVar2 = param_2 + lVar54;
  _objc_loadWeakRetained();
  lVar49 = (long)_DAT_112718090;
  lVar3 = param_2 + lVar49;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2 + _DAT_1127180a8;
  _objc_loadWeakRetained();
  lVar7 = param_2 + _DAT_1127180b4;
  _objc_loadWeakRetained();
  lVar8 = param_2 + lVar54;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2 + lVar54;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = (long)_DAT_1127180b8;
  lVar12 = param_2 + lVar50;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_2 + _DAT_1127180bc;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2 + _DAT_1127180c0;
  _objc_loadWeakRetained();
  lVar17 = param_2 + _DAT_1127180c4;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c069180();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_2 + _DAT_1127180c8;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_2 + _DAT_1127180cc;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = (long)_DAT_1127180d0;
  lVar23 = param_2 + lVar51;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c23fa40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_2 + _DAT_1127180d4;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = (long)_DAT_1127180d8;
  lVar28 = param_2 + lVar52;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_2 + _DAT_1127180dc;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bf27540();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_2 + _DAT_1127180e0;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_2 + _DAT_1127180e4;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_2 + _DAT_1127180e8;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_2 + _DAT_1127180ec;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_2 + _DAT_1127180f0;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010bf669c0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_2 + _DAT_1127180f4;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010c095f80();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_2 + _DAT_1127180f8;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010c242780();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_2 + _DAT_1127180fc;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010c291540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036f60();
  uVar53 = *(undefined8 *)(param_2 + _DAT_112718100);
  *(undefined **)(param_2 + _DAT_112718100) = puVar1;
  _objc_release(uVar53);
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
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126b2df8;
  _objc_alloc();
  lVar2 = param_2 + lVar54;
  _objc_loadWeakRetained();
  lVar14 = lVar2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_2 + lVar49;
  _objc_loadWeakRetained();
  lVar12 = lVar49;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar12;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_104f7794c(param_4);
  lVar51 = param_2 + lVar51;
  _objc_loadWeakRetained();
  lVar3 = lVar51;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_2 + lVar52;
  _objc_loadWeakRetained(lVar52);
  lVar7 = lVar52;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_2 + lVar50;
  _objc_loadWeakRetained();
  lVar8 = lVar50;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0055a0();
  uVar53 = *(undefined8 *)(param_2 + _DAT_112718104);
  *(undefined **)(param_2 + _DAT_112718104) = puVar1;
  _objc_release(uVar53);
  _objc_release(lVar8);
  _objc_release(lVar50);
  _objc_release(lVar7);
  _objc_release(lVar52);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar51);
  _objc_release(lVar10);
  _objc_release(lVar12);
  _objc_release(lVar49);
  _objc_release(lVar14);
  _objc_release(lVar2);
  _objc_initWeak(auStack_80,param_2);
  param_2 = param_2 + lVar54;
  _objc_loadWeakRetained();
  lVar2 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104f7f858;
  puStack_a0 = &UNK_11085ef80;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_4);
  func_0x00010c0bdfa0(lVar2);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f7f858; end: 104f7f947;  */

void FUN_104f7f858(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3f00();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f7f948; end: 104f80083; -[SCMessagingPlaybackEntryPoint _beginWorkflowForFriendsFeedWithParticipants:senderUserId:initialViewableSnaps:snapTapLatencyBuilder:isShortcutFilterApplied:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f7f948(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  undefined *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c2b7a60(*(undefined8 *)(param_1 + _DAT_11271807c));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c2b82a0(*(undefined8 *)(param_1 + _DAT_1127180a0));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_initWeak(auStack_70,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2e00;
  _objc_alloc();
  lVar28 = (long)_DAT_112718084;
  lVar4 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_112718090;
  lVar6 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_112718108;
  lVar11 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0d5940();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bfa3a40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11271809c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112718094;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_1127180d0;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c23fa40();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_112718098;
  lVar22 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar24 = lVar32;
  func_0x00010bf1c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_1127180d8;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0055c0();
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar32);
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
  _objc_release(lVar4);
  puVar27 = PTR_PTR_1126b2e08;
  _objc_alloc();
  lVar4 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010beee360();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127180d4;
  _objc_loadWeakRetained();
  lVar25 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar32 = lVar9;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar22 = lVar29;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar22;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar17 = lVar11;
  func_0x00010bf50160();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar15 = lVar30;
  func_0x00010bf50a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008da0();
  _objc_release(lVar15);
  _objc_release(lVar30);
  _objc_release(lVar17);
  _objc_release(lVar11);
  _objc_release(lVar19);
  _objc_release(lVar22);
  _objc_release(lVar29);
  _objc_release(lVar32);
  _objc_release(lVar9);
  _objc_release(lVar25);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  uVar31 = *(undefined8 *)(param_1 + _DAT_112718100);
  lVar4 = param_1 + lVar28;
  _objc_loadWeakRetained(lVar4);
  lVar19 = lVar4;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar28;
  _objc_loadWeakRetained(lVar6);
  lVar17 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_104f800c4();
  lVar9 = param_1 + lVar28;
  _objc_loadWeakRetained(lVar9);
  lVar15 = lVar9;
  func_0x00010c27a700();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar15;
  func_0x00010bf16300();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar22 = param_1;
  func_0x00010c27a700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ffa0();
  func_0x00010bf19300(uVar31);
  _objc_release(lVar22);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar15);
  _objc_release(lVar9);
  _objc_release(lVar17);
  _objc_release(lVar6);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(puVar27);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f80084; end: 104f800c3;  */

void FUN_104f80084(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be19880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f800c4; end: 104f80197;  */

undefined1 FUN_104f800c4(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bffe0(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104f80198; end: 104f8055f; -[SCMessagingPlaybackEntryPoint _beginWorkflowForChatWithParticipants:messageId:messageType:startIndex:isQuoted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f80198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

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
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar1 = PTR_PTR_1126b2e10;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar18 = (long)_DAT_112718084;
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112718090;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112718108;
  lVar9 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf50160();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar11 = lVar19;
  func_0x00010bf50a40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + _DAT_112718104);
  uVar21 = *(undefined8 *)(param_1 + _DAT_11271808c);
  lVar12 = param_1 + _DAT_1127180d8;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005220(puVar1,param_2,lVar3,param_4,param_5,lVar6,param_6,param_3,lVar8,lVar10,lVar11
                      ,uVar20,uVar21,lVar13,*(undefined8 *)(param_1 + _DAT_112718080),(char)param_7)
  ;
  _objc_release(param_4);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar19);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar14 = PTR_PTR_1126b2e18;
  _objc_alloc();
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010beee360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008d80(puVar14,param_2,puVar1,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  uVar20 = 0xa1;
  if (param_7 == 0) {
    uVar20 = 0;
  }
  uVar21 = *(undefined8 *)(param_1 + _DAT_112718100);
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar9 = lVar2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar4);
  lVar19 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar19;
  FUN_104f800c4();
  lVar7 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar7);
  lVar3 = lVar7;
  func_0x00010c27a700();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf16300();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1 + lVar18;
  _objc_loadWeakRetained();
  uVar16 = uVar15;
  func_0x00010c27a700();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c28ffa0();
  func_0x00010bf19300(uVar21,param_2,lVar9,lVar12,param_5,param_3,puVar14,lVar5,uVar17 & 0xff,5,0xc,
                      0xb,uVar20,0x57,0);
  _objc_release(param_3);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f80560; end: 104f805df; -[SCMessagingPlaybackEntryPoint _friendsFeedGraphene] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f80560(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112718088;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb9f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104f805e0; end: 104f807b3; -[SCMessagingPlaybackEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f805e0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127180a8);
  _objc_destroyWeak(param_1 + _DAT_1127180f4);
  _objc_destroyWeak(param_1 + _DAT_1127180ec);
  _objc_destroyWeak(param_1 + _DAT_1127180e8);
  _objc_destroyWeak(param_1 + _DAT_1127180d8);
  _objc_destroyWeak(param_1 + _DAT_1127180b4);
  _objc_storeStrong(param_1 + _DAT_1127180b0,0);
  _objc_storeStrong(param_1 + _DAT_1127180ac,0);
  _objc_storeStrong(param_1 + _DAT_1127180a4,0);
  _objc_destroyWeak(param_1 + _DAT_1127180e4);
  _objc_destroyWeak(param_1 + _DAT_1127180d4);
  _objc_destroyWeak(param_1 + _DAT_1127180f8);
  _objc_destroyWeak(param_1 + _DAT_1127180c0);
  _objc_destroyWeak(param_1 + _DAT_112718098);
  _objc_destroyWeak(param_1 + _DAT_1127180fc);
  _objc_destroyWeak(param_1 + _DAT_112718094);
  _objc_destroyWeak(param_1 + _DAT_1127180c8);
  _objc_destroyWeak(param_1 + _DAT_1127180cc);
  _objc_destroyWeak(param_1 + _DAT_1127180f0);
  _objc_destroyWeak(param_1 + _DAT_1127180e0);
  _objc_destroyWeak(param_1 + _DAT_1127180dc);
  _objc_destroyWeak(param_1 + _DAT_112718108);
  _objc_destroyWeak(param_1 + _DAT_1127180c4);
  _objc_destroyWeak(param_1 + _DAT_11271809c);
  _objc_destroyWeak(param_1 + _DAT_112718088);
  _objc_destroyWeak(param_1 + _DAT_1127180d0);
  _objc_destroyWeak(param_1 + _DAT_1127180bc);
  _objc_destroyWeak(param_1 + _DAT_1127180b8);
  _objc_destroyWeak(param_1 + _DAT_112718090);
  _objc_destroyWeak(param_1 + _DAT_112718084);
  _objc_storeStrong(param_1 + _DAT_112718080,0);
  _objc_storeStrong(param_1 + _DAT_11271808c,0);
  _objc_storeStrong(param_1 + _DAT_112718104,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718100,0);
  return;
}



/* Entry: 104f807b4; end: 104f807e7;  */

void FUN_104f807b4(void)

{
  return;
}



/* Entry: 104f807e8; end: 104f80823;  */

void FUN_104f807e8(long param_1)

{
  undefined8 uVar1;
  long in_x4;
  long lVar2;
  
  if (in_x4 == 0) {
    in_x4 = *(long *)(param_1 + 0x20);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(in_x4);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = in_x4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f80824; end: 104f80843;  */

void FUN_104f80824(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 104f80844; end: 104f808e7; -[SCMessagingPlaybackImageProvider initWithContentDelivery:playbackGrapheneLogger:] */

undefined1 *
FUN_104f80844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5488;
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



/* Entry: 104f808e8; end: 104f80af3; -[SCMessagingPlaybackImageProvider gifDataForKey:completionQueue:completion:] */

void FUN_104f808e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) goto LAB_104f80a9c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f80af4;
  puStack_68 = &UNK_11085a638;
  _objc_retain(param_5);
  uStack_60 = param_5;
  _objc_retain(param_6);
  ppuVar2 = &puStack_80;
  lStack_58 = param_6;
  _objc_retainBlock();
  if (param_4 == 0) {
LAB_104f80990:
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3100();
    _objc_release(uVar3);
    (*(code *)ppuVar2[2])(ppuVar2,0);
  }
  else {
    iVar1 = 1;
    func_0x000107d6fcc4();
    if (iVar1 != 0) goto LAB_104f80990;
    _CACurrentMediaTime();
    _objc_initWeak(auStack_88,param_2);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_88);
    _objc_retain(param_4);
    uStack_90 = param_1;
    _objc_retain(ppuVar2);
    func_0x00010c13e4e0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(ppuVar2);
  _objc_release(lStack_58);
  _objc_release(uStack_60);
LAB_104f80a9c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f80af4; end: 104f80bb3;  */

void FUN_104f80af4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104f80bb4;
    puStack_48 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 104f80bb4; end: 104f80bc3;  */

void FUN_104f80bb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104f80bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104f80bc4; end: 104f80c1b;  */

void FUN_104f80bc4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be00040(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f80c1c; end: 104f80d37; -[SCMessagingPlaybackImageProvider _didRetrieveGifContent:key:startTime:completion:] */

void FUN_104f80c1c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) goto LAB_104f80d0c;
  if (param_4 == 0) {
LAB_104f80ca4:
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    FUN_104f80d38(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3100(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  else {
    iVar1 = 2;
    func_0x000107d6fcc4();
    if (iVar1 != 0) {
      uVar2 = param_5;
      FUN_104f80d38();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) goto LAB_104f80ca4;
    }
    func_0x00010be58b40(param_1,param_2);
  }
  (**(code **)(param_6 + 0x10))(param_6,param_4);
LAB_104f80d0c:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f80d38; end: 104f80dbb;  */

void FUN_104f80d38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf4bb00(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f80dbc; end: 104f80f93; -[SCMessagingPlaybackImageProvider imageForKey:completion:] */

void FUN_104f80dbc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    if (param_4 != 0) {
      iVar1 = 1;
      func_0x000107d6fcc4();
      if (iVar1 == 0) {
        _CACurrentMediaTime();
        _objc_initWeak(auStack_70,param_2);
        uVar2 = *(undefined8 *)(param_2 + 8);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_80,auStack_70);
        _objc_retain(param_4);
        uStack_78 = param_1;
        _objc_retain(param_5);
        func_0x00010c13e4e0(uVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_70);
        goto LAB_104f80f48;
      }
    }
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3100();
    _objc_release(uVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104f80f94;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(lStack_48);
  }
LAB_104f80f48:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f80f94; end: 104f80fa3;  */

void FUN_104f80f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104f80fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104f80fa4; end: 104f80ffb;  */

void FUN_104f80fa4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be00020(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f80ffc; end: 104f812c3; -[SCMessagingPlaybackImageProvider _didRetrieveContent:key:startTime:completion:] */

void FUN_104f80ffc(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  double dStack_90;
  double dStack_88;
  double dStack_80;
  undefined1 auStack_78 [8];
  
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) goto LAB_104f8126c;
  if (param_4 == 0) {
LAB_104f81090:
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    FUN_104f80d38(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3100(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    (**(code **)(param_6 + 0x10))(param_6,0);
    goto LAB_104f8126c;
  }
  iVar1 = 2;
  func_0x000107d6fcc4();
  if (iVar1 != 0) {
    uVar2 = param_5;
    FUN_104f80d38();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) goto LAB_104f81090;
  }
  _CACurrentMediaTime();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  dVar5 = dVar6;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  if (puVar4 == (undefined *)0x0) {
LAB_104f81158:
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    FUN_104f80d38(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3100(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  else {
    iVar1 = 3;
    func_0x000107d6fcc4();
    if (iVar1 != 0) {
      uVar2 = param_5;
      FUN_104f80d38();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) goto LAB_104f81158;
    }
    dVar5 = dVar5 - dVar6;
    dVar6 = dVar5 * 1000.0;
    _CACurrentMediaTime();
    _objc_initWeak(auStack_78,param_2);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104f812c4;
    puStack_b0 = &UNK_11085f100;
    dStack_90 = dVar5;
    _objc_copyWeak(auStack_98,auStack_78);
    dStack_88 = param_1;
    dStack_80 = dVar6;
    _objc_retain(param_6);
    lStack_a0 = param_6;
    _objc_retain(puVar4);
    puStack_a8 = puVar4;
    func_0x0001000d76cc("APPSTORE",&puStack_c8);
    _objc_release(puStack_a8);
    _objc_release(lStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(puVar4);
LAB_104f8126c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f812c4; end: 104f81327;  */

void FUN_104f812c4(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  _CACurrentMediaTime();
  dVar2 = *(double *)(param_2 + 0x38);
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be58b60(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),
                      (param_1 - dVar2) * 1000.0);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000104f81324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 104f81328; end: 104f8139b; -[SCMessagingPlaybackImageProvider _logSnapFetchLatencyForStartTime:imageCreationLatencyMS:mainThreadHopLatencyMS:] */

void FUN_104f81328(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = param_1;
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa160((dVar2 - param_1) * 1000.0,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f8139c; end: 104f813f7; -[SCMessagingPlaybackImageProvider _logSnapFetchLatencyForStartTime:] */

void FUN_104f8139c(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = param_1;
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa140((dVar2 - param_1) * 1000.0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f813f8; end: 104f81427; -[SCMessagingPlaybackImageProvider .cxx_destruct] */

void FUN_104f813f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


