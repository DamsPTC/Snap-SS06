/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006767d0; end: 100676803;  */

void FUN_1006767d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x0001006767c4();
  FUN_100676810(param_2,1,param_4,param_5);
  func_0x0001005edc50();
  func_0x0001005edc5c();
  FUN_10065f1e8();
  FUN_100678c58();
  return;
}



/* Entry: 100676804; end: 10067680f;  */

void FUN_100676804(void)

{
  return;
}



/* Entry: 100676810; end: 100676897;  */

long FUN_100676810(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lStack_38;
  
  FUN_100676804();
  FUN_1006768b0(&lStack_38,param_1,param_4 - param_3 >> 3);
  for (; param_2 = (ulong)((int)param_2 + 1), unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 8) {
    func_0x000100678278(lStack_38,param_2);
    *(long *)(lStack_38 + 0x10) = *(long *)(lStack_38 + 0x10) + 1;
  }
  return lStack_38;
}



/* Entry: 100676898; end: 1006768af;  */

void FUN_100676898(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  if (param_3 != 0) {
    func_0x000107c60c84();
    func_0x000107c60c58();
    while (param_3 = param_3 + -1, param_3 != 0) {
      func_0x000107c60c58();
    }
  }
  return;
}



/* Entry: 1006768b0; end: 10067692f;  */

void FUN_1006768b0(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100676898();
  FUN_1006769bc();
  func_0x0001006769c4();
  func_0x0001006769d0();
  func_0x000100678230();
  func_0x000100678238();
  FUN_100678250();
  *param_1 = &PTR_DAT_110a7d6f8;
  *unaff_x19 = param_1;
  func_0x0001005eb600();
  FUN_100678270();
  return;
}



/* Entry: 100676930; end: 1006769bb;  */

void FUN_100676930(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    func_0x000107c60c84(param_1,param_2 * 2 + -1);
    func_0x000107c60c58(param_1,&UNK_10f82f721);
    while (param_2 = param_2 + -1, param_2 != 0) {
      func_0x000107c60c58(param_1,&UNK_10f82f723);
    }
  }
  return;
}



/* Entry: 1006769bc; end: 1006769ef;  */

void FUN_1006769bc(void)

{
  func_0x0001005d4650();
  return;
}



/* Entry: 1006769f0; end: 100676b4b;  */

