/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c1b3ac; end: 101c1b417;  */

void FUN_101c1b3ac(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c1b3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 101c1b418; end: 101c1b437;  */

void FUN_101c1b418(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined4 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1b438,0,0);
  return;
}



/* Entry: 101c1b438; end: 101c1b4cf;  */

void FUN_101c1b438(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(undefined4 *)(unaff_x22 + 0xa8);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 0x28);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c1b4d0;
                    /* WARNING: Could not recover jumptable at 0x000101c1b4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68),uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c1b4d0; end: 101c1b53f;  */

void FUN_101c1b4d0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x88) = param_2;
    *(undefined8 *)(lVar2 + 0x90) = param_1;
    pcVar1 = FUN_101c1b540;
  }
  else {
    pcVar1 = (code *)0x101c1b680;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c1b540; end: 101c1b5e3;  */

void FUN_101c1b540(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(undefined4 *)(unaff_x22 + 0xa8);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar6 = *(int **)(lVar3 + 0x30);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c1b5e4;
                    /* WARNING: Could not recover jumptable at 0x000101c1b5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x88),
             *(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68),uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c1b5e4; end: 101c1b64b;  */

void FUN_101c1b5e4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x88);
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  func_0x000107c6142c(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c1b64c;
  }
  else {
    pcVar1 = (code *)0x101c1b6b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c1b64c; end: 101c1b6e7;  */

void FUN_101c1b64c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000101c1b67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1b6e8; end: 101c1b70b;  */

void FUN_101c1b6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_8;
  *(undefined4 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1b70c,0,0);
  return;
}



/* Entry: 101c1b70c; end: 101c1b7a7;  */

void FUN_101c1b70c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(undefined4 *)(unaff_x22 + 0x70);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 0x30);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c1b7a8;
                    /* WARNING: Could not recover jumptable at 0x000101c1b7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
             *(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c1b7a8; end: 101c1b86b;  */

void FUN_101c1b7a8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    uVar1 = 0x101c1b804;
  }
  else {
    uVar1 = 0x101c1b838;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101c1b86c; end: 101c1b88f;  */

void FUN_101c1b86c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1b890,0,0);
  return;
}



/* Entry: 101c1b890; end: 101c1b927;  */

void FUN_101c1b890(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(undefined4 *)(unaff_x22 + 0x70);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 0x28);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c1b928;
                    /* WARNING: Could not recover jumptable at 0x000101c1b924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c1b928; end: 101c1b997;  */

void FUN_101c1b928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x60) = param_2;
    *(undefined8 *)(lVar2 + 0x68) = param_1;
    uVar1 = 0x101c1bb88;
  }
  else {
    uVar1 = 0x101c1bb8c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101c1b998; end: 101c1ba03;  */

void FUN_101c1b998(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c1ba04;
  plVar1[0xd] = param_2;
  plVar1[0xe] = lVar2;
  *(uint *)(plVar1 + 0x15) = param_3 & 0xffffff;
  plVar1[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1b438,0,0);
  return;
}



/* Entry: 101c1ba04; end: 101c1ba3f;  */

void FUN_101c1ba04(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c1ba3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c1ba40; end: 101c1ba6b;  */

void FUN_101c1ba40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1ba6c,0,0);
  return;
}



/* Entry: 101c1ba6c; end: 101c1bb07;  */

void FUN_101c1ba6c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(undefined4 *)(unaff_x22 + 0x70);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 0x30);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c1bb08;
                    /* WARNING: Could not recover jumptable at 0x000101c1bb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
             *(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c1bb08; end: 101c1bb63;  */

