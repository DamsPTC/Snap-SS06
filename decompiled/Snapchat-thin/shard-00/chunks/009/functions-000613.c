/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bbcef4; end: 100bbcf43; -[SCLensDataFetcher addListener:] */

/* WARNING: Possible PIC construction at 0x000100bbcf30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bbcf34) */

void FUN_100bbcef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3dd34(param_1);
  func_0x000107c61180();
  func_0x000107c3d740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100bbcf44; end: 100bbcf4b; -[SCLensDataFetcher announcer] */

undefined8 FUN_100bbcf44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100bbcf4c; end: 100bbcf9b; -[SCLensDataFetcherListenerAnnouncer addListener:] */

undefined8 FUN_100bbcf4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_100bbcf9c(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 100bbcf9c; end: 100bbd6bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bbcf9c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_a0 [16];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined1 uStack_69;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar7 = &UNK_11077d448;
  puVar1 = puVar7;
  func_0x000107c613fc(&UNK_11077d448,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077d470;
  func_0x000107c613fc(&UNK_11077d470,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_1044e054c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x113080ca0;
  FUN_1000285a8(0x113080ca0,&UNK_10dd0cb40);
  uVar4 = 0x113080d08;
  FUN_100bbdba8(0x113080d08,0x113080ca0,&UNK_10dd0cb40);
  puVar1 = &UNK_1044e0554;
  func_0x000107c5f21c(&UNK_1044e0554,puVar2,uVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar1);
  puVar1 = puVar7;
  func_0x000107c613fc(&UNK_11077d448,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077d498;
  func_0x000107c613fc(&UNK_11077d498,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_1044e060c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x113080ca8;
  FUN_1000285a8(0x113080ca8,&UNK_10dd0cb08);
  uVar4 = 0x113080d18;
  FUN_100bbdba8(0x113080d18,0x113080ca8,&UNK_10dd0cb08);
  puVar1 = &UNK_1044e0614;
  func_0x000107c5f21c(&UNK_1044e0614,puVar2,uVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar1);
  puVar1 = puVar7;
  func_0x000107c613fc(&UNK_11077d448,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077d4c0;
  func_0x000107c613fc(&UNK_11077d4c0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_1044e06f0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar5 = 0x113080cb0;
  FUN_1000285a8(0x113080cb0,&UNK_10dd0cb50);
  uVar6 = 0x113080d28;
  FUN_100bbdba8(0x113080d28,0x113080cb0,&UNK_10dd0cb50);
  puVar1 = &UNK_1044e06f8;
  func_0x000107c5f21c(&UNK_1044e06f8,puVar2,uVar5,uVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar1);
  puVar1 = puVar7;
  func_0x000107c613fc(&UNK_11077d448,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077d4e8;
  func_0x000107c613fc(&UNK_11077d4e8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_1044e07b4;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  puVar1 = &UNK_1044e1d5c;
  func_0x000107c5f21c(&UNK_1044e1d5c,puVar2,uVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar1);
  puVar1 = puVar7;
  func_0x000107c613fc(&UNK_11077d448,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077d510;
  func_0x000107c613fc(&UNK_11077d510,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_1044e08a8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x113080cb8;
  FUN_1000285a8(0x113080cb8,&UNK_10dd0cb10);
  uVar4 = 0x113080d40;
  FUN_100bbdba8(0x113080d40,0x113080cb8,&UNK_10dd0cb10);
  puVar1 = &UNK_1044e08b0;
  func_0x000107c5f21c(&UNK_1044e08b0,puVar2,uVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar1);
  puVar1 = puVar7;
  func_0x000107c613fc(&UNK_11077d448,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077d538;
  func_0x000107c613fc(&UNK_11077d538,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_1044e096c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x113080cc0;
  FUN_1000285a8(0x113080cc0,&UNK_10dd0cb60);
  uVar4 = 0x113080d50;
  FUN_100bbdba8(0x113080d50,0x113080cc0,&UNK_10dd0cb60);
  puVar1 = &UNK_1044e0974;
  func_0x000107c5f21c(&UNK_1044e0974,puVar2,uVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar1);
  puVar1 = puVar7;
  func_0x000107c613fc(&UNK_11077d448,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077d560;
  func_0x000107c613fc(&UNK_11077d560,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_1044e0afc;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x113080cc8;
  FUN_1000285a8(0x113080cc8,&UNK_10dd0cb18);
  uVar4 = 0x113080d60;
  FUN_100bbdba8(0x113080d60,0x113080cc8,&UNK_10dd0cb18);
  puVar1 = &UNK_1044e0b04;
  func_0x000107c5f21c(&UNK_1044e0b04,puVar2,uVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar1);
  puVar1 = puVar7;
  func_0x000107c613fc(&UNK_11077d448,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077d588;
  func_0x000107c613fc(&UNK_11077d588,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_1044e0bb0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x113080cd0;
  FUN_1000285a8(0x113080cd0,&UNK_10dd0cb70);
  uVar4 = 0x113080d70;
  FUN_100bbdba8(0x113080d70,0x113080cd0,&UNK_10dd0cb70);
  puVar1 = &UNK_1044e0bb8;
  func_0x000107c5f21c(&UNK_1044e0bb8,puVar2,uVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar1);
  func_0x000107c613fc(&UNK_11077d448,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,param_1);
  puVar2 = &UNK_11077d5b0;
  func_0x000107c613fc(&UNK_11077d5b0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_1044e0c88;
  *(undefined **)(puVar2 + 0x18) = puVar7;
  uVar3 = 0x113080cd8;
  FUN_1000285a8(0x113080cd8,&UNK_10dd0cb20);
  uVar4 = 0x113080d80;
  FUN_100bbdba8(0x113080d80,0x113080cd8,&UNK_10dd0cb20);
  puVar7 = &UNK_1044e1d60;
  func_0x000107c5f21c(&UNK_1044e1d60,puVar2,uVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11077d5d8;
  func_0x000107c613fc(&UNK_11077d5d8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  ppuStack_80 = &puStack_68;
  uVar3 = 0x112d518a8;
  puStack_90 = puVar7;
  uStack_88 = param_1;
  FUN_1000285a8(0x112d518a8,&UNK_10d918730);
  FUN_100087bd4(&uStack_69,FUN_100bc08e0,auStack_a0,uVar3);
  func_0x000107c61574(puVar7);
  func_0x000107c6142c(puStack_68);
  return 1;
}



/* Entry: 100bbd6c0; end: 100bbd6e3;  */

void FUN_100bbd6c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bbd6e4; end: 100bbd703;  */

void FUN_100bbd6e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bbd704; end: 100bbd743;  */

void FUN_100bbd704(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 100bbd744; end: 100bbd7af;  */

void FUN_100bbd744(long param_1)

{
  int iVar1;
  long alStack_30 [2];
  
  FUN_100bbd704(alStack_30,param_1 + 0x10);
  if (alStack_30[0] != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (((bool)*(char *)(alStack_30[0] + 0xb1) != (iVar1 == 0)) &&
       (*(bool *)(alStack_30[0] + 0xb1) = iVar1 == 0, iVar1 == 0)) {
      FUN_100bbd7b0();
    }
  }
  func_0x000100ade750(alStack_30);
  return;
}



/* Entry: 100bbd7b0; end: 100bbdaef;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100bbd7b0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long *plVar3;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long lVar4;
  undefined1 auStack_280 [360];
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_58 [5];
  
  if (((*(char *)(param_1 + 0xb1) == '\x01') && ((*(byte *)(param_1 + 0xb0) & 1) == 0)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    func_0x0001067e1edc();
    lVar4 = extraout_x8 + (extraout_x9 & 0xffffffff) * 0x178;
    func_0x0001067e09c0(auStack_280,lVar4);
    uStack_110 = *(undefined8 *)(lVar4 + 0x170);
    uStack_118 = *(ulong *)(lVar4 + 0x168);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    func_0x0001067e07d8(uVar1,auStack_280);
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x20))
                (*(long **)(param_1 + 0x58),auStack_280,uVar1,uStack_110,uStack_118 & 0xffffffff);
      *(undefined1 *)(param_1 + 0xb0) = 1;
      (**(code **)(**(long **)(param_1 + 0x30) + 0x10))
                (auStack_d0,*(long **)(param_1 + 0x30),auStack_280,uVar1);
      func_0x000107c60c94(&uStack_108,auStack_280);
      uStack_e8 = *(undefined8 *)(param_1 + 0x10);
      uStack_f0 = *(undefined8 *)(param_1 + 8);
      if (*(long *)(param_1 + 0x10) != 0) {
        do {
          FUN_100bbc2b0();
        } while (extraout_w10 != 0);
      }
      alStack_58[3] = 0;
      alStack_58[4] = 0;
      alStack_58[1] = 0;
      alStack_58[2] = 0;
      func_0x0001067db8fc(&uStack_a0,auStack_d0,alStack_58 + 1);
      func_0x0001067db958(alStack_58 + 3,&uStack_a0);
      func_0x0001067db748(&uStack_a0);
      func_0x0001067e1fa0();
      FUN_1003b69cc(alStack_58);
      FUN_1003b6c18(&uStack_70,alStack_58[0]);
      lStack_78 = alStack_58[0];
      uStack_90 = uStack_f8;
      uStack_98 = uStack_100;
      uStack_a0 = uStack_108;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_80 = uStack_e8;
      uStack_88 = uStack_f0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      alStack_58[0] = 0;
      lStack_b0 = 0;
      lStack_a8 = 0;
      lStack_c0 = alStack_58[3] + 0x38;
      lStack_b8 = CONCAT71(lStack_b8._1_7_,1);
      func_0x000107c60d88();
      lVar4 = alStack_58[3];
      func_0x0001067e0cbc();
      if ((int)lVar4 == 0) {
        puVar2 = (undefined8 *)0x38;
        func_0x000107c60e20();
        lVar4 = lStack_78;
        *puVar2 = &PTR_DAT_11093ef18;
        puVar2[3] = uStack_90;
        puVar2[2] = uStack_98;
        puVar2[1] = uStack_a0;
        uStack_a0 = 0;
        uStack_98 = 0;
        puVar2[5] = uStack_80;
        puVar2[4] = uStack_88;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        puVar2[6] = lVar4;
        plVar3 = *(long **)(alStack_58[3] + 0x80);
        *(undefined8 **)(alStack_58[3] + 0x80) = puVar2;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
      else {
        func_0x0001067db958(&lStack_b0,alStack_58 + 3);
      }
      FUN_1000df5a0(&lStack_c0);
      if (lStack_b0 != 0) {
        lStack_c0 = lStack_b0;
        lStack_b8 = lStack_a8;
        if (lStack_a8 != 0) {
          do {
            FUN_100bbc2b0();
          } while (extraout_w10_00 != 0);
        }
        func_0x0001067e0d08(&uStack_a0,&lStack_c0);
        func_0x0001067db748(&lStack_c0);
      }
      uStack_d8 = uStack_68;
      uStack_e0 = uStack_70;
      uStack_70 = 0;
      uStack_68 = 0;
      func_0x0001067db748(&lStack_b0);
      func_0x0001067e0f60(&uStack_a0);
      FUN_1003b6c64(&uStack_70);
      lVar4 = alStack_58[0];
      alStack_58[0] = 0;
      if (lVar4 != 0) {
        func_0x0001067e1f3c();
      }
      func_0x0001067e1f84();
      FUN_1003b6c64(&uStack_e0);
      func_0x0001067e0980(&uStack_108);
      func_0x0001067db748(auStack_d0);
    }
    func_0x0001067dad64(auStack_280);
  }
  return;
}



/* Entry: 100bbdaf0; end: 100bbdafb;  */

void FUN_100bbdaf0(void)

{
  return;
}



/* Entry: 100bbdafc; end: 100bbdb3b;  */

void FUN_100bbdafc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 100bbdb3c; end: 100bbdba7;  */

void FUN_100bbdb3c(long param_1)

{
  int iVar1;
  long alStack_30 [2];
  
  FUN_100bbdafc(alStack_30,param_1 + 0x10);
  if (alStack_30[0] != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (((bool)*(char *)(alStack_30[0] + 0xa9) != (iVar1 == 0)) &&
       (*(bool *)(alStack_30[0] + 0xa9) = iVar1 == 0, iVar1 == 0)) {
      FUN_100bbdbec();
    }
  }
  func_0x000100bbb848(alStack_30);
  return;
}



/* Entry: 100bbdba8; end: 100bbdbeb;  */

void FUN_100bbdba8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    FUN_10002969c(param_2,param_3);
    puVar1 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
    func_0x000107c61520(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,param_2)
    ;
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 100bbdbec; end: 100bbdf67;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100bbdbec(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar3;
  undefined1 auStack_1b8 [32];
  undefined1 auStack_198 [24];
  undefined4 uStack_180;
  undefined8 uStack_178;
  ulong uStack_150;
  long lStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_78 [5];
  
  if (((*(char *)(param_1 + 0xa9) == '\x01') && ((*(byte *)(param_1 + 0xa8) & 1) == 0)) &&
     (*(long *)(param_1 + 0xa0) != 0)) {
    func_0x0001067e2298(auStack_1b8,
                        *(long *)(*(long *)(param_1 + 0x80) +
                                 (*(ulong *)(param_1 + 0x98) / 0x1c) * 8) +
                        (*(ulong *)(param_1 + 0x98) % 0x1c) * 0x90);
    if (*(long *)(param_1 + 0x30) == 0) {
      func_0x0001067e2170(param_1);
    }
    else {
      plVar3 = *(long **)(param_1 + 0x68);
      lVar1 = *(long *)(param_1 + 0x58);
      func_0x000100bbc524(lVar1);
      (*extraout_x8)();
      (**(code **)(*plVar3 + 0x20))
                (plVar3,auStack_198,uStack_150 & 0xfffffffffffffffc,uStack_180,lStack_138 < lVar1,
                 uStack_178);
      *(undefined1 *)(param_1 + 0xa8) = 1;
      (**(code **)(**(long **)(param_1 + 0x30) + 0x10))
                (auStack_f0,*(long **)(param_1 + 0x30),auStack_1b8);
      func_0x000107c60c94(&uStack_128,auStack_198);
      uStack_108 = *(undefined8 *)(param_1 + 0x10);
      uStack_110 = *(undefined8 *)(param_1 + 8);
      if (*(long *)(param_1 + 0x10) != 0) {
        do {
          func_0x000100bbc514();
        } while (extraout_w10 != 0);
      }
      alStack_78[3] = 0;
      alStack_78[4] = 0;
      alStack_78[1] = 0;
      alStack_78[2] = 0;
      FUN_1003b8394(&uStack_c0,auStack_f0,alStack_78 + 1);
      FUN_1003b8400(alStack_78 + 3,&uStack_c0);
      FUN_1003b6c64(&uStack_c0);
      FUN_1003b6c64(alStack_78 + 1);
      FUN_1003b69cc(alStack_78);
      FUN_1003b6c18(&uStack_90,alStack_78[0]);
      lStack_98 = alStack_78[0];
      uStack_b0 = uStack_118;
      uStack_b8 = uStack_120;
      uStack_c0 = uStack_128;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_a0 = uStack_108;
      uStack_a8 = uStack_110;
      uStack_110 = 0;
      uStack_108 = 0;
      alStack_78[0] = 0;
      lStack_d0 = 0;
      lStack_c8 = 0;
      lStack_e0 = alStack_78[3] + 0x38;
      lStack_d8 = CONCAT71(lStack_d8._1_7_,1);
      func_0x000107c60d88();
      lVar1 = alStack_78[3];
      func_0x0001052a9e98();
      if ((int)lVar1 == 0) {
        puVar2 = (undefined8 *)0x38;
        func_0x000107c60e20();
        lVar1 = lStack_98;
        *puVar2 = &PTR_DAT_11093f020;
        puVar2[3] = uStack_b0;
        puVar2[2] = uStack_b8;
        puVar2[1] = uStack_c0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        puVar2[5] = uStack_a0;
        puVar2[4] = uStack_a8;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        puVar2[6] = lVar1;
        plVar3 = *(long **)(alStack_78[3] + 0x80);
        *(undefined8 **)(alStack_78[3] + 0x80) = puVar2;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
      else {
        FUN_1003b8400(&lStack_d0,alStack_78 + 3);
      }
      FUN_1000df5a0(&lStack_e0);
      if (lStack_d0 != 0) {
        lStack_e0 = lStack_d0;
        lStack_d8 = lStack_c8;
        if (lStack_c8 != 0) {
          do {
            func_0x000100bbc514();
          } while (extraout_w10_00 != 0);
        }
        func_0x0001067e233c(&uStack_c0,&lStack_e0);
        FUN_1003b6c64(&lStack_e0);
      }
      uStack_f8 = uStack_88;
      uStack_100 = uStack_90;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_1003b6c64(&lStack_d0);
      func_0x0001067e2460(&uStack_c0);
      FUN_1003b6c64(&uStack_90);
      lVar1 = alStack_78[0];
      alStack_78[0] = 0;
      if (lVar1 != 0) {
        func_0x0001067e2e40();
      }
      FUN_1003b6c64(alStack_78 + 3);
      FUN_1003b6c64(&uStack_100);
      func_0x0001067e2234(&uStack_128);
      FUN_1003b6c64(auStack_f0);
    }
    func_0x0001067e230c(auStack_1b8);
  }
  return;
}



/* Entry: 100bbdf68; end: 100bbdf73;  */

void FUN_100bbdf68(void)

{
  return;
}



/* Entry: 100bbdf74; end: 100bbdf77; -[SCPersonDataCoordinator personDataForOneOnOneFeedIds:groupFeedIds:multiRecipientFeedIds:fetchContexts:completion:] */

void FUN_100bbdf74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0a970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__entitiesForOneOnOneFeedIds_grou_1125603f8);
  return;
}



/* Entry: 100bbdf78; end: 100bbe393; -[SCPersonDataCoordinator _entitiesForOneOnOneFeedIds:groupFeedIds:multiRecipientFeedIds:fetchContexts:completion:] */

/* WARNING: Possible PIC construction at 0x000100bbe23c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bbe240) */
/* WARNING: Removing unreachable block (ram,0x000100bbe36c) */
/* WARNING: Removing unreachable block (ram,0x000100bbe38c) */
/* WARNING: Removing unreachable block (ram,0x000100bbe348) */

void FUN_100bbdf78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_80;
  
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c61160();
  func_0x000107c3d7a0();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c61160();
  func_0x000107c3d7a0();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  uVar13 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  func_0x000107c61174(param_5);
  lVar5 = param_5;
  func_0x000107c4080c();
  if (lVar5 != 0) {
    lVar8 = *plStack_1b0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1b0 != lVar8) {
          func_0x000107c61128(param_5);
        }
        lVar9 = *(long *)(lStack_1b8 + lVar10 * 8);
        func_0x000107cfa0e0();
        func_0x000107c61180();
        func_0x000107c56bd8(puVar3);
        uVar13 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        func_0x000107c61174(lVar9);
        lVar6 = lVar9;
        func_0x000107c4080c();
        if (lVar6 != 0) {
          lVar12 = *plStack_1f0;
          do {
            lVar11 = 0;
            do {
              if (*plStack_1f0 != lVar12) {
                func_0x000107c61128(lVar9);
              }
              func_0x000107c3d798(puVar4);
              puVar7 = puVar1;
              func_0x000107c40404();
              if ((((ulong)puVar7 & 1) == 0) &&
                 (puVar7 = puVar2, func_0x000107c40404(), ((ulong)puVar7 & 1) == 0)) {
                func_0x000107c3d798(puVar1);
                func_0x000107c3d798(puVar2);
              }
              lVar11 = lVar11 + 1;
            } while (lVar6 != lVar11);
            lVar6 = lVar9;
            func_0x000107c4080c();
          } while (lVar6 != 0);
        }
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar9);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar5);
      lVar5 = param_5;
      func_0x000107c4080c();
    } while (lVar5 != 0);
  }
  func_0x000107c61170(param_5);
  func_0x000107c6071c();
  func_0x000107c61144(auStack_208,param_1);
  func_0x000107c61174(param_6);
  uStack_210 = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(auStack_218,auStack_208);
  return;
}



/* Entry: 100bbe394; end: 100bbe44b;  */

void FUN_100bbe394(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x40));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x48));
  func_0x000107c60bc8(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 100bbe44c; end: 100bbe45b;  */

void FUN_100bbe44c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100bbe45c; end: 100bbe547; -[SCDefaultFriendsFeedAddFriendsDataCoordinator snapchattersWithCompletion:] */

void FUN_100bbe45c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c3bb74();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x88);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar1 = uVar2;
    func_0x000107c425ec();
    func_0x000107c61170(uVar2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(param_3 + 0x10))
                (param_3,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
                 PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48);
      goto LAB_100bbe52c;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar3);
  func_0x000107c61170(param_3);
LAB_100bbe52c:
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100bbe548; end: 100bbe5c7; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _isQualifiedToShowAddFriendsSections] */

undefined8 FUN_100bbe548(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4a2ac();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100bbe5c8; end: 100bbe62f; -[SCContactSyncCTAQualificationServiceProvider _createContactSyncCTAQualificationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bbe5c8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_1127260b4;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126bb530;
  func_0x000107c610f4(PTR_PTR_1126bb530);
  func_0x000107c48838();
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bbe630; end: 100bbe6a3; -[SCContactSyncCTAQualificationProviderImpl initWithSnapchattersDataFetcher:] */

undefined1 * FUN_100bbe630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e9250;
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



/* Entry: 100bbe6a4; end: 100bbe6e7; -[SCContactSyncCTAQualificationProviderImpl isQualifiedForFriendsFeedContactSyncCTA] */

bool FUN_100bbe6a4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4d324();
  func_0x000107c61170(uVar1);
  return uVar2 < 0x14;
}



/* Entry: 100bbe6e8; end: 100bbe7bb; -[SCSnapchattersDataProvider mutualFriendsCount] */

long FUN_100bbe6e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x000107c4d344();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c4e124(uVar2);
    func_0x000107c61180();
    func_0x000107c3e7c4();
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x38);
    func_0x000107c4e124(lVar3);
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c5b468();
    func_0x000107c61180();
    lVar4 = lVar5;
    func_0x0001006372a4();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar3);
    lVar5 = lVar4;
    func_0x000107c40808(lVar4);
    func_0x000107c61170(lVar4);
  }
  else {
    lVar5 = lVar1;
    func_0x000107c5dc0c(lVar1);
    lVar5 = (long)(int)lVar5;
  }
  func_0x000107c61170(lVar1);
  return lVar5;
}



/* Entry: 100bbe7bc; end: 100bbe837; -[SCSnapchattersFetchedResultObserverRepositoryV1 mutualSnapchattersCountSummary] */

void FUN_100bbe7bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c40824();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100bbe838; end: 100bbe943; -[SCSnapchattersCountSummaryObserver initWithDocObjectContext:countType:] */

undefined8 *
FUN_100bbe838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR_PTR_1126fdcf0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc0000000;
    pcStack_68 = FUN_100bbe9a4;
    puStack_60 = &UNK_110ab7540;
    ppuVar2 = &puStack_78;
    uStack_58 = param_4;
    func_0x000107c61184(ppuVar2);
    puVar3 = PTR_PTR_1126c0ae8;
    func_0x000107c610f4();
    uVar4 = 0x11;
    FUN_1000819a8(0x11,0);
    func_0x000107c61180();
    func_0x000107c46664();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(ppuVar2);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100bbe944; end: 100bbe9a3; -[SCSnapchattersCountSummaryObserver countSummary] */

void FUN_100bbe944(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x000107c5dc0c();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126db128;
  func_0x000107c61158(PTR_PTR_1126db128);
  uVar4 = uVar2;
  func_0x000107c6115c(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bbe9a4; end: 100bbe9b3;  */

void FUN_100bbe9a4(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126db128);
  if (param_2 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_90,param_2);
  }
  puVar3 = &uStack_101;
  FUN_100bbebcc();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_110ab8640;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_110ab85e0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar4 = &uStack_90;
  uStack_148 = uVar1;
  puStack_c8 = puVar3;
  pppuStack_c0 = &ppuStack_178;
  FUN_1000e77a0(puVar4,&ppuStack_100,&lStack_190,&uStack_194);
  func_0x000107c61180();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    func_0x000107c60e14();
  }
  plVar2 = plStack_98;
  ppuStack_100 = &PTR_DAT_110ab85e0;
  plStack_98 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    func_0x000107c60e14();
  }
  plVar2 = plStack_110;
  ppuStack_178 = &PTR_DAT_110ab8640;
  plStack_110 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_68);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  puVar5 = puVar4;
  func_0x000107c43638(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100bbe9b4; end: 100bbebcb;  */

void FUN_100bbe9b4(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126db128);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_100bbebcc();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_110ab8640;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_110ab85e0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  uStack_148 = param_2;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  FUN_1000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  func_0x000107c61180();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    func_0x000107c60e14();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_DAT_110ab85e0;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    func_0x000107c60e14();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110ab8640;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_68);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  puVar4 = puVar3;
  func_0x000107c43638(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100bbebcc; end: 100bbec83;  */

undefined8 FUN_100bbebcc(void)

{
  int iVar1;
  
  if ((bRam0000000113829938 & 1) == 0) {
    iVar1 = 0x13829938;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001138298d0 = 0xe;
      puRam00000001138298d8 = &UNK_10f50d059;
      uRam00000001138298e0 = 0x10001;
      pcRam00000001138298e8 = FUN_100bc003c;
      puRam00000001138298f0 = &UNK_108c3ac6c;
      ppuRam00000001138298c8 = &PTR_DAT_110ab8640;
      uRam0000000113829908 = 0;
      uRam0000000113829900 = 0;
      uRam0000000113829918 = 0;
      uRam0000000113829910 = 0;
      uRam0000000113829928 = 0;
      uRam0000000113829920 = 0;
      uRam0000000113829930 = 0;
      func_0x000107c60e34(&DAT_108c0ffb4,0x1138298c8,0x100000000);
      func_0x000107c60e4c(0x113829938);
    }
  }
  return 0x1138298c8;
}



/* Entry: 100bbec84; end: 100bbec8f; +[SCSnapchattersCountSummary table] */

undefined * FUN_100bbec84(void)

{
  return &UNK_10f50d05e;
}



/* Entry: 100bbec90; end: 100bbed17;  */

void FUN_100bbec90(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      FUN_10055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bbed04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 100bbed18; end: 100bbed9f;  */

void FUN_100bbed18(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      FUN_10055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bbed8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 100bbeda0; end: 100bbf45b;  */

void FUN_100bbeda0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000100bbf400;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000100bbf420;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000100bbf420;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000100bbf394:
                    /* WARNING: Could not recover jumptable at 0x000100bbf3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000100bbf394;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          func_0x000107c60e14(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000100bbf420;
    }
    goto code_r0x000100bbf414;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000100bbf414;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        func_0x000107c60e14(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000100bbf420;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    goto code_r0x000100bbf420;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_98);
    plVar6 = alStack_98;
    func_0x000107c60c70(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    func_0x000107c60c5c(param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      func_0x000107c60e14(alStack_98[0]);
    }
  default:
    goto LAB_100bbf430;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000100bbf400:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000100bbf414:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000100bbf420:
  func_0x000107c60c5c(param_2,pcVar7,pcVar8);
LAB_100bbf430:
  return;
}



/* Entry: 100bbf45c; end: 100bbfb17;  */

void FUN_100bbf45c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000100bbfabc;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000100bbfadc;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000100bbfadc;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000100bbfa50:
                    /* WARNING: Could not recover jumptable at 0x000100bbfa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000100bbfa50;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          func_0x000107c60e14(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000100bbfadc;
    }
    goto code_r0x000100bbfad0;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000100bbfad0;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        func_0x000107c60e14(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000100bbfadc;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    goto code_r0x000100bbfadc;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_98);
    plVar6 = alStack_98;
    func_0x000107c60c70(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    func_0x000107c60c5c(param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      func_0x000107c60e14(alStack_98[0]);
    }
  default:
    goto LAB_100bbfaec;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000100bbfabc:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000100bbfad0:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000100bbfadc:
  func_0x000107c60c5c(param_2,pcVar7,pcVar8);
LAB_100bbfaec:
  return;
}



/* Entry: 100bbfb18; end: 100bbfc4b;  */

void FUN_100bbfb18(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        func_0x000107c6132c(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      func_0x000107c6132c(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100bbfc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 100bbfc4c; end: 100bbfd7f;  */

void FUN_100bbfc4c(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        func_0x000107c6132c(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      func_0x000107c6132c(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100bbfd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 100bbfd80; end: 100bbff8b;  */

uint FUN_100bbfd80(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  func_0x000107c61174(param_3);
  uVar11 = *(uint *)(param_1 + 8);
  if ((int)uVar11 < 0xe) {
    if (1 < uVar11 - 1) {
      if (uVar11 - 0xc < 2) {
        plVar12 = *(long **)(param_1 + 0x38);
        func_0x000107c61174(param_3);
        (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
        piVar2 = *(int **)(param_1 + 0x48);
        piVar3 = *(int **)(param_1 + 0x50);
        iVar7 = (int)plVar12;
        if (uVar11 == 0xc) {
          if (piVar2 == piVar3) {
            uVar11 = 0;
          }
          else {
            do {
              piVar10 = piVar2 + 1;
              iVar4 = *piVar2;
              uVar11 = (uint)(iVar7 == iVar4);
              piVar2 = piVar10;
            } while (iVar7 != iVar4 && piVar10 != piVar3);
          }
        }
        else if (piVar2 == piVar3) {
          uVar11 = 1;
        }
        else {
          do {
            piVar10 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar11 = (uint)(iVar7 != iVar4);
            piVar2 = piVar10;
          } while (iVar7 != iVar4 && piVar10 != piVar3);
        }
        func_0x000107c61170(param_3);
        goto LAB_100bbff64;
      }
      goto LAB_100bbfeb0;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar6 = uVar11 != 1;
    bVar5 = bStack_43;
  }
  else {
    if (uVar11 - 0xf < 2) {
      *param_4 = 0;
      uVar11 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_100bbff64;
    }
    if (uVar11 == 0xe) {
      lVar1 = 0x28;
      lVar8 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar8,param_4);
      uVar11 = (uint)lVar8;
      goto LAB_100bbff64;
    }
LAB_100bbfeb0:
    if ((uVar11 & 0xfffffffe) != 10) {
      uVar11 = 0;
      goto LAB_100bbff64;
    }
    plVar12 = *(long **)(param_1 + 0x38);
    plVar9 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_41);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar6 = uVar11 == 0xb;
    bVar5 = (int)plVar12 == (int)plVar9;
  }
  uVar11 = (uint)(bVar6 ^ bVar5);
LAB_100bbff64:
  func_0x000107c61170(param_3);
  return uVar11 & 1;
}



/* Entry: 100bbff8c; end: 100bc003b;  */

ulong FUN_100bbff8c(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    uVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    uVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      uVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(uVar3,param_4);
  }
  else {
    uVar3 = 0;
  }
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 100bc003c; end: 100bc0073;  */

undefined4 FUN_100bc003c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 100bc0074; end: 100bc00ef; +[SCSnapchattersCountSummary immutableObjectParse:bufferSize:] */

void FUN_100bc0074(void)

{
  func_0x000107c610f4(PTR_PTR_1126db128);
  func_0x000107c48f04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bc00f0; end: 100bc014f; -[SCSnapchattersCountSummary initWithType:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc00f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127074f0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127911dc) = param_3;
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127911e0) = param_4;
  }
  return;
}



/* Entry: 100bc0150; end: 100bc03cb;  */

undefined8 * FUN_100bc0150(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  func_0x000107c60e20();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_DAT_110ab85e0;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        func_0x000107c2a768(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_DAT_110ab85e0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_DAT_110ab85e0;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_100bc0278;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_100bc0278;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_100bc0278:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_DAT_110ab85e0;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 100bc03cc; end: 100bc0407;  */

undefined8 FUN_100bc03cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100bc0408(uVar1,param_1);
  return uVar1;
}



/* Entry: 100bc0408; end: 100bc05b3;  */

void FUN_100bc0408(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000107c2a760(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000107c2a75c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_100bc04f4:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x000107c2a764(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_100bc04f4;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110ab8640;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 100bc05b4; end: 100bc068f;  */

/* WARNING: Possible PIC construction at 0x000100bc060c: Changing call to branch */

void FUN_100bc05b4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_DAT_110ab85e0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puVar2 = (undefined8 *)param_1[9];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[10] = puVar2;
    param_1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100bc0690; end: 100bc069f; -[SCSnapchattersCountSummary value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100bc0690(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127911e0);
}



/* Entry: 100bc06a0; end: 100bc0717;  */

void FUN_100bc06a0(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c60bc8(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  func_0x000107c60bc8(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  func_0x000107c60bc8(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  func_0x000107c60bc8(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 100bc0718; end: 100bc07ef;  */

/* WARNING: Possible PIC construction at 0x000100bc078c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bc079c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bc0790) */
/* WARNING: Removing unreachable block (ram,0x000100bc07a0) */

void FUN_100bc0718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if ((bRam0000000113817d48 & 1) == 0) {
    iVar1 = 0x13817d48;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_group_notify");
      pcRam0000000113817d40 = pcVar2;
      func_0x000107c60e4c(0x113817d48);
    }
  }
  pcVar2 = pcRam0000000113817d40;
  FUN_10002a3a8(param_3);
  func_0x000107c61180();
  (*pcVar2)(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100bc07f0; end: 100bc08df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc07f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

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
  lVar1 = _DAT_113080d98;
  if (param_2 != 0) {
    uVar4 = *param_4;
    func_0x000107c61428(param_2 + _DAT_113080d98,auStack_80,0x21,0);
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



/* Entry: 100bc08e0; end: 100bc08fb;  */

void FUN_100bc08e0(void)

{
  long unaff_x20;
  
  FUN_100bc07f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100bc08fc; end: 100bc08ff;  */

void FUN_100bc08fc(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bc0900; end: 100bc0923;  */

void FUN_100bc0900(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bc0924; end: 100bc09af;  */

/* WARNING: Possible PIC construction at 0x000100bc0990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bc0994) */

void FUN_100bc0924(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_2);
  puVar1 = PTR_PTR_1126ddd38;
  func_0x000107c61158(PTR_PTR_1126ddd38);
  uVar2 = param_2;
  func_0x000107c6115c(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    param_2 = 0;
  }
  func_0x000107c61174(param_2);
  func_0x000107c4335c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61180();
  func_0x000107c5c314(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100bc09b0; end: 100bc09bb;  */

void FUN_100bc09b0(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_78 [24];
  
  puVar8 = *(undefined **)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  bVar1 = *(byte *)(unaff_x20 + 0x20);
  puVar2 = puVar8;
  func_0x000107c5d6e4();
  func_0x000107c61180();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar2 != (undefined *)0x0) {
    uVar3 = 0;
    FUN_100bc0bc4(0,0x112d67868,&PTR_PTR_1126daa00);
    puVar4 = puVar2;
    func_0x000107c5fc54(puVar2,uVar3);
    func_0x000107c61170(puVar2);
  }
  puVar2 = puVar8;
  func_0x000107c4175c();
  func_0x000107c61180();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar2 != (undefined *)0x0) {
    uVar3 = 0;
    FUN_100bc0bc4(0,0x112f144a0,&PTR_PTR_1126da9b0);
    puVar5 = puVar2;
    func_0x000107c5fc54(puVar2,uVar3);
    func_0x000107c61170(puVar2);
  }
  puVar7 = auStack_78;
  func_0x000107c61428(lVar6 + 0x10,puVar7,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    func_0x000107c6142c(puVar4);
  }
  else {
    puVar2 = puVar8;
    func_0x000107c43044();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar7 = (undefined1 *)0x0;
      FUN_100bc0bc4(0,0x112f14498,&PTR_PTR_1126ba4d0);
      puVar9 = puVar2;
      func_0x000107c5fc54(puVar2,puVar7);
      func_0x000107c61170(puVar2);
    }
    puVar2 = puVar8;
    func_0x000107c5ce5c();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      puVar7 = (undefined1 *)0x0;
    }
    else {
      puVar10 = puVar2;
      func_0x000107c5faec();
      func_0x000107c61170(puVar2);
    }
    func_0x000107c5d68c(puVar8);
    func_0x000107c4a57c(puVar8);
    FUN_100bc10a4(puVar4,puVar5,puVar9,puVar10,puVar7,bVar1 & 1,puVar8);
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(lVar6);
    func_0x000107c6142c(puVar7);
    puVar5 = puVar9;
  }
  func_0x000107c6142c(puVar5);
  return;
}



/* Entry: 100bc09bc; end: 100bc0bc3;  */

void FUN_100bc09bc(undefined *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_78 [24];
  
  puVar1 = param_1;
  func_0x000107c5d6e4();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_100bc0bc4(0,0x112d67868,&PTR_PTR_1126daa00);
    puVar3 = puVar1;
    func_0x000107c5fc54(puVar1,uVar2);
    func_0x000107c61170(puVar1);
  }
  puVar1 = param_1;
  func_0x000107c4175c();
  func_0x000107c61180();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_100bc0bc4(0,0x112f144a0,&PTR_PTR_1126da9b0);
    puVar4 = puVar1;
    func_0x000107c5fc54(puVar1,uVar2);
    func_0x000107c61170(puVar1);
  }
  puVar5 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar5,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000107c6142c(puVar3);
  }
  else {
    puVar1 = param_1;
    func_0x000107c43044();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar5 = (undefined1 *)0x0;
      FUN_100bc0bc4(0,0x112f14498,&PTR_PTR_1126ba4d0);
      puVar6 = puVar1;
      func_0x000107c5fc54(puVar1,puVar5);
      func_0x000107c61170(puVar1);
    }
    puVar1 = param_1;
    func_0x000107c5ce5c();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar7 = puVar1;
      func_0x000107c5faec();
      func_0x000107c61170(puVar1);
    }
    func_0x000107c5d68c(param_1);
    func_0x000107c4a57c(param_1);
    FUN_100bc10a4(puVar3,puVar4,puVar6,puVar7,puVar5,param_3 & 1,param_1);
    func_0x000107c6142c(puVar3);
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar5);
    puVar4 = puVar6;
  }
  func_0x000107c6142c(puVar4);
  return;
}



/* Entry: 100bc0bc4; end: 100bc0c03;  */

void FUN_100bc0bc4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100bc0c04; end: 100bc0d9f; -[SCLensDataFetcher subscribeOnAdaptiveFetchingNotifier:] */

void FUN_100bc0c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_58,param_1);
  uVar1 = param_3;
  func_0x000107c4afcc(param_3);
  func_0x000107c61180();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_10b0d33f0;
  puStack_68 = &UNK_110cb8fd8;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  func_0x000107c4adf0(param_3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100bc0da0; end: 100bc0dab; -[_TtC34AdaptiveLensFetchingImplementation26CompositeLensFetchNotifier lensContentDownloadObservable] */

void FUN_100bc0da0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_100bc0e18();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bc0dac; end: 100bc0de3;  */

void FUN_100bc0dac(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*param_3)();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bc0de4; end: 100bc0e17;  */

void FUN_100bc0de4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b794a0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100bc0e18; end: 100bc0fa7;  */

undefined * FUN_100bc0e18(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    FUN_100bc0de4(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc0fa8);
      (*pcVar2)();
    }
    uVar9 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        uVar10 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
        func_0x000107c615f0(uVar10);
      }
      else {
        uVar10 = uVar9;
        func_0x0001019c2294(uVar9,uVar7);
      }
      uVar3 = uVar10;
      func_0x000107c4afcc();
      func_0x000107c61180();
      func_0x000107c615e8(uVar10);
      uVar10 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar10) {
        FUN_100bc0de4(1 < *(ulong *)(puVar1 + 0x18),uVar10 + 1,1);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar10 + 1;
      *(ulong *)(puVar1 + uVar10 * 8 + 0x20) = uVar3;
    } while (uVar8 != uVar9);
  }
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  uVar5 = 0x112d5b0a0;
  FUN_1000285a8(0x112d5b0a0,&UNK_10d97aac0);
  puVar6 = puVar1;
  func_0x000107c5fc48(puVar1,uVar5);
  func_0x000107c6142c(puVar1);
  func_0x000107c4cd50(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar4;
}



/* Entry: 100bc0fa8; end: 100bc0fcf;  */

void FUN_100bc0fa8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  lVar3 = 0x112d5b0a0;
  puVar4 = (ulong *)0x112d5b228;
  plVar5 = (long *)&UNK_10d9223b0;
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && (FUN_1000285a8(0x112d5b0a0,&UNK_10d97aac0), lVar3 != 0)) {
    puVar4 = (ulong *)0x112d36e60;
    plVar5 = (long *)&UNK_10d901170;
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100bc0fd0; end: 100bc0fd7; -[SCFriendsFeedUpdateEvent deletedFeedEntries] */

undefined8 FUN_100bc0fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100bc0fd8; end: 100bc0fdf; -[SCFriendsFeedUpdateEvent fetchContexts] */

undefined8 FUN_100bc0fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100bc0fe0; end: 100bc0fe7; -[SCFriendsFeedUpdateEvent trackingIdentifier] */

undefined8 FUN_100bc0fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100bc0fe8; end: 100bc1067;  */

void FUN_100bc0fe8(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c60bc8(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  func_0x000107c60bc8(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  func_0x000107c60bc8(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  func_0x000107c60bc8(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  func_0x000107c60bc8(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 100bc1068; end: 100bc106b; -[_TtC17LensFetchExternal18BitmojiIconFetcher lensContentDownloadObservable] */

void FUN_100bc1068(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bc106c; end: 100bc1093;  */

void FUN_100bc106c(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bc1094; end: 100bc109b; -[SCFriendsFeedUpdateEvent updateType] */

undefined8 FUN_100bc1094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100bc109c; end: 100bc10a3; -[SCFriendsFeedUpdateEvent isSuccessfulSync] */

undefined1 FUN_100bc109c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100bc10a4; end: 100bc22eb;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc10a4(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5,
                  byte param_6,byte param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long unaff_x20;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  ulong uVar35;
  undefined8 *******pppppppuVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  ulong *puVar43;
  long lStack_c8;
  undefined8 *******pppppppuStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  undefined6 uStack_9e;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [32];
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112f14448));
  if (param_1 >> 0x3e == 0) {
    uVar39 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar39 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar39 = param_1;
    }
    func_0x000107c60480();
  }
  lVar41 = _DAT_112f14408;
  lVar38 = _DAT_112f14400;
  lVar20 = _DAT_112f143f8;
  if (uVar39 == 0) {
    lStack_c8 = 0;
    if (((long)param_2 < 0) || ((param_2 >> 0x3e & 1) != 0)) goto LAB_100bc1eb8;
LAB_100bc1c0c:
    uVar39 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    lVar20 = _DAT_112f143f8;
    lVar38 = _DAT_112f14400;
  }
  else {
    uVar24 = *(ulong *)(unaff_x20 + _DAT_112f14440);
    uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112f14450);
    uVar26 = ((undefined8 *)(unaff_x20 + _DAT_112f14450))[1];
    uVar28 = *(undefined8 *)(unaff_x20 + _DAT_112f14438);
    lVar27 = *(long *)(unaff_x20 + _DAT_112f14420);
    func_0x000107c61428(unaff_x20 + _DAT_112f14408,auStack_80,0,0);
    lStack_c8 = 0;
    lVar40 = 4;
    do {
      uVar31 = lVar40 - 4;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc1e7c);
          (*pcVar6)();
        }
        uVar10 = *(ulong *)(param_1 + lVar40 * 8);
        func_0x000107c61174();
      }
      else {
        uVar10 = uVar31;
        FUN_100bc22ec(uVar31,param_1);
      }
      uVar42 = lVar40 - 3;
      if (SCARRY8(uVar31,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc1e74);
        (*pcVar6)();
      }
      uVar33 = uVar25;
      uVar19 = uVar26;
      func_0x000107c5fadc(uVar25);
      uVar31 = uVar24;
      func_0x000107c43a9c();
      func_0x000107c61180();
      func_0x000107c61170(uVar33);
      if (uVar31 == 0) {
        func_0x000107c61170(uVar10);
      }
      else {
        uVar11 = uVar31;
        func_0x000107c5faec();
        uVar35 = uVar10;
        uVar23 = uVar19;
        func_0x000107c40674();
        func_0x000107c61180();
        uVar37 = uVar35;
        func_0x000107c5cb4c();
        func_0x000107c61180();
        func_0x000107c61170(uVar35);
        uVar35 = uVar37;
        func_0x000107c5faec();
        if (param_5 == 0) {
          uVar33 = 0;
        }
        else {
          uVar33 = param_4;
          func_0x000107c5fadc(param_4);
        }
        uVar18 = uVar25;
        func_0x000107c5fadc(uVar25,uVar26);
        uVar12 = uVar10;
        FUN_100bc2aec(uVar10,uVar37,uVar33,uVar18);
        func_0x000107c61180();
        func_0x000107c61170(uVar37);
        func_0x000107c61170(uVar33);
        func_0x000107c61170(uVar18);
        if (uVar12 == 0) {
          func_0x000107c6142c(uVar23);
          func_0x000107c6142c(uVar19);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar31);
        }
        else {
          func_0x000107c61428(unaff_x20 + lVar38,&pppppppuStack_c0,0x20,0);
          lVar32 = *(long *)(unaff_x20 + lVar38);
          if (*(long *)(lVar32 + 0x10) == 0) {
LAB_100bc1418:
            func_0x000107c61170(uVar31);
            func_0x000107c614a8(&pppppppuStack_c0);
            func_0x000107c61428(unaff_x20 + lVar38,&pppppppuStack_c0,0x21,0);
            func_0x000107c61434(uVar23);
            uVar13 = *(ulong *)(unaff_x20 + lVar38);
            func_0x000107c61558();
            lVar34 = *(long *)(unaff_x20 + lVar38);
            *(undefined8 *)(unaff_x20 + lVar38) = 0x8000000000000000;
            uVar31 = uVar11;
            uVar37 = uVar19;
            lStack_98 = lVar34;
            func_0x000100029284();
            uVar29 = (ulong)~(uint)uVar37 & 1;
            lVar32 = *(long *)(lVar34 + 0x10) + uVar29;
            if (SCARRY8(*(long *)(lVar34 + 0x10),uVar29)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc1e88);
              (*pcVar6)();
            }
            if (*(long *)(lVar34 + 0x18) < lVar32) {
              FUN_1001833c8(lVar32,uVar13);
              uVar31 = uVar11;
              uVar13 = uVar19;
              func_0x000100029284();
              if (((uint)uVar37 & 1) != ((uint)uVar13 & 1)) goto LAB_100bc22dc;
              if ((uVar37 & 1) == 0) goto LAB_100bc14fc;
LAB_100bc14d0:
              lVar34 = lStack_98;
              puVar43 = (ulong *)(*(long *)(lStack_98 + 0x38) + uVar31 * 0x10);
              uVar31 = puVar43[1];
              *puVar43 = uVar35;
              puVar43[1] = uVar23;
              func_0x000107c6142c(uVar31);
            }
            else {
              if ((uVar13 & 1) == 0) {
                func_0x000100184498();
              }
              if ((uVar37 & 1) != 0) goto LAB_100bc14d0;
LAB_100bc14fc:
              lVar34 = lStack_98;
              lVar32 = lStack_98 + (uVar31 >> 6) * 8;
              *(ulong *)(lVar32 + 0x40) = *(ulong *)(lVar32 + 0x40) | 1L << (uVar31 & 0x3f);
              puVar43 = (ulong *)(*(long *)(lStack_98 + 0x30) + uVar31 * 0x10);
              *puVar43 = uVar11;
              puVar43[1] = uVar19;
              puVar43 = (ulong *)(*(long *)(lStack_98 + 0x38) + uVar31 * 0x10);
              *puVar43 = uVar35;
              puVar43[1] = uVar23;
              if (SCARRY8(*(long *)(lStack_98 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc1e90);
                (*pcVar6)();
              }
              *(long *)(lStack_98 + 0x10) = *(long *)(lStack_98 + 0x10) + 1;
              func_0x000107c61434(uVar19);
            }
            *(long *)(unaff_x20 + lVar38) = lVar34;
            func_0x000107c614a8(&pppppppuStack_c0);
          }
          else {
            func_0x000107c61434(lVar32);
            uVar37 = uVar11;
            uVar13 = uVar19;
            func_0x000100029284();
            if ((uVar13 & 1) == 0) {
              func_0x000107c6142c(lVar32);
              goto LAB_100bc1418;
            }
            puVar43 = (ulong *)(*(long *)(lVar32 + 0x38) + uVar37 * 0x10);
            uVar37 = *puVar43;
            uVar13 = puVar43[1];
            func_0x000107c61434(uVar13);
            func_0x000107c614a8(&pppppppuStack_c0);
            func_0x000107c6142c(lVar32);
            uVar33 = *(undefined8 *)(unaff_x20 + lVar41);
            func_0x000107c61434(uVar33);
            uVar29 = uVar11;
            FUN_1000f66f0(uVar11,uVar19,uVar33);
            func_0x000107c6142c(uVar33);
            if ((uVar29 & 1) == 0) {
              if ((uVar37 == uVar35) && (uVar13 == uVar23)) {
                func_0x000107c6142c(uVar13);
                func_0x000107c61170(uVar31);
              }
              else {
                uVar29 = uVar37;
                func_0x000107c605b8(uVar37,uVar13,uVar35,uVar23,0);
                if ((uVar29 & 1) == 0) {
                  func_0x000107c61428(unaff_x20 + lVar41,&pppppppuStack_c0,0x21,0);
                  func_0x000107c61434(uVar19);
                  FUN_100403b00(&lStack_98,uVar11,uVar19);
                  func_0x000107c614a8(&pppppppuStack_c0);
                  func_0x000107c6142c(uStack_90);
                  puVar15 = PTR_PTR_1126b3e90;
                  func_0x000107c610f8(PTR_PTR_1126b3e90);
                  func_0x000107c453e4();
                  func_0x000107c56664();
                  puVar16 = PTR_PTR_1126b8460;
                  func_0x000107c610f8();
                  func_0x000107c453e4();
                  puVar17 = PTR_PTR_1126d01e8;
                  func_0x000107c610f8(PTR_PTR_1126d01e8);
                  func_0x000107c453e4();
                  func_0x000107c56670(puVar16);
                  func_0x000107c61170(puVar17);
                  puVar17 = puVar16;
                  func_0x000107c4ce00();
                  func_0x000107c61180();
                  if (puVar17 == (undefined *)0x0) {
                    func_0x000107c61170(uVar31);
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc22dc);
                    (*pcVar6)();
                  }
                  func_0x000107c5fadc(uVar37,uVar13);
                  func_0x000107c55a24(puVar17);
                  func_0x000107c61170(puVar17);
                  func_0x000107c61170(uVar37);
                  puVar17 = puVar16;
                  func_0x000107c4ce00();
                  func_0x000107c61180();
                  if (puVar17 == (undefined *)0x0) {
                    func_0x000107c61170(uVar31);
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc22d0);
                    (*pcVar6)();
                  }
                  func_0x000107c54948();
                  func_0x000107c61170(puVar17);
                  func_0x000107c61170(uVar31);
                  func_0x000107c61174(puVar16);
                  uVar33 = 0xd000000000000019;
                  func_0x000107c5fadc(0xd000000000000019,0x800000010f10c130);
                  uVar18 = 0;
                  func_0x0001044db3fc(0);
                  func_0x0001044dac34();
                  func_0x000107c5027c(uVar28);
                  func_0x000107c61170(puVar16);
                  func_0x000107c61170(uVar33);
                  func_0x000107c61170(uVar18);
                  uVar31 = uVar12;
                  func_0x000102d72ba0(uVar12,uVar10,uVar11,uVar19);
                  lVar32 = lVar27;
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  if (lVar32 == 0) {
                    func_0x000107c61170(puVar15);
                    func_0x000107c61170(puVar16);
                    func_0x000107c6142c(uVar13);
                  }
                  else {
                    uVar3 = (uint)uVar31 & 0xff;
                    if (uVar3 < 3) {
                      if ((uVar31 & 0xff) == 0) {
                        uVar18 = 0xe800000000000000;
                        uVar33 = 0x6e676961706d6163;
                      }
                      else if (uVar3 == 1) {
                        uVar18 = 0xea0000000000656e;
                        uVar33 = 0x6f5f6e6f5f656e6f;
                      }
                      else {
                        uVar18 = 0xe500000000000000;
                        uVar33 = 0x70756f7267;
                      }
                    }
                    else if (uVar3 == 3) {
                      uVar33 = 0x616e735f6d616574;
                      uVar18 = 0xed00007461686370;
                    }
                    else if (uVar3 == 4) {
                      uVar18 = 0xe500000000000000;
                      uVar33 = 0x69615f796d;
                    }
                    else {
                      uVar18 = 0xe700000000000000;
                      uVar33 = 0x6e776f6e6b6e75;
                    }
                    func_0x000107c5fadc(uVar33,uVar18);
                    func_0x000107c6142c(uVar18);
                    func_0x0001064ea908(lVar32,uVar33,1);
                    func_0x000107c61170(lVar32);
                    func_0x000107c61170(uVar33);
                    func_0x000107c61170(puVar15);
                    func_0x000107c61170(puVar16);
                    func_0x000107c6142c(uVar13);
                  }
                }
                else {
                  func_0x000107c6142c(uVar13);
                  func_0x000107c61170(uVar31);
                }
              }
            }
            else {
              func_0x000107c6142c(uVar13);
              func_0x000107c61170(uVar31);
            }
          }
          func_0x000107c61428(unaff_x20 + lVar20,&pppppppuStack_c0,0x20,0);
          lVar32 = *(long *)(unaff_x20 + lVar20);
          if (*(long *)(lVar32 + 0x10) == 0) {
LAB_100bc1698:
            func_0x000107c614a8(&pppppppuStack_c0);
            uVar31 = 0;
          }
          else {
            func_0x000107c61434(lVar32);
            uVar31 = uVar35;
            uVar37 = uVar23;
            func_0x000100029284();
            if ((uVar37 & 1) == 0) {
              func_0x000107c6142c(lVar32);
              goto LAB_100bc1698;
            }
            puVar1 = (undefined8 *)(*(long *)(lVar32 + 0x38) + uVar31 * 0x20);
            uVar33 = *puVar1;
            uVar4 = puVar1[1];
            uVar18 = puVar1[2];
            uVar37 = puVar1[3];
            uVar31 = uVar37;
            func_0x000107c61174();
            func_0x000107c61434(uVar4);
            func_0x000107c61174();
            func_0x000107c614a8(&pppppppuStack_c0);
            func_0x000107c6142c(lVar32);
            func_0x000102d72cb8(uVar33,uVar4,uVar18,uVar37);
            FUN_100bc0bc4(0,0x112f144a8,&PTR_PTR_1126d7848);
            func_0x000107c61174();
            uVar37 = uVar12;
            func_0x000107c61174(uVar12);
            uVar13 = uVar31;
            func_0x000107c60118(uVar31,uVar37);
            func_0x000107c61170(uVar31);
            func_0x000107c61170(uVar37);
            if ((uVar13 & 1) != 0) {
              func_0x000107c6142c(uVar23);
              func_0x000107c61170(uVar31);
              func_0x000107c61170(uVar10);
              func_0x000107c61170(uVar37);
              func_0x000107c6142c(uVar19);
              goto LAB_100bc11c4;
            }
          }
          uVar13 = uVar10;
          func_0x000107c406e8();
          func_0x000107c61428(unaff_x20 + lVar20,&pppppppuStack_c0,0x21,0);
          func_0x000107c61434(uVar19);
          func_0x000107c61174();
          uVar14 = *(ulong *)(unaff_x20 + lVar20);
          func_0x000107c61558();
          lVar34 = *(long *)(unaff_x20 + lVar20);
          *(undefined8 *)(unaff_x20 + lVar20) = 0x8000000000000000;
          uVar37 = uVar35;
          uVar29 = uVar23;
          lStack_98 = lVar34;
          func_0x000100029284();
          uVar30 = (ulong)~(uint)uVar29 & 1;
          lVar32 = *(long *)(lVar34 + 0x10) + uVar30;
          if (SCARRY8(*(long *)(lVar34 + 0x10),uVar30)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc1e80);
            (*pcVar6)();
          }
          if (*(long *)(lVar34 + 0x18) < lVar32) {
            FUN_100bc5148(lVar32,uVar14);
            uVar37 = uVar35;
            uVar14 = uVar23;
            func_0x000100029284();
            if (((uint)uVar29 & 1) != ((uint)uVar14 & 1)) {
LAB_100bc22dc:
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc22ec);
              (*pcVar6)();
            }
joined_r0x000100bc1bc0:
            if ((uVar29 & 1) == 0) goto LAB_100bc176c;
LAB_100bc17cc:
            lVar32 = lStack_98;
            puVar43 = (ulong *)(*(long *)(lStack_98 + 0x38) + uVar37 * 0x20);
            uVar35 = puVar43[1];
            uVar37 = puVar43[3];
            *puVar43 = uVar11;
            puVar43[1] = uVar19;
            puVar43[2] = (ulong)(uVar13 == 1);
            puVar43[3] = uVar12;
            func_0x000107c6142c(uVar23);
            func_0x000107c61170(uVar37);
            func_0x000107c6142c(uVar35);
          }
          else {
            if ((uVar14 & 1) == 0) {
              func_0x000102d73f4c();
              goto joined_r0x000100bc1bc0;
            }
            if ((uVar29 & 1) != 0) goto LAB_100bc17cc;
LAB_100bc176c:
            lVar32 = lStack_98 + (uVar37 >> 6) * 8;
            *(ulong *)(lVar32 + 0x40) = *(ulong *)(lVar32 + 0x40) | 1L << (uVar37 & 0x3f);
            puVar43 = (ulong *)(*(long *)(lStack_98 + 0x30) + uVar37 * 0x10);
            *puVar43 = uVar35;
            puVar43[1] = uVar23;
            puVar43 = (ulong *)(*(long *)(lStack_98 + 0x38) + uVar37 * 0x20);
            *puVar43 = uVar11;
            puVar43[1] = uVar19;
            puVar43[2] = (ulong)(uVar13 == 1);
            puVar43[3] = uVar12;
            if (SCARRY8(*(long *)(lStack_98 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc1e8c);
              (*pcVar6)();
            }
            *(long *)(lStack_98 + 0x10) = *(long *)(lStack_98 + 0x10) + 1;
            lVar32 = lStack_98;
          }
          *(long *)(unaff_x20 + lVar20) = lVar32;
          func_0x000107c614a8(&pppppppuStack_c0);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar31);
          func_0x000107c61170(uVar12);
          func_0x000107c6142c(uVar19);
          bVar8 = SCARRY8(lStack_c8,1);
          lStack_c8 = lStack_c8 + 1;
          if (bVar8) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc1e84);
            (*pcVar6)();
          }
        }
      }
LAB_100bc11c4:
      lVar40 = lVar40 + 1;
    } while (uVar42 != uVar39);
    if ((-1 < (long)param_2) && ((param_2 >> 0x3e & 1) == 0)) goto LAB_100bc1c0c;
LAB_100bc1eb8:
    uVar39 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar39 = param_2;
    }
    func_0x000107c60480();
    lVar20 = _DAT_112f143f8;
    lVar38 = _DAT_112f14400;
  }
  _DAT_112f143f8 = lVar20;
  _DAT_112f14400 = lVar38;
  if (uVar39 != 0) {
    if ((long)uVar39 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc1eac);
      (*pcVar6)();
    }
    uVar24 = 0;
    do {
      uVar26 = param_2;
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar31 = *(ulong *)(param_2 + uVar24 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar31 = uVar24;
        func_0x000102d75f30();
      }
      uVar10 = uVar31;
      func_0x000107c42f18();
      func_0x000107c61180();
      uVar42 = uVar10;
      func_0x000107c40674();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      uVar10 = uVar42;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(uVar42);
      uVar42 = uVar10;
      func_0x000107c5faec();
      func_0x000107c61170(uVar10);
      func_0x000107c61428(unaff_x20 + lVar20,&pppppppuStack_c0,0x21,0);
      uVar25 = *(undefined8 *)(unaff_x20 + lVar20);
      func_0x000107c61434(uVar25);
      uVar10 = uVar26;
      func_0x000100029284();
      func_0x000107c6142c(uVar25);
      if ((uVar10 & 1) == 0) {
        func_0x000107c614a8(&pppppppuStack_c0);
        func_0x000107c61170(uVar31);
        func_0x000107c6142c(uVar26);
      }
      else {
        iVar9 = (int)*(undefined8 *)(unaff_x20 + lVar20);
        func_0x000107c61558();
        lStack_98 = *(long *)(unaff_x20 + lVar20);
        *(undefined8 *)(unaff_x20 + lVar20) = 0x8000000000000000;
        if (iVar9 == 0) {
          func_0x000102d73f4c();
        }
        lVar40 = lStack_98;
        func_0x000107c6142c(*(undefined8 *)(*(long *)(lStack_98 + 0x30) + uVar42 * 0x10 + 8));
        plVar2 = (long *)(*(long *)(lVar40 + 0x38) + uVar42 * 0x20);
        lVar41 = *plVar2;
        uVar10 = plVar2[1];
        lVar27 = plVar2[3];
        func_0x000102d73c0c(uVar42,lVar40);
        *(long *)(unaff_x20 + lVar20) = lVar40;
        func_0x000107c614a8(&pppppppuStack_c0);
        func_0x000107c6142c(uVar26);
        func_0x000107c61428(unaff_x20 + lVar38,&pppppppuStack_c0,0x21,0);
        uVar25 = *(undefined8 *)(unaff_x20 + lVar38);
        func_0x000107c61434(uVar25);
        uVar26 = uVar10;
        func_0x000100029284();
        func_0x000107c6142c(uVar25);
        if ((uVar26 & 1) != 0) {
          iVar9 = (int)*(undefined8 *)(unaff_x20 + lVar38);
          func_0x000107c61558();
          lStack_98 = *(long *)(unaff_x20 + lVar38);
          *(undefined8 *)(unaff_x20 + lVar38) = 0x8000000000000000;
          if (iVar9 == 0) {
            func_0x000100184498();
          }
          lVar40 = lStack_98;
          func_0x000107c6142c(*(undefined8 *)(*(long *)(lStack_98 + 0x30) + lVar41 * 0x10 + 8));
          func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar40 + 0x38) + lVar41 * 0x10 + 8));
          func_0x00010105bd08(lVar41,lVar40);
          *(long *)(unaff_x20 + lVar38) = lVar40;
        }
        func_0x000107c614a8(&pppppppuStack_c0);
        func_0x000107c61170(lVar27);
        func_0x000107c6142c(uVar10);
        func_0x000107c61170(uVar31);
        bVar8 = SCARRY8(lStack_c8,1);
        lStack_c8 = lStack_c8 + 1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc1e78);
          (*pcVar6)();
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar39 != uVar24);
  }
  if (param_3 != 0) {
    uVar39 = param_3 & 0xffffffffffffff8;
    if (param_3 >> 0x3e == 0) {
      uVar24 = *(ulong *)(uVar39 + 0x10);
    }
    else {
      uVar24 = param_3;
      if (-1 < (long)param_3) {
        uVar24 = uVar39;
      }
      func_0x000107c60480();
    }
    if (uVar24 != 0) {
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar39 = *(ulong *)(uVar39 + 0x10);
        if (uVar39 != 0) {
          uVar31 = 0;
          bVar8 = false;
          uVar26 = uVar39;
          uVar10 = 0;
          do {
            uVar19 = *(ulong *)(param_3 + 0x20 + uVar10 * 8);
            uVar42 = uVar10 + 1;
            if (bVar8) {
              if ((uVar31 & 1) == 0) {
                func_0x000107c61174();
                goto LAB_100bc20e0;
              }
joined_r0x000100bc20d8:
              bVar5 = 1;
              uVar31 = 1;
              if (uVar42 == uVar24) goto LAB_100bc211c;
            }
            else {
              func_0x000107c61174();
              uVar11 = uVar19;
              func_0x000100beb544();
              if ((uVar11 & 1) == 0) {
                func_0x000107c61170(uVar19);
                if (uVar42 == uVar24) goto LAB_100bc2114;
                lVar20 = ~uVar10 + uVar26;
                lVar41 = -2 - uVar10;
                lVar38 = (uVar24 - 1) - uVar10;
                puVar43 = (ulong *)(param_3 + 0x28 + uVar10 * 8);
                while( true ) {
                  if (lVar20 == 0) goto LAB_100bc21a4;
                  uVar19 = *puVar43;
                  func_0x000107c61174();
                  uVar26 = uVar19;
                  func_0x000100beb544();
                  if ((uVar26 & 1) != 0) break;
                  func_0x000107c61170(uVar19);
                  lVar20 = lVar20 + -1;
                  lVar41 = lVar41 + -1;
                  lVar38 = lVar38 + -1;
                  puVar43 = puVar43 + 1;
                  if (lVar38 == 0) goto LAB_100bc2114;
                }
                uVar42 = -lVar41;
              }
              if ((uVar31 & 1) != 0) {
                func_0x000107c61170(uVar19);
                goto joined_r0x000100bc20d8;
              }
LAB_100bc20e0:
              uVar31 = uVar19;
              FUN_10060dccc();
              func_0x000107c61170(uVar19);
              if (uVar42 == uVar24) goto LAB_100bc20fc;
            }
            bVar8 = true;
            uVar26 = uVar42;
            if (uVar42 <= uVar39) {
              uVar26 = uVar39;
            }
            uVar10 = uVar42;
          } while (uVar42 < uVar39);
        }
LAB_100bc21a4:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc21a8);
        (*pcVar6)();
      }
      uVar26 = 0;
      func_0x000100beb374(0,param_3);
      uVar31 = 0;
      bVar8 = false;
      uVar39 = 1;
      do {
        if ((!bVar8) && (uVar10 = uVar26, func_0x000100beb544(), (uVar10 & 1) == 0)) {
          func_0x000107c615e8(uVar26);
          while( true ) {
            if (uVar39 == uVar24) goto LAB_100bc2114;
            uVar26 = uVar39;
            func_0x000100beb374(uVar39,param_3);
            bVar8 = SCARRY8(uVar39,1);
            uVar39 = uVar39 + 1;
            if (bVar8) goto LAB_100bc21a0;
            uVar10 = uVar26;
            func_0x000100beb544();
            if ((int)uVar10 != 0) break;
            func_0x000107c615e8(uVar26);
          }
        }
        if ((uVar31 & 1) == 0) {
          uVar31 = uVar26;
          FUN_10060dccc();
          func_0x000107c615e8(uVar26);
          if (uVar39 == uVar24) goto LAB_100bc20fc;
        }
        else {
          func_0x000107c615e8(uVar26);
          uVar31 = 1;
          bVar5 = 1;
          if (uVar39 == uVar24) goto LAB_100bc211c;
        }
        uVar26 = uVar39;
        func_0x000100beb374(uVar39,param_3);
        bVar8 = true;
        bVar7 = SCARRY8(uVar39,1);
        uVar39 = uVar39 + 1;
        if (bVar7) {
LAB_100bc21a0:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc21a4);
          (*pcVar6)();
        }
      } while( true );
    }
  }