void FUN_1006769f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104349d8;
  func_0x000107c613fc(&UNK_1104349d8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  puStack_70 = &UNK_100c7dd64;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100c7dd2c;
  puStack_78 = &UNK_1104349f0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  FUN_100236800(0);
  func_0x000107c610f8();
  FUN_100676b64(puVar1,uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 100676b4c; end: 100676b63;  */

void FUN_100676b4c(long param_1,long param_2)

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



/* Entry: 100676b64; end: 100676b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100676b64(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113043c58) = param_1;
  FUN_100236800();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100676ba0; end: 100676ba7;  */

void FUN_100676ba0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100676ba8; end: 100676be3;  */

void FUN_100676ba8(void)

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



/* Entry: 100676be4; end: 100676beb;  */

void FUN_100676be4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100676bec; end: 100676d1f; -[SCNetworkApiRouter initWithNetworkApi:networkDeps:networkCallbackDelegate:] */

undefined1 *
FUN_100676bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112705ef8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b7f08;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_5);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126dfda0;
    func_0x000107c610f4();
    func_0x000107c45498();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100676d20; end: 10067719f; -[SCNativeRetryABConfigProvider initWithABConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100676d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar9;
  undefined1 auStack_230 [8];
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puStack_138 = PTR_PTR_112705ee0;
  puVar9 = &uStack_140;
  uStack_140 = param_1;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  if (puVar9 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    if (lRam00000001137f4418 != -1) {
      FUN_10002a2fc(0x1137f4418,&PTR___NSConcreteGlobalBlock_110ccba80);
    }
    unaff_x21 = param_3;
    func_0x000107c412d4();
    func_0x000107c61180();
    unaff_x22 = (undefined8 *)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    puVar1 = PTR____NSDictionary0__struct_11034ab58;
    if (unaff_x22 != (undefined8 *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      puVar2 = unaff_x22;
      func_0x000107c6115c(unaff_x22,puVar1);
      puVar1 = PTR____NSDictionary0__struct_11034ab58;
      if (((ulong)puVar2 & 1) != 0) {
        uStack_178 = unaff_x21;
        puStack_170 = puVar9;
        uStack_168 = param_3;
        func_0x000107c61174(unaff_x22);
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x000107c61160();
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        puVar9 = puRam00000001137f4420;
        puStack_160 = puVar1;
        func_0x000107c3db60();
        func_0x000107c61180();
        puStack_158 = puVar9;
        func_0x000107c4080c();
        puStack_148 = puVar9;
        if (puVar9 != (undefined8 *)0x0) {
          lStack_150 = *plStack_120;
          do {
            puVar9 = (undefined8 *)0x0;
            do {
              if (*plStack_120 != lStack_150) {
                func_0x000107c61128(puStack_158);
              }
              puVar2 = puRam00000001137f4420;
              func_0x000107c4d9e8(puRam00000001137f4420);
              func_0x000107c61180();
              puVar3 = unaff_x22;
              func_0x000107c4d9c0();
              func_0x000107c61180();
              if (puVar3 == (undefined8 *)0x0) {
LAB_1006770c0:
                func_0x000107c61170(puVar2);
              }
              else {
                puVar4 = puRam00000001137f4420;
                func_0x000107c4d9e8(puRam00000001137f4420);
                func_0x000107c61180();
                puVar5 = unaff_x22;
                func_0x000107c4d9c0();
                func_0x000107c61180();
                puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                puVar6 = puVar5;
                func_0x000107c6115c(puVar5,puVar1);
                func_0x000107c61170(puVar5);
                func_0x000107c61170(puVar4);
                func_0x000107c61170(puVar3);
                func_0x000107c61170(puVar2);
                if (((ulong)puVar6 & 1) != 0) {
                  puVar3 = puRam00000001137f4420;
                  func_0x000107c4d9e8(puRam00000001137f4420);
                  func_0x000107c61180();
                  puVar2 = unaff_x22;
                  func_0x000107c4d9e8();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar3);
                  puVar3 = puVar2;
                  func_0x000107c4d9e8();
                  func_0x000107c61180();
                  puVar4 = puVar3;
                  func_0x000107c49d0c();
                  func_0x000107c61170(puVar3);
                  if (((ulong)puVar4 & 1) == 0) {
                    puVar3 = puVar2;
                    func_0x000107c4d9e8();
                    func_0x000107c61180();
                    puVar4 = puVar3;
                    func_0x000107c49d0c();
                    func_0x000107c61170(puVar3);
                    if (((ulong)puVar4 & 1) == 0) {
                      puVar3 = puVar2;
                      func_0x000107c4d9e8();
                      func_0x000107c61180();
                      func_0x000107c49d0c();
                      func_0x000107c61170(puVar3);
                    }
                  }
                  puVar1 = PTR_PTR_1126dfd60;
                  func_0x000107c610f4(PTR_PTR_1126dfd60);
                  puVar3 = puVar2;
                  func_0x000107c4d9e8(puVar2);
                  func_0x000107c61180();
                  func_0x000107c49804();
                  puVar4 = puVar2;
                  func_0x000107c4d9e8(puVar2);
                  func_0x000107c61180();
                  func_0x000107c49804();
                  func_0x000107c483e4(puVar1);
                  func_0x000107c56bd8(puStack_160);
                  func_0x000107c61170(puVar1);
                  func_0x000107c61170(puVar4);
                  func_0x000107c61170(puVar3);
                  goto LAB_1006770c0;
                }
              }
              puVar9 = (undefined8 *)((long)puVar9 + 1);
            } while (puStack_148 != puVar9);
            puVar9 = puStack_158;
            func_0x000107c4080c();
            puStack_148 = puVar9;
          } while (puVar9 != (undefined8 *)0x0);
        }
        func_0x000107c61170(puStack_158);
        func_0x000107c61170(unaff_x22);
        puVar9 = puStack_170;
        param_3 = uStack_168;
        unaff_x21 = uStack_178;
        puVar1 = puStack_160;
      }
    }
    func_0x000107c61170(unaff_x22);
    func_0x000107c61170(unaff_x21);
    func_0x000107c61170(param_3);
    uVar7 = puVar9[1];
    puVar9[1] = puVar1;
    func_0x000107c61170(uVar7);
  }
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar9;
  }
  func_0x000107c60e78();
  pcStack_188 = FUN_1006771a0;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3318;
  ppuStack_1e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3330;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dae2d8;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110ec3958;
  ppuStack_1d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3348;
  ppuStack_1d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3360;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110f5f998;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f5f9b8;
  ppuStack_1c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3378;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f5f9d8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x000107c419ac();
  func_0x000107c61180();
  puVar2 = puRam00000001137f4420;
  puRam00000001137f4420 = (undefined8 *)puVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    func_0x000107c60e78();
    pcStack_1f8 = FUN_100677280;
    puStack_220 = unaff_x22;
    uStack_218 = unaff_x21;
    uStack_210 = param_3;
    puStack_208 = puVar9;
    ppuStack_200 = &puStack_190;
    func_0x000107c61144(&uStack_228,puVar2);
    puVar1 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_230,&uStack_228);
    func_0x000107c3e4fc(puVar1);
    func_0x000107c61180();
    puVar8 = PTR_PTR_1126c7c58;
    func_0x000107c610f4(PTR_PTR_1126c7c58);
    func_0x000107c4783c();
    uVar7 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273efc4);
    }
    func_0x000107c61174(uVar7);
    func_0x000107c42c20(uVar7);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar1);
    func_0x000107c61120(auStack_230);
    puVar9 = &uStack_228;
    func_0x000107c61120(puVar9);
    return puVar9;
  }
  return puVar2;
}



/* Entry: 1006771a0; end: 10067727f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006771a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3318;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3330;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dae2d8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110ec3958;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3348;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3360;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f5f998;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f5f9b8;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3378;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f5f9d8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_68,5);
  func_0x000107c61180();
  lVar2 = (long)puRam00000001137f4420;
  puRam00000001137f4420 = puVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61144(auStack_a8,lVar2);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_b0,auStack_a8);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c7c58;
  func_0x000107c610f4(PTR_PTR_1126c7c58);
  func_0x000107c4783c();
  uVar4 = 0;
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_11273efc4);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c42c20(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61120(auStack_a8);
  return;
}



/* Entry: 100677280; end: 100677397; -[SCCameraSnapModelServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100677280(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c7c58;
  func_0x000107c610f4(PTR_PTR_1126c7c58);
  func_0x000107c4783c();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273efc4);
  }
  func_0x000107c61174(uVar3);
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100677398; end: 10067740b; -[SCCameraSnapModelServices initWithModel:] */