void FUN_101c1bb08(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    uVar1 = 0x101c1bb84;
  }
  else {
    uVar1 = 0x101c1bb90;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101c1bb64; end: 101c1bb93;  */

undefined1  [16] FUN_101c1bb64(void)

{
  return ZEXT816(0x110457260);
}



/* Entry: 101c1bb94; end: 101c1bc53;  */

/* WARNING: Possible PIC construction at 0x000101c1bc30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c1bc34) */

void FUN_101c1bb94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110457378;
  func_0x000107c613fc(&UNK_110457378,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112e09330;
  func_0x0001000285a8(0x112e09330,&UNK_10d9df5f0);
  func_0x000107c613fc();
  pcVar3 = FUN_101c1be4c;
  func_0x0001000841fc(FUN_101c1be4c,puVar1,uVar2);
  func_0x000100084214(&UNK_10d9df5c0,0x2e,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c1bc54; end: 101c1bc6f;  */

/* WARNING: Possible PIC construction at 0x000101c1bc30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c1bc34) */

void FUN_101c1bc54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_110457378;
  func_0x000107c613fc(&UNK_110457378,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112e09330;
  func_0x0001000285a8(0x112e09330,&UNK_10d9df5f0);
  func_0x000107c613fc();
  pcVar4 = FUN_101c1be4c;
  func_0x0001000841fc(FUN_101c1be4c,puVar2,uVar3);
  func_0x000100084214(&UNK_10d9df5c0,0x2e,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c1bc70; end: 101c1be17;  */

void FUN_101c1bc70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_101c2357c();
  func_0x000100082720("SpotifyAuthInfoProviderServiceProvider",0x26,2);
  uVar1 = param_3;
  FUN_101c239c8();
  func_0x000100082720("SpotifyAuthURLBuilderServiceProvider",0x24,2);
  uVar2 = param_3;
  FUN_101c22dc4();
  func_0x000100082720("SpotifyCallbackURLParserServiceProvider",0x27,2);
  uVar3 = uVar1;
  func_0x000101c1f708();
  func_0x000100082720("SpotifyDeepLinkLauncherServiceProvider",0x26,2);
  func_0x0001000285a8(0x112e09338,&UNK_10d9df5f8);
  puVar4 = &UNK_1104573a0;
  func_0x000107c613fc(&UNK_1104573a0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  uVar5 = 0x101c1be58;
  func_0x0001000823a8(0x101c1be58,puVar4);
  func_0x000100082720("SpotifyAuthPluginRegistryServiceProvider",0x28,2);
  uVar6 = uVar5;
  FUN_101c2414c(uVar5,param_5);
  func_0x000107c61574(param_3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar5);
  func_0x000100082720("SpotifyAuthServiceImplementationEntryPointProvider",0x32,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 101c1be18; end: 101c1be4b;  */

void FUN_101c1be18(void)

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



/* Entry: 101c1be4c; end: 101c1be63;  */

void FUN_101c1be4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_101c2357c();
  func_0x000100082720("SpotifyAuthInfoProviderServiceProvider",0x26,2);
  uVar2 = uVar1;
  FUN_101c239c8();
  func_0x000100082720("SpotifyAuthURLBuilderServiceProvider",0x24,2);
  uVar3 = uVar1;
  FUN_101c22dc4();
  func_0x000100082720("SpotifyCallbackURLParserServiceProvider",0x27,2);
  uVar4 = uVar2;
  func_0x000101c1f708();
  func_0x000100082720("SpotifyDeepLinkLauncherServiceProvider",0x26,2);
  func_0x0001000285a8(0x112e09338,&UNK_10d9df5f8);
  puVar5 = &UNK_1104573a0;
  func_0x000107c613fc(&UNK_1104573a0,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(undefined8 *)(puVar5 + 0x28) = uVar1;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar1);
  uVar6 = 0x101c1be58;
  func_0x0001000823a8(0x101c1be58,puVar5);
  func_0x000100082720("SpotifyAuthPluginRegistryServiceProvider",0x28,2);
  uVar7 = uVar6;
  FUN_101c2414c(uVar6,uVar8);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SpotifyAuthServiceImplementationEntryPointProvider",0x32,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101c1be64; end: 101c1bf2f;  */

/* WARNING: Possible PIC construction at 0x000101c1bf04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c1bf14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c1bf08) */
/* WARNING: Removing unreachable block (ram,0x000101c1bf18) */

void FUN_101c1be64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104573c8;
  func_0x000107c613fc(&UNK_1104573c8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112e09340;
  func_0x0001000285a8(0x112e09340,&UNK_10d9df600);
  func_0x000107c613fc();
  pcVar3 = FUN_101c1bfa4;
  func_0x0001000841fc(FUN_101c1bfa4,puVar1,uVar2);
  func_0x000100084214("SpotifyAuthPluginRegistryServiceProvider",0x28,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c1bf30; end: 101c1bfa3;  */

void FUN_101c1bf30(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x01') {
    func_0x000101c200b0(param_6,param_5);
    pcVar1 = "SpotifySDKAuthPluginPluginProvider";
    uVar2 = 0x22;
    param_3 = param_6;
  }
  else {
    FUN_101c1bfb0(param_3,param_4,param_5);
    pcVar1 = "SpotifyDeepLinkAuthPluginPluginProvider";
    uVar2 = 0x27;
  }
  func_0x000100082720(pcVar1,uVar2,2);
  *param_1 = param_3;
  return;
}



/* Entry: 101c1bfa4; end: 101c1bfaf;  */

void FUN_101c1bfa4(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*param_2 == '\x01') {
    func_0x000101c200b0(uVar1,*(undefined8 *)(unaff_x20 + 0x20));
    pcVar3 = "SpotifySDKAuthPluginPluginProvider";
    uVar4 = 0x22;
    uVar2 = uVar1;
  }
  else {
    FUN_101c1bfb0(uVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
    pcVar3 = "SpotifyDeepLinkAuthPluginPluginProvider";
    uVar4 = 0x27;
  }
  func_0x000100082720(pcVar3,uVar4,2);
  *param_1 = uVar2;
  return;
}



/* Entry: 101c1bfb0; end: 101c1c047;  */

void FUN_101c1bfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e09348,&UNK_10d9df610);
  puVar1 = &UNK_110457470;
  func_0x000107c613fc(&UNK_110457470,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_101c1c0c8,puVar1);
  return;
}



/* Entry: 101c1c048; end: 101c1c0c7;  */

/* WARNING: Possible PIC construction at 0x000101c1c0a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c1c0ac) */

void FUN_101c1c048(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  param_1[3] = &UNK_110457520;
  param_1[4] = &PTR_DAT_110457488;
  puVar1 = &UNK_1104575c0;
  func_0x000107c613fc(&UNK_1104575c0,0x30,7);
  *param_1 = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = 500000000;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c1c0c8; end: 101c1c0d3;  */

/* WARNING: Possible PIC construction at 0x000101c1c0a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c1c0ac) */

void FUN_101c1c0c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  param_1[3] = &UNK_110457520;
  param_1[4] = &PTR_DAT_110457488;
  puVar3 = &UNK_1104575c0;
  func_0x000107c613fc(&UNK_1104575c0,0x30,7);
  *param_1 = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = 500000000;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  *(undefined8 *)(puVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c1c0d4; end: 101c1c19f;  */

void FUN_101c1c0d4(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x470) = param_6;
  *(undefined8 *)(unaff_x22 + 0x468) = param_5;
  *(undefined8 *)(unaff_x22 + 0x438) = param_4;
  *(undefined8 *)(unaff_x22 + 0x408) = param_3;
  *(undefined1 *)(unaff_x22 + 0x510) = param_2;
  *(undefined8 *)(unaff_x22 + 0x3d8) = param_1;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x478) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x480) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x488) = uVar2;
  lVar1 = 0;
  FUN_101c1ca88();
  *(long *)(unaff_x22 + 0x490) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x498) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x4a0) = uVar2;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x4a8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x4b0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x4b8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1c1a0,0,0);
  return;
}



/* Entry: 101c1c1a0; end: 101c1c2db;  */

void FUN_101c1c1a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x4b8);
  lVar8 = *(long *)(unaff_x22 + 0x4b0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x4a8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x470);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x468);
  func_0x000107c5eec4(uVar4);
  func_0x000107c5eeac();
  *(undefined8 *)(unaff_x22 + 0x4c0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x4c8) = param_2;
  (**(code **)(lVar8 + 8))(uVar4,uVar5);
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x2a8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x2b8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x2b0) = uVar11;
  func_0x000107c61418(unaff_x22 + 0x10,0,uVar7,&UNK_10d9df628,unaff_x22 + 0x290,uVar6);
  func_0x000100083b20(unaff_x22 + 0x2e8,uVar11);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x300);
  lVar8 = *(long *)(unaff_x22 + 0x308);
  func_0x0001000a8868(unaff_x22 + 0x2e8,uVar4);
  piVar3 = *(int **)(lVar8 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x4d0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101c1c2dc;
                    /* WARNING: Could not recover jumptable at 0x000101c1c2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (*(undefined8 *)(unaff_x22 + 0x3d8),*(undefined1 *)(unaff_x22 + 0x510),param_1,param_2,
             uVar4,lVar8);
  return;
}



/* Entry: 101c1c2dc; end: 101c1c33f;  */

void FUN_101c1c2dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x4d8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x4d0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c1c340;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x4c8));
    pcVar1 = FUN_101c1c960;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c1c340; end: 101c1c3e7;  */

