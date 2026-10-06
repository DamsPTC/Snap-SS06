/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026c31e4; end: 1026c31f3;  */

void FUN_1026c31e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_1026c3e94();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_60;
  *(undefined8 *)(lVar2 + 0x18) = uStack_58;
  *(undefined8 *)(lVar2 + 0x20) = uStack_68;
  *(undefined8 *)(lVar2 + 0x28) = uStack_70;
  *(undefined8 *)(lVar2 + 0x30) = uStack_78;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105383e8;
  *param_1 = lVar2;
  return;
}



/* Entry: 1026c31f4; end: 1026c35fb;  */

void FUN_1026c31f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 1026c35fc; end: 1026c3793;  */

undefined8 FUN_1026c35fc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uStack_38;
  
  func_0x0001000285a8(0x112ea3480,&UNK_10dac6130);
  uVar1 = param_1;
  func_0x000107c4b93c(param_1);
  func_0x000107c61180();
  uVar7 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105384e8;
  func_0x000107c613fc(&UNK_1105384e8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  uVar6 = 0x112eb5c50;
  func_0x0001000285a8(0x112eb5c50,&UNK_10dacc450);
  puVar3 = (ulong *)0x1026c40b8;
  func_0x0001000bfde0(0x1026c40b8,puVar2,uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c3db8c();
  func_0x000107c61180();
  uVar4 = 0;
  func_0x0001026c40e0(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  uVar6 = uVar4;
  func_0x000101158e5c();
  uVar1 = param_1;
  func_0x000107c5fe10(param_1,uVar4,uVar6);
  func_0x000107c61170(param_1);
  if ((uVar1 & 0xc000000000000001) == 0) {
    uVar7 = *(ulong *)(uVar1 + 0x10);
  }
  else {
    uVar7 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar7 = uVar1;
    }
    func_0x000107c6029c();
  }
  if (uVar7 == 0) {
    func_0x000107c6142c(uVar1);
    uVar6 = 1;
    func_0x00010061b458(1);
  }
  else {
    puVar5 = &uStack_38;
    uStack_38 = uVar1;
    func_0x0001006c71a4(puVar5);
    func_0x000107c6142c(uVar1);
    func_0x000107c61574(puVar3);
    uVar6 = 1;
    func_0x00010061b458(1);
    puVar3 = puVar5;
  }
  func_0x000107c61574(puVar3);
  return uVar6;
}



/* Entry: 1026c3794; end: 1026c3943;  */

code * FUN_1026c3794(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  
  uVar6 = *param_1;
  FUN_1026c3d8c(param_2,auStack_68);
  puVar2 = &UNK_110538470;
  func_0x000107c613fc(&UNK_110538470,0x40,7);
  func_0x000100d00a6c(auStack_68,puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 0x38) = uVar6;
  func_0x000107c61434(uVar6);
  uVar6 = 0x71;
  func_0x0001001ca524(0x71,0,0x3c,4,0,0,&UNK_10dacc428,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar6);
  FUN_1026c3d8c(param_3,auStack_68);
  puVar2 = &UNK_110538498;
  func_0x000107c613fc(&UNK_110538498,0x38,7);
  func_0x000100d00a6c(auStack_68,puVar2 + 0x10);
  uVar6 = 0x112eb5c40;
  func_0x0001000285a8(0x112eb5c40,&UNK_10dacc430);
  func_0x000107c613fc();
  pcVar3 = FUN_1026c3f8c;
  func_0x0001000b64ac(FUN_1026c3f8c,puVar2,uVar6);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar6);
  (**(code **)(lVar1 + 8))(uVar6,lVar1);
  uVar4 = uVar6;
  func_0x0001006c733c();
  func_0x000107c61574(uVar6);
  uVar6 = 0;
  func_0x0001026c40e0(0,0x112eb5278,&PTR_PTR_1126b1de8);
  pcVar5 = FUN_1026c3ae0;
  func_0x0001000d5158(FUN_1026c3ae0,0,uVar6);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar4);
  return pcVar5;
}



/* Entry: 1026c3944; end: 1026c395b;  */

void FUN_1026c3944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026c395c,0,0);
  return;
}



/* Entry: 1026c395c; end: 1026c3a07;  */

void FUN_1026c395c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  lVar3 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar2);
  (**(code **)(lVar3 + 0x18))(uVar2,lVar3);
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  lVar3 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar2);
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1026c3a08;
                    /* WARNING: Could not recover jumptable at 0x0001026c3a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x18),uVar2,lVar3);
  return;
}



/* Entry: 1026c3a08; end: 1026c3a43;  */

void FUN_1026c3a08(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001026c3a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026c3a44; end: 1026c3adf;  */

undefined * FUN_1026c3a44(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x0001026c40e0(0,0x112eb5c48,&PTR_PTR_1126c6138);
    func_0x000107c61434(param_3);
    FUN_1026c46a0();
    puVar1 = PTR_PTR_1126b1de8;
    func_0x000107c610f8(PTR_PTR_1126b1de8);
    func_0x000107c453e4();
    func_0x000107c56b64();
    func_0x000107c61170(param_3);
  }
  return puVar1;
}



/* Entry: 1026c3ae0; end: 1026c3beb;  */

void FUN_1026c3ae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1026c3a44(uVar1,*(undefined1 *)(param_2 + 1),param_2[2]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1026c3bec; end: 1026c3c03;  */

void FUN_1026c3bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026c3c04,0,0);
  return;
}



/* Entry: 1026c3c04; end: 1026c3c7b;  */

