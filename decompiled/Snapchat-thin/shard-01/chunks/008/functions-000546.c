/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101525b00; end: 101525b2b;  */

void FUN_101525b00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101525b2c; end: 101525b7b;  */

undefined8 FUN_101525b2c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101525b7c; end: 101525cab;  */

void FUN_101525b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7678;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101525cac; end: 101525cdf;  */

undefined1  [16] FUN_101525cac(void)

{
  return ZEXT816(0x1103d7e68);
}



/* Entry: 101525ce0; end: 101525d07;  */

void FUN_101525ce0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101525d08; end: 101525d0f;  */

undefined8 FUN_101525d08(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101525d10; end: 101525dcf;  */

void FUN_101525d10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x0001001f3fc8();
  func_0x000107c613fc();
  FUN_101525dd0(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 101525dd0; end: 101525f33;  */

void FUN_101525dd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7680;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 101525f34; end: 101525f67;  */

void FUN_101525f34(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101525f68; end: 101525fbb;  */

void FUN_101525f68(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101525fbc; end: 10152600b;  */

undefined8 FUN_101525fbc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10152600c; end: 10152604f;  */

undefined1  [16] FUN_10152600c(void)

{
  return ZEXT816(0x1103d7ee8);
}



/* Entry: 101526050; end: 101526077;  */

void FUN_101526050(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101526078; end: 10152607f;  */

undefined8 FUN_101526078(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101526080; end: 10152613f;  */

void FUN_101526080(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x0001002091b8();
  func_0x000107c613fc();
  FUN_101526140(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 101526140; end: 1015262a3;  */

void FUN_101526140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7688;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1015262a4; end: 1015262d7;  */

void FUN_1015262a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1015262d8; end: 10152632b;  */

void FUN_1015262d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10152632c; end: 10152637b;  */

undefined8 FUN_10152632c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10152637c; end: 1015263bf;  */

undefined1  [16] FUN_10152637c(void)

{
  return ZEXT816(0x1103d7f88);
}



/* Entry: 1015263c0; end: 1015263e7;  */

void FUN_1015263c0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1015263e8; end: 1015263ef;  */

undefined8 FUN_1015263e8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1015263f0; end: 10152674f;  */

void FUN_1015263f0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  func_0x00010022f410();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  func_0x00010167eb50(0);
  func_0x000107c613fc();
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
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  func_0x00010167e850();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  func_0x00010167e958();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 101526750; end: 1015267bb;  */

void FUN_101526750(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1015267bc; end: 10152680f;  */

void FUN_1015267bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101526810; end: 101526853;  */

undefined1  [16] FUN_101526810(void)

{
  return ZEXT816(0x1103d8028);
}



/* Entry: 101526854; end: 1015268a7;  */

void FUN_101526854(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1015268a8; end: 1015268e7;  */

void FUN_1015268a8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_101528100();
  func_0x000100082720("CircumstanceEngineBootstrapResponseProcessorPluginProvider",0x3a,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1015268e8; end: 101526b0f;  */

undefined1  [16]
FUN_1015268e8(undefined8 *param_1,byte *param_2,char *param_3,char *param_4,char *param_5,
             char *param_6,char *param_7,char *param_8,char *param_9,char *param_10,char *param_11,
             char *param_12,char *param_13,char *param_14,char *param_15,char *param_16,
             char *param_17,char *param_18)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 unaff_x22;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar4 = (ulong)(byte)(&UNK_10d959f78)[*param_2];
  pcVar3 = (char *)(uVar4 * 4 + 0x101526930);
  pcVar1 = param_18;
  pcVar2 = param_3;
  switch(*param_2) {
  default:
    FUN_10152c5a8();
    param_18 = "ComposerJobSchedulerPluginPluginProvider";
    pcVar2 = (char *)0x28;
    pcVar3 = param_3;
    break;
  case 1:
    func_0x0001016aab4c();
    pcVar3 = param_4;
  case 0x43:
    param_18 = "ManualExposureCofStorePluginPluginProvider";
    pcVar2 = (char *)0x2a;
    break;
  case 2:
  case 0x1c:
    func_0x0001016df140();
    param_18 = "DuplexClientPluginPluginProvider";
    pcVar3 = param_5;
  case 0x3b:
code_r0x000101526af0:
    pcVar2 = (char *)0x20;
    break;
  case 3:
    pcVar1 = param_6;
  case 0x18:
    func_0x0001016e061c();
    param_18 = "DuplexRegistryConfigPluginPluginProvider";
    pcVar2 = (char *)0x28;
    pcVar3 = pcVar1;
code_r0x000101526a34:
    break;
  case 4:
    func_0x0001016a46dc();
    param_18 = "BoltUploaderPluginPluginProvider";
    pcVar3 = param_7;
    goto code_r0x000101526af0;
  case 5:
  case 0x5d:
  case 99:
  case 0xbc:
  case 0xe7:
    func_0x0001016a5570();
    param_18 = param_8;
  case 0x4f:
    pcVar3 = param_18;
code_r0x000101526a7c:
    param_18 = "er";
code_r0x000101526a80:
    param_18 = param_18 + 0xe0;
    pcVar2 = (char *)0x19;
    break;
  case 6:
    func_0x00010374a0c0();
    pcVar1 = "er";
    pcVar3 = param_18;
  case 0x58:
  case 0xb1:
    param_18 = pcVar1 + 0xb0;
code_r0x000101526ab8:
    pcVar2 = (char *)0x2d;
code_r0x000101526abc:
    break;
  case 7:
    pcVar1 = param_9;
  case 0x39:
  case 0xa1:
  case 0xd1:
    func_0x0001016a9c24();
    param_18 = "er";
    pcVar3 = pcVar1;
code_r0x000101526a48:
    param_18 = param_18 + 0x90;
    pcVar2 = (char *)0x1f;
code_r0x000101526a50:
    break;
  case 8:
    param_18 = param_10;
  case 0x4d:
  case 0x5e:
    func_0x0001016aafb0();
    pcVar3 = param_18;
code_r0x000101526ae8:
    param_18 = "er";
code_r0x000101526aec:
    param_18 = param_18 + 0x60;
    goto code_r0x000101526af0;
  case 9:
  case 0x84:
    func_0x0001016a4ff4();
    param_18 = "FriendStorePluginPluginProvider";
    pcVar2 = (char *)0x1f;
    pcVar3 = param_11;
    break;
  case 10:
  case 0x42:
  case 0x4b:
  case 0x68:
  case 0x9d:
  case 0xc1:
  case 0xcd:
  case 0xec:
  case 0xfd:
    param_18 = param_12;
  case 0x41:
  case 0x44:
  case 0x4a:
  case 0x4e:
  case 0x50:
  case 0x53:
  case 0x57:
  case 0x5c:
  case 0x69:
  case 0x9b:
  case 0xa9:
  case 0xae:
  case 0xb3:
  case 0xb6:
  case 0xbb:
  case 0xc2:
  case 0xcb:
  case 0xd9:
  case 0xde:
  case 0xe1:
  case 0xe6:
  case 0xed:
  case 0xfb:
    func_0x0001016aad30();
code_r0x000101526ac8:
    pcVar3 = param_18;
code_r0x000101526acc:
    param_18 = "er";
code_r0x000101526ad0:
    param_18 = param_18 + 0x10;
code_r0x000101526ad4:
    pcVar2 = (char *)0x24;
    break;
  case 0xb:
    func_0x0001016a44f8();
    param_18 = "BlizzardLoggerPluginPluginProvider";
    pcVar2 = (char *)0x22;
    pcVar3 = param_13;
    break;
  case 0xc:
    func_0x000101688d14();
    param_18 = "BitmojiCreationServicePluginPluginProvider";
    pcVar2 = (char *)0x2a;
    pcVar3 = param_14;
  case 0x7c:
  case 0x8c:
    break;
  case 0xd:
    func_0x000101689bc0();
    pcVar1 = "CustomojiSearchEngineDiPluginPluginProvider";
    pcVar3 = param_15;
  case 0x28:
code_r0x000101526aa0:
    param_18 = pcVar1;
    pcVar2 = (char *)0x2b;
    break;
  case 0xe:
    func_0x0001016a9e90();
    param_18 = "NotificationPresenterPluginPluginProvider";
    pcVar2 = (char *)0x29;
    pcVar3 = param_16;
    break;
  case 0xf:
    func_0x00010174d090();
    param_18 = "ComplianceEnginePluginPluginProvider";
    pcVar2 = (char *)0x24;
    pcVar3 = param_17;
    break;
  case 0x10:
    func_0x00010175ed1c();
    pcVar1 = "ActivitySignalsProviderPluginPluginProvider";
    pcVar3 = param_18;
    goto code_r0x000101526aa0;
  case 0x19:
  case 0x29:
  case 0x79:
  case 0x81:
  case 0x89:
    goto code_r0x000101526a50;
  case 0x1a:
  case 0x2a:
  case 0x7a:
  case 0x82:
  case 0x8a:
    func_0x000107c61170(pcVar3);
    func_0x000107c61170(uVar4);
    *param_1 = unaff_x22;
    auVar7._8_8_ = param_3;
    auVar7._0_8_ = uVar4;
    return auVar7;
  case 0x2c:
    goto code_r0x000101526a34;
  case 0x38:
  case 0x3a:
  case 0x47:
  case 0xa8:
  case 0xb0:
  case 0xb5:
  case 0xd8:
  case 0xe0:
    goto code_r0x000101526a7c;
  case 0x3c:
  case 0x3f:
  case 0x65:
  case 0xa2:
  case 0xbe:
  case 0xd2:
  case 0xe9:
    goto code_r0x000101526aec;
  case 0x3d:
  case 0x45:
  case 0x62:
  case 0x9c:
  case 0x9f:
  case 0xa3:
  case 0xcc:
  case 0xcf:
  case 0xd3:
  case 0xfc:
  case 0xff:
    goto code_r0x000101526ae8;
  case 0x3e:
  case 0x46:
  case 0x54:
  case 0xa7:
  case 0xaf:
  case 0xd7:
  case 0xdf:
    goto code_r0x000101526afc;
  case 0x40:
  case 0x5b:
  case 100:
  case 0x6a:
  case 0x99:
  case 0xaa:
  case 0xb4:
  case 0xb7:
  case 0xbd:
  case 0xc3:
  case 0xc9:
  case 0xda:
  case 0xe2:
  case 0xe8:
  case 0xee:
  case 0xf9:
    goto code_r0x000101526af8;
  case 0x48:
  case 0xad:
  case 0xba:
  case 0xdd:
  case 0xe5:
    goto code_r0x000101526abc;
  case 0x49:
    goto code_r0x000101526ad0;
  case 0x4c:
  case 0x52:
  case 0x5a:
  case 0x5f:
    goto code_r0x000101526b04;
  case 0x51:
    break;
  case 0x55:
  case 0x59:
  case 0x80:
    goto code_r0x000101526b00;
  case 0x56:
  case 0x98:
  case 200:
  case 0xf8:
    goto code_r0x000101526a48;
  case 0x60:
  case 0xa0:
  case 0xa6:
  case 0xd0:
  case 0xd6:
    goto code_r0x000101526acc;
  case 0x61:
  case 0x67:
  case 0x9a:
  case 0x9e:
  case 0xa5:
  case 0xac:
  case 0xb9:
  case 0xc0:
  case 0xca:
  case 0xce:
  case 0xd5:
  case 0xdc:
  case 0xe4:
  case 0xeb:
  case 0xfa:
  case 0xfe:
    goto code_r0x000101526ad4;
  case 0x66:
  case 0xab:
  case 0xb8:
  case 0xbf:
  case 0xdb:
  case 0xe3:
  case 0xea:
    goto code_r0x000101526b08;
  case 0x78:
    goto code_r0x000101526a80;
  case 0x88:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_18 + 0xc28;
    return auVar6;
  case 0xa4:
  case 0xd4:
    goto code_r0x000101526ac8;
  case 0xb2:
    goto code_r0x000101526ab8;
  }
  param_4 = (char *)0x2;
  param_3 = pcVar2;
code_r0x000101526af8:
  func_0x000100082720(param_18,param_3,param_4);
code_r0x000101526afc:
  *param_1 = pcVar3;
code_r0x000101526b00:
code_r0x000101526b04:
code_r0x000101526b08:
  auVar5._8_8_ = param_3;
  auVar5._0_8_ = param_18;
  return auVar5;
}



/* Entry: 101526b10; end: 101526b5b;  */

void FUN_101526b10(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1015268e8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 101526b5c; end: 101526bab;  */

undefined1  [16] FUN_101526b5c(void)

{
  return ZEXT816(0x1103d8af0);
}



/* Entry: 101526bac; end: 101526c43; -[_TtC28SCConnectedLensLogoutCleanupP33_62A9B4E6061975F25EAA29A8244E0FF735SCConnectedLensLogoutCleanupHandler cleanUpUserData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101526bac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112db0670);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar1 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010efb0240);
    func_0x000107c56bcc(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 101526c44; end: 101526c77;  */

void FUN_101526c44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101526c78; end: 101526c87; -[_TtC28SCConnectedLensLogoutCleanupP33_62A9B4E6061975F25EAA29A8244E0FF735SCConnectedLensLogoutCleanupHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101526c78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112db0670));
  return;
}



/* Entry: 101526c88; end: 101526d1f;  */

void FUN_101526c88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126a76a8;
  func_0x000107c61168();
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000107c3ed04(puVar1,param_3,uStack_48,uStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_48);
  *param_1 = puVar1;
  return;
}



/* Entry: 101526d20; end: 101526d2f;  */

undefined1  [16] FUN_101526d20(void)

{
  return ZEXT816(0x1103d8db0);
}



/* Entry: 101526d30; end: 101526ea3;  */

/* WARNING: Possible PIC construction at 0x000101526d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101526d90) */

void FUN_101526d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101526ea4; end: 101526ed3;  */

void FUN_101526ea4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101526ed4; end: 101526fd7;  */

void FUN_101526ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x0001000ab060(0);
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x0001048c397c(0);
  func_0x0001048c3404();
  uVar2 = uVar1;
  func_0x0001048ba7a4();
  func_0x000107c61170(uVar1);
  uVar3 = 0;
  func_0x0001000aad1c(0);
  func_0x0001000aad3c();
  puVar4 = &UNK_1103d9090;
  func_0x000107c613fc(&UNK_1103d9090,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_2);
  uVar1 = uVar2;
  func_0x0001000ab368(uVar2,uVar3,0,0,FUN_1015270fc,puVar4);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101526fd8; end: 101526fdf;  */

void FUN_101526fd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ab060(0);
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x0001048c397c(0);
  func_0x0001048c3404();
  uVar2 = uVar1;
  func_0x0001048ba7a4();
  func_0x000107c61170(uVar1);
  uVar3 = 0;
  func_0x0001000aad1c(0);
  func_0x0001000aad3c();
  puVar4 = &UNK_1103d9090;
  func_0x000107c613fc(&UNK_1103d9090,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  func_0x000107c615f0(uVar5);
  func_0x000107c6157c(param_2);
  uVar1 = uVar2;
  func_0x0001000ab368(uVar2,uVar3,0,0,FUN_1015270fc,puVar4);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101526fe0; end: 101527003;  */

void FUN_101526fe0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101527004; end: 10152706f;  */

undefined1  [16] FUN_101527004(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  long lStack_28;
  
  func_0x00010485773c();
  if ((param_1 & 1) != 0) {
    func_0x000100083b20(&lStack_28);
    if (lStack_28 != 0) {
      puVar2 = &UNK_1103d9068;
      func_0x000107c613fc(&UNK_1103d9068,0x18,7);
      *(long *)(puVar2 + 0x10) = lStack_28;
      uVar1 = 0x101527158;
      goto LAB_101527060;
    }
  }
  uVar1 = 0;
  puVar2 = (undefined *)0x0;
LAB_101527060:
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 101527070; end: 1015270fb;  */

undefined ** FUN_101527070(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1015270fc; end: 101527123;  */

void FUN_1015270fc(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c4218c(*(undefined8 *)(unaff_x20 + 0x10));
  (*pcVar1)();
  return;
}



/* Entry: 101527124; end: 101527147;  */

undefined8 FUN_101527124(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 101527148; end: 101527187;  */

void FUN_101527148(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_appStateChanged__11259f230,0);
  return;
}



/* Entry: 101527188; end: 1015271ef;  */

undefined1  [16] FUN_101527188(void)

{
  func_0x000107c61168(PTR_PTR_1126d0370);
  func_0x000107c558d4();
  func_0x000107c61168(PTR_PTR_1126d0320);
  func_0x000107c5a36c();
  func_0x000107c61168(PTR_PTR_1126d0378);
  func_0x000107c57f40();
  func_0x000107c61168(PTR_PTR_1126d02e8);
  func_0x000107c50000();
  return ZEXT816(0);
}



/* Entry: 1015271f0; end: 1015272ab;  */

undefined ** FUN_1015271f0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1015272ac; end: 10152738f;  */

char * FUN_1015272ac(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcStack_38;
  
  func_0x000100083b20(&pcStack_38);
  uVar1 = 0x736f677261;
  func_0x000107c5fadc(0x736f677261,0xe500000000000000);
  pcVar2 = pcStack_38;
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(pcStack_38);
  uVar1 = 0;
  if (pcVar2 == (char *)0x0) {
    uVar3 = uVar1;
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    func_0x0001000e2834(0);
    pcVar2 = "";
    func_0x000107c60124("",0,2);
    func_0x000107c614ac(uVar1);
  }
  else {
    func_0x000107c61174();
  }
  return pcVar2;
}



/* Entry: 101527390; end: 101527397;  */

void FUN_101527390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101527398; end: 1015275e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101527398(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar2 = uStack_68;
  func_0x000107c5036c(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar3 = uStack_70;
  func_0x000107c5036c(uStack_70);
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&lStack_78);
  uVar4 = *(undefined8 *)(lStack_78 + _DAT_113074f80);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lStack_78);
  func_0x000100083b20(&lStack_80);
  uVar5 = *(undefined8 *)(lStack_80 + _DAT_113074f68);
  func_0x000107c61174(uVar5);
  func_0x000107c61170(lStack_80);
  func_0x000100083b20(&lStack_88);
  uVar6 = *(undefined8 *)(lStack_88 + _DAT_113074f90);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(lStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&lStack_a0);
  uVar7 = *(undefined8 *)(lStack_a0 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_a0);
  func_0x000100083b20(&lStack_a8);
  lVar8 = lStack_a8;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_a8);
  if (lVar8 != 0) {
    puVar9 = PTR_PTR_1126a76d8;
    func_0x000107c610f8();
    func_0x000107c45c34();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(uStack_98);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(lVar8);
    *param_1 = puVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015275e4);
  (*pcVar1)();
}



/* Entry: 1015275e4; end: 101527617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015275e4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  uVar2 = uStack_68;
  func_0x000107c5036c(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar3 = uStack_70;
  func_0x000107c5036c(uStack_70);
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&lStack_78);
  uVar4 = *(undefined8 *)(lStack_78 + _DAT_113074f80);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lStack_78);
  func_0x000100083b20(&lStack_80);
  uVar5 = *(undefined8 *)(lStack_80 + _DAT_113074f68);
  func_0x000107c61174(uVar5);
  func_0x000107c61170(lStack_80);
  func_0x000100083b20(&lStack_88);
  uVar6 = *(undefined8 *)(lStack_88 + _DAT_113074f90);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(lStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&lStack_a0);
  uVar7 = *(undefined8 *)(lStack_a0 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_a0);
  func_0x000100083b20(&lStack_a8);
  lVar8 = lStack_a8;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_a8);
  if (lVar8 != 0) {
    puVar9 = PTR_PTR_1126a76d8;
    func_0x000107c610f8();
    func_0x000107c45c34();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(uStack_98);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(lVar8);
    *param_1 = puVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015275e4);
  (*pcVar1)();
}



/* Entry: 101527618; end: 101527787;  */

void FUN_101527618(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar3 = lStack_48;
  lVar5 = lStack_48;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar5 != 0) {
    uVar2 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010efb0260);
    lVar3 = lVar5;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar2);
    FUN_1015277a4(param_3);
    lVar5 = 0;
    puVar6 = (undefined *)0x0;
    if ((int)lVar3 != 0) {
      puVar6 = PTR_PTR_1126c8ea8;
      func_0x000107c61168(PTR_PTR_1126c8ea8);
      func_0x000107c5a9f0();
      func_0x000107c61180();
      func_0x000100083b20(&lStack_48);
      lVar3 = lStack_48;
      func_0x000107c40114(lStack_48);
      func_0x000107c61180();
      func_0x000107c61170(lStack_48);
      lVar5 = lVar3;
      func_0x000107c5c734(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
    }
    puVar4 = PTR_PTR_1126a76e8;
    func_0x000107c610f8();
    func_0x000107c47df4();
    func_0x000107c615e8(param_3);
    func_0x000107c615e8(puVar6);
    func_0x000107c615e8(lVar5);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101527788);
  (*pcVar1)();
}



/* Entry: 101527788; end: 1015277a3;  */

void FUN_101527788(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined *puVar7;
  long lStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),uVar4,
                      *(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = lStack_48;
  lVar6 = lStack_48;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar6 != 0) {
    uVar2 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010efb0260);
    lVar3 = lVar6;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar2);
    FUN_1015277a4(uVar4);
    lVar6 = 0;
    puVar7 = (undefined *)0x0;
    if ((int)lVar3 != 0) {
      puVar7 = PTR_PTR_1126c8ea8;
      func_0x000107c61168(PTR_PTR_1126c8ea8);
      func_0x000107c5a9f0();
      func_0x000107c61180();
      func_0x000100083b20(&lStack_48);
      lVar3 = lStack_48;
      func_0x000107c40114(lStack_48);
      func_0x000107c61180();
      func_0x000107c61170(lStack_48);
      lVar6 = lVar3;
      func_0x000107c5c734(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
    }
    puVar5 = PTR_PTR_1126a76e8;
    func_0x000107c610f8();
    func_0x000107c47df4();
    func_0x000107c615e8(uVar4);
    func_0x000107c615e8(puVar7);
    func_0x000107c615e8(lVar6);
    *param_1 = puVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101527788);
  (*pcVar1)();
}



/* Entry: 1015277a4; end: 1015278cb;  */

undefined1 * FUN_1015277a4(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 *puStack_48;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&puStack_48);
  puVar2 = puStack_48;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(puStack_48);
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 == (undefined1 *)0x0) {
    func_0x0001010415e8(0);
    (**(code **)(lVar5 + 0x68))
              (puVar4,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar1);
    puVar2 = puVar4;
    func_0x000104188018(puVar4,0,0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  else {
    puVar2 = puVar3;
    func_0x000107c4b358(puVar3);
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
  }
  return puVar2;
}



/* Entry: 1015278cc; end: 1015278db;  */

undefined1  [16] FUN_1015278cc(void)

{
  return ZEXT816(0x1103d9828);
}



/* Entry: 1015278dc; end: 1015279d3;  */

long FUN_1015278dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x0001000ab060(0);
  func_0x000100079360(0);
  func_0x0001009a18b0(0);
  uVar1 = param_1;
  func_0x000107c6157c(param_1);
  func_0x0001009a18d0();
  uVar2 = uVar1;
  func_0x0001009a1930();
  func_0x000107c61170(uVar1);
  uVar3 = 0;
  func_0x0001000aad1c(0);
  func_0x0001000aad3c();
  func_0x000107c6157c(param_1);
  uVar1 = uVar2;
  func_0x0001000ab368(uVar2,uVar3,0,0,FUN_101527a40,param_1);
  func_0x000107c61578(param_1,2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
  return unaff_x20;
}



/* Entry: 1015279d4; end: 1015279f7;  */

void FUN_1015279d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1015279f8; end: 101527a3f;  */

undefined1  [16] FUN_1015279f8(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000107c5be4c(uStack_28);
  func_0x000107c615e8(uStack_28);
  return ZEXT816(0);
}



/* Entry: 101527a40; end: 101527a6f;  */

void FUN_101527a40(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c615e8(uStack_18);
  return;
}



/* Entry: 101527a70; end: 101527a97;  */

void FUN_101527a70(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c615e8(uStack_18);
  return;
}



/* Entry: 101527a98; end: 101527aab;  */

void FUN_101527a98(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c615e8(uStack_18);
  return;
}



/* Entry: 101527aac; end: 101527acf;  */

undefined8 FUN_101527aac(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 101527ad0; end: 101527b07;  */

void FUN_101527ad0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101527b08; end: 101527b0f;  */

void FUN_101527b08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101527b10; end: 101527bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101527b10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  puVar3 = PTR_PTR_1126b8050;
  func_0x000107c61168();
  func_0x000107c44394();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar4 = puVar3;
  func_0x000107c43e90();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 101527bf0; end: 101527c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101527bf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  puVar3 = PTR_PTR_1126b8050;
  func_0x000107c61168();
  func_0x000107c44394();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar4 = puVar3;
  func_0x000107c43e90();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 101527c08; end: 101528007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101527c08(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  func_0x000100083b20(alStack_70);
  lVar7 = alStack_70[0];
  uVar2 = *(undefined8 *)(alStack_70[0] + _DAT_113091ad8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lVar7);
  func_0x000100083b20(&lStack_78);
  lVar10 = lStack_78;
  func_0x000100083b20(&uStack_80);
  uVar6 = uStack_80;
  func_0x000100083b20(&lStack_88);
  lVar7 = lStack_88;
  lVar3 = lStack_88;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101528004);
    (*pcVar1)();
  }
  func_0x000100083b20(&lStack_90);
  lVar7 = lStack_90;
  lVar4 = lStack_90;
  func_0x000107c4d5c4(lStack_90);
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000100083b20(&uStack_98);
  uVar8 = uStack_98;
  func_0x000100083b20(&lStack_a0);
  lVar7 = lStack_a0;
  uVar5 = *(undefined8 *)(lStack_a0 + _DAT_11307c438);
  func_0x000107c61174(uVar5);
  func_0x000107c61170(lVar7);
  func_0x000105396410(uVar2,lVar10,uVar6,lVar3,lVar4,uVar8,uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(lVar10);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000100083b20(alStack_70);
  uVar6 = *(undefined8 *)(alStack_70[0] + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(alStack_70[0]);
  func_0x000100083b20(&lStack_78);
  uVar2 = *(undefined8 *)(lStack_78 + _DAT_113091b70);
  func_0x000107c615f0();
  func_0x000107c61170(lStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&lStack_88);
  func_0x000100083b20(&lStack_90);
  lVar7 = lStack_90;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(lStack_90);
  if (lVar7 != 0) {
    func_0x000100083b20(&uStack_98);
    uVar8 = uStack_98;
    func_0x000107c4d5c4();
    func_0x000107c61180();
    func_0x000107c61170(uStack_98);
    func_0x000100083b20(&lStack_a0);
    func_0x000100083b20(&lStack_a8);
    uVar9 = *(undefined8 *)(lStack_a8 + _DAT_11307c438);
    func_0x000107c61174();
    func_0x000107c61170();
    lVar10 = lStack_a8;
    func_0x0001000ad7c4();
    func_0x000100083b20(&lStack_b0);
    uVar11 = *(undefined8 *)(lStack_b0 + _DAT_113083868);
    func_0x000107c61174();
    func_0x000107c61170(lStack_b0);
    func_0x000100083b20(&uStack_b8);
    uVar5 = uStack_b8;
    func_0x000107c3ef00();
    func_0x000107c61180();
    func_0x000107c61170(uStack_b8);
    uVar12 = uVar6;
    func_0x000105396078(uVar6,uVar2,uStack_80,lStack_88,lVar7,uVar8,lStack_a0,uVar9,lVar10,uVar11,
                        uVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(uVar2);
    func_0x000107c615e8(uStack_80);
    func_0x000107c615e8(lStack_88);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lStack_a0);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar5);
    *param_1 = uVar12;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101528008);
  (*pcVar1)();
}



/* Entry: 101528008; end: 101528043;  */

void FUN_101528008(void)

{
  long unaff_x20;
  
  FUN_101527c08(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101528044; end: 101528053;  */

undefined1  [16] FUN_101528044(void)

{
  return ZEXT816(0x1103d9a58);
}



/* Entry: 101528054; end: 1015280e7;  */

void FUN_101528054(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000ad7c4();
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3e270(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = param_2;
  func_0x000105395fc8(param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1015280e8; end: 1015280ff;  */

void FUN_1015280e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c3e270(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar3 = uVar1;
  func_0x000105395fc8(uVar1,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 101528100; end: 10152814b;  */

void FUN_101528100(undefined8 param_1)

{
  func_0x0001000285a8(0x112db09d0,&UNK_10d95a9c0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10152814c,param_1);
  return;
}



/* Entry: 10152814c; end: 1015281cb;  */

void FUN_10152814c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126a76f0;
    func_0x000107c610f8();
    func_0x000107c45db0();
    func_0x000107c615e8(lVar2);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015281cc);
  (*pcVar1)();
}



/* Entry: 1015281cc; end: 1015281eb;  */

undefined1  [16] FUN_1015281cc(void)

{
  return ZEXT816(0x1103d9b40);
}



/* Entry: 1015281ec; end: 10152823b;  */

void FUN_1015281ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1015293f0();
  func_0x000107c610f8();
  uVar1 = param_2;
  func_0x000107c6157c();
  FUN_101529224();
  func_0x000107c61574(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10152823c; end: 101528243;  */

void FUN_10152823c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_1015293f0();
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_101529224();
  func_0x000107c61574();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101528244; end: 101528283;  */

undefined8 FUN_101528244(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_101529224(param_1);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 101528284; end: 101528387;  */

void FUN_101528284(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_1);
    func_0x000107c4d664(param_4);
  }
  else {
    if (param_3 == 0) {
      func_0x000107c615f0();
    }
    else {
      func_0x000107c615f0();
      func_0x000107c4bc9c();
      func_0x000107c61180();
      if (param_3 != 0) {
        uVar1 = param_3;
        func_0x000107c3ebcc();
        func_0x000107c61170(param_3);
        if ((uVar1 & 1) != 0) {
          func_0x000107c42c04(param_2);
        }
      }
    }
    lVar3 = param_2;
    func_0x000107c5dc0c(param_2);
    func_0x000107c61180();
    func_0x000107c49804();
    func_0x000107c61170(lVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c4d664(param_4);
    func_0x000107c615e8(param_2);
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 101528388; end: 1015283cf;  */

void FUN_101528388(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1015283d0; end: 1015283eb; -[_TtC14ValdiCOFStores15ValdiCOFRxStore getIntWithConfigKey:defaultValue:opts:] */

void FUN_1015283d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  FUN_1015285c8(param_1,param_4,param_3,param_5,&UNK_1103d9c80,FUN_101529368,&UNK_1103d9c98);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1015283ec; end: 1015284ef;  */

void FUN_1015283ec(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_1);
    func_0x000107c4d664(param_4);
  }
  else {
    if (param_3 == 0) {
      func_0x000107c615f0();
    }
    else {
      func_0x000107c615f0();
      func_0x000107c4bc9c();
      func_0x000107c61180();
      if (param_3 != 0) {
        uVar1 = param_3;
        func_0x000107c3ebcc();
        func_0x000107c61170(param_3);
        if ((uVar1 & 1) != 0) {
          func_0x000107c42c04(param_2);
        }
      }
    }
    lVar3 = param_2;
    func_0x000107c5dc0c(param_2);
    func_0x000107c61180();
    func_0x000107c4c0c8();
    func_0x000107c61170(lVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c47580();
    func_0x000107c4d664(param_4);
    func_0x000107c615e8(param_2);
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1015284f0; end: 10152850b; -[_TtC14ValdiCOFStores15ValdiCOFRxStore getLongWithConfigKey:defaultValue:opts:] */

void FUN_1015284f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  FUN_1015285c8(param_1,param_4,param_3,param_5,&UNK_1103d9cd0,0x101529394,&UNK_1103d9ce8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10152850c; end: 1015285c7;  */

void FUN_10152850c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  FUN_1015285c8(param_1,param_4,param_3,param_5,param_6,param_7,param_8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1015285c8; end: 10152872f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1015285c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  ppuVar3 = &puStack_a0;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112db09e8);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c613fc(param_5,0x30,7);
  *(undefined8 *)(param_5 + 0x10) = param_4;
  *(undefined **)(param_5 + 0x18) = puVar2;
  *(undefined8 *)(param_5 + 0x20) = param_1;
  *(long *)(param_5 + 0x28) = lVar1;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101528388;
  uStack_88 = param_7;
  uStack_80 = param_6;
  lStack_78 = param_5;
  func_0x000107c60bc4(&puStack_a0);
  lVar1 = lStack_78;
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c61574(lVar1);
  func_0x000107c4c26c(uVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_2);
  puVar4 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar4;
}



/* Entry: 101528730; end: 101528833;  */

void FUN_101528730(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_1);
    func_0x000107c4d664(param_4);
  }
  else {
    if (param_3 == 0) {
      func_0x000107c615f0();
    }
    else {
      func_0x000107c615f0();
      func_0x000107c4bc9c();
      func_0x000107c61180();
      if (param_3 != 0) {
        uVar1 = param_3;
        func_0x000107c3ebcc();
        func_0x000107c61170(param_3);
        if ((uVar1 & 1) != 0) {
          func_0x000107c42c04(param_2);
        }
      }
    }
    lVar3 = param_2;
    func_0x000107c5dc0c(param_2);
    func_0x000107c61180();
    func_0x000107c436dc();
    func_0x000107c61170(lVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46978(param_1);
    func_0x000107c4d664(param_4);
    func_0x000107c615e8(param_2);
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 101528834; end: 10152884f; -[_TtC14ValdiCOFStores15ValdiCOFRxStore getFloatWithConfigKey:defaultValue:opts:] */

void FUN_101528834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  FUN_1015285c8(param_1,param_4,param_3,param_5,&UNK_1103d9d20,0x1015293a4,&UNK_1103d9d38);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 101528850; end: 1015289af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101528850(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112db09e8);
  func_0x000107c5fadc(param_1,param_2);
  puVar3 = &UNK_1103d9d70;
  func_0x000107c613fc(&UNK_1103d9d70,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  puVar3[0x20] = param_3;
  *(long *)(puVar3 + 0x28) = lVar1;
  uStack_60 = 0x1015293b4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101528388;
  puStack_68 = &UNK_1103d9d88;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c4c26c(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  puVar3 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1015289b0; end: 101528aab;  */

void FUN_1015289b0(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4d664(param_3);
  }
  else {
    if (param_2 == 0) {
      func_0x000107c615f0();
    }
    else {
      func_0x000107c615f0();
      func_0x000107c4bc9c();
      func_0x000107c61180();
      if (param_2 != 0) {
        uVar1 = param_2;
        func_0x000107c3ebcc();
        func_0x000107c61170(param_2);
        if ((uVar1 & 1) != 0) {
          func_0x000107c42c04(param_1);
        }
      }
    }
    lVar3 = param_1;
    func_0x000107c5dc0c(param_1);
    func_0x000107c61180();
    func_0x000107c3ebcc();
    func_0x000107c61170(lVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4d664(param_3);
    func_0x000107c615e8(param_1);
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 101528aac; end: 101528b3f; -[_TtC14ValdiCOFStores15ValdiCOFRxStore getBoolWithConfigKey:defaultValue:opts:] */

void FUN_101528aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101528850(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101528b40; end: 101528cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101528b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112db09e8);
  func_0x000107c5fadc(param_1,param_2);
  puVar3 = &UNK_1103d9dc0;
  func_0x000107c613fc(&UNK_1103d9dc0,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(long *)(puVar3 + 0x30) = lVar1;
  uStack_70 = 0x1015293c4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101528388;
  puStack_78 = &UNK_1103d9dd8;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar3);
  func_0x000107c4c26c(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  puVar3 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101528cb4; end: 101528d9b;  */

void FUN_101528cb4(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c4d664(param_3);
  }
  else {
    if (param_2 == 0) {
      func_0x000107c615f0();
    }
    else {
      func_0x000107c615f0();
      func_0x000107c4bc9c();
      func_0x000107c61180();
      if (param_2 != 0) {
        uVar2 = param_2;
        func_0x000107c3ebcc();
        func_0x000107c61170(param_2);
        if ((uVar2 & 1) != 0) {
          func_0x000107c42c04(param_1);
        }
      }
    }
    lVar3 = param_1;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    param_4 = lVar3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101528d9c);
      (*pcVar1)();
    }
    func_0x000107c4d664(param_3);
    func_0x000107c615e8(param_1);
  }
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 101528d9c; end: 101528fab; -[_TtC14ValdiCOFStores15ValdiCOFRxStore getStringWithConfigKey:defaultValue:opts:] */

void FUN_101528d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101528b40(param_3,param_2,param_4,uVar2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101528fac; end: 101529103;  */

void FUN_101528fac(undefined *param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126af7d0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar4 = puVar3;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c453e4();
    }
    func_0x000107c4d664(param_3);
    func_0x000107c61170(puVar4);
  }
  else {
    if (param_2 == 0) {
      func_0x000107c615f0();
    }
    else {
      func_0x000107c615f0();
      func_0x000107c4bc9c();
      func_0x000107c61180();
      if (param_2 != 0) {
        uVar2 = param_2;
        func_0x000107c3ebcc();
        func_0x000107c61170(param_2);
        if ((uVar2 & 1) != 0) {
          func_0x000107c42c04(param_1);
        }
      }
    }
    puVar3 = param_1;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3dd54();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101529104);
      (*pcVar1)();
    }
    puVar3 = puVar4;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c453e4();
    }
    func_0x000107c4d664(param_3);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 101529104; end: 10152918b; -[_TtC14ValdiCOFStores15ValdiCOFRxStore getProtoBytesWithConfigKey:opts:] */

void FUN_101529104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000101528e54(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10152918c; end: 1015291eb; -[_TtC14ValdiCOFStores15ValdiCOFRxStore init] */

void FUN_10152918c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCOFStores.ValdiCOFRxStore",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015291b8);
  (*pcVar1)();
}



/* Entry: 1015291ec; end: 101529223; -[_TtC14ValdiCOFStores15ValdiCOFRxStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015291ec(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112db09e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112db09f0));
  return;
}



/* Entry: 101529224; end: 101529367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101529224(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_58;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000100083b20(&uStack_58);
  *(undefined8 *)(unaff_x20 + _DAT_112db09e8) = uStack_58;
  (**(code **)(lVar4 + 0x68))
            (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efb02b0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + _DAT_112db09f0) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffff98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101529368; end: 1015293ef;  */

void FUN_101529368(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570,uVar2,uVar1,
                        *(undefined8 *)(unaff_x20 + 0x28));
    func_0x000107c466c0(uVar6);
    func_0x000107c4d664(uVar1);
  }
  else {
    if (uVar2 == 0) {
      func_0x000107c615f0();
    }
    else {
      func_0x000107c615f0();
      func_0x000107c4bc9c();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c3ebcc();
        func_0x000107c61170(uVar2);
        if ((uVar3 & 1) != 0) {
          func_0x000107c42c04(param_1);
        }
      }
    }
    lVar5 = param_1;
    func_0x000107c5dc0c(param_1);
    func_0x000107c61180();
    func_0x000107c49804();
    func_0x000107c61170(lVar5);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c4d664(uVar1);
    func_0x000107c615e8(param_1);
  }
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1015293f0; end: 10152940f;  */

void FUN_1015293f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127dfc10);
  return;
}