void FUN_101c1c340(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x2e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_throwing_110350068)
            (unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x4a0),0x101c1c380,unaff_x22 + 0x310);
  return;
}



/* Entry: 101c1c3e8; end: 101c1c787;  */

void FUN_101c1c3e8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x498);
  lVar6 = *(long *)(unaff_x22 + 0x480);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x478);
  FUN_101c1cf7c(*(undefined8 *)(unaff_x22 + 0x4a0),uVar4);
  (**(code **)(lVar6 + 0x30))(uVar4,1,uVar3);
  if ((int)uVar4 == 1) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x4c8));
    uVar1 = 0;
    FUN_101c1f1bc();
    uVar4 = 0x112e09350;
    FUN_101c1ee38(0x112e09350,FUN_101c1f1bc,&UNK_10d9df8a0);
    uVar3 = uVar1;
    func_0x000107c613f8(uVar1,uVar4,0,0);
    *(undefined8 *)(unaff_x22 + 0x508) = uVar3;
    func_0x000107c6159c(uVar4,uVar1,4);
    func_0x000107c61654();
    uVar4 = *(undefined8 *)(unaff_x22 + 0x4a0);
    pcVar2 = FUN_101c1c8ec;
    lVar6 = unaff_x22 + 0x3b0;
    goto LAB_101c1c76c;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x488);
  (**(code **)(*(long *)(unaff_x22 + 0x480) + 0x20))
            (uVar4,*(undefined8 *)(unaff_x22 + 0x498),*(undefined8 *)(unaff_x22 + 0x478));
  func_0x000100083b20(unaff_x22 + 0x338);
  lVar6 = *(long *)(unaff_x22 + 0x350);
  lVar7 = *(long *)(unaff_x22 + 0x358);
  func_0x0001000a8868(unaff_x22 + 0x338,lVar6);
  (**(code **)(lVar7 + 8))(uVar4,lVar6,lVar7);
  *(long *)(unaff_x22 + 0x4e8) = lVar6;
  if (lVar6 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x488);
    lVar6 = *(long *)(unaff_x22 + 0x480);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x478);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x4c8));
    func_0x0001000834e4(unaff_x22 + 0x338);
    uVar1 = 0;
    FUN_101c1f1bc();
    uVar4 = 0x112e09350;
    FUN_101c1ee38(0x112e09350,FUN_101c1f1bc,&UNK_10d9df8a0);
    uVar3 = uVar1;
    func_0x000107c613f8(uVar1,uVar4,0,0);
    *(undefined8 *)(unaff_x22 + 0x500) = uVar3;
    (**(code **)(lVar6 + 0x10))(uVar4,uVar5,uVar9);
    func_0x000107c6159c(uVar4,uVar1,0);
    func_0x000107c61654();
    (**(code **)(lVar6 + 8))(uVar5,uVar9);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x4a0);
    pcVar2 = FUN_101c1c878;
    lVar6 = unaff_x22 + 0x3e0;
    goto LAB_101c1c76c;
  }
  uVar8 = *(ulong *)(unaff_x22 + 0x488);
  func_0x0001000834e4(unaff_x22 + 0x338);
  func_0x000100083b20(unaff_x22 + 0x388);
  lVar7 = *(long *)(unaff_x22 + 0x3a0);
  lVar10 = *(long *)(unaff_x22 + 0x3a8);
  func_0x0001000a8868(unaff_x22 + 0x388,lVar7);
  (**(code **)(lVar10 + 0x10))(uVar8,lVar7,lVar10);
  func_0x0001000834e4(unaff_x22 + 0x388);
  lVar10 = *(long *)(unaff_x22 + 0x4c8);
  if (lVar7 == 0) {
    func_0x000107c6142c(lVar10);
LAB_101c1c6c0:
    func_0x000107c6142c(lVar6);
    uVar1 = 0;
    FUN_101c1f1bc();
    uVar4 = 0x112e09350;
    FUN_101c1ee38(0x112e09350,FUN_101c1f1bc,&UNK_10d9df8a0);
    uVar3 = uVar1;
    func_0x000107c613f8(uVar1,uVar4,0,0);
    *(undefined8 *)(unaff_x22 + 0x4f8) = uVar3;
    if (lVar7 != 0) {
      func_0x000107c6142c(lVar7);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x488);
    lVar6 = *(long *)(unaff_x22 + 0x480);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x478);
    *(bool *)uVar4 = lVar7 != 0;
    func_0x000107c6159c(uVar4,uVar1,1);
    func_0x000107c61654();
    (**(code **)(lVar6 + 8))(uVar3,uVar9);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x4a0);
    pcVar2 = FUN_101c1c804;
    lVar6 = unaff_x22 + 0x410;
  }
  else {
    if ((uVar8 == *(ulong *)(unaff_x22 + 0x4c0)) && (lVar7 == lVar10)) {
      func_0x000107c6142c(lVar7);
      lVar7 = *(long *)(unaff_x22 + 0x4c8);
    }
    else {
      func_0x000107c605b8(uVar8,lVar7,*(ulong *)(unaff_x22 + 0x4c0),lVar10,0);
      func_0x000107c6142c(lVar10);
      if ((uVar8 & 1) == 0) goto LAB_101c1c6c0;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x488);
    lVar6 = *(long *)(unaff_x22 + 0x480);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x478);
    func_0x000107c6142c(lVar7);
    *(undefined8 *)(unaff_x22 + 0x4f0) = uVar4;
    (**(code **)(lVar6 + 8))(uVar3,uVar1);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x4a0);
    pcVar2 = FUN_101c1c788;
    lVar6 = unaff_x22 + 0x440;
  }