void FUN_1026c3c04(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1026c3c7c;
                    /* WARNING: Could not recover jumptable at 0x0001026c3c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 1026c3c7c; end: 1026c3cf3;  */

void FUN_1026c3c7c(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x19) = param_2;
    *(undefined8 *)(lVar2 + 0x38) = param_1;
    pcVar1 = FUN_1026c3cf4;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x1026c3d3c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1026c3cf4; end: 1026c3d7f;  */

void FUN_1026c3cf4(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined1 *)(unaff_x22 + 0x18) = *(undefined1 *)(unaff_x22 + 0x19);
  func_0x000100087f6c();
  func_0x000100c7f554();
                    /* WARNING: Could not recover jumptable at 0x0001026c3d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026c3d80; end: 1026c3d8b;  */

undefined1  [16] FUN_1026c3d80(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *unaff_x20;
  code *pcVar3;
  undefined1 auVar4 [16];
  
  pcVar1 = FUN_1026c44f8;
  pcVar3 = *(code **)(*unaff_x20 + 0x60);
  func_0x000107c6157c();
  uVar2 = param_1;
  (*pcVar3)(FUN_1026c44f8,param_1);
  func_0x000107c61574(param_1);
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = pcVar1;
  return auVar4;
}



/* Entry: 1026c3d8c; end: 1026c3dcf;  */

long FUN_1026c3d8c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1026c3dd0; end: 1026c3de3;  */

code * FUN_1026c3dd0(void)

{
  code *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  FUN_1026c35fc(uVar4);
  func_0x0001000285a8(0x112eb5c38,&UNK_10dacc418);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  pcVar1 = FUN_1026c3eb4;
  func_0x0001000b64ac(FUN_1026c3eb4,uVar4);
  FUN_1026c3d8c(unaff_x20 + 0x18,auStack_68);
  FUN_1026c3d8c(unaff_x20 + 0x40,auStack_90);
  puVar2 = &UNK_110538448;
  func_0x000107c613fc(&UNK_110538448,0x68,7);
  func_0x000100d00a6c(auStack_68,puVar2 + 0x10);
  func_0x000100d00a6c(auStack_90,puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x60) = uVar5;
  uVar5 = 0;
  func_0x0001026c40e0(0,0x112eb5278,&PTR_PTR_1126b1de8);
  pcVar3 = FUN_1026c3f18;
  func_0x000100775358(FUN_1026c3f18,puVar2,uVar5);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(puVar2);
  return pcVar3;
}



/* Entry: 1026c3de4; end: 1026c3e27;  */

void FUN_1026c3de4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c3e28; end: 1026c3e47;  */

void FUN_1026c3e28(void)

{
  func_0x0001026c324c();
  return;
}



/* Entry: 1026c3e48; end: 1026c3e93;  */

undefined ** FUN_1026c3e48(void)

{
  return &PTR_DAT_112eb9bd8;
}



/* Entry: 1026c3e94; end: 1026c3eb3;  */

void FUN_1026c3e94(void)

{
  func_0x000107c61168(&PTR_PTR_112eb5bb8);
  return;
}



/* Entry: 1026c3eb4; end: 1026c3ebf;  */

undefined1  [16] FUN_1026c3eb4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *unaff_x20;
  code *pcVar3;
  undefined1 auVar4 [16];
  
  pcVar1 = FUN_1026c4090;
  pcVar3 = *(code **)(*unaff_x20 + 0x60);
  func_0x000107c6157c();
  uVar2 = param_1;
  (*pcVar3)(FUN_1026c4090,param_1);
  func_0x000107c61574(param_1);
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = pcVar1;
  return auVar4;
}



/* Entry: 1026c3ec0; end: 1026c3f17;  */

undefined1  [16] FUN_1026c3ec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  code *pcVar2;
  undefined1 auVar3 [16];
  
  pcVar2 = *(code **)(*unaff_x20 + 0x60);
  func_0x000107c6157c();
  uVar1 = param_1;
  (*pcVar2)(param_2,param_1);
  func_0x000107c61574(param_1);
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = param_2;
  return auVar3;
}



/* Entry: 1026c3f18; end: 1026c3f27;  */

code * FUN_1026c3f18(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  
  uVar6 = *param_1;
  FUN_1026c3d8c(unaff_x20 + 0x10,auStack_68,unaff_x20 + 0x38,*(undefined8 *)(unaff_x20 + 0x60));
  puVar2 = &UNK_110538470;
  func_0x000107c613fc(&UNK_110538470,0x40,7);
  func_0x000100d00a6c(auStack_68,puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 0x38) = uVar6;
  func_0x000107c61434(uVar6);
  uVar6 = 0x71;
  func_0x0001001ca524(0x71,0,0x3c,4,0,0,&UNK_10dacc428,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar6);
  FUN_1026c3d8c(unaff_x20 + 0x38,auStack_68);
  puVar2 = &UNK_110538498;
  func_0x000107c613fc(&UNK_110538498,0x38,7);
  func_0x000100d00a6c(auStack_68,puVar2 + 0x10);
  uVar6 = 0x112eb5c40;
  func_0x0001000285a8(0x112eb5c40,&UNK_10dacc430);
  func_0x000107c613fc();
  pcVar3 = FUN_1026c3f8c;
  func_0x0001000b64ac(FUN_1026c3f8c,puVar2,uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar6);
  (**(code **)(lVar1 + 8))(uVar6,lVar1);
  uVar4 = uVar6;
  func_0x0001006c733c();
  func_0x000107c61574(uVar6);
  uVar6 = 0;
  func_0x0001026c40e0(0,0x112eb5278,&PTR_PTR_1126b1de8);
  pcVar5 = FUN_1026c3ae0;
  func_0x0001000d5158(FUN_1026c3ae0,0,uVar6);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar4);
  return pcVar5;
}



