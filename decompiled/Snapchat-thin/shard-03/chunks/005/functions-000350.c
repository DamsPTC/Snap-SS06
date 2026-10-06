/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029a3278; end: 1029a334f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a3278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112ed2948;
  func_0x000107c61614(unaff_x20 + _DAT_112ed2948,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed2958);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed2960);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2940) = param_1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112ed2950) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffff98,puVar2);
  return;
}



/* Entry: 1029a3350; end: 1029a3373;  */

undefined8 FUN_1029a3350(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1029a3374; end: 1029a33db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a3374(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010038b188();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed2970) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029a33dc; end: 1029a33ff;  */

undefined1  [16] FUN_1029a33dc(void)

{
  return ZEXT816(0x1105790e8);
}



/* Entry: 1029a3400; end: 1029a3497;  */

void FUN_1029a3400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1105791b8;
  func_0x000107c613fc(&UNK_1105791b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029a3498,puVar1);
  return;
}



/* Entry: 1029a3498; end: 1029a35db;  */

void FUN_1029a3498(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_110579200;
  uVar6 = 0x28;
  func_0x000107c613fc(&UNK_110579200,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  pcStack_60 = FUN_1029a388c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_110579218;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000a0a8c(0);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e3a438;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e3a438);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,ppuVar5,uVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c6142c(uVar6);
  *param_1 = puVar4;
  return;
}



/* Entry: 1029a35dc; end: 1029a35eb;  */

undefined1  [16] FUN_1029a35dc(void)

{
  return ZEXT816(0x1105791e0);
}



/* Entry: 1029a35ec; end: 1029a3857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029a35ec(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x68))
            (lVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1)
  ;
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  uVar3 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0d2fc0);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar2);
  func_0x000107c61170(uVar3);
  (**(code **)(lVar9 + 8))(lVar8,lVar1);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  uVar4 = uStack_58;
  func_0x000107c444a4(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar5 = PTR_PTR_1126abbe8;
  func_0x000107c610f8(PTR_PTR_1126abbe8);
  func_0x000107c46bb4();
  func_0x000107c61170(uVar4);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c5b6b8(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000107c61174(puVar2);
  func_0x000100083b20(&lStack_60);
  uVar6 = *(undefined8 *)(lStack_60 + _DAT_113091ad8);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(lStack_60);
  uVar4 = uVar6;
  func_0x000107c5d984(uVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar4;
  func_0x000107c5faec(uVar4);
  func_0x000107c61170(uVar4);
  puVar7 = PTR_PTR_1126abbf0;
  func_0x000107c610f8(PTR_PTR_1126abbf0);
  func_0x000107c61174(puVar5);
  func_0x000107c5fadc(uVar6,lVar1);
  func_0x000107c6142c(lVar1);
  func_0x000107c49124(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  return puVar7;
}



/* Entry: 1029a3858; end: 1029a388b;  */

void FUN_1029a3858(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029a388c; end: 1029a38b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029a388c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x68))
            (lVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1)
  ;
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  uVar3 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0d2fc0);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar2);
  func_0x000107c61170(uVar3);
  (**(code **)(lVar9 + 8))(lVar8,lVar1);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  uVar4 = uStack_58;
  func_0x000107c444a4(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar5 = PTR_PTR_1126abbe8;
  func_0x000107c610f8(PTR_PTR_1126abbe8);
  func_0x000107c46bb4();
  func_0x000107c61170(uVar4);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c5b6b8(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000107c61174(puVar2);
  func_0x000100083b20(&lStack_60);
  uVar6 = *(undefined8 *)(lStack_60 + _DAT_113091ad8);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(lStack_60);
  uVar4 = uVar6;
  func_0x000107c5d984(uVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar4;
  func_0x000107c5faec(uVar4);
  func_0x000107c61170(uVar4);
  puVar7 = PTR_PTR_1126abbf0;
  func_0x000107c610f8(PTR_PTR_1126abbf0);
  func_0x000107c61174(puVar5);
  func_0x000107c5fadc(uVar6,lVar1);
  func_0x000107c6142c(lVar1);
  func_0x000107c49124(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  return puVar7;
}



/* Entry: 1029a38b4; end: 1029a391f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a38b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029a3ca8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed29e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029a3920; end: 1029a398b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a3920(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed29e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029a398c; end: 1029a39eb; -[_TtC42MyEnforcementsScopedFactoryServiceProvider28MyEnforcementsScopedServices init] */

void FUN_1029a398c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyEnforcementsScopedFactoryServiceProvider.MyEnforcementsScopedServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a39b8);
  (*pcVar1)();
}



/* Entry: 1029a39ec; end: 1029a39fb; -[_TtC42MyEnforcementsScopedFactoryServiceProvider28MyEnforcementsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a39ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed29e8));
  return;
}



/* Entry: 1029a39fc; end: 1029a3a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a39fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110579408;
  func_0x000107c613fc(&UNK_110579408,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1029a3d40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1029a3a68; end: 1029a3b03;  */

void FUN_1029a3a68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110579318;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110579318;
  return;
}