LAB_100bc21bc:
  if (0 < lStack_c8) {
LAB_100bc21c8:
    lVar20 = _DAT_112f143f8;
    func_0x000107c61428(unaff_x20 + _DAT_112f143f8,&lStack_98,0,0);
    lVar20 = *(long *)(unaff_x20 + lVar20);
    pppppppuVar36 = *(undefined8 ********)(lVar20 + 0x10);
    pppppppuVar21 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppppuVar36 != (undefined8 *******)0x0) {
      func_0x000107c61434(lVar20);
      pppppppuVar21 = pppppppuVar36;
      func_0x000100beb648(pppppppuVar36,0);
      pppppppuVar22 = &pppppppuStack_c0;
      func_0x000100beb6c8(pppppppuVar22,pppppppuVar21 + 4,pppppppuVar36,lVar20);
      func_0x000100beb848(pppppppuStack_c0,uStack_b8,uStack_b0,lStack_a8,
                          CONCAT62(uStack_9e,CONCAT11(bStack_9f,bStack_a0)));
      if (pppppppuVar22 != pppppppuVar36) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100bc2238);
        (*pcVar6)();
      }
    }
    bStack_a0 = param_6 & 1;
    bStack_9f = param_7 & 1;
    pppppppuStack_c0 = pppppppuVar21;
    uStack_b8 = param_3;
    uStack_b0 = param_4;
    lStack_a8 = param_5;
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_3);
    FUN_1002a64a8(&pppppppuStack_c0);
    func_0x000107c6142c(param_5);
    func_0x000107c6142c(param_3);
    func_0x000107c61574(pppppppuVar21);
  }
  return;