/* Entry: 1026c3f28; end: 1026c3f8b;  */

void FUN_1026c3f28(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1026c4520;
  plVar1[2] = unaff_x20 + 0x10;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026c395c,0,0);
  return;
}



/* Entry: 1026c3f8c; end: 1026c3f93;  */

void FUN_1026c3f8c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [40];
  
  FUN_1026c3d8c(unaff_x20 + 0x10,auStack_48);
  puVar1 = &UNK_1105384c0;
  func_0x000107c613fc(&UNK_1105384c0,0x40,7);
  func_0x000100d00a6c(auStack_48,puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  func_0x000107c6157c(param_1);
  uVar2 = 0x71;
  func_0x0001001ca524(0x71,0,0x3c,4,0,0,&UNK_10dacc440,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(FUN_1026c406c,uVar2);
  return;
}



/* Entry: 1026c3f94; end: 1026c3fcb;  */

void FUN_1026c3f94(code *param_1)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026c3fcc; end: 1026c402f;  */

void FUN_1026c3fcc(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1026c4030;
  plVar1[4] = unaff_x20 + 0x10;
  plVar1[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026c3c04,0,0);
  return;
}



/* Entry: 1026c4030; end: 1026c406b;  */

void FUN_1026c4030(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026c4068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026c406c; end: 1026c408f;  */

void FUN_1026c406c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 1026c4090; end: 1026c40b7;  */

void FUN_1026c4090(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 1026c40b8; end: 1026c411f;  */

void FUN_1026c40b8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_1026c4418();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1026c4120; end: 1026c4417;  */

undefined * FUN_1026c4120(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112eb2b80,&UNK_10daca7b0);
    func_0x000107c602e8();
    puVar1 = puVar11;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar11 != (undefined *)0x0) {
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar12 = (undefined *)0x0;
      puVar7 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      do {
        if (puVar12 == puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c4414);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(param_1 + (long)puVar12 * 8 + 0x20);
        uVar4 = *(ulong *)(puVar1 + 0x28);
        func_0x000107c61174();
        func_0x000107c60114();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          func_0x0001026c40e0(0,0x112d5ecd8,&PTR_PTR_1126bf130);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            func_0x000107c61174();
            uVar6 = uVar8;
            func_0x000107c60118();
            func_0x000107c61170(uVar8);
            if ((uVar6 & 1) != 0) {
              func_0x000107c61170(uVar5);
              goto LAB_1026c4320;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined8 *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar5;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c4418);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
LAB_1026c4320:
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar11);
    }
    else {
      puVar12 = (undefined *)0x0;
      do {
        puVar7 = puVar12;
        func_0x00010111c1ac(puVar12,param_1);
        bVar3 = SCARRY8((long)puVar12,1);
        puVar12 = puVar12 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c440c);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(puVar1 + 0x28);
        func_0x000107c60114();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          func_0x0001026c40e0(0,0x112d5ecd8,&PTR_PTR_1126bf130);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            func_0x000107c61174();
            uVar6 = uVar8;
            func_0x000107c60118();
            func_0x000107c61170(uVar8);
            if ((uVar6 & 1) != 0) {
              func_0x000107c615e8(puVar7);
              goto joined_r0x0001026c41f8;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined **)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = puVar7;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c4410);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
joined_r0x0001026c41f8:
      } while (puVar12 != puVar11);
    }
  }
  return puVar1;
}



/* Entry: 1026c4418; end: 1026c44f7;  */

undefined * FUN_1026c4418(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
    if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) &&
       (puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8, func_0x000107c60480(),
       puVar1 = PTR___swiftEmptySetSingleton_11034f1d8, puVar4 != (undefined *)0x0)) {
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1026c4120(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
  }
  else {
    puVar4 = puVar1;
    func_0x000107c3db8c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    uVar2 = 0;
    func_0x0001026c40e0(0,0x112d5ecd8,&PTR_PTR_1126bf130);
    uVar3 = uVar2;
    func_0x000101158e5c();
    puVar1 = puVar4;
    func_0x000107c5fe10(puVar4,uVar2,uVar3);
    func_0x000107c61170(puVar4);
  }
  return puVar1;
}



/* Entry: 1026c44f8; end: 1026c451f;  */

void FUN_1026c44f8(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 1026c4520; end: 1026c4523;  */

void FUN_1026c4520(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026c4068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026c4524; end: 1026c469f;  */

undefined8
FUN_1026c4524(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             char param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  func_0x000107c54bf8(unaff_x20);
  func_0x000107c61170(param_2);
  uVar2 = *param_1;
  func_0x000107c5fadc(uVar2,param_1[1]);
  func_0x000107c59e18(unaff_x20);
  func_0x000107c61170(uVar2);
  uVar2 = param_1[2];
  func_0x000107c5fadc(uVar2,param_1[3]);
  func_0x000107c528fc(unaff_x20);
  func_0x000107c61170(uVar2);
  lVar3 = 0;
  func_0x000103a814dc();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  uVar2 = *puVar1;
  func_0x000107c5fadc(uVar2,puVar1[1]);
  func_0x000107c579d0(unaff_x20);
  func_0x000107c61170(uVar2);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x20));
  uVar2 = *puVar1;
  func_0x000107c5fadc(uVar2,puVar1[1]);
  func_0x000107c558fc(unaff_x20);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(unaff_x20);
  if (*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c) + 8) != '\x01') {
    func_0x000107c59fd0(unaff_x20);
  }
  func_0x000107c54c0c(unaff_x20);
  if (param_5 != '\x01') {
    func_0x000107c5a394(unaff_x20);
  }
  func_0x00010111dddc(param_1);
  return unaff_x20;
}