undefined1 * FUN_100677398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8490;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10067740c; end: 10067744f;  */

void FUN_10067740c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100677450; end: 100677457;  */

void FUN_100677450(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100677458; end: 1006774ab;  */

void FUN_100677458(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006774ac; end: 1006774b7;  */

void FUN_1006774ac(void)

{
  long unaff_x20;
  
  FUN_1006774b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 1006774b8; end: 10067790f;  */

void FUN_1006774b8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
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
  func_0x0001005c6c20();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126abcc8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef19da0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  lVar11 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0db9e0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar11 != 0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(long *)(param_2 + 0x48) = lVar11;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100677910);
  (*pcVar1)();
}



/* Entry: 100677910; end: 10067796f; -[SCNetworkRequestRetryTuneParam initWithRetryAttempt:retryIntervalInMillis:retryPolicy:] */

void FUN_100677910(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705ee8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(long *)((long)puVar1 + 0x10) = (long)param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 100677970; end: 1006779b3; -[SCNNetworkTypesNetworkApiConfig .cxx_destruct] */

void FUN_100677970(long param_1)

{
  FUN_1006779b4(param_1 + 0x40);
  FUN_1006779b4(param_1 + 0x38);
  FUN_1006779b4(param_1 + 0x30);
  FUN_1006779b4(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1006779b4; end: 1006779bb;  */

void FUN_1006779b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1006779bc; end: 100677c27; -[SCCameraNightModeServiceEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100677b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677bd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100677b9c) */
/* WARNING: Removing unreachable block (ram,0x000100677b8c) */
/* WARNING: Removing unreachable block (ram,0x000100677b7c) */
/* WARNING: Removing unreachable block (ram,0x000100677b6c) */
/* WARNING: Removing unreachable block (ram,0x000100677b5c) */
/* WARNING: Removing unreachable block (ram,0x000100677b4c) */
/* WARNING: Removing unreachable block (ram,0x000100677b3c) */
/* WARNING: Removing unreachable block (ram,0x000100677bd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006779bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c8268;
  func_0x000107c610f4(PTR_PTR_1126c8268);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11273fb54;
    func_0x000107c61148();
  }
  func_0x000107c3f0fc();
  func_0x000107c61180();
  lVar2 = param_1;
  FUN_1006780e8();
  func_0x000107c61180();
  func_0x000107c4008c();
  func_0x000107c61180();
  func_0x000107c4195c();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11273fb5c;
    func_0x000107c61148();
  }
  func_0x000107c41964();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11273fb50;
    func_0x000107c61148();
  }
  func_0x000107c4c168();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11273fb4c;
    func_0x000107c61148(lVar6);
  }
  func_0x000107c3f2a8(lVar6);
  FUN_1006780e8(param_1);
  func_0x000107c61180();
  func_0x000107c4008c();
  func_0x000107c61180();
  func_0x000107c4ae38();
  func_0x000107c61180();
  func_0x000107c45bec(puVar1,param_2,lVar3,lVar2,lVar4,lVar5,lVar6,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100677c28; end: 100677c57; -[SCNNetworkTypesNetworkApiRetryConfiguration .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100677c40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100677c44) */

void FUN_100677c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100677c58; end: 1006780e7; -[SCNetworkApiRouter submitNativeHttpRequest:withRequestTask:] */

/* WARNING: Possible PIC construction at 0x000100677cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100677f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100678054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100678064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100678074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100678084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010067809c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006780ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006780bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006780b0) */
/* WARNING: Removing unreachable block (ram,0x0001006780a0) */
/* WARNING: Removing unreachable block (ram,0x000100678088) */
/* WARNING: Removing unreachable block (ram,0x000100678078) */
/* WARNING: Removing unreachable block (ram,0x000100678068) */
/* WARNING: Removing unreachable block (ram,0x000100678058) */
/* WARNING: Removing unreachable block (ram,0x000100677f30) */
/* WARNING: Removing unreachable block (ram,0x000100677f34) */
/* WARNING: Removing unreachable block (ram,0x000100677f38) */
/* WARNING: Removing unreachable block (ram,0x000100677fc0) */
/* WARNING: Removing unreachable block (ram,0x000100677f3c) */
/* WARNING: Removing unreachable block (ram,0x000100677fc4) */
/* WARNING: Removing unreachable block (ram,0x000100677ef8) */
/* WARNING: Removing unreachable block (ram,0x000100678070) */
/* WARNING: Removing unreachable block (ram,0x000100677f04) */
/* WARNING: Removing unreachable block (ram,0x000100677ec0) */
/* WARNING: Removing unreachable block (ram,0x000100677eb0) */
/* WARNING: Removing unreachable block (ram,0x000100677ea0) */
/* WARNING: Removing unreachable block (ram,0x000100677e90) */
/* WARNING: Removing unreachable block (ram,0x000100677dcc) */
/* WARNING: Removing unreachable block (ram,0x000100677d6c) */
/* WARNING: Removing unreachable block (ram,0x000100677d78) */
/* WARNING: Removing unreachable block (ram,0x000100677db8) */
/* WARNING: Removing unreachable block (ram,0x000100677d00) */
/* WARNING: Removing unreachable block (ram,0x000100677d24) */
/* WARNING: Removing unreachable block (ram,0x000100677f84) */
/* WARNING: Removing unreachable block (ram,0x000100677d30) */
/* WARNING: Removing unreachable block (ram,0x000100677f68) */
/* WARNING: Removing unreachable block (ram,0x000100677f9c) */
/* WARNING: Removing unreachable block (ram,0x000100678098) */
/* WARNING: Removing unreachable block (ram,0x000100677d44) */
/* WARNING: Removing unreachable block (ram,0x000100677ccc) */
/* WARNING: Removing unreachable block (ram,0x0001006780c0) */

void FUN_100677c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c50300(param_4);
  func_0x000107c61180();
  func_0x000107c5d75c(param_1,param_2,param_4);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1006780e8; end: 10067810b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006780e8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11273fb58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10067810c; end: 10067817f; -[SCNetworkApiRouter uploadInMemoryDataProviderFromRequest:] */

void FUN_10067810c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c5d7fc();
  func_0x000107c61180();
  lVar1 = param_3;
  func_0x000107c3ab74();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126dfda8;
    func_0x000107c610f4(PTR_PTR_1126dfda8);
    func_0x000107c4635c();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100678180; end: 100678187; -[SCCameraDeviceSettingsResolverServices deviceSettingsResolver] */

undefined8 FUN_100678180(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100678188; end: 10067818f; -[SCCameraConfigurationImpl lensCameraNightModeConfig] */

undefined8 FUN_100678188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 100678190; end: 100678207;  */

void FUN_100678190(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18) + (*(ulong *)(param_1 + 0x18) >> 1);
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = param_2;
  func_0x000107c60e20();
  FUN_100678208(lVar2,lVar2 + *(long *)(param_1 + 0x10),uVar1);
  *(ulong *)(param_1 + 8) = uVar1;
  *(ulong *)(param_1 + 0x18) = param_2;
  if (lVar2 != param_1 + 0x20) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 100678208; end: 10067824f;  */

undefined1  [16] FUN_100678208(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *puVar1 = *param_1;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 100678250; end: 10067826f;  */

void FUN_100678250(undefined8 *param_1)

{
  FUN_10054bfa4();
  *param_1 = &PTR_DAT_110a7d630;
  return;
}



/* Entry: 100678270; end: 10067827f;  */

void FUN_100678270(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 100678280; end: 100678307; -[SCUploadInMemoryDataProvider initWithData:] */

undefined1 * FUN_100678280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705f18;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dfd50;
    func_0x000107c610f4();
    func_0x000107c46374();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100678308; end: 10067839f; -[SCDataProvider initWithData:isPlatformSafe:] */

undefined1 *
FUN_100678308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e148;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006783a0; end: 100678427; -[SCNetworkApiRouter uploadFilePathFromRequest:] */

void FUN_1006783a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126dfdb0;
  func_0x000107c61158(PTR_PTR_1126dfdb0);
  uVar3 = param_3;
  func_0x000107c6115c(param_3,puVar1);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x000107c5d740(param_3);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c3ceb0();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100678428; end: 100678697; -[SCCameraNightModeActivationHandler initWithCameraHardwareServicesAPI:cameraDeviceSettingsConfiguration:cameraDeviceSettingsResolver:mainCameraViewControllerLifecycleEvents:cameraUsageTier:lensNightModeConfig:] */

undefined8 *
FUN_100678428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  puStack_78 = PTR_PTR_1126efc78;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 1,param_3);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 2,param_5);
    puVar1[10] = param_7;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_88,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_10611c9ac;
    puStack_98 = &UNK_11090f7e8;
    func_0x000107c6111c(auStack_90,auStack_88);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c6111c(auStack_b8,auStack_88);
    uVar2 = param_6;
    func_0x000107c5c320(param_6);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100678698; end: 1006787ff; -[SCUploadDataProvider initWithFilePath:memoryDataProvider:streamDataProvdier:] */

undefined1 *
FUN_100678698(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_112705f10;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    if (((param_3 == 0) && (param_4 == 0)) && (param_5 == 0)) {
      puVar7 = (undefined1 *)0x0;
      goto LAB_1006787c4;
    }
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(long *)((long)puVar2 + 0x10) = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(long *)((long)puVar2 + 0x18) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(long *)((long)puVar2 + 0x20) = param_5;
    func_0x000107c61170(uVar3);
    lVar4 = *(long *)((long)puVar2 + 0x10);
    if (lVar4 != 0) {
      *(undefined8 *)((long)puVar2 + 8) = 0;
    }
    lVar5 = *(long *)((long)puVar2 + 0x18);
    if (lVar5 != 0) {
      *(undefined8 *)((long)puVar2 + 8) = 1;
    }
    lVar6 = *(long *)((long)puVar2 + 0x20);
    if (lVar6 != 0) {
      *(undefined8 *)((long)puVar2 + 8) = 2;
    }
    bVar1 = ((lVar4 != 0) != (lVar5 != 0)) != (lVar6 != 0);
    if (lVar4 != 0) {
      bVar1 = bVar1 && (lVar5 == 0 || lVar6 == 0);
    }
    *(bool *)((long)puVar2 + 0x28) = bVar1;
  }
  func_0x000107c61174(puVar2);
  puVar7 = (undefined1 *)puVar2;
LAB_1006787c4:
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  return puVar7;
}



/* Entry: 100678800; end: 100678807; -[SCUploadDataProvider isValid] */

undefined1 FUN_100678800(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 100678808; end: 10067880f; -[SCNNetworkTypesHttpRequest url] */

undefined8 FUN_100678808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100678810; end: 100678843; -[SCNetworkExecutor init] */

void FUN_100678810(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112705f08;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100678844; end: 100678a23; -[SCHTTPRequestCallback initWithRequestTask:blizzardLogger:grapheneLogger:batteryLogger:networkCallbackDelegate:networkApi:] */

undefined1 *
FUN_100678844(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_112705ef0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  puVar3 = PTR_PTR_1126dfd68;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    func_0x000107c61158(puVar3);
    uVar4 = param_3;
    func_0x000107c6115c(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_3);
    uVar5 = *(undefined8 *)((long)puVar2 + 8);
    *(ulong *)((long)puVar2 + 8) = uVar1;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_3);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x10);
    *(ulong *)((long)puVar2 + 0x10) = param_3;
    func_0x000107c61170(uVar5);
    func_0x000107c611a0((undefined1 *)((long)puVar2 + 0x20),param_7);
    func_0x000107c61174(param_8);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_8;
    func_0x000107c61170(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x58);
    *(undefined **)((long)puVar2 + 0x58) = puVar3;
    func_0x000107c61170(uVar5);
    *(undefined1 *)((long)puVar2 + 0x60) = 0;
    func_0x000107c611a0((undefined1 *)((long)puVar2 + 0x28),param_4);
    func_0x000107c61174(param_5);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = param_5;
    func_0x000107c61170(uVar5);
    func_0x000107c611a0((undefined1 *)((long)puVar2 + 0x38),param_6);
    uVar5 = param_4;
    FUN_100678a24();
    *(byte *)((long)puVar2 + 0x61) = (byte)uVar5 ^ 1;
    puVar6 = (undefined1 *)puVar2;
    func_0x000107c5a1e0();
    puVar7 = (undefined1 *)0x0;
    if ((int)puVar6 == 0) goto LAB_1006789cc;
  }
  func_0x000107c61174(puVar2);
  puVar7 = (undefined1 *)puVar2;
LAB_1006789cc:
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  return puVar7;
}



/* Entry: 100678a24; end: 100678a8f;  */

undefined1 FUN_100678a24(void)

{
  if (lRam00000001137f4668 != -1) {
    FUN_10002a2fc(0x1137f4668,&PTR___NSConcreteGlobalBlock_110ccc618);
  }
  return uRam00000001137f4658;
}



/* Entry: 100678a90; end: 100678aeb;  */

undefined * FUN_100678a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1548;
  func_0x000107c5a9f0(PTR_PTR_1126e1548);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ad18(param_1,param_2);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100678aec; end: 100678bf3; -[SCHTTPRequestCallback setUpDownloadLocation] */

undefined8 FUN_100678aec(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  func_0x000107c50300();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bfb00;
  func_0x000107c61158(PTR_PTR_1126bfb00);
  uVar5 = uVar3;
  func_0x000107c6115c(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar3);
  if (uVar1 != 0) {
    if (lRam00000001137f4428 != -1) {
      FUN_10002a2fc(0x1137f4428,&PTR___NSConcreteGlobalBlock_110ccbaa0);
    }
    uVar2 = uRam00000001137f4430;
    uVar6 = uRam00000001137f4430;
    func_0x000107c61174(uRam00000001137f4430);
    FUN_10011df08();
    func_0x000107c61180();
    uVar7 = uVar2;
    func_0x000107c3ac04();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c56970(uVar3);
  }
  func_0x000107c61170(uVar1);
  return 1;
}



/* Entry: 100678bf4; end: 100678c03;  */

void FUN_100678bf4(void)

{
  return;
}



/* Entry: 100678c04; end: 100678c57;  */

void FUN_100678c04(void)

{
  func_0x0001005edc5c();
  FUN_10065f1e8();
  FUN_100678c58();
  return;
}



/* Entry: 100678c58; end: 100678c63;  */

void FUN_100678c58(void)

{
  FUN_1005ec7e4();
  FUN_100678c88();
  return;
}



/* Entry: 100678c64; end: 100678c87;  */

void FUN_100678c64(void)

{
  FUN_1005ec7e4();
  FUN_100678c88();
  return;
}



/* Entry: 100678c88; end: 100678cb7;  */

void FUN_100678c88(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  FUN_100678cb8();
  return;
}



/* Entry: 100678cb8; end: 100678d23;  */

void FUN_100678cb8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_1c8 [424];
  
  FUN_100636a98();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    FUN_100678ff8(auStack_1c8,*unaff_x19);
    FUN_100656464();
    FUN_10068def8();
    FUN_10068e154(auStack_1c8);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x36) == '\x01') {
    FUN_10068e154();
    *(undefined1 *)(puVar1 + 0x35) = 0;
  }
  return;
}