LAB_100bc2114:
  if ((uVar31 & 1) != 0) {
    bVar5 = 0;
    goto LAB_100bc211c;
  }
  goto LAB_100bc21bc;
LAB_100bc20fc:
  if ((uVar31 & 1) != 0) {
    bVar5 = 1;
LAB_100bc211c:
    lVar20 = *(long *)(unaff_x20 + _DAT_112f14428);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar20 != 0) {
      uVar25 = 0;
      FUN_100bc0bc4(0,0x112f14498,&PTR_PTR_1126ba4d0);
      uVar39 = param_3;
      func_0x000107c5fc48(param_3,uVar25);
      func_0x000107c4bef0(lVar20);
      func_0x000107c615e8(lVar20);
      func_0x000107c61170(uVar39);
    }
    bVar8 = false;
    if (lStack_c8 < 1) {
      bVar8 = (bool)(bVar5 ^ 1);
    }
    if (bVar8) {
      return;
    }
  }
  goto LAB_100bc21c8;
}



/* Entry: 100bc22ec; end: 100bc24af;  */

ulong FUN_100bc22ec(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc23d0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc23d4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126daa00;
    func_0x000107c61168(PTR_PTR_1126daa00);
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
    puVar4 = PTR_PTR_1126daa00;
    func_0x000107c61168(PTR_PTR_1126daa00);
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
  func_0x00010120279c(0,0x112d67868,&PTR_PTR_1126daa00);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc24b0);
  (*pcVar2)();
}