/* Entry: 1029a3b04; end: 1029a3b3b;  */

void FUN_1029a3b04(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1029a3b3c; end: 1029a3b43;  */

undefined8 FUN_1029a3b3c(void)

{
  return 0x1b;
}



/* Entry: 1029a3b44; end: 1029a3c77;  */

void FUN_1029a3b44(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110579430;
  func_0x000107c613fc(&UNK_110579430,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029a3d18;
  func_0x00010058fa64(FUN_1029a3d18,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029a3c78; end: 1029a3ca7;  */

undefined ** FUN_1029a3c78(void)

{
  return &PTR_DAT_112ed2e60;
}



/* Entry: 1029a3ca8; end: 1029a3cc7;  */

void FUN_1029a3ca8(void)

{
  func_0x000107c61168(&PTR_PTR_112877678);
  return;
}



/* Entry: 1029a3cc8; end: 1029a3d17;  */

undefined1  [16] FUN_1029a3cc8(void)

{
  return ZEXT816(0x110579368);
}



/* Entry: 1029a3d18; end: 1029a3d3f;  */

void FUN_1029a3d18(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1029a3d40; end: 1029a3d43;  */

void FUN_1029a3d40(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029a3d44; end: 1029a3e33;  */

/* WARNING: Possible PIC construction at 0x0001029a3df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a3e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a3e14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a3e08) */
/* WARNING: Removing unreachable block (ram,0x0001029a3df8) */
/* WARNING: Removing unreachable block (ram,0x0001029a3e18) */

void FUN_1029a3d44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105794b8;
  func_0x000107c613fc(&UNK_1105794b8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112ed2a58;
  func_0x0001000285a8(0x112ed2a58,&UNK_10dafa7e0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029a425c;
  func_0x0001000841fc(FUN_1029a425c,puVar1,uVar2);
  func_0x000100084214(&UNK_10dafa7b0,0x2a,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1029a3e34; end: 1029a3e53;  */

/* WARNING: Possible PIC construction at 0x0001029a3df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a3e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a3e14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a3e08) */
/* WARNING: Removing unreachable block (ram,0x0001029a3df8) */
/* WARNING: Removing unreachable block (ram,0x0001029a3e18) */

void FUN_1029a3e34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_1105794b8;
  func_0x000107c613fc(&UNK_1105794b8,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112ed2a58;
  func_0x0001000285a8(0x112ed2a58,&UNK_10dafa7e0);
  func_0x000107c613fc();
  pcVar8 = FUN_1029a425c;
  func_0x0001000841fc(FUN_1029a425c,puVar6,uVar7);
  func_0x000100084214(&UNK_10dafa7b0,0x2a,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029a3e54; end: 1029a420f;  */

void FUN_1029a3e54(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ed2a60,&UNK_10dafa7e8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1029a533c();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar3 = puVar2;
  FUN_1029a53c8();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029a3b04;
  func_0x0001000823a8(FUN_1029a3b04,0);
  func_0x000100082720("MyEnforcementsScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ed2a68,&UNK_10dafa800);
  puVar5 = &UNK_1105794e0;
  func_0x000107c613fc(&UNK_1105794e0,0x50,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  *(undefined8 *)(puVar5 + 0x40) = param_8;
  *(undefined8 **)(puVar5 + 0x48) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1029a426c;
  func_0x0001000823a8(0x1029a426c,puVar5);
  func_0x000100082720("MyEnforcementsEntryPointWrapperServiceProvider",0x2e,2);
  puVar6 = puVar2;
  FUN_1029a51f0();
  func_0x000100082720("MyEnforcementsScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112ed2a70,&UNK_10dafa7f0);
  puVar5 = &UNK_110579508;
  func_0x000107c613fc(&UNK_110579508,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1029a4280;
  func_0x0001000823a8(0x1029a4280,puVar5);
  func_0x000100082720("MyEnforcementsScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ed29f0,&UNK_10dafa5b0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1029a428c;
  func_0x0001000823a8(0x1029a428c,uVar7);
  func_0x000100082720("MyEnforcementsScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ed29e0,&UNK_10dafa5a0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1029a4294;
  func_0x0001000823a8(0x1029a4294,uVar8);
  func_0x000100082720("MyEnforcementsScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110579530;
  func_0x000107c613fc(&UNK_110579530,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1029a429c;
  func_0x0001000823a8(0x1029a429c,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("MyEnforcementsScopeEntryPointProvider",0x25,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1029a4210; end: 1029a425b;  */

void FUN_1029a4210(void)

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



/* Entry: 1029a425c; end: 1029a42a3;  */

void FUN_1029a425c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112ed2a60,&UNK_10dafa7e8);
  puVar3 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  puVar4 = puVar3;
  FUN_1029a533c();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar5 = puVar4;
  FUN_1029a53c8();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1029a3b04;
  func_0x0001000823a8(FUN_1029a3b04,0);
  func_0x000100082720("MyEnforcementsScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ed2a68,&UNK_10dafa800);
  puVar7 = &UNK_1105794e0;
  func_0x000107c613fc(&UNK_1105794e0,0x50,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar8;
  *(undefined8 *)(puVar7 + 0x20) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar10;
  *(undefined8 *)(puVar7 + 0x30) = uVar1;
  *(undefined8 *)(puVar7 + 0x38) = uVar11;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 **)(puVar7 + 0x48) = puVar5;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar5);
  uVar8 = 0x1029a426c;
  func_0x0001000823a8(0x1029a426c,puVar7);
  func_0x000100082720("MyEnforcementsEntryPointWrapperServiceProvider",0x2e,2);
  puVar9 = puVar4;
  FUN_1029a51f0();
  func_0x000100082720("MyEnforcementsScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112ed2a70,&UNK_10dafa7f0);
  puVar7 = &UNK_110579508;
  func_0x000107c613fc(&UNK_110579508,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar8;
  *(undefined8 **)(puVar7 + 0x18) = puVar3;
  *(undefined8 **)(puVar7 + 0x20) = puVar9;
  *(code **)(puVar7 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(pcVar6);
  uVar10 = 0x1029a4280;
  func_0x0001000823a8(0x1029a4280,puVar7);
  func_0x000100082720("MyEnforcementsScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ed29f0,&UNK_10dafa5b0);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x1029a428c;
  func_0x0001000823a8(0x1029a428c,uVar10);
  func_0x000100082720("MyEnforcementsScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ed29e0,&UNK_10dafa5a0);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x1029a4294;
  func_0x0001000823a8(0x1029a4294,uVar11);
  func_0x000100082720("MyEnforcementsScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_110579530;
  func_0x000107c613fc(&UNK_110579530,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(code **)(puVar7 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar12 = 0x1029a429c;
  func_0x0001000823a8(0x1029a429c,puVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000100082720("MyEnforcementsScopeEntryPointProvider",0x25,2);
  *param_1 = uVar12;
  return;
}



/* Entry: 1029a42a4; end: 1029a4753;  */

void FUN_1029a42a4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_1029a4884();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar8;
  FUN_1029a7218(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar7;
  func_0x0001029a6614();
  *(undefined8 *)(param_2 + 0x10) = uVar9;
  func_0x000107c6157c();
  FUN_1029a6798();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_a0);
  func_0x000107c61574(uVar9);
  *param_1 = param_2;
  return;
}



/* Entry: 1029a4754; end: 1029a47c7;  */

void FUN_1029a4754(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1029a47c8; end: 1029a47cf;  */

undefined8 FUN_1029a47c8(void)

{
  return 0x1b;
}



/* Entry: 1029a47d0; end: 1029a4853;  */

void FUN_1029a47d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1029a48c4,param_2,FUN_1029a48c8,param_2,0x1029a48f0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1029a4854; end: 1029a4883;  */

undefined ** FUN_1029a4854(void)

{
  return &PTR_DAT_112ed2e60;
}



/* Entry: 1029a4884; end: 1029a48a3;  */

void FUN_1029a4884(void)

{
  func_0x000107c61168(&PTR_PTR_112ed2ae0);
  return;
}



/* Entry: 1029a48a4; end: 1029a48c7;  */

undefined1  [16] FUN_1029a48a4(void)

{
  return ZEXT816(0x110579588);
}



/* Entry: 1029a48c8; end: 1029a491b;  */

void FUN_1029a48c8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1029a491c; end: 1029a4957;  */

void FUN_1029a491c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1029a4958();
  func_0x0001000a7f38("MyEnforcementsScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1029a4958; end: 1029a4b43;  */

void FUN_1029a4958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110579b28;
  ppuVar4 = &PTR_DAT_112ed2e60;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ed2b78;
  func_0x0001000285a8(0x112ed2b78,&UNK_10dafa948);
  func_0x0001000a6ee8(&UNK_110579588,"MyEnforcementsEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,FUN_1029a4bb8,param_1,uVar2,&UNK_110579588,&PTR_DAT_112ed2a78);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1105795d8;
  func_0x000107c613fc(&UNK_1105795d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105797d0,"MyEnforcementsScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_1029a4bc0,puVar3,uVar2,&UNK_1105797d0,&PTR_DAT_112ed2c10);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110579600;
  func_0x000107c613fc(&UNK_110579600,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105793a8,"MyEnforcementsScopedServicesScopeInitializationPluginKey",0x38
                      ,2,FUN_1029a4ca8,puVar3,uVar2,&UNK_1105793a8,&PTR_DAT_112ed29f8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ed2b80;
  func_0x0001000285a8(0x112ed2b80,&UNK_10dafa950);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1029a4b44; end: 1029a4bb7;  */

void FUN_1029a4b44(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1029a4ce4;
  func_0x0001000823a8(0x1029a4ce4,param_3);
  func_0x000100082720("MyEnforcementsEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029a4bb8; end: 1029a4bbf;  */

void FUN_1029a4bb8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1029a4ce4;
  func_0x0001000823a8();
  func_0x000100082720("MyEnforcementsEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029a4bc0; end: 1029a4bff;  */

void FUN_1029a4bc0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029a5470(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MyEnforcementsScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029a4c00; end: 1029a4ca7;  */

void FUN_1029a4c00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110579628;
  func_0x000107c613fc(&UNK_110579628,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1029a4cdc;
  func_0x0001000823a8(FUN_1029a4cdc,puVar1);
  func_0x000100082720("MyEnforcementsScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1029a4ca8; end: 1029a4caf;  */

void FUN_1029a4ca8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110579628;
  func_0x000107c613fc(&UNK_110579628,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1029a4cdc;
  func_0x0001000823a8(FUN_1029a4cdc,puVar3);
  func_0x000100082720("MyEnforcementsScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1029a4cb0; end: 1029a4cdb;  */

void FUN_1029a4cb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029a4cdc; end: 1029a4ceb;  */

void FUN_1029a4cdc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110579430;
  func_0x000107c613fc(&UNK_110579430,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029a3d18;
  func_0x00010058fa64(FUN_1029a3d18,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029a4cec; end: 1029a4dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029a4cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1029a5100();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ed2b88) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ed2b90) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a4dc8);
  (*pcVar1)();
}



/* Entry: 1029a4dc8; end: 1029a4e27; -[_TtC30MyEnforcementsScopeGraphBridge45MyEnforcementsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1029a4dc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyEnforcementsScopeGraphBridge.MyEnforcementsScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a4df4);
  (*pcVar1)();
}



/* Entry: 1029a4e28; end: 1029a4e5f; -[_TtC30MyEnforcementsScopeGraphBridge45MyEnforcementsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029a4e44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a4e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a4e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2b88));
  return;
}



/* Entry: 1029a4e60; end: 1029a4e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a4e60(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed2b90),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed2b88));
  return;
}



/* Entry: 1029a4e88; end: 1029a4ea7;  */

void FUN_1029a4e88(void)

{
  func_0x000107c61168(&PTR_PTR_112877738);
  return;
}



/* Entry: 1029a4ea8; end: 1029a4f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029a4ea8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed2bc0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed2bc8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029a4f30);
  (*pcVar2)();
}



/* Entry: 1029a4f30; end: 1029a5017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029a4f30(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed2bc0);
  *(undefined **)(unaff_x20 + _DAT_112ed2bc0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed2bc8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed2bc8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105796f0;
  func_0x000107c613fc(&UNK_1105796f0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1029a501c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1029a5018; end: 1029a5023;  */

void FUN_1029a5018(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029a5024; end: 1029a5083; -[_TtC30MyEnforcementsScopeGraphBridge43MyEnforcementsScopedServicesSaberEntryPoint init] */

void FUN_1029a5024(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyEnforcementsScopeGraphBridge.MyEnforcementsScopedServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a5050);
  (*pcVar1)();
}



/* Entry: 1029a5084; end: 1029a50bb; -[_TtC30MyEnforcementsScopeGraphBridge43MyEnforcementsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a5084(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed2bc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2bc0));
  return;
}



/* Entry: 1029a50bc; end: 1029a50bf;  */

void FUN_1029a50bc(void)

{
  return;
}



/* Entry: 1029a50c0; end: 1029a50df;  */

void FUN_1029a50c0(void)

{
  FUN_1029a4f30();
  return;
}



/* Entry: 1029a50e0; end: 1029a50ff;  */

void FUN_1029a50e0(void)

{
  func_0x000107c61168(&PTR_PTR_112877800);
  return;
}



/* Entry: 1029a5100; end: 1029a51cf;  */

undefined8 FUN_1029a5100(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ed2bf8,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1029a51d0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1029a51d0; end: 1029a51ef;  */

void FUN_1029a51d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128778c8);
  return;
}



/* Entry: 1029a51f0; end: 1029a520b;  */

void FUN_1029a51f0(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed2c00,&UNK_10dafaa08);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029a5278,param_1);
  return;
}



/* Entry: 1029a520c; end: 1029a5277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a520c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1029a51d0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed2c08) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1029a5278; end: 1029a527f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a5278(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1029a51d0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ed2c08) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1029a5280; end: 1029a52cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a5280(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed2c08) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029a52cc; end: 1029a532b; -[_TtC30MyEnforcementsScopeGraphBridge38MyEnforcementsScopeGraphBridgeServices init] */

void FUN_1029a52cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyEnforcementsScopeGraphBridge.MyEnforcementsScopeGraphBridgeServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a52f8);
  (*pcVar1)();
}



/* Entry: 1029a532c; end: 1029a533b; -[_TtC30MyEnforcementsScopeGraphBridge38MyEnforcementsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a532c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed2c08));
  return;
}



/* Entry: 1029a533c; end: 1029a53c7;  */

void FUN_1029a533c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1029a537c,0);
  return;
}



/* Entry: 1029a53c8; end: 1029a53e3;  */

void FUN_1029a53c8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029a5434,param_1);
  return;
}



/* Entry: 1029a53e4; end: 1029a5433;  */

void FUN_1029a53e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1029a5434; end: 1029a5467;  */

void FUN_1029a5434(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1029a5468; end: 1029a546f;  */

undefined8 FUN_1029a5468(void)

{
  return 0x1b;
}



/* Entry: 1029a5470; end: 1029a55e7;  */

void FUN_1029a5470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110579738;
  func_0x000107c613fc(&UNK_110579738,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029a55e8,puVar1);
  return;
}



/* Entry: 1029a55e8; end: 1029a55ef;  */

void FUN_1029a55e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ed2bf8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed2bf8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110579810;
  func_0x000107c613fc(&UNK_110579810,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1029a56bc;
  func_0x00010058fa64(0x1029a56bc,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029a55f0; end: 1029a564b;  */

void FUN_1029a55f0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed2bf8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed2bf8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1029a564c; end: 1029a56c3;  */

undefined ** FUN_1029a564c(void)

{
  return &PTR_DAT_112ed2e60;
}



/* Entry: 1029a56c4; end: 1029a570b; -[SCMyEnforcementsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a56c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2c60;
  func_0x000107c61428(param_1 + _DAT_112ed2c60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029a570c; end: 1029a5763; -[SCMyEnforcementsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a570c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2c60;
  func_0x000107c61428(param_1 + _DAT_112ed2c60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029a5764; end: 1029a57ab; -[SCMyEnforcementsScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a5764(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2c68;
  func_0x000107c61428(param_1 + _DAT_112ed2c68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029a57ac; end: 1029a57b7; -[SCMyEnforcementsScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a57ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2c68;
  func_0x000107c61428(param_1 + _DAT_112ed2c68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029a57b8; end: 1029a57ff; -[SCMyEnforcementsScopeGraphBridgeSaberEntryPoint myEnforcementsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a57b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2c70;
  func_0x000107c61428(param_1 + _DAT_112ed2c70,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029a5800; end: 1029a580b; -[SCMyEnforcementsScopeGraphBridgeSaberEntryPoint setMyEnforcementsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a5800(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2c70;
  func_0x000107c61428(param_1 + _DAT_112ed2c70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029a580c; end: 1029a586b;  */

void FUN_1029a580c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1029a586c; end: 1029a5a27;  */

/* WARNING: Possible PIC construction at 0x0001029a5984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a59a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a59b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a59fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a59bc) */
/* WARNING: Removing unreachable block (ram,0x0001029a59ac) */
/* WARNING: Removing unreachable block (ram,0x0001029a5988) */
/* WARNING: Removing unreachable block (ram,0x0001029a5a00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a586c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c5e1d0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4d358();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1029a4e88();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1029a5100();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a5a28);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ed2b88) = lVar5;
      *(long *)(lVar3 + _DAT_112ed2b90) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1029a5a28; end: 1029a5a4f; -[SCMyEnforcementsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1029a5a28(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029a586c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029a5a50; end: 1029a5a93; -[SCMyEnforcementsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1029a5a50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029a5a94; end: 1029a5c97;  */

void FUN_1029a5a94(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002d;
        if (((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0f2cbb0)) &&
           (func_0x000107c605b8(0xd00000000000002d,0x800000010f0d3450,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MyEnforcementsScopeGraphBridge/SCMyEnforcementsScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x54,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a5c98);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c568f0();
        goto LAB_1029a5b20;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a68c();
  }
LAB_1029a5b20:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1029a5c98; end: 1029a5d43; -[SCMyEnforcementsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1029a5c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1029a5a94(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029a5d44; end: 1029a5dbb; -[SCMyEnforcementsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a5d44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed2c60,0);
  *(undefined8 *)(param_1 + _DAT_112ed2c68) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed2c70) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed2c78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029a5dbc; end: 1029a5def;  */

void FUN_1029a5dbc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029a5df0; end: 1029a5e47; -[SCMyEnforcementsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029a5e1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a5e20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a5df0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed2c60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2c68));
  return;
}



/* Entry: 1029a5e48; end: 1029a5e67;  */

void FUN_1029a5e48(void)

{
  func_0x000107c61168(&PTR_PTR_112877988);
  return;
}



/* Entry: 1029a5e68; end: 1029a5eaf; -[SCMyEnforcementsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a5e68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2ca8;
  func_0x000107c61428(param_1 + _DAT_112ed2ca8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029a5eb0; end: 1029a5f07; -[SCMyEnforcementsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a5eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2ca8;
  func_0x000107c61428(param_1 + _DAT_112ed2ca8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029a5f08; end: 1029a5fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a5f08(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1029a50e0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed2bc0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029a5fe0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed2bc8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed2cb0);
    *(long **)(unaff_x20 + _DAT_112ed2cb0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1029a5fe0; end: 1029a6007; -[SCMyEnforcementsScopedServicesSaberEntryPoint begin] */

void FUN_1029a5fe0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029a5f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029a6008; end: 1029a617f;  */

/* WARNING: Possible PIC construction at 0x0001029a6070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a6108: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a6074) */
/* WARNING: Removing unreachable block (ram,0x0001029a610c) */
/* WARNING: Removing unreachable block (ram,0x0001029a6124) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a6008(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed2cb0);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1029a6180; end: 1029a6187;  */

void FUN_1029a6180(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029a6188; end: 1029a61bb; -[SCMyEnforcementsScopedServicesSaberEntryPoint end] */

void FUN_1029a6188(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029a6008();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029a61bc; end: 1029a62db;  */

void FUN_1029a61bc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "MyEnforcementsScopeGraphBridge/SCMyEnforcementsScopedServicesSaberEntryPoint.swift"
                        ,0x52,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a62dc);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