LAB_101c1c76c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)(unaff_x22 + 0x10,uVar4,pcVar2,lVar6);
  return;
}



/* Entry: 101c1c788; end: 101c1c79b;  */

void FUN_101c1c788(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1c79c,0,0);
  return;
}



/* Entry: 101c1c79c; end: 101c1c803;  */

void FUN_101c1c79c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x488);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x4b8));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c1c800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x4f0),*(undefined8 *)(unaff_x22 + 0x4e8));
  return;
}



/* Entry: 101c1c804; end: 101c1c817;  */

void FUN_101c1c804(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1c818,0,0);
  return;
}



/* Entry: 101c1c818; end: 101c1c877;  */

void FUN_101c1c818(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x488);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x4b8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c1c874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1c878; end: 101c1c88b;  */

void FUN_101c1c878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1c88c,0,0);
  return;
}



/* Entry: 101c1c88c; end: 101c1c8eb;  */

void FUN_101c1c88c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x488);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x4b8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c1c8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1c8ec; end: 101c1c8ff;  */

void FUN_101c1c8ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1c900,0,0);
  return;
}



/* Entry: 101c1c900; end: 101c1c95f;  */

void FUN_101c1c900(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x488);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x4b8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c1c95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1c960; end: 101c1c99f;  */

void FUN_101c1c960(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x2e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x4a0),FUN_101c1c9a0,unaff_x22 + 0x2c0);
  return;
}



/* Entry: 101c1c9a0; end: 101c1c9b3;  */

void FUN_101c1c9a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1c9b4,0,0);
  return;
}



/* Entry: 101c1c9b4; end: 101c1ca13;  */

void FUN_101c1c9b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x488);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x4b8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c1ca10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1ca14; end: 101c1ca27;  */

void FUN_101c1ca14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1ca28,0,0);
  return;
}



/* Entry: 101c1ca28; end: 101c1ca87;  */

void FUN_101c1ca28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x488);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x4b8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c1ca84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1ca88; end: 101c1cabf;  */

void FUN_101c1ca88(undefined8 param_1)

{
  if (lRam0000000112e093d0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e67afc4);
  return;
}



/* Entry: 101c1cac0; end: 101c1cadf;  */

void FUN_101c1cac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_4;
  *(undefined8 *)(unaff_x22 + 0x168) = param_5;
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  *(undefined8 *)(unaff_x22 + 0x158) = param_3;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1cae0,0,0);
  return;
}



/* Entry: 101c1cae0; end: 101c1cc17;  */