/* Entry: 100bc24b0; end: 100bc255f; -[_TtC50FriendsFeedNativeDataModelTranslatorImplementation36FriendsFeedNativeDataModelTranslator friendsFeedIdFromNativeFeedEntry:currentUserId:] */

void FUN_100bc24b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_100bc2560(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_4);
    func_0x000107c6142c(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bc2560; end: 100bc264b;  */

undefined1  [16] FUN_100bc2560(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar1 = param_1;
  uVar2 = param_2;
  func_0x000107c406e8();
  if (lVar1 == 1) {
    func_0x000107c40674(param_1);
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lVar3 = lVar1;
    func_0x000107c5faec(lVar1);
    func_0x000107c61170(lVar1);
  }
  else if (lVar1 == 0) {
    func_0x000107c4e3a4(param_1);
    func_0x000107c61180();
    uVar2 = 0;
    FUN_100bc2654(0);
    lVar1 = param_1;
    func_0x000107c5fc54(param_1,uVar2);
    func_0x000107c61170(param_1);
    lVar3 = lVar1;
    FUN_100bc2698(lVar1,param_2,param_3);
    func_0x000107c6142c(lVar1);
    uVar2 = param_2;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 100bc264c; end: 100bc2653; -[SCNMessagingFeedEntry participants] */

undefined8 FUN_100bc264c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bc2654; end: 100bc2697;  */

void FUN_100bc2654(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4e810 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4e810 = puVar1;
  return;
}



/* Entry: 100bc2698; end: 100bc2937;  */

undefined1  [16] FUN_100bc2698(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  uVar9 = param_2;
  if (param_1 >> 0x3e == 0) {
    uVar3 = param_2;
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 1) {
LAB_100bc26dc:
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc2938);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = 0;
        uVar9 = param_1;
        FUN_100bc2938();
      }
      uVar8 = uVar3;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar4 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      if ((uVar4 == param_2) && (uVar9 == param_3)) {
        func_0x000107c6142c(uVar9);
      }
      else {
        uVar3 = uVar9;
        func_0x000107c605b8(uVar4,uVar9,param_2,param_3,0);
        func_0x000107c6142c(uVar9);
        if ((uVar4 & 1) == 0) {
          uVar9 = uVar3;
          if (param_1 >> 0x3e != 0) goto LAB_100bc28e0;
          goto LAB_100bc2780;
        }
      }
      func_0x000107c61434(param_3);
      uVar3 = param_3;
      goto LAB_100bc28fc;
    }
LAB_100bc2780:
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar3 = param_1;
    }
    uVar8 = uVar3;
    func_0x000107c60480();
    if ((uVar8 == 1) && (func_0x000107c60480(), uVar3 != 0)) goto LAB_100bc26dc;
LAB_100bc28e0:
    uVar8 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
    uVar3 = uVar9;
  }
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc28b4);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
        uVar7 = uVar3;
      }
      else {
        uVar4 = uVar9;
        uVar7 = param_1;
        FUN_100bc2938();
      }
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc28b0);
        (*pcVar2)();
      }
      uVar5 = uVar4;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c5faec();
      uVar3 = uVar7;
      func_0x000107c61170(uVar5);
      if ((uVar6 == param_2) && (uVar7 == param_3)) {
        func_0x000107c61170(uVar4);
        func_0x000107c6142c(uVar7);
      }
      else {
        uVar3 = uVar7;
        func_0x000107c605b8(uVar6,uVar7,param_2,param_3,0);
        func_0x000107c6142c(uVar7);
        if ((uVar6 & 1) == 0) {
          uVar9 = uVar4;
          func_0x000107c5cb4c(uVar4);
          func_0x000107c61180();
          param_2 = uVar9;
          func_0x000107c5faec();
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar4);
          goto LAB_100bc28fc;
        }
        func_0x000107c61170(uVar4);
      }
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar8);
  }
  param_2 = 0;
  uVar3 = 0;