/* Entry: 1026c46a0; end: 1026c49e7;  */

undefined8 FUN_1026c46a0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined8 unaff_x20;
  ulong uVar16;
  undefined8 *puVar17;
  ulong auStack_e0 [5];
  undefined8 uStack_b8;
  undefined4 uStack_ac;
  long lStack_a8;
  long alStack_a0 [3];
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar8 = 0;
  uStack_b8 = param_2;
  uStack_ac = param_3;
  func_0x000103a814dc();
  auStack_e0[4] = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(auStack_e0[4] + 0x40));
  lVar9 = (long)auStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112eb5c58;
  auStack_e0[3] = lVar9;
  func_0x0001000285a8(0x112eb5c58,&UNK_10dacc458);
  auStack_e0[2] = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(lVar9 - extraout_x8_00);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar15 = (ulong *)(param_1 + 0x40);
  auStack_e0[0] = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (-auStack_e0[0] < 0x40) {
    uVar16 = ~(-1L << (-auStack_e0[0] & 0x3f));
  }
  uVar16 = uVar16 & *puVar15;
  uVar13 = 0x3f - auStack_e0[0];
  func_0x000107c61174();
  auStack_e0[1] = unaff_x20;
  lStack_a8 = param_1;
  func_0x000107c61434(param_1);
  lVar8 = 0;
  lVar9 = lVar8;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = lStack_a8;
  while( true ) {
    while (lStack_a8 = lVar5, uVar16 != 0) {
      uVar14 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 - 1 & uVar16;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar8 << 6;
      lVar9 = *(long *)(lVar5 + 0x38);
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x30) + uVar14 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      *puVar17 = uVar2;
      puVar17[1] = uVar3;
      iVar4 = *(int *)(auStack_e0[2] + 0x30);
      func_0x000101bde48c(lVar9 + *(long *)(auStack_e0[4] + 0x48) * uVar14,
                          (long)puVar17 + (long)iVar4);
      lVar9 = 0;
      FUN_1026c49e8();
      uVar14 = auStack_e0[3];
      func_0x000101bde48c((long)puVar17 + (long)iVar4,auStack_e0[3]);
      func_0x000107c61438(uVar3,2);
      FUN_1026c4524(uVar14,uVar2,uVar3,uStack_b8,uStack_ac);
      alStack_a0[0] = uVar14;
      lStack_88 = lVar9;
      FUN_1026c4a2c(puVar17,0x112eb5c58,&UNK_10dacc458);
      lVar9 = lVar8;
      if (lStack_88 == 0) {
        FUN_1026c4a2c(alStack_a0,0x112d387f8,&UNK_10d902650);
        lVar5 = lStack_a8;
      }
      else {
        func_0x000100102924(alStack_a0,auStack_80);
        puVar12 = puVar11;
        func_0x000107c61558();
        puVar10 = puVar11;
        if (((ulong)puVar12 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          func_0x000100f6a040(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
        }
        uVar14 = *(ulong *)(puVar10 + 0x10);
        puVar11 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar14) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          func_0x000100f6a040(puVar11,uVar14 + 1,1,puVar10);
        }
        *(ulong *)(puVar11 + 0x10) = uVar14 + 1;
        func_0x000100102924(auStack_80,puVar11 + uVar14 * 0x20 + 0x20);
        lVar5 = lStack_a8;
      }
    }
    bVar7 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar7) break;
    if ((long)(uVar13 >> 6) <= lVar8) {
      func_0x000107c6142c(lVar5);
      func_0x000101bde484(lVar5,puVar15,~auStack_e0[0],lVar9,0);
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar10 = puVar11;
      func_0x000107c5fc48(puVar11,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar11);
      func_0x000107c45788(puVar12);
      func_0x000107c61170(puVar10);
      func_0x000107c56b54(auStack_e0[1]);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(auStack_e0[1]);
      return auStack_e0[1];
    }
    uVar16 = puVar15[lVar8];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1026c49e8);
  (*pcVar6)();
}



/* Entry: 1026c49e8; end: 1026c4a2b;  */

void FUN_1026c49e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb5c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c6140;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112eb5c60 = puVar1;
  return;
}



/* Entry: 1026c4a2c; end: 1026c4ab7;  */

undefined8 FUN_1026c4a2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1026c4ab8; end: 1026c4b1b;  */

void FUN_1026c4ab8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c4d44();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110538528;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c4b1c; end: 1026c4b23;  */

void FUN_1026c4b1c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c4d44();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110538528;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c4b24; end: 1026c4b53;  */

void FUN_1026c4b24(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026c4b54; end: 1026c4cb3;  */

void FUN_1026c4b54(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4c370();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c5205c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
      lVar2 = lVar1;
      func_0x0001000b637c(lVar1);
      uVar3 = 0;
      FUN_1026c2eb8(0);
      func_0x0001000bfde0(0x1026c4c3c,0,uVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61574(lVar2);
      return;
    }
  }
  func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
  func_0x000104886440();
  return;
}



/* Entry: 1026c4cb4; end: 1026c4cd7;  */

void FUN_1026c4cb4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c4cd8; end: 1026c4cf7;  */

void FUN_1026c4cd8(void)

{
  FUN_1026c4b54();
  return;
}



/* Entry: 1026c4cf8; end: 1026c4d43;  */