void FUN_101c1cae0(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x168);
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar3 != 0) {
    uVar4 = 0;
    FUN_101c1ca88();
    plVar5 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x170) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101c1cc18;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )(plVar5,*(undefined8 *)(unaff_x22 + 0x148),uVar4,uVar4,0,0,&UNK_10d9df788,unaff_x22 + 0x110,
      uVar4,uVar4);
    return;
  }
  lVar6 = 0;
  FUN_101c1ca88();
  *(long *)(unaff_x22 + 0x178) = lVar6;
  func_0x000107c615ac(unaff_x22 + 0x10,lVar6);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x180) = uVar7;
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x188) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c1cc54;
  lVar1 = *(long *)(unaff_x22 + 0x168);
  lVar6 = *(long *)(unaff_x22 + 0x150);
  lVar2 = *(long *)(unaff_x22 + 0x158);
  plVar5[0xb] = *(long *)(unaff_x22 + 0x160);
  plVar5[0xc] = lVar1;
  plVar5[9] = lVar6;
  plVar5[10] = lVar2;
  plVar5[7] = uVar7;
  plVar5[8] = unaff_x22 + 0x140;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1cfe0,0,0);
  return;
}



/* Entry: 101c1cc18; end: 101c1cc53;  */

void FUN_101c1cc18(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x000101c1cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c1cc54; end: 101c1ccff;  */

void FUN_101c1cc54(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 400) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x188));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1cda0,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x198) = plVar1;
  func_0x0001000285a8(0x112e093e0,&UNK_10d9df798);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101c1cd00;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101c1cd00; end: 101c1cd47;  */

void FUN_101c1cd00(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x198));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1cd48,0,0);
  return;
}



/* Entry: 101c1cd48; end: 101c1cd9f;  */

void FUN_101c1cd48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  func_0x000107c615a8(unaff_x22 + 0x10);
  FUN_101c1eec8(uVar2,uVar1,FUN_101c1ca88);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101c1cd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1cda0; end: 101c1ce3b;  */

void FUN_101c1cda0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x180));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(uVar4,uVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1a0) = plVar3;
  func_0x0001000285a8(0x112e093e0,&UNK_10d9df798);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c1ce3c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101c1ce3c; end: 101c1ce83;  */

void FUN_101c1ce3c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1ce84,0,0);
  return;
}



/* Entry: 101c1ce84; end: 101c1cec7;  */

void FUN_101c1ce84(void)

{
  long unaff_x22;
  
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101c1cec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1cec8; end: 101c1cf3f;  */

void FUN_101c1cec8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c1cf40;
  plVar5[0x2c] = lVar2;
  plVar5[0x2d] = lVar4;
  plVar5[0x2a] = lVar1;
  plVar5[0x2b] = lVar3;
  plVar5[0x29] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1cae0,0,0);
  return;
}



/* Entry: 101c1cf40; end: 101c1cf7b;  */

void FUN_101c1cf40(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x000101c1cf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c1cf7c; end: 101c1cfbf;  */

undefined8 FUN_101c1cf7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101c1ca88();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101c1cfc0; end: 101c1cfdf;  */

void FUN_101c1cfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1cfe0,0,0);
  return;
}



/* Entry: 101c1cfe0; end: 101c1d257;  */

void FUN_101c1cfe0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar8 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  lVar6 = 0;
  func_0x000107c5fd0c();
  pcVar11 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcVar11)(uVar5,1,1,lVar6);
  puVar7 = &UNK_110457570;
  func_0x000107c613fc(&UNK_110457570,0x40,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x20) = uVar1;
  *(undefined8 *)(puVar7 + 0x28) = uVar3;
  *(undefined8 *)(puVar7 + 0x30) = uVar10;
  *(undefined8 *)(puVar7 + 0x38) = uVar2;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar2);
  FUN_101c1db7c(uVar5,&UNK_10d9df7b0,puVar7);
  FUN_101c1e9e8(uVar5,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar5);
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar8);
  (*pcVar11)();
  puVar7 = &UNK_110457598;
  func_0x000107c613fc(&UNK_110457598,0x40,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x20) = uVar1;
  *(undefined8 *)(puVar7 + 0x28) = uVar3;
  *(undefined8 *)(puVar7 + 0x30) = uVar10;
  *(undefined8 *)(puVar7 + 0x38) = uVar2;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar2);
  FUN_101c1db7c(uVar8,&UNK_10d9df7c0,puVar7);
  FUN_101c1e9e8(uVar8,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar8);
  lVar6 = 0x112e093e8;
  func_0x0001000285a8(0x112e093e8,&UNK_10d9df7c8);
  uVar8 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar8;
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    plVar9 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar9;
    uVar10 = 0x112e093e0;
    func_0x0001000285a8(0x112e093e0,&UNK_10d9df798);
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_101c1d258;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(uVar8,0,0,uVar10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (uVar8,**(undefined8 **)(unaff_x22 + 0x40),FUN_101c1d2b4,unaff_x22 + 0x10);
  return;
}



/* Entry: 101c1d258; end: 101c1d2b3;  */