LAB_100bc28fc:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = param_2;
  return auVar10;
}



/* Entry: 100bc2938; end: 100bc2aeb;  */

ulong FUN_100bc2938(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc2a1c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc2a20);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b0cd8;
    func_0x000107c61168(PTR_PTR_1126b0cd8);
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
    puVar4 = PTR_PTR_1126b0cd8;
    func_0x000107c61168(PTR_PTR_1126b0cd8);
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
  FUN_100bc2654(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc2aec);
  (*pcVar2)();
}



/* Entry: 100bc2aec; end: 100bc47cb;  */

void FUN_100bc2aec(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  undefined **ppuVar29;
  undefined *puVar30;
  uint uVar31;
  undefined *puVar32;
  uint uVar33;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_e0;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  ppuVar2 = param_1;
  func_0x000107c42104();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
    puVar32 = (undefined *)0x0;
    goto LAB_100bc4638;
  }
  ppuVar29 = param_1;
  func_0x000107c49844();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(ppuVar2);
  puVar32 = (undefined *)0x0;
  if (ppuVar29 == (undefined **)0x0) goto LAB_100bc4638;
  ppuVar2 = param_1;
  func_0x000107c4a9c4();
  func_0x000100bc47dc();
  func_0x000107c61180();
  ppuVar29 = param_1;
  func_0x000107c42104();
  func_0x000107c61180();
  ppuVar3 = ppuVar29;
  func_0x000107c42168();
  func_0x000100bc47dc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar29);
  ppuVar29 = param_1;
  func_0x000107c42104(param_1);
  func_0x000107c61180();
  ppuVar4 = ppuVar29;
  func_0x000107c42f38();
  func_0x000107c61180();
  ppuVar5 = ppuVar4;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  uVar6 = param_4;
  func_0x000107c49d0c();
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar29);
  ppuVar29 = param_1;
  FUN_100bc4808();
  uVar33 = (uint)uVar6;
  if (uVar33 != 0) {
    ppuVar4 = param_1;
    func_0x000107c42104();
    func_0x000107c61180();
    func_0x000107c49de8();
    func_0x000107c61170(ppuVar4);
  }
  ppuVar4 = param_1;
  func_0x000107c42104();
  func_0x000107c61180();
  func_0x000107c49ffc();
  func_0x000107c61170(ppuVar4);
  ppuVar4 = param_1;
  func_0x000107c42104();
  func_0x000107c61180();
  ppuVar5 = param_1;
  func_0x000107c49844();
  func_0x000107c61180();
  func_0x000107c406e8(param_1);
  func_0x000107c61174(ppuVar4);
  func_0x000107c61174(ppuVar5);
  ppuVar7 = ppuVar4;
  func_0x000107c42f34();
  func_0x000107c61180();
  if (ppuVar7 == (undefined **)0x0) {
LAB_100bc2edc:
    ppuStack_128 = (undefined **)0x0;
    goto LAB_100bc2ee0;
  }
  ppuVar25 = ppuVar7;
  FUN_100bc4898();
  if ((int)ppuVar25 != 0) {
    ppuVar25 = ppuVar4;
    func_0x000107c42f38();
    func_0x000107c61180();
    func_0x000107c61170();
    if (ppuVar25 == (undefined **)0x0) goto LAB_100bc2edc;
  }
  ppuVar25 = ppuVar4;
  func_0x000107c5df44();
  ppuVar8 = ppuVar7;
  func_0x000107c5b134();
  func_0x000107c61180();
  func_0x000107c61170();
  ppuVar12 = ppuVar7;
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar8 = ppuVar7;
    func_0x000107c3f808();
    func_0x000107c61180();
    func_0x000107c61170();
    if (ppuVar8 != (undefined **)0x0) {
      func_0x000107c3f808();
      func_0x000107c61180();
      func_0x000107c61174();
      ppuVar8 = ppuVar12;
      func_0x000107c5bcc0();
      if (ppuVar8 != (undefined **)0x7) {
        ppuVar8 = ppuVar12;
        func_0x000107c5bcc0();
        if (ppuVar8 != (undefined **)0x9) {
          ppuVar8 = ppuVar12;
          func_0x000107c5bcc0();
          if (ppuVar8 != (undefined **)0x8) {
            func_0x000107cf7a64(ppuVar25,uVar6,ppuVar29);
            func_0x000107c61180();
            ppuStack_128 = ppuVar25;
            goto LAB_100bc2e8c;
          }
          goto LAB_100bc2e78;
        }
        goto LAB_100bc2e58;
      }
      goto LAB_100bc2e20;
    }
    ppuVar8 = ppuVar7;
    func_0x000107c3ef94();
    func_0x000107c61180();
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = ppuVar7;
      func_0x000107c4065c();
      func_0x000107c61180();
      func_0x000107c61170();
      if (ppuVar8 == (undefined **)0x0) goto LAB_100bc2edc;
    }
    else {
      func_0x000107c61170();
    }
    func_0x000107cf7a64(ppuVar25,uVar6,ppuVar29);
    func_0x000107c61180();
    ppuStack_128 = ppuVar25;
    goto LAB_100bc2ee0;
  }
  func_0x000107c5b134();
  func_0x000107c61180();
  ppuVar8 = ppuVar5;
  func_0x000107c5c6f4();
  ppuVar9 = ppuVar5;
  func_0x000107c4498c(ppuVar5);
  ppuVar10 = ppuVar5;
  func_0x000107c4d8cc();
  func_0x000107c61174(ppuVar12);
  ppuVar11 = ppuVar12;
  func_0x000107c5bcc0();
  if (ppuVar11 == (undefined **)0x5) {
LAB_100bc2e20:
    ppuVar25 = &PTR_PTR_110ca9880;
code_r0x000100bc2e28:
    ppuStack_128 = (undefined **)ppuVar25[1];
    goto LAB_100bc2e84;
  }
  ppuVar11 = ppuVar12;
  func_0x000107c5bcc0();
  if (ppuVar11 == (undefined **)0x7) {
LAB_100bc2e58:
    ppuVar25 = &PTR_PTR_110ca9880;
code_r0x000100bc2e60:
    ppuStack_128 = (undefined **)ppuVar25[2];
    goto LAB_100bc2e84;
  }
  ppuVar11 = ppuVar12;
  func_0x000107c5bcc0();
  if (ppuVar11 == (undefined **)0x6) {
LAB_100bc2e78:
    ppuVar25 = &PTR_PTR_110ca9880;
code_r0x000100bc2e80:
    ppuStack_128 = (undefined **)ppuVar25[3];
    goto LAB_100bc2e84;
  }
  ppuVar11 = ppuVar12;
  func_0x000107c5bcc0();
  if ((ppuVar29 == (undefined **)0x0) && (((uVar33 ^ 1) & 1) == 0)) {
    switch(ppuVar11) {
    case (undefined **)0x0:
    case (undefined **)0x5:
    case (undefined **)0x6:
    case (undefined **)0x7:
    case (undefined **)0x9:
    case (undefined **)0xa:
    case (undefined **)0xb:
    case (undefined **)0xf:
      ppuVar25 = &PTR_PTR_110ca9880;
code_r0x000100bc2dd8:
      ppuStack_128 = (undefined **)ppuVar25[4];
      goto LAB_100bc2e84;
    case (undefined **)0x1:
    case (undefined **)0x8:
    case (undefined **)0xd:
    case (undefined **)0xe:
      lVar26 = 0x20;
      lVar27 = 0x28;
      goto code_r0x000100bc46dc;
    case (undefined **)0x2:
      ppuVar25 = &PTR_PTR_110ca98c0;
      break;
    case (undefined **)0x3:
      ppuVar25 = &PTR_PTR_110ca98c0;
      goto code_r0x000100bc2e60;
    case (undefined **)0x4:
      ppuVar25 = &PTR_PTR_110ca98c0;
      goto code_r0x000100bc47b4;
    case (undefined **)0xc:
      ppuVar25 = &PTR_PTR_110ca98c0;
      goto code_r0x000100bc2e80;
    case (undefined **)0x10:
      goto code_r0x000100bc46b8;
    default:
      goto LAB_100bc2e8c;
    }
    goto code_r0x000100bc2e28;
  }
  switch(ppuVar11) {
  case (undefined **)0x0:
  case (undefined **)0x5:
  case (undefined **)0x6:
  case (undefined **)0x7:
  case (undefined **)0x9:
  case (undefined **)0xb:
    ppuVar25 = &PTR_PTR_110ca9880;
    goto code_r0x000100bc3858;
  case (undefined **)0x1:
code_r0x000100bc4798:
    func_0x000107cf7c5c(ppuVar8,ppuVar25,ppuVar9,0 < (int)ppuVar10);
    func_0x000107c61180();
    ppuStack_128 = ppuVar8;
    goto LAB_100bc2e8c;
  case (undefined **)0x2:
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f484f8;
    break;
  case (undefined **)0x3:
    ppuVar25 = &PTR_PTR_110ca98c0;
code_r0x000100bc3858:
    ppuStack_128 = (undefined **)ppuVar25[6];
    break;
  case (undefined **)0x4:
    ppuVar25 = &PTR_PTR_110ca98c0;
    if ((int)ppuVar10 < 1) goto code_r0x000100bc2dd8;
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f48598;
    break;
  case (undefined **)0x8:
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f48538;
    break;
  case (undefined **)0xa:
    ppuVar25 = &PTR_PTR_110ca9930;
code_r0x000100bc47b4:
    ppuStack_128 = (undefined **)*ppuVar25;
    break;
  case (undefined **)0xc:
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f485b8;
    break;
  case (undefined **)0xd:
  case (undefined **)0xe:
    lVar26 = 0x30;
    lVar27 = 0x38;
code_r0x000100bc46dc:
    if ((int)ppuVar25 == 0) {
      lVar27 = lVar26;
    }
    ppuStack_128 = *(undefined ***)((long)&PTR_PTR_110ca9880 + lVar27);
    break;
  case (undefined **)0xf:
    if (((ulong)ppuVar25 & 1) != 0) {
      ppuVar25 = (undefined **)0x1;
      goto code_r0x000100bc4798;
    }
    ppuStack_128 = &PTR____CFConstantStringClassReference_110ecc178;
    break;
  case (undefined **)0x10:
code_r0x000100bc46b8:
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f485d8;
    break;
  default:
    goto LAB_100bc2e8c;
  }