undefined ** FUN_1026c4cf8(void)

{
  return &PTR_DAT_112eb9bd8;
}



/* Entry: 1026c4d44; end: 1026c4d63;  */

void FUN_1026c4d44(void)

{
  func_0x000107c61168(&PTR_PTR_112eb5ce8);
  return;
}



/* Entry: 1026c4d64; end: 1026c5117;  */

undefined8 FUN_1026c4d64(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR_PTR_1126c6150;
  func_0x000107c610f8(PTR_PTR_1126c6150);
  func_0x000107c61174(unaff_x20);
  func_0x000107c453e4(puVar1);
  puVar2 = param_1;
  func_0x000107c443c8();
  if ((int)puVar2 == 0) {
    puVar2 = param_1;
    func_0x000107c5aa6c();
    puVar3 = PTR_PTR_1126c6160;
    if ((long)puVar2 < 2) {
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c610f8(PTR_PTR_1126c6160);
        func_0x000107c453e4();
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        func_0x000107c453e4();
LAB_1026c4fdc:
        func_0x000107c54bfc(puVar3);
        func_0x000107c61170(puVar4);
        func_0x000107c52660(puVar1);
      }
      else {
        if (puVar2 != (undefined *)0x1) goto LAB_1026c5004;
        puVar3 = PTR_PTR_1126c6170;
        func_0x000107c610f8(PTR_PTR_1126c6170);
        func_0x000107c453e4();
        func_0x000107c54710(puVar1);
      }
    }
    else {
      if (puVar2 == (undefined *)0x2) {
        func_0x000107c610f8(PTR_PTR_1126c6160);
        func_0x000107c453e4();
        puVar2 = param_1;
        func_0x000107c5e2b0();
        func_0x000107c61180();
        puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar2 != (undefined *)0x0) {
          puVar4 = puVar2;
          func_0x000107c5fc54();
          func_0x000107c61170(puVar2);
        }
        puVar2 = puVar4;
        func_0x00010102c3b8(puVar4);
        func_0x000107c6142c(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar5 = puVar2;
        func_0x000107c5fc48(puVar2,PTR___sypN_11034f1a8 + 8);
        func_0x000107c6142c(puVar2);
        func_0x000107c45788(puVar4);
        func_0x000107c61170(puVar5);
        goto LAB_1026c4fdc;
      }
      if (puVar2 != (undefined *)0x3) goto LAB_1026c5004;
      puVar3 = PTR_PTR_1126c6168;
      func_0x000107c610f8(PTR_PTR_1126c6168);
      func_0x000107c453e4();
      puVar2 = param_1;
      func_0x000107c3ea84();
      func_0x000107c61180();
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar2 != (undefined *)0x0) {
        puVar4 = puVar2;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar2);
      }
      puVar2 = puVar4;
      func_0x00010102c3b8(puVar4);
      func_0x000107c6142c(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar5 = puVar2;
      func_0x000107c5fc48(puVar2,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar2);
      func_0x000107c45788(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c54bfc(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c52d94(puVar1);
    }
  }
  else {
    puVar3 = PTR_PTR_1126c6158;
    func_0x000107c610f8(PTR_PTR_1126c6158);
    func_0x000107c453e4();
    func_0x000107c54ee8(puVar1);
  }
  func_0x000107c61170(puVar3);
LAB_1026c5004:
  func_0x000107c56074(unaff_x20);
  puVar2 = PTR_PTR_1126c6178;
  func_0x000107c610f8(PTR_PTR_1126c6178);
  func_0x000107c453e4();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c453e4();
  func_0x000107c590b0(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c556f4(puVar2);
  func_0x000107c55fbc(unaff_x20);
  puVar3 = PTR_PTR_1126c0308;
  func_0x000107c610f8(PTR_PTR_1126c0308);
  func_0x000107c453e4();
  func_0x000107c5a494();
  func_0x000107c558b4(unaff_x20);
  puVar4 = PTR_PTR_1126c0308;
  func_0x000107c610f8(PTR_PTR_1126c0308);
  func_0x000107c453e4();
  func_0x000107c4ddac(param_1);
  func_0x000107c5a494(puVar4);
  func_0x000107c61174(puVar4);
  func_0x000107c55840(unaff_x20);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(unaff_x20);
  return unaff_x20;
}



/* Entry: 1026c5118; end: 1026c5163;  */

void FUN_1026c5118(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026c51c8,param_1);
  return;
}



/* Entry: 1026c5164; end: 1026c51c7;  */

void FUN_1026c5164(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c54fc();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_1105385a0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c51c8; end: 1026c51cf;  */

void FUN_1026c51c8(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c54fc();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_1105385a0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c51d0; end: 1026c51ff;  */

void FUN_1026c51d0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026c5200; end: 1026c53ab;  */

void FUN_1026c5200(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4ec94();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112e573b0,&UNK_10dacc510);
    lVar1 = lVar2;
    func_0x000107c4ec88(lVar2);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar4 = 0;
    FUN_1026c542c(0,0x112eb5278,&PTR_PTR_1126b1de8);
    pcVar5 = FUN_1026c53ac;
    func_0x0001000bfde0(FUN_1026c53ac,0,uVar4);
    func_0x000107c61574(lVar3);
    lVar1 = lVar2;
    func_0x000107c4ec80();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c615e8(lVar2);
    }
    else {
      FUN_1026c542c(0,0x112eb5d48,&PTR_PTR_1126c6148);
      func_0x000107c61174(lVar1);
      lVar3 = lVar1;
      FUN_1026c4d64();
      puVar6 = PTR_PTR_1126b1de8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5606c();
      func_0x000107c61170(lVar3);
      puStack_48 = puVar6;
      func_0x0001006c71a4(&puStack_48);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
      func_0x000107c61574(pcVar5);
    }
  }
  return;
}