/* Entry: 100678d24; end: 100678d53; -[SCHTTPRequestCallback setPopulateClientSwitchboardKeyInLogs:] */

void FUN_100678d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100678d54; end: 100678d5b; -[SCHTTPRequestCallback downloadLocation] */

undefined8 FUN_100678d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100678d5c; end: 100678dcf; -[SCCameraNightModeServices initWithActivationHandler:] */

undefined1 * FUN_100678d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fe318;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100678dd0; end: 100678dd3;  */

void FUN_100678dd0(void)

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



/* Entry: 100678dd4; end: 100678deb; -[SCDownloadRequest timeoutInterval] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100678dd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278db10);
}



/* Entry: 100678dec; end: 100678e3f;  */

void FUN_100678dec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100678e40; end: 100678e4f;  */

void FUN_100678e40(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002883d8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  func_0x00010067b2d4(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_10067bec4();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_10067c00c();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 100678e50; end: 100678ff7;  */

void FUN_100678e50(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  FUN_1002883d8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  func_0x00010067b2d4(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_10067bec4();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10067c00c();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100678ff8; end: 1006791db;  */

void FUN_100678ff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 unaff_x20;
  
  FUN_10054c7ec();
  FUN_100638340();
  func_0x000100638350();
  *(undefined8 *)(param_1 + 0x18) = param_2;
  uVar2 = 2;
  uVar1 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = uVar2;
  uVar2 = 3;
  uVar1 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_1 + 0x38) = uVar2;
  uVar2 = 4;
  uVar1 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined1 *)(param_1 + 0x48) = uVar2;
  FUN_1006791dc(param_1 + 0x50);
  FUN_1005ecf0c(param_1 + 200);
  uVar1 = unaff_x20;
  FUN_10054c8f4();
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  func_0x00010063835c();
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  FUN_10068dd8c(param_1 + 0xf0);
  uVar1 = unaff_x20;
  FUN_10068de08();
  *(int *)(param_1 + 0x110) = (int)uVar1;
  *(char *)(param_1 + 0x114) = (char)((ulong)uVar1 >> 0x20);
  uVar2 = 0xb;
  uVar1 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  *(undefined1 *)(param_1 + 0x120) = uVar2;
  uVar1 = unaff_x20;
  FUN_10068de50();
  *(int *)(param_1 + 0x128) = (int)uVar1;
  *(char *)(param_1 + 300) = (char)((ulong)uVar1 >> 0x20);
  uVar2 = 0xd;
  uVar1 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  *(undefined1 *)(param_1 + 0x138) = uVar2;
  uVar1 = unaff_x20;
  func_0x000100622570();
  *(char *)(param_1 + 0x140) = (char)uVar1;
  uVar1 = unaff_x20;
  FUN_10068de98();
  *(int *)(param_1 + 0x144) = (int)uVar1;
  *(char *)(param_1 + 0x148) = (char)((ulong)uVar1 >> 0x20);
  FUN_10061f61c(param_1 + 0x150);
  uVar1 = unaff_x20;
  FUN_10068dee0();
  *(int *)(param_1 + 0x170) = (int)uVar1;
  *(char *)(param_1 + 0x174) = (char)((ulong)uVar1 >> 0x20);
  uVar1 = unaff_x20;
  func_0x000100622570();
  *(char *)(param_1 + 0x178) = (char)uVar1;
  FUN_1006224ec();
  *(int *)(param_1 + 0x17c) = (int)unaff_x20;
  *(char *)(param_1 + 0x180) = (char)((ulong)unaff_x20 >> 0x20);
  FUN_10061f61c(param_1 + 0x188);
  return;
}



/* Entry: 1006791dc; end: 10067920b;  */

void FUN_1006791dc(void)

{
  FUN_1006383b8();
  FUN_1006383f4();
  FUN_10067920c();
  func_0x000100655fd8();
  return;
}



/* Entry: 10067920c; end: 10067925b;  */

void FUN_10067920c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a96180;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  func_0x000100638400();
  FUN_100638458();
  return;
}