LAB_100bc2e84:
  func_0x000107c61174();
LAB_100bc2e8c:
  func_0x000107c61170(ppuVar12);
  func_0x000107c61170(ppuVar12);
LAB_100bc2ee0:
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar4);
  ppuVar4 = param_1;
  func_0x000107c42104();
  func_0x000107c61180();
  ppuVar5 = param_1;
  func_0x000107c49844();
  func_0x000107c61180();
  ppuVar7 = param_1;
  func_0x000107c5c0d8();
  func_0x000107c61180();
  ppuVar25 = ppuVar7;
  func_0x000107c42be8();
  func_0x000107c61180();
  ppuVar8 = param_1;
  func_0x000107c4069c();
  func_0x000107c61180();
  func_0x000107c61174(ppuVar4);
  func_0x000107c61174(ppuVar5);
  func_0x000107c61174(ppuVar25);
  func_0x000107c61174(ppuVar8);
  ppuVar12 = ppuVar4;
  func_0x000107c42f34();
  func_0x000107c61180();
  ppuVar9 = ppuVar12;
  FUN_100bc4898();
  if (((ulong)ppuVar9 & 1) != 0) {
    ppuVar9 = ppuVar4;
    func_0x000107c42f38();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(ppuVar12);
    if (ppuVar9 != (undefined **)0x0) goto LAB_100bc2fe0;
LAB_100bc2fd0:
    puStack_130 = (undefined *)0x0;
    goto LAB_100bc3e98;
  }
  func_0x000107c61170(ppuVar12);