/* Entry: 1026c53ac; end: 1026c542b;  */

void FUN_1026c53ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  FUN_1026c542c(0,0x112eb5d48,&PTR_PTR_1126c6148);
  func_0x000107c61174(uVar2);
  FUN_1026c4d64();
  puVar1 = PTR_PTR_1126b1de8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5606c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1026c542c; end: 1026c546b;  */

void FUN_1026c542c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1026c546c; end: 1026c548f;  */

void FUN_1026c546c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c5490; end: 1026c54af;  */

void FUN_1026c5490(void)

{
  FUN_1026c5200();
  return;
}



/* Entry: 1026c54b0; end: 1026c54fb;  */

undefined ** FUN_1026c54b0(void)

{
  return &PTR_DAT_112eb9bc0;
}



/* Entry: 1026c54fc; end: 1026c551b;  */

void FUN_1026c54fc(void)

{
  func_0x000107c61168(&PTR_PTR_112eb5dd0);
  return;
}



/* Entry: 1026c551c; end: 1026c5543;  */

void FUN_1026c551c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1026c5544; end: 1026c5547;  */

void FUN_1026c5544(void)

{
  return;
}



/* Entry: 1026c5548; end: 1026c590f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026c5548(double param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  undefined8 unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  double dVar13;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar7 = *(ulong *)(param_2 + _DAT_113072a70);
  if (uVar7 != 0) {
    uVar10 = uVar7 & 0xffffffffffffff8;
    if (uVar7 >> 0x3e == 0) {
      if (*(long *)(uVar10 + 0x10) != 1) goto LAB_1026c5674;
    }
    else {
      uVar6 = uVar7;
      if (-1 < (long)uVar7) {
        uVar6 = uVar10;
      }
      uVar5 = uVar6;
      func_0x000107c60480();
      if ((uVar5 != 1) || (func_0x000107c60480(), uVar6 == 0)) goto LAB_1026c5674;
    }
    if ((uVar7 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5904);
        (*pcVar2)();
      }
      lVar4 = *(long *)(uVar7 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x000107c61434(uVar7);
      lVar4 = 0;
      FUN_10264be7c(0,uVar7);
      func_0x000107c6142c(uVar7);
    }
    func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar12 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    lVar3 = _DAT_1130729a8;
    if (param_1 - *(double *)(lVar4 + _DAT_1130729a8) < 86400.0) {
      func_0x000107c614e8(unaff_x20);
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar12 = ((undefined8 *)(lVar4 + _DAT_1130729b0))[1];
      if (lVar12 == 0) {
        uVar11 = 0;
        lVar9 = -0x2000000000000000;
      }
      else {
        uVar11 = *(undefined8 *)(lVar4 + _DAT_1130729b0);
        lVar9 = lVar12;
      }
      func_0x000107c61174();
      func_0x000107c61434(lVar12);
      func_0x000107c5fadc(uVar11,lVar9);
      func_0x000107c6142c(lVar9);
      func_0x000107c5a344(unaff_x20);
      func_0x000107c61170(uVar11);
      lVar12 = ((undefined8 *)(lVar4 + _DAT_1130729a0))[1];
      if (lVar12 == 0) {
        uVar11 = 0;
        lVar12 = -0x2000000000000000;
      }
      else {
        uVar11 = *(undefined8 *)(lVar4 + _DAT_1130729a0);
      }
      func_0x000107c61434();
      func_0x000107c5fadc(uVar11,lVar12);
      func_0x000107c6142c(lVar12);
      func_0x000107c59864(unaff_x20);
      func_0x000107c61170(uVar11);
      dVar13 = *(double *)(lVar4 + lVar3) * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5908);
        (*pcVar2)();
      }
      if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c590c);
        (*pcVar2)();
      }
      if (dVar13 < 9.223372036854776e+18) {
        func_0x000107c59dcc(unaff_x20);
        FUN_1026c5910(*(undefined8 *)(param_2 + _DAT_113072a78));
        func_0x000107c5986c(unaff_x20);
        lVar3 = ((undefined8 *)(param_2 + _DAT_113072a80))[1];
        if (lVar3 == 0) {
          uVar11 = 0;
          lVar3 = -0x2000000000000000;
        }
        else {
          uVar11 = *(undefined8 *)(param_2 + _DAT_113072a80);
        }
        func_0x000107c61434();
        func_0x000107c5fadc(uVar11,lVar3);
        func_0x000107c6142c(lVar3);
        func_0x000107c59ca0(unaff_x20);
        func_0x000107c61170(uVar11);
        if (*(long *)(lVar4 + _DAT_1130729c0) == 0) {
          uVar11 = 0;
          uVar8 = 0xe000000000000000;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(lVar4 + _DAT_1130729c0) + _DAT_113072870);
          uVar11 = *puVar1;
          uVar8 = puVar1[1];
          func_0x000107c61434(uVar8);
        }
        func_0x000107c5fadc(uVar11,uVar8);
        func_0x000107c6142c(uVar8);
        func_0x000107c598a0(unaff_x20);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(param_2);
        func_0x000107c61170(unaff_x20);
        return unaff_x20;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5910);
      (*pcVar2)();
    }
    func_0x000107c61170(lVar4);
  }
LAB_1026c5674:
  func_0x000107c61170(param_2);
  return 0;
}



/* Entry: 1026c5910; end: 1026c591f;  */