void FUN_101c1d258(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c1d2dc;
  }
  else {
    *(long *)(lVar2 + 0x78) = unaff_x20;
    pcVar1 = FUN_101c1d410;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c1d2b4; end: 101c1d2db;  */

void FUN_101c1d2b4(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c1d2dc;
  }
  else {
    *(long *)(unaff_x22 + 0x78) = unaff_x20;
    pcVar1 = FUN_101c1d410;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c1d2dc; end: 101c1d40f;  */

void FUN_101c1d2dc(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar2 = 0;
  FUN_101c1ca88();
  uVar3 = uVar4;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar4,1,lVar2);
  if ((int)uVar3 == 1) {
    FUN_101c1e9e8(uVar4,0x112e093e8,&UNK_10d9df7c8);
    func_0x000107c615c0(uVar4);
    uVar4 = 0;
    FUN_101c1f1bc(0);
    uVar3 = 0x112e09350;
    FUN_101c1ee38(0x112e09350,FUN_101c1f1bc,&UNK_10d9df8a0);
    func_0x000107c613f8(uVar4,uVar3,0,0);
    func_0x000107c6159c(uVar3,uVar4,4);
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar1 = *(undefined8 **)(unaff_x22 + 0x40);
    FUN_101c1eec8(uVar4,*(undefined8 *)(unaff_x22 + 0x38),FUN_101c1ca88);
    func_0x000107c615c0(uVar4);
    uVar4 = *puVar1;
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd94(uVar4,lVar2,uVar3,PTR___ss5ErrorWS_11034ee10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101c1d40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101c1d410; end: 101c1d443;  */

void FUN_101c1d410(void)

{
  long unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x000101c1d440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1d444; end: 101c1d4ef;  */

void FUN_101c1d444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c1d4f0;
  plVar3[4] = uVar2;
  plVar3[5] = param_5;
  lVar1 = 0;
  func_0x00010484ba98(0,param_4,param_5,param_6,param_7);
  plVar3[6] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[7] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[8] = uVar2;
  lVar1 = 0x112e09408;
  func_0x0001000285a8(0x112e09408,&UNK_10d9df7f0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[9] = uVar2;
  lVar1 = 0x112e09410;
  func_0x0001000285a8(0x112e09410,&UNK_10d9dfa90);
  plVar3[10] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0xb] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xc] = uVar2;
  lVar1 = 0x112e09418;
  func_0x0001000285a8(0x112e09418,&UNK_10d9df800);
  plVar3[0xd] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0xe] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xf] = uVar2;
  lVar1 = 0x112e09420;
  func_0x0001000285a8(0x112e09420,&UNK_10d9dfaa0);
  plVar3[0x10] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x11] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x12] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1d718,0,0);
  return;
}



/* Entry: 101c1d4f0; end: 101c1d54b;  */

void FUN_101c1d4f0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c1d54c;
  }
  else {
    pcVar1 = FUN_101c1d5bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c1d54c; end: 101c1d5bb;  */

void FUN_101c1d54c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(lVar1 + 0x20))(uVar2,uVar3,uVar4);
  (**(code **)(lVar1 + 0x38))(uVar2,0,1,uVar4);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c1d5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1d5bc; end: 101c1d717;  */

void FUN_101c1d5bc(void)

{
  long unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101c1d5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1d718; end: 101c1d92b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c1d718(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long unaff_x22;
  code *pcVar17;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar6 = 0x112e09428;
  func_0x0001000285a8(0x112e09428,&UNK_10d9df810);
  lVar7 = lVar6;
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(long *)(unaff_x22 + 0x98) = lVar7;
  uVar8 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar8;
  func_0x0001000285a8(0x112e09430,&UNK_10d9dfab0);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar15 = *(long *)(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(lVar15 + _DAT_113091ba8);
  func_0x000107c61174(uVar9);
  func_0x000107c61170(lVar15);
  uVar10 = uVar9;
  func_0x0001000b637c(uVar9);
  func_0x000107c61170(uVar9);
  pcVar11 = FUN_101c1dea8;
  func_0x0001000bfde0(FUN_101c1dea8,0,uVar5);
  func_0x000107c61574(uVar10);
  plVar16 = (long *)(unaff_x22 + 0x18);
  *plVar16 = lVar7;
  pcVar17 = *(code **)(*(long *)pcVar11 + 0x58);
  FUN_101c1ee78();
  (*pcVar17)(plVar16,lVar6,uVar10);
  func_0x000107c61574(pcVar11);
  plVar12 = plVar16;
  func_0x000107c614f0(plVar16);
  (**(code **)(lVar6 + 0x10))(uVar8,plVar12,lVar6);
  func_0x000107c615e8(plVar16);
  (**(code **)(lVar4 + 0x68))
            (uVar1,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             uVar2);
  func_0x0001000d52ec(uVar14,uVar1);
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  func_0x000107c5fd34(uVar13,uVar3);
  plVar12 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_101c1d92c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar12,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 101c1d92c; end: 101c1d973;  */

void FUN_101c1d92c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1d974,0,0);
  return;
}



/* Entry: 101c1d974; end: 101c1db7b;  */

/* WARNING: Removing unreachable block (ram,0x000101c1da64) */

void FUN_101c1d974(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = uVar5;
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 0x30))(uVar5,1,*(undefined8 *)(unaff_x22 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  if ((int)uVar3 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
              (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
    uVar5 = 0;
    func_0x000107c5fcbc(0);
    uVar3 = 0x112d4e4a0;
    FUN_101c1ee38(0x112d4e4a0,PTR___sScEMa_11034fba8,PTR___sScEs5ErrorsMc_11034fbb0);
    func_0x000107c613f8(uVar5,uVar3,0,0);
    func_0x000107c5f9d4(uVar3);
    func_0x000107c61654();
    func_0x000107c61574(uVar2);
    func_0x000107c61574(uVar1);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x80));
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    FUN_101c1eec8(uVar5,*(undefined8 *)(unaff_x22 + 0x40),&SUB_10484ba98);
    func_0x000107c5fd64();
    func_0x000107c61574(uVar2);
    func_0x000107c61574(uVar1);
    lVar4 = *(long *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x50));
    (**(code **)(lVar4 + 8))(uVar3,uVar5);
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(uVar8,uVar7,lVar4);
    func_0x000101c1ef0c(uVar7);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101c1dae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101c1db7c; end: 101c1dd0f;  */

void FUN_101c1db7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  func_0x0001000abe04(param_1,puVar4);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar8 + 0x30))(puVar4,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_101c1e9e8(puVar4,0x112d453c8,&UNK_10d90ac60);
    uVar6 = 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar8 + 8))(puVar4,lVar1);
    uVar6 = (ulong)puVar2 & 0xff | 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  if (lVar1 == 0) {
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x18);
    lVar8 = lVar1;
    func_0x000107c614f0();
    func_0x000107c615f0(lVar1);
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  uVar5 = *unaff_x20;
  uVar3 = 0;
  FUN_101c1ca88(0);
  puStack_80 = (undefined8 *)0x0;
  if (lVar7 != 0 || lVar8 != 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_80 = &uStack_70;
    lStack_60 = lVar8;
    lStack_58 = lVar7;
  }
  uStack_88 = 1;
  uStack_78 = uVar5;
  func_0x000107c615bc(uVar6,&uStack_88,uVar3,param_2,param_3);
  func_0x000107c61574();
  return;
}