LAB_100bc2fe0:
  uVar1 = (uint)ppuVar29 | uVar33 ^ 1;
  if (uVar1 == 1) {
    ppuVar12 = ppuVar4;
    func_0x000107c5df44();
    uVar31 = (uint)ppuVar12 ^ 1;
  }
  else {
    uVar31 = 0;
  }
  ppuVar12 = ppuVar4;
  func_0x000107c42f34();
  func_0x000107c61180();
  ppuVar9 = ppuVar12;
  func_0x000107c5b134();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(ppuVar12);
  ppuVar12 = ppuVar4;
  func_0x000107c42f34();
  func_0x000107c61180();
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar9 = ppuVar12;
    func_0x000107c5b134();
    func_0x000107c61180();
    ppuVar10 = ppuVar9;
    func_0x000107c5bcc0();
    func_0x000107c61170(ppuVar9);
    func_0x000107c61170(ppuVar12);
    puVar32 = PTR_PTR_1126d7830;
    puStack_130 = PTR_PTR_1126d7828;
    if (ppuVar10 == (undefined **)0xd) {
      ppuVar29 = ppuVar4;
      func_0x000107c42f38(ppuVar4);
      func_0x000107c61180();
      ppuVar12 = ppuVar29;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      ppuVar9 = ppuVar4;
      func_0x000107c42f3c(ppuVar4);
      func_0x000107c61180();
      ppuVar10 = ppuVar9;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c4f960(puVar32);
      func_0x000107c61180();
      func_0x000107c4f964();
      func_0x000107c61180();
      func_0x000107c61170(puVar32);
      func_0x000107c61170(ppuVar10);
      func_0x000107c61170(ppuVar9);
      func_0x000107c61170(ppuVar12);
      func_0x000107c61170(ppuVar29);
    }
    else {
      func_0x000107c61174(ppuVar4);
      func_0x000107c61174(ppuVar5);
      ppuVar12 = ppuVar4;
      func_0x000107c42f34();
      func_0x000107c61180();
      ppuVar9 = ppuVar12;
      func_0x000107c5b134();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar12);
      ppuVar12 = ppuVar9;
      func_0x000107c3fe04();
      func_0x000107c61180();
      func_0x000107c61170();
      if (ppuVar12 == (undefined **)0x0) {
        puVar32 = (undefined *)0x0;
      }
      else {
        puVar32 = PTR_PTR_1126d7858;
        func_0x000107c610f4();
        ppuVar12 = ppuVar9;
        func_0x000107c3fe04();
        func_0x000107c61180();
        ppuStack_e0 = ppuVar12;
        func_0x000107c5d330();
        func_0x000107c61180();
        func_0x000107c49820();
        ppuVar10 = ppuVar9;
        func_0x000107c5d3b0(ppuVar9);
        func_0x000107c61180();
        func_0x000107c49820();
        ppuVar11 = ppuVar9;
        func_0x000107c3fe04(ppuVar9);
        func_0x000107c61180();
        ppuVar13 = ppuVar11;
        func_0x000107c5d330();
        func_0x000107c61180();
        func_0x000107c49820();
        ppuVar14 = ppuVar9;
        func_0x000107c3fe04(ppuVar9);
        func_0x000107c61180();
        ppuVar15 = ppuVar14;
        func_0x000107c5d330();
        func_0x000107c61180();
        func_0x000107c49820();
        func_0x000107c46c88(puVar32);
        func_0x000107c61170(ppuVar15);
        func_0x000107c61170(ppuVar14);
        func_0x000107c61170(ppuVar13);
        func_0x000107c61170(ppuVar11);
        func_0x000107c61170(ppuVar10);
        func_0x000107c61170(ppuStack_e0);
        func_0x000107c61170(ppuVar12);
      }
      puVar28 = PTR_PTR_1126d7860;
      func_0x000107c610f4(PTR_PTR_1126d7860);
      func_0x000107c4473c(ppuVar9);
      func_0x000107c46c90(puVar28);
      ppuVar12 = ppuVar5;
      func_0x000107c4cdf0();
      func_0x000107c61180();
      ppuVar10 = ppuVar12;
      func_0x000107c43638();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar12);
      ppuVar12 = ppuVar5;
      func_0x000107c5c6f4(ppuVar5);
      func_0x000107c61170(ppuVar5);
      ppuVar11 = ppuVar9;
      FUN_100bc5510(ppuVar9,ppuVar10,ppuVar12,uVar33,ppuVar29);
      func_0x000107c61180();
      func_0x000107c61174(ppuVar4);
      ppuVar29 = ppuVar9;
      func_0x000107c5bcc0();
      if (ppuVar29 < (undefined **)0x11) {
        ppuVar12 = ppuVar4;
        if (((1L << ((ulong)ppuVar29 & 0x3f) & 0x1efe3U) == 0) &&
           (((1L << ((ulong)ppuVar29 & 0x3f) & 0x100cU) != 0 || (uVar1 == 0)))) {
          func_0x000107c4aa84();
          func_0x000107c61180();
          ppuVar29 = ppuVar12;
          func_0x000107c43638();
          func_0x000107c61180();
          ppuStack_e0 = ppuVar29;
          func_0x000107c5cb4c();
          func_0x000107c61180();
          func_0x000107c61170(ppuVar29);
        }
        else {
          func_0x000107c42f38();
          func_0x000107c61180();
          ppuStack_e0 = ppuVar12;
          func_0x000107c5cb4c();
          func_0x000107c61180();
        }
        func_0x000107c61170(ppuVar12);
      }
      func_0x000107c61170(ppuVar4);
      puVar30 = PTR_PTR_1126d7868;
      func_0x000107c610f4(PTR_PTR_1126d7868);
      ppuVar29 = ppuVar10;
      func_0x000107c4c930(ppuVar10);
      func_0x000107c61180();
      func_0x000107c49f14();
      ppuVar12 = ppuVar9;
      func_0x000107c5d3b0(ppuVar9);
      func_0x000107c61180();
      func_0x000107c49820();
      func_0x000107c45eb8(puVar30);
      func_0x000107c61170(ppuVar12);
      func_0x000107c61170(ppuVar29);
      func_0x000107c61170(ppuStack_e0);
      func_0x000107c61170(ppuVar11);
      func_0x000107c61170(ppuVar10);
      func_0x000107c61170(puVar28);
      func_0x000107c61170(puVar32);
      func_0x000107c61170(ppuVar9);
      func_0x000107c61170(ppuVar4);
      func_0x000107c5b448();
      func_0x000107c61180();
      func_0x000107c61170(puVar30);
    }
    goto LAB_100bc3e98;
  }
  ppuVar29 = ppuVar12;
  func_0x000107c3f808();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(ppuVar12);
  if (ppuVar29 == (undefined **)0x0) {
    ppuVar29 = ppuVar4;
    func_0x000107c42f34();
    func_0x000107c61180();
    ppuVar12 = ppuVar29;
    func_0x000107c4065c();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(ppuVar29);
    puStack_130 = PTR_PTR_1126d7828;
    if (ppuVar12 == (undefined **)0x0) {
      ppuVar29 = ppuVar4;
      func_0x000107c42f34();
      func_0x000107c61180();
      ppuVar12 = ppuVar29;
      func_0x000107c3ef94();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(ppuVar29);
      puStack_130 = PTR_PTR_1126d7828;
      if (ppuVar12 == (undefined **)0x0) goto LAB_100bc2fd0;
      ppuVar29 = ppuVar4;
      func_0x000107c42f34();
      func_0x000107c61180();
      ppuVar12 = ppuVar29;
      func_0x000107c3ef94();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar29);
      func_0x000107c5bcc0();
      func_0x000107c4a6d0();
      ppuVar29 = (undefined **)PTR_PTR_1126d7898;
      func_0x000107c610f4(PTR_PTR_1126d7898);
      func_0x000107c46f74();
      func_0x000107c61170(ppuVar12);
      func_0x000107c3eff4();
      func_0x000107c61180();
      goto LAB_100bc3e94;
    }
    func_0x000107c61174(ppuVar4);
    func_0x000107c61174(ppuVar25);
    func_0x000107c61174(ppuVar8);
    ppuVar29 = ppuVar4;
    func_0x000107c42f34();
    func_0x000107c61180();
    ppuVar9 = ppuVar29;
    func_0x000107c4065c();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar29);
    ppuVar10 = ppuVar9;
    func_0x000107c5bcc0();
    ppuVar12 = (undefined **)PTR_PTR_1126d7890;
    ppuVar29 = (undefined **)PTR_PTR_1126d7880;
    switch(ppuVar10) {
    case (undefined **)0x1:
      goto code_r0x000100bc3d2c;
    case (undefined **)0x2:
code_r0x000100bc3d2c:
      func_0x000107c4e39c(PTR_PTR_1126d7880);
      func_0x000107c61180();
      break;
    case (undefined **)0x3:
      func_0x000107c44524(PTR_PTR_1126d7880);
      func_0x000107c61180();
      break;
    case (undefined **)0x4:
      func_0x000107c4a848(PTR_PTR_1126d7880);
      func_0x000107c61180();
      break;
    case (undefined **)0x5:
      func_0x000107c406e4(PTR_PTR_1126d7880);
      func_0x000107c61180();
      break;
    case (undefined **)0x6:
      ppuVar29 = ppuVar4;
      func_0x000107c42f38(ppuVar4);
      func_0x000107c61180();
      ppuVar12 = ppuVar29;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar29);
      goto code_r0x000100bc3d88;
    case (undefined **)0x7:
      func_0x000107c5c0c4(ppuVar25);
      func_0x000107c5c100(ppuVar29);
      func_0x000107c61180();
      break;
    case (undefined **)0x8:
      func_0x000107c5d430(PTR_PTR_1126d7880);
      func_0x000107c61180();
      break;
    case (undefined **)0x9:
      func_0x000107c5bc5c(PTR_PTR_1126d7890);
      func_0x000107c61180();
      goto code_r0x000100bc3e3c;
    case (undefined **)0xa:
      func_0x000107c5c0c4(ppuVar25);
      func_0x000107c42bec(ppuVar12);
      func_0x000107c61180();
      goto code_r0x000100bc3e3c;
    case (undefined **)0xb:
      func_0x000107c5c0c4(ppuVar25);
      func_0x000107c506bc(ppuVar12);
      func_0x000107c61180();
code_r0x000100bc3e3c:
      func_0x000107c5d644(ppuVar29);
      func_0x000107c61180();
code_r0x000100bc3e4c:
      func_0x000107c61170(ppuVar12);
      break;
    case (undefined **)0xc:
      ppuVar29 = ppuVar8;
      func_0x000107c49940(ppuVar8);
      func_0x000107c61180();
      ppuVar12 = ppuVar29;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar29);
code_r0x000100bc3d88:
      ppuVar29 = (undefined **)PTR_PTR_1126d7880;
      func_0x000107c4e39c(PTR_PTR_1126d7880);
      func_0x000107c61180();
      goto code_r0x000100bc3e4c;
    case (undefined **)0xd:
      func_0x000107c4fe10(PTR_PTR_1126d7880);
      func_0x000107c61180();
      break;
    default:
      ppuVar29 = (undefined **)0x0;
    }
    func_0x000107c61170(ppuVar9);
    func_0x000107c61170(ppuVar8);
    func_0x000107c61170(ppuVar25);
    func_0x000107c61170(ppuVar4);
    func_0x000107c3f96c();
    func_0x000107c61180();
    goto LAB_100bc3e94;
  }
  func_0x000107c61174(ppuVar4);
  ppuVar12 = ppuVar4;
  func_0x000107c42f34();
  func_0x000107c61180();
  ppuVar29 = ppuVar12;
  func_0x000107c3f808();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar12);
  ppuVar12 = ppuVar4;
  func_0x000107c42f38();
  func_0x000107c61180();
  ppuVar9 = ppuVar12;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar12);
  ppuVar12 = ppuVar4;
  func_0x000107c42f3c();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar4);
  ppuVar10 = ppuVar12;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar12);
  ppuVar12 = ppuVar29;
  func_0x000107c5bcc0();
  puVar28 = PTR_PTR_1126d7880;
  puVar32 = PTR_PTR_1126d7828;
  ppuVar11 = ppuVar29;
  switch(ppuVar12) {
  case (undefined **)0x0:
  case (undefined **)0x1:
  case (undefined **)0x4:
  case (undefined **)0x6:
  case (undefined **)0x7:
  case (undefined **)0x8:
  case (undefined **)0x9:
    func_0x000107c5d330(ppuVar29);
    func_0x000107c61180();
    func_0x000107c49820();
    goto code_r0x000100bc3290;
  case (undefined **)0x2:
    ppuVar11 = (undefined **)PTR_PTR_1126d7870;
    func_0x000107c610f4(PTR_PTR_1126d7870);
    goto code_r0x000100bc3a30;
  case (undefined **)0x3:
    ppuVar11 = (undefined **)PTR_PTR_1126d7870;
    func_0x000107c610f4(PTR_PTR_1126d7870);
code_r0x000100bc3a30:
    func_0x000107c4551c();
    func_0x000107c51a28();
    func_0x000107c61180();
    puStack_130 = puVar32;
    break;
  case (undefined **)0x5:
    ppuVar11 = (undefined **)PTR_PTR_1126d7878;
    func_0x000107c610f4(PTR_PTR_1126d7878);
    func_0x000107c45518();
    func_0x000107c4ca20();
    func_0x000107c61180();
    puStack_130 = puVar32;
    break;
  case (undefined **)0xa:
    func_0x000107c5d330(ppuVar29);
    func_0x000107c61180();
    func_0x000107c49820();
code_r0x000100bc3290:
    func_0x000107c3d10c(puVar28);
    func_0x000107c61180();
    goto code_r0x000100bc329c;
  case (undefined **)0xb:
    ppuVar11 = (undefined **)PTR_PTR_1126d7830;
    func_0x000107c4f960(PTR_PTR_1126d7830);
    func_0x000107c61180();
    func_0x000107c4f964();
    func_0x000107c61180();
    puStack_130 = puVar32;
    break;
  case (undefined **)0xc:
    ppuVar11 = (undefined **)PTR_PTR_1126d7830;
    func_0x000107c50074(PTR_PTR_1126d7830);
    func_0x000107c61180();
    func_0x000107c4f964();
    func_0x000107c61180();
    puStack_130 = puVar32;
    break;
  case (undefined **)0xd:
    ppuVar11 = (undefined **)PTR_PTR_1126d7888;
    func_0x000107c610f4(PTR_PTR_1126d7888);
    goto code_r0x000100bc3ae8;
  case (undefined **)0xe:
    ppuVar11 = (undefined **)PTR_PTR_1126d7880;
    func_0x000107c443e8(PTR_PTR_1126d7880);
    func_0x000107c61180();
    goto code_r0x000100bc3b30;
  case (undefined **)0xf:
    ppuVar11 = (undefined **)PTR_PTR_1126d7880;
    func_0x000107c5e01c(PTR_PTR_1126d7880);
    func_0x000107c61180();
    goto code_r0x000100bc3b30;
  case (undefined **)0x10:
    if ((uVar31 & 1) == 0) {
      func_0x000107c5d330(ppuVar29);
      func_0x000107c61180();
      func_0x000107c49820();
      goto code_r0x000100bc3290;
    }
    ppuVar11 = (undefined **)PTR_PTR_1126d7880;
    func_0x000107c452b8(PTR_PTR_1126d7880);
    func_0x000107c61180();
    func_0x000107c3f96c();
    func_0x000107c61180();
    puStack_130 = puVar32;
    break;
  case (undefined **)0x11:
    ppuVar11 = (undefined **)PTR_PTR_1126d7880;
    func_0x000107c516e4(PTR_PTR_1126d7880);
    func_0x000107c61180();
code_r0x000100bc3b30:
    func_0x000107c3f96c();
    func_0x000107c61180();
    puStack_130 = puVar32;
    break;
  case (undefined **)0x12:
    ppuVar11 = (undefined **)PTR_PTR_1126d7888;
    func_0x000107c610f4(PTR_PTR_1126d7888);
code_r0x000100bc3ae8:
    func_0x000107c46f78();
    func_0x000107c50218();
    func_0x000107c61180();
    puStack_130 = puVar32;
    break;
  case (undefined **)0x13:
    func_0x000107c5d330(ppuVar29);
    func_0x000107c61180();
    func_0x000107c49820();
    func_0x000107c4eb0c(puVar28);
    func_0x000107c61180();
    goto code_r0x000100bc329c;
  case (undefined **)0x14:
    func_0x000107c5d330(ppuVar29);
    func_0x000107c61180();
    func_0x000107c49820();
    func_0x000107c4eb38(puVar28);
    func_0x000107c61180();
code_r0x000100bc329c:
    func_0x000107c3f96c();
    func_0x000107c61180();
    func_0x000107c61170(puVar28);
    puStack_130 = puVar32;
    break;
  default:
    goto LAB_100bc3b58;
  }
  func_0x000107c61170(ppuVar11);