int FUN_1026c5910(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 - 1U < 0xf) {
    iVar1 = (int)(param_1 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1026c5920; end: 1026c5b47;  */

undefined8 FUN_1026c5920(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_80 [16];
  ulong *puStack_70;
  ulong uStack_68;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (param_1 >> 0x3e != 0) {
    uVar7 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar7 = param_1;
    }
    func_0x000107c60480(uVar7);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c45cd4();
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar7 == 0) {
    func_0x000107c6142c(param_1);
  }
  else {
    FUN_1026c6418(0,0x112eb5e30,&PTR_PTR_1126c60f0);
    if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026c5b48);
      (*pcVar1)();
    }
    uVar8 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = uVar8;
        FUN_1026c6274(uVar8,param_1);
      }
      puStack_70 = &uStack_68;
      uStack_68 = 0;
      func_0x000107c61174();
      func_0x0001043843a0(FUN_1026c6410,auStack_80,FUN_1026c5544,0);
      uVar6 = uVar3;
      if (uStack_68 == 0) {
LAB_1026c59e4:
        func_0x000107c61170(uVar6);
      }
      else {
        uVar4 = uStack_68;
        func_0x000107c61174();
        uVar5 = uVar4;
        FUN_1026c5548();
        uVar6 = uVar5;
        func_0x000107c61174();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar4);
        if (uVar5 != 0) {
          func_0x000107c61170(uVar6);
          func_0x000107c61174(uVar6);
          func_0x000107c3d798(puVar2);
          func_0x000107c61170(uVar6);
          goto LAB_1026c59e4;
        }
      }
      func_0x000107c61170(uVar3);
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
    func_0x000107c6142c(param_1);
  }
  func_0x000107c61174(puVar2);
  func_0x000107c54c34(unaff_x20);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(unaff_x20);
  return unaff_x20;
}



/* Entry: 1026c5b48; end: 1026c5cfb;  */

ulong FUN_1026c5b48(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5c30);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5c34);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112eb5048;
    func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0x112eb5048;
    func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000018,0x800000010f0b61d0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5cfc);
  (*pcVar2)();
}



/* Entry: 1026c5cfc; end: 1026c5d3b;  */

ulong FUN_1026c5cfc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5fd8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5fdc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c60a0;
    func_0x000107c61168(PTR_PTR_1126c60a0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c60a0;
    func_0x000107c61168(PTR_PTR_1126c60a0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1026c6418(0,0x112eb5268,&PTR_PTR_1126c60a0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c60b0);
  (*pcVar2)();
}



/* Entry: 1026c5d3c; end: 1026c5edf;  */

ulong FUN_1026c5d3c(ulong param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5e24);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5e28);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    (*param_3)(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = 0;
    (*param_3)(0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(param_4,param_5);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5ee0);
  (*pcVar2)();
}



/* Entry: 1026c5ee0; end: 1026c5ef3;  */

ulong FUN_1026c5ee0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5fd8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5fdc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c60f8;
    func_0x000107c61168(PTR_PTR_1126c60f8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c60f8;
    func_0x000107c61168(PTR_PTR_1126c60f8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1026c6418(0,0x112eb5260,&PTR_PTR_1126c60f8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c60b0);
  (*pcVar2)();
}



/* Entry: 1026c5ef4; end: 1026c60af;  */

ulong FUN_1026c5ef4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5fd8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5fdc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1026c6418(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c60b0);
  (*pcVar2)();
}



/* Entry: 1026c60b0; end: 1026c60c3;  */

ulong FUN_1026c60b0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5fd8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5fdc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d0948;
    func_0x000107c61168(PTR_PTR_1126d0948);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126d0948;
    func_0x000107c61168(PTR_PTR_1126d0948);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1026c6418(0,0x112eb5250,&PTR_PTR_1126d0948);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c60b0);
  (*pcVar2)();
}



/* Entry: 1026c60c4; end: 1026c625f;  */

ulong FUN_1026c60c4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c6194);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c6198);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000104382a88(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000104382a88(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f0b61b0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c6260);
  (*pcVar2)();
}



/* Entry: 1026c6260; end: 1026c6273;  */

ulong FUN_1026c6260(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5fd8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c5fdc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c60c0;
    func_0x000107c61168(PTR_PTR_1126c60c0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c60c0;
    func_0x000107c61168(PTR_PTR_1126c60c0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1026c6418(0,0x112eb5258,&PTR_PTR_1126c60c0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c60b0);
  (*pcVar2)();
}



/* Entry: 1026c6274; end: 1026c640f;  */

ulong FUN_1026c6274(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c6344);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c6348);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001043845a0(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x0001043845a0(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f0b6190);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c6410);
  (*pcVar2)();
}



/* Entry: 1026c6410; end: 1026c6417;  */