/* Entry: 101c1dd10; end: 101c1dd5f;  */

void FUN_101c1dd10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c1dd60;
  plVar1[4] = param_5;
  lVar3 = 0x112e093f0;
  func_0x0001000285a8(0x112e093f0,&UNK_10daa9a80);
  plVar1[5] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[6] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[7] = uVar2;
  lVar3 = 0x112e093f8;
  func_0x0001000285a8(0x112e093f8,&UNK_10d9df7e0);
  plVar1[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[9] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[10] = uVar2;
  lVar3 = 0x112e09400;
  func_0x0001000285a8(0x112e09400,&UNK_10daa9a90);
  plVar1[0xb] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0xc] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xd] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1eafc,0,0);
  return;
}



/* Entry: 101c1dd60; end: 101c1ddf3;  */

void FUN_101c1dd60(undefined8 param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c1dda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  func_0x000107c61170(param_1);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x28) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101c1ddf4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
            (*(undefined8 *)(lVar2 + 0x18));
  return;
}



/* Entry: 101c1ddf4; end: 101c1dea7;  */

void FUN_101c1ddf4(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x28));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c1de30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101c1de54,0,0);
  return;
}



/* Entry: 101c1dea8; end: 101c1df5f;  */

/* WARNING: Possible PIC construction at 0x000101c1df48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c1df4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c1dea8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar4 = _DAT_1138153a0;
  lVar6 = *param_2;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,lVar6 + lVar4,lVar3);
  uVar5 = *(undefined8 *)(lVar6 + _DAT_1138153a8);
  lVar4 = 0;
  func_0x00010484ba98();
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x14)) = uVar5;
  puVar1 = (undefined8 *)(lVar6 + _DAT_1138153b0);
  uVar5 = puVar1[1];
  uVar7 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  *(undefined1 *)(param_1 + *(int *)(lVar4 + 0x1c)) = *(undefined1 *)(lVar6 + _DAT_1138153b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 101c1df60; end: 101c1dfdb;  */

void FUN_101c1df60(long param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x20;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar1 = unaff_x20[2];
  lVar3 = unaff_x20[3];
  plVar7 = (long *)0x520;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101c1dfdc;
  plVar7[0x8e] = lVar3;
  plVar7[0x8d] = lVar1;
  plVar7[0x87] = lVar2;
  plVar7[0x81] = lVar4;
  *(undefined1 *)(plVar7 + 0xa2) = param_2;
  plVar7[0x7b] = param_1;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar7[0x8f] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0x90] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x91] = uVar5;
  lVar4 = 0;
  FUN_101c1ca88();
  plVar7[0x92] = lVar4;
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x93] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x94] = uVar5;
  lVar4 = 0;
  func_0x000107c5eec8();
  plVar7[0x95] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0x96] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x97] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1c1a0,0,0);
  return;
}



/* Entry: 101c1dfdc; end: 101c1e033;  */

void FUN_101c1dfdc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c1e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c1e034; end: 101c1e043;  */

undefined1  [16] FUN_101c1e034(void)

{
  return ZEXT816(0x1104574a8);
}



/* Entry: 101c1e044; end: 101c1e09f;  */

long FUN_101c1e044(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c1e0a0; end: 101c1e167;  */

undefined8 * FUN_101c1e0a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 101c1e168; end: 101c1e1bb;  */

undefined8 * FUN_101c1e168(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c61574(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101c1e1bc; end: 101c1e253;  */

int FUN_101c1e1bc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c1e254; end: 101c1e327;  */

long * FUN_101c1e254(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar5 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
    lVar6 = *(long *)(lVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar6 + 0x30))(param_2,1,lVar2);
    if ((int)plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar5 + 0x40));
      return param_1;
    }
    (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar2);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar2);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101c1e328; end: 101c1e38f;  */

void FUN_101c1e328(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101c1e38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Entry: 101c1e390; end: 101c1e43f;  */

undefined8 FUN_101c1e390(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar1);
  (**(code **)(lVar3 + 0x38))(param_1,0,1,lVar1);
  return param_1;
}