LAB_100bc3b58:
  func_0x000107c61170(ppuVar10);
  func_0x000107c61170(ppuVar9);
LAB_100bc3e94:
  func_0x000107c61170(ppuVar29);
LAB_100bc3e98:
  func_0x000107c61170(ppuVar8);
  func_0x000107c61170(ppuVar25);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar8);
  func_0x000107c61170(ppuVar25);
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61174(param_1);
  ppuVar29 = param_1;
  func_0x000107c42104();
  func_0x000107c61180();
  ppuVar4 = ppuVar29;
  func_0x000107c42f34();
  func_0x000107c61180();
  ppuVar5 = ppuVar4;
  func_0x000107c4065c();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar29);
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar29 = param_1;
    func_0x000107c42104();
    func_0x000107c61180();
    ppuVar4 = ppuVar29;
    func_0x000107c42f34();
    func_0x000107c61180();
    ppuVar5 = ppuVar4;
    func_0x000107c4065c();
    func_0x000107c61180();
    func_0x000107c5bcc0();
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(ppuVar29);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61174(param_1);
  ppuVar29 = param_1;
  func_0x000107c42104();
  func_0x000107c61180();
  ppuVar4 = ppuVar29;
  func_0x000107c42f34();
  func_0x000107c61180();
  ppuVar5 = ppuVar4;
  func_0x000107c4065c();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar29);
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar29 = param_1;
    func_0x000107c42104();
    func_0x000107c61180();
    ppuVar4 = ppuVar29;
    func_0x000107c42f34();
    func_0x000107c61180();
    ppuVar5 = ppuVar4;
    func_0x000107c4065c();
    func_0x000107c61180();
    func_0x000107c5bcc0();
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(ppuVar29);
  }
  func_0x000107c61170(param_1);
  ppuVar29 = param_1;
  func_0x000107c42104();
  func_0x000107c61180();
  ppuVar4 = ppuVar29;
  func_0x000107c42f34();
  func_0x000107c61180();
  ppuVar5 = ppuVar4;
  func_0x000107c3f808();
  func_0x000107c61180();
  ppuVar7 = ppuVar5;
  func_0x000107c4f870();
  func_0x000107c61180();
  func_0x000107c49804();
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar29);
  ppuVar29 = param_1;
  func_0x000107c42104();
  func_0x000107c61180();
  ppuVar4 = ppuVar29;
  func_0x000107c42f34();
  func_0x000107c61180();
  ppuVar5 = ppuVar4;
  func_0x000107c5b134();
  func_0x000107c61180();
  ppuVar7 = ppuVar5;
  func_0x000107c5b35c();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar29);
  puVar32 = PTR_PTR_1126d7848;
  func_0x000107c610f4();
  ppuVar29 = param_1;
  func_0x000107c4d844();
  func_0x000107c61180();
  FUN_100bc4c64();
  ppuVar4 = param_1;
  func_0x000107c49844();
  func_0x000107c61180();
  func_0x000107c61174();
  ppuVar5 = ppuVar4;
  func_0x000107c4498c();
  if ((int)ppuVar5 != 0) {
    func_0x000107c4cdf4();
  }
  func_0x000107c61170(ppuVar4);
  ppuVar5 = param_1;
  func_0x000107c49844();
  func_0x000107c61180();
  func_0x000107c61174();
  ppuVar25 = ppuVar5;
  func_0x000107c4498c();
  if ((int)ppuVar25 != 0) {
    func_0x000107c4cdf4();
  }
  func_0x000107c61170(ppuVar5);
  ppuVar25 = param_1;
  func_0x000107c49844();
  func_0x000107c61180();
  func_0x000107c4d8cc();
  ppuVar8 = param_1;
  func_0x000107c49844();
  func_0x000107c61180();
  ppuVar12 = ppuVar8;
  func_0x000107c4cdf0();
  func_0x000107c61180();
  ppuVar9 = param_1;
  func_0x000107c49844();
  func_0x000107c61180();
  func_0x000107c4c8cc();
  ppuVar10 = param_1;
  func_0x000107c5c0d8();
  func_0x000107c61180();
  ppuVar11 = ppuVar10;
  func_0x000107c42be8();
  func_0x000107c61180();
  ppuVar13 = param_1;
  func_0x000107c406d8();
  func_0x000107c61180();
  if (ppuVar13 == (undefined **)0x0) {
    puVar28 = (undefined *)0x0;
  }
  else {
    ppuVar14 = ppuVar13;
    func_0x000107c3f374();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar28 = (undefined *)0x0;
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar14 = ppuVar13;
      func_0x000107c3f374();
      func_0x000107c61180();
      if (ppuVar14 == (undefined **)0x0) {
        uVar33 = 0;
      }
      else {
        ppuVar15 = ppuVar14;
        func_0x000107c4a0f0();
        uVar33 = (uint)ppuVar15 ^ 1;
      }
      func_0x000107c61170(ppuVar14);
      puVar28 = PTR_PTR_1126d7838;
      ppuVar14 = ppuVar13;
      func_0x000107c3f374();
      func_0x000107c61180();
      ppuVar15 = ppuVar14;
      func_0x000107c3d45c();
      func_0x000107c61180();
      ppuVar16 = ppuVar13;
      func_0x000107c3f374();
      func_0x000107c61180();
      func_0x000107c50668();
      ppuVar17 = ppuVar13;
      func_0x000107c3f374();
      func_0x000107c61180();
      ppuVar18 = ppuVar17;
      func_0x000107c42f30();
      func_0x000107c61180();
      ppuVar19 = ppuVar13;
      func_0x000107c3f374(ppuVar13);
      func_0x000107c61180();
      ppuVar20 = ppuVar19;
      func_0x000107c3d4e4();
      func_0x000107c61180();
      ppuVar21 = ppuVar20;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      ppuVar22 = ppuVar13;
      func_0x000107c3f374(ppuVar13);
      func_0x000107c61180();
      ppuVar23 = ppuVar22;
      func_0x000107c3f890();
      func_0x000107c61180();
      if (uVar33 == 0) {
        func_0x000107c4d6dc();
        func_0x000107c61180();
      }
      else {
        ppuVar24 = ppuVar13;
        func_0x000107c3ec08(ppuVar13);
        func_0x000107c61180();
        func_0x000107c3f384();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar24);
      }
      func_0x000107c61170(ppuVar23);
      func_0x000107c61170(ppuVar22);
      func_0x000107c61170(ppuVar21);
      func_0x000107c61170(ppuVar20);
      func_0x000107c61170(ppuVar19);
      func_0x000107c61170(ppuVar18);
      func_0x000107c61170(ppuVar17);
      func_0x000107c61170(ppuVar16);
      func_0x000107c61170(ppuVar15);
      func_0x000107c61170(ppuVar14);
    }
  }
  func_0x000107c61170(ppuVar13);
  ppuVar13 = param_1;
  func_0x000107c4069c();
  func_0x000107c61180();
  if (ppuVar13 == (undefined **)0x0) {
    puVar30 = (undefined *)0x0;
  }
  else {
    puVar30 = PTR_PTR_1126d7840;
    func_0x000107c610f4();
    ppuVar14 = ppuVar13;
    func_0x000107c49940(ppuVar13);
    func_0x000107c61180();
    func_0x000107c46f14();
    func_0x000107c61170(ppuVar14);
  }
  func_0x000107c61170(ppuVar13);
  func_0x000107c461a8(puVar32);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(ppuVar11);
  func_0x000107c61170(ppuVar10);
  func_0x000107c61170(ppuVar9);
  func_0x000107c61170(ppuVar12);
  func_0x000107c61170(ppuVar8);
  func_0x000107c61170(ppuVar25);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar29);
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(puStack_130);
  func_0x000107c61170(ppuStack_128);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(ppuVar2);
LAB_100bc4638:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar32);
  return;
}



/* Entry: 100bc47cc; end: 100bc47d3; -[SCNMessagingFeedEntry displayInfo] */

undefined8 FUN_100bc47cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100bc47d4; end: 100bc47f7; -[SCNMessagingFeedEntry interactionInfo] */

undefined8 FUN_100bc47d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100bc47f8; end: 100bc47ff; -[SCNMessagingFeedEntryDisplayInfo displayTimestamp] */

undefined8 FUN_100bc47f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bc4800; end: 100bc4807; -[SCNMessagingFeedEntryDisplayInfo feedItemCreatorId] */

undefined8 FUN_100bc4800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100bc4808; end: 100bc4887;  */

undefined8 FUN_100bc4808(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4e3a4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c40808();
  if (lVar2 == 1) {
    lVar2 = param_1;
    func_0x000107c406e8();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      uVar3 = 1;
      goto LAB_100bc486c;
    }
  }
  else {
    func_0x000107c61170(lVar1);
  }
  uVar3 = 0;
LAB_100bc486c:
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 100bc4888; end: 100bc488f; -[SCNMessagingFeedEntryDisplayInfo isLocked] */

undefined1 FUN_100bc4888(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 100bc4890; end: 100bc4897; -[SCNMessagingFeedEntryDisplayInfo feedItem] */

undefined8 FUN_100bc4890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100bc4898; end: 100bc4a27;  */

bool FUN_100bc4898(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  long unaff_x23;
  long unaff_x26;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c5b134();
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_100bc48f8:
    lVar3 = param_1;
    func_0x000107c3f808();
    func_0x000107c61180();
    if (lVar3 == 0) {
LAB_100bc4934:
      lVar4 = param_1;
      func_0x000107c4065c();
      func_0x000107c61180();
      if (lVar4 == 0) {
LAB_100bc4970:
        lVar5 = param_1;
        func_0x000107c3ef94();
        func_0x000107c61180();
        if (lVar5 == 0) {
          bVar1 = false;
        }
        else {
          lVar6 = param_1;
          func_0x000107c3ef94(param_1);
          func_0x000107c61180();
          lVar7 = lVar6;
          func_0x000107c5bcc0();
          bVar1 = lVar7 == 0;
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar5);
        }
        if (lVar4 != 0) goto LAB_100bc49bc;
      }
      else {
        unaff_x26 = param_1;
        func_0x000107c4065c();
        func_0x000107c61180();
        lVar5 = unaff_x26;
        func_0x000107c5bcc0();
        if (lVar5 != 0) goto LAB_100bc4970;
        bVar1 = true;
LAB_100bc49bc:
        func_0x000107c61170(unaff_x26);
        func_0x000107c61170(lVar4);
      }
      if (lVar3 != 0) goto LAB_100bc49d0;
    }
    else {
      unaff_x23 = param_1;
      func_0x000107c3f808();
      func_0x000107c61180();
      lVar4 = unaff_x23;
      func_0x000107c5bcc0();
      if (lVar4 != 0) goto LAB_100bc4934;
      bVar1 = true;
LAB_100bc49d0:
      func_0x000107c61170(unaff_x23);
    }
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) goto LAB_100bc49ec;
  }
  else {
    unaff_x21 = param_1;
    func_0x000107c5b134();
    func_0x000107c61180();
    lVar3 = unaff_x21;
    func_0x000107c5bcc0();
    if (lVar3 != 0) goto LAB_100bc48f8;
    bVar1 = true;
  }
  func_0x000107c61170(unaff_x21);
LAB_100bc49ec:
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  return bVar1;
}



/* Entry: 100bc4a28; end: 100bc4a2f; -[SCNMessagingFeedItem snap] */

undefined8 FUN_100bc4a28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bc4a30; end: 100bc4a37; -[SCNMessagingFeedItem chat] */

undefined8 FUN_100bc4a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bc4a38; end: 100bc4a5b; -[SCMergedObserver complete] */

void FUN_100bc4a38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_1125ae760)
    ;
    return;
  }
  return;
}



/* Entry: 100bc4a5c; end: 100bc4a63; -[SCNMessagingChatItem state] */

undefined8 FUN_100bc4a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bc4a64; end: 100bc4a6b; -[SCNMessagingFeedEntry streakMetadata] */

undefined8 FUN_100bc4a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100bc4a6c; end: 100bc4a73; -[SCNMessagingFeedEntry conversationInvitationMetadata] */

undefined8 FUN_100bc4a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 100bc4a74; end: 100bc4a7b; -[SCNMessagingFeedItem conversation] */

undefined8 FUN_100bc4a74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100bc4a7c; end: 100bc4a83; -[SCNMessagingChatItem quotedMessageType] */

undefined8 FUN_100bc4a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bc4a84; end: 100bc4a8f; -[_TtC34AdaptiveLensFetchingImplementation26CompositeLensFetchNotifier lensAssetDownloadObservable] */

void FUN_100bc4a84(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_100bc4ac4();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bc4a90; end: 100bc4ac3;  */

void FUN_100bc4a90(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b794a0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100bc4ac4; end: 100bc4c53;  */

undefined * FUN_100bc4ac4(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    FUN_100bc4a90(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc4c54);
      (*pcVar2)();
    }
    uVar9 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        uVar10 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
        func_0x000107c615f0(uVar10);
      }
      else {
        uVar10 = uVar9;
        func_0x0001019c2294(uVar9,uVar7);
      }
      uVar3 = uVar10;
      func_0x000107c4adf0();
      func_0x000107c61180();
      func_0x000107c615e8(uVar10);
      uVar10 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar10) {
        FUN_100bc4a90(1 < *(ulong *)(puVar1 + 0x18),uVar10 + 1,1);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar10 + 1;
      *(ulong *)(puVar1 + uVar10 * 8 + 0x20) = uVar3;
    } while (uVar8 != uVar9);
  }
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  uVar5 = 0x112d5b0a0;
  FUN_1000285a8(0x112d5b0a0,&UNK_10d97aac0);
  puVar6 = puVar1;
  func_0x000107c5fc48(puVar1,uVar5);
  func_0x000107c6142c(puVar1);
  func_0x000107c4cd50(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar4;
}