void FUN_1026c6410(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1026c6418; end: 1026c64a3;  */

void FUN_1026c6418(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1026c64a4; end: 1026c6507;  */

void FUN_1026c64a4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c6a4c();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110538640;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c6508; end: 1026c650f;  */

void FUN_1026c6508(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c6a4c();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110538640;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c6510; end: 1026c653f;  */

void FUN_1026c6510(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026c6540; end: 1026c67ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026c6540(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113072718);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112eb5360,&UNK_10dacbdb0);
    lVar2 = lVar1;
    func_0x000107c5bd48(lVar1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    puVar6 = &UNK_110538620;
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_110538620,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar1);
    func_0x000107c615f0(lVar1);
    uVar8 = 0x112eb5e38;
    func_0x0001000285a8(0x112eb5e38,&UNK_10dacc5d8);
    pcVar5 = FUN_1026c6968;
    func_0x0001000d5158(FUN_1026c6968,puVar4,uVar8);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(puVar4);
    func_0x0001000285a8(0x112eb17c0,&UNK_10dac6140);
    lVar2 = lVar1;
    func_0x000107c5bd4c(lVar1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    func_0x000107c613fc(&UNK_110538620,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lVar1);
    func_0x000107c615e8(lVar1);
    pcVar7 = FUN_1026c69b4;
    func_0x0001000d5158(FUN_1026c69b4,puVar6,uVar8);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(puVar6);
    lVar2 = 0x112eb5468;
    func_0x0001000285a8(0x112eb5468,&UNK_10dacbe98);
    func_0x0001026bd1e8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 5;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    *(code **)(lVar2 + 0x20) = pcVar5;
    *(code **)(lVar2 + 0x28) = pcVar7;
    func_0x000107c6157c(pcVar5);
    func_0x000107c6157c(pcVar7);
    lVar3 = lVar2;
    func_0x0001000c19f0(lVar2);
    func_0x000107c61574(lVar2);
    uVar8 = 0;
    FUN_1026c6a6c(0,0x112eb5278,&PTR_PTR_1126b1de8);
    func_0x0001000bfde0(0x1026c68e8,0,uVar8);
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(pcVar7);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1026c67ac; end: 1026c684b;  */

void FUN_1026c67ac(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x000107c4d780();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    uVar1 = 0;
    func_0x0001043845a0(0);
    lVar3 = lVar2;
    func_0x000107c5fc54(lVar2,uVar1);
    func_0x000107c61170(lVar2);
  }
  lVar2 = *param_1;
  *param_1 = lVar3;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 1026c684c; end: 1026c684f;  */

void FUN_1026c684c(void)

{
  return;
}



/* Entry: 1026c6850; end: 1026c6967;  */

void FUN_1026c6850(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c4d780();
    func_0x000107c61180();
    func_0x000107c615e8(param_3);
    uVar2 = 0;
    func_0x0001043845a0(0);
    lVar3 = lVar1;
    func_0x000107c5fc54(lVar1,uVar2);
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 1026c6968; end: 1026c69b3;  */

void FUN_1026c6968(undefined8 *param_1)

{
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  *param_1 = 0;
  puStack_30 = param_1;
  func_0x000104387ff0(FUN_1026c6aac,auStack_40,FUN_1026c684c,0);
  return;
}



/* Entry: 1026c69b4; end: 1026c69bb;  */

void FUN_1026c69b4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x000107c4d780();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    uVar2 = 0;
    func_0x0001043845a0(0);
    lVar3 = lVar1;
    func_0x000107c5fc54(lVar1,uVar2);
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 1026c69bc; end: 1026c69df;  */

void FUN_1026c69bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c69e0; end: 1026c69ff;  */

void FUN_1026c69e0(void)

{
  FUN_1026c6540();
  return;
}



/* Entry: 1026c6a00; end: 1026c6a4b;  */

void FUN_1026c6a00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110538638;
  return;
}



/* Entry: 1026c6a4c; end: 1026c6a6b;  */

void FUN_1026c6a4c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb5ec0);
  return;
}



/* Entry: 1026c6a6c; end: 1026c6aab;  */

void FUN_1026c6a6c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1026c6aac; end: 1026c6ab3;  */

void FUN_1026c6aac(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = lVar4;
    func_0x000107c4d780();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    uVar2 = 0;
    func_0x0001043845a0(0);
    lVar4 = lVar3;
    func_0x000107c5fc54(lVar3,uVar2);
    func_0x000107c61170(lVar3);
  }
  lVar3 = *plVar1;
  *plVar1 = lVar4;
  func_0x000107c6142c(lVar3);
  return;
}



/* Entry: 1026c6ab4; end: 1026c6aff;  */

void FUN_1026c6ab4(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026c6b64,param_1);
  return;
}



/* Entry: 1026c6b00; end: 1026c6b63;  */

void FUN_1026c6b00(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c6d44();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_1105386b8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c6b64; end: 1026c6b6b;  */

void FUN_1026c6b64(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c6d44();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_1105386b8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c6b6c; end: 1026c6b9b;  */

void FUN_1026c6b6c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026c6b9c; end: 1026c6c6f;  */

void FUN_1026c6b9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puStack_38;
  
  FUN_1026c6c70(0);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  func_0x000103c02830(lVar2,param_2);
  func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
  if (lVar2 == 0) {
    func_0x000104886440();
  }
  else {
    puVar3 = PTR_PTR_1126b1de8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c53cc4();
    puStack_38 = puVar3;
    func_0x000100854cb0(&puStack_38);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1026c6c70; end: 1026c6cd7;  */

void FUN_1026c6c70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb5168 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b1df0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112eb5168 = puVar1;
  return;
}



/* Entry: 1026c6cd8; end: 1026c6cf7;  */

void FUN_1026c6cd8(void)

{
  FUN_1026c6b9c();
  return;
}



/* Entry: 1026c6cf8; end: 1026c6d43;  */

undefined ** FUN_1026c6cf8(void)

{
  return &PTR_DAT_112eb9bc0;
}



/* Entry: 1026c6d44; end: 1026c6d63;  */

void FUN_1026c6d44(void)

{
  func_0x000107c61168(&PTR_PTR_112eb5fa8);
  return;
}



/* Entry: 1026c6d64; end: 1026c6daf;  */

void FUN_1026c6d64(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026c6e14,param_1);
  return;
}