/* Entry: 10067925c; end: 100679263;  */

void FUN_10067925c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100679264; end: 1006792b7;  */

void FUN_100679264(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006792b8; end: 1006792c3;  */

void FUN_1006792b8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100212d8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8300;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef25fe0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006792c4; end: 100679577;  */

void FUN_1006792c4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100212d8c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8300;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef25fe0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100679578; end: 10067957f;  */

void FUN_100679578(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100679580; end: 1006795d3;  */

void FUN_100679580(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006795d4; end: 1006795db;  */

void FUN_1006795d4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_10020e180();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1006796c0(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000100679d08();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_100679d30();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006795dc; end: 1006796bf;  */

void FUN_1006795dc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_10020e180();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1006796c0(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000100679d08();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_100679d30();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1006796c0; end: 1006796f7;  */

void FUN_1006796c0(undefined8 param_1)

{
  if (lRam0000000112e93bb8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d3e0c);
  return;
}



/* Entry: 1006796f8; end: 10067984b; +[SCNNetworkHttpRequestConverter rankingSignalsWithRequest:] */

void FUN_1006796f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar5 = PTR_PTR_1126dfd70;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5ce60(param_3);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5d0f0();
  func_0x000107c61180();
  lVar3 = param_3;
  func_0x000107c5ce60(param_3);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4c950();
  func_0x000107c4c954(puVar5,param_2,lVar2,lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar6 = PTR_PTR_1126b7fc8;
  func_0x000107c610f4(PTR_PTR_1126b7fc8);
  lVar1 = param_3;
  func_0x000107c40234(param_3);
  func_0x000107c495d4(puVar6,param_2,lVar1 == 0);
  puVar7 = PTR_PTR_1126dfd70;
  func_0x000107c3ab70(PTR_PTR_1126dfd70,param_2,param_3);
  puVar8 = PTR_PTR_1126b7fd0;
  func_0x000107c610f4(PTR_PTR_1126b7fd0);
  lVar1 = param_3;
  func_0x000107c45210(param_3);
  lVar2 = param_3;
  func_0x000107c4e254(param_3);
  lVar3 = param_3;
  func_0x000107c50434(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c47644(puVar8,param_2,puVar5,puVar6,puVar7,lVar1,lVar2,lVar3);
  func_0x000107c61170(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10067984c; end: 100679853; +[SCNNetworkHttpRequestConverter mediaContextTypeWithRequestType:mediaContextType:] */

undefined8 FUN_10067984c(void)

{
  undefined8 in_x3;
  
  return in_x3;
}



/* Entry: 100679854; end: 100679897;  */

void FUN_100679854(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBOWV_11034d658 + 0x40;
  func_0x000107c61524(param_1,0x100,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 100679898; end: 1006798df; -[SCNMdpCommonDeprecatedRankingSignal initWithWifiOnly:] */

void FUN_100679898(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b900;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1006798e0; end: 100679917; +[SCNNetworkHttpRequestConverter FetchPriorityWithRequest:] */

undefined8 FUN_1006798e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x000107c4f248();
  if (param_3 - 1U < 5) {
    uVar1 = *(undefined8 *)(&UNK_10e56fb48 + (param_3 - 1U) * 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 100679918; end: 10067991f; -[SCRequest importance] */

undefined8 FUN_100679918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100679920; end: 100679927; -[SCRequest pageId] */

undefined4 FUN_100679920(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



/* Entry: 100679928; end: 10067992f; -[SCRequest requestTrigger] */

undefined8 FUN_100679928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100679930; end: 1006799f3; -[SCNMdpCommonRankingSignals initWithMediaContextType:deprecatedRankingSignal:fetchPriority:importance:pageId:trigger:] */

undefined1 *
FUN_100679930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_4);
  puStack_58 = PTR_PTR_11270b910;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined4 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1006799f4; end: 100679ca7; -[SCNetworkApiRouter generateRetryConfig:isProgressiveRequest:] */

void FUN_1006799f4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x000107c61174(param_3);
  puVar4 = param_3;
  func_0x000107c50300();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fbd0();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c50800();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  puVar4 = param_3;
  func_0x000107c50300();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c4c868();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar6 = param_3;
      func_0x000107c50300(param_3);
      func_0x000107c61180();
      puVar5 = puVar6;
      func_0x000107c4c868();
      puVar5 = (undefined *)(ulong)((int)puVar5 - 1);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(puVar4);
    puVar4 = *(undefined **)(param_1 + 0x10);
    puVar6 = param_3;
    func_0x000107c50300(param_3);
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c50438();
    func_0x000107c43288(puVar4,param_2,puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar4 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar6 = param_3;
      func_0x000107c50300();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c49c3c();
      func_0x000107c61170(puVar6);
      if ((int)puVar7 != 0) {
        puVar5 = puVar4;
        func_0x000107c507fc(puVar4);
      }
      puVar6 = puVar4;
      func_0x000107c50824(puVar4);
      puVar7 = puVar4;
      func_0x000107c50818(puVar4);
    }
    puVar1 = param_3;
    func_0x000107c50300();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c50824();
    func_0x000107c61170(puVar1);
    if (puVar2 != (undefined *)0xffffffffffffffff) {
      puVar1 = param_3;
      func_0x000107c50300(param_3);
      func_0x000107c61180();
      puVar6 = puVar1;
      func_0x000107c50824();
      func_0x000107c61170(puVar1);
    }
    puVar1 = param_3;
    func_0x000107c50300();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5081c();
    func_0x000107c61170(puVar1);
    if (puVar2 != (undefined *)0xffffffffffffffff) {
      puVar1 = param_3;
      func_0x000107c50300(param_3);
      func_0x000107c61180();
      puVar7 = puVar1;
      func_0x000107c5081c();
      func_0x000107c61170(puVar1);
    }
    puVar1 = PTR_PTR_1126dfdd0;
    func_0x000107c610f4(PTR_PTR_1126dfdd0);
    puVar2 = param_3;
    func_0x000107c50300(param_3);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c50840();
    func_0x000107c61180();
    func_0x000107c483e8(puVar1,param_2,puVar5,0,puVar6,puVar7,puVar3,0);
    func_0x000107c61170(puVar3);
  }
  else {
    puVar2 = puVar4;
    func_0x000107c3fbd0();
    func_0x000107c61180();
    puVar1 = puVar2;
    func_0x000107c50800();
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100679ca8; end: 100679caf; -[SCRequest maxNumOfRequestAttempts] */

undefined8 FUN_100679ca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 100679cb0; end: 100679d2f; -[SCNativeRetryABConfigProvider fetchRetryTuneParam:] */

void FUN_100679cb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d9e8(uVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100679d30; end: 100679e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100679d30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  puVar1 = &UNK_1104fee30;
  func_0x000107c613fc(&UNK_1104fee30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  FUN_1000285a8(0x112e93b88,&UNK_10da9f590);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  puVar2 = &UNK_1023d839c;
  FUN_1000bdd8c(&UNK_1023d839c,puVar1);
  puVar3 = puVar2;
  FUN_1003a5b88();
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar2);
  FUN_1000285a8(0x112d5ce70,&UNK_10d9238e0);
  func_0x000107c613fc();
  puVar1 = &UNK_1023d83a4;
  FUN_1000bdd8c(&UNK_1023d83a4,0);
  puVar2 = puVar1;
  FUN_1003a5b88();
  func_0x000107c61574(puVar1);
  puVar1 = PTR_PTR_1126aa730;
  func_0x000107c610f8(PTR_PTR_1126aa730);
  func_0x000107c4818c();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 100679e5c; end: 100679e7f;  */

void FUN_100679e5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100679e80; end: 100679ec7; -[SCRequest isDefaultRetryAttempts] */

bool FUN_100679e80(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b4960;
  puVar1 = param_1;
  func_0x000107c50438();
  func_0x000107c44018(puVar2,param_2,puVar1);
  func_0x000107c4c868(param_1);
  return puVar2 == param_1;
}



/* Entry: 100679ec8; end: 100679ecf; -[SCNetworkRequestRetryTuneParam retryAttempt] */

undefined4 FUN_100679ec8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 100679ed0; end: 100679ed7; -[SCNetworkRequestRetryTuneParam retryPolicy] */

undefined8 FUN_100679ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100679ed8; end: 100679edf; -[SCNetworkRequestRetryTuneParam retryIntervalInMillis] */

undefined8 FUN_100679ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100679ee0; end: 100679ee7; -[SCRequest retryPolicy] */

undefined8 FUN_100679ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 100679ee8; end: 100679eef; -[SCRequest retryIntervalInMs] */

undefined8 FUN_100679ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 100679ef0; end: 100679ef7; -[SCRequest retryableResponseStatusCodes] */

undefined8 FUN_100679ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 100679ef8; end: 100679fcb; -[SCNNetworkTypesRetryConfig initWithRetryQuota:retryAttempt:retryPolicy:retryIntervalInMillis:retryableResponseStatusCode:retryTtlMs:] */

undefined1 *
FUN_100679ef8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_11270b8d0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
  }
  func_0x000107c61170(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 100679fcc; end: 10067a217; -[SCNNetworkApiNetworkApi submit:downloadFilePath:rankingSignals:executor:callback:uploadDataProvider:retryConfig:timeoutMillis:bytesConsumptionType:] */

void FUN_100679fcc(long param_1)

{
  ulong uVar1;
  undefined8 in_x7;
  long *plVar2;
  undefined8 in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined1 auStack_188 [80];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [104];
  
  FUN_1005c95b0();
  FUN_1000fba28();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(in_x7);
  func_0x000107c61174(in_stack_00000000);
  func_0x000107c61174(in_stack_00000008);
  plVar2 = *(long **)(param_1 + 0x18);
  FUN_10067a218(auStack_c8);
  FUN_100114864(auStack_e8);
  FUN_10067a8a4(auStack_108);
  FUN_10067a9ac(auStack_118);
  FUN_10067ac34(auStack_128);
  FUN_10067ae8c(auStack_138,in_x7);
  FUN_10067b3a4(auStack_188,in_stack_00000000);
  uVar1 = in_stack_00000008;
  FUN_1004a2160();
  (**(code **)(*plVar2 + 0x10))
            (plVar2,auStack_c8,auStack_e8,auStack_108,auStack_118,auStack_128,auStack_138,
             auStack_188,uVar1 & 0xffffffffff,in_stack_00000010);
  func_0x00010028adfc(auStack_188);
  FUN_10067c884(auStack_138);
  func_0x00010067c8a8(auStack_128);
  func_0x00010067c8cc(auStack_118);
  FUN_1001148fc(auStack_e8);
  FUN_1005ae430(auStack_c8);
  func_0x000107c61170(in_stack_00000008);
  func_0x000107c61170(in_stack_00000000);
  func_0x000107c61170(in_x7);
  func_0x00010066a778();
  func_0x00010066a780();
  func_0x00010066a788();
  func_0x00010066a790();
  FUN_100184a54();
  return;
}



/* Entry: 10067a218; end: 10067a3af;  */

void FUN_10067a218(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c4a8c4(param_2);
  func_0x000107c5d7e8(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(auStack_78);
  func_0x000107c44f58(param_2);
  func_0x000107c61180();
  FUN_10067a3b8(auStack_98);
  uVar2 = param_2;
  func_0x000107c5db4c(param_2);
  uVar3 = param_2;
  func_0x000107c417c4(param_2);
  func_0x000107c61180();
  FUN_1005ac5d8();
  uVar4 = param_2;
  func_0x000107c45274(param_2);
  func_0x000107c42d90(param_2);
  func_0x000107c61180();
  FUN_10067a85c(auStack_a8);
  FUN_1005ad1bc(param_1,uVar1,auStack_78,auStack_98,uVar2,uVar3,uVar4,auStack_a8);
  FUN_1005ad23c(auStack_a8);
  func_0x000107c61170(param_2);
  FUN_1005ae410();
  func_0x0001005ad2a8(auStack_98);
  func_0x0001005ae418();
  func_0x000107c60ca0(auStack_78);
  func_0x0001005ae420();
  func_0x0001005ae428();
  return;
}



/* Entry: 10067a3b0; end: 10067a3b7; -[SCNNetworkTypesHttpRequest httpParams] */

undefined8 FUN_10067a3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