/* Entry: 101c1e440; end: 101c1e53f;  */

undefined8 FUN_101c1e440(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  uVar2 = param_1;
  (*pcVar5)(param_1,1,lVar1);
  uVar3 = param_2;
  (*pcVar5)(param_2,1,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 != 0) {
      (**(code **)(lVar4 + 8))(param_1,lVar1);
      goto LAB_101c1e4e8;
    }
    (**(code **)(lVar4 + 0x18))(param_1,param_2,lVar1);
  }
  else {
    if ((int)uVar3 != 0) {
LAB_101c1e4e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  }
  return param_1;
}



/* Entry: 101c1e540; end: 101c1e5ef;  */

undefined8 FUN_101c1e540(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  (**(code **)(lVar3 + 0x20))(param_1,param_2,lVar1);
  (**(code **)(lVar3 + 0x38))(param_1,0,1,lVar1);
  return param_1;
}



/* Entry: 101c1e5f0; end: 101c1e6ef;  */

undefined8 FUN_101c1e5f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  uVar2 = param_1;
  (*pcVar5)(param_1,1,lVar1);
  uVar3 = param_2;
  (*pcVar5)(param_2,1,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 != 0) {
      (**(code **)(lVar4 + 8))(param_1,lVar1);
      goto LAB_101c1e698;
    }
    (**(code **)(lVar4 + 0x28))(param_1,param_2,lVar1);
  }
  else {
    if ((int)uVar3 != 0) {
LAB_101c1e698:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  }
  return param_1;
}



/* Entry: 101c1e6f0; end: 101c1e707;  */

void FUN_101c1e6f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101c1e708; end: 101c1e73f;  */

void FUN_101c1e708(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000101c1e73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  return;
}



/* Entry: 101c1e740; end: 101c1e743;  */

void FUN_101c1e740(void)

{
  return;
}



/* Entry: 101c1e744; end: 101c1e7d7;  */

void FUN_101c1e744(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000101c1e780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,1,lVar1);
  return;
}



/* Entry: 101c1e7d8; end: 101c1e857;  */

void FUN_101c1e7d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c1ef48;
  plVar5[0xb] = lVar2;
  plVar5[0xc] = lVar4;
  plVar5[9] = lVar1;
  plVar5[10] = lVar3;
  plVar5[7] = param_1;
  plVar5[8] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1cfe0,0,0);
  return;
}



/* Entry: 101c1e858; end: 101c1e8e3;  */

void FUN_101c1e858(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar10 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar9 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x101c1ef4c;
  plVar9[2] = param_1;
  lVar6 = 0;
  func_0x000107c5ede0(0,uVar1,uVar4);
  plVar9[3] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar9[4] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[5] = uVar7;
  plVar8 = (long *)0xb0;
  func_0x000107c615b8();
  plVar9[6] = (long)plVar8;
  *plVar8 = (long)plVar9;
  plVar8[1] = (long)FUN_101c1d4f0;
  plVar8[4] = uVar7;
  plVar8[5] = lVar10;
  lVar6 = 0;
  func_0x00010484ba98(0,uVar2,lVar10,uVar3,uVar5);
  plVar8[6] = lVar6;
  lVar10 = *(long *)(lVar6 + -8);
  plVar8[7] = lVar10;
  uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[8] = uVar7;
  lVar10 = 0x112e09408;
  func_0x0001000285a8(0x112e09408,&UNK_10d9df7f0);
  uVar7 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[9] = uVar7;
  lVar10 = 0x112e09410;
  func_0x0001000285a8(0x112e09410,&UNK_10d9dfa90);
  plVar8[10] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar8[0xb] = lVar10;
  uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0xc] = uVar7;
  lVar10 = 0x112e09418;
  func_0x0001000285a8(0x112e09418,&UNK_10d9df800);
  plVar8[0xd] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar8[0xe] = lVar10;
  uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0xf] = uVar7;
  lVar10 = 0x112e09420;
  func_0x0001000285a8(0x112e09420,&UNK_10d9dfaa0);
  plVar8[0x10] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar8[0x11] = lVar10;
  uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x12] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1d718,0,0);
  return;
}



/* Entry: 101c1e8e4; end: 101c1e91f;  */

void FUN_101c1e8e4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c1e920; end: 101c1e9ab;  */

void FUN_101c1e920(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101c1e9ac;
  plVar7[2] = param_1;
  plVar7[3] = lVar9;
  plVar6 = (long *)0x80;
  func_0x000107c615b8(0x80,uVar1,uVar3,lVar9,lVar4,uVar2,uVar5);
  plVar7[4] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = (long)FUN_101c1dd60;
  plVar6[4] = lVar4;
  lVar9 = 0x112e093f0;
  func_0x0001000285a8(0x112e093f0,&UNK_10daa9a80);
  plVar6[5] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar6[6] = lVar9;
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[7] = uVar8;
  lVar9 = 0x112e093f8;
  func_0x0001000285a8(0x112e093f8,&UNK_10d9df7e0);
  plVar6[8] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar6[9] = lVar9;
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[10] = uVar8;
  lVar9 = 0x112e09400;
  func_0x0001000285a8(0x112e09400,&UNK_10daa9a90);
  plVar6[0xb] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar6[0xc] = lVar9;
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xd] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1eafc,0,0);
  return;
}


